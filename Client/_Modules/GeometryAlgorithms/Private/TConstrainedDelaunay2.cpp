// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 20

// Add<float> @ 1494de390

void __thiscall
UE::Geometry::TConstrainedDelaunay2<float>::Add<float>
          (TConstrainedDelaunay2<float> *this,TGeneralPolygon2<float> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  Add<float>(this,&param_1->Outer,false);
  iVar1 = (param_1->Holes).ArrayNum;
  uVar5 = 0;
  if (0 < iVar1) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (param_1->Holes).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      Add<float>(this,(TPolygon2<float> *)((param_1->Holes).AllocatorInstance.Data + lVar6),true);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < iVar1);
  }
  return;
}

// Add<float> @ 1494de460

void __thiscall
UE::Geometry::TConstrainedDelaunay2<float>::Add<float>
          (TConstrainedDelaunay2<float> *this,TPolygon2<float> *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  undefined1 local_res8 [8];
  int local_48;
  int iStack_44;
  undefined8 local_40;
  
  iVar1 = (param_1->Vertices).ArrayNum;
  iVar7 = (this->Vertices).ArrayNum;
  pFVar8 = (param_1->Vertices).AllocatorInstance.Data;
  iVar10 = iVar7 + iVar1;
  pFVar3 = pFVar8 + (longlong)iVar1 * 8;
  while( true ) {
    if ((param_1->Vertices).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector2<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar3) break;
    local_40 = *(undefined8 *)pFVar8;
    pFVar2 = (this->Vertices).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_40) &&
        ((FScriptContainerElement *)&local_40 < pFVar2 + (longlong)(this->Vertices).ArrayMax * 8))
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
    iVar6 = (this->Vertices).ArrayNum;
    if (iVar6 == (this->Vertices).ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)this,&(this->Vertices).ArrayMax);
    }
    pFVar8 = pFVar8 + 8;
    (this->Vertices).ArrayNum = iVar6 + 1;
    *(undefined8 *)((this->Vertices).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_40;
  }
  pTVar9 = &this->Edges + param_2;
  local_48 = iVar10 + -1;
  while( true ) {
    iVar1 = iVar7;
    if (iVar10 <= iVar1) {
      return;
    }
    pFVar3 = (pTVar9->AllocatorInstance).Data;
    iStack_44 = iVar1;
    if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)pTVar9->ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar7 = pTVar9->ArrayNum;
    if (iVar7 == pTVar9->ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
    }
    pTVar9->ArrayNum = iVar7 + 1;
    *(ulonglong *)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         CONCAT44(iStack_44,local_48);
    iVar7 = iVar1 + 1;
    local_48 = iVar1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Add<double> @ 1494de650

void __thiscall
UE::Geometry::TConstrainedDelaunay2<double>::Add<double>
          (TConstrainedDelaunay2<double> *this,TGeneralPolygon2<double> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  Add<double>(this,&param_1->Outer,false);
  iVar1 = (param_1->Holes).ArrayNum;
  uVar5 = 0;
  if (0 < iVar1) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (param_1->Holes).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      Add<double>(this,(TPolygon2<double> *)((param_1->Holes).AllocatorInstance.Data + lVar6),true);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < iVar1);
  }
  return;
}

// Add<double> @ 1494de720

void __thiscall
UE::Geometry::TConstrainedDelaunay2<double>::Add<double>
          (TConstrainedDelaunay2<double> *this,TPolygon2<double> *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  int local_58;
  int iStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  iVar1 = (param_1->Vertices).ArrayNum;
  iVar6 = (this->Vertices).ArrayNum;
  pFVar7 = (param_1->Vertices).AllocatorInstance.Data;
  pFVar10 = pFVar7 + (longlong)iVar1 * 0x10;
  iVar9 = iVar6 + iVar1;
  while( true ) {
    if ((param_1->Vertices).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar10) break;
    local_50 = *(undefined8 *)pFVar7;
    uStack_48 = *(undefined8 *)(pFVar7 + 8);
    pFVar2 = (this->Vertices).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 < pFVar2 + (longlong)(this->Vertices).ArrayMax * 0x10)
        ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->Vertices).ArrayNum;
    if (iVar5 == (this->Vertices).ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,&(this->Vertices).ArrayMax);
    }
    (this->Vertices).ArrayNum = iVar5 + 1;
    pFVar7 = pFVar7 + 0x10;
    pFVar2 = (this->Vertices).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar2 = local_50;
    *(undefined8 *)(pFVar2 + 8) = uStack_48;
  }
  pTVar8 = &this->Edges + param_2;
  local_58 = iVar9 + -1;
  while( true ) {
    iVar1 = iVar6;
    if (iVar9 <= iVar1) {
      return;
    }
    pFVar7 = (pTVar8->AllocatorInstance).Data;
    iStack_54 = iVar1;
    if (((pFVar7 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < pFVar7 + (longlong)pTVar8->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar6 = pTVar8->ArrayNum;
    if (iVar6 == pTVar8->ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
    }
    pTVar8->ArrayNum = iVar6 + 1;
    *(ulonglong *)((pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         CONCAT44(iStack_54,local_58);
    iVar6 = iVar1 + 1;
    local_58 = iVar1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// TConstrainedDelaunay2<float> @ 1494fedb0

TConstrainedDelaunay2<float> * __thiscall
UE::Geometry::TConstrainedDelaunay2<float>::TConstrainedDelaunay2<float>
          (TConstrainedDelaunay2<float> *this)

{
  this->bOrientedEdges = true;
  this->bOutputCCW = false;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  (this->HoleEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HoleEdges).ArrayNum = 0;
  (this->HoleEdges).ArrayMax = 0;
  this->bSplitBowties = false;
  this->FillRule = Odd;
  (this->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).ArrayNum = 0;
  (this->Triangles).ArrayMax = 0;
  this->AddedVerticesStartIndex = -1;
  return this;
}

// TConstrainedDelaunay2<double> @ 1494fedf0

TConstrainedDelaunay2<double> * __thiscall
UE::Geometry::TConstrainedDelaunay2<double>::TConstrainedDelaunay2<double>
          (TConstrainedDelaunay2<double> *this)

{
  this->bOrientedEdges = true;
  this->bOutputCCW = false;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  (this->HoleEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HoleEdges).ArrayNum = 0;
  (this->HoleEdges).ArrayMax = 0;
  this->bSplitBowties = false;
  this->FillRule = Odd;
  (this->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).ArrayNum = 0;
  (this->Triangles).ArrayMax = 0;
  this->AddedVerticesStartIndex = -1;
  return this;
}

// ~TConstrainedDelaunay2<float> @ 149501360

void __thiscall
UE::Geometry::TConstrainedDelaunay2<float>::~TConstrainedDelaunay2<float>
          (TConstrainedDelaunay2<float> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HoleEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Edges).AllocatorInstance.Data;
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

// ~TConstrainedDelaunay2<double> @ 1495013c0

void __thiscall
UE::Geometry::TConstrainedDelaunay2<double>::~TConstrainedDelaunay2<double>
          (TConstrainedDelaunay2<double> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HoleEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Edges).AllocatorInstance.Data;
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

// operator() @ 1495041d0

void __thiscall
`UE::Geometry::TConstrainedDelaunay2<float>::Triangulate'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined1 uVar7;
  
  plVar1 = *(longlong **)((longlong)this + 0x10);
  puVar2 = *(undefined8 **)((longlong)this + 8);
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  cVar5 = (*(code *)*puVar2)(puVar2[1],*(undefined8 *)this,*plVar1 + (longlong)param_1 * 0xc);
  plVar1 = *(longlong **)((longlong)this + 0x18);
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar7 = 0xff;
  if (cVar5 != '\0') {
    uVar7 = 1;
  }
  *(undefined1 *)((longlong)param_1 + *plVar1) = uVar7;
  return;
}

// operator() @ 1495042e0

void __thiscall
`UE::Geometry::TConstrainedDelaunay2<double>::Triangulate'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined1 uVar7;
  
  plVar1 = *(longlong **)((longlong)this + 0x10);
  puVar2 = *(undefined8 **)((longlong)this + 8);
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  cVar5 = (*(code *)*puVar2)(puVar2[1],*(undefined8 *)this,*plVar1 + (longlong)param_1 * 0xc);
  plVar1 = *(longlong **)((longlong)this + 0x18);
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar7 = 0xff;
  if (cVar5 != '\0') {
    uVar7 = 1;
  }
  *(undefined1 *)((longlong)param_1 + *plVar1) = uVar7;
  return;
}

// AddWithIntersectionResolution @ 14950bb20

bool __thiscall
UE::Geometry::TConstrainedDelaunay2<float>::AddWithIntersectionResolution
          (TConstrainedDelaunay2<float> *this,TGeneralPolygon2<float> *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res18 [8];
  undefined1 local_res20;
  ClipType local_d8 [4];
  TGeneralPolygon2<float> local_c8;
  TGeneralPolygon2<float> local_a0;
  TArray<UE::Geometry::TGeneralPolygon2<float>,TSizedDefaultAllocator<32>_> local_78;
  FScriptContainerElement *local_68;
  undefined1 local_50;
  
  TGeneralPolygon2<float>::TGeneralPolygon2<float>(&local_c8,param_1);
  local_a0.bOuterIsCW = (bool)local_50;
  local_a0.Outer.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Outer.Vertices.ArrayNum = 0;
  local_a0.Outer.Vertices.ArrayMax = 0;
  local_a0.Holes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Holes.ArrayNum = 0;
  local_a0.Holes.ArrayMax = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_d8[0] = Union;
  local_res20 = Geometry::Private::Clip<float>(local_d8,&local_c8,&local_a0,&local_78);
  if ((bool)local_res20) {
    iVar3 = local_78.ArrayNum;
    pFVar10 = local_78.AllocatorInstance.Data + 0x20;
    local_68 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x28;
    while( true ) {
      pFVar4 = local_68;
      if (local_78.ArrayNum != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::TGeneralPolygon2<float>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar10 + -0x20 == pFVar4) break;
      Add<float>(this,(TPolygon2<float> *)(pFVar10 + -0x20),false);
      iVar1 = *(int *)pFVar10;
      uVar8 = 0;
      if (0 < iVar1) {
        lVar9 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar8 < *(int *)pFVar10) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          Add<float>(this,(TPolygon2<float> *)
                          ((((TArray<UE::Geometry::TPolygon2<float>,TSizedDefaultAllocator<32>_> *)
                            (pFVar10 + -8))->AllocatorInstance).Data + lVar9),true);
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x10;
        } while ((int)uVar8 < iVar1);
      }
      pFVar10 = pFVar10 + 0x28;
    }
  }
  uVar6 = local_res20;
  DestructItems<UE::Geometry::TGeneralPolygon2<float>,int>
            ((TGeneralPolygon2<float> *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((TGeneralPolygon2<float> *)local_78.AllocatorInstance.Data != (TGeneralPolygon2<float> *)0x0)
  {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::TPolygon2<float>,int>
            ((TPolygon2<float> *)local_a0.Holes.AllocatorInstance.Data,local_a0.Holes.ArrayNum);
  if (local_a0.Holes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Holes.AllocatorInstance.Data);
  }
  if (local_a0.Outer.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Outer.Vertices.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::TPolygon2<float>,int>
            ((TPolygon2<float> *)local_c8.Holes.AllocatorInstance.Data,local_c8.Holes.ArrayNum);
  if (local_c8.Holes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Holes.AllocatorInstance.Data);
  }
  if (local_c8.Outer.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Outer.Vertices.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::TPolygon2<float>,int>((TPolygon2<float> *)0x0,0);
  return (bool)uVar6;
}

// AddWithIntersectionResolution @ 14950bd40

bool __thiscall
UE::Geometry::TConstrainedDelaunay2<float>::AddWithIntersectionResolution
          (TConstrainedDelaunay2<float> *this,TPolygon2<float> *param_1)

{
  bool bVar1;
  TGeneralPolygon2<float> local_38;
  
  TPolygon2<float>::TPolygon2<float>(&local_38.Outer,param_1);
  local_38.Holes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Holes.ArrayNum = 0;
  local_38.Holes.ArrayMax = 0;
  local_38.bOuterIsCW = TPolygon2<float>::IsClockwise(param_1);
  bVar1 = AddWithIntersectionResolution(this,&local_38);
  DestructItems<UE::Geometry::TPolygon2<float>,int>
            ((TPolygon2<float> *)local_38.Holes.AllocatorInstance.Data,local_38.Holes.ArrayNum);
  if (local_38.Holes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Holes.AllocatorInstance.Data);
  }
  if (local_38.Outer.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Outer.Vertices.AllocatorInstance.Data);
  }
  return bVar1;
}

// AddWithIntersectionResolution @ 14950bdd0

bool __thiscall
UE::Geometry::TConstrainedDelaunay2<double>::AddWithIntersectionResolution
          (TConstrainedDelaunay2<double> *this,TGeneralPolygon2<double> *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res18 [8];
  undefined1 local_res20;
  ClipType local_d8 [4];
  TGeneralPolygon2<double> local_c8;
  TGeneralPolygon2<double> local_a0;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> local_78;
  FScriptContainerElement *local_68;
  undefined1 local_50;
  
  TGeneralPolygon2<double>::TGeneralPolygon2<double>(&local_c8,param_1);
  local_a0.bOuterIsCW = (bool)local_50;
  local_a0.Outer.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Outer.Vertices.ArrayNum = 0;
  local_a0.Outer.Vertices.ArrayMax = 0;
  local_a0.Holes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Holes.ArrayNum = 0;
  local_a0.Holes.ArrayMax = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_d8[0] = Union;
  local_res20 = Geometry::Private::Clip<double>(local_d8,&local_c8,&local_a0,&local_78);
  if ((bool)local_res20) {
    iVar3 = local_78.ArrayNum;
    pFVar10 = local_78.AllocatorInstance.Data + 0x20;
    local_68 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x28;
    while( true ) {
      pFVar4 = local_68;
      if (local_78.ArrayNum != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::TGeneralPolygon2<double>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar10 + -0x20 == pFVar4) break;
      Add<double>(this,(TPolygon2<double> *)(pFVar10 + -0x20),false);
      iVar1 = *(int *)pFVar10;
      uVar8 = 0;
      if (0 < iVar1) {
        lVar9 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar8 < *(int *)pFVar10) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          Add<double>(this,(TPolygon2<double> *)
                           ((((TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *
                              )(pFVar10 + -8))->AllocatorInstance).Data + lVar9),true);
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x10;
        } while ((int)uVar8 < iVar1);
      }
      pFVar10 = pFVar10 + 0x28;
    }
  }
  uVar6 = local_res20;
  DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
            ((TGeneralPolygon2<double> *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((TGeneralPolygon2<double> *)local_78.AllocatorInstance.Data != (TGeneralPolygon2<double> *)0x0
     ) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::TPolygon2<double>,int>
            ((TPolygon2<double> *)local_a0.Holes.AllocatorInstance.Data,local_a0.Holes.ArrayNum);
  if (local_a0.Holes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Holes.AllocatorInstance.Data);
  }
  if (local_a0.Outer.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Outer.Vertices.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::TPolygon2<double>,int>
            ((TPolygon2<double> *)local_c8.Holes.AllocatorInstance.Data,local_c8.Holes.ArrayNum);
  if (local_c8.Holes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Holes.AllocatorInstance.Data);
  }
  if (local_c8.Outer.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Outer.Vertices.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::TPolygon2<double>,int>((TPolygon2<double> *)0x0,0);
  return (bool)uVar6;
}

// AddWithIntersectionResolution @ 14950bff0

bool __thiscall
UE::Geometry::TConstrainedDelaunay2<double>::AddWithIntersectionResolution
          (TConstrainedDelaunay2<double> *this,TPolygon2<double> *param_1)

{
  bool bVar1;
  TGeneralPolygon2<double> local_38;
  
  TPolygon2<double>::TPolygon2<double>(&local_38.Outer,param_1);
  local_38.Holes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Holes.ArrayNum = 0;
  local_38.Holes.ArrayMax = 0;
  local_38.bOuterIsCW = TPolygon2<double>::IsClockwise(param_1);
  bVar1 = AddWithIntersectionResolution(this,&local_38);
  DestructItems<UE::Geometry::TPolygon2<double>,int>
            ((TPolygon2<double> *)local_38.Holes.AllocatorInstance.Data,local_38.Holes.ArrayNum);
  if (local_38.Holes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Holes.AllocatorInstance.Data);
  }
  if (local_38.Outer.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Outer.Vertices.AllocatorInstance.Data);
  }
  return bVar1;
}

// ClassifyFromRule @ 14950ee60

bool __thiscall
UE::Geometry::TConstrainedDelaunay2<float>::ClassifyFromRule
          (TConstrainedDelaunay2<float> *this,int param_1)

{
  EFillRule EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar1 = this->FillRule;
  if (EVar1 == Odd) {
    return (bool)((byte)param_1 & 1);
  }
  if (EVar1 == NonZero) {
    return param_1 != 0;
  }
  if (EVar1 == Positive) {
    return 0 < param_1;
  }
  if (EVar1 != Negative) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Public\\ConstrainedDelaunay2.h"
                       ,0x42,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    return false;
  }
  return SUB41((uint)param_1 >> 0x1f,0);
}

// ClassifyFromRule @ 14950eee0

bool __thiscall
UE::Geometry::TConstrainedDelaunay2<double>::ClassifyFromRule
          (TConstrainedDelaunay2<double> *this,int param_1)

{
  EFillRule EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar1 = this->FillRule;
  if (EVar1 == Odd) {
    return (bool)((byte)param_1 & 1);
  }
  if (EVar1 == NonZero) {
    return param_1 != 0;
  }
  if (EVar1 == Positive) {
    return 0 < param_1;
  }
  if (EVar1 != Negative) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Public\\ConstrainedDelaunay2.h"
                       ,0x42,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    return false;
  }
  return SUB41((uint)param_1 >> 0x1f,0);
}

// Triangulate @ 1495288c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::Geometry::TConstrainedDelaunay2<float>::Triangulate
          (TConstrainedDelaunay2<float> *this,
          TFunctionRef<bool___cdecl(TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_&,UE::Geometry::FIndex3i_const_&)>
          *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  code *pcVar6;
  atomic<unsigned_int> aVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  atomic<unsigned_int> aVar17;
  int iVar18;
  ETaskTag EVar19;
  uint uVar20;
  TArrayView<UE::Geometry::FIndex2i_const_,int> *pTVar21;
  TArrayView<UE::Math::TVector2<float>_const_,int> *pTVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_ParallelFor> FVar24;
  void *this_00;
  FParallelForData *pFVar25;
  bool *pbVar26;
  atomic<int> aVar27;
  longlong lVar28;
  FName FVar29;
  ForAnyElementType FVar30;
  int iVar31;
  ulonglong uVar32;
  int iVar33;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar34;
  ulonglong uVar35;
  bool local_res18;
  undefined4 local_res20 [2];
  undefined1 local_248 [8];
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_240;
  FEventRef local_230;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_228;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_218;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  local_208;
  int local_200;
  char local_1fc;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> local_1f8;
  FColor_u_0 local_1e8 [2];
  int local_1e0 [2];
  int local_1d8 [2];
  FDelaunay2 local_1d0;
  FName local_1b0;
  int iStack_1a8;
  undefined4 uStack_1a4;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_1a0;
  FName local_190;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  local_188;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_180;
  code *local_178;
  TConstrainedDelaunay2<float> **local_170;
  FName local_168;
  TArrayView<std::nullptr_t,int> local_158;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_138;
  int *local_130;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *local_128;
  undefined4 *local_120;
  TConstrainedDelaunay2<float> *local_118;
  TFunctionRef<bool___cdecl(TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_&,UE::Geometry::FIndex3i_const_&)>
  *local_110;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_108;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *local_100;
  FName local_f8 [2];
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_e8;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_d8;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_c8;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_b8;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_a8;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_98;
  undefined4 local_7c;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_78;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_68;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_58;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_48;
  
  pTVar34 = &this->Triangles;
  bVar9 = false;
  bVar15 = false;
  piVar1 = &(this->Triangles).ArrayMax;
  (this->Triangles).ArrayNum = 0;
  local_180 = pTVar34;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&pTVar34->AllocatorInstance,0,piVar1);
  }
  iVar5 = (this->Vertices).ArrayNum;
  uStack_1a4 = local_7c;
  local_148 = (this->Vertices).AllocatorInstance.Data;
  local_1d0.RandomStream.InitialSeed = 0;
  local_1d0.RandomStream.Seed = 0;
  local_1d0.bKeepFastEdgeAdjacencyData = false;
  local_1d0.bValidateEdges = true;
  local_1d0.Connectivity.Ptr = (FDelaunay2Connectivity *)0x0;
  local_1d0.bIsConstrained = false;
  local_1d0.Result = NotComputed;
  local_1d0.bAutomaticallyFixEdgesToDuplicateVertices = true;
  local_1b0.ComparisonIndex.Value = 0;
  local_1b0.Number = 0;
  iStack_1a8 = 0;
  if ((iVar5 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  local_e8._12_4_ = uStack_1a4;
  local_e8.ArrayNum = iStack_1a8;
  local_d8._12_4_ = uStack_13c;
  local_d8.ArrayNum = iVar5;
  local_e8.DataPtr = (FIndex2i *)local_1b0;
  local_d8.DataPtr = (TVector2<float> *)local_148;
  iStack_140 = iVar5;
  bVar10 = FDelaunay2::Triangulate(&local_1d0,&local_d8,&local_e8);
  if (!bVar10) {
    if (local_1d0.Connectivity.Ptr != (FDelaunay2Connectivity *)0x0) {
      (**(code **)&local_1d0.Connectivity.Ptr[-1].DuplicateVertices.field_0x40)
                (&local_1d0.Connectivity.Ptr[-1].DuplicateVertices.field_0x40);
    }
    return false;
  }
  local_1d0.bKeepFastEdgeAdjacencyData = true;
  pTVar21 = TArrayView<UE::Geometry::FIndex2i_const_,int>::
            TArrayView<UE::Geometry::FIndex2i_const_,int><TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_>
                      (&local_78,&this->Edges);
  local_c8.DataPtr = pTVar21->DataPtr;
  local_c8.ArrayNum = pTVar21->ArrayNum;
  local_c8._12_4_ = *(undefined4 *)&pTVar21->field_0xc;
  pTVar22 = TArrayView<UE::Math::TVector2<float>_const_,int>::
            TArrayView<UE::Math::TVector2<float>_const_,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                      (&local_68,&this->Vertices);
  local_b8.DataPtr = pTVar22->DataPtr;
  local_b8.ArrayNum = pTVar22->ArrayNum;
  local_b8._12_4_ = *(undefined4 *)&pTVar22->field_0xc;
  bVar10 = FDelaunay2::ConstrainEdges(&local_1d0,&local_b8,&local_c8);
  pTVar21 = TArrayView<UE::Geometry::FIndex2i_const_,int>::
            TArrayView<UE::Geometry::FIndex2i_const_,int><TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_>
                      (&local_58,&this->HoleEdges);
  local_a8.DataPtr = pTVar21->DataPtr;
  local_a8.ArrayNum = pTVar21->ArrayNum;
  local_a8._12_4_ = *(undefined4 *)&pTVar21->field_0xc;
  pTVar22 = TArrayView<UE::Math::TVector2<float>_const_,int>::
            TArrayView<UE::Math::TVector2<float>_const_,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                      (&local_48,&this->Vertices);
  local_98.DataPtr = pTVar22->DataPtr;
  local_98.ArrayNum = pTVar22->ArrayNum;
  local_98._12_4_ = *(undefined4 *)&pTVar22->field_0xc;
  bVar12 = FDelaunay2::ConstrainEdges(&local_1d0,&local_98,&local_a8);
  if ((!bVar10) || (local_res18 = true, !bVar12)) {
    local_res18 = false;
  }
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = 0;
  local_1a0.ArrayMax = 0;
  FDelaunay2::GetTrianglesAndAdjacency(&local_1d0,&local_228,&local_1a0);
  iVar5 = local_1a0.ArrayNum;
  uVar32 = local_1a0._8_8_ & 0xffffffff;
  local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240.ArrayNum = 0;
  local_240.ArrayMax = 0;
  if (local_1a0.ArrayNum < 1) {
    if (local_1a0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar32);
    }
  }
  else {
    iVar16 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,local_1a0.ArrayNum,&local_240.AllocatorInstance,&local_240.ArrayNum,
                        &local_240.ArrayMax);
    memset(local_240.AllocatorInstance.Data + iVar16,0,(longlong)iVar5);
  }
  local_108 = &local_228;
  local_100 = &local_240;
  local_178 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TConstrainedDelaunay2<float>::Triangulate'::__l2::<lambda_1>,void,int>
              ::Call;
  local_170 = &local_118;
  local_158.DataPtr = (void **)0x0;
  local_158.ArrayNum = 0;
  local_118 = this;
  local_110 = param_1;
  if ((atomic<unsigned_int>)iVar5 == (atomic<unsigned_int>)0x0) goto LAB_149528dd0;
  FVar24 = StatPtr_STAT_ParallelFor;
  if (StatPtr_STAT_ParallelFor == (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)0x0) {
    pFVar23 = ::FName::FName(local_f8,"STAT_ParallelFor");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelFor,*pFVar23,
                        L"ParallelFor","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar24;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  if ((FVar29.ComparisonIndex.Value.Value == 0) && (FVar29.Number == 0)) {
LAB_149528c7a:
    bVar10 = false;
    FVar29 = local_168;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1e8[0]._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar9 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
        local_190.Number = FVar29.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x7e);
        bVar9 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149528c7a;
    local_1b0 = FVar29;
    FThreadStats::AddMessage(FVar29,CycleScopeStart);
    bVar10 = true;
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,std::nullptr_t>(wchar_t_const*___ptr64,int,int,TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const&___ptr64)'
                ::__l2::__CpuProfilerEventSpecId127,"ParallelFor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,std::nullptr_t>(wchar_t_const*___ptr64,int,int,TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const&___ptr64)'
               ::__l2::__CpuProfilerEventSpecId127);
  }
  if ((iVar5 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                          ,0x80,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  bVar13 = FApp::ShouldUseThreadingForPerformance();
  if (bVar13) {
LAB_149528d02:
    bVar13 = true;
  }
  else {
    bVar14 = FForkProcessHelper::IsForkedMultithreadInstance();
    bVar13 = false;
    if (bVar14) goto LAB_149528d02;
  }
  aVar17 = (atomic<unsigned_int>)0x0;
  if (((1 < iVar5) && (aVar17 = (atomic<unsigned_int>)0x0, bVar13)) &&
     (aVar17 = (atomic<unsigned_int>)iVar5,
     (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers < iVar5)) {
    aVar17 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
  }
  bVar13 = LowLevelTasks::FSchedulerTls::IsWorkerThread
                     ((FSchedulerTls *)&LowLevelTasks::FScheduler::Singleton);
  aVar7 = (atomic<unsigned_int>)((int)aVar17 + 1);
  if (bVar13) {
    aVar7 = aVar17;
  }
  aVar17 = (atomic<unsigned_int>)FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  if ((int)aVar7 < (int)aVar17) {
    aVar17 = aVar7;
  }
  aVar7 = (atomic<unsigned_int>)0x1;
  if (1 < (int)aVar17) {
    aVar7 = aVar17;
  }
  aVar17 = aVar7;
  if (((atomic<unsigned_int>)local_158.ArrayNum != (atomic<unsigned_int>)0x0) &&
     (aVar17 = (atomic<unsigned_int>)local_158.ArrayNum, (int)aVar7 < local_158.ArrayNum)) {
    aVar17 = aVar7;
  }
  if ((int)aVar17 < 2) {
    iVar16 = 0;
    if (0 < iVar5) {
      do {
        local_1e0[0] = iVar16;
        if (local_178 ==
            Core::Private::Function::
            TFunctionRefCaller<`UE::Geometry::TConstrainedDelaunay2<float>::Triangulate'::__l2::<lambda_1>,void,int>
            ::Call) {
          `UE::Geometry::TConstrainedDelaunay2<float>::Triangulate'::__l2::<lambda_1>::operator()
                    (local_170,iVar16);
        }
        else {
          (*local_178)(local_170,local_1e0);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < iVar5);
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar15) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar10) {
      FThreadStats::AddMessage(FVar29,CycleScopeEnd);
    }
    pTVar34 = &this->Triangles;
  }
  else {
    uVar35 = 1;
    iVar16 = (int)aVar17 * 6;
    iVar31 = 6;
    do {
      if (iVar16 <= iVar5) {
        uVar32 = (longlong)(iVar5 + -1 + iVar16) / (longlong)iVar16;
        uVar35 = uVar32 & 0xffffffff;
        iVar33 = (int)uVar32;
        uVar32 = (longlong)(iVar5 + -1 + iVar33) / (longlong)iVar33;
        iVar18 = (int)uVar32;
        uVar32 = uVar32 & 0xffffffff;
        if ((int)aVar17 <= iVar18) break;
      }
      iVar33 = (int)uVar35;
      iVar18 = (int)uVar32;
      iVar16 = iVar16 - (int)aVar17;
      iVar31 = iVar31 + -1;
    } while (iVar31 != 0);
    EVar19 = FTaskTagScope::GetCurrentTag();
    local_res20[0] = 0;
    if ((EVar19 & (ERhiThread|ERenderingThread|ESlateThread|EGameThread|EStaticInit)) == ENone) {
      local_res20[0] = 6;
    }
    FEventRef::FEventRef(&local_230,ManualReset);
    this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xc0,0x40);
    if (this_00 == (void *)0x0) {
      pFVar25 = (FParallelForData *)0x0;
    }
    else {
      pFVar25 = `ParallelForImpl::
                ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
                ::__l2::FParallelForData::FParallelForData
                          (this_00,L"ParallelFor Task",iVar5,iVar33,iVar18,(int)aVar17 + -1,
                           &local_158,(TFunctionRef<void___cdecl(int)> *)&local_178,&local_230,
                           (ETaskPriority)local_res20[0]);
      if (pFVar25 != (FParallelForData *)0x0) {
        LOCK();
        *(int *)&pFVar25->field_0x8 = *(int *)&pFVar25->field_0x8 + 1;
        UNLOCK();
      }
    }
    LOCK();
    paVar2 = &pFVar25->LaunchedWorkers;
    aVar27 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
    if (*(int *)&pFVar25->field_0x80 <= (int)aVar27) {
      aVar27 = (atomic<int>)0xffffffff;
    }
    if (aVar27 != (atomic<int>)0xffffffff) {
      LOCK();
      *(int *)&pFVar25->field_0x8 = *(int *)&pFVar25->field_0x8 + 1;
      UNLOCK();
      local_188.Reference = pFVar25;
      `ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
      ::__l2::FParallelExecutor::LaunchTask(&local_188,(int)aVar27,true);
      if (local_188.Reference != (FParallelForData *)0x0) {
        puVar3 = &(local_188.Reference)->field_0x8;
        LOCK();
        iVar5 = *(int *)puVar3;
        *(int *)puVar3 = *(int *)puVar3 + -1;
        UNLOCK();
        if (((iVar5 == 1) && (puVar3 != (undefined1 *)0x0)) &&
           (local_188.Reference != (FParallelForData *)0x0)) {
          (*(code *)**(undefined8 **)local_188.Reference)(local_188.Reference,1);
        }
      }
    }
    local_1fc = '\0';
    local_208.Reference = pFVar25;
    local_200 = (int)aVar17 + -1;
    bVar13 = `ParallelForImpl::
             ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
             ::__l2::FParallelExecutor::operator()(&local_208,true);
    if (!bVar13) {
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,std::nullptr_t>(wchar_t_const*___ptr64,int,int,TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const&___ptr64)'
                    ::__l52::__CpuProfilerEventSpecId456,"ParallelFor.Wait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x1c8);
        FCpuProfilerTrace::OutputBeginEvent
                  (`void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,std::nullptr_t>(wchar_t_const*___ptr64,int,int,TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const&___ptr64)'
                   ::__l52::__CpuProfilerEventSpecId456);
      }
      if (GParallelForDisableOversubscription == false) {
        (**(code **)((local_230.Event)->_padding_ + 0x20))(local_230.Event,0xffffffff,0);
      }
      else {
        pbVar26 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
        bVar14 = *pbVar26;
        *pbVar26 = false;
        (**(code **)((local_230.Event)->_padding_ + 0x20))(local_230.Event,0xffffffff,0);
        *pbVar26 = bVar14;
      }
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if (local_208.Reference != (FParallelForData *)0x0) {
      if (local_1fc != '\0') {
        `ParallelForImpl::
        ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
        ::__l2::FParallelExecutor::LaunchTask(&local_208,local_200,true);
      }
      if (local_208.Reference != (FParallelForData *)0x0) {
        puVar3 = &(local_208.Reference)->field_0x8;
        LOCK();
        iVar5 = *(int *)puVar3;
        *(int *)puVar3 = *(int *)puVar3 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (puVar3 != (undefined1 *)0x0)) {
          (*(code *)**(undefined8 **)local_208.Reference)(local_208.Reference,1);
        }
      }
    }
    FEventRef::~FEventRef(&local_230);
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar15) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    pTVar34 = local_180;
    if (bVar10) {
      FThreadStats::AddMessage(FVar29,CycleScopeEnd);
      pTVar34 = local_180;
    }
  }
LAB_149528dd0:
  iVar5 = (this->Vertices).ArrayNum;
  local_1f8.ArrayNum = 0;
  local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.ArrayMax = 0;
  if (this->bSplitBowties != false) {
    ConstrainedDelaunay2Internal::SplitBowtiesHelper<float>
              (&local_1f8,&this->Vertices,&local_240,&local_228,&local_1a0);
  }
  FVar30.Data = local_228.AllocatorInstance.Data;
  lVar28 = (longlong)local_228.ArrayNum;
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,this->bOutputCCW);
  local_130 = local_1d8;
  local_128 = &local_240;
  local_120 = local_res20;
  local_1d8[0] = local_228.ArrayNum;
  local_138 = pTVar34;
  if (local_1f8.ArrayNum < 1) {
    `ConstrainedDelaunay2Internal::BuildFinalTriangles'::__l2::<lambda_1>::operator()
              (&local_138,&local_228);
  }
  else {
    local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ArrayNum = local_228.ArrayNum;
    if (local_228.ArrayNum == 0) {
      local_218.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_228.ArrayNum,0,&local_218.AllocatorInstance,local_228.ArrayNum,
                 &local_218.ArrayMax);
      memcpy(local_218.AllocatorInstance.Data,FVar30.Data,lVar28 * 0xc);
    }
    iVar16 = local_1f8.ArrayNum;
    pFVar4 = local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayNum * 8;
    FVar30.Data = local_1f8.AllocatorInstance.Data;
    while( true ) {
      if (local_1f8.ArrayNum != iVar16) {
        local_248[0] = 0;
        `TCheckedPointerIterator<TTuple<int,int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_248);
      }
      if (FVar30.Data == pFVar4) break;
      iVar31 = *(int *)FVar30.Data;
      iVar18 = *(int *)(FVar30.Data + 4);
      uVar8 = iVar31 / 3;
      uVar20 = 0;
      if ((int)uVar8 < local_218.ArrayNum) {
        uVar20 = ~uVar8 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      FVar30.Data = FVar30.Data + 8;
      *(int *)(local_218.AllocatorInstance.Data +
              ((longlong)(int)uVar8 * 3 + (longlong)(iVar31 % 3)) * 4) = iVar18;
    }
    this->AddedVerticesStartIndex = iVar5;
    `ConstrainedDelaunay2Internal::BuildFinalTriangles'::__l2::<lambda_1>::operator()
              (&local_138,&local_218);
    if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.AllocatorInstance.Data);
    }
  }
  if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.AllocatorInstance.Data);
  }
  if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.AllocatorInstance.Data);
  }
  if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.AllocatorInstance.Data);
  }
  if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AllocatorInstance.Data);
  }
  if (local_1d0.Connectivity.Ptr != (FDelaunay2Connectivity *)0x0) {
    (**(code **)&local_1d0.Connectivity.Ptr[-1].DuplicateVertices.field_0x40)
              (&local_1d0.Connectivity.Ptr[-1].DuplicateVertices.field_0x40);
  }
  return local_res18;
}

// Triangulate @ 149529290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::TConstrainedDelaunay2<float>::Triangulate(TConstrainedDelaunay2<float> *this)

{
  int *piVar1;
  FIndex2i_u_0 *pFVar2;
  EFillRule EVar3;
  code *pcVar4;
  uint uVar5;
  TConstrainedDelaunay2<float> *pTVar6;
  FIndex2i *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  TArrayView<UE::Geometry::FIndex2i_const_,int> *pTVar14;
  TArrayView<UE::Math::TVector2<float>_const_,int> *pTVar15;
  longlong lVar16;
  longlong lVar17;
  ForElementType<FSetElementId> FVar18;
  FIndex2i_u_0 *pFVar19;
  longlong lVar20;
  uint uVar21;
  FScriptContainerElement FVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 auStackY_2e8 [32];
  undefined1 local_298;
  undefined1 local_297;
  char local_296;
  ForAnyElementType local_290;
  undefined8 local_288;
  FIndex2i_u_0 local_280;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_278;
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_268;
  undefined8 local_258;
  int local_250;
  int local_24c;
  uint local_248;
  uint uStack_244;
  uint local_240;
  uint uStack_23c;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_238;
  longlong local_228;
  FDelaunay2 local_220;
  TPairInitializer<TTuple<int,int>_&&,bool_const_&> local_200;
  ulonglong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  FIndex2i *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  int *local_1c8;
  undefined1 *local_1c0;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> local_1b8;
  ulonglong local_1a8;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_188;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_178;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_168;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_158;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_148;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_138;
  undefined4 local_11c;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_118;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_108;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_f8;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_e8;
  TSet<TTuple<TTuple<int,int>,bool>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>,FDefaultSetAllocator>
  local_d8;
  TSet<TTuple<TTuple<int,int>,bool>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  piVar1 = &(this->Triangles).ArrayMax;
  (this->Triangles).ArrayNum = 0;
  local_200.Value = (bool *)this;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Triangles).AllocatorInstance,0,piVar1);
  }
  if (((0 < (int)this->FillRule) && (this->bOrientedEdges == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FillRule <= EFillRule::Odd || bOrientedEdges",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\ConstrainedDelaunay2.cpp"
                         ,0x15f,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  iVar12 = (this->Vertices).ArrayNum;
  uStack_1cc = local_11c;
  local_198 = (this->Vertices).AllocatorInstance.Data;
  local_220.RandomStream.InitialSeed = 0;
  local_220.RandomStream.Seed = 0;
  local_220.bKeepFastEdgeAdjacencyData = false;
  local_220.bValidateEdges = true;
  local_220.Connectivity.Ptr = (FDelaunay2Connectivity *)0x0;
  local_220.bIsConstrained = false;
  local_220.Result = NotComputed;
  local_220.bAutomaticallyFixEdgesToDuplicateVertices = true;
  local_1d8 = (FIndex2i *)0x0;
  iStack_1d0 = 0;
  if ((iVar12 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  local_188._12_4_ = uStack_1cc;
  local_188.ArrayNum = iStack_1d0;
  local_178._12_4_ = uStack_18c;
  local_178.ArrayNum = iVar12;
  local_188.DataPtr = local_1d8;
  local_178.DataPtr = (TVector2<float> *)local_198;
  iStack_190 = iVar12;
  bVar8 = FDelaunay2::Triangulate(&local_220,&local_178,&local_188);
  if (bVar8) {
    local_220.bKeepFastEdgeAdjacencyData = true;
    local_220.bValidateEdges = false;
    pTVar14 = TArrayView<UE::Geometry::FIndex2i_const_,int>::
              TArrayView<UE::Geometry::FIndex2i_const_,int><TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_>
                        (&local_118,&this->Edges);
    local_168.DataPtr = pTVar14->DataPtr;
    local_168.ArrayNum = pTVar14->ArrayNum;
    local_168._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
    pTVar15 = TArrayView<UE::Math::TVector2<float>_const_,int>::
              TArrayView<UE::Math::TVector2<float>_const_,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                        (&local_108,&this->Vertices);
    local_158.DataPtr = pTVar15->DataPtr;
    local_158.ArrayNum = pTVar15->ArrayNum;
    local_158._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
    FDelaunay2::ConstrainEdges(&local_220,&local_158,&local_168);
    pTVar14 = TArrayView<UE::Geometry::FIndex2i_const_,int>::
              TArrayView<UE::Geometry::FIndex2i_const_,int><TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_>
                        (&local_f8,&this->HoleEdges);
    local_148.DataPtr = pTVar14->DataPtr;
    local_148.ArrayNum = pTVar14->ArrayNum;
    local_148._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
    pTVar15 = TArrayView<UE::Math::TVector2<float>_const_,int>::
              TArrayView<UE::Math::TVector2<float>_const_,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                        (&local_e8,&this->Vertices);
    local_138.DataPtr = pTVar15->DataPtr;
    local_138.ArrayNum = pTVar15->ArrayNum;
    local_138._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
    FDelaunay2::ConstrainEdges(&local_220,&local_138,&local_148);
    local_88.Elements._0_8_ = 0;
    local_88.Elements._8_8_ = 0;
    local_88.Elements._32_8_ = 0;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._48_4_ = 0xffffffff;
    local_88.Elements._52_4_ = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    local_d8.Elements._0_8_ = 0;
    local_d8.Elements._8_8_ = 0;
    local_d8.Elements._32_8_ = 0;
    local_d8.Elements._40_4_ = 0;
    local_d8.Elements._44_4_ = 0x80;
    local_d8.Elements._48_4_ = 0xffffffff;
    local_d8.Elements._52_4_ = 0;
    local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_d8.HashSize = 0;
    pFVar19 = (FIndex2i_u_0 *)(this->Edges).AllocatorInstance.Data;
    iVar12 = (this->Edges).ArrayNum;
    local_296 = '\0';
    pFVar2 = pFVar19 + iVar12;
    while( true ) {
      if ((this->Edges).ArrayNum != iVar12) {
        local_298 = 0;
        `TCheckedPointerIterator<UE::Geometry::FIndex2i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_298);
      }
      if (pFVar19 == pFVar2) break;
      local_280 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar19->_s_0;
      FDelaunay2::FixDuplicatesOnEdge(&local_220,(FIndex2i *)&local_280._s_0);
      bVar8 = FDelaunay2::HasEdge(&local_220,(FIndex2i *)&local_280._s_0,false);
      if (bVar8) {
        local_24c = local_280._s_0.A;
        local_250 = local_280._s_0.B;
        if (local_24c <= local_280._s_0.B) {
          local_250 = local_24c;
        }
        local_297 = local_280._s_0.B < local_24c;
        if (local_24c <= local_280._s_0.B) {
          local_24c = local_280._s_0.B;
        }
        local_1c8 = &local_250;
        local_1c0 = &local_297;
        TSet<TTuple<TTuple<int,int>,bool>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<TTuple<int,int>_&&,bool_const_&>_>
                  (&local_88,&local_200,(bool *)&local_1c8);
        pFVar19 = pFVar19 + 1;
      }
      else {
        local_296 = '\x01';
        pFVar19 = pFVar19 + 1;
      }
    }
    pFVar19 = (FIndex2i_u_0 *)(this->HoleEdges).AllocatorInstance.Data;
    iVar12 = (this->HoleEdges).ArrayNum;
    pFVar2 = pFVar19 + iVar12;
    while( true ) {
      if ((this->HoleEdges).ArrayNum != iVar12) {
        local_298 = 0;
        `TCheckedPointerIterator<UE::Geometry::FIndex2i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_298);
      }
      if (pFVar19 == pFVar2) break;
      local_280 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar19->_s_0;
      FDelaunay2::FixDuplicatesOnEdge(&local_220,(FIndex2i *)&local_280._s_0);
      bVar8 = FDelaunay2::HasEdge(&local_220,(FIndex2i *)&local_280._s_0,false);
      if (bVar8) {
        local_24c = local_280._s_0.A;
        local_250 = local_280._s_0.B;
        if (local_24c <= local_280._s_0.B) {
          local_250 = local_24c;
        }
        local_297 = local_280._s_0.B < local_24c;
        if (local_24c <= local_280._s_0.B) {
          local_24c = local_280._s_0.B;
        }
        local_1c8 = &local_250;
        local_1c0 = &local_297;
        TSet<TTuple<TTuple<int,int>,bool>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<TTuple<int,int>_&&,bool_const_&>_>
                  (&local_d8,&local_200,(bool *)&local_1c8);
        pFVar19 = pFVar19 + 1;
      }
      else {
        local_296 = '\x01';
        pFVar19 = pFVar19 + 1;
      }
    }
    local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.ArrayNum = 0;
    local_278.ArrayMax = 0;
    local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.ArrayNum = 0;
    local_238.ArrayMax = 0;
    FDelaunay2::GetTrianglesAndAdjacency(&local_220,&local_278,&local_238);
    iVar12 = local_238.ArrayNum;
    lVar20 = (longlong)local_238.ArrayNum;
    local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.ArrayNum = 0;
    local_268.ArrayMax = 0;
    TArray<signed_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&local_268,local_238.ArrayNum,Default);
    local_288._0_4_ = 0;
    local_290.Data = (FScriptContainerElement *)0x0;
    uVar21 = 0;
    local_288 = 0;
    local_228 = lVar20;
    if (0 < iVar12) {
      local_258 = 0;
      lVar20 = 0;
      do {
        iVar12 = 0;
        uVar24 = ~uVar21 >> 0x1f;
        lVar16 = 8;
        lVar17 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar21 < local_238.ArrayNum) {
            uVar10 = uVar24;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          if (*(int *)(local_238.AllocatorInstance.Data + lVar16 + lVar20) < 0) {
            uVar10 = 0;
            if ((int)uVar21 < local_278.ArrayNum) {
              uVar10 = uVar24;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            uVar10 = *(uint *)(local_278.AllocatorInstance.Data + lVar17 + lVar20);
            uVar11 = 0;
            if ((int)uVar21 < local_278.ArrayNum) {
              uVar11 = uVar24;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            uVar11 = *(uint *)(local_278.AllocatorInstance.Data + lVar16 + lVar20);
            uVar13 = uVar11;
            if ((int)uVar10 < (int)uVar11) {
              uVar13 = uVar10;
            }
            uVar5 = uVar11;
            if ((int)uVar11 < (int)uVar10) {
              uVar5 = uVar10;
            }
            if (local_d8.Elements._8_4_ != local_d8.Elements._52_4_) {
              FVar18 = (ForElementType<FSetElementId>)&local_d8.Hash;
              if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar18 = local_d8.Hash.SecondaryData;
              }
              iVar23 = *(int *)((longlong)FVar18 +
                               (ulonglong)
                               (local_d8.HashSize - 1U &
                               (uVar13 * 0x40 + -0x61c88647 + uVar5 + (uVar13 >> 2) ^ uVar13)) * 4);
              if (iVar23 != -1) {
                while ((lVar16 = (longlong)iVar23,
                       *(uint *)(local_d8.Elements._0_8_ + lVar16 * 0x14) != uVar13 ||
                       (*(uint *)(local_d8.Elements._0_8_ + 4 + lVar16 * 0x14) != uVar5))) {
                  iVar23 = *(int *)(local_d8.Elements._0_8_ + 0xc + lVar16 * 0x14);
                  if (iVar23 == -1) goto LAB_14952989a;
                }
                if (iVar23 != -1) goto LAB_1495299aa;
              }
            }
LAB_14952989a:
            iVar12 = WindingAcross((TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
                                    *)&local_88,uVar10,uVar11);
            uVar24 = -iVar12;
            local_248 = uVar21;
            uStack_244 = uVar24;
            if (((local_290.Data <= (FScriptContainerElement *)&local_248) &&
                ((FScriptContainerElement *)&local_248 <
                 local_290.Data + (longlong)local_288._4_4_ * 8)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            iVar12 = (int)local_288;
            if ((int)local_288 == local_288._4_4_) {
              iVar12 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_290,(int *)((longlong)&local_288 + 4));
            }
            local_288 = CONCAT44(local_288._4_4_,iVar12 + 1);
            *(ulonglong *)(local_290.Data + (longlong)iVar12 * 8) = CONCAT44(uStack_244,local_248);
            EVar3 = *(EFillRule *)((longlong)local_200.Value + 0x34);
            if (EVar3 == Odd) {
              uVar24 = uVar24 & 1;
            }
            else if (EVar3 == NonZero) {
              uVar24 = (uint)(uVar24 != 0);
            }
            else if (EVar3 == Positive) {
              uVar24 = (uint)(0 < (int)uVar24);
            }
            else if (EVar3 == Negative) {
              uVar24 = uVar24 >> 0x1f;
            }
            else {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Public\\ConstrainedDelaunay2.h"
                                 ,0x42,L"");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
              uVar24 = 0;
            }
            FVar22 = (FScriptContainerElement)0xff;
            if (uVar24 != 0) {
              FVar22 = (FScriptContainerElement)0x1;
            }
            uVar24 = 0;
            if ((int)uVar21 < local_268.ArrayNum) {
              uVar24 = ~uVar21 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            local_268.AllocatorInstance.Data[local_258] = FVar22;
            break;
          }
LAB_1495299aa:
          iVar12 = iVar12 + 1;
          lVar16 = lVar17;
          lVar17 = lVar17 + 4;
        } while (iVar12 < 3);
        uVar21 = uVar21 + 1;
        local_258 = local_258 + 1;
        lVar20 = lVar20 + 0xc;
      } while (local_258 < local_228);
    }
    iVar12 = 0;
    iVar23 = (int)local_288;
    pTVar6 = (TConstrainedDelaunay2<float> *)local_200.Value;
    while (local_200.Value = (bool *)pTVar6, iVar23 != 0) {
      uVar24 = (iVar12 + 1) % iVar23;
      uVar25 = (ulonglong)local_258 >> 0x20;
      local_258 = CONCAT44((int)uVar25,uVar24);
      uVar21 = 0;
      if ((int)uVar24 < iVar23) {
        uVar21 = ~uVar24 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        iVar23 = (int)local_288;
      }
      uVar25 = *(ulonglong *)(local_290.Data + (longlong)(int)uVar24 * 8);
      local_1a8 = uVar25 >> 0x20;
      uVar21 = 0;
      if ((int)uVar24 < iVar23) {
        uVar21 = ~uVar24 >> 0x1f;
      }
      local_1f0 = uVar25;
      if (uVar21 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        iVar23 = (int)local_288;
      }
      iVar12 = (iVar23 - uVar24) + -1;
      if (1 < iVar12) {
        iVar12 = 1;
      }
      if (iVar12 != 0) {
        memmove(local_290.Data + (longlong)(int)uVar24 * 8,
                local_290.Data + (longlong)(iVar23 - iVar12) * 8,(longlong)iVar12 << 3);
        iVar23 = (int)local_288;
      }
      local_288 = CONCAT44(local_288._4_4_,iVar23 + -1);
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&local_290,iVar23 + -1,(int *)((longlong)&local_288 + 4));
      local_1e8 = (longlong)(int)(uint)uVar25;
      uVar21 = ~(uint)uVar25 >> 0x1f;
      local_1e0 = 3;
      local_228 = local_1e8 * 0xc;
      local_1d8 = (FIndex2i *)(local_1e8 * 0xc);
      lVar20 = 8;
      lVar16 = 0;
      do {
        pFVar7 = local_1d8;
        lVar17 = local_228;
        iVar12 = (int)uVar25;
        uVar24 = 0;
        if (iVar12 < local_278.ArrayNum) {
          uVar24 = uVar21;
        }
        if ((uVar24 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        uVar24 = *(uint *)(local_278.AllocatorInstance.Data + (longlong)&pFVar7->field0_0x0 + lVar16
                          );
        uVar10 = 0;
        if (iVar12 < local_278.ArrayNum) {
          uVar10 = uVar21;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        uVar10 = *(uint *)(local_278.AllocatorInstance.Data + lVar17 + lVar20);
        uVar11 = uVar10;
        if ((int)uVar24 < (int)uVar10) {
          uVar11 = uVar24;
        }
        uVar13 = uVar10;
        if ((int)uVar10 < (int)uVar24) {
          uVar13 = uVar24;
        }
        if (local_d8.Elements._8_4_ != local_d8.Elements._52_4_) {
          FVar18 = (ForElementType<FSetElementId>)&local_d8.Hash;
          if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar18 = local_d8.Hash.SecondaryData;
          }
          iVar23 = *(int *)((longlong)FVar18 +
                           (ulonglong)
                           (local_d8.HashSize - 1U &
                           (uVar11 * 0x40 + -0x61c88647 + uVar13 + (uVar11 >> 2) ^ uVar11)) * 4);
          while (iVar23 != -1) {
            lVar17 = (longlong)iVar23;
            if ((*(uint *)(local_d8.Elements._0_8_ + lVar17 * 0x14) == uVar11) &&
               (*(uint *)(local_d8.Elements._0_8_ + 4 + lVar17 * 0x14) == uVar13)) {
              if (iVar23 != -1) goto LAB_149529f33;
              break;
            }
            iVar23 = *(int *)(local_d8.Elements._0_8_ + 0xc + lVar17 * 0x14);
          }
        }
        uVar11 = 0;
        if (iVar12 < local_238.ArrayNum) {
          uVar11 = uVar21;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        uVar11 = *(uint *)(local_238.AllocatorInstance.Data + lVar20 + local_228);
        if (-1 < (int)uVar11) {
          uVar13 = 0;
          if ((int)uVar11 < local_268.ArrayNum) {
            uVar13 = ~uVar11 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          uVar25 = local_1f0;
          if (local_268.AllocatorInstance.Data[(int)uVar11] == (FScriptContainerElement)0x0) {
            iVar12 = WindingAcross((TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
                                    *)&local_88,uVar24,uVar10);
            uVar24 = (int)local_1a8 + iVar12;
            local_240 = uVar11;
            uStack_23c = uVar24;
            if (((local_290.Data <= (FScriptContainerElement *)&local_240) &&
                ((FScriptContainerElement *)&local_240 <
                 local_290.Data + (longlong)local_288._4_4_ * 8)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            iVar12 = (int)local_288;
            if ((int)local_288 == local_288._4_4_) {
              iVar12 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_290,(int *)((longlong)&local_288 + 4));
            }
            local_288 = CONCAT44(local_288._4_4_,iVar12 + 1);
            *(ulonglong *)(local_290.Data + (longlong)iVar12 * 8) = CONCAT44(uStack_23c,local_240);
            EVar3 = *(EFillRule *)((longlong)local_200.Value + 0x34);
            if (EVar3 == Odd) {
              uVar24 = uVar24 & 1;
            }
            else if (EVar3 == NonZero) {
              uVar24 = (uint)(uVar24 != 0);
            }
            else if (EVar3 == Positive) {
              uVar24 = (uint)(0 < (int)uVar24);
            }
            else if (EVar3 == Negative) {
              uVar24 = uVar24 >> 0x1f;
            }
            else {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Public\\ConstrainedDelaunay2.h"
                                 ,0x42,L"");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
              uVar24 = 0;
            }
            FVar22 = (FScriptContainerElement)0xff;
            if (uVar24 != 0) {
              FVar22 = (FScriptContainerElement)0x1;
            }
            uVar24 = 0;
            if ((int)uVar11 < local_268.ArrayNum) {
              uVar24 = ~uVar11 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            local_268.AllocatorInstance.Data[(int)uVar11] = FVar22;
            uVar25 = local_1f0;
          }
        }
LAB_149529f33:
        local_1e0 = local_1e0 + -1;
        lVar20 = lVar16;
        lVar16 = lVar16 + 4;
      } while (local_1e0 != 0);
      local_1e0 = 0;
      iVar12 = (int)local_258;
      pTVar6 = (TConstrainedDelaunay2<float> *)local_200.Value;
      iVar23 = (int)local_288;
    }
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = (pTVar6->Vertices).ArrayNum;
    local_1b8.ArrayNum = 0;
    local_1b8.ArrayMax = 0;
    if (pTVar6->bSplitBowties != false) {
      ConstrainedDelaunay2Internal::SplitBowtiesHelper<float>
                (&local_1b8,&pTVar6->Vertices,&local_268,&local_278,&local_238);
    }
    ConstrainedDelaunay2Internal::BuildFinalTriangles
              (&pTVar6->Triangles,&local_1b8,&pTVar6->AddedVerticesStartIndex,&local_268,&local_278,
               iVar12,pTVar6->bOutputCCW);
    bVar8 = local_296 == '\0';
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    if (local_290.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data);
    }
    if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.AllocatorInstance.Data);
    }
    if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.AllocatorInstance.Data);
    }
    if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.AllocatorInstance.Data);
    }
    local_d8.HashSize = 0;
    if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_d8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_d8.Elements);
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
  }
  else {
    bVar8 = false;
  }
  if (local_220.Connectivity.Ptr != (FDelaunay2Connectivity *)0x0) {
    (**(code **)&local_220.Connectivity.Ptr[-1].DuplicateVertices.field_0x40)
              (&local_220.Connectivity.Ptr[-1].DuplicateVertices.field_0x40);
  }
  return bVar8;
}

// Triangulate @ 14952a0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::Geometry::TConstrainedDelaunay2<double>::Triangulate
          (TConstrainedDelaunay2<double> *this,
          TFunctionRef<bool___cdecl(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,UE::Geometry::FIndex3i_const_&)>
          *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  code *pcVar6;
  atomic<unsigned_int> aVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  atomic<unsigned_int> aVar17;
  int iVar18;
  ETaskTag EVar19;
  uint uVar20;
  TArrayView<UE::Geometry::FIndex2i_const_,int> *pTVar21;
  TArrayView<UE::Math::TVector2<double>_const_,int> *pTVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_ParallelFor> FVar24;
  void *this_00;
  FParallelForData *pFVar25;
  bool *pbVar26;
  atomic<int> aVar27;
  longlong lVar28;
  FName FVar29;
  ForAnyElementType FVar30;
  int iVar31;
  ulonglong uVar32;
  int iVar33;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar34;
  ulonglong uVar35;
  bool local_res18;
  undefined4 local_res20 [2];
  undefined1 local_248 [8];
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_240;
  FEventRef local_230;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_228;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_218;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  local_208;
  int local_200;
  char local_1fc;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> local_1f8;
  FColor_u_0 local_1e8 [2];
  int local_1e0 [2];
  int local_1d8 [2];
  FDelaunay2 local_1d0;
  FName local_1b0;
  int iStack_1a8;
  undefined4 uStack_1a4;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_1a0;
  FName local_190;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  local_188;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_180;
  code *local_178;
  TConstrainedDelaunay2<double> **local_170;
  FName local_168;
  TArrayView<std::nullptr_t,int> local_158;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_138;
  int *local_130;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *local_128;
  undefined4 *local_120;
  TConstrainedDelaunay2<double> *local_118;
  TFunctionRef<bool___cdecl(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_const_&,UE::Geometry::FIndex3i_const_&)>
  *local_110;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_108;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *local_100;
  FName local_f8 [2];
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_e8;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_d8;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_c8;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_b8;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_a8;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_98;
  undefined4 local_7c;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_78;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_68;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_58;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_48;
  
  pTVar34 = &this->Triangles;
  bVar9 = false;
  bVar15 = false;
  piVar1 = &(this->Triangles).ArrayMax;
  (this->Triangles).ArrayNum = 0;
  local_180 = pTVar34;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&pTVar34->AllocatorInstance,0,piVar1);
  }
  iVar5 = (this->Vertices).ArrayNum;
  uStack_1a4 = local_7c;
  local_148 = (this->Vertices).AllocatorInstance.Data;
  local_1d0.RandomStream.InitialSeed = 0;
  local_1d0.RandomStream.Seed = 0;
  local_1d0.bKeepFastEdgeAdjacencyData = false;
  local_1d0.bValidateEdges = true;
  local_1d0.Connectivity.Ptr = (FDelaunay2Connectivity *)0x0;
  local_1d0.bIsConstrained = false;
  local_1d0.Result = NotComputed;
  local_1d0.bAutomaticallyFixEdgesToDuplicateVertices = true;
  local_1b0.ComparisonIndex.Value = 0;
  local_1b0.Number = 0;
  iStack_1a8 = 0;
  if ((iVar5 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  local_e8._12_4_ = uStack_1a4;
  local_e8.ArrayNum = iStack_1a8;
  local_d8._12_4_ = uStack_13c;
  local_d8.ArrayNum = iVar5;
  local_e8.DataPtr = (FIndex2i *)local_1b0;
  local_d8.DataPtr = (TVector2<double> *)local_148;
  iStack_140 = iVar5;
  bVar10 = FDelaunay2::Triangulate(&local_1d0,&local_d8,&local_e8);
  if (!bVar10) {
    if (local_1d0.Connectivity.Ptr != (FDelaunay2Connectivity *)0x0) {
      (**(code **)&local_1d0.Connectivity.Ptr[-1].DuplicateVertices.field_0x40)
                (&local_1d0.Connectivity.Ptr[-1].DuplicateVertices.field_0x40);
    }
    return false;
  }
  local_1d0.bKeepFastEdgeAdjacencyData = true;
  pTVar21 = TArrayView<UE::Geometry::FIndex2i_const_,int>::
            TArrayView<UE::Geometry::FIndex2i_const_,int><TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_>
                      (&local_78,&this->Edges);
  local_c8.DataPtr = pTVar21->DataPtr;
  local_c8.ArrayNum = pTVar21->ArrayNum;
  local_c8._12_4_ = *(undefined4 *)&pTVar21->field_0xc;
  pTVar22 = TArrayView<UE::Math::TVector2<double>_const_,int>::
            TArrayView<UE::Math::TVector2<double>_const_,int><TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                      (&local_68,&this->Vertices);
  local_b8.DataPtr = pTVar22->DataPtr;
  local_b8.ArrayNum = pTVar22->ArrayNum;
  local_b8._12_4_ = *(undefined4 *)&pTVar22->field_0xc;
  bVar10 = FDelaunay2::ConstrainEdges(&local_1d0,&local_b8,&local_c8);
  pTVar21 = TArrayView<UE::Geometry::FIndex2i_const_,int>::
            TArrayView<UE::Geometry::FIndex2i_const_,int><TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_>
                      (&local_58,&this->HoleEdges);
  local_a8.DataPtr = pTVar21->DataPtr;
  local_a8.ArrayNum = pTVar21->ArrayNum;
  local_a8._12_4_ = *(undefined4 *)&pTVar21->field_0xc;
  pTVar22 = TArrayView<UE::Math::TVector2<double>_const_,int>::
            TArrayView<UE::Math::TVector2<double>_const_,int><TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                      (&local_48,&this->Vertices);
  local_98.DataPtr = pTVar22->DataPtr;
  local_98.ArrayNum = pTVar22->ArrayNum;
  local_98._12_4_ = *(undefined4 *)&pTVar22->field_0xc;
  bVar12 = FDelaunay2::ConstrainEdges(&local_1d0,&local_98,&local_a8);
  if ((!bVar10) || (local_res18 = true, !bVar12)) {
    local_res18 = false;
  }
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = 0;
  local_1a0.ArrayMax = 0;
  FDelaunay2::GetTrianglesAndAdjacency(&local_1d0,&local_228,&local_1a0);
  iVar5 = local_1a0.ArrayNum;
  uVar32 = local_1a0._8_8_ & 0xffffffff;
  local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240.ArrayNum = 0;
  local_240.ArrayMax = 0;
  if (local_1a0.ArrayNum < 1) {
    if (local_1a0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar32);
    }
  }
  else {
    iVar16 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,local_1a0.ArrayNum,&local_240.AllocatorInstance,&local_240.ArrayNum,
                        &local_240.ArrayMax);
    memset(local_240.AllocatorInstance.Data + iVar16,0,(longlong)iVar5);
  }
  local_108 = &local_228;
  local_100 = &local_240;
  local_178 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TConstrainedDelaunay2<double>::Triangulate'::__l2::<lambda_1>,void,int>
              ::Call;
  local_170 = &local_118;
  local_158.DataPtr = (void **)0x0;
  local_158.ArrayNum = 0;
  local_118 = this;
  local_110 = param_1;
  if ((atomic<unsigned_int>)iVar5 == (atomic<unsigned_int>)0x0) goto LAB_14952a5e0;
  FVar24 = StatPtr_STAT_ParallelFor;
  if (StatPtr_STAT_ParallelFor == (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)0x0) {
    pFVar23 = ::FName::FName(local_f8,"STAT_ParallelFor");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelFor,*pFVar23,
                        L"ParallelFor","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar24;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  if ((FVar29.ComparisonIndex.Value.Value == 0) && (FVar29.Number == 0)) {
LAB_14952a48a:
    bVar10 = false;
    FVar29 = local_168;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1e8[0]._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar9 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
        local_190.Number = FVar29.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x7e);
        bVar9 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14952a48a;
    local_1b0 = FVar29;
    FThreadStats::AddMessage(FVar29,CycleScopeStart);
    bVar10 = true;
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,std::nullptr_t>(wchar_t_const*___ptr64,int,int,TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const&___ptr64)'
                ::__l2::__CpuProfilerEventSpecId127,"ParallelFor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,std::nullptr_t>(wchar_t_const*___ptr64,int,int,TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const&___ptr64)'
               ::__l2::__CpuProfilerEventSpecId127);
  }
  if ((iVar5 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                          ,0x80,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  bVar13 = FApp::ShouldUseThreadingForPerformance();
  if (bVar13) {
LAB_14952a512:
    bVar13 = true;
  }
  else {
    bVar14 = FForkProcessHelper::IsForkedMultithreadInstance();
    bVar13 = false;
    if (bVar14) goto LAB_14952a512;
  }
  aVar17 = (atomic<unsigned_int>)0x0;
  if (((1 < iVar5) && (aVar17 = (atomic<unsigned_int>)0x0, bVar13)) &&
     (aVar17 = (atomic<unsigned_int>)iVar5,
     (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers < iVar5)) {
    aVar17 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
  }
  bVar13 = LowLevelTasks::FSchedulerTls::IsWorkerThread
                     ((FSchedulerTls *)&LowLevelTasks::FScheduler::Singleton);
  aVar7 = (atomic<unsigned_int>)((int)aVar17 + 1);
  if (bVar13) {
    aVar7 = aVar17;
  }
  aVar17 = (atomic<unsigned_int>)FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  if ((int)aVar7 < (int)aVar17) {
    aVar17 = aVar7;
  }
  aVar7 = (atomic<unsigned_int>)0x1;
  if (1 < (int)aVar17) {
    aVar7 = aVar17;
  }
  aVar17 = aVar7;
  if (((atomic<unsigned_int>)local_158.ArrayNum != (atomic<unsigned_int>)0x0) &&
     (aVar17 = (atomic<unsigned_int>)local_158.ArrayNum, (int)aVar7 < local_158.ArrayNum)) {
    aVar17 = aVar7;
  }
  if ((int)aVar17 < 2) {
    iVar16 = 0;
    if (0 < iVar5) {
      do {
        local_1e0[0] = iVar16;
        if (local_178 ==
            Core::Private::Function::
            TFunctionRefCaller<`UE::Geometry::TConstrainedDelaunay2<double>::Triangulate'::__l2::<lambda_1>,void,int>
            ::Call) {
          `UE::Geometry::TConstrainedDelaunay2<double>::Triangulate'::__l2::<lambda_1>::operator()
                    (local_170,iVar16);
        }
        else {
          (*local_178)(local_170,local_1e0);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < iVar5);
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar15) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar10) {
      FThreadStats::AddMessage(FVar29,CycleScopeEnd);
    }
    pTVar34 = &this->Triangles;
  }
  else {
    uVar35 = 1;
    iVar16 = (int)aVar17 * 6;
    iVar31 = 6;
    do {
      if (iVar16 <= iVar5) {
        uVar32 = (longlong)(iVar5 + -1 + iVar16) / (longlong)iVar16;
        uVar35 = uVar32 & 0xffffffff;
        iVar33 = (int)uVar32;
        uVar32 = (longlong)(iVar5 + -1 + iVar33) / (longlong)iVar33;
        iVar18 = (int)uVar32;
        uVar32 = uVar32 & 0xffffffff;
        if ((int)aVar17 <= iVar18) break;
      }
      iVar33 = (int)uVar35;
      iVar18 = (int)uVar32;
      iVar16 = iVar16 - (int)aVar17;
      iVar31 = iVar31 + -1;
    } while (iVar31 != 0);
    EVar19 = FTaskTagScope::GetCurrentTag();
    local_res20[0] = 0;
    if ((EVar19 & (ERhiThread|ERenderingThread|ESlateThread|EGameThread|EStaticInit)) == ENone) {
      local_res20[0] = 6;
    }
    FEventRef::FEventRef(&local_230,ManualReset);
    this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xc0,0x40);
    if (this_00 == (void *)0x0) {
      pFVar25 = (FParallelForData *)0x0;
    }
    else {
      pFVar25 = `ParallelForImpl::
                ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
                ::__l2::FParallelForData::FParallelForData
                          (this_00,L"ParallelFor Task",iVar5,iVar33,iVar18,(int)aVar17 + -1,
                           &local_158,(TFunctionRef<void___cdecl(int)> *)&local_178,&local_230,
                           (ETaskPriority)local_res20[0]);
      if (pFVar25 != (FParallelForData *)0x0) {
        LOCK();
        *(int *)&pFVar25->field_0x8 = *(int *)&pFVar25->field_0x8 + 1;
        UNLOCK();
      }
    }
    LOCK();
    paVar2 = &pFVar25->LaunchedWorkers;
    aVar27 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
    if (*(int *)&pFVar25->field_0x80 <= (int)aVar27) {
      aVar27 = (atomic<int>)0xffffffff;
    }
    if (aVar27 != (atomic<int>)0xffffffff) {
      LOCK();
      *(int *)&pFVar25->field_0x8 = *(int *)&pFVar25->field_0x8 + 1;
      UNLOCK();
      local_188.Reference = pFVar25;
      `ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
      ::__l2::FParallelExecutor::LaunchTask(&local_188,(int)aVar27,true);
      if (local_188.Reference != (FParallelForData *)0x0) {
        puVar3 = &(local_188.Reference)->field_0x8;
        LOCK();
        iVar5 = *(int *)puVar3;
        *(int *)puVar3 = *(int *)puVar3 + -1;
        UNLOCK();
        if (((iVar5 == 1) && (puVar3 != (undefined1 *)0x0)) &&
           (local_188.Reference != (FParallelForData *)0x0)) {
          (*(code *)**(undefined8 **)local_188.Reference)(local_188.Reference,1);
        }
      }
    }
    local_1fc = '\0';
    local_208.Reference = pFVar25;
    local_200 = (int)aVar17 + -1;
    bVar13 = `ParallelForImpl::
             ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
             ::__l2::FParallelExecutor::operator()(&local_208,true);
    if (!bVar13) {
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,std::nullptr_t>(wchar_t_const*___ptr64,int,int,TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const&___ptr64)'
                    ::__l52::__CpuProfilerEventSpecId456,"ParallelFor.Wait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x1c8);
        FCpuProfilerTrace::OutputBeginEvent
                  (`void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,std::nullptr_t>(wchar_t_const*___ptr64,int,int,TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const&___ptr64)'
                   ::__l52::__CpuProfilerEventSpecId456);
      }
      if (GParallelForDisableOversubscription == false) {
        (**(code **)((local_230.Event)->_padding_ + 0x20))(local_230.Event,0xffffffff,0);
      }
      else {
        pbVar26 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
        bVar14 = *pbVar26;
        *pbVar26 = false;
        (**(code **)((local_230.Event)->_padding_ + 0x20))(local_230.Event,0xffffffff,0);
        *pbVar26 = bVar14;
      }
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if (local_208.Reference != (FParallelForData *)0x0) {
      if (local_1fc != '\0') {
        `ParallelForImpl::
        ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
        ::__l2::FParallelExecutor::LaunchTask(&local_208,local_200,true);
      }
      if (local_208.Reference != (FParallelForData *)0x0) {
        puVar3 = &(local_208.Reference)->field_0x8;
        LOCK();
        iVar5 = *(int *)puVar3;
        *(int *)puVar3 = *(int *)puVar3 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (puVar3 != (undefined1 *)0x0)) {
          (*(code *)**(undefined8 **)local_208.Reference)(local_208.Reference,1);
        }
      }
    }
    FEventRef::~FEventRef(&local_230);
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar15) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    pTVar34 = local_180;
    if (bVar10) {
      FThreadStats::AddMessage(FVar29,CycleScopeEnd);
      pTVar34 = local_180;
    }
  }
LAB_14952a5e0:
  iVar5 = (this->Vertices).ArrayNum;
  local_1f8.ArrayNum = 0;
  local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.ArrayMax = 0;
  if (this->bSplitBowties != false) {
    ConstrainedDelaunay2Internal::SplitBowtiesHelper<double>
              (&local_1f8,&this->Vertices,&local_240,&local_228,&local_1a0);
  }
  FVar30.Data = local_228.AllocatorInstance.Data;
  lVar28 = (longlong)local_228.ArrayNum;
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,this->bOutputCCW);
  local_130 = local_1d8;
  local_128 = &local_240;
  local_120 = local_res20;
  local_1d8[0] = local_228.ArrayNum;
  local_138 = pTVar34;
  if (local_1f8.ArrayNum < 1) {
    `ConstrainedDelaunay2Internal::BuildFinalTriangles'::__l2::<lambda_1>::operator()
              (&local_138,&local_228);
  }
  else {
    local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ArrayNum = local_228.ArrayNum;
    if (local_228.ArrayNum == 0) {
      local_218.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_228.ArrayNum,0,&local_218.AllocatorInstance,local_228.ArrayNum,
                 &local_218.ArrayMax);
      memcpy(local_218.AllocatorInstance.Data,FVar30.Data,lVar28 * 0xc);
    }
    iVar16 = local_1f8.ArrayNum;
    pFVar4 = local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayNum * 8;
    FVar30.Data = local_1f8.AllocatorInstance.Data;
    while( true ) {
      if (local_1f8.ArrayNum != iVar16) {
        local_248[0] = 0;
        `TCheckedPointerIterator<TTuple<int,int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_248);
      }
      if (FVar30.Data == pFVar4) break;
      iVar31 = *(int *)FVar30.Data;
      iVar18 = *(int *)(FVar30.Data + 4);
      uVar8 = iVar31 / 3;
      uVar20 = 0;
      if ((int)uVar8 < local_218.ArrayNum) {
        uVar20 = ~uVar8 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      FVar30.Data = FVar30.Data + 8;
      *(int *)(local_218.AllocatorInstance.Data +
              ((longlong)(int)uVar8 * 3 + (longlong)(iVar31 % 3)) * 4) = iVar18;
    }
    this->AddedVerticesStartIndex = iVar5;
    `ConstrainedDelaunay2Internal::BuildFinalTriangles'::__l2::<lambda_1>::operator()
              (&local_138,&local_218);
    if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.AllocatorInstance.Data);
    }
  }
  if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.AllocatorInstance.Data);
  }
  if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.AllocatorInstance.Data);
  }
  if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.AllocatorInstance.Data);
  }
  if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AllocatorInstance.Data);
  }
  if (local_1d0.Connectivity.Ptr != (FDelaunay2Connectivity *)0x0) {
    (**(code **)&local_1d0.Connectivity.Ptr[-1].DuplicateVertices.field_0x40)
              (&local_1d0.Connectivity.Ptr[-1].DuplicateVertices.field_0x40);
  }
  return local_res18;
}

// Triangulate @ 14952aaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::TConstrainedDelaunay2<double>::Triangulate(TConstrainedDelaunay2<double> *this)

{
  int *piVar1;
  FIndex2i_u_0 *pFVar2;
  EFillRule EVar3;
  code *pcVar4;
  uint uVar5;
  TConstrainedDelaunay2<double> *pTVar6;
  FIndex2i *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  TArrayView<UE::Geometry::FIndex2i_const_,int> *pTVar14;
  TArrayView<UE::Math::TVector2<double>_const_,int> *pTVar15;
  longlong lVar16;
  longlong lVar17;
  ForElementType<FSetElementId> FVar18;
  FIndex2i_u_0 *pFVar19;
  longlong lVar20;
  uint uVar21;
  FScriptContainerElement FVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 auStackY_2e8 [32];
  undefined1 local_298;
  undefined1 local_297;
  char local_296;
  ForAnyElementType local_290;
  undefined8 local_288;
  FIndex2i_u_0 local_280;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_278;
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_268;
  undefined8 local_258;
  int local_250;
  int local_24c;
  uint local_248;
  uint uStack_244;
  uint local_240;
  uint uStack_23c;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_238;
  longlong local_228;
  FDelaunay2 local_220;
  TPairInitializer<TTuple<int,int>_&&,bool_const_&> local_200;
  ulonglong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  FIndex2i *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  int *local_1c8;
  undefined1 *local_1c0;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> local_1b8;
  ulonglong local_1a8;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_188;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_178;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_168;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_158;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_148;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_138;
  undefined4 local_11c;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_118;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_108;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_f8;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_e8;
  TSet<TTuple<TTuple<int,int>,bool>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>,FDefaultSetAllocator>
  local_d8;
  TSet<TTuple<TTuple<int,int>,bool>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  piVar1 = &(this->Triangles).ArrayMax;
  (this->Triangles).ArrayNum = 0;
  local_200.Value = (bool *)this;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Triangles).AllocatorInstance,0,piVar1);
  }
  if (((0 < (int)this->FillRule) && (this->bOrientedEdges == false)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FillRule <= EFillRule::Odd || bOrientedEdges",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\ConstrainedDelaunay2.cpp"
                         ,0x15f,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  iVar12 = (this->Vertices).ArrayNum;
  uStack_1cc = local_11c;
  local_198 = (this->Vertices).AllocatorInstance.Data;
  local_220.RandomStream.InitialSeed = 0;
  local_220.RandomStream.Seed = 0;
  local_220.bKeepFastEdgeAdjacencyData = false;
  local_220.bValidateEdges = true;
  local_220.Connectivity.Ptr = (FDelaunay2Connectivity *)0x0;
  local_220.bIsConstrained = false;
  local_220.Result = NotComputed;
  local_220.bAutomaticallyFixEdgesToDuplicateVertices = true;
  local_1d8 = (FIndex2i *)0x0;
  iStack_1d0 = 0;
  if ((iVar12 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  local_188._12_4_ = uStack_1cc;
  local_188.ArrayNum = iStack_1d0;
  local_178._12_4_ = uStack_18c;
  local_178.ArrayNum = iVar12;
  local_188.DataPtr = local_1d8;
  local_178.DataPtr = (TVector2<double> *)local_198;
  iStack_190 = iVar12;
  bVar8 = FDelaunay2::Triangulate(&local_220,&local_178,&local_188);
  if (bVar8) {
    local_220.bKeepFastEdgeAdjacencyData = true;
    local_220.bValidateEdges = false;
    pTVar14 = TArrayView<UE::Geometry::FIndex2i_const_,int>::
              TArrayView<UE::Geometry::FIndex2i_const_,int><TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_>
                        (&local_118,&this->Edges);
    local_168.DataPtr = pTVar14->DataPtr;
    local_168.ArrayNum = pTVar14->ArrayNum;
    local_168._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
    pTVar15 = TArrayView<UE::Math::TVector2<double>_const_,int>::
              TArrayView<UE::Math::TVector2<double>_const_,int><TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                        (&local_108,&this->Vertices);
    local_158.DataPtr = pTVar15->DataPtr;
    local_158.ArrayNum = pTVar15->ArrayNum;
    local_158._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
    FDelaunay2::ConstrainEdges(&local_220,&local_158,&local_168);
    pTVar14 = TArrayView<UE::Geometry::FIndex2i_const_,int>::
              TArrayView<UE::Geometry::FIndex2i_const_,int><TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_&,TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>_>
                        (&local_f8,&this->HoleEdges);
    local_148.DataPtr = pTVar14->DataPtr;
    local_148.ArrayNum = pTVar14->ArrayNum;
    local_148._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
    pTVar15 = TArrayView<UE::Math::TVector2<double>_const_,int>::
              TArrayView<UE::Math::TVector2<double>_const_,int><TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                        (&local_e8,&this->Vertices);
    local_138.DataPtr = pTVar15->DataPtr;
    local_138.ArrayNum = pTVar15->ArrayNum;
    local_138._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
    FDelaunay2::ConstrainEdges(&local_220,&local_138,&local_148);
    local_88.Elements._0_8_ = 0;
    local_88.Elements._8_8_ = 0;
    local_88.Elements._32_8_ = 0;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._48_4_ = 0xffffffff;
    local_88.Elements._52_4_ = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    local_d8.Elements._0_8_ = 0;
    local_d8.Elements._8_8_ = 0;
    local_d8.Elements._32_8_ = 0;
    local_d8.Elements._40_4_ = 0;
    local_d8.Elements._44_4_ = 0x80;
    local_d8.Elements._48_4_ = 0xffffffff;
    local_d8.Elements._52_4_ = 0;
    local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_d8.HashSize = 0;
    pFVar19 = (FIndex2i_u_0 *)(this->Edges).AllocatorInstance.Data;
    iVar12 = (this->Edges).ArrayNum;
    local_296 = '\0';
    pFVar2 = pFVar19 + iVar12;
    while( true ) {
      if ((this->Edges).ArrayNum != iVar12) {
        local_298 = 0;
        `TCheckedPointerIterator<UE::Geometry::FIndex2i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_298);
      }
      if (pFVar19 == pFVar2) break;
      local_280 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar19->_s_0;
      FDelaunay2::FixDuplicatesOnEdge(&local_220,(FIndex2i *)&local_280._s_0);
      bVar8 = FDelaunay2::HasEdge(&local_220,(FIndex2i *)&local_280._s_0,false);
      if (bVar8) {
        local_24c = local_280._s_0.A;
        local_250 = local_280._s_0.B;
        if (local_24c <= local_280._s_0.B) {
          local_250 = local_24c;
        }
        local_297 = local_280._s_0.B < local_24c;
        if (local_24c <= local_280._s_0.B) {
          local_24c = local_280._s_0.B;
        }
        local_1c8 = &local_250;
        local_1c0 = &local_297;
        TSet<TTuple<TTuple<int,int>,bool>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<TTuple<int,int>_&&,bool_const_&>_>
                  (&local_88,&local_200,(bool *)&local_1c8);
        pFVar19 = pFVar19 + 1;
      }
      else {
        local_296 = '\x01';
        pFVar19 = pFVar19 + 1;
      }
    }
    pFVar19 = (FIndex2i_u_0 *)(this->HoleEdges).AllocatorInstance.Data;
    iVar12 = (this->HoleEdges).ArrayNum;
    pFVar2 = pFVar19 + iVar12;
    while( true ) {
      if ((this->HoleEdges).ArrayNum != iVar12) {
        local_298 = 0;
        `TCheckedPointerIterator<UE::Geometry::FIndex2i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_298);
      }
      if (pFVar19 == pFVar2) break;
      local_280 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar19->_s_0;
      FDelaunay2::FixDuplicatesOnEdge(&local_220,(FIndex2i *)&local_280._s_0);
      bVar8 = FDelaunay2::HasEdge(&local_220,(FIndex2i *)&local_280._s_0,false);
      if (bVar8) {
        local_24c = local_280._s_0.A;
        local_250 = local_280._s_0.B;
        if (local_24c <= local_280._s_0.B) {
          local_250 = local_24c;
        }
        local_297 = local_280._s_0.B < local_24c;
        if (local_24c <= local_280._s_0.B) {
          local_24c = local_280._s_0.B;
        }
        local_1c8 = &local_250;
        local_1c0 = &local_297;
        TSet<TTuple<TTuple<int,int>,bool>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<TTuple<int,int>_&&,bool_const_&>_>
                  (&local_d8,&local_200,(bool *)&local_1c8);
        pFVar19 = pFVar19 + 1;
      }
      else {
        local_296 = '\x01';
        pFVar19 = pFVar19 + 1;
      }
    }
    local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.ArrayNum = 0;
    local_278.ArrayMax = 0;
    local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.ArrayNum = 0;
    local_238.ArrayMax = 0;
    FDelaunay2::GetTrianglesAndAdjacency(&local_220,&local_278,&local_238);
    iVar12 = local_238.ArrayNum;
    lVar20 = (longlong)local_238.ArrayNum;
    local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.ArrayNum = 0;
    local_268.ArrayMax = 0;
    TArray<signed_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&local_268,local_238.ArrayNum,Default);
    local_288._0_4_ = 0;
    local_290.Data = (FScriptContainerElement *)0x0;
    uVar21 = 0;
    local_288 = 0;
    local_228 = lVar20;
    if (0 < iVar12) {
      local_258 = 0;
      lVar20 = 0;
      do {
        iVar12 = 0;
        uVar24 = ~uVar21 >> 0x1f;
        lVar16 = 8;
        lVar17 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar21 < local_238.ArrayNum) {
            uVar10 = uVar24;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          if (*(int *)(local_238.AllocatorInstance.Data + lVar16 + lVar20) < 0) {
            uVar10 = 0;
            if ((int)uVar21 < local_278.ArrayNum) {
              uVar10 = uVar24;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            uVar10 = *(uint *)(local_278.AllocatorInstance.Data + lVar17 + lVar20);
            uVar11 = 0;
            if ((int)uVar21 < local_278.ArrayNum) {
              uVar11 = uVar24;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            uVar11 = *(uint *)(local_278.AllocatorInstance.Data + lVar16 + lVar20);
            uVar13 = uVar11;
            if ((int)uVar10 < (int)uVar11) {
              uVar13 = uVar10;
            }
            uVar5 = uVar11;
            if ((int)uVar11 < (int)uVar10) {
              uVar5 = uVar10;
            }
            if (local_d8.Elements._8_4_ != local_d8.Elements._52_4_) {
              FVar18 = (ForElementType<FSetElementId>)&local_d8.Hash;
              if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar18 = local_d8.Hash.SecondaryData;
              }
              iVar23 = *(int *)((longlong)FVar18 +
                               (ulonglong)
                               (local_d8.HashSize - 1U &
                               (uVar13 * 0x40 + -0x61c88647 + uVar5 + (uVar13 >> 2) ^ uVar13)) * 4);
              if (iVar23 != -1) {
                while ((lVar16 = (longlong)iVar23,
                       *(uint *)(local_d8.Elements._0_8_ + lVar16 * 0x14) != uVar13 ||
                       (*(uint *)(local_d8.Elements._0_8_ + 4 + lVar16 * 0x14) != uVar5))) {
                  iVar23 = *(int *)(local_d8.Elements._0_8_ + 0xc + lVar16 * 0x14);
                  if (iVar23 == -1) goto LAB_14952b0aa;
                }
                if (iVar23 != -1) goto LAB_14952b1ba;
              }
            }
LAB_14952b0aa:
            iVar12 = WindingAcross((TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
                                    *)&local_88,uVar10,uVar11);
            uVar24 = -iVar12;
            local_248 = uVar21;
            uStack_244 = uVar24;
            if (((local_290.Data <= (FScriptContainerElement *)&local_248) &&
                ((FScriptContainerElement *)&local_248 <
                 local_290.Data + (longlong)local_288._4_4_ * 8)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            iVar12 = (int)local_288;
            if ((int)local_288 == local_288._4_4_) {
              iVar12 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_290,(int *)((longlong)&local_288 + 4));
            }
            local_288 = CONCAT44(local_288._4_4_,iVar12 + 1);
            *(ulonglong *)(local_290.Data + (longlong)iVar12 * 8) = CONCAT44(uStack_244,local_248);
            EVar3 = *(EFillRule *)((longlong)local_200.Value + 0x34);
            if (EVar3 == Odd) {
              uVar24 = uVar24 & 1;
            }
            else if (EVar3 == NonZero) {
              uVar24 = (uint)(uVar24 != 0);
            }
            else if (EVar3 == Positive) {
              uVar24 = (uint)(0 < (int)uVar24);
            }
            else if (EVar3 == Negative) {
              uVar24 = uVar24 >> 0x1f;
            }
            else {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Public\\ConstrainedDelaunay2.h"
                                 ,0x42,L"");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
              uVar24 = 0;
            }
            FVar22 = (FScriptContainerElement)0xff;
            if (uVar24 != 0) {
              FVar22 = (FScriptContainerElement)0x1;
            }
            uVar24 = 0;
            if ((int)uVar21 < local_268.ArrayNum) {
              uVar24 = ~uVar21 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            local_268.AllocatorInstance.Data[local_258] = FVar22;
            break;
          }
LAB_14952b1ba:
          iVar12 = iVar12 + 1;
          lVar16 = lVar17;
          lVar17 = lVar17 + 4;
        } while (iVar12 < 3);
        uVar21 = uVar21 + 1;
        local_258 = local_258 + 1;
        lVar20 = lVar20 + 0xc;
      } while (local_258 < local_228);
    }
    iVar12 = 0;
    iVar23 = (int)local_288;
    pTVar6 = (TConstrainedDelaunay2<double> *)local_200.Value;
    while (local_200.Value = (bool *)pTVar6, iVar23 != 0) {
      uVar24 = (iVar12 + 1) % iVar23;
      uVar25 = (ulonglong)local_258 >> 0x20;
      local_258 = CONCAT44((int)uVar25,uVar24);
      uVar21 = 0;
      if ((int)uVar24 < iVar23) {
        uVar21 = ~uVar24 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        iVar23 = (int)local_288;
      }
      uVar25 = *(ulonglong *)(local_290.Data + (longlong)(int)uVar24 * 8);
      local_1a8 = uVar25 >> 0x20;
      uVar21 = 0;
      if ((int)uVar24 < iVar23) {
        uVar21 = ~uVar24 >> 0x1f;
      }
      local_1f0 = uVar25;
      if (uVar21 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        iVar23 = (int)local_288;
      }
      iVar12 = (iVar23 - uVar24) + -1;
      if (1 < iVar12) {
        iVar12 = 1;
      }
      if (iVar12 != 0) {
        memmove(local_290.Data + (longlong)(int)uVar24 * 8,
                local_290.Data + (longlong)(iVar23 - iVar12) * 8,(longlong)iVar12 << 3);
        iVar23 = (int)local_288;
      }
      local_288 = CONCAT44(local_288._4_4_,iVar23 + -1);
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&local_290,iVar23 + -1,(int *)((longlong)&local_288 + 4));
      local_1e8 = (longlong)(int)(uint)uVar25;
      uVar21 = ~(uint)uVar25 >> 0x1f;
      local_1e0 = 3;
      local_228 = local_1e8 * 0xc;
      local_1d8 = (FIndex2i *)(local_1e8 * 0xc);
      lVar20 = 8;
      lVar16 = 0;
      do {
        pFVar7 = local_1d8;
        lVar17 = local_228;
        iVar12 = (int)uVar25;
        uVar24 = 0;
        if (iVar12 < local_278.ArrayNum) {
          uVar24 = uVar21;
        }
        if ((uVar24 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        uVar24 = *(uint *)(local_278.AllocatorInstance.Data + (longlong)&pFVar7->field0_0x0 + lVar16
                          );
        uVar10 = 0;
        if (iVar12 < local_278.ArrayNum) {
          uVar10 = uVar21;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        uVar10 = *(uint *)(local_278.AllocatorInstance.Data + lVar17 + lVar20);
        uVar11 = uVar10;
        if ((int)uVar24 < (int)uVar10) {
          uVar11 = uVar24;
        }
        uVar13 = uVar10;
        if ((int)uVar10 < (int)uVar24) {
          uVar13 = uVar24;
        }
        if (local_d8.Elements._8_4_ != local_d8.Elements._52_4_) {
          FVar18 = (ForElementType<FSetElementId>)&local_d8.Hash;
          if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar18 = local_d8.Hash.SecondaryData;
          }
          iVar23 = *(int *)((longlong)FVar18 +
                           (ulonglong)
                           (local_d8.HashSize - 1U &
                           (uVar11 * 0x40 + -0x61c88647 + uVar13 + (uVar11 >> 2) ^ uVar11)) * 4);
          while (iVar23 != -1) {
            lVar17 = (longlong)iVar23;
            if ((*(uint *)(local_d8.Elements._0_8_ + lVar17 * 0x14) == uVar11) &&
               (*(uint *)(local_d8.Elements._0_8_ + 4 + lVar17 * 0x14) == uVar13)) {
              if (iVar23 != -1) goto LAB_14952b743;
              break;
            }
            iVar23 = *(int *)(local_d8.Elements._0_8_ + 0xc + lVar17 * 0x14);
          }
        }
        uVar11 = 0;
        if (iVar12 < local_238.ArrayNum) {
          uVar11 = uVar21;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        uVar11 = *(uint *)(local_238.AllocatorInstance.Data + lVar20 + local_228);
        if (-1 < (int)uVar11) {
          uVar13 = 0;
          if ((int)uVar11 < local_268.ArrayNum) {
            uVar13 = ~uVar11 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          uVar25 = local_1f0;
          if (local_268.AllocatorInstance.Data[(int)uVar11] == (FScriptContainerElement)0x0) {
            iVar12 = WindingAcross((TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
                                    *)&local_88,uVar24,uVar10);
            uVar24 = (int)local_1a8 + iVar12;
            local_240 = uVar11;
            uStack_23c = uVar24;
            if (((local_290.Data <= (FScriptContainerElement *)&local_240) &&
                ((FScriptContainerElement *)&local_240 <
                 local_290.Data + (longlong)local_288._4_4_ * 8)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            iVar12 = (int)local_288;
            if ((int)local_288 == local_288._4_4_) {
              iVar12 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_290,(int *)((longlong)&local_288 + 4));
            }
            local_288 = CONCAT44(local_288._4_4_,iVar12 + 1);
            *(ulonglong *)(local_290.Data + (longlong)iVar12 * 8) = CONCAT44(uStack_23c,local_240);
            EVar3 = *(EFillRule *)((longlong)local_200.Value + 0x34);
            if (EVar3 == Odd) {
              uVar24 = uVar24 & 1;
            }
            else if (EVar3 == NonZero) {
              uVar24 = (uint)(uVar24 != 0);
            }
            else if (EVar3 == Positive) {
              uVar24 = (uint)(0 < (int)uVar24);
            }
            else if (EVar3 == Negative) {
              uVar24 = uVar24 >> 0x1f;
            }
            else {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Public\\ConstrainedDelaunay2.h"
                                 ,0x42,L"");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
              uVar24 = 0;
            }
            FVar22 = (FScriptContainerElement)0xff;
            if (uVar24 != 0) {
              FVar22 = (FScriptContainerElement)0x1;
            }
            uVar24 = 0;
            if ((int)uVar11 < local_268.ArrayNum) {
              uVar24 = ~uVar11 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            local_268.AllocatorInstance.Data[(int)uVar11] = FVar22;
            uVar25 = local_1f0;
          }
        }
LAB_14952b743:
        local_1e0 = local_1e0 + -1;
        lVar20 = lVar16;
        lVar16 = lVar16 + 4;
      } while (local_1e0 != 0);
      local_1e0 = 0;
      iVar12 = (int)local_258;
      pTVar6 = (TConstrainedDelaunay2<double> *)local_200.Value;
      iVar23 = (int)local_288;
    }
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = (pTVar6->Vertices).ArrayNum;
    local_1b8.ArrayNum = 0;
    local_1b8.ArrayMax = 0;
    if (pTVar6->bSplitBowties != false) {
      ConstrainedDelaunay2Internal::SplitBowtiesHelper<double>
                (&local_1b8,&pTVar6->Vertices,&local_268,&local_278,&local_238);
    }
    ConstrainedDelaunay2Internal::BuildFinalTriangles
              (&pTVar6->Triangles,&local_1b8,&pTVar6->AddedVerticesStartIndex,&local_268,&local_278,
               iVar12,pTVar6->bOutputCCW);
    bVar8 = local_296 == '\0';
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    if (local_290.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data);
    }
    if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.AllocatorInstance.Data);
    }
    if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.AllocatorInstance.Data);
    }
    if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.AllocatorInstance.Data);
    }
    local_d8.HashSize = 0;
    if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_d8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_d8.Elements);
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
  }
  else {
    bVar8 = false;
  }
  if (local_220.Connectivity.Ptr != (FDelaunay2Connectivity *)0x0) {
    (**(code **)&local_220.Connectivity.Ptr[-1].DuplicateVertices.field_0x40)
              (&local_220.Connectivity.Ptr[-1].DuplicateVertices.field_0x40);
  }
  return bVar8;
}

