// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 56

// TConvexHull3<float> @ 143365e40

TConvexHull3<float> * __thiscall
UE::Geometry::TConvexHull3<float>::TConvexHull3<float>(TConvexHull3<float> *this)

{
  (this->SimplificationSettings).MaxHullVertices = -1;
  (this->SimplificationSettings).DegenerateEdgeTolerance = 0.0;
  (this->SimplificationSettings).SkipAtHullDistanceAbsolute = -3.4028235e+38;
  (this->SimplificationSettings).SkipAtHullDistanceAsFraction = -3.4028235e+38;
  this->Progress = (FProgressCancel *)0x0;
  this->bSaveTriangleNeighbors = false;
  *(undefined8 *)&(this->Line).Origin.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->Line).Origin.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->Line).Direction.field0_0x0 =
       UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
  (this->Line).Direction.field0_0x0._s_0.Z = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z
  ;
  this->NumHullPoints = 0;
  (this->Hull).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Hull).ArrayNum = 0;
  (this->Hull).ArrayMax = 0;
  (this->HullNeighbors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HullNeighbors).ArrayNum = 0;
  (this->HullNeighbors).ArrayMax = 0;
  return this;
}

// TConvexHull3<double> @ 143365eb0

TConvexHull3<double> * __thiscall
UE::Geometry::TConvexHull3<double>::TConvexHull3<double>(TConvexHull3<double> *this)

{
  undefined8 uVar1;
  
  (this->SimplificationSettings).MaxHullVertices = -1;
  (this->SimplificationSettings).DegenerateEdgeTolerance = 0.0;
  (this->SimplificationSettings).SkipAtHullDistanceAbsolute = -1.7976931348623157e+308;
  (this->SimplificationSettings).SkipAtHullDistanceAsFraction = -1.7976931348623157e+308;
  this->Progress = (FProgressCancel *)0x0;
  this->bSaveTriangleNeighbors = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Line).Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Line).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->Line).Origin.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  (this->Line).Direction.field0_0x0._s_0.X =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  (this->Line).Direction.field0_0x0._s_0.Y = (double)uVar1;
  (this->Line).Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  this->NumHullPoints = 0;
  (this->Hull).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Hull).ArrayNum = 0;
  (this->Hull).ArrayMax = 0;
  (this->HullNeighbors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HullNeighbors).ArrayNum = 0;
  (this->HullNeighbors).ArrayMax = 0;
  return this;
}

// ~TConvexHull3<float> @ 1433693a0

void __thiscall UE::Geometry::TConvexHull3<float>::~TConvexHull3<float>(TConvexHull3<float> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->HullNeighbors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Hull).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TConvexHull3<double> @ 1433693e0

void __thiscall
UE::Geometry::TConvexHull3<double>::~TConvexHull3<double>(TConvexHull3<double> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->HullNeighbors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Hull).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 14336b720

void __thiscall
`UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l170::<lambda_10>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,TVector<float> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this_00;
  
  pFVar2 = *(ForAnyElementType **)this;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  iVar6 = *(int *)&pFVar2[1].Data;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  this_00 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
            (pFVar2->Data + (longlong)iVar6 * 0x30);
  (this_00->AllocatorInstance).SecondaryData = (ForElementType<int>)0x0;
  this_00->ArrayNum = 0;
  this_00->ArrayMax = 8;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
  Append<int,TSizedDefaultAllocator<32>_>(this_00,param_1);
  pFVar2 = (ForAnyElementType *)**(undefined8 **)((longlong)this + 8);
  if (pFVar2 != (ForAnyElementType *)0x0) {
    if ((pFVar2->Data <= param_2) &&
       (param_2 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0xc)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar6 + 1;
    pFVar3 = pFVar2->Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0xc) = *(undefined8 *)&param_2->field0_0x0;
    *(float *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = (param_2->field0_0x0)._s_0.Z;
  }
  return;
}

// operator() @ 14336b850

void __thiscall
`UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l170::<lambda_10>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this_00;
  
  pFVar3 = *(ForAnyElementType **)this;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  iVar8 = *(int *)&pFVar3[1].Data;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar8 + 1;
  this_00 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
            (pFVar3->Data + (longlong)iVar8 * 0x30);
  (this_00->AllocatorInstance).SecondaryData = (ForElementType<int>)0x0;
  this_00->ArrayNum = 0;
  this_00->ArrayMax = 8;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
  Append<int,TSizedDefaultAllocator<32>_>(this_00,param_1);
  pFVar3 = (ForAnyElementType *)**(undefined8 **)((longlong)this + 8);
  if (pFVar3 != (ForAnyElementType *)0x0) {
    if ((pFVar3->Data <= param_2) &&
       (param_2 < pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x18)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar8 + 1;
    dVar6 = (param_2->field0_0x0)._s_0.Y;
    pFVar4 = pFVar3->Data;
    pFVar2 = pFVar4 + (longlong)iVar8 * 0x18;
    *(double *)pFVar2 = (param_2->field0_0x0)._s_0.X;
    *(double *)(pFVar2 + 8) = dVar6;
    *(double *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  }
  return;
}

// operator() @ 143371590

FVisit __thiscall
`UE::Geometry::TConvexHull3<float>::WalkBorder'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FVisit FVar9;
  undefined4 in_register_00000014;
  int iVar10;
  longlong lVar11;
  int in_R9D;
  
  FVar9._4_4_ = in_register_00000014;
  FVar9.Tri = param_1;
  plVar2 = *(longlong **)((longlong)this + 8);
  iVar10 = 0;
  uVar7 = 0;
  if (param_2 < (int)plVar2[1]) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      FVar9 = (FVisit)(*pcVar5)();
      return FVar9;
    }
  }
  plVar3 = *(longlong **)this;
  uVar7 = *(uint *)(*plVar2 + ((longlong)in_R9D + (longlong)param_2 * 3) * 4);
  lVar11 = (longlong)(int)uVar7;
  uVar8 = 0;
  if (param_2 < (int)plVar3[1]) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      FVar9 = (FVisit)(*pcVar5)();
      return FVar9;
    }
  }
  plVar2 = *(longlong **)this;
  iVar1 = in_R9D + 1;
  if (2 < in_R9D + 1) {
    iVar1 = iVar10;
  }
  iVar1 = *(int *)(*plVar3 + ((longlong)iVar1 + (longlong)param_2 * 3) * 4);
  uVar8 = 0;
  if ((int)uVar7 < (int)plVar2[1]) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      FVar9 = (FVisit)(*pcVar5)();
      return FVar9;
    }
  }
  lVar4 = *plVar2;
  if (*(int *)(lVar4 + lVar11 * 0xc) != iVar1) {
    if (*(int *)(lVar4 + 4 + lVar11 * 0xc) == iVar1) {
      iVar10 = 1;
    }
    else {
      iVar10 = -1;
      if (*(int *)(lVar4 + 8 + lVar11 * 0xc) == iVar1) {
        iVar10 = 2;
      }
    }
  }
  *(uint *)FVar9 = uVar7;
  *(char *)((longlong)FVar9 + 4) = (char)iVar10;
  return FVar9;
}

// operator() @ 143371720

FVisit __thiscall
`UE::Geometry::TConvexHull3<double>::WalkBorder'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FVisit FVar9;
  undefined4 in_register_00000014;
  int iVar10;
  longlong lVar11;
  int in_R9D;
  
  FVar9._4_4_ = in_register_00000014;
  FVar9.Tri = param_1;
  plVar2 = *(longlong **)((longlong)this + 8);
  iVar10 = 0;
  uVar7 = 0;
  if (param_2 < (int)plVar2[1]) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      FVar9 = (FVisit)(*pcVar5)();
      return FVar9;
    }
  }
  plVar3 = *(longlong **)this;
  uVar7 = *(uint *)(*plVar2 + ((longlong)in_R9D + (longlong)param_2 * 3) * 4);
  lVar11 = (longlong)(int)uVar7;
  uVar8 = 0;
  if (param_2 < (int)plVar3[1]) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      FVar9 = (FVisit)(*pcVar5)();
      return FVar9;
    }
  }
  plVar2 = *(longlong **)this;
  iVar1 = in_R9D + 1;
  if (2 < in_R9D + 1) {
    iVar1 = iVar10;
  }
  iVar1 = *(int *)(*plVar3 + ((longlong)iVar1 + (longlong)param_2 * 3) * 4);
  uVar8 = 0;
  if ((int)uVar7 < (int)plVar2[1]) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      FVar9 = (FVisit)(*pcVar5)();
      return FVar9;
    }
  }
  lVar4 = *plVar2;
  if (*(int *)(lVar4 + lVar11 * 0xc) != iVar1) {
    if (*(int *)(lVar4 + 4 + lVar11 * 0xc) == iVar1) {
      iVar10 = 1;
    }
    else {
      iVar10 = -1;
      if (*(int *)(lVar4 + 8 + lVar11 * 0xc) == iVar1) {
        iVar10 = 2;
      }
    }
  }
  *(uint *)FVar9 = uVar7;
  *(char *)((longlong)FVar9 + 4) = (char)iVar10;
  return FVar9;
}

// operator() @ 143374f90

double __thiscall
`UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l2::<lambda_2>::operator()
          (void *this,FIndex2i param_1,FIndex2i param_2,bool param_3)

{
  double *pdVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  double dVar11;
  uint local_res10;
  uint uStackX_14;
  undefined4 uStackX_1c;
  undefined4 local_res20 [2];
  undefined4 local_78 [2];
  longlong *local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  
  local_res10 = param_1.field0_0x0._0_4_;
  uStackX_14 = param_1.field0_0x0._4_4_;
  if (param_3) {
    local_res10 = UE::Geometry::FSizedDisjointSet::Find(*(FSizedDisjointSet **)this,local_res10);
    uStackX_14 = UE::Geometry::FSizedDisjointSet::Find(*(FSizedDisjointSet **)this,uStackX_14);
    if (local_res10 == uStackX_14) {
      return __real_4010000000000000;
    }
  }
  plVar2 = *(longlong **)((longlong)this + 8);
  uVar7 = 0;
  if ((int)local_res10 < (int)plVar2[1]) {
    uVar7 = ~local_res10 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    dVar11 = (double)(*pcVar5)();
    return dVar11;
  }
  dVar11 = *(double *)(*plVar2 + (longlong)(int)local_res10 * 8);
  local_70 = *(longlong **)((longlong)this + 8);
  uVar7 = 0;
  if ((int)uStackX_14 < (int)local_70[1]) {
    uVar7 = ~uStackX_14 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    dVar11 = (double)(*pcVar5)();
    return dVar11;
  }
  lVar10 = (longlong)(int)uStackX_14;
  pdVar1 = (double *)(*local_70 + lVar10 * 8);
  cVar9 = (*pdVar1 <= __real_3e45798ee2308c3a && __real_3e45798ee2308c3a != *pdVar1) +
          (dVar11 < __real_3e45798ee2308c3a);
  if (cVar9 == '\x01') {
    local_res20[0] = param_2.field0_0x0._0_4_;
    (*(code *)**(undefined8 **)((longlong)this + 0x18))
              (&local_5c,(*(undefined8 **)((longlong)this + 0x18))[1],local_res20);
    uStackX_1c = param_2.field0_0x0._4_4_;
    local_78[0] = uStackX_1c;
    (*(code *)**(undefined8 **)((longlong)this + 0x18))
              (&local_68,(*(undefined8 **)((longlong)this + 0x18))[1],local_78);
    dVar11 = ((double)local_64 - (double)local_58) * ((double)local_64 - (double)local_58) +
             ((double)local_68 - (double)local_5c) * ((double)local_68 - (double)local_5c) +
             ((double)local_60 - (double)local_54) * ((double)local_60 - (double)local_54);
    dVar11 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar11,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  else if (cVar9 == '\x02') {
    dVar11 = 0.0;
  }
  else {
    local_70 = *(longlong **)((longlong)this + 0x10);
    uVar7 = 0;
    if ((int)local_res10 < (int)local_70[1]) {
      uVar7 = ~local_res10 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      dVar11 = (double)(*pcVar5)();
      return dVar11;
    }
    plVar2 = *(longlong **)((longlong)this + 0x10);
    lVar8 = (longlong)(int)local_res10;
    lVar3 = *local_70;
    uVar7 = 0;
    if ((int)uStackX_14 < (int)plVar2[1]) {
      uVar7 = ~uStackX_14 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      dVar11 = (double)(*pcVar5)();
      return dVar11;
    }
    lVar4 = *plVar2;
    dVar11 = __real_3ff0000000000000 -
             (*(double *)(lVar4 + 8 + lVar10 * 0x18) * *(double *)(lVar3 + 8 + lVar8 * 0x18) +
              *(double *)(lVar4 + lVar10 * 0x18) * *(double *)(lVar3 + lVar8 * 0x18) +
             *(double *)(lVar4 + 0x10 + lVar10 * 0x18) * *(double *)(lVar3 + 0x10 + lVar8 * 0x18));
  }
  return dVar11;
}

// operator() @ 1433752d0

double __thiscall
`UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l2::<lambda_2>::operator()
          (void *this,FIndex2i param_1,FIndex2i param_2,bool param_3)

{
  double *pdVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  double dVar11;
  uint local_res10;
  uint uStackX_14;
  undefined4 uStackX_1c;
  undefined4 local_res20 [2];
  undefined4 local_88 [2];
  longlong *local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  local_res10 = param_1.field0_0x0._0_4_;
  uStackX_14 = param_1.field0_0x0._4_4_;
  if (param_3) {
    local_res10 = UE::Geometry::FSizedDisjointSet::Find(*(FSizedDisjointSet **)this,local_res10);
    uStackX_14 = UE::Geometry::FSizedDisjointSet::Find(*(FSizedDisjointSet **)this,uStackX_14);
    if (local_res10 == uStackX_14) {
      return __real_4010000000000000;
    }
  }
  plVar2 = *(longlong **)((longlong)this + 8);
  uVar7 = 0;
  if ((int)local_res10 < (int)plVar2[1]) {
    uVar7 = ~local_res10 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    dVar11 = (double)(*pcVar5)();
    return dVar11;
  }
  dVar11 = *(double *)(*plVar2 + (longlong)(int)local_res10 * 8);
  local_80 = *(longlong **)((longlong)this + 8);
  uVar7 = 0;
  if ((int)uStackX_14 < (int)local_80[1]) {
    uVar7 = ~uStackX_14 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    dVar11 = (double)(*pcVar5)();
    return dVar11;
  }
  lVar10 = (longlong)(int)uStackX_14;
  pdVar1 = (double *)(*local_80 + lVar10 * 8);
  cVar9 = (*pdVar1 <= __real_3e45798ee2308c3a && __real_3e45798ee2308c3a != *pdVar1) +
          (dVar11 < __real_3e45798ee2308c3a);
  if (cVar9 == '\x01') {
    local_res20[0] = param_2.field0_0x0._0_4_;
    (*(code *)**(undefined8 **)((longlong)this + 0x18))
              (&local_60,(*(undefined8 **)((longlong)this + 0x18))[1],local_res20);
    uStackX_1c = param_2.field0_0x0._4_4_;
    local_88[0] = uStackX_1c;
    (*(code *)**(undefined8 **)((longlong)this + 0x18))
              (&local_78,(*(undefined8 **)((longlong)this + 0x18))[1],local_88);
    dVar11 = (local_70 - local_58) * (local_70 - local_58) +
             (local_78 - local_60) * (local_78 - local_60) +
             (local_68 - local_50) * (local_68 - local_50);
    dVar11 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar11,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  else if (cVar9 == '\x02') {
    dVar11 = 0.0;
  }
  else {
    local_80 = *(longlong **)((longlong)this + 0x10);
    uVar7 = 0;
    if ((int)local_res10 < (int)local_80[1]) {
      uVar7 = ~local_res10 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      dVar11 = (double)(*pcVar5)();
      return dVar11;
    }
    plVar2 = *(longlong **)((longlong)this + 0x10);
    lVar8 = (longlong)(int)local_res10;
    lVar3 = *local_80;
    uVar7 = 0;
    if ((int)uStackX_14 < (int)plVar2[1]) {
      uVar7 = ~uStackX_14 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      dVar11 = (double)(*pcVar5)();
      return dVar11;
    }
    lVar4 = *plVar2;
    dVar11 = __real_3ff0000000000000 -
             (*(double *)(lVar4 + 8 + lVar10 * 0x18) * *(double *)(lVar3 + 8 + lVar8 * 0x18) +
              *(double *)(lVar3 + lVar8 * 0x18) * *(double *)(lVar4 + lVar10 * 0x18) +
             *(double *)(lVar4 + 0x10 + lVar10 * 0x18) * *(double *)(lVar3 + 0x10 + lVar8 * 0x18));
  }
  return dVar11;
}

// operator() @ 143376110

bool __thiscall
`UE::Geometry::TConvexHull3<float>::GetFaces'::__l7::<lambda_2>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  plVar1 = *(longlong **)this;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(int *)(*plVar1 + (longlong)param_1 * 4) == **(int **)((longlong)this + 8);
}

// operator() @ 1433761a0

bool __thiscall
`UE::Geometry::TConvexHull3<double>::GetFaces'::__l7::<lambda_2>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  plVar1 = *(longlong **)this;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(int *)(*plVar1 + (longlong)param_1 * 4) == **(int **)((longlong)this + 8);
}

// operator() @ 14337b290

bool __thiscall
`UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l2::<lambda_5>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  plVar1 = *(longlong **)this;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(int *)(*plVar1 + 8 + (longlong)param_1 * 0xc) != -1;
}

// operator() @ 14337b310

bool __thiscall
`UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l2::<lambda_5>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  plVar1 = *(longlong **)this;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(int *)(*plVar1 + 8 + (longlong)param_1 * 0xc) != -1;
}

// operator() @ 14337be70

void __thiscall
`UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l168::<lambda_9>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,TVector<float> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this_00;
  
  pFVar2 = *(ForAnyElementType **)this;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  iVar6 = *(int *)&pFVar2[1].Data;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  this_00 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
            (pFVar2->Data + (longlong)iVar6 * 0x30);
  (this_00->AllocatorInstance).SecondaryData = (ForElementType<int>)0x0;
  this_00->ArrayNum = 0;
  this_00->ArrayMax = 8;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
  Append<int,TSizedDefaultAllocator<32>_>(this_00,param_1);
  pFVar2 = (ForAnyElementType *)**(undefined8 **)((longlong)this + 8);
  if (pFVar2 != (ForAnyElementType *)0x0) {
    if ((pFVar2->Data <= param_2) &&
       (param_2 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0xc)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar6 + 1;
    pFVar3 = pFVar2->Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0xc) = *(undefined8 *)&param_2->field0_0x0;
    *(float *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = (param_2->field0_0x0)._s_0.Z;
  }
  return;
}

// operator() @ 14337bfa0

void __thiscall
`UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l168::<lambda_9>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this_00;
  
  pFVar3 = *(ForAnyElementType **)this;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  iVar8 = *(int *)&pFVar3[1].Data;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar8 + 1;
  this_00 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
            (pFVar3->Data + (longlong)iVar8 * 0x30);
  (this_00->AllocatorInstance).SecondaryData = (ForElementType<int>)0x0;
  this_00->ArrayNum = 0;
  this_00->ArrayMax = 8;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
  Append<int,TSizedDefaultAllocator<32>_>(this_00,param_1);
  pFVar3 = (ForAnyElementType *)**(undefined8 **)((longlong)this + 8);
  if (pFVar3 != (ForAnyElementType *)0x0) {
    if ((pFVar3->Data <= param_2) &&
       (param_2 < pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x18)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar8 + 1;
    dVar6 = (param_2->field0_0x0)._s_0.Y;
    pFVar4 = pFVar3->Data;
    pFVar2 = pFVar4 + (longlong)iVar8 * 0x18;
    *(double *)pFVar2 = (param_2->field0_0x0)._s_0.X;
    *(double *)(pFVar2 + 8) = dVar6;
    *(double *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  }
  return;
}

// ComputeVolume @ 1433932f0

double __cdecl
UE::Geometry::TConvexHull3<float>::ComputeVolume
          (TArrayView<UE::Math::TVector<float>_const_,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  int iVar7;
  TVector<float> *pTVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  bool bVar13;
  longlong lVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  double dVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<UE::Math::TVector<float>_const_,int> *local_res18;
  int local_148;
  int iStack_144;
  TConvexHull3<float> local_138;
  code *local_c8;
  undefined1 *local_c0;
  code *local_b8;
  TArrayView<UE::Math::TVector<float>_const_,int> **local_b0;
  
  local_138.Line.Origin.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_138.Line.Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  local_c0 = local_res10;
  local_c8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::Solve'::__l2::<lambda_1>,bool,int>
             ::Call;
  local_b8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::ComputeVolume'::__l2::<lambda_1>,UE::Math::TVector<float>,int>
             ::Call;
  local_b0 = &local_res18;
  local_138.Line.Origin.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_138.bSaveTriangleNeighbors = false;
  local_138.SimplificationSettings.DegenerateEdgeTolerance = 0.0;
  local_138.SimplificationSettings.MaxHullVertices = -1;
  local_138.SimplificationSettings.SkipAtHullDistanceAbsolute = -3.4028235e+38;
  local_138.SimplificationSettings.SkipAtHullDistanceAsFraction = -3.4028235e+38;
  local_138.Progress = (FProgressCancel *)0x0;
  local_138.Line.Direction.field0_0x0._0_8_ = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_
  ;
  local_138.NumHullPoints = 0;
  local_138.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Hull.ArrayNum = 0;
  local_138.Hull.ArrayMax = 0;
  local_138.HullNeighbors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.HullNeighbors.ArrayNum = 0;
  local_138.HullNeighbors.ArrayMax = 0;
  local_res18 = param_1;
  bVar13 = Solve(&local_138,param_1->ArrayNum,
                 (TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *)&local_b8,
                 (TFunctionRef<bool___cdecl(int)> *)&local_c8);
  dVar17 = 0.0;
  if (bVar13) {
    iVar12 = local_138.Hull.ArrayNum;
    pFVar1 = local_138.Hull.AllocatorInstance.Data + (longlong)local_138.Hull.ArrayNum * 0xc;
    FVar16.Data = local_138.Hull.AllocatorInstance.Data;
    while( true ) {
      if (local_138.Hull.ArrayNum != iVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (FVar16.Data == pFVar1) break;
      lVar6 = *(longlong *)FVar16.Data;
      iVar7 = *(int *)(FVar16.Data + 8);
      local_148 = (int)lVar6;
      lVar14 = (longlong)local_148;
      if (local_148 < 0 || param_1->ArrayNum <= local_148) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar13) {
          pcVar9 = (code *)swi(3);
          dVar17 = (double)(*pcVar9)();
          return dVar17;
        }
      }
      pTVar8 = param_1->DataPtr;
      iStack_144 = (int)((ulonglong)lVar6 >> 0x20);
      lVar15 = (longlong)iStack_144;
      fVar2 = pTVar8[lVar14].field0_0x0._s_0.X;
      dVar10 = (double)pTVar8[lVar14].field0_0x0._s_0.Y;
      dVar11 = (double)pTVar8[lVar14].field0_0x0._s_0.Z;
      if (lVar6 < 0 || param_1->ArrayNum <= iStack_144) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar13) {
          pcVar9 = (code *)swi(3);
          dVar17 = (double)(*pcVar9)();
          return dVar17;
        }
      }
      pTVar8 = param_1->DataPtr;
      fVar3 = pTVar8[lVar15].field0_0x0._s_0.X;
      fVar4 = pTVar8[lVar15].field0_0x0._s_0.Y;
      fVar5 = pTVar8[lVar15].field0_0x0._s_0.Z;
      if (iVar7 < 0 || param_1->ArrayNum <= iVar7) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar13) {
          pcVar9 = (code *)swi(3);
          dVar17 = (double)(*pcVar9)();
          return dVar17;
        }
      }
      pTVar8 = param_1->DataPtr;
      FVar16.Data = FVar16.Data + 0xc;
      dVar17 = dVar17 + (((double)pTVar8[iVar7].field0_0x0._s_0.Y - dVar10) *
                         ((double)fVar5 - dVar11) -
                        ((double)pTVar8[iVar7].field0_0x0._s_0.Z - dVar11) *
                        ((double)fVar4 - dVar10)) *
                        ((double)fVar3 + (double)fVar2 + (double)pTVar8[iVar7].field0_0x0._s_0.X);
    }
    dVar17 = dVar17 * __real_3fc5555555555555;
  }
  if (local_138.HullNeighbors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.HullNeighbors.AllocatorInstance.Data);
  }
  if (local_138.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Hull.AllocatorInstance.Data);
  }
  return dVar17;
}

// ComputeVolume @ 1433936b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl
UE::Geometry::TConvexHull3<double>::ComputeVolume
          (TArrayView<UE::Math::TVector<double>_const_,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  TVector<double> *pTVar2;
  longlong lVar3;
  double dVar4;
  int iVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  bool bVar13;
  ForAnyElementType FVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<UE::Math::TVector<double>_const_,int> *local_res18;
  int local_178;
  int iStack_174;
  code *local_168;
  undefined1 *local_160;
  code *local_158;
  TArrayView<UE::Math::TVector<double>_const_,int> **local_150;
  TConvexHull3<double> local_148;
  double local_88;
  double local_70;
  
  dVar7 = 0.0;
  local_148.SimplificationSettings.SkipAtHullDistanceAbsolute =
       ___xmm_ffefffffffffffffffefffffffffffff;
  local_148.SimplificationSettings.SkipAtHullDistanceAsFraction = _UNK_1508ffb58;
  local_160 = local_res10;
  local_148.SimplificationSettings.DegenerateEdgeTolerance = 0.0;
  local_168 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::Solve'::__l2::<lambda_1>,bool,int>
              ::Call;
  local_148.Line.Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_148.Line.Origin.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_158 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::ComputeVolume'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
              ::Call;
  local_150 = &local_res18;
  local_148.Line.Origin.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_148.bSaveTriangleNeighbors = false;
  local_148.SimplificationSettings.MaxHullVertices = -1;
  local_148.Progress = (FProgressCancel *)0x0;
  local_148.Line.Direction.field0_0x0._s_0.X =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  local_148.Line.Direction.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  local_148.Line.Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  local_148.NumHullPoints = 0;
  local_148.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Hull.ArrayNum = 0;
  local_148.Hull.ArrayMax = 0;
  local_148.HullNeighbors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.HullNeighbors.ArrayNum = 0;
  local_148.HullNeighbors.ArrayMax = 0;
  local_res18 = param_1;
  bVar13 = Solve(&local_148,param_1->ArrayNum,
                 (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_158,
                 (TFunctionRef<bool___cdecl(int)> *)&local_168);
  if (bVar13) {
    iVar12 = local_148.Hull.ArrayNum;
    pFVar1 = local_148.Hull.AllocatorInstance.Data + (longlong)local_148.Hull.ArrayNum * 0xc;
    FVar14.Data = local_148.Hull.AllocatorInstance.Data;
    while( true ) {
      if (local_148.Hull.ArrayNum != iVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (FVar14.Data == pFVar1) break;
      lVar3 = *(longlong *)FVar14.Data;
      iVar5 = *(int *)(FVar14.Data + 8);
      local_178 = (int)lVar3;
      if (local_178 < 0 || param_1->ArrayNum <= local_178) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar13) {
          pcVar6 = (code *)swi(3);
          dVar7 = (double)(*pcVar6)();
          return dVar7;
        }
      }
      iStack_174 = (int)((ulonglong)lVar3 >> 0x20);
      local_88 = param_1->DataPtr[local_178].field0_0x0._s_0.Z;
      pTVar2 = param_1->DataPtr + local_178;
      dVar8 = (pTVar2->field0_0x0)._s_0.X;
      dVar9 = (pTVar2->field0_0x0)._s_0.Y;
      if (lVar3 < 0 || param_1->ArrayNum <= iStack_174) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar13) {
          pcVar6 = (code *)swi(3);
          dVar7 = (double)(*pcVar6)();
          return dVar7;
        }
      }
      local_70 = param_1->DataPtr[iStack_174].field0_0x0._s_0.Z;
      pTVar2 = param_1->DataPtr + iStack_174;
      dVar10 = (pTVar2->field0_0x0)._s_0.X;
      dVar11 = (pTVar2->field0_0x0)._s_0.Y;
      if (iVar5 < 0 || param_1->ArrayNum <= iVar5) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar13) {
          pcVar6 = (code *)swi(3);
          dVar7 = (double)(*pcVar6)();
          return dVar7;
        }
      }
      FVar14.Data = FVar14.Data + 0xc;
      pTVar2 = param_1->DataPtr + iVar5;
      dVar4 = param_1->DataPtr[iVar5].field0_0x0._s_0.Z;
      dVar7 = dVar7 + (((pTVar2->field0_0x0)._s_0.Y - dVar9) * (local_70 - local_88) -
                      (dVar4 - local_88) * (dVar11 - dVar9)) *
                      (dVar10 + dVar8 + (pTVar2->field0_0x0)._s_0.X);
      local_88 = dVar4;
    }
    dVar7 = dVar7 * __real_3fc5555555555555;
  }
  if (local_148.HullNeighbors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.HullNeighbors.AllocatorInstance.Data);
  }
  if (local_148.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Hull.AllocatorInstance.Data);
  }
  return dVar7;
}

// Empty @ 14339bfe0

void __thiscall UE::Geometry::TConvexHull3<float>::Empty(TConvexHull3<float> *this)

{
  int *piVar1;
  
  this->Dimension = 0;
  piVar1 = &(this->Hull).ArrayMax;
  this->NumHullPoints = 0;
  (this->Hull).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Hull).AllocatorInstance,0,piVar1);
  }
  return;
}

// Empty @ 14339c030

void __thiscall UE::Geometry::TConvexHull3<double>::Empty(TConvexHull3<double> *this)

{
  int *piVar1;
  
  this->Dimension = 0;
  piVar1 = &(this->Hull).ArrayMax;
  this->NumHullPoints = 0;
  (this->Hull).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Hull).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetDimension @ 1433a35a0

int __thiscall UE::Geometry::TConvexHull3<float>::GetDimension(TConvexHull3<float> *this)

{
  return this->Dimension;
}

// GetDimension @ 1433a35b0

int __thiscall UE::Geometry::TConvexHull3<double>::GetDimension(TConvexHull3<double> *this)

{
  return this->Dimension;
}

// GetFaces @ 1433a38d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TConvexHull3<float>::GetFaces
          (TConvexHull3<float> *this,
          TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<float>)>
          *param_1,TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStackY_2b8 [32];
  ForAnyElementType local_268;
  undefined8 local_260;
  uint local_258;
  char local_254;
  undefined1 local_253 [3];
  int local_250 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_248;
  int local_238;
  uint local_234;
  TArray<int,TSizedDefaultAllocator<32>_> local_230;
  int local_220 [2];
  undefined4 local_218 [2];
  undefined4 local_210 [2];
  undefined4 local_208;
  int local_200 [2];
  undefined4 local_1f8 [2];
  undefined4 local_1f0 [2];
  undefined4 local_1e8;
  longlong local_1e0;
  int *local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<float>)>
  *local_198;
  undefined8 local_188;
  float local_180;
  TArray<int,TSizedDefaultAllocator<32>_> *local_178;
  int *local_170;
  code *local_168;
  TArray<int,TSizedDefaultAllocator<32>_> **local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  piVar1 = &(this->Hull).ArrayNum;
  local_1d8 = piVar1;
  local_198 = param_1;
  if ((this->bSaveTriangleNeighbors == false) || ((this->HullNeighbors).ArrayNum != *piVar1)) {
    local_253[0] = 0;
    bVar6 = `UE::Geometry::TConvexHull3<float>::GetFaces'::__l3::<lambda_1>::operator()(local_253);
    if (!bVar6) {
      return;
    }
  }
  local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.ArrayNum = 0;
  local_230.ArrayMax = 0;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  local_220[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_248,local_220,*piVar1);
  fVar5 = __real_3f800000;
  local_238 = 0;
  local_234 = 0;
  if (0 < *piVar1) {
    local_1e0 = 0;
    iVar7 = local_248.ArrayNum;
    do {
      lVar15 = local_1e0;
      uVar8 = local_234;
      iVar14 = local_238;
      uVar10 = ~local_234;
      uVar9 = 0;
      if ((int)local_234 < iVar7) {
        uVar9 = uVar10 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = local_248.ArrayNum;
      }
      if (*(int *)(local_248.AllocatorInstance.Data + lVar15 * 4) < 0) {
        uVar9 = 0;
        if ((int)uVar8 < iVar7) {
          uVar9 = uVar10 >> 0x1f;
        }
        local_250[0] = local_238;
        iVar7 = local_238 + 1;
        if ((uVar9 == 0) &&
           (local_238 = local_238 + 1,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           iVar7 = local_238, bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_238 = iVar7;
        lVar12 = local_260;
        *(int *)(local_248.AllocatorInstance.Data + lVar15 * 4) = iVar14;
        uVar9 = local_260._4_4_;
        local_260 = (ulonglong)local_260._4_4_ << 0x20;
        if ((lVar12 < 0) && (uVar9 != 0)) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_268,0,(int *)((longlong)&local_260 + 4));
        }
        uVar9 = 0;
        if ((int)uVar8 < (this->Hull).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Hull).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar8 < (this->HullNeighbors).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar11 = (this->HullNeighbors).AllocatorInstance.Data + lVar15 * 0xc;
        local_218[0] = *(undefined4 *)(pFVar3 + lVar15 * 0xc);
        (**(code **)param_2)(&local_f8,*(undefined8 *)&param_2->field_0x8,local_218);
        local_210[0] = *(undefined4 *)(pFVar3 + lVar15 * 0xc + 4);
        (**(code **)param_2)(&local_ec,*(undefined8 *)&param_2->field_0x8,local_210);
        local_208 = *(undefined4 *)(pFVar3 + lVar15 * 0xc + 8);
        (**(code **)param_2)(&local_e0,*(undefined8 *)&param_2->field_0x8);
        fVar19 = (local_d8 - local_f0) * (local_ec - local_f8) -
                 (local_e4 - local_f0) * (local_e0 - local_f8);
        fVar20 = (local_dc - local_f4) * (local_e4 - local_f0) -
                 (local_e8 - local_f4) * (local_d8 - local_f0);
        fVar18 = (local_e8 - local_f4) * (local_e0 - local_f8) -
                 (local_dc - local_f4) * (local_ec - local_f8);
        fVar16 = SQRT(fVar20 * fVar20 + fVar19 * fVar19 + fVar18 * fVar18);
        if (fVar16 <= 0.0) {
          fVar20 = 0.0;
          fVar19 = 0.0;
          fVar16 = 0.0;
        }
        else {
          fVar16 = fVar5 / fVar16;
          fVar20 = fVar16 * fVar20;
          fVar19 = fVar16 * fVar19;
          fVar16 = fVar16 * fVar18;
        }
        local_254 = 0.0 < fVar19 * fVar19 + fVar20 * fVar20 + fVar16 * fVar16;
        if (((local_268.Data <= pFVar11) &&
            (pFVar11 < local_268.Data + (longlong)(int)local_260._4_4_ * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = (int)local_260;
        if ((int)local_260 == local_260._4_4_) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_268,(int *)((longlong)&local_260 + 4));
        }
        iVar14 = iVar7 + 1;
        pFVar2 = pFVar11 + 4;
        *(undefined4 *)(local_268.Data + (longlong)iVar7 * 4) = *(undefined4 *)pFVar11;
        local_260._0_4_ = iVar14;
        if (((local_268.Data <= pFVar2) &&
            (pFVar2 < local_268.Data + (longlong)(int)local_260._4_4_ * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((int)local_260 == local_260._4_4_) {
          local_260._0_4_ =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_268,(int *)((longlong)&local_260 + 4));
        }
        iVar7 = (int)local_260 + 1;
        pFVar11 = pFVar11 + 8;
        *(undefined4 *)(local_268.Data + (longlong)(int)local_260 * 4) = *(undefined4 *)pFVar2;
        local_260._0_4_ = iVar7;
        if (((local_268.Data <= pFVar11) &&
            (pFVar11 < local_268.Data + (longlong)(int)local_260._4_4_ * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = (int)local_260;
        if ((int)local_260 == local_260._4_4_) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_268,(int *)((longlong)&local_260 + 4));
        }
        local_260 = CONCAT44(local_260._4_4_,iVar7 + 1);
        *(undefined4 *)(local_268.Data + (longlong)iVar7 * 4) = *(undefined4 *)pFVar11;
        lVar12 = local_230._8_8_;
        iVar7 = iVar7 + 1;
        while (0 < iVar7) {
          local_230._8_8_ = lVar12;
          if (((int)local_260 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (int)local_260 + -1;
          uVar8 = *(uint *)(local_268.Data + (longlong)iVar7 * 4);
          lVar12 = (longlong)(int)uVar8;
          iVar14 = ((int)local_260 - iVar7) + -1;
          if (iVar14 != 0) {
            memmove(local_268.Data + (longlong)iVar7 * 4,local_268.Data + (longlong)iVar7 * 4 + 4,
                    (longlong)iVar14 << 2);
          }
          local_260 = CONCAT44(local_260._4_4_,(int)local_260 + -1);
          uVar9 = 0;
          if ((int)uVar8 < local_248.ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)(local_248.AllocatorInstance.Data + lVar12 * 4) < 0) {
            uVar9 = 0;
            if ((int)uVar8 < local_248.ArrayNum) {
              uVar9 = ~uVar8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (-1 - local_250[0] <= *(int *)(local_248.AllocatorInstance.Data + lVar12 * 4)) {
              uVar9 = 0;
              if ((int)uVar8 < (this->Hull).ArrayNum) {
                uVar9 = ~uVar8 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              bVar6 = false;
              lVar13 = 0;
              pFVar11 = (this->Hull).AllocatorInstance.Data + lVar12 * 0xc;
              do {
                iVar7 = *(int *)(pFVar11 + lVar13 * 4);
                if (((iVar7 != *(int *)(pFVar3 + lVar15 * 0xc)) &&
                    (iVar7 != *(int *)(pFVar3 + lVar15 * 0xc + 4))) &&
                   (iVar7 != *(int *)(pFVar3 + lVar15 * 0xc + 8))) {
                  local_200[0] = iVar7;
                  (**(code **)param_2)(&local_1d0,*(undefined8 *)&param_2->field_0x8,local_200);
                  local_110 = (double)local_f8;
                  local_108 = (double)local_f4;
                  local_100 = (double)local_f0;
                  local_128 = (double)local_ec;
                  local_120 = (double)local_e8;
                  local_118 = (double)local_e4;
                  local_140 = (double)local_e0;
                  local_138 = (double)local_dc;
                  local_130 = (double)local_d8;
                  local_158 = (double)local_1d0;
                  local_150 = (double)local_1cc;
                  local_148 = (double)local_1c8;
                  dVar17 = ShewchukExactPredicates::orient3d
                                     (&local_110,&local_128,&local_140,&local_158);
                  if ((dVar17 >= 0.0 && dVar17 != 0.0) || (dVar17 < 0.0)) {
                    uVar9 = ~uVar8 >> 0x1f;
                    goto LAB_1433a431e;
                  }
                  bVar6 = true;
                }
                iVar7 = local_250[0];
                lVar13 = lVar13 + 1;
              } while (lVar13 < 3);
              uVar9 = ~uVar8 >> 0x1f;
              if (bVar6) {
                uVar10 = 0;
                if ((int)uVar8 < local_248.ArrayNum) {
                  uVar10 = uVar9;
                }
                if ((uVar10 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(int *)(local_248.AllocatorInstance.Data + lVar12 * 4) = iVar7;
                if (local_254 == '\0') {
                  local_1f8[0] = *(undefined4 *)(pFVar11 + 8);
                  (**(code **)param_2)(&local_1c0,*(undefined8 *)&param_2->field_0x8,local_1f8);
                  local_1f0[0] = *(undefined4 *)(pFVar11 + 4);
                  (**(code **)param_2)(&local_1a8,*(undefined8 *)&param_2->field_0x8,local_1f0);
                  local_1e8 = *(undefined4 *)pFVar11;
                  (**(code **)param_2)(&local_1b4,*(undefined8 *)&param_2->field_0x8);
                  fVar19 = (local_1b8 - local_1ac) * (local_1a8 - local_1b4) -
                           (local_1a0 - local_1ac) * (local_1c0 - local_1b4);
                  fVar18 = (local_1bc - local_1b0) * (local_1a0 - local_1ac) -
                           (local_1a4 - local_1b0) * (local_1b8 - local_1ac);
                  fVar16 = (local_1a4 - local_1b0) * (local_1c0 - local_1b4) -
                           (local_1bc - local_1b0) * (local_1a8 - local_1b4);
                  fVar20 = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar16 * fVar16);
                  if (fVar20 <= 0.0) {
                    fVar16 = 0.0;
                    fVar19 = 0.0;
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = fVar5 / fVar20;
                    fVar16 = fVar20 * fVar16;
                    fVar19 = fVar20 * fVar19;
                    fVar20 = fVar20 * fVar18;
                  }
                  local_254 = 0.0 < fVar19 * fVar19 + fVar20 * fVar20 + fVar16 * fVar16;
                }
                uVar9 = 0;
                if ((int)uVar8 < (this->HullNeighbors).ArrayNum) {
                  uVar9 = ~uVar8 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar11 = (this->HullNeighbors).AllocatorInstance.Data;
                local_258 = *(uint *)(pFVar11 + lVar12 * 0xc);
                lVar13 = (longlong)(int)local_258;
                uVar8 = 0;
                if ((int)local_258 < local_248.ArrayNum) {
                  uVar8 = ~local_258 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (*(int *)(local_248.AllocatorInstance.Data + lVar13 * 4) < 0) {
                  lVar13 = (longlong)(int)local_258;
                  uVar8 = 0;
                  if ((int)local_258 < local_248.ArrayNum) {
                    uVar8 = ~local_258 >> 0x1f;
                  }
                  if ((uVar8 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (-1 - local_250[0] <= *(int *)(local_248.AllocatorInstance.Data + lVar13 * 4))
                  {
                    if (((local_268.Data <= (FScriptContainerElement *)&local_258) &&
                        ((FScriptContainerElement *)&local_258 <
                         local_268.Data + (longlong)(int)local_260._4_4_ * 4)) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    iVar7 = (int)local_260;
                    if ((int)local_260 == local_260._4_4_) {
                      iVar7 = Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&local_268,(int *)((longlong)&local_260 + 4));
                    }
                    local_260 = CONCAT44(local_260._4_4_,iVar7 + 1);
                    *(uint *)(local_268.Data + (longlong)iVar7 * 4) = local_258;
                  }
                }
                local_258 = *(uint *)(pFVar11 + lVar12 * 0xc + 4);
                lVar13 = (longlong)(int)local_258;
                uVar8 = 0;
                if ((int)local_258 < local_248.ArrayNum) {
                  uVar8 = ~local_258 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (*(int *)(local_248.AllocatorInstance.Data + lVar13 * 4) < 0) {
                  lVar13 = (longlong)(int)local_258;
                  uVar8 = 0;
                  if ((int)local_258 < local_248.ArrayNum) {
                    uVar8 = ~local_258 >> 0x1f;
                  }
                  if ((uVar8 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (-1 - local_250[0] <= *(int *)(local_248.AllocatorInstance.Data + lVar13 * 4))
                  {
                    if (((local_268.Data <= (FScriptContainerElement *)&local_258) &&
                        ((FScriptContainerElement *)&local_258 <
                         local_268.Data + (longlong)(int)local_260._4_4_ * 4)) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    iVar7 = (int)local_260;
                    if ((int)local_260 == local_260._4_4_) {
                      iVar7 = Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&local_268,(int *)((longlong)&local_260 + 4));
                    }
                    local_260 = CONCAT44(local_260._4_4_,iVar7 + 1);
                    *(uint *)(local_268.Data + (longlong)iVar7 * 4) = local_258;
                  }
                }
                local_258 = *(uint *)(pFVar11 + lVar12 * 0xc + 8);
                lVar12 = (longlong)(int)local_258;
                uVar8 = 0;
                if ((int)local_258 < local_248.ArrayNum) {
                  uVar8 = ~local_258 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (*(int *)(local_248.AllocatorInstance.Data + lVar12 * 4) < 0) {
                  lVar12 = (longlong)(int)local_258;
                  uVar8 = 0;
                  if ((int)local_258 < local_248.ArrayNum) {
                    uVar8 = ~local_258 >> 0x1f;
                  }
                  if ((uVar8 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (-1 - local_250[0] <= *(int *)(local_248.AllocatorInstance.Data + lVar12 * 4))
                  {
                    if (((local_268.Data <= (FScriptContainerElement *)&local_258) &&
                        ((FScriptContainerElement *)&local_258 <
                         local_268.Data + (longlong)(int)local_260._4_4_ * 4)) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    iVar7 = (int)local_260;
                    if ((int)local_260 == local_260._4_4_) {
                      iVar7 = Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&local_268,(int *)((longlong)&local_260 + 4));
                    }
                    local_260 = CONCAT44(local_260._4_4_,iVar7 + 1);
                    *(uint *)(local_268.Data + (longlong)iVar7 * 4) = local_258;
                  }
                }
              }
              else {
LAB_1433a431e:
                iVar7 = -2 - local_250[0];
                uVar10 = 0;
                if ((int)uVar8 < local_248.ArrayNum) {
                  uVar10 = uVar9;
                }
                if ((uVar10 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(int *)(local_248.AllocatorInstance.Data + lVar12 * 4) = iVar7;
              }
            }
          }
          uVar8 = local_234;
          lVar12 = local_230._8_8_;
          iVar7 = (int)local_260;
        }
        local_230.ArrayMax = (int)((ulonglong)lVar12 >> 0x20);
        iVar7 = local_230.ArrayMax;
        if (lVar12 < 0) {
          local_230._8_8_ = (ulonglong)(uint)local_230.ArrayMax << 0x20;
          if (iVar7 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_230.AllocatorInstance,0,&local_230.ArrayMax);
          }
        }
        else {
          local_230._8_8_ = (ulonglong)(uint)local_230.ArrayMax << 0x20;
        }
        local_178 = &local_248;
        local_170 = local_250;
        local_160 = &local_178;
        local_168 = Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::GetFaces'::__l7::<lambda_2>,bool,int>
                    ::Call;
        WalkBorder(&this->Hull,&this->HullNeighbors,(TFunctionRef<bool___cdecl(int)> *)&local_168,
                   uVar8,&local_230);
        local_188 = CONCAT44(fVar19,fVar20);
        local_180 = fVar16;
        (**(code **)local_198)(*(undefined8 *)&local_198->field_0x8,&local_230);
        lVar15 = local_1e0;
        iVar7 = local_248.ArrayNum;
      }
      local_234 = uVar8 + 1;
      local_1e0 = lVar15 + 1;
    } while ((int)local_234 < *local_1d8);
  }
  if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  if (local_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data);
  }
  if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.AllocatorInstance.Data);
  }
  return;
}

// GetFaces @ 1433a49e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TConvexHull3<double>::GetFaces
          (TConvexHull3<double> *this,
          TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>)>
          *param_1,TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStackY_2f8 [32];
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  uint local_298;
  char local_294;
  undefined1 local_293 [3];
  int local_290 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_288;
  int local_278;
  uint local_274;
  TArray<int,TSizedDefaultAllocator<32>_> local_270;
  int local_260 [2];
  undefined4 local_258 [2];
  undefined4 local_250 [2];
  undefined4 local_248;
  int local_240 [2];
  undefined4 local_238 [2];
  undefined4 local_230 [2];
  undefined4 local_228;
  longlong local_220;
  int *local_218;
  undefined1 local_210 [16];
  double local_200;
  TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>)>
  *local_1f8;
  code *local_1f0;
  TArray<int,TSizedDefaultAllocator<32>_> **local_1e8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1e0;
  int *local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined1 local_108 [16];
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  piVar2 = &(this->Hull).ArrayNum;
  local_218 = piVar2;
  local_1f8 = param_1;
  if ((this->bSaveTriangleNeighbors == false) || ((this->HullNeighbors).ArrayNum != *piVar2)) {
    local_293[0] = 0;
    bVar8 = `UE::Geometry::TConvexHull3<double>::GetFaces'::__l3::<lambda_1>::operator()(local_293);
    if (!bVar8) {
      return;
    }
  }
  local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.ArrayNum = 0;
  local_270.ArrayMax = 0;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0 = 0;
  local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.ArrayNum = 0;
  local_288.ArrayMax = 0;
  local_260[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_288,local_260,*piVar2);
  dVar7 = __real_3ff0000000000000;
  local_278 = 0;
  local_274 = 0;
  if (0 < *piVar2) {
    local_220 = 0;
    iVar9 = local_288.ArrayNum;
    do {
      lVar17 = local_220;
      uVar10 = local_274;
      iVar16 = local_278;
      uVar12 = ~local_274;
      uVar11 = 0;
      if ((int)local_274 < iVar9) {
        uVar11 = uVar12 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = local_288.ArrayNum;
      }
      if (*(int *)(local_288.AllocatorInstance.Data + lVar17 * 4) < 0) {
        uVar11 = 0;
        if ((int)uVar10 < iVar9) {
          uVar11 = uVar12 >> 0x1f;
        }
        local_290[0] = local_278;
        iVar9 = local_278 + 1;
        if ((uVar11 == 0) &&
           (local_278 = local_278 + 1,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           iVar9 = local_278, bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_278 = iVar9;
        lVar14 = local_2a0;
        *(int *)(local_288.AllocatorInstance.Data + lVar17 * 4) = iVar16;
        uVar11 = local_2a0._4_4_;
        local_2a0 = (ulonglong)local_2a0._4_4_ << 0x20;
        if ((lVar14 < 0) && (uVar11 != 0)) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_2a8,0,(int *)((longlong)&local_2a0 + 4));
        }
        uVar11 = 0;
        if ((int)uVar10 < (this->Hull).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Hull).AllocatorInstance.Data;
        uVar11 = 0;
        if ((int)uVar10 < (this->HullNeighbors).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = (this->HullNeighbors).AllocatorInstance.Data + lVar17 * 0xc;
        local_258[0] = *(undefined4 *)(pFVar3 + lVar17 * 0xc);
        (**(code **)param_2)(&local_e8,*(undefined8 *)&param_2->field_0x8,local_258);
        local_250[0] = *(undefined4 *)(pFVar3 + lVar17 * 0xc + 4);
        (**(code **)param_2)(&local_d0,*(undefined8 *)&param_2->field_0x8,local_250);
        local_248 = *(undefined4 *)(pFVar3 + lVar17 * 0xc + 8);
        (**(code **)param_2)(&local_b8,*(undefined8 *)&param_2->field_0x8);
        dVar19 = (dStack_b0 - dStack_e0) * (local_c0 - local_d8) -
                 (dStack_c8 - dStack_e0) * (local_a8 - local_d8);
        dVar6 = (local_d0 - local_e8) * (local_a8 - local_d8) -
                (local_b8 - local_e8) * (local_c0 - local_d8);
        local_200 = (local_b8 - local_e8) * (dStack_c8 - dStack_e0) -
                    (local_d0 - local_e8) * (dStack_b0 - dStack_e0);
        auVar20._0_8_ = dVar6 * dVar6;
        auVar20._8_8_ = 0;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = dVar19 * dVar19 + auVar20._0_8_ + local_200 * local_200;
        auVar21 = sqrtpd(auVar20,auVar21);
        if (auVar21._0_8_ <= 0.0) {
          dVar19 = 0.0;
          dVar18 = 0.0;
          local_200 = 0.0;
        }
        else {
          dVar18 = dVar7 / auVar21._0_8_;
          local_200 = dVar18 * local_200;
          dVar19 = dVar18 * dVar19;
          dVar18 = dVar18 * dVar6;
        }
        local_210._8_4_ = SUB84(dVar18,0);
        local_210._0_8_ = dVar19;
        local_210._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        local_294 = 0.0 < dVar18 * dVar18 + dVar19 * dVar19 + local_200 * local_200;
        if (((local_2a8.Data <= pFVar13) &&
            (pFVar13 < local_2a8.Data + (longlong)(int)local_2a0._4_4_ * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (int)local_2a0;
        if ((int)local_2a0 == local_2a0._4_4_) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_2a8,(int *)((longlong)&local_2a0 + 4));
        }
        iVar16 = iVar9 + 1;
        pFVar1 = pFVar13 + 4;
        *(undefined4 *)(local_2a8.Data + (longlong)iVar9 * 4) = *(undefined4 *)pFVar13;
        local_2a0._0_4_ = iVar16;
        if (((local_2a8.Data <= pFVar1) &&
            (pFVar1 < local_2a8.Data + (longlong)(int)local_2a0._4_4_ * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((int)local_2a0 == local_2a0._4_4_) {
          local_2a0._0_4_ =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_2a8,(int *)((longlong)&local_2a0 + 4));
        }
        iVar9 = (int)local_2a0 + 1;
        pFVar13 = pFVar13 + 8;
        *(undefined4 *)(local_2a8.Data + (longlong)(int)local_2a0 * 4) = *(undefined4 *)pFVar1;
        local_2a0._0_4_ = iVar9;
        if (((local_2a8.Data <= pFVar13) &&
            (pFVar13 < local_2a8.Data + (longlong)(int)local_2a0._4_4_ * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (int)local_2a0;
        if ((int)local_2a0 == local_2a0._4_4_) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_2a8,(int *)((longlong)&local_2a0 + 4));
        }
        local_2a0 = CONCAT44(local_2a0._4_4_,iVar9 + 1);
        *(undefined4 *)(local_2a8.Data + (longlong)iVar9 * 4) = *(undefined4 *)pFVar13;
        if (0 < iVar9 + 1) {
          do {
            if (((int)local_2a0 < 1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar9 = (int)local_2a0 + -1;
            uVar10 = *(uint *)(local_2a8.Data + (longlong)iVar9 * 4);
            lVar14 = (longlong)(int)uVar10;
            iVar16 = ((int)local_2a0 - iVar9) + -1;
            if (iVar16 != 0) {
              memmove(local_2a8.Data + (longlong)iVar9 * 4,local_2a8.Data + (longlong)iVar9 * 4 + 4,
                      (longlong)iVar16 << 2);
            }
            local_2a0 = CONCAT44(local_2a0._4_4_,(int)local_2a0 + -1);
            uVar11 = 0;
            if ((int)uVar10 < local_288.ArrayNum) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(int *)(local_288.AllocatorInstance.Data + lVar14 * 4) < 0) {
              uVar11 = 0;
              if ((int)uVar10 < local_288.ArrayNum) {
                uVar11 = ~uVar10 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (-1 - local_290[0] <= *(int *)(local_288.AllocatorInstance.Data + lVar14 * 4)) {
                uVar11 = 0;
                if ((int)uVar10 < (this->Hull).ArrayNum) {
                  uVar11 = ~uVar10 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                bVar8 = false;
                lVar15 = 0;
                pFVar13 = (this->Hull).AllocatorInstance.Data + lVar14 * 0xc;
                do {
                  iVar9 = *(int *)(pFVar13 + lVar15 * 4);
                  if (((iVar9 != *(int *)(pFVar3 + lVar17 * 0xc)) &&
                      (iVar9 != *(int *)(pFVar3 + lVar17 * 0xc + 4))) &&
                     (iVar9 != *(int *)(pFVar3 + lVar17 * 0xc + 8))) {
                    local_240[0] = iVar9;
                    (**(code **)param_2)(&local_140,*(undefined8 *)&param_2->field_0x8,local_240);
                    local_1a0 = local_e8;
                    dStack_198 = dStack_e0;
                    local_190 = local_d8;
                    local_1b8 = local_d0;
                    dStack_1b0 = dStack_c8;
                    local_1d0 = local_b8;
                    dStack_1c8 = dStack_b0;
                    local_1a8 = local_c0;
                    local_1c0 = local_a8;
                    local_118 = local_130;
                    local_128 = local_140;
                    uStack_120 = uStack_138;
                    dVar19 = ShewchukExactPredicates::orient3d
                                       (&local_1a0,&local_1b8,&local_1d0,&local_128);
                    if (dVar19 != 0.0) {
                      uVar11 = ~uVar10 >> 0x1f;
                      goto LAB_1433a53cc;
                    }
                    bVar8 = true;
                  }
                  iVar9 = local_290[0];
                  lVar15 = lVar15 + 1;
                } while (lVar15 < 3);
                uVar11 = ~uVar10 >> 0x1f;
                if (bVar8) {
                  uVar12 = 0;
                  if ((int)uVar10 < local_288.ArrayNum) {
                    uVar12 = uVar11;
                  }
                  if ((uVar12 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  *(int *)(local_288.AllocatorInstance.Data + lVar14 * 4) = iVar9;
                  if (local_294 == '\0') {
                    local_238[0] = *(undefined4 *)(pFVar13 + 8);
                    (**(code **)param_2)(&local_188,*(undefined8 *)&param_2->field_0x8,local_238);
                    local_230[0] = *(undefined4 *)(pFVar13 + 4);
                    (**(code **)param_2)(&local_158,*(undefined8 *)&param_2->field_0x8,local_230);
                    local_228 = *(undefined4 *)pFVar13;
                    (**(code **)param_2)(&local_170,*(undefined8 *)&param_2->field_0x8);
                    local_210._8_8_ =
                         (local_178 - local_160) * (local_158 - local_170) -
                         (local_148 - local_160) * (local_188 - local_170);
                    dVar19 = (local_180 - local_168) * (local_148 - local_160) -
                             (local_150 - local_168) * (local_178 - local_160);
                    auVar22._0_8_ = (double)local_210._8_8_ * (double)local_210._8_8_;
                    auVar22._8_8_ = 0;
                    local_200 = (local_150 - local_168) * (local_188 - local_170) -
                                (local_180 - local_168) * (local_158 - local_170);
                    auVar5._8_8_ = 0;
                    auVar5._0_8_ = dVar19 * dVar19 + auVar22._0_8_ + local_200 * local_200;
                    auVar21 = sqrtpd(auVar22,auVar5);
                    if (auVar21._0_8_ <= 0.0) {
                      local_200 = 0.0;
                      local_210._8_8_ = 0.0;
                      local_210._0_8_ = 0.0;
                    }
                    else {
                      local_210._0_8_ = dVar7 / auVar21._0_8_;
                      local_200 = (double)local_210._0_8_ * local_200;
                      local_210._8_8_ = (double)local_210._0_8_ * (double)local_210._8_8_;
                      local_210._0_8_ = (double)local_210._0_8_ * dVar19;
                    }
                    local_294 = 0.0 < (double)local_210._8_8_ * (double)local_210._8_8_ +
                                      (double)local_210._0_8_ * (double)local_210._0_8_ +
                                      local_200 * local_200;
                  }
                  uVar11 = 0;
                  if ((int)uVar10 < (this->HullNeighbors).ArrayNum) {
                    uVar11 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar13 = (this->HullNeighbors).AllocatorInstance.Data;
                  local_298 = *(uint *)(pFVar13 + lVar14 * 0xc);
                  lVar15 = (longlong)(int)local_298;
                  uVar10 = 0;
                  if ((int)local_298 < local_288.ArrayNum) {
                    uVar10 = ~local_298 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (*(int *)(local_288.AllocatorInstance.Data + lVar15 * 4) < 0) {
                    lVar15 = (longlong)(int)local_298;
                    uVar10 = 0;
                    if ((int)local_298 < local_288.ArrayNum) {
                      uVar10 = ~local_298 >> 0x1f;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if (-1 - local_290[0] <= *(int *)(local_288.AllocatorInstance.Data + lVar15 * 4)
                       ) {
                      if (((local_2a8.Data <= (FScriptContainerElement *)&local_298) &&
                          ((FScriptContainerElement *)&local_298 <
                           local_2a8.Data + (longlong)(int)local_2a0._4_4_ * 4)) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar8)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      iVar9 = (int)local_2a0;
                      if ((int)local_2a0 == local_2a0._4_4_) {
                        iVar9 = Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x404,&local_2a8,(int *)((longlong)&local_2a0 + 4));
                      }
                      local_2a0 = CONCAT44(local_2a0._4_4_,iVar9 + 1);
                      *(uint *)(local_2a8.Data + (longlong)iVar9 * 4) = local_298;
                    }
                  }
                  local_298 = *(uint *)(pFVar13 + lVar14 * 0xc + 4);
                  lVar15 = (longlong)(int)local_298;
                  uVar10 = 0;
                  if ((int)local_298 < local_288.ArrayNum) {
                    uVar10 = ~local_298 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (*(int *)(local_288.AllocatorInstance.Data + lVar15 * 4) < 0) {
                    lVar15 = (longlong)(int)local_298;
                    uVar10 = 0;
                    if ((int)local_298 < local_288.ArrayNum) {
                      uVar10 = ~local_298 >> 0x1f;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if (-1 - local_290[0] <= *(int *)(local_288.AllocatorInstance.Data + lVar15 * 4)
                       ) {
                      if (((local_2a8.Data <= (FScriptContainerElement *)&local_298) &&
                          ((FScriptContainerElement *)&local_298 <
                           local_2a8.Data + (longlong)(int)local_2a0._4_4_ * 4)) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar8)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      iVar9 = (int)local_2a0;
                      if ((int)local_2a0 == local_2a0._4_4_) {
                        iVar9 = Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x404,&local_2a8,(int *)((longlong)&local_2a0 + 4));
                      }
                      local_2a0 = CONCAT44(local_2a0._4_4_,iVar9 + 1);
                      *(uint *)(local_2a8.Data + (longlong)iVar9 * 4) = local_298;
                    }
                  }
                  local_298 = *(uint *)(pFVar13 + lVar14 * 0xc + 8);
                  lVar14 = (longlong)(int)local_298;
                  uVar10 = 0;
                  if ((int)local_298 < local_288.ArrayNum) {
                    uVar10 = ~local_298 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (*(int *)(local_288.AllocatorInstance.Data + lVar14 * 4) < 0) {
                    lVar14 = (longlong)(int)local_298;
                    uVar10 = 0;
                    if ((int)local_298 < local_288.ArrayNum) {
                      uVar10 = ~local_298 >> 0x1f;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if (-1 - local_290[0] <= *(int *)(local_288.AllocatorInstance.Data + lVar14 * 4)
                       ) {
                      if (((local_2a8.Data <= (FScriptContainerElement *)&local_298) &&
                          ((FScriptContainerElement *)&local_298 <
                           local_2a8.Data + (longlong)(int)local_2a0._4_4_ * 4)) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar8)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      iVar9 = (int)local_2a0;
                      if ((int)local_2a0 == local_2a0._4_4_) {
                        iVar9 = Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x404,&local_2a8,(int *)((longlong)&local_2a0 + 4));
                      }
                      local_2a0 = CONCAT44(local_2a0._4_4_,iVar9 + 1);
                      *(uint *)(local_2a8.Data + (longlong)iVar9 * 4) = local_298;
                    }
                  }
                }
                else {
LAB_1433a53cc:
                  iVar9 = -2 - local_290[0];
                  uVar12 = 0;
                  if ((int)uVar10 < local_288.ArrayNum) {
                    uVar12 = uVar11;
                  }
                  if ((uVar12 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  *(int *)(local_288.AllocatorInstance.Data + lVar14 * 4) = iVar9;
                }
              }
            }
          } while (0 < (int)local_2a0);
          dVar19 = (double)local_210._0_8_;
          dVar18 = (double)local_210._8_8_;
          uVar10 = local_274;
        }
        iVar9 = local_270.ArrayMax;
        if ((longlong)local_270._8_8_ < 0) {
          local_270._8_8_ = (ulonglong)(uint)local_270.ArrayMax << 0x20;
          if (iVar9 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_270.AllocatorInstance,0,&local_270.ArrayMax);
          }
        }
        else {
          local_270._8_8_ = (ulonglong)(uint)local_270.ArrayMax << 0x20;
        }
        local_1e0 = &local_288;
        local_1d8 = local_290;
        local_1e8 = &local_1e0;
        local_1f0 = Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::GetFaces'::__l7::<lambda_2>,bool,int>
                    ::Call;
        WalkBorder(&this->Hull,&this->HullNeighbors,(TFunctionRef<bool___cdecl(int)> *)&local_1f0,
                   uVar10,&local_270);
        local_108._8_4_ = SUB84(dVar18,0);
        local_108._0_8_ = dVar19;
        local_108._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        local_f8 = local_200;
        (**(code **)local_1f8)(*(undefined8 *)&local_1f8->field_0x8,&local_270);
        lVar17 = local_220;
        iVar9 = local_288.ArrayNum;
      }
      local_274 = uVar10 + 1;
      local_220 = lVar17 + 1;
    } while ((int)local_274 < *local_218);
  }
  if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.AllocatorInstance.Data);
  }
  if (local_2a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
  if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.AllocatorInstance.Data);
  }
  return;
}

// GetLine @ 1433a8f60

TLine3<float> * __thiscall UE::Geometry::TConvexHull3<float>::GetLine(TConvexHull3<float> *this)

{
  return &this->Line;
}

// GetLine @ 1433a8f70

TLine3<double> * __thiscall UE::Geometry::TConvexHull3<double>::GetLine(TConvexHull3<double> *this)

{
  return &this->Line;
}

// GetNumHullPoints @ 1433a92c0

int __thiscall UE::Geometry::TConvexHull3<float>::GetNumHullPoints(TConvexHull3<float> *this)

{
  return this->NumHullPoints;
}

// GetNumHullPoints @ 1433a92d0

int __thiscall UE::Geometry::TConvexHull3<double>::GetNumHullPoints(TConvexHull3<double> *this)

{
  return this->NumHullPoints;
}

// GetPlane @ 1433a9300

TPlane3<float> * __thiscall UE::Geometry::TConvexHull3<float>::GetPlane(TConvexHull3<float> *this)

{
  return &this->Plane;
}

// GetPlane @ 1433a9310

TPlane3<double> * __thiscall
UE::Geometry::TConvexHull3<double>::GetPlane(TConvexHull3<double> *this)

{
  return &this->Plane;
}

// GetSimplifiedFaces @ 1433a9790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001433aac3d) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces
          (TConvexHull3<float> *this,
          TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
          *param_1,TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_2,float param_3,
          float param_4,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  ForElementType<int> *pFVar2;
  uchar *puVar3;
  void *_Dst;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  FIndex2i_u_0 *pFVar11;
  double dVar12;
  double dVar13;
  ForAnyElementType FVar14;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar17;
  undefined8 uVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  ForElementType<int> FVar26;
  FScriptContainerElement *pFVar27;
  TConvexHull3<float> *pTVar28;
  ulonglong uVar29;
  ForElementType<int> FVar30;
  ulonglong uVar31;
  TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<float>)>
  *pTVar32;
  FIndex2i_u_0 FVar33;
  ForElementType<int> FVar34;
  ForAnyElementType FVar35;
  ForAnyElementType FVar36;
  ulong64 uVar37;
  ForElementType<int> FVar38;
  uint uVar39;
  FScriptContainerElement *pFVar40;
  uint uVar41;
  uint uVar42;
  ForElementType<int> FVar43;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  *pTVar44;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *pTVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  float fVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  double dVar62;
  double dVar63;
  undefined1 auStackY_5d8 [32];
  uint local_584;
  int local_57c;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_578;
  FIndex2i_u_0 local_568;
  FIdentityFunctor local_560;
  uint local_55c;
  uint local_558 [2];
  ForAnyElementType local_550;
  undefined8 local_548;
  undefined1 local_540;
  undefined1 local_53f;
  undefined1 local_53e;
  undefined1 local_53d [5];
  double local_538;
  TConvexHull3<float> *local_530;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  *local_528;
  ForAnyElementType local_520;
  uint local_518;
  uint uStack_514;
  undefined1 *local_510;
  TArray<int,TSizedDefaultAllocator<32>_> local_508;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_4f8;
  FSizedDisjointSet local_4f0;
  uint local_4d0 [2];
  undefined8 local_4c8;
  uint local_4c0 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_4b8;
  int local_4a8 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_4a0;
  undefined8 local_490;
  uint local_488;
  undefined8 local_480;
  undefined4 local_478 [2];
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_470;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *local_468;
  FScriptContainerElement *local_460;
  TArray<double,TSizedDefaultAllocator<32>_> local_458;
  double local_448;
  float local_440;
  float fStack_43c;
  float local_438;
  undefined8 local_434;
  undefined4 local_42c;
  float local_428;
  float fStack_424;
  float local_420;
  double local_418;
  int local_410 [4];
  int local_400 [2];
  undefined4 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3e8 [2];
  undefined8 local_3e0;
  int local_3d8;
  TKeyInitializer<int_&> local_3d0;
  undefined4 local_3c8 [2];
  undefined4 local_3c0 [2];
  undefined4 local_3b8 [2];
  FSizedDisjointSet *local_3b0;
  TArray<double,TSizedDefaultAllocator<32>_> *local_3a8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_3a0;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *local_398;
  undefined8 local_390;
  float local_388;
  float local_384;
  float local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  FIndex3i_u_0 local_34c;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  undefined8 local_318;
  undefined4 local_310;
  uint *local_308;
  TVector<double>_u_0 local_300;
  code *local_2e8;
  FSizedDisjointSet **local_2e0;
  code *local_2d8;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> **local_2d0;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> local_2c8;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  *local_2b8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> **local_2b0;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> local_2a8;
  code *local_298;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  **local_290;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  *local_288;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> **local_280;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> local_278;
  code *local_268;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  **local_260;
  FSizedDisjointSet *local_258;
  uint *local_250;
  TConvexHull3<float> local_248;
  FIndex2i_u_0 *local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_198;
  TSet<TTuple<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  local_188;
  TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_138;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  local_4f8 = param_5;
  local_530 = this;
  local_528 = param_1;
  local_468 = param_2;
  if ((this->bSaveTriangleNeighbors == false) ||
     ((this->HullNeighbors).ArrayNum != (this->Hull).ArrayNum)) {
    local_540 = 0;
    bVar19 = `UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l3::<lambda_1>::operator()
                       (&local_540);
    if (!bVar19) {
      return;
    }
  }
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::Reset(param_1,0);
  if (local_4f8 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_4f8->ArrayNum = 0;
    if (local_4f8->ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&local_4f8->AllocatorInstance,0,&local_4f8->ArrayMax);
    }
  }
  if (__real_42700000 <= param_3) {
    param_3 = __real_42700000;
  }
  fVar49 = cosf(param_3 * __real_3c8efa35);
  iVar24 = (this->Hull).ArrayNum;
  local_4f0.Parents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f0.Parents.ArrayNum = 0;
  local_4f0.Parents.ArrayMax = 0;
  local_4f0.Sizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f0.Sizes.ArrayNum = 0;
  local_4f0.Sizes.ArrayMax = 0;
  dVar53 = (double)(__real_3f800000 - fVar49);
  local_538 = dVar53;
  FSizedDisjointSet::Init(&local_4f0,iVar24);
  local_4b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4b8.ArrayNum = 0;
  local_4b8.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_4b8,iVar24,Default);
  local_458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_458.ArrayNum = 0;
  local_458.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_458,iVar24,Default);
  local_4a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a0.ArrayNum = 0;
  local_4a0.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_4a0,iVar24,Default);
  dVar10 = __real_3fd5555555555555;
  uVar58 = SUB84(__real_3fe0000000000000,0);
  uVar59 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  uVar41 = 0;
  local_188.Elements._0_8_ = 0;
  local_188.Elements._8_8_ = 0;
  local_188.Elements._32_8_ = 0;
  local_188.Elements._40_4_ = 0;
  local_188.Elements._44_4_ = 0x80;
  local_188.Elements._48_4_ = 0xffffffff;
  local_188.Elements._52_4_ = 0;
  local_188.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_188.HashSize = 0;
  local_584 = 0;
  if (iVar24 < 1) {
    local_3b0 = &local_4f0;
    uVar37 = 0;
    local_3a8 = &local_458;
    local_390 = __real_3e45798ee2308c3a;
    local_3a0 = &local_4b8;
    local_520.Data = (FScriptContainerElement *)0x0;
    local_518 = 0;
    uStack_514 = 0;
    local_584 = 0;
    local_398 = param_2;
  }
  else {
    lVar48 = 0;
    lVar47 = 0;
    lVar46 = 0;
    do {
      pTVar28 = local_530;
      uVar39 = ~uVar41 >> 0x1f;
      uVar42 = 0;
      if ((int)uVar41 < (local_530->Hull).ArrayNum) {
        uVar42 = uVar39;
      }
      if ((uVar42 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar40 = (pTVar28->Hull).AllocatorInstance.Data;
      local_410[2] = *(int *)(pFVar40 + lVar46);
      iVar25 = *(int *)(pFVar40 + lVar46 + 8);
      if (*(int *)(pFVar40 + lVar46 + 8) < *(int *)(pFVar40 + lVar46 + 4)) {
        iVar25 = *(int *)(pFVar40 + lVar46 + 4);
      }
      if (iVar25 < local_410[2]) {
        iVar25 = local_410[2];
      }
      uVar42 = iVar25 + 1U;
      if ((int)(iVar25 + 1U) < (int)local_584) {
        uVar42 = local_584;
      }
      (**(code **)local_468)(&local_388,*(undefined8 *)&local_468->field_0x8,local_410 + 2);
      local_400[0] = *(int *)(pFVar40 + lVar46 + 4);
      dVar50 = (double)local_388;
      dVar62 = (double)local_384;
      dVar51 = (double)local_380;
      (**(code **)local_468)(&local_37c,*(undefined8 *)&local_468->field_0x8,local_410 + 4);
      pTVar45 = local_468;
      local_3b8[0] = *(undefined4 *)(pFVar40 + lVar46 + 8);
      dVar63 = (double)local_37c;
      dVar12 = (double)local_378;
      dVar13 = (double)local_374;
      (**(code **)local_468)(&local_370,*(undefined8 *)&local_468->field_0x8,local_3b8);
      dVar54 = dVar12 - dVar62;
      local_418 = (double)local_368;
      local_448 = (double)local_36c;
      local_460 = (FScriptContainerElement *)(double)local_370;
      dVar53 = dVar13 - dVar51;
      dVar52 = dVar63 - dVar50;
      local_300._s_0.X = (local_448 - dVar62) * dVar53 - dVar54 * (local_418 - dVar51);
      local_300._s_0.Y = dVar52 * (local_418 - dVar51) - ((double)local_460 - dVar50) * dVar53;
      local_300._s_0.Z = ((double)local_460 - dVar50) * dVar54 - dVar52 * (local_448 - dVar62);
      dVar53 = Normalize<double>((TVector<double> *)&local_300._s_0,0.0);
      uVar18 = local_300._s_0.Z;
      uVar6 = local_300._s_0.Y;
      uVar5 = local_300._s_0.X;
      dVar53 = dVar53 * __real_3fe0000000000000;
      uVar22 = 0;
      if ((int)uVar41 < local_4b8.ArrayNum) {
        uVar22 = uVar39;
      }
      if ((uVar22 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined8 *)(local_4b8.AllocatorInstance.Data + lVar47) = uVar5;
      *(undefined8 *)(local_4b8.AllocatorInstance.Data + lVar47 + 8) = uVar6;
      *(undefined8 *)(local_4b8.AllocatorInstance.Data + lVar47 + 0x10) = uVar18;
      uVar22 = 0;
      if ((int)uVar41 < local_458.ArrayNum) {
        uVar22 = uVar39;
      }
      if ((uVar22 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(double *)(local_458.AllocatorInstance.Data + lVar48 * 8) = dVar53;
      dVar53 = dVar63 + dVar50 + (double)local_460;
      dVar63 = dVar12 + dVar62 + local_448;
      dVar12 = dVar13 + dVar51 + local_418;
      uVar39 = 0;
      if ((int)uVar41 < local_4a0.ArrayNum) {
        uVar39 = ~uVar41 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar41 = uVar41 + 1;
      lVar48 = lVar48 + 1;
      lVar46 = lVar46 + 0xc;
      *(double *)(local_4a0.AllocatorInstance.Data + lVar47) = dVar53 * dVar10;
      *(double *)(local_4a0.AllocatorInstance.Data + lVar47 + 8) = dVar63 * dVar10;
      *(double *)(local_4a0.AllocatorInstance.Data + lVar47 + 0x10) = dVar12 * dVar10;
      lVar47 = lVar47 + 0x18;
      local_584 = uVar42;
    } while (lVar48 < iVar24);
    local_3b0 = &local_4f0;
    uVar41 = 0;
    local_3a8 = &local_458;
    local_390 = __real_3e45798ee2308c3a;
    lVar46 = 0;
    local_3a0 = &local_4b8;
    local_398 = pTVar45;
    lVar47 = 0;
    local_520.Data = (FScriptContainerElement *)0x0;
    local_518 = 0;
    uStack_514 = 0;
    do {
      pTVar28 = local_530;
      uVar39 = 0;
      if ((int)uVar41 < (local_530->HullNeighbors).ArrayNum) {
        uVar39 = ~uVar41 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar40 = (pTVar28->HullNeighbors).AllocatorInstance.Data;
      uVar39 = 0;
      if ((int)uVar41 < (pTVar28->Hull).ArrayNum) {
        uVar39 = ~uVar41 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((int)uVar41 < *(int *)(pFVar40 + lVar47 + 8)) {
        local_510 = (undefined1 *)0x2;
        local_568._s_0.B = *(int *)(pFVar40 + lVar47 + 8);
        local_568._s_0.A = uVar41;
        FVar33 = local_568;
        dVar53 = `UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l2::<lambda_2>::
                 operator()(&local_3b0,(FIndex2i)local_568._s_0,(FIndex2i)0x2,false);
        uVar58 = SUB84(local_538,0);
        uVar59 = (undefined4)((ulonglong)local_538 >> 0x20);
        if (dVar53 < local_538) {
          if (local_518 == uStack_514) {
            local_518 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_520,(int *)&uStack_514);
          }
          lVar48 = (longlong)(int)local_518;
          *(double *)(local_520.Data + lVar48 * 0x18 + 0x10) = dVar53;
          ((FIndex2i_u_0 *)(local_520.Data + lVar48 * 0x18))->_s_0 = (FIndex2i_u_0_s_0)FVar33;
          *(undefined8 *)(local_520.Data + lVar48 * 0x18 + 8) = 2;
          local_518 = local_518 + 1;
        }
      }
      else {
        uVar58 = SUB84(local_538,0);
        uVar59 = (undefined4)((ulonglong)local_538 >> 0x20);
      }
      dVar53 = (double)CONCAT44(uVar59,uVar58);
      if ((int)uVar41 < *(int *)(pFVar40 + lVar47)) {
        local_510 = (undefined1 *)0x100000000;
        local_568._s_0.B = *(int *)(pFVar40 + lVar47);
        local_568._s_0.A = uVar41;
        FVar33 = local_568;
        dVar10 = `UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l2::<lambda_2>::
                 operator()(&local_3b0,(FIndex2i)local_568._s_0,(FIndex2i)0x100000000,false);
        if (dVar10 < (double)CONCAT44(uVar59,uVar58)) {
          if (local_518 == uStack_514) {
            local_518 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_520,(int *)&uStack_514);
          }
          lVar48 = (longlong)(int)local_518;
          ((FIndex2i_u_0 *)(local_520.Data + lVar48 * 0x18))->_s_0 = (FIndex2i_u_0_s_0)FVar33;
          *(undefined8 *)(local_520.Data + lVar48 * 0x18 + 8) = 0x100000000;
          *(double *)(local_520.Data + lVar48 * 0x18 + 0x10) = dVar10;
          local_518 = local_518 + 1;
        }
      }
      if ((int)uVar41 < *(int *)(pFVar40 + lVar47 + 4)) {
        local_510 = &DAT_200000001;
        local_568._s_0.B = *(int *)(pFVar40 + lVar47 + 4);
        local_568._s_0.A = uVar41;
        FVar33 = local_568;
        dVar10 = `UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l2::<lambda_2>::
                 operator()(&local_3b0,(FIndex2i)local_568._s_0,(FIndex2i)0x200000001,false);
        if (dVar10 < (double)CONCAT44(uVar59,uVar58)) {
          if (local_518 == uStack_514) {
            local_518 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_520,(int *)&uStack_514);
          }
          lVar48 = (longlong)(int)local_518;
          ((FIndex2i_u_0 *)(local_520.Data + lVar48 * 0x18))->_s_0 = (FIndex2i_u_0_s_0)FVar33;
          *(undefined1 **)(local_520.Data + lVar48 * 0x18 + 8) = &DAT_200000001;
          *(double *)(local_520.Data + lVar48 * 0x18 + 0x10) = dVar10;
          local_518 = local_518 + 1;
        }
      }
      uVar41 = uVar41 + 1;
      lVar46 = lVar46 + 1;
      lVar47 = lVar47 + 0xc;
    } while (lVar46 < iVar24);
    uVar58 = SUB84(__real_3fe0000000000000,0);
    uVar59 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    uVar37 = (ulong64)uVar42;
    param_2 = local_468;
    this = local_530;
  }
  local_53f = 0;
  AlgoImpl::
  IntroSortInternal<_UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces_::__l2::FEdgeWeight,int,FIdentityFunctor,TDereferenceWrapper<_UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces_::__l2::FEdgeWeight,_UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces_::__l2::<lambda_3>_>_>
            ((FEdgeWeight *)local_520.Data,local_518,local_560,(<lambda_3> *)&local_53f);
  uVar42 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar41 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar29 = (ulonglong)(int)local_518;
  uVar56 = (undefined4)__real_3f1a36e2eb1c432d;
  uVar57 = (undefined4)((ulonglong)__real_3f1a36e2eb1c432d >> 0x20);
  uVar60 = SUB84(__real_3ff0000000000000,0);
  uVar61 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  local_510 = (undefined1 *)CONCAT44(local_510._4_4_,local_518);
  FVar33 = (FIndex2i_u_0)(local_520.Data + uVar29 * 0x18);
  uVar31 = uVar29;
  FVar36.Data = local_520.Data;
  local_568 = FVar33;
  while( true ) {
    if ((int)uVar29 != (int)uVar31) {
      local_53e = 0;
      `TCheckedPointerIterator<`UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l2::FEdgeWeight,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_53e);
    }
    if ((FIndex2i_u_0)FVar36.Data == FVar33) break;
    dVar10 = `UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l2::<lambda_2>::operator()
                       (&local_3b0,(FIndex2i)*(FIndex2i_u_0_s_0 *)FVar36.Data,
                        (FIndex2i)((FIndex2i_u_0 *)((longlong)FVar36.Data + 8))->_s_0,true);
    if (dVar10 < dVar53) {
      uVar39 = FSizedDisjointSet::Find(&local_4f0,((FIndex2i_u_0_s_0 *)FVar36.Data)->A);
      local_558[0] = uVar39;
      local_558[1] = FSizedDisjointSet::Find(&local_4f0,((FIndex2i_u_0_s_0 *)FVar36.Data)->B);
      uVar22 = FSizedDisjointSet::FindWithoutCollapse(&local_4f0,uVar39);
      uVar39 = 0;
      if ((int)uVar22 < local_4f0.Sizes.ArrayNum) {
        uVar39 = ~uVar22 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_410[0] = *(int *)(local_4f0.Sizes.AllocatorInstance.Data + (longlong)(int)uVar22 * 4);
      uVar22 = FSizedDisjointSet::FindWithoutCollapse(&local_4f0,local_558[1]);
      uVar39 = 0;
      if ((int)uVar22 < local_4f0.Sizes.ArrayNum) {
        uVar39 = ~uVar22 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar46 = (longlong)(int)local_558[0];
      local_410[1] = *(undefined4 *)
                      (local_4f0.Sizes.AllocatorInstance.Data + (longlong)(int)uVar22 * 4);
      uVar39 = 0;
      if ((int)local_558[0] < local_458.ArrayNum) {
        uVar39 = ~local_558[0] >> 0x1f;
      }
      if (uVar39 == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      dVar53 = *(double *)(local_458.AllocatorInstance.Data + lVar46 * 8);
      lVar46 = (longlong)(int)local_558[1];
      local_448 = dVar53;
      uVar39 = 0;
      if ((int)local_558[1] < local_458.ArrayNum) {
        uVar39 = ~local_558[1] >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar40 = *(FScriptContainerElement **)(local_458.AllocatorInstance.Data + lVar46 * 8);
      lVar46 = (longlong)(int)local_558[0];
      dVar10 = dVar53 + (double)pFVar40;
      local_460 = pFVar40;
      if (dVar10 < (double)CONCAT44(uVar57,uVar56) || dVar10 == (double)CONCAT44(uVar57,uVar56)) {
        uVar39 = 0;
        if ((int)local_558[0] < local_4a0.ArrayNum) {
          uVar39 = ~local_558[0] >> 0x1f;
        }
        if (uVar39 == 0) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        FVar14.Data = local_4a0.AllocatorInstance.Data;
        lVar47 = (longlong)(int)local_558[1];
        uVar39 = 0;
        if ((int)local_558[1] < local_4a0.ArrayNum) {
          uVar39 = ~local_558[1] >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar63 = (*(double *)(local_4a0.AllocatorInstance.Data + lVar47 * 0x18) +
                 *(double *)(FVar14.Data + lVar46 * 0x18)) * (double)CONCAT44(uVar59,uVar58);
        dVar12 = (*(double *)(local_4a0.AllocatorInstance.Data + lVar47 * 0x18 + 8) +
                 *(double *)(FVar14.Data + lVar46 * 0x18 + 8)) * (double)CONCAT44(uVar59,uVar58);
        pFVar11 = (FIndex2i_u_0 *)
                  ((*(double *)(local_4a0.AllocatorInstance.Data + lVar47 * 0x18 + 0x10) +
                   *(double *)(FVar14.Data + lVar46 * 0x18 + 0x10)) *
                  (double)CONCAT44(uVar59,uVar58));
      }
      else {
        uVar39 = 0;
        if ((int)local_558[0] < local_4a0.ArrayNum) {
          uVar39 = ~local_558[0] >> 0x1f;
        }
        if (uVar39 == 0) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        lVar47 = (longlong)(int)local_558[1];
        dVar10 = (double)CONCAT44(uVar61,uVar60) / dVar10;
        dVar50 = dVar10 * dVar53;
        dVar63 = *(double *)(local_4a0.AllocatorInstance.Data + lVar46 * 0x18);
        dVar12 = *(double *)(local_4a0.AllocatorInstance.Data + lVar46 * 0x18 + 8);
        dVar13 = *(double *)(local_4a0.AllocatorInstance.Data + lVar46 * 0x18 + 0x10);
        uVar39 = 0;
        if ((int)local_558[1] < local_4a0.ArrayNum) {
          uVar39 = ~local_558[1] >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar10 = dVar10 * (double)pFVar40;
        dVar63 = dVar10 * *(double *)(local_4a0.AllocatorInstance.Data + lVar47 * 0x18) +
                 dVar50 * dVar63;
        dVar12 = dVar10 * *(double *)(local_4a0.AllocatorInstance.Data + lVar47 * 0x18 + 8) +
                 dVar50 * dVar12;
        pFVar11 = (FIndex2i_u_0 *)
                  (dVar10 * *(double *)(local_4a0.AllocatorInstance.Data + lVar47 * 0x18 + 0x10) +
                  dVar50 * dVar13);
      }
      lVar46 = (longlong)(int)local_558[0];
      local_1c8 = pFVar11;
      uVar39 = 0;
      if ((int)local_558[0] < local_4b8.ArrayNum) {
        uVar39 = ~local_558[0] >> 0x1f;
      }
      if (uVar39 == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      lVar47 = (longlong)(int)local_558[1];
      dVar10 = *(double *)(local_4b8.AllocatorInstance.Data + lVar46 * 0x18);
      dVar13 = *(double *)(local_4b8.AllocatorInstance.Data + lVar46 * 0x18 + 8);
      dVar50 = *(double *)(local_4b8.AllocatorInstance.Data + lVar46 * 0x18 + 0x10);
      uVar39 = 0;
      if ((int)local_558[1] < local_4b8.ArrayNum) {
        uVar39 = ~local_558[1] >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar10 = (double)pFVar40 * *(double *)(local_4b8.AllocatorInstance.Data + lVar47 * 0x18) +
               dVar53 * dVar10;
      dVar13 = (double)pFVar40 * *(double *)(local_4b8.AllocatorInstance.Data + lVar47 * 0x18 + 8) +
               dVar53 * dVar13;
      dVar53 = (double)pFVar40 *
               *(double *)(local_4b8.AllocatorInstance.Data + lVar47 * 0x18 + 0x10) +
               dVar53 * dVar50;
      local_198 = dVar53;
      dVar50 = dVar13 * dVar13 + dVar10 * dVar10 + dVar53 * dVar53;
      if (__real_3e45798ee0000000 < dVar50) {
        local_1b0 = __real_3ff0000000000000 / SQRT(dVar50);
        dVar10 = dVar10 * local_1b0;
        dVar13 = dVar13 * local_1b0;
        dVar53 = local_1b0 * dVar53;
        local_198 = dVar53;
      }
      lVar46 = 0;
      bVar19 = true;
      local_198 = dVar53;
      do {
        pTVar28 = local_530;
        this = local_530;
        if (!bVar19) goto LAB_1433aae37;
        uVar39 = *(uint *)((longlong)local_558 + lVar46);
        if (*(int *)((longlong)local_410 + lVar46) == 1) {
          uVar22 = 0;
          if ((int)uVar39 < (local_530->Hull).ArrayNum) {
            uVar22 = ~uVar39 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar40 = (pTVar28->Hull).AllocatorInstance.Data;
          lVar47 = 0;
          local_318 = *(undefined8 *)(pFVar40 + (longlong)(int)uVar39 * 0xc);
          local_310 = *(undefined4 *)(pFVar40 + (longlong)(int)uVar39 * 0xc + 8);
          do {
            local_3c0[0] = *(undefined4 *)((longlong)&local_318 + lVar47 * 4);
            (**(code **)param_2)(&local_364,*(undefined8 *)&param_2->field_0x8,local_3c0);
            dVar50 = ((double)local_360 - dVar12) * dVar13 + ((double)local_364 - dVar63) * dVar10 +
                     ((double)local_35c - (double)pFVar11) * dVar53;
            if ((double)param_4 <
                (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar42,SUB84(dVar50,0) & uVar41
                                )) goto LAB_1433aad38;
            lVar47 = lVar47 + 1;
          } while (lVar47 < 3);
        }
        else {
          FVar26 = (ForElementType<int>)
                   TMapBase<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                   ::FindChecked((TMapBase<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                                  *)&local_188,uVar39);
          iVar24 = *(int *)((longlong)FVar26 + 0x48);
          local_584 = (uint)uVar37;
          piVar1 = (int *)((longlong)FVar26 + 0x48);
          if (*(ForElementType<int> *)((longlong)FVar26 + 0x40) != (ForElementType<int>)0x0) {
            FVar26 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
          }
          FVar43 = (ForElementType<int>)((longlong)FVar26 + (longlong)iVar24 * 4);
          while( true ) {
            if (*piVar1 != iVar24) {
              local_53d[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_53d);
            }
            if (FVar26 == FVar43) goto LAB_1433aa71c;
            local_3c8[0] = *(undefined4 *)FVar26;
            (**(code **)param_2)(&local_358,*(undefined8 *)&param_2->field_0x8,local_3c8);
            dVar50 = ((double)local_354 - dVar12) * dVar13 + ((double)local_358 - dVar63) * dVar10 +
                     ((double)local_350 - (double)pFVar11) * dVar53;
            if ((double)param_4 <
                (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar42,SUB84(dVar50,0) & uVar41
                                )) break;
            FVar26 = (ForElementType<int>)((longlong)FVar26 + 4);
          }
LAB_1433aad38:
          bVar19 = false;
        }
LAB_1433aa71c:
        uVar39 = local_558[0];
        uVar37 = (ulong64)local_584;
        lVar46 = lVar46 + 4;
      } while (lVar46 < 8);
      this = local_530;
      if (bVar19) {
        FSizedDisjointSet::Union(&local_4f0,local_558[0],local_558[1]);
        uVar23 = FSizedDisjointSet::Find(&local_4f0,uVar39);
        local_4d0[0] = uVar23;
        uVar31 = (ulonglong)(uVar39 == uVar23);
        uVar39 = local_558[uVar31];
        uVar22 = 0;
        if ((int)uVar23 < local_4b8.ArrayNum) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        auVar8._8_4_ = SUB84(dVar13,0);
        auVar8._0_8_ = dVar10;
        auVar8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(local_4b8.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x18) =
             auVar8;
        *(double *)(local_4b8.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x18 + 0x10) =
             local_198;
        lVar46 = (longlong)(int)local_4d0[0];
        uVar22 = 0;
        if ((int)local_4d0[0] < local_4a0.ArrayNum) {
          uVar22 = ~local_4d0[0] >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar53 = (double)local_460 + local_448;
        auVar9._8_4_ = SUB84(dVar12,0);
        auVar9._0_8_ = dVar63;
        auVar9._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        *(undefined1 (*) [16])(local_4a0.AllocatorInstance.Data + lVar46 * 0x18) = auVar9;
        *(FIndex2i_u_0 **)(local_4a0.AllocatorInstance.Data + lVar46 * 0x18 + 0x10) = local_1c8;
        lVar46 = (longlong)(int)local_4d0[0];
        uVar22 = 0;
        if ((int)local_4d0[0] < local_458.ArrayNum) {
          uVar22 = ~local_4d0[0] >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this = local_530;
        *(double *)(local_458.AllocatorInstance.Data + lVar46 * 8) = dVar53;
        if (local_410[1 - uVar31] < 2) {
          uVar22 = local_558[1 - uVar31];
          uVar23 = 0;
          if ((int)uVar22 < (local_530->Hull).ArrayNum) {
            uVar23 = ~uVar22 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar40 = (this->Hull).AllocatorInstance.Data;
          local_480 = *(undefined8 *)(pFVar40 + (longlong)(int)uVar22 * 0xc);
          local_478[0] = *(undefined4 *)(pFVar40 + (longlong)(int)uVar22 * 0xc + 8);
          local_308 = local_4d0;
          TSet<TTuple<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<int_&>_>(&local_188,&local_3d0,(bool *)&local_308);
          FVar34 = (ForElementType<int>)
                   (local_188.Elements._0_8_ + 8 + (longlong)(int)local_3d0.Key * 0x60);
          FVar26 = *(ForElementType<int> *)((longlong)FVar34 + 0x40);
          FVar43 = FVar34;
          if (FVar26 != (ForElementType<int>)0x0) {
            FVar43 = FVar26;
          }
          if ((ulonglong)FVar43 <= &local_480) {
            FVar43 = FVar34;
            if (FVar26 != (ForElementType<int>)0x0) {
              FVar43 = FVar26;
            }
            if ((&local_480 <
                 (undefined8 *)((longlong)FVar43 + (longlong)*(int *)((longlong)FVar34 + 0x4c) * 4))
               && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar19)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar24 = *(int *)((longlong)FVar34 + 0x48);
          if (iVar24 == *(int *)((longlong)FVar34 + 0x4c)) {
            iVar24 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,(ForElementType<int> *)FVar34,(int *)((longlong)FVar34 + 0x4c)
                               );
          }
          *(int *)((longlong)FVar34 + 0x48) = iVar24 + 1;
          FVar26 = FVar34;
          if (*(ForElementType<int> *)((longlong)FVar34 + 0x40) != (ForElementType<int>)0x0) {
            FVar26 = *(ForElementType<int> *)((longlong)FVar34 + 0x40);
          }
          *(undefined4 *)((longlong)FVar26 + (longlong)iVar24 * 4) = (undefined4)local_480;
          FVar26 = *(ForElementType<int> *)((longlong)FVar34 + 0x40);
          FVar43 = FVar34;
          if (FVar26 != (ForElementType<int>)0x0) {
            FVar43 = FVar26;
          }
          if ((ulonglong)FVar43 <= (longlong)&local_480 + 4U) {
            FVar43 = FVar34;
            if (FVar26 != (ForElementType<int>)0x0) {
              FVar43 = FVar26;
            }
            if (((longlong)&local_480 + 4U <
                 (ulonglong)((longlong)FVar43 + (longlong)*(int *)((longlong)FVar34 + 0x4c) * 4)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar19)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar24 = *(int *)((longlong)FVar34 + 0x48);
          if (iVar24 == *(int *)((longlong)FVar34 + 0x4c)) {
            iVar24 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,(ForElementType<int> *)FVar34,(int *)((longlong)FVar34 + 0x4c)
                               );
          }
          *(int *)((longlong)FVar34 + 0x48) = iVar24 + 1;
          FVar26 = FVar34;
          if (*(ForElementType<int> *)((longlong)FVar34 + 0x40) != (ForElementType<int>)0x0) {
            FVar26 = *(ForElementType<int> *)((longlong)FVar34 + 0x40);
          }
          *(undefined4 *)((longlong)FVar26 + (longlong)iVar24 * 4) = local_480._4_4_;
          FVar26 = *(ForElementType<int> *)((longlong)FVar34 + 0x40);
          FVar43 = FVar34;
          if (FVar26 != (ForElementType<int>)0x0) {
            FVar43 = FVar26;
          }
          if ((ulonglong)FVar43 <= local_478) {
            FVar43 = FVar34;
            if (FVar26 != (ForElementType<int>)0x0) {
              FVar43 = FVar26;
            }
            if ((local_478 <
                 (undefined4 *)((longlong)FVar43 + (longlong)*(int *)((longlong)FVar34 + 0x4c) * 4))
               && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar19)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar24 = *(int *)((longlong)FVar34 + 0x48);
          if (iVar24 == *(int *)((longlong)FVar34 + 0x4c)) {
            iVar24 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,(ForElementType<int> *)FVar34,(int *)((longlong)FVar34 + 0x4c)
                               );
          }
          *(int *)((longlong)FVar34 + 0x48) = iVar24 + 1;
          if (*(ForElementType<int> *)((longlong)FVar34 + 0x40) != (ForElementType<int>)0x0) {
            FVar34 = *(ForElementType<int> *)((longlong)FVar34 + 0x40);
          }
          *(undefined4 *)((longlong)FVar34 + (longlong)iVar24 * 4) = local_478[0];
        }
        if (local_410[uVar31] < 2) {
          FVar26 = (ForElementType<int>)
                   TMapBase<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                   ::FindChecked((TMapBase<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                                  *)&local_188,local_4d0[0]);
          uVar39 = local_558[uVar31];
          uVar22 = 0;
          if ((int)uVar39 < (this->Hull).ArrayNum) {
            uVar22 = ~uVar39 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar40 = (this->Hull).AllocatorInstance.Data;
          local_3e0 = *(undefined8 *)(pFVar40 + (longlong)(int)uVar39 * 0xc);
          iVar24 = *(int *)(pFVar40 + (longlong)(int)uVar39 * 0xc + 8);
          local_57c = (int)local_3e0;
          local_3d8 = iVar24;
          if (((((FIndex2i_u_0 *)((longlong)FVar36.Data + 8))->_s_0).A != (int)local_3e0) &&
             (*(int *)((longlong)FVar36.Data + 0xc) != (int)local_3e0)) {
            FVar43 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
            FVar34 = FVar26;
            if (FVar43 != (ForElementType<int>)0x0) {
              FVar34 = FVar43;
            }
            if ((ulonglong)FVar34 <= &local_57c) {
              FVar34 = FVar26;
              if (FVar43 != (ForElementType<int>)0x0) {
                FVar34 = FVar43;
              }
              if ((&local_57c <
                   (int *)((longlong)FVar34 + (longlong)*(int *)((longlong)FVar26 + 0x4c) * 4)) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            iVar25 = *(int *)((longlong)FVar26 + 0x48);
            if (iVar25 == *(int *)((longlong)FVar26 + 0x4c)) {
              iVar25 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,(ForElementType<int> *)FVar26,
                                  (int *)((longlong)FVar26 + 0x4c));
            }
            *(int *)((longlong)FVar26 + 0x48) = iVar25 + 1;
            FVar43 = FVar26;
            if (*(ForElementType<int> *)((longlong)FVar26 + 0x40) != (ForElementType<int>)0x0) {
              FVar43 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
            }
            *(int *)((longlong)FVar43 + (longlong)iVar25 * 4) = local_57c;
          }
          local_57c = local_3e0._4_4_;
          if (((((FIndex2i_u_0 *)((longlong)FVar36.Data + 8))->_s_0).A != local_3e0._4_4_) &&
             (*(int *)((longlong)FVar36.Data + 0xc) != local_3e0._4_4_)) {
            FVar43 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
            FVar34 = FVar26;
            if (FVar43 != (ForElementType<int>)0x0) {
              FVar34 = FVar43;
            }
            if ((ulonglong)FVar34 <= &local_57c) {
              FVar34 = FVar26;
              if (FVar43 != (ForElementType<int>)0x0) {
                FVar34 = FVar43;
              }
              if ((&local_57c <
                   (int *)((longlong)FVar34 + (longlong)*(int *)((longlong)FVar26 + 0x4c) * 4)) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            iVar25 = *(int *)((longlong)FVar26 + 0x48);
            if (iVar25 == *(int *)((longlong)FVar26 + 0x4c)) {
              iVar25 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,(ForElementType<int> *)FVar26,
                                  (int *)((longlong)FVar26 + 0x4c));
            }
            *(int *)((longlong)FVar26 + 0x48) = iVar25 + 1;
            FVar43 = FVar26;
            if (*(ForElementType<int> *)((longlong)FVar26 + 0x40) != (ForElementType<int>)0x0) {
              FVar43 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
            }
            *(int *)((longlong)FVar43 + (longlong)iVar25 * 4) = local_57c;
          }
          local_57c = iVar24;
          if (((((FIndex2i_u_0 *)((longlong)FVar36.Data + 8))->_s_0).A != iVar24) &&
             (*(int *)((longlong)FVar36.Data + 0xc) != iVar24)) {
            FVar43 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
            FVar34 = FVar26;
            if (FVar43 != (ForElementType<int>)0x0) {
              FVar34 = FVar43;
            }
            if ((ulonglong)FVar34 <= &local_57c) {
              FVar34 = FVar26;
              if (FVar43 != (ForElementType<int>)0x0) {
                FVar34 = FVar43;
              }
              if ((&local_57c <
                   (int *)((longlong)FVar34 + (longlong)*(int *)((longlong)FVar26 + 0x4c) * 4)) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            iVar24 = *(int *)((longlong)FVar26 + 0x48);
            if (iVar24 == *(int *)((longlong)FVar26 + 0x4c)) {
              iVar24 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,(ForElementType<int> *)FVar26,
                                  (int *)((longlong)FVar26 + 0x4c));
            }
            *(int *)((longlong)FVar26 + 0x48) = iVar24 + 1;
            if (*(ForElementType<int> *)((longlong)FVar26 + 0x40) != (ForElementType<int>)0x0) {
              FVar26 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
            }
            *(int *)((longlong)FVar26 + (longlong)iVar24 * 4) = local_57c;
          }
        }
        else {
          TMap<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
          ::FindAndRemoveChecked
                    ((TMap<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                      *)&local_188,&local_138,uVar39);
          FVar26 = (ForElementType<int>)
                   TMapBase<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                   ::FindChecked((TMapBase<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                                  *)&local_188,local_4d0[0]);
          iVar24 = local_138.ArrayNum;
          uVar39 = iVar24 + -2 + *(int *)((longlong)FVar26 + 0x48);
          if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar39);
          }
          piVar1 = (int *)((longlong)FVar26 + 0x4c);
          if (*(int *)((longlong)FVar26 + 0x4c) < (int)uVar39) {
            Core::Private::
            ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,uVar39,(ForElementType<int> *)FVar26,*(int *)((longlong)FVar26 + 0x48),
                       piVar1);
          }
          FVar43 = (ForElementType<int>)&local_138;
          if (local_138.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar43 = local_138.AllocatorInstance.SecondaryData;
          }
          FVar34 = (ForElementType<int>)((longlong)FVar43 + (longlong)iVar24 * 4);
          for (; FVar43 != FVar34; FVar43 = (ForElementType<int>)((longlong)FVar43 + 4)) {
            local_4a8[0] = *(int *)FVar43;
            if (((((FIndex2i_u_0 *)((longlong)FVar36.Data + 8))->_s_0).A != local_4a8[0]) &&
               (*(int *)((longlong)FVar36.Data + 0xc) != local_4a8[0])) {
              FVar30 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
              FVar38 = FVar26;
              if (FVar30 != (ForElementType<int>)0x0) {
                FVar38 = FVar30;
              }
              if ((ulonglong)FVar38 <= local_4a8) {
                FVar38 = FVar26;
                if (FVar30 != (ForElementType<int>)0x0) {
                  FVar38 = FVar30;
                }
                if ((local_4a8 < (int *)((longlong)FVar38 + (longlong)*piVar1 * 4)) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              iVar24 = *(int *)((longlong)FVar26 + 0x48);
              if (iVar24 == *piVar1) {
                iVar24 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,(ForElementType<int> *)FVar26,piVar1);
              }
              *(int *)((longlong)FVar26 + 0x48) = iVar24 + 1;
              FVar30 = FVar26;
              if (*(ForElementType<int> *)((longlong)FVar26 + 0x40) != (ForElementType<int>)0x0) {
                FVar30 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
              }
              *(int *)((longlong)FVar30 + (longlong)iVar24 * 4) = local_4a8[0];
            }
          }
          this = local_530;
          if (local_138.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FMemory::Free((void *)local_138.AllocatorInstance.SecondaryData);
            this = local_530;
          }
        }
      }
LAB_1433aae37:
      uVar56 = (undefined4)__real_3f1a36e2eb1c432d;
      uVar57 = (undefined4)((ulonglong)__real_3f1a36e2eb1c432d >> 0x20);
      uVar60 = SUB84(__real_3ff0000000000000,0);
      uVar61 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      FVar33 = local_568;
      dVar53 = local_538;
    }
    uVar29 = (ulonglong)local_518;
    FVar36.Data = FVar36.Data + 0x18;
    uVar58 = SUB84(__real_3fe0000000000000,0);
    uVar59 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    uVar31 = (ulonglong)local_510 & 0xffffffff;
    uVar37 = (ulong64)local_584;
    param_2 = local_468;
  }
  local_578.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_578.ArrayNum = 0;
  local_578.ArrayMax = 0;
  local_34c._0_8_ = 0xffffffffffffffff;
  local_34c._s_0.C = -1;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::Init
            (&local_578,(FIndex3i *)&local_34c._s_0,(int)uVar37);
  iVar24 = (this->Hull).ArrayNum;
  uVar41 = 0;
  if (0 < iVar24) {
    local_568 = (FIndex2i_u_0)0x0;
    do {
      FVar33 = local_568;
      uVar31 = local_4f0.Parents._8_8_ & 0xffffffff;
      uVar42 = uVar41;
      while( true ) {
        uVar39 = 0;
        if ((int)uVar42 < (int)uVar31) {
          uVar39 = ~uVar42 >> 0x1f;
        }
        iVar24 = (int)uVar31;
        if (uVar39 == 0) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar24 = local_4f0.Parents.ArrayNum;
        }
        if (*(uint *)(local_4f0.Parents.AllocatorInstance.Data + (longlong)(int)uVar42 * 4) ==
            uVar42) break;
        uVar39 = 0;
        if ((int)uVar42 < iVar24) {
          uVar39 = ~uVar42 >> 0x1f;
        }
        if (uVar39 == 0) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar24 = local_4f0.Parents.ArrayNum;
        }
        uVar39 = *(uint *)(local_4f0.Parents.AllocatorInstance.Data + (longlong)(int)uVar42 * 4);
        uVar22 = 0;
        if ((int)uVar39 < iVar24) {
          uVar22 = ~uVar39 >> 0x1f;
        }
        if (uVar22 == 0) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar24 = local_4f0.Parents.ArrayNum;
        }
        uVar58 = *(undefined4 *)
                  (local_4f0.Parents.AllocatorInstance.Data + (longlong)(int)uVar39 * 4);
        uVar39 = 0;
        if ((int)uVar42 < iVar24) {
          uVar39 = ~uVar42 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)(local_4f0.Parents.AllocatorInstance.Data + (longlong)(int)uVar42 * 4) =
             uVar58;
        uVar31 = (ulonglong)local_4f0.Parents.ArrayNum;
        uVar39 = 0;
        if ((int)uVar42 < local_4f0.Parents.ArrayNum) {
          uVar39 = ~uVar42 >> 0x1f;
        }
        if (uVar39 == 0) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar31 = local_4f0.Parents._8_8_ & 0xffffffff;
        }
        uVar42 = *(uint *)(local_4f0.Parents.AllocatorInstance.Data + (longlong)(int)uVar42 * 4);
      }
      uVar39 = 0;
      if ((int)uVar41 < (this->Hull).ArrayNum) {
        uVar39 = ~uVar41 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar40 = (this->Hull).AllocatorInstance.Data;
      local_490 = *(undefined8 *)(pFVar40 + (longlong)FVar33);
      local_488 = *(uint *)(pFVar40 + 8 + (longlong)FVar33);
      lVar47 = 0;
      uVar39 = (uint)local_490;
      uVar22 = ~(uint)local_490 >> 0x1f;
      lVar46 = (longlong)(int)(uint)local_490 * 0xc;
      iVar24 = local_578.ArrayNum;
      do {
        uVar23 = 0;
        if ((int)uVar39 < iVar24) {
          uVar23 = uVar22;
        }
        if ((uVar23 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar24 = local_578.ArrayNum, bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)(local_578.AllocatorInstance.Data + lVar46) == -1) {
          uVar23 = 0;
          if ((int)uVar39 < iVar24) {
            uVar23 = uVar22;
          }
          if ((uVar23 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(uint *)(local_578.AllocatorInstance.Data + (lVar47 + (longlong)(int)uVar39 * 3) * 4) =
               uVar42;
          iVar24 = local_578.ArrayNum;
          break;
        }
        uVar23 = 0;
        if ((int)uVar39 < iVar24) {
          uVar23 = uVar22;
        }
        if ((uVar23 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar24 = local_578.ArrayNum, bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(uint *)(local_578.AllocatorInstance.Data + lVar46) == uVar42) break;
        lVar47 = lVar47 + 1;
        lVar46 = lVar46 + 4;
      } while (lVar47 < 3);
      uVar39 = local_490._4_4_;
      lVar47 = 0;
      uVar22 = ~local_490._4_4_ >> 0x1f;
      lVar46 = (longlong)(int)local_490._4_4_ * 0xc;
      do {
        uVar23 = 0;
        if ((int)uVar39 < iVar24) {
          uVar23 = uVar22;
        }
        if ((uVar23 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar24 = local_578.ArrayNum, bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)(local_578.AllocatorInstance.Data + lVar46) == -1) {
          uVar23 = 0;
          if ((int)uVar39 < iVar24) {
            uVar23 = uVar22;
          }
          if ((uVar23 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(uint *)(local_578.AllocatorInstance.Data + (lVar47 + (longlong)(int)uVar39 * 3) * 4) =
               uVar42;
          iVar24 = local_578.ArrayNum;
          break;
        }
        uVar23 = 0;
        if ((int)uVar39 < iVar24) {
          uVar23 = uVar22;
        }
        if ((uVar23 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar24 = local_578.ArrayNum, bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(uint *)(local_578.AllocatorInstance.Data + lVar46) == uVar42) break;
        lVar47 = lVar47 + 1;
        lVar46 = lVar46 + 4;
      } while (lVar47 < 3);
      uVar39 = local_488;
      lVar47 = 0;
      uVar22 = ~local_488 >> 0x1f;
      lVar46 = (longlong)(int)local_488 * 0xc;
      do {
        uVar23 = 0;
        if ((int)uVar39 < iVar24) {
          uVar23 = uVar22;
        }
        if ((uVar23 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar24 = local_578.ArrayNum, bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)(local_578.AllocatorInstance.Data + lVar46) == -1) {
          uVar23 = 0;
          if ((int)uVar39 < iVar24) {
            uVar23 = uVar22;
          }
          if ((uVar23 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(uint *)(local_578.AllocatorInstance.Data + (lVar47 + (longlong)(int)uVar39 * 3) * 4) =
               uVar42;
          break;
        }
        uVar23 = 0;
        if ((int)uVar39 < iVar24) {
          uVar23 = uVar22;
        }
        if ((uVar23 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar24 = local_578.ArrayNum, bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(uint *)(local_578.AllocatorInstance.Data + lVar46) == uVar42) break;
        lVar47 = lVar47 + 1;
        lVar46 = lVar46 + 4;
      } while (lVar47 < 3);
      uVar41 = uVar41 + 1;
      local_568._s_0 = local_568._s_0 + 0xc;
      iVar24 = (local_530->Hull).ArrayNum;
      this = local_530;
    } while ((int)uVar41 < iVar24);
    uVar37 = (ulong64)local_584;
  }
  bVar19 = false;
  local_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar41 = 0;
  local_508.ArrayNum = 0;
  local_508.ArrayMax = 0;
  local_550.Data = (FScriptContainerElement *)0x0;
  local_470 = &local_578;
  local_548 = 0;
  if (0 < iVar24) {
    lVar46 = 0;
    uVar42 = uVar41;
LAB_1433ab7e3:
    while( true ) {
      uVar39 = 0;
      if ((int)uVar41 < local_4f0.Parents.ArrayNum) {
        uVar39 = ~uVar41 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(uint *)(local_4f0.Parents.AllocatorInstance.Data + (longlong)(int)uVar41 * 4) == uVar41)
      break;
      uVar39 = 0;
      if ((int)uVar41 < local_4f0.Parents.ArrayNum) {
        uVar39 = ~uVar41 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar39 = *(uint *)(local_4f0.Parents.AllocatorInstance.Data + (longlong)(int)uVar41 * 4);
      uVar22 = 0;
      if ((int)uVar39 < local_4f0.Parents.ArrayNum) {
        uVar22 = ~uVar39 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar58 = *(undefined4 *)(local_4f0.Parents.AllocatorInstance.Data + (longlong)(int)uVar39 * 4)
      ;
      uVar39 = 0;
      if ((int)uVar41 < local_4f0.Parents.ArrayNum) {
        uVar39 = ~uVar41 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(local_4f0.Parents.AllocatorInstance.Data + (longlong)(int)uVar41 * 4) = uVar58
      ;
      uVar39 = 0;
      if ((int)uVar41 < local_4f0.Parents.ArrayNum) {
        uVar39 = ~uVar41 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar41 = *(uint *)(local_4f0.Parents.AllocatorInstance.Data + (longlong)(int)uVar41 * 4);
    }
    pTVar44 = local_528;
    local_55c = uVar41;
    if (uVar41 == uVar42) {
      uVar39 = FSizedDisjointSet::FindWithoutCollapse(&local_4f0,uVar42);
      uVar41 = 0;
      if ((int)uVar39 < local_4f0.Sizes.ArrayNum) {
        uVar41 = ~uVar39 >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar5 = local_508._8_8_;
      pTVar28 = local_530;
      if (*(int *)(local_4f0.Sizes.AllocatorInstance.Data + (longlong)(int)uVar39 * 4) == 1) {
        uVar41 = 0;
        if ((int)uVar42 < (local_530->Hull).ArrayNum) {
          uVar41 = ~uVar42 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar16 = local_470;
        pFVar40 = (pTVar28->Hull).AllocatorInstance.Data;
        local_4c8 = *(undefined8 *)(pFVar40 + lVar46 * 0xc);
        local_4c0[0] = *(uint *)(pFVar40 + lVar46 * 0xc + 8);
        lVar47 = (longlong)(int)(uint)local_4c8;
        uVar39 = 0;
        uVar41 = uVar39;
        if ((int)(uint)local_4c8 < local_470->ArrayNum) {
          uVar41 = ~(uint)local_4c8 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar17 = local_470;
        if (*(int *)((pTVar16->AllocatorInstance).Data + lVar47 * 0xc + 8) != -1) {
          lVar47 = (longlong)(int)local_4c8._4_4_;
          uVar41 = uVar39;
          if ((int)local_4c8._4_4_ < local_470->ArrayNum) {
            uVar41 = ~local_4c8._4_4_ >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar16 = local_470;
          if (*(int *)((pTVar17->AllocatorInstance).Data + lVar47 * 0xc + 8) != -1) {
            lVar47 = (longlong)(int)local_4c0[0];
            uVar41 = uVar39;
            if ((int)local_4c0[0] < local_470->ArrayNum) {
              uVar41 = ~local_4c0[0] >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pTVar44 = local_528;
            if (*(int *)((pTVar16->AllocatorInstance).Data + lVar47 * 0xc + 8) != -1) {
              iVar24 = local_528->ArrayNum;
              if (iVar24 == local_528->ArrayMax) {
                iVar24 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x830,&local_528->AllocatorInstance,&local_528->ArrayMax);
              }
              pTVar44->ArrayNum = iVar24 + 1;
              FVar26 = (ForElementType<int>)
                       ((longlong)iVar24 * 0x30 + (longlong)(pTVar44->AllocatorInstance).Data);
              *(ForElementType<int> *)((longlong)FVar26 + 0x20) = (ForElementType<int>)0x0;
              pFVar2 = (ForElementType<int> *)((longlong)FVar26 + 0x28);
              pFVar2->InlineData[0] = '\0';
              pFVar2->InlineData[1] = '\0';
              pFVar2->InlineData[2] = '\0';
              pFVar2->InlineData[3] = '\0';
              puVar3 = (uchar *)((longlong)FVar26 + 0x2c);
              puVar3[0] = '\b';
              puVar3[1] = '\0';
              puVar3[2] = '\0';
              puVar3[3] = '\0';
              if ((((ulonglong)FVar26 <= &local_4c8) &&
                  (&local_4c8 < (ForElementType<int> *)((longlong)FVar26 + 0x20U))) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar20)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar24 = *(int *)((ForElementType<int> *)((longlong)FVar26 + 0x28))->InlineData;
              if (iVar24 == *(int *)((longlong)FVar26 + 0x2c)) {
                iVar24 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,(ForElementType<int> *)FVar26,
                                    (int *)((longlong)FVar26 + 0x2c));
              }
              *(int *)((ForElementType<int> *)((longlong)FVar26 + 0x28))->InlineData = iVar24 + 1;
              FVar43 = FVar26;
              if (*(ForElementType<int> *)((longlong)FVar26 + 0x20) != (ForElementType<int>)0x0) {
                FVar43 = *(ForElementType<int> *)((longlong)FVar26 + 0x20);
              }
              *(uint *)((longlong)FVar43 + (longlong)iVar24 * 4) = (uint)local_4c8;
              FVar43 = *(ForElementType<int> *)((longlong)FVar26 + 0x20);
              FVar34 = FVar26;
              if (FVar43 != (ForElementType<int>)0x0) {
                FVar34 = FVar43;
              }
              if ((ulonglong)FVar34 <= (longlong)&local_4c8 + 4U) {
                FVar34 = FVar26;
                if (FVar43 != (ForElementType<int>)0x0) {
                  FVar34 = FVar43;
                }
                if (((longlong)&local_4c8 + 4U <
                     (ulonglong)((longlong)FVar34 + (longlong)*(int *)((longlong)FVar26 + 0x2c) * 4)
                    ) && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar20)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              iVar24 = *(int *)((longlong)FVar26 + 0x28);
              if (iVar24 == *(int *)((longlong)FVar26 + 0x2c)) {
                iVar24 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,(ForElementType<int> *)FVar26,
                                    (int *)((longlong)FVar26 + 0x2c));
              }
              *(int *)((longlong)FVar26 + 0x28) = iVar24 + 1;
              FVar43 = FVar26;
              if (*(ForElementType<int> *)((longlong)FVar26 + 0x20) != (ForElementType<int>)0x0) {
                FVar43 = *(ForElementType<int> *)((longlong)FVar26 + 0x20);
              }
              *(uint *)((longlong)FVar43 + (longlong)iVar24 * 4) = local_4c8._4_4_;
              FVar43 = *(ForElementType<int> *)((longlong)FVar26 + 0x20);
              FVar34 = FVar26;
              if (FVar43 != (ForElementType<int>)0x0) {
                FVar34 = FVar43;
              }
              if ((ulonglong)FVar34 <= local_4c0) {
                FVar34 = FVar26;
                if (FVar43 != (ForElementType<int>)0x0) {
                  FVar34 = FVar43;
                }
                if ((local_4c0 <
                     (uint *)((longlong)FVar34 + (longlong)*(int *)((longlong)FVar26 + 0x2c) * 4))
                   && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar20)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              iVar24 = *(int *)((longlong)FVar26 + 0x28);
              if (iVar24 == *(int *)((longlong)FVar26 + 0x2c)) {
                iVar24 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,(ForElementType<int> *)FVar26,
                                    (int *)((longlong)FVar26 + 0x2c));
              }
              *(int *)((longlong)FVar26 + 0x28) = iVar24 + 1;
              if (*(ForElementType<int> *)((longlong)FVar26 + 0x20) != (ForElementType<int>)0x0) {
                FVar26 = *(ForElementType<int> *)((longlong)FVar26 + 0x20);
              }
              *(uint *)((longlong)FVar26 + (longlong)iVar24 * 4) = local_4c0[0];
              if (local_4f8 == (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0)
              {
                if (((local_550.Data <= (FScriptContainerElement *)&local_55c) &&
                    ((FScriptContainerElement *)&local_55c <
                     local_550.Data + (longlong)local_548._4_4_ * 4)) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar20)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar24 = (int)local_548;
                if ((int)local_548 == local_548._4_4_) {
                  iVar24 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_550,(int *)((longlong)&local_548 + 4));
                }
                local_548 = CONCAT44(local_548._4_4_,iVar24 + 1);
                *(uint *)(local_550.Data + (longlong)iVar24 * 4) = local_55c;
              }
              else {
                lVar47 = (longlong)(int)local_55c;
                if ((int)local_55c < local_4b8.ArrayNum) {
                  uVar39 = ~local_55c >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pTVar15 = local_4f8;
                local_438 = (float)*(double *)
                                    (local_4b8.AllocatorInstance.Data + lVar47 * 0x18 + 0x10);
                fStack_43c = (float)*(double *)
                                     (local_4b8.AllocatorInstance.Data + lVar47 * 0x18 + 8);
                local_440 = (float)*(double *)(local_4b8.AllocatorInstance.Data + lVar47 * 0x18);
                pFVar40 = (local_4f8->AllocatorInstance).Data;
                if (((pFVar40 <= (FScriptContainerElement *)&local_440) &&
                    ((FScriptContainerElement *)&local_440 <
                     pFVar40 + (longlong)local_4f8->ArrayMax * 0xc)) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar20)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar24 = pTVar15->ArrayNum;
                if (iVar24 == pTVar15->ArrayMax) {
                  iVar24 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
                }
                pTVar15->ArrayNum = iVar24 + 1;
                pFVar40 = (pTVar15->AllocatorInstance).Data;
                *(ulonglong *)(pFVar40 + (longlong)iVar24 * 0xc) = CONCAT44(fStack_43c,local_440);
                *(float *)(pFVar40 + (longlong)iVar24 * 0xc + 8) = local_438;
                pTVar44 = local_528;
              }
              goto LAB_1433ac45c;
            }
          }
        }
        bVar19 = true;
        pTVar44 = local_528;
        goto LAB_1433ac45c;
      }
      iVar24 = local_508.ArrayMax;
      local_508._8_8_ = (ulonglong)(uint)local_508.ArrayMax << 0x20;
      if (((longlong)uVar5 < 0) && (iVar24 != 0)) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_508.AllocatorInstance,0,&local_508.ArrayMax);
      }
      local_258 = &local_4f0;
      local_250 = &local_55c;
      local_2e0 = &local_258;
      local_2e8 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l90::<lambda_6>,bool,int>
                  ::Call;
      WalkBorder(&local_530->Hull,&local_530->HullNeighbors,
                 (TFunctionRef<bool___cdecl(int)> *)&local_2e8,uVar42,&local_508);
      FVar14.Data = local_508.AllocatorInstance.Data;
      pFVar40 = local_508.AllocatorInstance.Data + (longlong)local_508.ArrayNum * 4;
      FVar36.Data = local_508.AllocatorInstance.Data;
      FVar35.Data = local_508.AllocatorInstance.Data;
      if (local_508.AllocatorInstance.Data != pFVar40) {
        do {
          FVar36.Data = FVar35.Data + 4;
          bVar20 = `UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l2::<lambda_5>::
                   operator()(&local_470,*(int *)FVar35.Data);
          pFVar27 = FVar36.Data;
          if (!bVar20) goto joined_r0x0001433ac080;
          FVar35.Data = FVar36.Data;
        } while (FVar36.Data != pFVar40);
        goto LAB_1433ac0a2;
      }
      goto LAB_1433ac0a5;
    }
    goto LAB_1433ac45c;
  }
  goto LAB_1433ac479;
joined_r0x0001433ac080:
  for (; FVar36.Data = FVar35.Data, pFVar27 != pFVar40; pFVar27 = pFVar27 + 4) {
    bVar20 = `UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l2::<lambda_5>::operator()
                       (&local_470,*(int *)pFVar27);
    if (bVar20) {
      *(int *)FVar36.Data = *(int *)pFVar27;
      FVar36.Data = FVar36.Data + 4;
    }
    FVar35.Data = FVar36.Data;
  }
LAB_1433ac0a2:
LAB_1433ac0a5:
  uVar37 = (ulong64)local_584;
  uVar31 = (longlong)FVar36.Data - (longlong)FVar14.Data >> 2;
  uVar41 = (uint)uVar31;
  if ((int)uVar41 < 3) {
    bVar19 = true;
    pTVar44 = local_528;
  }
  else {
    if (local_508.ArrayNum < (int)uVar41) {
      iVar25 = uVar41 - local_508.ArrayNum;
      iVar24 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar25,&local_508.AllocatorInstance,&local_508.ArrayNum,
                          &local_508.ArrayMax);
      memset(local_508.AllocatorInstance.Data + (longlong)iVar24 * 4,0,(longlong)iVar25 << 2);
    }
    else if ((int)uVar41 < local_508.ArrayNum) {
      uVar39 = local_508.ArrayNum - uVar41;
      iVar24 = local_508.ArrayNum;
      if ((int)(uVar39 | uVar41) < 0) {
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar20) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar24 = local_508.ArrayNum;
      }
      if (uVar39 != 0) {
        iVar25 = (iVar24 - uVar39) - uVar41;
        if (iVar25 != 0) {
          memmove(local_508.AllocatorInstance.Data + (uVar31 & 0xffffffff) * 4,
                  local_508.AllocatorInstance.Data + (uVar31 & 0xffffffff) * 4 +
                  (longlong)(int)uVar39 * 4,(longlong)iVar25 << 2);
          iVar24 = local_508.ArrayNum;
        }
        local_508.ArrayNum = iVar24 - uVar39;
      }
    }
    pTVar44 = local_528;
    iVar24 = local_528->ArrayNum;
    if (iVar24 == local_528->ArrayMax) {
      iVar24 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_528->AllocatorInstance,&local_528->ArrayMax);
    }
    pTVar44->ArrayNum = iVar24 + 1;
    FVar26 = (ForElementType<int>)
             ((longlong)(pTVar44->AllocatorInstance).Data + (longlong)iVar24 * 0x30);
    pFVar2 = (ForElementType<int> *)((longlong)FVar26 + 0x28);
    puVar3 = (uchar *)((longlong)FVar26 + 0x2c);
    *(ForElementType<int> *)((longlong)FVar26 + 0x20) = (ForElementType<int>)0x0;
    pFVar2->InlineData[0] = '\0';
    pFVar2->InlineData[1] = '\0';
    pFVar2->InlineData[2] = '\0';
    pFVar2->InlineData[3] = '\0';
    puVar3[0] = '\b';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    if ((FVar26 == (ForElementType<int>)&local_508) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar20)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar47 = (longlong)local_508.ArrayNum;
    if (local_508.ArrayNum != 0) {
      iVar24 = Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                         (4,4,local_508.ArrayNum,(ForElementType<int> *)FVar26,(int *)pFVar2,
                          (int *)puVar3);
      if (*(ForElementType<int> *)((longlong)FVar26 + 0x20) != (ForElementType<int>)0x0) {
        FVar26 = *(ForElementType<int> *)((longlong)FVar26 + 0x20);
      }
      memcpy((void *)((longlong)FVar26 + (longlong)iVar24 * 4),local_508.AllocatorInstance.Data,
             lVar47 << 2);
    }
    if (local_4f8 == (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
      if (((local_550.Data <= (FScriptContainerElement *)&local_55c) &&
          ((FScriptContainerElement *)&local_55c < local_550.Data + (longlong)local_548._4_4_ * 4))
         && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar24 = (int)local_548;
      if ((int)local_548 == local_548._4_4_) {
        iVar24 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_550,(int *)((longlong)&local_548 + 4));
      }
      uVar37 = (ulong64)local_584;
      local_548 = CONCAT44(local_548._4_4_,iVar24 + 1);
      *(uint *)(local_550.Data + (longlong)iVar24 * 4) = local_55c;
      pTVar44 = local_528;
    }
    else {
      lVar47 = (longlong)(int)local_55c;
      uVar41 = 0;
      if ((int)local_55c < local_4b8.ArrayNum) {
        uVar41 = ~local_55c >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar15 = local_4f8;
      local_420 = (float)*(double *)(local_4b8.AllocatorInstance.Data + lVar47 * 0x18 + 0x10);
      fStack_424 = (float)*(double *)(local_4b8.AllocatorInstance.Data + lVar47 * 0x18 + 8);
      local_428 = (float)*(double *)(local_4b8.AllocatorInstance.Data + lVar47 * 0x18);
      pFVar40 = (local_4f8->AllocatorInstance).Data;
      if (((pFVar40 <= (FScriptContainerElement *)&local_428) &&
          ((FScriptContainerElement *)&local_428 < pFVar40 + (longlong)local_4f8->ArrayMax * 0xc))
         && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar24 = pTVar15->ArrayNum;
      if (iVar24 == pTVar15->ArrayMax) {
        iVar24 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
      }
      uVar37 = (ulong64)local_584;
      pTVar15->ArrayNum = iVar24 + 1;
      pFVar40 = (pTVar15->AllocatorInstance).Data;
      *(ulonglong *)(pFVar40 + (longlong)iVar24 * 0xc) = CONCAT44(fStack_424,local_428);
      *(float *)(pFVar40 + (longlong)iVar24 * 0xc + 8) = local_420;
      pTVar44 = local_528;
    }
  }
LAB_1433ac45c:
  uVar41 = uVar42 + 1;
  lVar46 = lVar46 + 1;
  uVar42 = uVar41;
  if ((local_530->Hull).ArrayNum <= (int)uVar41) goto code_r0x0001433ac470;
  goto LAB_1433ab7e3;
code_r0x0001433ac470:
  if (bVar19) {
    while (3 < pTVar44->ArrayNum) {
      bVar19 = false;
      local_434 = 0xffffffffffffffff;
      local_42c = 0xffffffff;
      iVar24 = (int)uVar37;
      if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar37);
      }
      local_578.ArrayNum = 0;
      if (local_578.ArrayMax != iVar24) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar24,&local_578.AllocatorInstance,0,&local_578.ArrayMax);
      }
      if (0 < iVar24) {
        do {
          if (((local_578.AllocatorInstance.Data <= (FScriptContainerElement *)&local_434) &&
              ((FScriptContainerElement *)&local_434 <
               local_578.AllocatorInstance.Data + (longlong)local_578.ArrayMax * 0xc)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar20)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (local_578.ArrayNum == local_578.ArrayMax) {
            local_578.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_578.AllocatorInstance,&local_578.ArrayMax);
          }
          lVar46 = (longlong)local_578.ArrayNum;
          local_578.ArrayNum = local_578.ArrayNum + 1;
          *(undefined8 *)(local_578.AllocatorInstance.Data + lVar46 * 0xc) = local_434;
          *(undefined4 *)(local_578.AllocatorInstance.Data + lVar46 * 0xc + 8) = local_42c;
          uVar37 = uVar37 - 1;
        } while (uVar37 != 0);
      }
      iVar24 = pTVar44->ArrayNum;
      uVar41 = 0;
      if (0 < iVar24) {
        local_538 = 0.0;
        do {
          dVar53 = local_538;
          uVar42 = 0;
          if ((int)uVar41 < iVar24) {
            uVar42 = ~uVar41 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_460 = (pTVar44->AllocatorInstance).Data + (longlong)dVar53;
          uVar42 = 0;
          iVar24 = *(int *)(local_460 + 0x28);
          if (0 < iVar24) {
            local_568 = (FIndex2i_u_0)0x0;
            do {
              pFVar40 = local_460;
              FVar33 = local_568;
              uVar39 = 0;
              if ((int)uVar42 < iVar24) {
                uVar39 = ~uVar42 >> 0x1f;
              }
              if ((uVar39 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar27 = *(FScriptContainerElement **)(pFVar40 + 0x20);
              if (pFVar27 != (FScriptContainerElement *)0x0) {
                pFVar40 = pFVar27;
              }
              uVar39 = *(uint *)(pFVar40 + (longlong)FVar33);
              lVar47 = 0;
              uVar22 = ~uVar39 >> 0x1f;
              lVar46 = (longlong)(int)uVar39 * 0xc;
              do {
                uVar23 = 0;
                if ((int)uVar39 < local_578.ArrayNum) {
                  uVar23 = uVar22;
                }
                if ((uVar23 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (*(int *)(local_578.AllocatorInstance.Data + lVar46) == -1) {
                  uVar23 = 0;
                  if ((int)uVar39 < local_578.ArrayNum) {
                    uVar23 = uVar22;
                  }
                  if ((uVar23 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  *(uint *)(local_578.AllocatorInstance.Data +
                           (lVar47 + (longlong)(int)uVar39 * 3) * 4) = uVar41;
                  break;
                }
                uVar23 = 0;
                if ((int)uVar39 < local_578.ArrayNum) {
                  uVar23 = uVar22;
                }
                if ((uVar23 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (*(uint *)(local_578.AllocatorInstance.Data + lVar46) == uVar41) break;
                lVar47 = lVar47 + 1;
                lVar46 = lVar46 + 4;
              } while (lVar47 < 3);
              uVar42 = uVar42 + 1;
              local_568._s_0 = local_568._s_0 + 4;
              iVar24 = *(int *)(local_460 + 0x28);
              pTVar44 = local_528;
            } while ((int)uVar42 < iVar24);
          }
          uVar41 = uVar41 + 1;
          iVar24 = pTVar44->ArrayNum;
          local_538 = (double)((longlong)local_538 + 0x30);
        } while ((int)uVar41 < iVar24);
      }
      uVar41 = 0;
      if (iVar24 < 1) break;
      lVar46 = 0;
      do {
        uVar42 = 0;
        if ((int)uVar41 < iVar24) {
          uVar42 = ~uVar41 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar43 = (ForElementType<int>)((longlong)(pTVar44->AllocatorInstance).Data + lVar46);
        FVar26 = FVar43;
        if (*(ForElementType<int> *)((longlong)FVar43 + 0x20) != (ForElementType<int>)0x0) {
          FVar26 = *(ForElementType<int> *)((longlong)FVar43 + 0x20);
        }
        FVar30 = (ForElementType<int>)
                 ((longlong)FVar26 + (longlong)*(int *)((longlong)FVar43 + 0x28) * 4);
        FVar34 = FVar26;
        do {
          FVar38 = FVar34;
          if (FVar38 == FVar30) goto LAB_1433ac992;
          FVar34 = (ForElementType<int>)((longlong)FVar38 + 4);
          bVar20 = `UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l2::<lambda_5>::
                   operator()(&local_470,*(int *)FVar38);
        } while (bVar20);
        for (; FVar34 != FVar30; FVar34 = (ForElementType<int>)((longlong)FVar34 + 4)) {
          bVar20 = `UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l2::<lambda_5>::
                   operator()(&local_470,*(int *)FVar34);
          if (bVar20) {
            *(int *)FVar38 = *(int *)FVar34;
            FVar38 = (ForElementType<int>)((longlong)FVar38 + 4);
          }
        }
LAB_1433ac992:
        pTVar44 = local_528;
        uVar42 = *(uint *)((longlong)FVar43 + 0x28);
        uVar31 = (longlong)FVar38 - (longlong)FVar26 >> 2;
        uVar39 = (uint)uVar31;
        if (uVar39 != uVar42) {
          if ((int)uVar39 < 3) {
            uVar42 = 0;
            if ((int)uVar41 < local_528->ArrayNum) {
              uVar42 = ~uVar41 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
            ::RemoveAtSwapImpl(pTVar44,uVar41);
            pTVar15 = local_4f8;
            if (local_4f8 == (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
              uVar42 = 0;
              if ((int)uVar41 < (int)local_548) {
                uVar42 = ~uVar41 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar24 = ((int)local_548 - uVar41) + -1;
              if (1 < iVar24) {
                iVar24 = 1;
              }
              if (iVar24 != 0) {
                memmove(local_550.Data + (longlong)(int)uVar41 * 4,
                        local_550.Data + (longlong)((int)local_548 - iVar24) * 4,
                        (longlong)iVar24 << 2);
              }
              local_548 = CONCAT44(local_548._4_4_,(int)local_548 + -1);
              uVar41 = uVar41 - 1;
              bVar19 = true;
              lVar46 = lVar46 + -0x30;
            }
            else {
              uVar42 = 0;
              if ((int)uVar41 < local_4f8->ArrayNum) {
                uVar42 = ~uVar41 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar40 = (pTVar15->AllocatorInstance).Data;
              iVar24 = ~uVar41 + pTVar15->ArrayNum;
              if (1 < iVar24) {
                iVar24 = 1;
              }
              if (iVar24 != 0) {
                memmove(pFVar40 + (longlong)(int)uVar41 * 0xc,
                        pFVar40 + (longlong)(pTVar15->ArrayNum - iVar24) * 0xc,
                        (longlong)iVar24 * 0xc);
              }
              pTVar15->ArrayNum = pTVar15->ArrayNum + -1;
              uVar41 = uVar41 - 1;
              bVar19 = true;
              lVar46 = lVar46 + -0x30;
            }
          }
          else if ((int)uVar42 < (int)uVar39) {
            iVar24 = Core::Private::
                     ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (4,4,uVar39 - uVar42,(ForElementType<int> *)FVar43,
                                (int *)((longlong)FVar43 + 0x28),(int *)((longlong)FVar43 + 0x2c));
            if (*(ForElementType<int> *)((longlong)FVar43 + 0x20) != (ForElementType<int>)0x0) {
              FVar43 = *(ForElementType<int> *)((longlong)FVar43 + 0x20);
            }
            memset((void *)((longlong)FVar43 + (longlong)iVar24 * 4),0,
                   (longlong)(int)(uVar39 - uVar42) << 2);
          }
          else if ((int)uVar39 < (int)uVar42) {
            uVar42 = uVar42 - uVar39;
            if (((int)(uVar42 | uVar39) < 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar20)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (uVar42 != 0) {
              FVar26 = FVar43;
              if (*(ForElementType<int> *)((longlong)FVar43 + 0x20) != (ForElementType<int>)0x0) {
                FVar26 = *(ForElementType<int> *)((longlong)FVar43 + 0x20);
              }
              _Dst = (void *)((longlong)FVar26 + (uVar31 & 0xffffffff) * 4);
              iVar24 = (*(int *)((longlong)FVar43 + 0x28) - uVar39) - uVar42;
              if (iVar24 != 0) {
                memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar42 * 4),
                        (longlong)iVar24 << 2);
              }
              iVar24 = *(int *)((longlong)FVar43 + 0x28) - uVar42;
              *(int *)((longlong)FVar43 + 0x28) = iVar24;
              Core::Private::
              ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (4,4,(ForElementType<int> *)FVar43,iVar24,(int *)((longlong)FVar43 + 0x2c));
            }
          }
        }
        uVar41 = uVar41 + 1;
        lVar46 = lVar46 + 0x30;
        iVar24 = local_528->ArrayNum;
        pTVar44 = local_528;
      } while ((int)uVar41 < iVar24);
      if (!bVar19) break;
      uVar37 = (ulong64)local_584;
    }
  }
LAB_1433ac479:
  uVar41 = 0;
  bVar19 = true;
  iVar24 = local_528->ArrayNum;
  if (iVar24 < 1) {
LAB_1433ad169:
    if (3 < iVar24) goto LAB_1433ad3bb;
  }
  else {
    uVar58 = SUB84(__real_3ff0000000000000,0);
    uVar59 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_460 = (FScriptContainerElement *)0x0;
    local_448 = 0.0;
    local_418 = 0.0;
    do {
      dVar10 = local_418;
      dVar53 = local_448;
      pFVar40 = local_460;
      pTVar15 = local_4f8;
      pTVar44 = local_528;
      if (!bVar19) goto LAB_1433ad172;
      uVar42 = ~uVar41 >> 0x1f;
      if (local_4f8 == (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
        uVar39 = 0;
        if ((int)uVar41 < (int)local_548) {
          uVar39 = uVar42;
        }
        if ((uVar39 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar39 = *(uint *)(local_550.Data + (longlong)dVar53);
        uVar22 = 0;
        if ((int)uVar39 < local_4b8.ArrayNum) {
          uVar22 = ~uVar39 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar63 = *(double *)(local_4b8.AllocatorInstance.Data + (longlong)(int)uVar39 * 0x18);
        dVar53 = *(double *)(local_4b8.AllocatorInstance.Data + (longlong)(int)uVar39 * 0x18 + 8);
        local_568 = *(FIndex2i_u_0 *)
                     (local_4b8.AllocatorInstance.Data + (longlong)(int)uVar39 * 0x18 + 0x10);
        local_1c8 = (FIndex2i_u_0 *)local_568;
      }
      else {
        uVar39 = 0;
        if ((int)uVar41 < local_4f8->ArrayNum) {
          uVar39 = uVar42;
        }
        if ((uVar39 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar27 = (pTVar15->AllocatorInstance).Data;
        local_568 = (FIndex2i_u_0)(double)*(float *)(pFVar27 + (longlong)dVar10 + 8);
        dVar63 = (double)*(float *)(pFVar27 + (longlong)dVar10);
        dVar53 = (double)*(float *)(pFVar27 + (longlong)dVar10 + 4);
      }
      if (((uVar42 & (int)uVar41 < pTVar44->ArrayNum) == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar40 = (pTVar44->AllocatorInstance).Data + (longlong)pFVar40;
      uVar39 = 0;
      lVar46 = 0;
      iVar24 = *(int *)(pFVar40 + 0x28);
      uVar23 = iVar24 - 2;
      uVar22 = iVar24 - 1;
      uVar42 = 0;
      if ((int)uVar23 < iVar24) {
        uVar42 = ~uVar23 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar45 = local_468;
      pFVar27 = pFVar40;
      if (*(FScriptContainerElement **)(pFVar40 + 0x20) != (FScriptContainerElement *)0x0) {
        pFVar27 = *(FScriptContainerElement **)(pFVar40 + 0x20);
      }
      local_3e8[0] = *(undefined4 *)(pFVar27 + (longlong)(int)uVar23 * 4);
      (**(code **)local_468)(&local_340,*(undefined8 *)&local_468->field_0x8,local_3e8);
      dVar10 = (double)local_340;
      uVar42 = 0;
      if ((int)uVar22 < *(int *)(pFVar40 + 0x28)) {
        uVar42 = ~uVar22 >> 0x1f;
      }
      dVar12 = (double)local_33c;
      dVar13 = (double)local_338;
      if ((uVar42 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar27 = pFVar40;
      if (*(FScriptContainerElement **)(pFVar40 + 0x20) != (FScriptContainerElement *)0x0) {
        pFVar27 = *(FScriptContainerElement **)(pFVar40 + 0x20);
      }
      local_3f0 = *(undefined4 *)(pFVar27 + (longlong)(int)uVar22 * 4);
      (**(code **)pTVar45)(&local_334,*(undefined8 *)&pTVar45->field_0x8);
      local_538 = (double)local_330;
      local_510 = (undefined1 *)(double)local_32c;
      dVar12 = local_538 - dVar12;
      dVar13 = (double)local_510 - dVar13;
      dVar10 = (double)local_334 - dVar10;
      dVar50 = dVar12 * dVar12 + dVar10 * dVar10 + dVar13 * dVar13;
      if (__real_3e45798ee0000000 < dVar50) {
        local_1b8 = (double)CONCAT44(uVar59,uVar58) / SQRT(dVar50);
        dVar10 = dVar10 * local_1b8;
        dVar12 = dVar12 * local_1b8;
        dVar13 = dVar13 * local_1b8;
      }
      dVar51 = (double)local_334;
      bVar20 = __real_3e45798ee0000000 < dVar50;
      if (0 < iVar24) {
        do {
          uVar42 = 0;
          if ((int)uVar39 < *(int *)(pFVar40 + 0x28)) {
            uVar42 = ~uVar39 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar27 = pFVar40;
          if (*(FScriptContainerElement **)(pFVar40 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar27 = *(FScriptContainerElement **)(pFVar40 + 0x20);
          }
          local_3f8 = *(undefined4 *)(pFVar27 + lVar46 * 4);
          (**(code **)local_468)(&local_328,*(undefined8 *)&local_468->field_0x8);
          dVar52 = (double)local_324;
          dVar62 = (double)local_328 - dVar51;
          dVar55 = dVar52 - local_538;
          dVar54 = (double)local_320;
          dVar50 = dVar54 - (double)local_510;
          dVar51 = dVar55 * dVar55 + dVar62 * dVar62 + dVar50 * dVar50;
          bVar21 = __real_3e45798ee0000000 < dVar51;
          if (bVar21) {
            local_1c0 = __real_3ff0000000000000 / SQRT(dVar51);
            dVar62 = dVar62 * local_1c0;
            dVar55 = dVar55 * local_1c0;
            dVar50 = dVar50 * local_1c0;
          }
          uVar58 = SUB84(__real_3ff0000000000000,0);
          uVar59 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          if (((bVar20) && (bVar21)) &&
             (((double)local_568 * dVar12 - dVar53 * dVar13) * dVar62 +
              (dVar63 * dVar13 - (double)local_568 * dVar10) * dVar55 +
              (dVar53 * dVar10 - dVar63 * dVar12) * dVar50 < __real_bf1a36e2eb1c432d)) {
            bVar19 = false;
            break;
          }
          uVar39 = uVar39 + 1;
          lVar46 = lVar46 + 1;
          dVar51 = (double)local_328;
          dVar10 = dVar62;
          dVar12 = dVar55;
          dVar13 = dVar50;
          local_538 = dVar52;
          local_510 = (undefined1 *)dVar54;
          bVar20 = bVar21;
        } while (lVar46 < iVar24);
      }
      uVar41 = uVar41 + 1;
      local_418 = (double)((longlong)local_418 + 0xc);
      local_448 = (double)((longlong)local_448 + 4);
      local_460 = local_460 + 0x30;
      iVar24 = local_528->ArrayNum;
    } while ((int)uVar41 < iVar24);
    if (bVar19) goto LAB_1433ad169;
  }
LAB_1433ad172:
  pTVar44 = local_528;
  piVar1 = &local_528->ArrayMax;
  pTVar4 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
           (local_528->AllocatorInstance).Data;
  if (local_528->ArrayMax < 0) {
    DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar4,iVar24);
    pTVar44->ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&pTVar44->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar4,iVar24);
    pTVar44->ArrayNum = 0;
  }
  if (local_4f8 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_4f8->ArrayNum = 0;
    if (local_4f8->ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&local_4f8->AllocatorInstance,0,&local_4f8->ArrayMax);
    }
  }
  pTVar45 = local_468;
  local_248.Line.Origin.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_248.Line.Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  local_2d0 = &local_470;
  local_2d8 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l2::<lambda_5>,bool,int>
              ::Call;
  local_2c8._0_8_ = *(undefined8 *)local_468;
  local_2c8._8_8_ = *(undefined8 *)&local_468->field_0x8;
  local_248.Line.Origin.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_248.SimplificationSettings.DegenerateEdgeTolerance = 0.0;
  local_248.SimplificationSettings.MaxHullVertices = -1;
  local_248.SimplificationSettings.SkipAtHullDistanceAbsolute = -3.4028235e+38;
  local_248.SimplificationSettings.SkipAtHullDistanceAsFraction = -3.4028235e+38;
  local_248.Progress = (FProgressCancel *)0x0;
  local_248.Line.Direction.field0_0x0._0_8_ = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_
  ;
  local_248.NumHullPoints = 0;
  local_248.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.Hull.ArrayNum = 0;
  local_248.Hull.ArrayMax = 0;
  local_248.HullNeighbors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.HullNeighbors.ArrayNum = 0;
  local_248.HullNeighbors.ArrayMax = 0;
  local_248.bSaveTriangleNeighbors = true;
  bVar19 = Solve(&local_248,local_584,&local_2c8,(TFunctionRef<bool___cdecl(int)> *)&local_2d8);
  uVar5 = *(undefined8 *)pTVar45;
  uVar6 = *(undefined8 *)&pTVar45->field_0x8;
  if (bVar19) {
    pTVar45 = &local_2a8;
    local_290 = &local_2b8;
    local_298 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l168::<lambda_9>,void,TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<float>_>
                ::Call;
    pTVar32 = (TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<float>)>
               *)&local_298;
    pTVar28 = &local_248;
    local_2b8 = pTVar44;
    local_2b0 = &local_4f8;
    local_2a8._0_8_ = uVar5;
    local_2a8._8_8_ = uVar6;
  }
  else {
    pTVar45 = &local_278;
    local_260 = &local_288;
    pTVar32 = (TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<float>)>
               *)&local_268;
    local_268 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l170::<lambda_10>,void,TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<float>_>
                ::Call;
    pTVar28 = local_530;
    local_288 = pTVar44;
    local_280 = &local_4f8;
    local_278._0_8_ = uVar5;
    local_278._8_8_ = uVar6;
  }
  GetFaces(pTVar28,pTVar32,pTVar45);
  if (local_248.HullNeighbors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.HullNeighbors.AllocatorInstance.Data);
  }
  if (local_248.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Hull.AllocatorInstance.Data);
  }
LAB_1433ad3bb:
  if (local_550.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_550.Data);
  }
  if (local_508.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.AllocatorInstance.Data);
  }
  if (local_578.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.AllocatorInstance.Data);
  }
  if ((FIndex2i_u_0 *)local_520.Data != (FIndex2i_u_0 *)0x0) {
    FMemory::Free(local_520.Data);
  }
  local_188.HashSize = 0;
  if (local_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_188.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_188.Elements);
  if (local_4a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.AllocatorInstance.Data);
  }
  if (local_458.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.AllocatorInstance.Data);
  }
  if (local_4b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.AllocatorInstance.Data);
  }
  if (local_4f0.Sizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Sizes.AllocatorInstance.Data);
  }
  if (local_4f0.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Parents.AllocatorInstance.Data);
  }
  return;
}

// GetSimplifiedFaces @ 1433ad510

void __thiscall
UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces
          (TConvexHull3<float> *this,
          TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<float>)>
          *param_1,TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_2,float param_3,
          float param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ForAnyElementType _Src;
  undefined1 local_res8 [8];
  TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<float>)>
  *local_res10;
  longlong local_a8;
  undefined8 local_98;
  undefined4 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_78;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_68;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> local_58 [2];
  
  local_res10 = param_1;
  if ((this->bSaveTriangleNeighbors == false) ||
     ((this->HullNeighbors).ArrayNum != (this->Hull).ArrayNum)) {
    local_res8[0] = 0;
    bVar2 = `UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l3::<lambda_1>::operator()
                      (local_res8);
    if (!bVar2) {
      return;
    }
  }
  local_58[0]._0_8_ = *(undefined8 *)param_2;
  uVar6 = 0;
  local_58[0]._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  GetSimplifiedFaces(this,&local_78,local_58,param_3,param_4,&local_68);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  if (0 < local_78.ArrayNum) {
    local_a8 = 0;
    uVar8 = uVar6;
    do {
      uVar7 = (uint)uVar6;
      uVar3 = 0;
      if ((int)uVar7 < local_78.ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Src.Data = local_78.AllocatorInstance.Data + local_a8;
      uVar3 = *(uint *)(_Src.Data + 0x28);
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      uVar6 = local_80 >> 0x20;
      local_80 = local_80 & 0xffffffff00000000;
      if ((int)uVar6 < (int)uVar3) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar3,&local_88,0,(int *)((longlong)&local_80 + 4));
      }
      if (((FScriptContainerElement *)&local_88 == _Src.Data) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar5 = *(int *)(_Src.Data + 0x28);
      if (iVar5 != 0) {
        iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar5,&local_88,(int *)&local_80,(int *)((longlong)&local_80 + 4));
                    /* WARNING: Load size is inaccurate */
        if (_Src.Data[0x20] != (FScriptContainerElement *)0x0) {
          _Src.Data = _Src.Data[0x20];
        }
        memcpy(local_88.Data + (longlong)iVar4 * 4,_Src.Data,(longlong)iVar5 << 2);
      }
      uVar3 = 0;
      if ((int)uVar7 < local_68.ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_98 = *(undefined8 *)(local_68.AllocatorInstance.Data + uVar8);
      local_90 = *(undefined4 *)(local_68.AllocatorInstance.Data + uVar8 + 8);
      (**(code **)local_res10)(*(undefined8 *)&local_res10->field_0x8,&local_88,&local_98);
      uVar6 = (ulonglong)(uVar7 + 1);
      local_a8 = local_a8 + 0x30;
      uVar8 = uVar8 + 0xc;
    } while ((int)(uVar7 + 1) < local_78.ArrayNum);
  }
  iVar5 = local_78.ArrayNum;
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
    iVar5 = local_78.ArrayNum;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
    iVar5 = local_78.ArrayNum;
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_78.AllocatorInstance.Data,iVar5);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_78.AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// GetSimplifiedFaces @ 1433ad810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001433aec96) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces
          (TConvexHull3<double> *this,
          TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
          *param_1,TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2,double param_3,
          double param_4,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  ForElementType<int> *pFVar2;
  uchar *puVar3;
  void *_Dst;
  double dVar4;
  undefined8 uVar5;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar15;
  ForAnyElementType FVar16;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar17;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar18;
  undefined8 uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  ForElementType<int> FVar26;
  FScriptContainerElement *pFVar27;
  TConvexHull3<double> *pTVar28;
  ulonglong uVar29;
  ForElementType<int> FVar30;
  ulonglong uVar31;
  TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>)>
  *pTVar32;
  FIndex2i_u_0 FVar33;
  ForElementType<int> FVar34;
  ForAnyElementType FVar35;
  ForAnyElementType FVar36;
  ulong64 uVar37;
  ForElementType<int> FVar38;
  uint uVar39;
  uint uVar40;
  ForElementType<int> FVar41;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  *pTVar42;
  FScriptContainerElement *pFVar43;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *pTVar44;
  longlong lVar45;
  uint uVar46;
  longlong lVar47;
  uint uVar48;
  longlong lVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined1 auStackY_688 [32];
  uint local_634;
  int local_62c;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_628;
  FIdentityFunctor local_618;
  uint local_614;
  FIndex2i_u_0 local_610;
  uint local_608 [2];
  ForAnyElementType local_600;
  undefined8 local_5f8;
  undefined1 local_5f0;
  undefined1 local_5ef;
  undefined1 local_5ee;
  undefined1 local_5ed [5];
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  *local_5e8;
  TConvexHull3<double> *local_5e0;
  ForAnyElementType local_5d8;
  uint local_5d0;
  uint uStack_5cc;
  double local_5c8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_5c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_5b8;
  FSizedDisjointSet local_5a8;
  uint local_588 [2];
  double local_580;
  undefined8 local_578;
  uint local_570 [2];
  undefined1 *local_568;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_560;
  int local_550 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_548;
  undefined8 local_538;
  uint local_530;
  undefined8 local_528;
  undefined4 local_520 [2];
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_518;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *local_510;
  TArray<double,TSizedDefaultAllocator<32>_> local_508;
  undefined8 local_4f8;
  undefined4 local_4f0;
  int local_4e8 [4];
  int local_4d8 [2];
  undefined4 local_4d0 [2];
  undefined4 local_4c8 [2];
  undefined4 local_4c0 [2];
  undefined4 local_4b8 [2];
  undefined4 local_4b0;
  undefined4 local_4a8;
  TKeyInitializer<int_&> local_4a0;
  FScriptContainerElement *local_498;
  undefined8 local_490;
  int local_488;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  double local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  double local_458;
  FSizedDisjointSet *local_450;
  TArray<double,TSizedDefaultAllocator<32>_> *local_448;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_440;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *local_438;
  undefined8 local_430;
  FIndex3i_u_0 local_428;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  uint *local_3e8;
  TVector<double>_u_0 local_3e0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  double local_390;
  FSizedDisjointSet *local_388;
  uint *local_380;
  code *local_378;
  FSizedDisjointSet **local_370;
  code *local_368;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> **local_360;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_358;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  *local_348;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_340;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_338;
  code *local_328;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  **local_320;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_318;
  code *local_308;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  **local_300;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  *local_2f8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_290;
  TConvexHull3<double> local_288;
  TSet<TTuple<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  local_1d8;
  TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_188;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_688;
  local_5c0 = param_5;
  local_5e8 = param_1;
  local_5e0 = this;
  local_510 = param_2;
  if ((this->bSaveTriangleNeighbors == false) ||
     ((this->HullNeighbors).ArrayNum != (this->Hull).ArrayNum)) {
    local_5f0 = 0;
    bVar20 = `UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l3::<lambda_1>::operator()
                       (&local_5f0);
    if (!bVar20) {
      return;
    }
  }
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::Reset(param_1,0);
  if (local_5c0 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_5c0->ArrayNum = 0;
    if (local_5c0->ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&local_5c0->AllocatorInstance,0,&local_5c0->ArrayMax);
    }
  }
  if (__real_404e000000000000 <= param_3) {
    param_3 = __real_404e000000000000;
  }
  dVar55 = cos(param_3 * __real_3f91df46a2529d39);
  iVar24 = (this->Hull).ArrayNum;
  uVar58 = SUB84(__real_3ff0000000000000,0);
  uVar59 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  local_5a8.Parents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  dVar55 = __real_3ff0000000000000 - dVar55;
  local_5a8.Parents.ArrayNum = 0;
  local_5a8.Parents.ArrayMax = 0;
  local_5a8.Sizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5a8.Sizes.ArrayNum = 0;
  local_5a8.Sizes.ArrayMax = 0;
  local_5c8 = dVar55;
  FSizedDisjointSet::Init(&local_5a8,iVar24);
  local_560.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_560.ArrayNum = 0;
  local_560.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_560,iVar24,Default);
  local_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508.ArrayNum = 0;
  local_508.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_508,iVar24,Default);
  local_548.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_548.ArrayNum = 0;
  local_548.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_548,iVar24,Default);
  dVar4 = __real_3fd5555555555555;
  dVar12 = __real_3fe0000000000000;
  uVar60 = SUB84(__real_3fe0000000000000,0);
  uVar61 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  uVar40 = 0;
  local_1d8.Elements._0_8_ = 0;
  local_1d8.Elements._8_8_ = 0;
  local_1d8.Elements._32_8_ = 0;
  local_1d8.Elements._40_4_ = 0;
  local_1d8.Elements._44_4_ = 0x80;
  local_1d8.Elements._48_4_ = 0xffffffff;
  local_1d8.Elements._52_4_ = 0;
  local_1d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1d8.HashSize = 0;
  local_634 = 0;
  if (iVar24 < 1) {
    local_450 = &local_5a8;
    uVar37 = 0;
    local_448 = &local_508;
    local_430 = __real_3e45798ee2308c3a;
    local_440 = &local_560;
    local_5d8.Data = (FScriptContainerElement *)0x0;
    local_5d0 = 0;
    uStack_5cc = 0;
    local_634 = 0;
    local_438 = param_2;
  }
  else {
    lVar49 = 0;
    lVar47 = 0;
    lVar45 = 0;
    do {
      pTVar28 = local_5e0;
      uVar39 = ~uVar40 >> 0x1f;
      uVar23 = 0;
      if ((int)uVar40 < (local_5e0->Hull).ArrayNum) {
        uVar23 = uVar39;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar43 = (pTVar28->Hull).AllocatorInstance.Data;
      local_4e8[2] = *(int *)(pFVar43 + lVar45);
      iVar25 = *(int *)(pFVar43 + lVar45 + 8);
      if (*(int *)(pFVar43 + lVar45 + 8) < *(int *)(pFVar43 + lVar45 + 4)) {
        iVar25 = *(int *)(pFVar43 + lVar45 + 4);
      }
      if (iVar25 < local_4e8[2]) {
        iVar25 = local_4e8[2];
      }
      uVar23 = iVar25 + 1U;
      if ((int)(iVar25 + 1U) < (int)local_634) {
        uVar23 = local_634;
      }
      (**(code **)local_510)(&local_138,*(undefined8 *)&local_510->field_0x8,local_4e8 + 2);
      local_4d8[0] = *(int *)(pFVar43 + lVar45 + 4);
      (**(code **)local_510)(&local_120,*(undefined8 *)&local_510->field_0x8,local_4e8 + 4);
      pTVar44 = local_510;
      local_4d0[0] = *(undefined4 *)(pFVar43 + lVar45 + 8);
      (**(code **)local_510)(&local_108,*(undefined8 *)&local_510->field_0x8,local_4d0);
      local_3e0._s_0.X =
           (local_110 - local_128) * (local_100 - local_130) -
           (local_f8 - local_128) * (local_118 - local_130);
      local_3e0._s_0.Y =
           (local_120 - local_138) * (local_f8 - local_128) -
           (local_108 - local_138) * (local_110 - local_128);
      local_3e0._s_0.Z =
           (local_108 - local_138) * (local_118 - local_130) -
           (local_120 - local_138) * (local_100 - local_130);
      dVar11 = Normalize<double>((TVector<double> *)&local_3e0._s_0,0.0);
      uVar19 = local_3e0._s_0.Z;
      uVar7 = local_3e0._s_0.Y;
      uVar5 = local_3e0._s_0.X;
      uVar48 = 0;
      if ((int)uVar40 < local_560.ArrayNum) {
        uVar48 = uVar39;
      }
      if ((uVar48 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined8 *)(local_560.AllocatorInstance.Data + lVar47) = uVar5;
      *(undefined8 *)(local_560.AllocatorInstance.Data + lVar47 + 8) = uVar7;
      *(undefined8 *)(local_560.AllocatorInstance.Data + lVar47 + 0x10) = uVar19;
      uVar48 = 0;
      if ((int)uVar40 < local_508.ArrayNum) {
        uVar48 = uVar39;
      }
      if ((uVar48 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(double *)(local_508.AllocatorInstance.Data + lVar49 * 8) = dVar11 * dVar12;
      dVar11 = local_120 + local_138 + local_108;
      dVar53 = local_118 + local_130 + local_100;
      dVar13 = local_110 + local_128 + local_f8;
      uVar39 = 0;
      if ((int)uVar40 < local_548.ArrayNum) {
        uVar39 = ~uVar40 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar40 = uVar40 + 1;
      lVar49 = lVar49 + 1;
      lVar45 = lVar45 + 0xc;
      *(double *)(local_548.AllocatorInstance.Data + lVar47) = dVar11 * dVar4;
      *(double *)(local_548.AllocatorInstance.Data + lVar47 + 8) = dVar53 * dVar4;
      *(double *)(local_548.AllocatorInstance.Data + lVar47 + 0x10) = dVar13 * dVar4;
      lVar47 = lVar47 + 0x18;
      local_634 = uVar23;
    } while (lVar49 < iVar24);
    local_450 = &local_5a8;
    uVar40 = 0;
    local_448 = &local_508;
    local_430 = __real_3e45798ee2308c3a;
    lVar45 = 0;
    local_440 = &local_560;
    local_438 = pTVar44;
    lVar47 = 0;
    local_5d8.Data = (FScriptContainerElement *)0x0;
    local_5d0 = 0;
    uStack_5cc = 0;
    do {
      pTVar28 = local_5e0;
      uVar39 = 0;
      if ((int)uVar40 < (local_5e0->HullNeighbors).ArrayNum) {
        uVar39 = ~uVar40 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar43 = (pTVar28->HullNeighbors).AllocatorInstance.Data;
      uVar39 = 0;
      if ((int)uVar40 < (pTVar28->Hull).ArrayNum) {
        uVar39 = ~uVar40 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)uVar40 < *(int *)(pFVar43 + lVar47 + 8)) {
        local_610._s_0.B = *(int *)(pFVar43 + lVar47 + 8);
        local_610._s_0.A = uVar40;
        FVar33 = local_610;
        local_568 = (undefined1 *)0x2;
        dVar12 = `UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l2::<lambda_2>::
                 operator()(&local_450,(FIndex2i)local_610._s_0,(FIndex2i)0x2,false);
        if (dVar12 < dVar55) {
          if (local_5d0 == uStack_5cc) {
            local_5d0 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_5d8,(int *)&uStack_5cc);
          }
          lVar49 = (longlong)(int)local_5d0;
          *(double *)(local_5d8.Data + lVar49 * 0x18 + 0x10) = dVar12;
          ((FIndex2i_u_0 *)(local_5d8.Data + lVar49 * 0x18))->_s_0 = (FIndex2i_u_0_s_0)FVar33;
          *(undefined8 *)(local_5d8.Data + lVar49 * 0x18 + 8) = 2;
          local_5d0 = local_5d0 + 1;
        }
      }
      if ((int)uVar40 < *(int *)(pFVar43 + lVar47)) {
        local_610._s_0.B = *(int *)(pFVar43 + lVar47);
        local_610._s_0.A = uVar40;
        FVar33 = local_610;
        local_568 = (undefined1 *)0x100000000;
        dVar12 = `UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l2::<lambda_2>::
                 operator()(&local_450,(FIndex2i)local_610._s_0,(FIndex2i)0x100000000,false);
        if (dVar12 < dVar55) {
          if (local_5d0 == uStack_5cc) {
            local_5d0 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_5d8,(int *)&uStack_5cc);
          }
          lVar49 = (longlong)(int)local_5d0;
          ((FIndex2i_u_0 *)(local_5d8.Data + lVar49 * 0x18))->_s_0 = (FIndex2i_u_0_s_0)FVar33;
          *(undefined8 *)(local_5d8.Data + lVar49 * 0x18 + 8) = 0x100000000;
          *(double *)(local_5d8.Data + lVar49 * 0x18 + 0x10) = dVar12;
          local_5d0 = local_5d0 + 1;
        }
      }
      if ((int)uVar40 < *(int *)(pFVar43 + lVar47 + 4)) {
        local_610._s_0.B = *(int *)(pFVar43 + lVar47 + 4);
        local_610._s_0.A = uVar40;
        FVar33 = local_610;
        local_568 = &DAT_200000001;
        dVar12 = `UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l2::<lambda_2>::
                 operator()(&local_450,(FIndex2i)local_610._s_0,(FIndex2i)0x200000001,false);
        if (dVar12 < dVar55) {
          if (local_5d0 == uStack_5cc) {
            local_5d0 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_5d8,(int *)&uStack_5cc);
          }
          lVar49 = (longlong)(int)local_5d0;
          ((FIndex2i_u_0 *)(local_5d8.Data + lVar49 * 0x18))->_s_0 = (FIndex2i_u_0_s_0)FVar33;
          *(undefined1 **)(local_5d8.Data + lVar49 * 0x18 + 8) = &DAT_200000001;
          *(double *)(local_5d8.Data + lVar49 * 0x18 + 0x10) = dVar12;
          local_5d0 = local_5d0 + 1;
        }
      }
      uVar40 = uVar40 + 1;
      lVar45 = lVar45 + 1;
      lVar47 = lVar47 + 0xc;
    } while (lVar45 < iVar24);
    uVar58 = SUB84(__real_3ff0000000000000,0);
    uVar59 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar37 = (ulong64)uVar23;
    param_2 = local_510;
    this = local_5e0;
  }
  local_5ef = 0;
  AlgoImpl::
  IntroSortInternal<_UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces_::__l2::FEdgeWeight,int,FIdentityFunctor,TDereferenceWrapper<_UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces_::__l2::FEdgeWeight,_UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces_::__l2::<lambda_3>_>_>
            ((FEdgeWeight *)local_5d8.Data,local_5d0,local_618,(<lambda_3> *)&local_5ef);
  auVar14 = ___xmm_7fffffffffffffff7fffffffffffffff;
  uVar29 = (ulonglong)(int)local_5d0;
  uVar50 = (undefined4)__real_3f1a36e2eb1c432d;
  uVar51 = (undefined4)((ulonglong)__real_3f1a36e2eb1c432d >> 0x20);
  local_568 = (undefined1 *)CONCAT44(local_568._4_4_,local_5d0);
  FVar33 = (FIndex2i_u_0)(local_5d8.Data + uVar29 * 0x18);
  uVar31 = uVar29;
  FVar36.Data = local_5d8.Data;
  local_610 = FVar33;
  while( true ) {
    if ((int)uVar29 != (int)uVar31) {
      local_5ee = 0;
      `TCheckedPointerIterator<`UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l2::FEdgeWeight,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_5ee);
    }
    if ((FIndex2i_u_0)FVar36.Data == FVar33) break;
    dVar12 = `UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l2::<lambda_2>::operator()
                       (&local_450,(FIndex2i)*(FIndex2i_u_0_s_0 *)FVar36.Data,
                        (FIndex2i)((FIndex2i_u_0 *)((longlong)FVar36.Data + 8))->_s_0,true);
    if (dVar12 < dVar55) {
      uVar40 = FSizedDisjointSet::Find(&local_5a8,((FIndex2i_u_0_s_0 *)FVar36.Data)->A);
      local_608[0] = uVar40;
      local_608[1] = FSizedDisjointSet::Find(&local_5a8,((FIndex2i_u_0_s_0 *)FVar36.Data)->B);
      uVar23 = FSizedDisjointSet::FindWithoutCollapse(&local_5a8,uVar40);
      uVar40 = 0;
      if ((int)uVar23 < local_5a8.Sizes.ArrayNum) {
        uVar40 = ~uVar23 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_4e8[0] = *(int *)(local_5a8.Sizes.AllocatorInstance.Data + (longlong)(int)uVar23 * 4);
      uVar23 = FSizedDisjointSet::FindWithoutCollapse(&local_5a8,local_608[1]);
      uVar40 = 0;
      if ((int)uVar23 < local_5a8.Sizes.ArrayNum) {
        uVar40 = ~uVar23 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar45 = (longlong)(int)local_608[0];
      local_4e8[1] = *(undefined4 *)
                      (local_5a8.Sizes.AllocatorInstance.Data + (longlong)(int)uVar23 * 4);
      uVar40 = 0;
      if ((int)local_608[0] < local_508.ArrayNum) {
        uVar40 = ~local_608[0] >> 0x1f;
      }
      if (uVar40 == 0) {
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar20) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar43 = *(FScriptContainerElement **)(local_508.AllocatorInstance.Data + lVar45 * 8);
      lVar45 = (longlong)(int)local_608[1];
      local_498 = pFVar43;
      uVar40 = 0;
      if ((int)local_608[1] < local_508.ArrayNum) {
        uVar40 = ~local_608[1] >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      dVar55 = *(double *)(local_508.AllocatorInstance.Data + lVar45 * 8);
      lVar45 = (longlong)(int)local_608[0];
      dVar12 = dVar55 + (double)pFVar43;
      local_580 = dVar55;
      if (dVar12 < (double)CONCAT44(uVar51,uVar50) || dVar12 == (double)CONCAT44(uVar51,uVar50)) {
        uVar40 = 0;
        if ((int)local_608[0] < local_548.ArrayNum) {
          uVar40 = ~local_608[0] >> 0x1f;
        }
        if (uVar40 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        FVar16.Data = local_548.AllocatorInstance.Data;
        lVar47 = (longlong)(int)local_608[1];
        uVar40 = 0;
        if ((int)local_608[1] < local_548.ArrayNum) {
          uVar40 = ~local_608[1] >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        dVar11 = (*(double *)(local_548.AllocatorInstance.Data + lVar47 * 0x18 + 8) +
                 *(double *)(FVar16.Data + lVar45 * 0x18 + 8)) * (double)CONCAT44(uVar61,uVar60);
        dVar12 = (*(double *)(local_548.AllocatorInstance.Data + lVar47 * 0x18 + 0x10) +
                 *(double *)(FVar16.Data + lVar45 * 0x18 + 0x10)) * (double)CONCAT44(uVar61,uVar60);
        dVar4 = (*(double *)(FVar16.Data + lVar45 * 0x18) +
                *(double *)(local_548.AllocatorInstance.Data + lVar47 * 0x18)) *
                (double)CONCAT44(uVar61,uVar60);
      }
      else {
        uVar40 = 0;
        if ((int)local_608[0] < local_548.ArrayNum) {
          uVar40 = ~local_608[0] >> 0x1f;
        }
        if (uVar40 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        lVar47 = (longlong)(int)local_608[1];
        dVar12 = (double)CONCAT44(uVar59,uVar58) / dVar12;
        dVar13 = dVar12 * (double)pFVar43;
        dVar4 = *(double *)(local_548.AllocatorInstance.Data + lVar45 * 0x18);
        dVar11 = *(double *)(local_548.AllocatorInstance.Data + lVar45 * 0x18 + 8);
        dVar53 = *(double *)(local_548.AllocatorInstance.Data + lVar45 * 0x18 + 0x10);
        uVar40 = 0;
        if ((int)local_608[1] < local_548.ArrayNum) {
          uVar40 = ~local_608[1] >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        dVar12 = dVar12 * dVar55;
        dVar4 = dVar12 * *(double *)(local_548.AllocatorInstance.Data + lVar47 * 0x18) +
                dVar13 * dVar4;
        dVar11 = dVar12 * *(double *)(local_548.AllocatorInstance.Data + lVar47 * 0x18 + 8) +
                 dVar13 * dVar11;
        dVar12 = dVar12 * *(double *)(local_548.AllocatorInstance.Data + lVar47 * 0x18 + 0x10) +
                 dVar13 * dVar53;
      }
      lVar45 = (longlong)(int)local_608[0];
      local_290 = dVar12;
      uVar40 = 0;
      if ((int)local_608[0] < local_560.ArrayNum) {
        uVar40 = ~local_608[0] >> 0x1f;
      }
      if (uVar40 == 0) {
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar20) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar47 = (longlong)(int)local_608[1];
      dVar53 = *(double *)(local_560.AllocatorInstance.Data + lVar45 * 0x18);
      dVar13 = *(double *)(local_560.AllocatorInstance.Data + lVar45 * 0x18 + 8);
      dVar52 = *(double *)(local_560.AllocatorInstance.Data + lVar45 * 0x18 + 0x10);
      uVar40 = 0;
      if ((int)local_608[1] < local_560.ArrayNum) {
        uVar40 = ~local_608[1] >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      dVar53 = dVar55 * *(double *)(local_560.AllocatorInstance.Data + lVar47 * 0x18) +
               (double)pFVar43 * dVar53;
      dVar13 = dVar55 * *(double *)(local_560.AllocatorInstance.Data + lVar47 * 0x18 + 8) +
               (double)pFVar43 * dVar13;
      dVar55 = local_580 * *(double *)(local_560.AllocatorInstance.Data + lVar47 * 0x18 + 0x10) +
               (double)pFVar43 * dVar52;
      local_458 = dVar55;
      dVar52 = dVar13 * dVar13 + dVar53 * dVar53 + dVar55 * dVar55;
      if (__real_3e45798ee0000000 < dVar52) {
        local_2b8 = __real_3ff0000000000000 / SQRT(dVar52);
        dVar53 = dVar53 * local_2b8;
        dVar13 = dVar13 * local_2b8;
        dVar55 = local_2b8 * dVar55;
        local_458 = dVar55;
      }
      lVar45 = 0;
      bVar20 = true;
      local_458 = dVar55;
      do {
        pTVar28 = local_5e0;
        this = local_5e0;
        if (!bVar20) goto LAB_1433aee76;
        uVar40 = *(uint *)((longlong)local_608 + lVar45);
        uVar23 = auVar14._0_4_;
        uVar39 = auVar14._4_4_;
        if (*(int *)((longlong)local_4e8 + lVar45) == 1) {
          uVar48 = 0;
          if ((int)uVar40 < (local_5e0->Hull).ArrayNum) {
            uVar48 = ~uVar40 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar43 = (pTVar28->Hull).AllocatorInstance.Data;
          lVar47 = 0;
          local_3b0 = *(undefined8 *)(pFVar43 + (longlong)(int)uVar40 * 0xc);
          local_3a8 = *(undefined4 *)(pFVar43 + (longlong)(int)uVar40 * 0xc + 8);
          do {
            local_4c8[0] = *(undefined4 *)((longlong)&local_3b0 + lVar47 * 4);
            (**(code **)param_2)(&local_2e8,*(undefined8 *)&param_2->field_0x8,local_4c8);
            dVar52 = (local_2e8 - dVar4) * dVar53 + (local_2e0 - dVar11) * dVar13 +
                     (local_2d8 - dVar12) * dVar55;
            if (param_4 < (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar39,
                                           SUB84(dVar52,0) & uVar23)) goto LAB_1433aed91;
            lVar47 = lVar47 + 1;
          } while (lVar47 < 3);
        }
        else {
          FVar26 = (ForElementType<int>)
                   TMapBase<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                   ::FindChecked((TMapBase<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                                  *)&local_1d8,uVar40);
          iVar24 = *(int *)((longlong)FVar26 + 0x48);
          local_634 = (uint)uVar37;
          piVar1 = (int *)((longlong)FVar26 + 0x48);
          if (*(ForElementType<int> *)((longlong)FVar26 + 0x40) != (ForElementType<int>)0x0) {
            FVar26 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
          }
          FVar41 = (ForElementType<int>)((longlong)FVar26 + (longlong)iVar24 * 4);
          while( true ) {
            if (*piVar1 != iVar24) {
              local_5ed[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_5ed);
            }
            if (FVar26 == FVar41) goto LAB_1433ae76f;
            local_4c0[0] = *(undefined4 *)FVar26;
            (**(code **)param_2)(&local_2d0,*(undefined8 *)&param_2->field_0x8,local_4c0);
            dVar52 = (local_2d0 - dVar4) * dVar53 + (local_2c8 - dVar11) * dVar13 +
                     (local_2c0 - dVar12) * dVar55;
            if (param_4 < (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar39,
                                           SUB84(dVar52,0) & uVar23)) break;
            FVar26 = (ForElementType<int>)((longlong)FVar26 + 4);
          }
LAB_1433aed91:
          bVar20 = false;
        }
LAB_1433ae76f:
        uVar40 = local_608[0];
        uVar37 = (ulong64)local_634;
        lVar45 = lVar45 + 4;
      } while (lVar45 < 8);
      this = local_5e0;
      if (bVar20) {
        FSizedDisjointSet::Union(&local_5a8,local_608[0],local_608[1]);
        uVar39 = FSizedDisjointSet::Find(&local_5a8,uVar40);
        local_588[0] = uVar39;
        uVar31 = (ulonglong)(uVar40 == uVar39);
        uVar40 = local_608[uVar31];
        uVar23 = 0;
        if ((int)uVar39 < local_560.ArrayNum) {
          uVar23 = ~uVar39 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        auVar9._8_4_ = SUB84(dVar13,0);
        auVar9._0_8_ = dVar53;
        auVar9._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(local_560.AllocatorInstance.Data + (longlong)(int)uVar39 * 0x18) =
             auVar9;
        *(double *)(local_560.AllocatorInstance.Data + (longlong)(int)uVar39 * 0x18 + 0x10) =
             local_458;
        lVar45 = (longlong)(int)local_588[0];
        uVar23 = 0;
        if ((int)local_588[0] < local_548.ArrayNum) {
          uVar23 = ~local_588[0] >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        dVar55 = local_580 + (double)local_498;
        auVar10._8_4_ = SUB84(dVar11,0);
        auVar10._0_8_ = dVar4;
        auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        *(undefined1 (*) [16])(local_548.AllocatorInstance.Data + lVar45 * 0x18) = auVar10;
        *(double *)(local_548.AllocatorInstance.Data + lVar45 * 0x18 + 0x10) = local_290;
        lVar45 = (longlong)(int)local_588[0];
        uVar23 = 0;
        if ((int)local_588[0] < local_508.ArrayNum) {
          uVar23 = ~local_588[0] >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this = local_5e0;
        *(double *)(local_508.AllocatorInstance.Data + lVar45 * 8) = dVar55;
        if (local_4e8[1 - uVar31] < 2) {
          uVar23 = local_608[1 - uVar31];
          uVar39 = 0;
          if ((int)uVar23 < (local_5e0->Hull).ArrayNum) {
            uVar39 = ~uVar23 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar43 = (this->Hull).AllocatorInstance.Data;
          local_528 = *(undefined8 *)(pFVar43 + (longlong)(int)uVar23 * 0xc);
          local_520[0] = *(undefined4 *)(pFVar43 + (longlong)(int)uVar23 * 0xc + 8);
          local_3e8 = local_588;
          TSet<TTuple<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<int_&>_>(&local_1d8,&local_4a0,(bool *)&local_3e8);
          FVar34 = (ForElementType<int>)
                   (local_1d8.Elements._0_8_ + 8 + (longlong)(int)local_4a0.Key * 0x60);
          FVar26 = *(ForElementType<int> *)((longlong)FVar34 + 0x40);
          FVar41 = FVar34;
          if (FVar26 != (ForElementType<int>)0x0) {
            FVar41 = FVar26;
          }
          if ((ulonglong)FVar41 <= &local_528) {
            FVar41 = FVar34;
            if (FVar26 != (ForElementType<int>)0x0) {
              FVar41 = FVar26;
            }
            if ((&local_528 <
                 (undefined8 *)((longlong)FVar41 + (longlong)*(int *)((longlong)FVar34 + 0x4c) * 4))
               && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar20)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          iVar24 = *(int *)((longlong)FVar34 + 0x48);
          if (iVar24 == *(int *)((longlong)FVar34 + 0x4c)) {
            iVar24 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,(ForElementType<int> *)FVar34,(int *)((longlong)FVar34 + 0x4c)
                               );
          }
          *(int *)((longlong)FVar34 + 0x48) = iVar24 + 1;
          FVar26 = FVar34;
          if (*(ForElementType<int> *)((longlong)FVar34 + 0x40) != (ForElementType<int>)0x0) {
            FVar26 = *(ForElementType<int> *)((longlong)FVar34 + 0x40);
          }
          *(undefined4 *)((longlong)FVar26 + (longlong)iVar24 * 4) = (undefined4)local_528;
          FVar26 = *(ForElementType<int> *)((longlong)FVar34 + 0x40);
          FVar41 = FVar34;
          if (FVar26 != (ForElementType<int>)0x0) {
            FVar41 = FVar26;
          }
          if ((ulonglong)FVar41 <= (longlong)&local_528 + 4U) {
            FVar41 = FVar34;
            if (FVar26 != (ForElementType<int>)0x0) {
              FVar41 = FVar26;
            }
            if (((longlong)&local_528 + 4U <
                 (ulonglong)((longlong)FVar41 + (longlong)*(int *)((longlong)FVar34 + 0x4c) * 4)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          iVar24 = *(int *)((longlong)FVar34 + 0x48);
          if (iVar24 == *(int *)((longlong)FVar34 + 0x4c)) {
            iVar24 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,(ForElementType<int> *)FVar34,(int *)((longlong)FVar34 + 0x4c)
                               );
          }
          *(int *)((longlong)FVar34 + 0x48) = iVar24 + 1;
          FVar26 = FVar34;
          if (*(ForElementType<int> *)((longlong)FVar34 + 0x40) != (ForElementType<int>)0x0) {
            FVar26 = *(ForElementType<int> *)((longlong)FVar34 + 0x40);
          }
          *(undefined4 *)((longlong)FVar26 + (longlong)iVar24 * 4) = local_528._4_4_;
          FVar26 = *(ForElementType<int> *)((longlong)FVar34 + 0x40);
          FVar41 = FVar34;
          if (FVar26 != (ForElementType<int>)0x0) {
            FVar41 = FVar26;
          }
          if ((ulonglong)FVar41 <= local_520) {
            FVar41 = FVar34;
            if (FVar26 != (ForElementType<int>)0x0) {
              FVar41 = FVar26;
            }
            if ((local_520 <
                 (undefined4 *)((longlong)FVar41 + (longlong)*(int *)((longlong)FVar34 + 0x4c) * 4))
               && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar20)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          iVar24 = *(int *)((longlong)FVar34 + 0x48);
          if (iVar24 == *(int *)((longlong)FVar34 + 0x4c)) {
            iVar24 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,(ForElementType<int> *)FVar34,(int *)((longlong)FVar34 + 0x4c)
                               );
          }
          *(int *)((longlong)FVar34 + 0x48) = iVar24 + 1;
          if (*(ForElementType<int> *)((longlong)FVar34 + 0x40) != (ForElementType<int>)0x0) {
            FVar34 = *(ForElementType<int> *)((longlong)FVar34 + 0x40);
          }
          *(undefined4 *)((longlong)FVar34 + (longlong)iVar24 * 4) = local_520[0];
        }
        if (local_4e8[uVar31] < 2) {
          FVar26 = (ForElementType<int>)
                   TMapBase<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                   ::FindChecked((TMapBase<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                                  *)&local_1d8,local_588[0]);
          uVar40 = local_608[uVar31];
          uVar23 = 0;
          if ((int)uVar40 < (this->Hull).ArrayNum) {
            uVar23 = ~uVar40 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar43 = (this->Hull).AllocatorInstance.Data;
          local_490 = *(undefined8 *)(pFVar43 + (longlong)(int)uVar40 * 0xc);
          iVar24 = *(int *)(pFVar43 + (longlong)(int)uVar40 * 0xc + 8);
          local_62c = (int)local_490;
          local_488 = iVar24;
          if (((((FIndex2i_u_0 *)((longlong)FVar36.Data + 8))->_s_0).A != (int)local_490) &&
             (*(int *)((longlong)FVar36.Data + 0xc) != (int)local_490)) {
            FVar41 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
            FVar34 = FVar26;
            if (FVar41 != (ForElementType<int>)0x0) {
              FVar34 = FVar41;
            }
            if ((ulonglong)FVar34 <= &local_62c) {
              FVar34 = FVar26;
              if (FVar41 != (ForElementType<int>)0x0) {
                FVar34 = FVar41;
              }
              if ((&local_62c <
                   (int *)((longlong)FVar34 + (longlong)*(int *)((longlong)FVar26 + 0x4c) * 4)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar20)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            iVar25 = *(int *)((longlong)FVar26 + 0x48);
            if (iVar25 == *(int *)((longlong)FVar26 + 0x4c)) {
              iVar25 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,(ForElementType<int> *)FVar26,
                                  (int *)((longlong)FVar26 + 0x4c));
            }
            *(int *)((longlong)FVar26 + 0x48) = iVar25 + 1;
            FVar41 = FVar26;
            if (*(ForElementType<int> *)((longlong)FVar26 + 0x40) != (ForElementType<int>)0x0) {
              FVar41 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
            }
            *(int *)((longlong)FVar41 + (longlong)iVar25 * 4) = local_62c;
          }
          local_62c = local_490._4_4_;
          if (((((FIndex2i_u_0 *)((longlong)FVar36.Data + 8))->_s_0).A != local_490._4_4_) &&
             (*(int *)((longlong)FVar36.Data + 0xc) != local_490._4_4_)) {
            FVar41 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
            FVar34 = FVar26;
            if (FVar41 != (ForElementType<int>)0x0) {
              FVar34 = FVar41;
            }
            if ((ulonglong)FVar34 <= &local_62c) {
              FVar34 = FVar26;
              if (FVar41 != (ForElementType<int>)0x0) {
                FVar34 = FVar41;
              }
              if ((&local_62c <
                   (int *)((longlong)FVar34 + (longlong)*(int *)((longlong)FVar26 + 0x4c) * 4)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar20)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            iVar25 = *(int *)((longlong)FVar26 + 0x48);
            if (iVar25 == *(int *)((longlong)FVar26 + 0x4c)) {
              iVar25 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,(ForElementType<int> *)FVar26,
                                  (int *)((longlong)FVar26 + 0x4c));
            }
            *(int *)((longlong)FVar26 + 0x48) = iVar25 + 1;
            FVar41 = FVar26;
            if (*(ForElementType<int> *)((longlong)FVar26 + 0x40) != (ForElementType<int>)0x0) {
              FVar41 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
            }
            *(int *)((longlong)FVar41 + (longlong)iVar25 * 4) = local_62c;
          }
          local_62c = iVar24;
          if (((((FIndex2i_u_0 *)((longlong)FVar36.Data + 8))->_s_0).A != iVar24) &&
             (*(int *)((longlong)FVar36.Data + 0xc) != iVar24)) {
            FVar41 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
            FVar34 = FVar26;
            if (FVar41 != (ForElementType<int>)0x0) {
              FVar34 = FVar41;
            }
            if ((ulonglong)FVar34 <= &local_62c) {
              FVar34 = FVar26;
              if (FVar41 != (ForElementType<int>)0x0) {
                FVar34 = FVar41;
              }
              if ((&local_62c <
                   (int *)((longlong)FVar34 + (longlong)*(int *)((longlong)FVar26 + 0x4c) * 4)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar20)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            iVar24 = *(int *)((longlong)FVar26 + 0x48);
            if (iVar24 == *(int *)((longlong)FVar26 + 0x4c)) {
              iVar24 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,(ForElementType<int> *)FVar26,
                                  (int *)((longlong)FVar26 + 0x4c));
            }
            *(int *)((longlong)FVar26 + 0x48) = iVar24 + 1;
            if (*(ForElementType<int> *)((longlong)FVar26 + 0x40) != (ForElementType<int>)0x0) {
              FVar26 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
            }
            *(int *)((longlong)FVar26 + (longlong)iVar24 * 4) = local_62c;
          }
        }
        else {
          TMap<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
          ::FindAndRemoveChecked
                    ((TMap<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                      *)&local_1d8,&local_188,uVar40);
          FVar26 = (ForElementType<int>)
                   TMapBase<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                   ::FindChecked((TMapBase<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                                  *)&local_1d8,local_588[0]);
          iVar24 = local_188.ArrayNum;
          uVar40 = iVar24 + -2 + *(int *)((longlong)FVar26 + 0x48);
          if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
          }
          piVar1 = (int *)((longlong)FVar26 + 0x4c);
          if (*(int *)((longlong)FVar26 + 0x4c) < (int)uVar40) {
            Core::Private::
            ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,uVar40,(ForElementType<int> *)FVar26,*(int *)((longlong)FVar26 + 0x48),
                       piVar1);
          }
          FVar41 = (ForElementType<int>)&local_188;
          if (local_188.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar41 = local_188.AllocatorInstance.SecondaryData;
          }
          FVar34 = (ForElementType<int>)((longlong)FVar41 + (longlong)iVar24 * 4);
          for (; FVar41 != FVar34; FVar41 = (ForElementType<int>)((longlong)FVar41 + 4)) {
            local_550[0] = *(int *)FVar41;
            if (((((FIndex2i_u_0 *)((longlong)FVar36.Data + 8))->_s_0).A != local_550[0]) &&
               (*(int *)((longlong)FVar36.Data + 0xc) != local_550[0])) {
              FVar30 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
              FVar38 = FVar26;
              if (FVar30 != (ForElementType<int>)0x0) {
                FVar38 = FVar30;
              }
              if ((ulonglong)FVar38 <= local_550) {
                FVar38 = FVar26;
                if (FVar30 != (ForElementType<int>)0x0) {
                  FVar38 = FVar30;
                }
                if ((local_550 < (int *)((longlong)FVar38 + (longlong)*piVar1 * 4)) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar20)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              iVar24 = *(int *)((longlong)FVar26 + 0x48);
              if (iVar24 == *piVar1) {
                iVar24 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,(ForElementType<int> *)FVar26,piVar1);
              }
              *(int *)((longlong)FVar26 + 0x48) = iVar24 + 1;
              FVar30 = FVar26;
              if (*(ForElementType<int> *)((longlong)FVar26 + 0x40) != (ForElementType<int>)0x0) {
                FVar30 = *(ForElementType<int> *)((longlong)FVar26 + 0x40);
              }
              *(int *)((longlong)FVar30 + (longlong)iVar24 * 4) = local_550[0];
            }
          }
          this = local_5e0;
          if (local_188.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FMemory::Free((void *)local_188.AllocatorInstance.SecondaryData);
            this = local_5e0;
          }
        }
      }
LAB_1433aee76:
      uVar50 = (undefined4)__real_3f1a36e2eb1c432d;
      uVar51 = (undefined4)((ulonglong)__real_3f1a36e2eb1c432d >> 0x20);
      uVar60 = SUB84(__real_3fe0000000000000,0);
      uVar61 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      FVar33 = local_610;
      dVar55 = local_5c8;
    }
    uVar29 = (ulonglong)local_5d0;
    FVar36.Data = FVar36.Data + 0x18;
    uVar58 = SUB84(__real_3ff0000000000000,0);
    uVar59 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar31 = (ulonglong)local_568 & 0xffffffff;
    uVar37 = (ulong64)local_634;
    param_2 = local_510;
  }
  local_628.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_628.ArrayNum = 0;
  local_628.ArrayMax = 0;
  local_428._0_8_ = 0xffffffffffffffff;
  local_428._s_0.C = -1;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::Init
            (&local_628,(FIndex3i *)&local_428._s_0,(int)uVar37);
  iVar24 = (this->Hull).ArrayNum;
  uVar40 = 0;
  if (0 < iVar24) {
    local_580 = 0.0;
    do {
      dVar55 = local_580;
      uVar31 = local_5a8.Parents._8_8_ & 0xffffffff;
      uVar23 = uVar40;
      while( true ) {
        uVar39 = 0;
        if ((int)uVar23 < (int)uVar31) {
          uVar39 = ~uVar23 >> 0x1f;
        }
        iVar24 = (int)uVar31;
        if (uVar39 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar24 = local_5a8.Parents.ArrayNum;
        }
        if (*(uint *)(local_5a8.Parents.AllocatorInstance.Data + (longlong)(int)uVar23 * 4) ==
            uVar23) break;
        uVar39 = 0;
        if ((int)uVar23 < iVar24) {
          uVar39 = ~uVar23 >> 0x1f;
        }
        if (uVar39 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar24 = local_5a8.Parents.ArrayNum;
        }
        uVar39 = *(uint *)(local_5a8.Parents.AllocatorInstance.Data + (longlong)(int)uVar23 * 4);
        uVar48 = 0;
        if ((int)uVar39 < iVar24) {
          uVar48 = ~uVar39 >> 0x1f;
        }
        if (uVar48 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar24 = local_5a8.Parents.ArrayNum;
        }
        uVar58 = *(undefined4 *)
                  (local_5a8.Parents.AllocatorInstance.Data + (longlong)(int)uVar39 * 4);
        uVar39 = 0;
        if ((int)uVar23 < iVar24) {
          uVar39 = ~uVar23 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined4 *)(local_5a8.Parents.AllocatorInstance.Data + (longlong)(int)uVar23 * 4) =
             uVar58;
        uVar31 = (ulonglong)local_5a8.Parents.ArrayNum;
        uVar39 = 0;
        if ((int)uVar23 < local_5a8.Parents.ArrayNum) {
          uVar39 = ~uVar23 >> 0x1f;
        }
        if (uVar39 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar31 = local_5a8.Parents._8_8_ & 0xffffffff;
        }
        uVar23 = *(uint *)(local_5a8.Parents.AllocatorInstance.Data + (longlong)(int)uVar23 * 4);
      }
      uVar39 = 0;
      if ((int)uVar40 < (this->Hull).ArrayNum) {
        uVar39 = ~uVar40 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar43 = (this->Hull).AllocatorInstance.Data;
      local_538 = *(undefined8 *)(pFVar43 + (longlong)dVar55);
      local_530 = *(uint *)(pFVar43 + (longlong)dVar55 + 8);
      lVar47 = 0;
      uVar39 = (uint)local_538;
      uVar48 = ~(uint)local_538 >> 0x1f;
      lVar45 = (longlong)(int)(uint)local_538 * 0xc;
      iVar24 = local_628.ArrayNum;
      do {
        uVar46 = 0;
        if ((int)uVar39 < iVar24) {
          uVar46 = uVar48;
        }
        if ((uVar46 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar24 = local_628.ArrayNum, bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(int *)(local_628.AllocatorInstance.Data + lVar45) == -1) {
          uVar46 = 0;
          if ((int)uVar39 < iVar24) {
            uVar46 = uVar48;
          }
          if ((uVar46 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(uint *)(local_628.AllocatorInstance.Data + (lVar47 + (longlong)(int)uVar39 * 3) * 4) =
               uVar23;
          iVar24 = local_628.ArrayNum;
          break;
        }
        uVar46 = 0;
        if ((int)uVar39 < iVar24) {
          uVar46 = uVar48;
        }
        if ((uVar46 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar24 = local_628.ArrayNum, bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(uint *)(local_628.AllocatorInstance.Data + lVar45) == uVar23) break;
        lVar47 = lVar47 + 1;
        lVar45 = lVar45 + 4;
      } while (lVar47 < 3);
      uVar39 = local_538._4_4_;
      lVar47 = 0;
      uVar48 = ~local_538._4_4_ >> 0x1f;
      lVar45 = (longlong)(int)local_538._4_4_ * 0xc;
      do {
        uVar46 = 0;
        if ((int)uVar39 < iVar24) {
          uVar46 = uVar48;
        }
        if ((uVar46 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar24 = local_628.ArrayNum, bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(int *)(local_628.AllocatorInstance.Data + lVar45) == -1) {
          uVar46 = 0;
          if ((int)uVar39 < iVar24) {
            uVar46 = uVar48;
          }
          if ((uVar46 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(uint *)(local_628.AllocatorInstance.Data + (lVar47 + (longlong)(int)uVar39 * 3) * 4) =
               uVar23;
          iVar24 = local_628.ArrayNum;
          break;
        }
        uVar46 = 0;
        if ((int)uVar39 < iVar24) {
          uVar46 = uVar48;
        }
        if ((uVar46 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar24 = local_628.ArrayNum, bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(uint *)(local_628.AllocatorInstance.Data + lVar45) == uVar23) break;
        lVar47 = lVar47 + 1;
        lVar45 = lVar45 + 4;
      } while (lVar47 < 3);
      uVar39 = local_530;
      lVar47 = 0;
      uVar48 = ~local_530 >> 0x1f;
      lVar45 = (longlong)(int)local_530 * 0xc;
      do {
        uVar46 = 0;
        if ((int)uVar39 < iVar24) {
          uVar46 = uVar48;
        }
        if ((uVar46 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar24 = local_628.ArrayNum, bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(int *)(local_628.AllocatorInstance.Data + lVar45) == -1) {
          uVar46 = 0;
          if ((int)uVar39 < iVar24) {
            uVar46 = uVar48;
          }
          if ((uVar46 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(uint *)(local_628.AllocatorInstance.Data + (lVar47 + (longlong)(int)uVar39 * 3) * 4) =
               uVar23;
          break;
        }
        uVar46 = 0;
        if ((int)uVar39 < iVar24) {
          uVar46 = uVar48;
        }
        if ((uVar46 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar24 = local_628.ArrayNum, bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(uint *)(local_628.AllocatorInstance.Data + lVar45) == uVar23) break;
        lVar47 = lVar47 + 1;
        lVar45 = lVar45 + 4;
      } while (lVar47 < 3);
      uVar40 = uVar40 + 1;
      local_580 = (double)((longlong)local_580 + 0xc);
      iVar24 = (local_5e0->Hull).ArrayNum;
      this = local_5e0;
    } while ((int)uVar40 < iVar24);
    uVar37 = (ulong64)local_634;
  }
  bVar20 = false;
  local_5b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar40 = 0;
  local_5b8.ArrayNum = 0;
  local_5b8.ArrayMax = 0;
  local_600.Data = (FScriptContainerElement *)0x0;
  local_518 = &local_628;
  local_5f8 = 0;
  if (0 < iVar24) {
    lVar45 = 0;
    uVar23 = uVar40;
LAB_1433af843:
    while( true ) {
      uVar39 = 0;
      if ((int)uVar40 < local_5a8.Parents.ArrayNum) {
        uVar39 = ~uVar40 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(uint *)(local_5a8.Parents.AllocatorInstance.Data + (longlong)(int)uVar40 * 4) == uVar40)
      break;
      uVar39 = 0;
      if ((int)uVar40 < local_5a8.Parents.ArrayNum) {
        uVar39 = ~uVar40 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar39 = *(uint *)(local_5a8.Parents.AllocatorInstance.Data + (longlong)(int)uVar40 * 4);
      uVar48 = 0;
      if ((int)uVar39 < local_5a8.Parents.ArrayNum) {
        uVar48 = ~uVar39 >> 0x1f;
      }
      if ((uVar48 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar58 = *(undefined4 *)(local_5a8.Parents.AllocatorInstance.Data + (longlong)(int)uVar39 * 4)
      ;
      uVar39 = 0;
      if ((int)uVar40 < local_5a8.Parents.ArrayNum) {
        uVar39 = ~uVar40 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)(local_5a8.Parents.AllocatorInstance.Data + (longlong)(int)uVar40 * 4) = uVar58
      ;
      uVar39 = 0;
      if ((int)uVar40 < local_5a8.Parents.ArrayNum) {
        uVar39 = ~uVar40 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar40 = *(uint *)(local_5a8.Parents.AllocatorInstance.Data + (longlong)(int)uVar40 * 4);
    }
    pTVar42 = local_5e8;
    local_614 = uVar40;
    if (uVar40 == uVar23) {
      uVar39 = FSizedDisjointSet::FindWithoutCollapse(&local_5a8,uVar23);
      uVar40 = 0;
      if ((int)uVar39 < local_5a8.Sizes.ArrayNum) {
        uVar40 = ~uVar39 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar5 = local_5b8._8_8_;
      pTVar28 = local_5e0;
      if (*(int *)(local_5a8.Sizes.AllocatorInstance.Data + (longlong)(int)uVar39 * 4) == 1) {
        uVar40 = 0;
        if ((int)uVar23 < (local_5e0->Hull).ArrayNum) {
          uVar40 = ~uVar23 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar17 = local_518;
        pFVar43 = (pTVar28->Hull).AllocatorInstance.Data;
        local_578 = *(undefined8 *)(pFVar43 + lVar45 * 0xc);
        local_570[0] = *(uint *)(pFVar43 + lVar45 * 0xc + 8);
        lVar47 = (longlong)(int)(uint)local_578;
        uVar39 = 0;
        uVar40 = uVar39;
        if ((int)(uint)local_578 < local_518->ArrayNum) {
          uVar40 = ~(uint)local_578 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar18 = local_518;
        if (*(int *)((pTVar17->AllocatorInstance).Data + lVar47 * 0xc + 8) != -1) {
          lVar47 = (longlong)(int)local_578._4_4_;
          uVar40 = uVar39;
          if ((int)local_578._4_4_ < local_518->ArrayNum) {
            uVar40 = ~local_578._4_4_ >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar17 = local_518;
          if (*(int *)((pTVar18->AllocatorInstance).Data + lVar47 * 0xc + 8) != -1) {
            lVar47 = (longlong)(int)local_570[0];
            uVar40 = uVar39;
            if ((int)local_570[0] < local_518->ArrayNum) {
              uVar40 = ~local_570[0] >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar42 = local_5e8;
            if (*(int *)((pTVar17->AllocatorInstance).Data + lVar47 * 0xc + 8) != -1) {
              iVar24 = local_5e8->ArrayNum;
              if (iVar24 == local_5e8->ArrayMax) {
                iVar24 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x830,&local_5e8->AllocatorInstance,&local_5e8->ArrayMax);
              }
              pTVar42->ArrayNum = iVar24 + 1;
              FVar26 = (ForElementType<int>)
                       ((longlong)iVar24 * 0x30 + (longlong)(pTVar42->AllocatorInstance).Data);
              *(ForElementType<int> *)((longlong)FVar26 + 0x20) = (ForElementType<int>)0x0;
              pFVar2 = (ForElementType<int> *)((longlong)FVar26 + 0x28);
              pFVar2->InlineData[0] = '\0';
              pFVar2->InlineData[1] = '\0';
              pFVar2->InlineData[2] = '\0';
              pFVar2->InlineData[3] = '\0';
              puVar3 = (uchar *)((longlong)FVar26 + 0x2c);
              puVar3[0] = '\b';
              puVar3[1] = '\0';
              puVar3[2] = '\0';
              puVar3[3] = '\0';
              if ((((ulonglong)FVar26 <= &local_578) &&
                  (&local_578 < (ForElementType<int> *)((longlong)FVar26 + 0x20U))) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar21)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar24 = *(int *)((ForElementType<int> *)((longlong)FVar26 + 0x28))->InlineData;
              if (iVar24 == *(int *)((longlong)FVar26 + 0x2c)) {
                iVar24 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,(ForElementType<int> *)FVar26,
                                    (int *)((longlong)FVar26 + 0x2c));
              }
              *(int *)((ForElementType<int> *)((longlong)FVar26 + 0x28))->InlineData = iVar24 + 1;
              FVar41 = FVar26;
              if (*(ForElementType<int> *)((longlong)FVar26 + 0x20) != (ForElementType<int>)0x0) {
                FVar41 = *(ForElementType<int> *)((longlong)FVar26 + 0x20);
              }
              *(uint *)((longlong)FVar41 + (longlong)iVar24 * 4) = (uint)local_578;
              FVar41 = *(ForElementType<int> *)((longlong)FVar26 + 0x20);
              FVar34 = FVar26;
              if (FVar41 != (ForElementType<int>)0x0) {
                FVar34 = FVar41;
              }
              if ((ulonglong)FVar34 <= (longlong)&local_578 + 4U) {
                FVar34 = FVar26;
                if (FVar41 != (ForElementType<int>)0x0) {
                  FVar34 = FVar41;
                }
                if (((longlong)&local_578 + 4U <
                     (ulonglong)((longlong)FVar34 + (longlong)*(int *)((longlong)FVar26 + 0x2c) * 4)
                    ) && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar21)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              iVar24 = *(int *)((longlong)FVar26 + 0x28);
              if (iVar24 == *(int *)((longlong)FVar26 + 0x2c)) {
                iVar24 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,(ForElementType<int> *)FVar26,
                                    (int *)((longlong)FVar26 + 0x2c));
              }
              *(int *)((longlong)FVar26 + 0x28) = iVar24 + 1;
              FVar41 = FVar26;
              if (*(ForElementType<int> *)((longlong)FVar26 + 0x20) != (ForElementType<int>)0x0) {
                FVar41 = *(ForElementType<int> *)((longlong)FVar26 + 0x20);
              }
              *(uint *)((longlong)FVar41 + (longlong)iVar24 * 4) = local_578._4_4_;
              FVar41 = *(ForElementType<int> *)((longlong)FVar26 + 0x20);
              FVar34 = FVar26;
              if (FVar41 != (ForElementType<int>)0x0) {
                FVar34 = FVar41;
              }
              if ((ulonglong)FVar34 <= local_570) {
                FVar34 = FVar26;
                if (FVar41 != (ForElementType<int>)0x0) {
                  FVar34 = FVar41;
                }
                if ((local_570 <
                     (uint *)((longlong)FVar34 + (longlong)*(int *)((longlong)FVar26 + 0x2c) * 4))
                   && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar21)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              iVar24 = *(int *)((longlong)FVar26 + 0x28);
              if (iVar24 == *(int *)((longlong)FVar26 + 0x2c)) {
                iVar24 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,(ForElementType<int> *)FVar26,
                                    (int *)((longlong)FVar26 + 0x2c));
              }
              *(int *)((longlong)FVar26 + 0x28) = iVar24 + 1;
              if (*(ForElementType<int> *)((longlong)FVar26 + 0x20) != (ForElementType<int>)0x0) {
                FVar26 = *(ForElementType<int> *)((longlong)FVar26 + 0x20);
              }
              *(uint *)((longlong)FVar26 + (longlong)iVar24 * 4) = local_570[0];
              if (local_5c0 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)
              {
                if (((local_600.Data <= (FScriptContainerElement *)&local_614) &&
                    ((FScriptContainerElement *)&local_614 <
                     local_600.Data + (longlong)local_5f8._4_4_ * 4)) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar21)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar24 = (int)local_5f8;
                if ((int)local_5f8 == local_5f8._4_4_) {
                  iVar24 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_600,(int *)((longlong)&local_5f8 + 4));
                }
                local_5f8 = CONCAT44(local_5f8._4_4_,iVar24 + 1);
                *(uint *)(local_600.Data + (longlong)iVar24 * 4) = local_614;
              }
              else {
                lVar47 = (longlong)(int)local_614;
                if ((int)local_614 < local_560.ArrayNum) {
                  uVar39 = ~local_614 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pTVar15 = local_5c0;
                local_418 = *(undefined8 *)(local_560.AllocatorInstance.Data + lVar47 * 0x18);
                uStack_410 = *(undefined8 *)(local_560.AllocatorInstance.Data + lVar47 * 0x18 + 8);
                local_408 = *(undefined8 *)(local_560.AllocatorInstance.Data + lVar47 * 0x18 + 0x10)
                ;
                pFVar43 = (local_5c0->AllocatorInstance).Data;
                if (((pFVar43 <= (FScriptContainerElement *)&local_418) &&
                    ((FScriptContainerElement *)&local_418 <
                     pFVar43 + (longlong)local_5c0->ArrayMax * 0x18)) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar21)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar24 = pTVar15->ArrayNum;
                if (iVar24 == pTVar15->ArrayMax) {
                  iVar24 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
                }
                pTVar15->ArrayNum = iVar24 + 1;
                pFVar27 = (pTVar15->AllocatorInstance).Data;
                pFVar43 = pFVar27 + (longlong)iVar24 * 0x18;
                *(undefined8 *)pFVar43 = local_418;
                *(undefined8 *)(pFVar43 + 8) = uStack_410;
                *(undefined8 *)(pFVar27 + (longlong)iVar24 * 0x18 + 0x10) = local_408;
                pTVar42 = local_5e8;
              }
              goto LAB_1433b0492;
            }
          }
        }
        bVar20 = true;
        pTVar42 = local_5e8;
        goto LAB_1433b0492;
      }
      iVar24 = local_5b8.ArrayMax;
      local_5b8._8_8_ = (ulonglong)(uint)local_5b8.ArrayMax << 0x20;
      if (((longlong)uVar5 < 0) && (iVar24 != 0)) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_5b8.AllocatorInstance,0,&local_5b8.ArrayMax);
      }
      local_388 = &local_5a8;
      local_380 = &local_614;
      local_370 = &local_388;
      local_378 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l90::<lambda_6>,bool,int>
                  ::Call;
      WalkBorder(&local_5e0->Hull,&local_5e0->HullNeighbors,
                 (TFunctionRef<bool___cdecl(int)> *)&local_378,uVar23,&local_5b8);
      FVar16.Data = local_5b8.AllocatorInstance.Data;
      pFVar43 = local_5b8.AllocatorInstance.Data + (longlong)local_5b8.ArrayNum * 4;
      FVar36.Data = local_5b8.AllocatorInstance.Data;
      FVar35.Data = local_5b8.AllocatorInstance.Data;
      if (local_5b8.AllocatorInstance.Data != pFVar43) {
        do {
          FVar36.Data = FVar35.Data + 4;
          bVar21 = `UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l2::<lambda_5>::
                   operator()(&local_518,*(int *)FVar35.Data);
          pFVar27 = FVar36.Data;
          if (!bVar21) goto joined_r0x0001433b00d0;
          FVar35.Data = FVar36.Data;
        } while (FVar36.Data != pFVar43);
        goto LAB_1433b00f2;
      }
      goto LAB_1433b00f5;
    }
    goto LAB_1433b0492;
  }
  goto LAB_1433b04b2;
joined_r0x0001433b00d0:
  for (; FVar36.Data = FVar35.Data, pFVar27 != pFVar43; pFVar27 = pFVar27 + 4) {
    bVar21 = `UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l2::<lambda_5>::operator()
                       (&local_518,*(int *)pFVar27);
    if (bVar21) {
      *(int *)FVar36.Data = *(int *)pFVar27;
      FVar36.Data = FVar36.Data + 4;
    }
    FVar35.Data = FVar36.Data;
  }
LAB_1433b00f2:
LAB_1433b00f5:
  uVar37 = (ulong64)local_634;
  uVar31 = (longlong)FVar36.Data - (longlong)FVar16.Data >> 2;
  uVar40 = (uint)uVar31;
  if ((int)uVar40 < 3) {
    bVar20 = true;
    pTVar42 = local_5e8;
  }
  else {
    if (local_5b8.ArrayNum < (int)uVar40) {
      iVar25 = uVar40 - local_5b8.ArrayNum;
      iVar24 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar25,&local_5b8.AllocatorInstance,&local_5b8.ArrayNum,
                          &local_5b8.ArrayMax);
      memset(local_5b8.AllocatorInstance.Data + (longlong)iVar24 * 4,0,(longlong)iVar25 << 2);
    }
    else if ((int)uVar40 < local_5b8.ArrayNum) {
      uVar39 = local_5b8.ArrayNum - uVar40;
      iVar24 = local_5b8.ArrayNum;
      if ((int)(uVar40 | uVar39) < 0) {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar21) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar24 = local_5b8.ArrayNum;
      }
      if (uVar39 != 0) {
        iVar25 = (iVar24 - uVar39) - uVar40;
        if (iVar25 != 0) {
          memmove(local_5b8.AllocatorInstance.Data + (uVar31 & 0xffffffff) * 4,
                  local_5b8.AllocatorInstance.Data + (uVar31 & 0xffffffff) * 4 +
                  (longlong)(int)uVar39 * 4,(longlong)iVar25 << 2);
          iVar24 = local_5b8.ArrayNum;
        }
        local_5b8.ArrayNum = iVar24 - uVar39;
      }
    }
    pTVar42 = local_5e8;
    iVar24 = local_5e8->ArrayNum;
    if (iVar24 == local_5e8->ArrayMax) {
      iVar24 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_5e8->AllocatorInstance,&local_5e8->ArrayMax);
    }
    pTVar42->ArrayNum = iVar24 + 1;
    FVar26 = (ForElementType<int>)
             ((longlong)(pTVar42->AllocatorInstance).Data + (longlong)iVar24 * 0x30);
    pFVar2 = (ForElementType<int> *)((longlong)FVar26 + 0x28);
    puVar3 = (uchar *)((longlong)FVar26 + 0x2c);
    *(ForElementType<int> *)((longlong)FVar26 + 0x20) = (ForElementType<int>)0x0;
    pFVar2->InlineData[0] = '\0';
    pFVar2->InlineData[1] = '\0';
    pFVar2->InlineData[2] = '\0';
    pFVar2->InlineData[3] = '\0';
    puVar3[0] = '\b';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    if ((FVar26 == (ForElementType<int>)&local_5b8) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar21)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar47 = (longlong)local_5b8.ArrayNum;
    if (local_5b8.ArrayNum != 0) {
      iVar24 = Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                         (4,4,local_5b8.ArrayNum,(ForElementType<int> *)FVar26,(int *)pFVar2,
                          (int *)puVar3);
      if (*(ForElementType<int> *)((longlong)FVar26 + 0x20) != (ForElementType<int>)0x0) {
        FVar26 = *(ForElementType<int> *)((longlong)FVar26 + 0x20);
      }
      memcpy((void *)((longlong)FVar26 + (longlong)iVar24 * 4),local_5b8.AllocatorInstance.Data,
             lVar47 << 2);
    }
    if (local_5c0 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      if (((local_600.Data <= (FScriptContainerElement *)&local_614) &&
          ((FScriptContainerElement *)&local_614 < local_600.Data + (longlong)local_5f8._4_4_ * 4))
         && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar24 = (int)local_5f8;
      if ((int)local_5f8 == local_5f8._4_4_) {
        iVar24 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_600,(int *)((longlong)&local_5f8 + 4));
      }
      uVar37 = (ulong64)local_634;
      local_5f8 = CONCAT44(local_5f8._4_4_,iVar24 + 1);
      *(uint *)(local_600.Data + (longlong)iVar24 * 4) = local_614;
      pTVar42 = local_5e8;
    }
    else {
      lVar47 = (longlong)(int)local_614;
      uVar40 = 0;
      if ((int)local_614 < local_560.ArrayNum) {
        uVar40 = ~local_614 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar15 = local_5c0;
      local_400 = *(undefined8 *)(local_560.AllocatorInstance.Data + lVar47 * 0x18);
      uStack_3f8 = *(undefined8 *)(local_560.AllocatorInstance.Data + lVar47 * 0x18 + 8);
      local_3f0 = *(undefined8 *)(local_560.AllocatorInstance.Data + lVar47 * 0x18 + 0x10);
      pFVar43 = (local_5c0->AllocatorInstance).Data;
      if (((pFVar43 <= (FScriptContainerElement *)&local_400) &&
          ((FScriptContainerElement *)&local_400 < pFVar43 + (longlong)local_5c0->ArrayMax * 0x18))
         && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar24 = pTVar15->ArrayNum;
      if (iVar24 == pTVar15->ArrayMax) {
        iVar24 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
      }
      uVar37 = (ulong64)local_634;
      pTVar15->ArrayNum = iVar24 + 1;
      pFVar27 = (pTVar15->AllocatorInstance).Data;
      pFVar43 = pFVar27 + (longlong)iVar24 * 0x18;
      *(undefined8 *)pFVar43 = local_400;
      *(undefined8 *)(pFVar43 + 8) = uStack_3f8;
      *(undefined8 *)(pFVar27 + (longlong)iVar24 * 0x18 + 0x10) = local_3f0;
      pTVar42 = local_5e8;
    }
  }
LAB_1433b0492:
  uVar40 = uVar23 + 1;
  lVar45 = lVar45 + 1;
  uVar23 = uVar40;
  if ((local_5e0->Hull).ArrayNum <= (int)uVar40) goto code_r0x0001433b04a9;
  goto LAB_1433af843;
code_r0x0001433b04a9:
  if (bVar20) {
    while (3 < pTVar42->ArrayNum) {
      bVar20 = false;
      local_4f8 = 0xffffffffffffffff;
      local_4f0 = 0xffffffff;
      iVar24 = (int)uVar37;
      if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar37);
      }
      local_628.ArrayNum = 0;
      if (local_628.ArrayMax != iVar24) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar24,&local_628.AllocatorInstance,0,&local_628.ArrayMax);
      }
      if (0 < iVar24) {
        do {
          if (((local_628.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4f8) &&
              ((FScriptContainerElement *)&local_4f8 <
               local_628.AllocatorInstance.Data + (longlong)local_628.ArrayMax * 0xc)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (local_628.ArrayNum == local_628.ArrayMax) {
            local_628.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_628.AllocatorInstance,&local_628.ArrayMax);
          }
          lVar45 = (longlong)local_628.ArrayNum;
          local_628.ArrayNum = local_628.ArrayNum + 1;
          *(undefined8 *)(local_628.AllocatorInstance.Data + lVar45 * 0xc) = local_4f8;
          *(undefined4 *)(local_628.AllocatorInstance.Data + lVar45 * 0xc + 8) = local_4f0;
          uVar37 = uVar37 - 1;
        } while (uVar37 != 0);
      }
      iVar24 = pTVar42->ArrayNum;
      uVar40 = 0;
      if (0 < iVar24) {
        local_5c8 = 0.0;
        do {
          dVar55 = local_5c8;
          uVar23 = 0;
          if ((int)uVar40 < iVar24) {
            uVar23 = ~uVar40 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_498 = (pTVar42->AllocatorInstance).Data + (longlong)dVar55;
          uVar23 = 0;
          iVar24 = *(int *)(local_498 + 0x28);
          if (0 < iVar24) {
            local_580 = 0.0;
            do {
              pFVar43 = local_498;
              dVar55 = local_580;
              uVar39 = 0;
              if ((int)uVar23 < iVar24) {
                uVar39 = ~uVar23 >> 0x1f;
              }
              if ((uVar39 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar27 = *(FScriptContainerElement **)(pFVar43 + 0x20);
              if (pFVar27 != (FScriptContainerElement *)0x0) {
                pFVar43 = pFVar27;
              }
              uVar39 = *(uint *)(pFVar43 + (longlong)dVar55);
              lVar47 = 0;
              uVar48 = ~uVar39 >> 0x1f;
              lVar45 = (longlong)(int)uVar39 * 0xc;
              do {
                uVar46 = 0;
                if ((int)uVar39 < local_628.ArrayNum) {
                  uVar46 = uVar48;
                }
                if ((uVar46 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if (*(int *)(local_628.AllocatorInstance.Data + lVar45) == -1) {
                  uVar46 = 0;
                  if ((int)uVar39 < local_628.ArrayNum) {
                    uVar46 = uVar48;
                  }
                  if ((uVar46 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  *(uint *)(local_628.AllocatorInstance.Data +
                           (lVar47 + (longlong)(int)uVar39 * 3) * 4) = uVar40;
                  break;
                }
                uVar46 = 0;
                if ((int)uVar39 < local_628.ArrayNum) {
                  uVar46 = uVar48;
                }
                if ((uVar46 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if (*(uint *)(local_628.AllocatorInstance.Data + lVar45) == uVar40) break;
                lVar47 = lVar47 + 1;
                lVar45 = lVar45 + 4;
              } while (lVar47 < 3);
              uVar23 = uVar23 + 1;
              local_580 = (double)((longlong)local_580 + 4);
              iVar24 = *(int *)(local_498 + 0x28);
              pTVar42 = local_5e8;
            } while ((int)uVar23 < iVar24);
          }
          uVar40 = uVar40 + 1;
          iVar24 = pTVar42->ArrayNum;
          local_5c8 = (double)((longlong)local_5c8 + 0x30);
        } while ((int)uVar40 < iVar24);
      }
      uVar40 = 0;
      if (iVar24 < 1) break;
      lVar45 = 0;
      do {
        uVar23 = 0;
        if ((int)uVar40 < iVar24) {
          uVar23 = ~uVar40 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar41 = (ForElementType<int>)((longlong)(pTVar42->AllocatorInstance).Data + lVar45);
        FVar26 = FVar41;
        if (*(ForElementType<int> *)((longlong)FVar41 + 0x20) != (ForElementType<int>)0x0) {
          FVar26 = *(ForElementType<int> *)((longlong)FVar41 + 0x20);
        }
        FVar30 = (ForElementType<int>)
                 ((longlong)FVar26 + (longlong)*(int *)((longlong)FVar41 + 0x28) * 4);
        FVar34 = FVar26;
        do {
          FVar38 = FVar34;
          if (FVar38 == FVar30) goto LAB_1433b09b2;
          FVar34 = (ForElementType<int>)((longlong)FVar38 + 4);
          bVar21 = `UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l2::<lambda_5>::
                   operator()(&local_518,*(int *)FVar38);
        } while (bVar21);
        for (; FVar34 != FVar30; FVar34 = (ForElementType<int>)((longlong)FVar34 + 4)) {
          bVar21 = `UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l2::<lambda_5>::
                   operator()(&local_518,*(int *)FVar34);
          if (bVar21) {
            *(int *)FVar38 = *(int *)FVar34;
            FVar38 = (ForElementType<int>)((longlong)FVar38 + 4);
          }
        }
LAB_1433b09b2:
        pTVar42 = local_5e8;
        uVar23 = *(uint *)((longlong)FVar41 + 0x28);
        uVar31 = (longlong)FVar38 - (longlong)FVar26 >> 2;
        uVar39 = (uint)uVar31;
        if (uVar39 != uVar23) {
          if ((int)uVar39 < 3) {
            uVar23 = 0;
            if ((int)uVar40 < local_5e8->ArrayNum) {
              uVar23 = ~uVar40 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
            ::RemoveAtSwapImpl(pTVar42,uVar40);
            pTVar15 = local_5c0;
            if (local_5c0 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
              uVar23 = 0;
              if ((int)uVar40 < (int)local_5f8) {
                uVar23 = ~uVar40 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar24 = ((int)local_5f8 - uVar40) + -1;
              if (1 < iVar24) {
                iVar24 = 1;
              }
              if (iVar24 != 0) {
                memmove(local_600.Data + (longlong)(int)uVar40 * 4,
                        local_600.Data + (longlong)((int)local_5f8 - iVar24) * 4,
                        (longlong)iVar24 << 2);
              }
              local_5f8 = CONCAT44(local_5f8._4_4_,(int)local_5f8 + -1);
              uVar40 = uVar40 - 1;
              bVar20 = true;
              lVar45 = lVar45 + -0x30;
            }
            else {
              uVar23 = 0;
              if ((int)uVar40 < local_5c0->ArrayNum) {
                uVar23 = ~uVar40 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar43 = (pTVar15->AllocatorInstance).Data;
              iVar24 = ~uVar40 + pTVar15->ArrayNum;
              if (1 < iVar24) {
                iVar24 = 1;
              }
              if (iVar24 != 0) {
                memmove(pFVar43 + (longlong)(int)uVar40 * 0x18,
                        pFVar43 + (longlong)(pTVar15->ArrayNum - iVar24) * 0x18,
                        (longlong)iVar24 * 0x18);
              }
              pTVar15->ArrayNum = pTVar15->ArrayNum + -1;
              uVar40 = uVar40 - 1;
              bVar20 = true;
              lVar45 = lVar45 + -0x30;
            }
          }
          else if ((int)uVar23 < (int)uVar39) {
            iVar24 = Core::Private::
                     ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (4,4,uVar39 - uVar23,(ForElementType<int> *)FVar41,
                                (int *)((longlong)FVar41 + 0x28),(int *)((longlong)FVar41 + 0x2c));
            if (*(ForElementType<int> *)((longlong)FVar41 + 0x20) != (ForElementType<int>)0x0) {
              FVar41 = *(ForElementType<int> *)((longlong)FVar41 + 0x20);
            }
            memset((void *)((longlong)FVar41 + (longlong)iVar24 * 4),0,
                   (longlong)(int)(uVar39 - uVar23) << 2);
          }
          else if ((int)uVar39 < (int)uVar23) {
            uVar23 = uVar23 - uVar39;
            if (((int)(uVar39 | uVar23) < 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (uVar23 != 0) {
              FVar26 = FVar41;
              if (*(ForElementType<int> *)((longlong)FVar41 + 0x20) != (ForElementType<int>)0x0) {
                FVar26 = *(ForElementType<int> *)((longlong)FVar41 + 0x20);
              }
              _Dst = (void *)((longlong)FVar26 + (uVar31 & 0xffffffff) * 4);
              iVar24 = (*(int *)((longlong)FVar41 + 0x28) - uVar39) - uVar23;
              if (iVar24 != 0) {
                memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar23 * 4),
                        (longlong)iVar24 << 2);
              }
              iVar24 = *(int *)((longlong)FVar41 + 0x28) - uVar23;
              *(int *)((longlong)FVar41 + 0x28) = iVar24;
              Core::Private::
              ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (4,4,(ForElementType<int> *)FVar41,iVar24,(int *)((longlong)FVar41 + 0x2c));
            }
          }
        }
        uVar40 = uVar40 + 1;
        lVar45 = lVar45 + 0x30;
        iVar24 = local_5e8->ArrayNum;
        pTVar42 = local_5e8;
      } while ((int)uVar40 < iVar24);
      if (!bVar20) break;
      uVar37 = (ulong64)local_634;
    }
  }
LAB_1433b04b2:
  uVar40 = 0;
  bVar20 = true;
  iVar24 = local_5e8->ArrayNum;
  if (iVar24 < 1) {
LAB_1433b1183:
    if (3 < iVar24) goto LAB_1433b13dd;
  }
  else {
    uVar58 = SUB84(__real_3e45798ee0000000,0);
    uVar59 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    uVar60 = SUB84(__real_3ff0000000000000,0);
    uVar61 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_610 = (FIndex2i_u_0)0x0;
    local_580 = 0.0;
    local_5c8 = 0.0;
    do {
      dVar12 = local_580;
      pTVar15 = local_5c0;
      dVar55 = local_5c8;
      pTVar42 = local_5e8;
      FVar33 = local_610;
      if (!bVar20) goto LAB_1433b118c;
      uVar23 = ~uVar40 >> 0x1f;
      if (local_5c0 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
        uVar39 = 0;
        if ((int)uVar40 < (int)local_5f8) {
          uVar39 = uVar23;
        }
        if ((uVar39 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar39 = *(uint *)(local_600.Data + (longlong)dVar55);
        uVar48 = 0;
        if ((int)uVar39 < local_560.ArrayNum) {
          uVar48 = ~uVar39 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar43 = local_560.AllocatorInstance.Data + (longlong)(int)uVar39 * 0x18;
        local_468 = *(undefined4 *)pFVar43;
        uStack_464 = *(undefined4 *)(pFVar43 + 4);
        uStack_460 = *(undefined4 *)(pFVar43 + 8);
        uStack_45c = *(undefined4 *)(pFVar43 + 0xc);
        uVar50 = (undefined4)
                 *(undefined8 *)
                  (local_560.AllocatorInstance.Data + (longlong)(int)uVar39 * 0x18 + 0x10);
        uVar51 = (undefined4)
                 ((ulonglong)
                  *(undefined8 *)
                   (local_560.AllocatorInstance.Data + (longlong)(int)uVar39 * 0x18 + 0x10) >> 0x20)
        ;
      }
      else {
        uVar39 = 0;
        if ((int)uVar40 < local_5c0->ArrayNum) {
          uVar39 = uVar23;
        }
        if ((uVar39 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar27 = (pTVar15->AllocatorInstance).Data;
        pFVar43 = pFVar27 + (longlong)dVar12;
        local_468 = *(undefined4 *)pFVar43;
        uStack_464 = *(undefined4 *)(pFVar43 + 4);
        uStack_460 = *(undefined4 *)(pFVar43 + 8);
        uStack_45c = *(undefined4 *)(pFVar43 + 0xc);
        uVar5 = *(undefined8 *)(pFVar27 + (longlong)dVar12 + 0x10);
        uVar50 = (undefined4)uVar5;
        uVar51 = (undefined4)((ulonglong)uVar5 >> 0x20);
      }
      local_458 = (double)CONCAT44(uVar51,uVar50);
      if (((uVar23 & (int)uVar40 < pTVar42->ArrayNum) == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar43 = (pTVar42->AllocatorInstance).Data + (longlong)FVar33;
      uVar39 = 0;
      lVar45 = 0;
      iVar24 = *(int *)(pFVar43 + 0x28);
      uVar48 = iVar24 - 2;
      uVar46 = iVar24 - 1;
      uVar23 = 0;
      if ((int)uVar48 < iVar24) {
        uVar23 = ~uVar48 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar27 = pFVar43;
      if (*(FScriptContainerElement **)(pFVar43 + 0x20) != (FScriptContainerElement *)0x0) {
        pFVar27 = *(FScriptContainerElement **)(pFVar43 + 0x20);
      }
      local_4b8[0] = *(undefined4 *)(pFVar27 + (longlong)(int)uVar48 * 4);
      (**(code **)local_510)(&local_3c8,*(undefined8 *)&local_510->field_0x8,local_4b8);
      uVar23 = 0;
      if ((int)uVar46 < *(int *)(pFVar43 + 0x28)) {
        uVar23 = ~uVar46 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar44 = local_510;
      pFVar27 = pFVar43;
      if (*(FScriptContainerElement **)(pFVar43 + 0x20) != (FScriptContainerElement *)0x0) {
        pFVar27 = *(FScriptContainerElement **)(pFVar43 + 0x20);
      }
      local_4b0 = *(undefined4 *)(pFVar27 + (longlong)(int)uVar46 * 4);
      (**(code **)local_510)(&local_480,*(undefined8 *)&local_510->field_0x8);
      dVar11 = local_458;
      dVar55 = (double)CONCAT44(uStack_47c,local_480) - local_3c8;
      dVar4 = (double)CONCAT44(uStack_474,uStack_478) - dStack_3c0;
      dVar12 = local_470 - local_3b8;
      dVar53 = dVar4 * dVar4 + dVar55 * dVar55 + dVar12 * dVar12;
      bVar21 = dVar53 != (double)CONCAT44(uVar59,uVar58);
      bVar22 = (double)CONCAT44(uVar59,uVar58) <= dVar53;
      if (bVar22 && bVar21) {
        local_2b0 = (double)CONCAT44(uVar61,uVar60) / SQRT(dVar53);
        dVar55 = dVar55 * local_2b0;
        dVar4 = dVar4 * local_2b0;
        dVar12 = dVar12 * local_2b0;
      }
      if (0 < iVar24) {
        dVar13 = (double)CONCAT44(uStack_45c,uStack_460);
        dVar53 = (double)CONCAT44(uStack_464,local_468);
        bVar21 = bVar22 && bVar21;
        do {
          uVar23 = 0;
          if ((int)uVar39 < *(int *)(pFVar43 + 0x28)) {
            uVar23 = ~uVar39 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar27 = pFVar43;
          if (*(FScriptContainerElement **)(pFVar43 + 0x20) != (FScriptContainerElement *)0x0) {
            pFVar27 = *(FScriptContainerElement **)(pFVar43 + 0x20);
          }
          local_4a8 = *(undefined4 *)(pFVar27 + lVar45 * 4);
          (**(code **)pTVar44)(&local_3a0,*(undefined8 *)&pTVar44->field_0x8);
          dVar56 = (double)CONCAT44(uStack_39c,local_3a0) - (double)CONCAT44(uStack_47c,local_480);
          dVar57 = (double)CONCAT44(uStack_394,uStack_398) - (double)CONCAT44(uStack_474,uStack_478)
          ;
          dVar52 = local_390 - local_470;
          dVar54 = dVar57 * dVar57 + dVar56 * dVar56 + dVar52 * dVar52;
          bVar22 = __real_3e45798ee0000000 < dVar54;
          if (bVar22) {
            local_2a8 = __real_3ff0000000000000 / SQRT(dVar54);
            dVar56 = dVar56 * local_2a8;
            dVar57 = dVar57 * local_2a8;
            dVar52 = dVar52 * local_2a8;
          }
          uVar58 = SUB84(__real_3e45798ee0000000,0);
          uVar59 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          uVar60 = SUB84(__real_3ff0000000000000,0);
          uVar61 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          if (((bVar21) && (bVar22)) &&
             ((dVar4 * dVar11 - dVar12 * dVar13) * dVar56 +
              (dVar12 * dVar53 - dVar55 * dVar11) * dVar57 +
              (dVar55 * dVar13 - dVar4 * dVar53) * dVar52 < __real_bf1a36e2eb1c432d)) {
            bVar20 = false;
            break;
          }
          local_3c8 = (double)CONCAT44(uStack_47c,local_480);
          dStack_3c0 = (double)CONCAT44(uStack_474,uStack_478);
          uVar39 = uVar39 + 1;
          lVar45 = lVar45 + 1;
          local_3b8 = local_470;
          local_470 = local_390;
          local_480 = local_3a0;
          uStack_47c = uStack_39c;
          uStack_478 = uStack_398;
          uStack_474 = uStack_394;
          dVar55 = dVar56;
          dVar12 = dVar52;
          dVar4 = dVar57;
          bVar21 = bVar22;
        } while (lVar45 < iVar24);
      }
      uVar40 = uVar40 + 1;
      local_580 = (double)((longlong)local_580 + 0x18);
      local_5c8 = (double)((longlong)local_5c8 + 4);
      local_610._s_0 = local_610._s_0 + 0x30;
      iVar24 = local_5e8->ArrayNum;
    } while ((int)uVar40 < iVar24);
    if (bVar20) goto LAB_1433b1183;
  }
LAB_1433b118c:
  pTVar42 = local_5e8;
  piVar1 = &local_5e8->ArrayMax;
  pTVar6 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
           (local_5e8->AllocatorInstance).Data;
  if (local_5e8->ArrayMax < 0) {
    DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar6,iVar24);
    pTVar42->ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&pTVar42->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar6,iVar24);
    pTVar42->ArrayNum = 0;
  }
  if (local_5c0 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_5c0->ArrayNum = 0;
    if (local_5c0->ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&local_5c0->AllocatorInstance,0,&local_5c0->ArrayMax);
    }
  }
  pTVar44 = local_510;
  local_360 = &local_518;
  local_288.SimplificationSettings.DegenerateEdgeTolerance = 0.0;
  local_288.SimplificationSettings.SkipAtHullDistanceAbsolute =
       ___xmm_ffefffffffffffffffefffffffffffff;
  local_288.SimplificationSettings.SkipAtHullDistanceAsFraction = _UNK_1508ffb58;
  local_368 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l2::<lambda_5>,bool,int>
              ::Call;
  local_358._0_8_ = *(undefined8 *)local_510;
  local_288.Line.Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_288.Line.Origin.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_358._8_8_ = *(undefined8 *)&local_510->field_0x8;
  local_288.Line.Origin.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_288.Line.Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  local_288.SimplificationSettings.MaxHullVertices = -1;
  local_288.Progress = (FProgressCancel *)0x0;
  local_288.Line.Direction.field0_0x0._s_0.X =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  local_288.Line.Direction.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  local_288.NumHullPoints = 0;
  local_288.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.Hull.ArrayNum = 0;
  local_288.Hull.ArrayMax = 0;
  local_288.HullNeighbors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.HullNeighbors.ArrayNum = 0;
  local_288.HullNeighbors.ArrayMax = 0;
  local_288.bSaveTriangleNeighbors = true;
  bVar20 = Solve(&local_288,local_634,&local_358,(TFunctionRef<bool___cdecl(int)> *)&local_368);
  uVar5 = *(undefined8 *)pTVar44;
  uVar7 = *(undefined8 *)&pTVar44->field_0x8;
  if (bVar20) {
    pTVar44 = &local_338;
    local_320 = &local_348;
    local_328 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l168::<lambda_9>,void,TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>_>
                ::Call;
    pTVar32 = (TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>)>
               *)&local_328;
    pTVar28 = &local_288;
    local_348 = pTVar42;
    local_340 = &local_5c0;
    local_338._0_8_ = uVar5;
    local_338._8_8_ = uVar7;
  }
  else {
    pTVar44 = &local_318;
    local_300 = &local_2f8;
    pTVar32 = (TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>)>
               *)&local_308;
    local_308 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l170::<lambda_10>,void,TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>_>
                ::Call;
    pTVar28 = local_5e0;
    local_318._0_8_ = uVar5;
    local_318._8_8_ = uVar7;
    local_2f8 = pTVar42;
    local_2f0 = &local_5c0;
  }
  GetFaces(pTVar28,pTVar32,pTVar44);
  if (local_288.HullNeighbors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.HullNeighbors.AllocatorInstance.Data);
  }
  if (local_288.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Hull.AllocatorInstance.Data);
  }
LAB_1433b13dd:
  if (local_600.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_600.Data);
  }
  if (local_5b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b8.AllocatorInstance.Data);
  }
  if (local_628.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.AllocatorInstance.Data);
  }
  if ((FIndex2i_u_0 *)local_5d8.Data != (FIndex2i_u_0 *)0x0) {
    FMemory::Free(local_5d8.Data);
  }
  local_1d8.HashSize = 0;
  if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1d8.Elements);
  if (local_548.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.AllocatorInstance.Data);
  }
  if (local_508.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.AllocatorInstance.Data);
  }
  if (local_560.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_560.AllocatorInstance.Data);
  }
  if (local_5a8.Sizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a8.Sizes.AllocatorInstance.Data);
  }
  if (local_5a8.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a8.Parents.AllocatorInstance.Data);
  }
  return;
}

// GetSimplifiedFaces @ 1433b1530

void __thiscall
UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces
          (TConvexHull3<double> *this,
          TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>)>
          *param_1,TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2,double param_3,
          double param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ForAnyElementType _Src;
  undefined1 local_res8 [8];
  TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>)>
  *local_res10;
  longlong local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_a0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_90;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_80;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  local_res10 = param_1;
  if ((this->bSaveTriangleNeighbors == false) ||
     ((this->HullNeighbors).ArrayNum != (this->Hull).ArrayNum)) {
    local_res8[0] = 0;
    bVar3 = `UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l3::<lambda_1>::operator()
                      (local_res8);
    if (!bVar3) {
      return;
    }
  }
  local_80._0_8_ = *(undefined8 *)param_2;
  uVar7 = 0;
  local_80._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  GetSimplifiedFaces(this,&local_a0,&local_80,param_3,param_4,&local_90);
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  if (0 < local_a0.ArrayNum) {
    local_b8 = 0;
    uVar9 = uVar7;
    do {
      uVar8 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar8 < local_a0.ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
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
      _Src.Data = local_a0.AllocatorInstance.Data + local_b8;
      uVar4 = *(uint *)(_Src.Data + 0x28);
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      uVar7 = local_a8 >> 0x20;
      local_a8 = local_a8 & 0xffffffff00000000;
      if ((int)uVar7 < (int)uVar4) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar4,&local_b0,0,(int *)((longlong)&local_a8 + 4));
      }
      if (((FScriptContainerElement *)&local_b0 == _Src.Data) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = *(int *)(_Src.Data + 0x28);
      if (iVar6 != 0) {
        iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar6,&local_b0,(int *)&local_a8,(int *)((longlong)&local_a8 + 4));
                    /* WARNING: Load size is inaccurate */
        if (_Src.Data[0x20] != (FScriptContainerElement *)0x0) {
          _Src.Data = _Src.Data[0x20];
        }
        memcpy(local_b0.Data + (longlong)iVar5 * 4,_Src.Data,(longlong)iVar6 << 2);
      }
      uVar4 = 0;
      if ((int)uVar8 < local_90.ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
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
      pFVar1 = local_90.AllocatorInstance.Data + uVar9;
      local_68 = *(undefined4 *)pFVar1;
      uStack_64 = *(undefined4 *)(pFVar1 + 4);
      uStack_60 = *(undefined4 *)(pFVar1 + 8);
      uStack_5c = *(undefined4 *)(pFVar1 + 0xc);
      local_58 = *(undefined8 *)(local_90.AllocatorInstance.Data + uVar9 + 0x10);
      (**(code **)local_res10)(*(undefined8 *)&local_res10->field_0x8,&local_b0,&local_68);
      uVar7 = (ulonglong)(uVar8 + 1);
      local_b8 = local_b8 + 0x30;
      uVar9 = uVar9 + 0x18;
    } while ((int)(uVar8 + 1) < local_a0.ArrayNum);
  }
  iVar6 = local_a0.ArrayNum;
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
    iVar6 = local_a0.ArrayNum;
  }
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
    iVar6 = local_a0.ArrayNum;
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_a0.AllocatorInstance.Data,iVar6);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_a0.AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return;
}

// GetTriangleNeighbors @ 1433b2bd0

TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TConvexHull3<float>::GetTriangleNeighbors(TConvexHull3<float> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->bSaveTriangleNeighbors == false) ||
     ((this->Hull).ArrayNum != (this->HullNeighbors).ArrayNum)) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2612332077319716661>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\CompGeom\\ConvexHull3.h"
                       ,0xcb,"bSaveTriangleNeighbors && Hull.Num() == HullNeighbors.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->HullNeighbors;
}

// GetTriangleNeighbors @ 1433b2c30

TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TConvexHull3<double>::GetTriangleNeighbors(TConvexHull3<double> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->bSaveTriangleNeighbors == false) ||
     ((this->Hull).ArrayNum != (this->HullNeighbors).ArrayNum)) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2612332077319716661>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\CompGeom\\ConvexHull3.h"
                       ,0xcb,"bSaveTriangleNeighbors && Hull.Num() == HullNeighbors.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->HullNeighbors;
}

// GetTriangles @ 1433b2c90

void __thiscall
UE::Geometry::TConvexHull3<float>::GetTriangles
          (TConvexHull3<float> *this,TFunctionRef<void___cdecl(UE::Geometry::FIndex3i)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined4 local_20;
  
  iVar2 = (this->Hull).ArrayNum;
  pFVar3 = (this->Hull).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->Hull).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_20 = *(undefined4 *)(pFVar3 + 8);
    local_28 = *(undefined8 *)pFVar3;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_28);
    pFVar3 = pFVar3 + 0xc;
  }
  return;
}

// GetTriangles @ 1433b2d20

TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TConvexHull3<float>::GetTriangles(TConvexHull3<float> *this)

{
  return &this->Hull;
}

// GetTriangles @ 1433b2d30

void __thiscall
UE::Geometry::TConvexHull3<double>::GetTriangles
          (TConvexHull3<double> *this,TFunctionRef<void___cdecl(UE::Geometry::FIndex3i)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined4 local_20;
  
  iVar2 = (this->Hull).ArrayNum;
  pFVar3 = (this->Hull).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->Hull).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_20 = *(undefined4 *)(pFVar3 + 8);
    local_28 = *(undefined8 *)pFVar3;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_28);
    pFVar3 = pFVar3 + 0xc;
  }
  return;
}

// GetTriangles @ 1433b2dc0

TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TConvexHull3<double>::GetTriangles(TConvexHull3<double> *this)

{
  return &this->Hull;
}

// IsSolutionAvailable @ 1433bc620

bool __thiscall UE::Geometry::TConvexHull3<float>::IsSolutionAvailable(TConvexHull3<float> *this)

{
  return this->Dimension == 3;
}

// IsSolutionAvailable @ 1433bc630

bool __thiscall UE::Geometry::TConvexHull3<double>::IsSolutionAvailable(TConvexHull3<double> *this)

{
  return this->Dimension == 3;
}

// MoveTriangles @ 1433c08c0

TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TConvexHull3<float>::MoveTriangles(TConvexHull3<float> *this)

{
  return &this->Hull;
}

// MoveTriangles @ 1433c08d0

TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TConvexHull3<double>::MoveTriangles(TConvexHull3<double> *this)

{
  return &this->Hull;
}

// Solve @ 1433cf700

bool __thiscall
UE::Geometry::TConvexHull3<float>::Solve
          (TConvexHull3<float> *this,int param_1,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_2)

{
  bool bVar1;
  undefined1 local_res18 [16];
  code *local_28;
  undefined1 *local_20;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> local_18;
  
  local_20 = local_res18;
  local_28 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::Solve'::__l2::<lambda_1>,bool,int>
             ::Call;
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  bVar1 = Solve(this,param_1,&local_18,(TFunctionRef<bool___cdecl(int)> *)&local_28);
  return bVar1;
}

// Solve @ 1433cf750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TConvexHull3<float>::Solve
          (TConvexHull3<float> *this,int param_1,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_2,
          TFunctionRef<bool___cdecl(int)> *param_3)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  FProgressCancel *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  int iVar17;
  longlong *plVar18;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar19;
  float fVar20;
  undefined1 auStackY_318 [32];
  int local_2b8;
  int iStack_2b4;
  int local_2b0;
  int local_2ac;
  int iStack_2a8;
  int local_2a4;
  int local_2a0;
  int iStack_29c;
  int local_298;
  int local_294;
  int iStack_290;
  int local_28c;
  int local_288 [2];
  int local_280 [2];
  int local_278 [2];
  int local_270 [2];
  int local_268 [2];
  int local_260 [2];
  uint local_258 [2];
  int local_250;
  TFunctionRef<bool___cdecl(int)> *local_248;
  uint local_240;
  int iStack_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  int iStack_21c;
  float fStack_1ec;
  undefined4 uStack_1e8;
  TFunctionRef<bool___cdecl(int)> local_1e0;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> local_1d0;
  TFunctionRef<bool___cdecl(int)> local_1c0;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> local_1b0;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> local_1a0;
  undefined1 local_190 [16];
  TVector<float> local_180;
  TVector<float> local_174;
  TVector<float> local_168;
  TVector<float> local_15c;
  TExtremePoints3<float> local_148;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  double local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_318;
  piVar1 = &(this->Hull).ArrayMax;
  (this->Hull).ArrayNum = 0;
  local_248 = param_3;
  if ((this->Hull).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Hull).AllocatorInstance,0,piVar1);
  }
  this->NumHullPoints = 0;
  local_1e0._0_8_ = *(undefined8 *)param_3;
  local_1e0._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_1d0._0_8_ = *(undefined8 *)param_2;
  local_1d0._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_148.Dimension = 0;
  local_148.Extreme[0] = 0;
  local_148.Extreme[1] = 0;
  local_148.Extreme[2] = 0;
  local_148.Basis[0].field0_0x0._0_8_ = 0;
  local_148.Basis._8_8_ = 0;
  local_148._16_8_ = 0;
  local_148.Origin.field0_0x0._4_8_ = 0;
  local_148.Basis[1].field0_0x0._4_8_ = 0;
  local_148.Basis[2].field0_0x0._0_8_ = 0;
  local_148.Basis[2].field0_0x0._s_0.Z = 0.0;
  TExtremePoints3<float>::Init(&local_148,param_1,&local_1d0,&local_1e0,__real_34000000);
  this->Dimension = local_148.Dimension;
  if (local_148.Dimension < 3) {
    if (local_148.Dimension == 1) {
      fStack_1ec = (float)local_148.Basis[0].field0_0x0._0_8_;
      uStack_1e8 = (undefined4)((ulonglong)local_148.Basis[0].field0_0x0._0_8_ >> 0x20);
      bVar10 = false;
      (this->Line).Origin.field0_0x0._s_0.X = local_148.Origin.field0_0x0._s_0.X;
      (this->Line).Origin.field0_0x0._s_0.Y = local_148.Origin.field0_0x0._s_0.Y;
      (this->Line).Origin.field0_0x0._s_0.Z = local_148.Origin.field0_0x0._s_0.Z;
      (this->Line).Direction.field0_0x0._s_0.X = fStack_1ec;
      *(ulonglong *)((longlong)&(this->Line).Direction.field0_0x0 + 4) =
           CONCAT44(local_148.Basis[0].field0_0x0._s_0.Z,uStack_1e8);
    }
    else if (local_148.Dimension == 2) {
      bVar10 = false;
      (this->Plane).Normal.field0_0x0._s_0.X = local_148.Basis[2].field0_0x0._s_0.X;
      (this->Plane).Normal.field0_0x0._s_0.Y = local_148.Basis[2].field0_0x0._s_0.Y;
      (this->Plane).Normal.field0_0x0._s_0.Z = local_148.Basis[2].field0_0x0._s_0.Z;
      (this->Plane).Constant =
           local_148.Basis[2].field0_0x0._s_0.Y * local_148.Origin.field0_0x0._s_0.Y +
           local_148.Basis[2].field0_0x0._s_0.X * local_148.Origin.field0_0x0._s_0.X +
           local_148.Basis[2].field0_0x0._s_0.Z * local_148.Origin.field0_0x0._s_0.Z;
    }
    else {
LAB_1433d022a:
      bVar10 = false;
    }
  }
  else {
    iVar13 = local_148.Extreme[3];
    local_288[0] = local_148.Extreme[3];
    (**(code **)param_2)(&local_180,*(undefined8 *)&param_2->field_0x8,local_288);
    iVar14 = local_148.Extreme[2];
    local_280[0] = local_148.Extreme[2];
    (**(code **)param_2)(&local_174,*(undefined8 *)&param_2->field_0x8,local_280);
    iVar9 = local_148.Extreme[1];
    local_278[0] = local_148.Extreme[1];
    (**(code **)param_2)(&local_168,*(undefined8 *)&param_2->field_0x8,local_278);
    iVar17 = local_148.Extreme[0];
    local_270[0] = local_148.Extreme[0];
    (**(code **)param_2)(&local_15c,*(undefined8 *)&param_2->field_0x8,local_270);
    fVar20 = ExactPredicates::Orient3<float>(&local_15c,&local_168,&local_174,&local_180);
    if (fVar20 == 0.0) {
      this->Dimension = 2;
      bVar10 = false;
      (this->Plane).Normal.field0_0x0._s_0.X = local_148.Basis[2].field0_0x0._s_0.X;
      (this->Plane).Normal.field0_0x0._s_0.Y = local_148.Basis[2].field0_0x0._s_0.Y;
      (this->Plane).Normal.field0_0x0._s_0.Z = local_148.Basis[2].field0_0x0._s_0.Z;
      (this->Plane).Constant =
           local_148.Basis[2].field0_0x0._s_0.Y * local_148.Origin.field0_0x0._s_0.Y +
           local_148.Basis[2].field0_0x0._s_0.X * local_148.Origin.field0_0x0._s_0.X +
           local_148.Basis[2].field0_0x0._s_0.Z * local_148.Origin.field0_0x0._s_0.Z;
    }
    else {
      pFVar3 = (this->Hull).AllocatorInstance.Data;
      local_294 = iVar9;
      iStack_290 = iVar14;
      local_28c = iVar13;
      if (((pFVar3 <= (FScriptContainerElement *)&local_294) &&
          ((FScriptContainerElement *)&local_294 < pFVar3 + (longlong)*piVar1 * 0xc)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      iVar12 = (this->Hull).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&(this->Hull).AllocatorInstance,piVar1);
      }
      (this->Hull).ArrayNum = iVar12 + 1;
      pFVar3 = (this->Hull).AllocatorInstance.Data;
      local_2b8 = iVar17;
      iStack_2b4 = iVar13;
      local_2b0 = iVar14;
      *(ulonglong *)(pFVar3 + (longlong)iVar12 * 0xc) = CONCAT44(iStack_290,local_294);
      *(int *)(pFVar3 + (longlong)iVar12 * 0xc + 8) = local_28c;
      pFVar3 = (this->Hull).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_2b8) &&
          ((FScriptContainerElement *)&local_2b8 < pFVar3 + (longlong)*piVar1 * 0xc)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      iVar12 = (this->Hull).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&(this->Hull).AllocatorInstance,piVar1);
      }
      (this->Hull).ArrayNum = iVar12 + 1;
      pFVar3 = (this->Hull).AllocatorInstance.Data;
      local_2ac = iVar17;
      iStack_2a8 = iVar9;
      local_2a4 = iVar13;
      *(ulonglong *)(pFVar3 + (longlong)iVar12 * 0xc) = CONCAT44(iStack_2b4,local_2b8);
      *(int *)(pFVar3 + (longlong)iVar12 * 0xc + 8) = local_2b0;
      pFVar3 = (this->Hull).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_2ac) &&
          ((FScriptContainerElement *)&local_2ac < pFVar3 + (longlong)*piVar1 * 0xc)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      iVar13 = (this->Hull).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&(this->Hull).AllocatorInstance,piVar1);
      }
      (this->Hull).ArrayNum = iVar13 + 1;
      pFVar3 = (this->Hull).AllocatorInstance.Data;
      local_2a0 = iVar17;
      iStack_29c = iVar14;
      local_298 = iVar9;
      *(ulonglong *)(pFVar3 + (longlong)iVar13 * 0xc) = CONCAT44(iStack_2a8,local_2ac);
      *(int *)(pFVar3 + (longlong)iVar13 * 0xc + 8) = local_2a4;
      pFVar3 = (this->Hull).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_2a0) &&
          ((FScriptContainerElement *)&local_2a0 < pFVar3 + (longlong)*piVar1 * 0xc)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      iVar14 = (this->Hull).ArrayNum;
      if (iVar14 == *piVar1) {
        iVar14 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&(this->Hull).AllocatorInstance,piVar1);
      }
      (this->Hull).ArrayNum = iVar14 + 1;
      pFVar3 = (this->Hull).AllocatorInstance.Data;
      *(ulonglong *)(pFVar3 + (longlong)iVar14 * 0xc) = CONCAT44(iStack_29c,local_2a0);
      *(int *)(pFVar3 + (longlong)iVar14 * 0xc + 8) = local_298;
      iVar14 = (this->SimplificationSettings).MaxHullVertices;
      fVar20 = (this->SimplificationSettings).DegenerateEdgeTolerance;
      fVar2 = (this->SimplificationSettings).SkipAtHullDistanceAbsolute;
      this->NumHullPoints = 4;
      if (iVar14 < 1) {
        iVar14 = param_1;
      }
      local_f8._0_8_ = (FScriptContainerElement *)0x0;
      local_f8._8_4_ = 0;
      local_f8._12_4_ = 0;
      local_f8._16_8_ = (FVisiblePoints *)0x0;
      local_f8._24_4_ = 0;
      local_f8._28_4_ = 0;
      local_d8._0_8_ = (FScriptContainerElement *)0x0;
      local_d8._8_8_ = 0;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      local_ac = 0x80;
      local_a8 = 0xffffffff;
      local_a4 = 0;
      local_98 = (ForElementType<FSetElementId>)0x0;
      local_90 = 0;
      dVar7 = (double)fVar2;
      local_88 = dVar7;
      local_250 = iVar14;
      if (0.0 < (this->SimplificationSettings).SkipAtHullDistanceAsFraction) {
        local_268[0] = iVar17;
        (**(code **)param_2)(&local_238,*(undefined8 *)&param_2->field_0x8,local_268);
        local_260[0] = iVar9;
        (**(code **)param_2)(&local_22c,*(undefined8 *)&param_2->field_0x8,local_260);
        local_88 = (double)SQRT((local_234 - local_228) * (local_234 - local_228) +
                                (local_238 - local_22c) * (local_238 - local_22c) +
                                (local_230 - local_224) * (local_230 - local_224)) *
                   (double)(this->SimplificationSettings).SkipAtHullDistanceAsFraction;
        if (local_88 <= dVar7) {
          local_88 = dVar7;
        }
      }
      FHullConnectivity<float>::BuildNeighbors((FHullConnectivity<float> *)local_f8,&this->Hull);
      local_1c0._0_8_ = *(undefined8 *)local_248;
      local_1c0._8_8_ = *(undefined8 *)&local_248->field_0x8;
      local_1b0._0_8_ = *(undefined8 *)param_2;
      local_1b0._8_8_ = *(undefined8 *)&param_2->field_0x8;
      FHullConnectivity<float>::InitVisibility
                ((FHullConnectivity<float> *)local_f8,&this->Hull,param_1,&local_1b0,&local_1c0);
      iVar17 = this->NumHullPoints;
      if (iVar17 < iVar14) {
        do {
          pFVar4 = this->Progress;
          if ((pFVar4 != (FProgressCancel *)0x0) && (iVar17 == (iVar17 / 100) * 100)) {
            if (pFVar4->WasCancelled == false) {
              Core::Private::Function::CheckCallable(*(void **)&pFVar4->CancelF);
              plVar5 = *(longlong **)&(pFVar4->CancelF).field_0x28;
              pcVar6 = *(code **)&pFVar4->CancelF;
              plVar18 = (longlong *)&(pFVar4->CancelF).field_0x10;
              if (plVar5 != (longlong *)0x0) {
                plVar18 = plVar5;
              }
              uVar16 = (**(code **)(*plVar18 + 8))();
              bVar10 = (bool)(*pcVar6)(uVar16);
              pFVar4->WasCancelled = bVar10;
              if (bVar10 == false) goto LAB_1433cff53;
            }
            local_90 = 0;
            if (local_98 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_98);
            }
            iVar17 = SUB84(local_d8._8_8_,4);
            local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
            if (iVar17 != 0) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
            }
            local_a8 = 0xffffffff;
            local_a4 = 0;
            local_b0 = 0;
            if (0x80 < local_ac) {
              local_ac = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
            }
            if (local_b8 != (void *)0x0) {
              FMemory::Free(local_b8);
            }
            if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_d8._0_8_);
            }
            DestructItems<UE::Geometry::FHullConnectivity<float>::FVisiblePoints,int>
                      ((FVisiblePoints *)local_f8._16_8_,local_f8._24_4_);
            if ((FVisiblePoints *)local_f8._16_8_ != (FVisiblePoints *)0x0) {
              FMemory::Free((void *)local_f8._16_8_);
            }
            if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_f8._0_8_);
            }
            goto LAB_1433d022a;
          }
LAB_1433cff53:
          FHullConnectivity<float>::ChooseVisiblePoint
                    ((FHullConnectivity<float> *)local_f8,SUB81(&local_240,0));
          uVar8 = local_240;
          iStack_21c = iStack_23c;
          if (local_240 == 0xffffffff) break;
          this->NumHullPoints = this->NumHullPoints + 1;
          local_1a0._0_8_ = *(undefined8 *)param_2;
          local_1a0._8_8_ = *(undefined8 *)&param_2->field_0x8;
          bVar10 = FHullConnectivity<float>::UpdateHullWithNewPoint
                             ((FHullConnectivity<float> *)local_f8,&this->Hull,param_1,&local_1a0,
                              local_240,iStack_23c,fVar20 * fVar20);
          if (!bVar10) {
            local_248 = *(TFunctionRef<bool___cdecl(int)> **)&param_2->field_0x8;
            uVar16 = *(undefined8 *)param_2;
            uVar15 = 0;
            if ((int)uVar8 < (int)local_f8._24_4_) {
              uVar15 = ~uVar8 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar11 = (*pcVar6)();
              return (bool)uVar11;
            }
            local_190._8_8_ = local_248;
            local_190._0_8_ = uVar16;
            FHullConnectivity<float>::FVisiblePoints::RemovePt
                      ((FVisiblePoints *)(local_f8._16_8_ + (longlong)(int)uVar8 * 0x40),iStack_21c,
                       (TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *)local_190);
            uVar15 = 0;
            if ((int)uVar8 < (int)local_f8._24_4_) {
              uVar15 = ~uVar8 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar11 = (*pcVar6)();
              return (bool)uVar11;
            }
            if (*(int *)(local_f8._16_8_ + (longlong)(int)uVar8 * 0x40 + 8) == 0) {
              local_258[0] = uVar8;
              if (local_d8._8_4_ != local_a4) {
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_d8,uVar8,
                           (int *)local_258);
              }
            }
          }
          iVar17 = this->NumHullPoints;
        } while (iVar17 < local_250);
      }
      if ((this->bSaveTriangleNeighbors != false) &&
         (pTVar19 = &this->HullNeighbors,
         pTVar19 != (TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)local_f8)) {
        pFVar3 = (pTVar19->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar19->AllocatorInstance).Data = (FScriptContainerElement *)local_f8._0_8_;
        (this->HullNeighbors).ArrayNum = local_f8._8_4_;
        (this->HullNeighbors).ArrayMax = local_f8._12_4_;
        local_f8._8_4_ = 0;
        local_f8._12_4_ = 0;
        local_f8._0_8_ = (FScriptContainerElement *)0x0;
      }
      local_90 = 0;
      if (local_98 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98);
      }
      bVar10 = local_d8._12_4_ != 0;
      local_d8._8_8_ = (ulonglong)(uint)local_d8._12_4_ << 0x20;
      if (bVar10) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
      }
      local_a8 = 0xffffffff;
      local_a4 = 0;
      local_b0 = 0;
      if (0x80 < local_ac) {
        local_ac = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
      }
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_d8._0_8_);
      }
      DestructItems<UE::Geometry::FHullConnectivity<float>::FVisiblePoints,int>
                ((FVisiblePoints *)local_f8._16_8_,local_f8._24_4_);
      if ((FVisiblePoints *)local_f8._16_8_ != (FVisiblePoints *)0x0) {
        FMemory::Free((void *)local_f8._16_8_);
      }
      if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_f8._0_8_);
      }
      bVar10 = true;
    }
  }
  return bVar10;
}

// Solve @ 1433d0360

bool __thiscall
UE::Geometry::TConvexHull3<double>::Solve
          (TConvexHull3<double> *this,int param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2)

{
  bool bVar1;
  undefined1 local_res18 [16];
  code *local_28;
  undefined1 *local_20;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_18;
  
  local_20 = local_res18;
  local_28 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::Solve'::__l2::<lambda_1>,bool,int>
             ::Call;
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  bVar1 = Solve(this,param_1,&local_18,(TFunctionRef<bool___cdecl(int)> *)&local_28);
  return bVar1;
}

// Solve @ 1433d03b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TConvexHull3<double>::Solve
          (TConvexHull3<double> *this,int param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2,
          TFunctionRef<bool___cdecl(int)> *param_3)

{
  int *piVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  FProgressCancel *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  longlong *plVar17;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStackY_388 [32];
  int local_328;
  int iStack_324;
  int local_320;
  int local_31c;
  int iStack_318;
  int local_314;
  int local_310;
  int iStack_30c;
  int local_308;
  int local_304;
  int iStack_300;
  int local_2fc;
  int local_2f8 [2];
  int local_2f0 [2];
  int local_2e8 [2];
  int local_2e0 [2];
  int local_2d8 [2];
  int local_2d0 [2];
  uint local_2c8 [2];
  int local_2c0;
  TFunctionRef<bool___cdecl(int)> *local_2b8;
  uint local_2b0;
  int iStack_2ac;
  int iStack_2a4;
  TFunctionRef<bool___cdecl(int)> local_2a0;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_290;
  TFunctionRef<bool___cdecl(int)> local_280;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_270;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_260;
  undefined1 local_250 [16];
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  TVector<double> local_1e0;
  TVector<double> local_1c8;
  TVector<double> local_1b0;
  TVector<double> local_198;
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  void *local_138;
  undefined4 local_130;
  uint local_12c;
  undefined4 local_128;
  int local_124;
  ForElementType<FSetElementId> local_118;
  int local_110;
  double local_108;
  TExtremePoints3<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_388;
  pTVar18 = &this->Hull;
  piVar1 = &(this->Hull).ArrayMax;
  (this->Hull).ArrayNum = 0;
  local_2b8 = param_3;
  if ((this->Hull).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&pTVar18->AllocatorInstance,0,piVar1);
  }
  this->NumHullPoints = 0;
  local_2a0._0_8_ = *(undefined8 *)param_3;
  local_2a0._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_290._0_8_ = *(undefined8 *)param_2;
  local_290._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_f8.Dimension = 0;
  local_f8.Extreme[0] = 0;
  local_f8.Extreme[1] = 0;
  local_f8.Extreme[2] = 0;
  local_f8.Origin.field0_0x0._s_0.Y = 0.0;
  local_f8.Origin.field0_0x0._s_0.Z = 0.0;
  local_f8.Basis[0].field0_0x0._s_0.Z = 0.0;
  local_f8.Basis[1].field0_0x0._s_0.X = 0.0;
  local_f8.Basis[2].field0_0x0._s_0.X = 0.0;
  local_f8.Basis[2].field0_0x0._s_0.Y = 0.0;
  local_f8.Origin.field0_0x0._s_0.X = 0.0;
  local_f8.Basis[2].field0_0x0._s_0.Z = 0.0;
  local_f8.Extreme[3] = 0;
  local_f8.Basis[0].field0_0x0._s_0.X = 0.0;
  local_f8.Basis[0].field0_0x0._s_0.Y = 0.0;
  local_f8.Basis[1].field0_0x0._s_0.Y = 0.0;
  local_f8.Basis[1].field0_0x0._s_0.Z = 0.0;
  TExtremePoints3<double>::Init(&local_f8,param_1,&local_290,&local_2a0,__real_3cb0000000000000);
  iVar13 = local_f8.Extreme[3];
  this->Dimension = local_f8.Dimension;
  if (local_f8.Dimension < 3) {
    if (local_f8.Dimension == 1) {
      bVar10 = false;
      (this->Line).Origin.field0_0x0._s_0.X = local_f8.Origin.field0_0x0._s_0.X;
      (this->Line).Origin.field0_0x0._s_0.Y = local_f8.Origin.field0_0x0._s_0.Y;
      local_1f8 = SUB84(local_f8.Basis[0].field0_0x0._s_0.X,0);
      uStack_1f4 = (undefined4)((ulonglong)local_f8.Basis[0].field0_0x0._0_8_ >> 0x20);
      *(undefined4 *)((longlong)&(this->Line).Origin.field0_0x0 + 0x10) =
           local_f8.Origin.field0_0x0._16_4_;
      *(undefined4 *)((longlong)&(this->Line).Origin.field0_0x0 + 0x14) =
           local_f8.Origin.field0_0x0._20_4_;
      *(undefined4 *)&(this->Line).Direction.field0_0x0 = local_1f8;
      *(undefined4 *)((longlong)&(this->Line).Direction.field0_0x0 + 4) = uStack_1f4;
      *(undefined4 *)((longlong)&(this->Line).Direction.field0_0x0 + 8) =
           local_f8.Basis[0].field0_0x0._8_4_;
      *(undefined4 *)((longlong)&(this->Line).Direction.field0_0x0 + 0xc) =
           local_f8.Basis[0].field0_0x0._12_4_;
      *(int *)((longlong)&(this->Line).Direction.field0_0x0 + 0x10) =
           SUB84(local_f8.Basis[0].field0_0x0._s_0.Z,0);
      *(int *)((longlong)&(this->Line).Direction.field0_0x0 + 0x14) =
           (int)((ulonglong)local_f8.Basis[0].field0_0x0._16_8_ >> 0x20);
    }
    else if (local_f8.Dimension == 2) {
      bVar10 = false;
      (this->Plane).Normal.field0_0x0._s_0.X = local_f8.Basis[2].field0_0x0._s_0.X;
      (this->Plane).Normal.field0_0x0._s_0.Y = local_f8.Basis[2].field0_0x0._s_0.Y;
      (this->Plane).Normal.field0_0x0._s_0.Z = local_f8.Basis[2].field0_0x0._s_0.Z;
      (this->Plane).Constant =
           local_f8.Basis[2].field0_0x0._s_0.Y * local_f8.Origin.field0_0x0._s_0.Y +
           local_f8.Basis[2].field0_0x0._s_0.X * local_f8.Origin.field0_0x0._s_0.X +
           local_f8.Basis[2].field0_0x0._s_0.Z * local_f8.Origin.field0_0x0._s_0.Z;
    }
    else {
LAB_1433d0e84:
      bVar10 = false;
    }
  }
  else {
    local_2f8[0] = local_f8.Extreme[3];
    (**(code **)param_2)(&local_1e0,*(undefined8 *)&param_2->field_0x8,local_2f8);
    iVar9 = local_f8.Extreme[2];
    local_2f0[0] = local_f8.Extreme[2];
    (**(code **)param_2)(&local_1c8,*(undefined8 *)&param_2->field_0x8,local_2f0);
    iVar8 = local_f8.Extreme[1];
    local_2e8[0] = local_f8.Extreme[1];
    (**(code **)param_2)(&local_1b0,*(undefined8 *)&param_2->field_0x8,local_2e8);
    iVar16 = local_f8.Extreme[0];
    local_2e0[0] = local_f8.Extreme[0];
    (**(code **)param_2)(&local_198,*(undefined8 *)&param_2->field_0x8,local_2e0);
    dVar20 = ExactPredicates::Orient3<double>(&local_198,&local_1b0,&local_1c8,&local_1e0);
    if (dVar20 == 0.0) {
      bVar10 = false;
      this->Dimension = 2;
      (this->Plane).Normal.field0_0x0._s_0.X = local_f8.Basis[2].field0_0x0._s_0.X;
      (this->Plane).Normal.field0_0x0._s_0.Y = local_f8.Basis[2].field0_0x0._s_0.Y;
      (this->Plane).Normal.field0_0x0._s_0.Z = local_f8.Basis[2].field0_0x0._s_0.Z;
      (this->Plane).Constant =
           local_f8.Basis[2].field0_0x0._s_0.Y * local_f8.Origin.field0_0x0._s_0.Y +
           local_f8.Basis[2].field0_0x0._s_0.X * local_f8.Origin.field0_0x0._s_0.X +
           local_f8.Basis[2].field0_0x0._s_0.Z * local_f8.Origin.field0_0x0._s_0.Z;
    }
    else {
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      local_304 = iVar8;
      iStack_300 = iVar9;
      local_2fc = iVar13;
      if (((pFVar3 <= (FScriptContainerElement *)&local_304) &&
          ((FScriptContainerElement *)&local_304 < pFVar3 + (longlong)*piVar1 * 0xc)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      iVar12 = (this->Hull).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTVar18->AllocatorInstance,piVar1);
      }
      (this->Hull).ArrayNum = iVar12 + 1;
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      local_328 = iVar16;
      iStack_324 = iVar13;
      local_320 = iVar9;
      *(ulonglong *)(pFVar3 + (longlong)iVar12 * 0xc) = CONCAT44(iStack_300,local_304);
      *(int *)(pFVar3 + (longlong)iVar12 * 0xc + 8) = local_2fc;
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_328) &&
          ((FScriptContainerElement *)&local_328 < pFVar3 + (longlong)*piVar1 * 0xc)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      iVar12 = (this->Hull).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTVar18->AllocatorInstance,piVar1);
      }
      (this->Hull).ArrayNum = iVar12 + 1;
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      local_31c = iVar16;
      iStack_318 = iVar8;
      local_314 = iVar13;
      *(ulonglong *)(pFVar3 + (longlong)iVar12 * 0xc) = CONCAT44(iStack_324,local_328);
      *(int *)(pFVar3 + (longlong)iVar12 * 0xc + 8) = local_320;
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_31c) &&
          ((FScriptContainerElement *)&local_31c < pFVar3 + (longlong)*piVar1 * 0xc)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      iVar13 = (this->Hull).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTVar18->AllocatorInstance,piVar1);
      }
      (this->Hull).ArrayNum = iVar13 + 1;
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      local_310 = iVar16;
      iStack_30c = iVar9;
      local_308 = iVar8;
      *(ulonglong *)(pFVar3 + (longlong)iVar13 * 0xc) = CONCAT44(iStack_318,local_31c);
      *(int *)(pFVar3 + (longlong)iVar13 * 0xc + 8) = local_314;
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_310) &&
          ((FScriptContainerElement *)&local_310 < pFVar3 + (longlong)*piVar1 * 0xc)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      iVar13 = (this->Hull).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTVar18->AllocatorInstance,piVar1);
      }
      (this->Hull).ArrayNum = iVar13 + 1;
      pFVar3 = (pTVar18->AllocatorInstance).Data;
      *(ulonglong *)(pFVar3 + (longlong)iVar13 * 0xc) = CONCAT44(iStack_30c,local_310);
      *(int *)(pFVar3 + (longlong)iVar13 * 0xc + 8) = local_308;
      iVar13 = (this->SimplificationSettings).MaxHullVertices;
      dVar20 = (this->SimplificationSettings).DegenerateEdgeTolerance;
      dVar2 = (this->SimplificationSettings).SkipAtHullDistanceAbsolute;
      uVar19 = SUB84(dVar2,0);
      uVar24 = (undefined4)((ulonglong)dVar2 >> 0x20);
      this->NumHullPoints = 4;
      if (iVar13 < 1) {
        iVar13 = param_1;
      }
      local_178._0_8_ = (FScriptContainerElement *)0x0;
      local_178._8_4_ = 0;
      local_178._12_4_ = 0;
      local_178._16_8_ = (FVisiblePoints *)0x0;
      local_178._24_4_ = 0;
      local_178._28_4_ = 0;
      local_158._0_8_ = (FScriptContainerElement *)0x0;
      local_158._8_8_ = 0;
      local_138 = (void *)0x0;
      local_130 = 0;
      local_12c = 0x80;
      local_128 = 0xffffffff;
      local_124 = 0;
      local_118 = (ForElementType<FSetElementId>)0x0;
      local_110 = 0;
      local_2c0 = iVar13;
      if (0.0 < (this->SimplificationSettings).SkipAtHullDistanceAsFraction) {
        local_2d8[0] = iVar16;
        (**(code **)param_2)(&local_240,*(undefined8 *)&param_2->field_0x8,local_2d8);
        local_2d0[0] = iVar8;
        (**(code **)param_2)(&local_228,*(undefined8 *)&param_2->field_0x8,local_2d0);
        auVar22._0_8_ = (local_230 - local_218) * (local_230 - local_218);
        auVar22._8_8_ = 0;
        auVar23._8_8_ = 0;
        auVar23._0_8_ =
             (local_238 - local_220) * (local_238 - local_220) +
             (local_240 - local_228) * (local_240 - local_228) + auVar22._0_8_;
        auVar23 = sqrtpd(auVar22,auVar23);
        dVar21 = auVar23._0_8_ * (this->SimplificationSettings).SkipAtHullDistanceAsFraction;
        if (dVar21 <= dVar2) {
          dVar21 = dVar2;
        }
        uVar19 = SUB84(dVar21,0);
        uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
      }
      local_108 = (double)CONCAT44(uVar24,uVar19);
      FHullConnectivity<double>::BuildNeighbors((FHullConnectivity<double> *)local_178,pTVar18);
      local_280._0_8_ = *(undefined8 *)local_2b8;
      local_280._8_8_ = *(undefined8 *)&local_2b8->field_0x8;
      local_270._0_8_ = *(undefined8 *)param_2;
      local_270._8_8_ = *(undefined8 *)&param_2->field_0x8;
      FHullConnectivity<double>::InitVisibility
                ((FHullConnectivity<double> *)local_178,pTVar18,param_1,&local_270,&local_280);
      iVar16 = this->NumHullPoints;
      if (iVar16 < iVar13) {
        do {
          pFVar4 = this->Progress;
          if ((pFVar4 != (FProgressCancel *)0x0) && (iVar16 == (iVar16 / 100) * 100)) {
            if (pFVar4->WasCancelled == false) {
              Core::Private::Function::CheckCallable(*(void **)&pFVar4->CancelF);
              plVar5 = *(longlong **)&(pFVar4->CancelF).field_0x28;
              pcVar6 = *(code **)&pFVar4->CancelF;
              plVar17 = (longlong *)&(pFVar4->CancelF).field_0x10;
              if (plVar5 != (longlong *)0x0) {
                plVar17 = plVar5;
              }
              uVar15 = (**(code **)(*plVar17 + 8))();
              bVar10 = (bool)(*pcVar6)(uVar15);
              pFVar4->WasCancelled = bVar10;
              if (bVar10 == false) goto LAB_1433d0bb1;
            }
            local_110 = 0;
            if (local_118 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_118);
            }
            iVar13 = SUB84(local_158._8_8_,4);
            local_158._8_8_ = local_158._8_8_ & 0xffffffff00000000;
            if (iVar13 != 0) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,0,(ForAnyElementType *)local_158,0,(int *)(local_158 + 0xc));
            }
            local_128 = 0xffffffff;
            local_124 = 0;
            local_130 = 0;
            if (0x80 < local_12c) {
              local_12c = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10),0);
            }
            if (local_138 != (void *)0x0) {
              FMemory::Free(local_138);
            }
            if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_158._0_8_);
            }
            DestructItems<UE::Geometry::FHullConnectivity<double>::FVisiblePoints,int>
                      ((FVisiblePoints *)local_178._16_8_,local_178._24_4_);
            if ((FVisiblePoints *)local_178._16_8_ != (FVisiblePoints *)0x0) {
              FMemory::Free((void *)local_178._16_8_);
            }
            if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_178._0_8_);
            }
            goto LAB_1433d0e84;
          }
LAB_1433d0bb1:
          FHullConnectivity<double>::ChooseVisiblePoint
                    ((FHullConnectivity<double> *)local_178,SUB81(&local_2b0,0));
          uVar7 = local_2b0;
          iStack_2a4 = iStack_2ac;
          if (local_2b0 == 0xffffffff) break;
          this->NumHullPoints = this->NumHullPoints + 1;
          local_260._0_8_ = *(undefined8 *)param_2;
          local_260._8_8_ = *(undefined8 *)&param_2->field_0x8;
          bVar10 = FHullConnectivity<double>::UpdateHullWithNewPoint
                             ((FHullConnectivity<double> *)local_178,pTVar18,param_1,&local_260,
                              local_2b0,iStack_2ac,dVar20 * dVar20);
          if (!bVar10) {
            local_2b8 = *(TFunctionRef<bool___cdecl(int)> **)&param_2->field_0x8;
            uVar15 = *(undefined8 *)param_2;
            uVar14 = 0;
            if ((int)uVar7 < (int)local_178._24_4_) {
              uVar14 = ~uVar7 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar11 = (*pcVar6)();
              return (bool)uVar11;
            }
            local_250._8_8_ = local_2b8;
            local_250._0_8_ = uVar15;
            FHullConnectivity<double>::FVisiblePoints::RemovePt
                      ((FVisiblePoints *)(local_178._16_8_ + (longlong)(int)uVar7 * 0x40),iStack_2a4
                       ,(TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)local_250);
            uVar14 = 0;
            if ((int)uVar7 < (int)local_178._24_4_) {
              uVar14 = ~uVar7 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar11 = (*pcVar6)();
              return (bool)uVar11;
            }
            if (*(int *)(local_178._16_8_ + (longlong)(int)uVar7 * 0x40 + 8) == 0) {
              local_2c8[0] = uVar7;
              if (local_158._8_4_ != local_124) {
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_158,uVar7,
                           (int *)local_2c8);
              }
            }
          }
          iVar16 = this->NumHullPoints;
        } while (iVar16 < local_2c0);
      }
      if ((this->bSaveTriangleNeighbors != false) &&
         (pTVar18 = &this->HullNeighbors,
         pTVar18 != (TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)local_178)) {
        pFVar3 = (pTVar18->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar18->AllocatorInstance).Data = (FScriptContainerElement *)local_178._0_8_;
        (this->HullNeighbors).ArrayNum = local_178._8_4_;
        (this->HullNeighbors).ArrayMax = local_178._12_4_;
        local_178._8_4_ = 0;
        local_178._12_4_ = 0;
        local_178._0_8_ = (FScriptContainerElement *)0x0;
      }
      local_110 = 0;
      if (local_118 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_118);
      }
      bVar10 = local_158._12_4_ != 0;
      local_158._8_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
      if (bVar10) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_158,0,(int *)(local_158 + 0xc));
      }
      local_128 = 0xffffffff;
      local_124 = 0;
      local_130 = 0;
      if (0x80 < local_12c) {
        local_12c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10),0);
      }
      if (local_138 != (void *)0x0) {
        FMemory::Free(local_138);
      }
      if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_158._0_8_);
      }
      DestructItems<UE::Geometry::FHullConnectivity<double>::FVisiblePoints,int>
                ((FVisiblePoints *)local_178._16_8_,local_178._24_4_);
      if ((FVisiblePoints *)local_178._16_8_ != (FVisiblePoints *)0x0) {
        FMemory::Free((void *)local_178._16_8_);
      }
      if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_178._0_8_);
      }
      bVar10 = true;
    }
  }
  return bVar10;
}

// WalkBorder @ 1433e1750

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Geometry::TConvexHull3<float>::WalkBorder
          (TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_2,
          TFunctionRef<bool___cdecl(int)> *param_3,int param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5)

{
  void *_Dst;
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  FVisit FVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint local_res10 [2];
  TFunctionRef<bool___cdecl(int)> *local_res18;
  FVisit local_98;
  undefined8 local_90;
  uint local_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  TArray<bool,TSizedDefaultAllocator<32>_> local_78;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_68;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  local_res18 = param_3;
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Triangles.Num() == TriangleNeighbors.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexHull3.cpp"
                         ,0x5b9,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_68 = param_1;
  local_60 = param_2;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_78,param_1->ArrayNum,Default);
  local_98.Tri = 0;
  local_98.Edge = '\0';
  local_98._5_3_ = 0;
  iVar11 = param_1->ArrayNum;
  local_90 = 0;
  uVar15 = iVar11 / 3 + (iVar11 >> 0x1f) +
           (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f);
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (0 < (int)uVar15) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar15,(ForAnyElementType *)&local_98,0,(int *)((longlong)&local_90 + 4));
  }
  uVar15 = 0;
  if (param_4 < local_78.ArrayNum) {
    uVar15 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_78.AllocatorInstance.Data[param_4] = (FScriptContainerElement)0x1;
  FVar14 = `UE::Geometry::TConvexHull3<float>::WalkBorder'::__l2::<lambda_1>::operator()
                     (&local_68,(int)local_50,param_4);
  if ((((ulonglong)local_98 <= (ulonglong)FVar14) &&
      ((ulonglong)FVar14 < (ulonglong)((longlong)local_98 + (longlong)local_90._4_4_ * 8))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar11 = (int)local_90;
  if ((int)local_90 == local_90._4_4_) {
    iVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,(ForAnyElementType *)&local_98,(int *)((longlong)&local_90 + 4));
  }
  *(undefined8 *)((longlong)local_98 + (longlong)iVar11 * 8) = *(undefined8 *)FVar14;
  local_90._0_4_ = iVar11 + 1;
  FVar14 = `UE::Geometry::TConvexHull3<float>::WalkBorder'::__l2::<lambda_1>::operator()
                     (&local_68,(int)local_48,param_4);
  if ((((ulonglong)local_98 <= (ulonglong)FVar14) &&
      ((ulonglong)FVar14 < (ulonglong)((longlong)local_98 + (longlong)local_90._4_4_ * 8))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_90 == local_90._4_4_) {
    local_90._0_4_ =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,(ForAnyElementType *)&local_98,(int *)((longlong)&local_90 + 4));
  }
  *(undefined8 *)((longlong)local_98 + (longlong)(int)local_90 * 8) = *(undefined8 *)FVar14;
  local_90._0_4_ = (int)local_90 + 1;
  FVar14 = `UE::Geometry::TConvexHull3<float>::WalkBorder'::__l2::<lambda_1>::operator()
                     (&local_68,(int)local_40,param_4);
  if ((((ulonglong)local_98 <= (ulonglong)FVar14) &&
      ((ulonglong)FVar14 < (ulonglong)((longlong)local_98 + (longlong)local_90._4_4_ * 8))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar11 = (int)local_90;
  if ((int)local_90 == local_90._4_4_) {
    iVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,(ForAnyElementType *)&local_98,(int *)((longlong)&local_90 + 4));
  }
  local_90 = CONCAT44(local_90._4_4_,iVar11 + 1);
  *(undefined8 *)((longlong)local_98 + (longlong)iVar11 * 8) = *(undefined8 *)FVar14;
  iVar11 = iVar11 + 1;
  do {
    if (iVar11 == 0) {
      if (local_98 != (FVisit)0x0) {
        FMemory::Free((void *)local_98);
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      return;
    }
    if (iVar11 < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (int)local_90;
    }
    iVar12 = iVar11 + -1;
    uVar2 = *(undefined8 *)((longlong)local_98 + (longlong)iVar12 * 8);
    _Dst = (void *)((longlong)local_98 + (longlong)iVar12 * 8);
    iVar12 = (iVar11 - iVar12) + -1;
    local_58 = uVar2;
    if (iVar12 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar12 << 3);
      iVar11 = (int)local_90;
    }
    uVar16 = (uint)uVar2;
    local_90 = CONCAT44(local_90._4_4_,iVar11 + -1);
    local_res10[0] = uVar16;
    cVar9 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_res10);
    uVar15 = 0;
    if (cVar9 == '\0') {
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data +
               ((longlong)(int)uVar16 * 3 + (longlong)local_58._4_1_) * 4;
      pFVar3 = (param_5->AllocatorInstance).Data;
      if (((pFVar3 <= pFVar1) && (pFVar1 < pFVar3 + (longlong)param_5->ArrayMax * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = param_5->ArrayNum;
      if (iVar11 == param_5->ArrayMax) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar11 + 1;
      *(undefined4 *)((param_5->AllocatorInstance).Data + (longlong)iVar11 * 4) =
           *(undefined4 *)pFVar1;
    }
    else {
      uVar13 = uVar15;
      if ((int)uVar16 < local_78.ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_78.AllocatorInstance.Data[(int)uVar16] == (FScriptContainerElement)0x0) {
        uVar17 = ~uVar16 >> 0x1f;
        uVar13 = uVar15;
        if ((int)uVar16 < local_78.ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar7 = local_60;
        iVar11 = local_58._4_1_ + 2;
        local_78.AllocatorInstance.Data[(int)uVar16] = (FScriptContainerElement)0x1;
        iVar11 = iVar11 + (iVar11 / 3 + (iVar11 >> 0x1f) +
                          (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) * -3;
        if ((int)uVar16 < local_60->ArrayNum) {
          uVar15 = uVar17;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar6 = local_68;
        lVar5 = (longlong)(int)uVar16 * 3;
        uVar15 = *(uint *)((pTVar7->AllocatorInstance).Data + (iVar11 + lVar5) * 4);
        lVar18 = (longlong)(int)uVar15;
        uVar13 = 0;
        if ((int)uVar16 < local_68->ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar7 = local_68;
        iVar11 = iVar11 + 1;
        if (2 < iVar11) {
          iVar11 = 0;
        }
        iVar11 = *(int *)((pTVar6->AllocatorInstance).Data + (iVar11 + lVar5) * 4);
        uVar13 = 0;
        if ((int)uVar15 < local_68->ArrayNum) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar1 = (pTVar7->AllocatorInstance).Data;
        if (*(int *)(pFVar1 + lVar18 * 0xc) == iVar11) {
          uVar10 = 0;
        }
        else if (*(int *)(pFVar1 + lVar18 * 0xc + 4) == iVar11) {
          uVar10 = 1;
        }
        else {
          uVar10 = 0xff;
          if (*(int *)(pFVar1 + lVar18 * 0xc + 8) == iVar11) {
            uVar10 = 2;
          }
        }
        uStack_84 = CONCAT31(uStack_84._1_3_,uVar10);
        local_88 = uVar15;
        if ((((ulonglong)local_98 <= &local_88) &&
            (&local_88 < (uint *)((longlong)local_98 + (longlong)local_90._4_4_ * 8))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (int)local_90;
        if ((int)local_90 == local_90._4_4_) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)&local_98,(int *)((longlong)&local_90 + 4))
          ;
        }
        pTVar7 = local_60;
        iVar12 = local_58._4_1_ + 1;
        local_90 = CONCAT44(local_90._4_4_,iVar11 + 1);
        *(ulonglong *)((longlong)local_98 + (longlong)iVar11 * 8) = CONCAT44(uStack_84,local_88);
        iVar12 = iVar12 + (iVar12 / 3 + (iVar12 >> 0x1f) +
                          (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) * -3;
        uVar15 = 0;
        if ((int)uVar16 < local_60->ArrayNum) {
          uVar15 = uVar17;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar6 = local_68;
        uVar15 = *(uint *)((pTVar7->AllocatorInstance).Data + (iVar12 + lVar5) * 4);
        lVar18 = (longlong)(int)uVar15;
        uVar13 = 0;
        if ((int)uVar16 < local_68->ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar7 = local_68;
        iVar12 = iVar12 + 1;
        if (2 < iVar12) {
          iVar12 = 0;
        }
        iVar11 = *(int *)((pTVar6->AllocatorInstance).Data + (iVar12 + lVar5) * 4);
        uVar16 = 0;
        if ((int)uVar15 < local_68->ArrayNum) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar1 = (pTVar7->AllocatorInstance).Data;
        if (*(int *)(pFVar1 + lVar18 * 0xc) == iVar11) {
          uVar10 = 0;
        }
        else if (*(int *)(pFVar1 + lVar18 * 0xc + 4) == iVar11) {
          uVar10 = 1;
        }
        else {
          uVar10 = 0xff;
          if (*(int *)(pFVar1 + lVar18 * 0xc + 8) == iVar11) {
            uVar10 = 2;
          }
        }
        uStack_7c = CONCAT31(uStack_7c._1_3_,uVar10);
        local_80 = uVar15;
        if ((((ulonglong)local_98 <= &local_80) &&
            (&local_80 < (uint *)((longlong)local_98 + (longlong)local_90._4_4_ * 8))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (int)local_90;
        if ((int)local_90 == local_90._4_4_) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)&local_98,(int *)((longlong)&local_90 + 4))
          ;
        }
        local_90 = CONCAT44(local_90._4_4_,iVar11 + 1);
        *(ulonglong *)((longlong)local_98 + (longlong)iVar11 * 8) = CONCAT44(uStack_7c,local_80);
        param_3 = local_res18;
      }
    }
    iVar11 = (int)local_90;
  } while( true );
}

// WalkBorder @ 1433e20e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Geometry::TConvexHull3<double>::WalkBorder
          (TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_2,
          TFunctionRef<bool___cdecl(int)> *param_3,int param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5)

{
  void *_Dst;
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  FVisit FVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint local_res10 [2];
  TFunctionRef<bool___cdecl(int)> *local_res18;
  FVisit local_98;
  undefined8 local_90;
  uint local_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  TArray<bool,TSizedDefaultAllocator<32>_> local_78;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_68;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  local_res18 = param_3;
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Triangles.Num() == TriangleNeighbors.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexHull3.cpp"
                         ,0x5b9,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_68 = param_1;
  local_60 = param_2;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_78,param_1->ArrayNum,Default);
  local_98.Tri = 0;
  local_98.Edge = '\0';
  local_98._5_3_ = 0;
  iVar11 = param_1->ArrayNum;
  local_90 = 0;
  uVar15 = iVar11 / 3 + (iVar11 >> 0x1f) +
           (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f);
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (0 < (int)uVar15) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar15,(ForAnyElementType *)&local_98,0,(int *)((longlong)&local_90 + 4));
  }
  uVar15 = 0;
  if (param_4 < local_78.ArrayNum) {
    uVar15 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_78.AllocatorInstance.Data[param_4] = (FScriptContainerElement)0x1;
  FVar14 = `UE::Geometry::TConvexHull3<double>::WalkBorder'::__l2::<lambda_1>::operator()
                     (&local_68,(int)local_50,param_4);
  if ((((ulonglong)local_98 <= (ulonglong)FVar14) &&
      ((ulonglong)FVar14 < (ulonglong)((longlong)local_98 + (longlong)local_90._4_4_ * 8))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar11 = (int)local_90;
  if ((int)local_90 == local_90._4_4_) {
    iVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,(ForAnyElementType *)&local_98,(int *)((longlong)&local_90 + 4));
  }
  *(undefined8 *)((longlong)local_98 + (longlong)iVar11 * 8) = *(undefined8 *)FVar14;
  local_90._0_4_ = iVar11 + 1;
  FVar14 = `UE::Geometry::TConvexHull3<double>::WalkBorder'::__l2::<lambda_1>::operator()
                     (&local_68,(int)local_48,param_4);
  if ((((ulonglong)local_98 <= (ulonglong)FVar14) &&
      ((ulonglong)FVar14 < (ulonglong)((longlong)local_98 + (longlong)local_90._4_4_ * 8))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)local_90 == local_90._4_4_) {
    local_90._0_4_ =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,(ForAnyElementType *)&local_98,(int *)((longlong)&local_90 + 4));
  }
  *(undefined8 *)((longlong)local_98 + (longlong)(int)local_90 * 8) = *(undefined8 *)FVar14;
  local_90._0_4_ = (int)local_90 + 1;
  FVar14 = `UE::Geometry::TConvexHull3<double>::WalkBorder'::__l2::<lambda_1>::operator()
                     (&local_68,(int)local_40,param_4);
  if ((((ulonglong)local_98 <= (ulonglong)FVar14) &&
      ((ulonglong)FVar14 < (ulonglong)((longlong)local_98 + (longlong)local_90._4_4_ * 8))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar11 = (int)local_90;
  if ((int)local_90 == local_90._4_4_) {
    iVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,(ForAnyElementType *)&local_98,(int *)((longlong)&local_90 + 4));
  }
  local_90 = CONCAT44(local_90._4_4_,iVar11 + 1);
  *(undefined8 *)((longlong)local_98 + (longlong)iVar11 * 8) = *(undefined8 *)FVar14;
  iVar11 = iVar11 + 1;
  do {
    if (iVar11 == 0) {
      if (local_98 != (FVisit)0x0) {
        FMemory::Free((void *)local_98);
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      return;
    }
    if (iVar11 < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (int)local_90;
    }
    iVar12 = iVar11 + -1;
    uVar2 = *(undefined8 *)((longlong)local_98 + (longlong)iVar12 * 8);
    _Dst = (void *)((longlong)local_98 + (longlong)iVar12 * 8);
    iVar12 = (iVar11 - iVar12) + -1;
    local_58 = uVar2;
    if (iVar12 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar12 << 3);
      iVar11 = (int)local_90;
    }
    uVar16 = (uint)uVar2;
    local_90 = CONCAT44(local_90._4_4_,iVar11 + -1);
    local_res10[0] = uVar16;
    cVar9 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_res10);
    uVar15 = 0;
    if (cVar9 == '\0') {
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data +
               ((longlong)(int)uVar16 * 3 + (longlong)local_58._4_1_) * 4;
      pFVar3 = (param_5->AllocatorInstance).Data;
      if (((pFVar3 <= pFVar1) && (pFVar1 < pFVar3 + (longlong)param_5->ArrayMax * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = param_5->ArrayNum;
      if (iVar11 == param_5->ArrayMax) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar11 + 1;
      *(undefined4 *)((param_5->AllocatorInstance).Data + (longlong)iVar11 * 4) =
           *(undefined4 *)pFVar1;
    }
    else {
      uVar13 = uVar15;
      if ((int)uVar16 < local_78.ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_78.AllocatorInstance.Data[(int)uVar16] == (FScriptContainerElement)0x0) {
        uVar17 = ~uVar16 >> 0x1f;
        uVar13 = uVar15;
        if ((int)uVar16 < local_78.ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar7 = local_60;
        iVar11 = local_58._4_1_ + 2;
        local_78.AllocatorInstance.Data[(int)uVar16] = (FScriptContainerElement)0x1;
        iVar11 = iVar11 + (iVar11 / 3 + (iVar11 >> 0x1f) +
                          (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) * -3;
        if ((int)uVar16 < local_60->ArrayNum) {
          uVar15 = uVar17;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar6 = local_68;
        lVar5 = (longlong)(int)uVar16 * 3;
        uVar15 = *(uint *)((pTVar7->AllocatorInstance).Data + (iVar11 + lVar5) * 4);
        lVar18 = (longlong)(int)uVar15;
        uVar13 = 0;
        if ((int)uVar16 < local_68->ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar7 = local_68;
        iVar11 = iVar11 + 1;
        if (2 < iVar11) {
          iVar11 = 0;
        }
        iVar11 = *(int *)((pTVar6->AllocatorInstance).Data + (iVar11 + lVar5) * 4);
        uVar13 = 0;
        if ((int)uVar15 < local_68->ArrayNum) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar1 = (pTVar7->AllocatorInstance).Data;
        if (*(int *)(pFVar1 + lVar18 * 0xc) == iVar11) {
          uVar10 = 0;
        }
        else if (*(int *)(pFVar1 + lVar18 * 0xc + 4) == iVar11) {
          uVar10 = 1;
        }
        else {
          uVar10 = 0xff;
          if (*(int *)(pFVar1 + lVar18 * 0xc + 8) == iVar11) {
            uVar10 = 2;
          }
        }
        uStack_84 = CONCAT31(uStack_84._1_3_,uVar10);
        local_88 = uVar15;
        if ((((ulonglong)local_98 <= &local_88) &&
            (&local_88 < (uint *)((longlong)local_98 + (longlong)local_90._4_4_ * 8))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (int)local_90;
        if ((int)local_90 == local_90._4_4_) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)&local_98,(int *)((longlong)&local_90 + 4))
          ;
        }
        pTVar7 = local_60;
        iVar12 = local_58._4_1_ + 1;
        local_90 = CONCAT44(local_90._4_4_,iVar11 + 1);
        *(ulonglong *)((longlong)local_98 + (longlong)iVar11 * 8) = CONCAT44(uStack_84,local_88);
        iVar12 = iVar12 + (iVar12 / 3 + (iVar12 >> 0x1f) +
                          (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) * -3;
        uVar15 = 0;
        if ((int)uVar16 < local_60->ArrayNum) {
          uVar15 = uVar17;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar6 = local_68;
        uVar15 = *(uint *)((pTVar7->AllocatorInstance).Data + (iVar12 + lVar5) * 4);
        lVar18 = (longlong)(int)uVar15;
        uVar13 = 0;
        if ((int)uVar16 < local_68->ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar7 = local_68;
        iVar12 = iVar12 + 1;
        if (2 < iVar12) {
          iVar12 = 0;
        }
        iVar11 = *(int *)((pTVar6->AllocatorInstance).Data + (iVar12 + lVar5) * 4);
        uVar16 = 0;
        if ((int)uVar15 < local_68->ArrayNum) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar1 = (pTVar7->AllocatorInstance).Data;
        if (*(int *)(pFVar1 + lVar18 * 0xc) == iVar11) {
          uVar10 = 0;
        }
        else if (*(int *)(pFVar1 + lVar18 * 0xc + 4) == iVar11) {
          uVar10 = 1;
        }
        else {
          uVar10 = 0xff;
          if (*(int *)(pFVar1 + lVar18 * 0xc + 8) == iVar11) {
            uVar10 = 2;
          }
        }
        uStack_7c = CONCAT31(uStack_7c._1_3_,uVar10);
        local_80 = uVar15;
        if ((((ulonglong)local_98 <= &local_80) &&
            (&local_80 < (uint *)((longlong)local_98 + (longlong)local_90._4_4_ * 8))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (int)local_90;
        if ((int)local_90 == local_90._4_4_) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)&local_98,(int *)((longlong)&local_90 + 4))
          ;
        }
        local_90 = CONCAT44(local_90._4_4_,iVar11 + 1);
        *(ulonglong *)((longlong)local_98 + (longlong)iVar11 * 8) = CONCAT44(uStack_7c,local_80);
        param_3 = local_res18;
      }
    }
    iVar11 = (int)local_90;
  } while( true );
}

// operator() @ 15049e2a0

bool __thiscall
`UE::Geometry::TConvexHull3<float>::GetFaces'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7106120869809750888>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7106120869809750888>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Geometry::TConvexHull3<float>::GetFaces(TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<float>)>,TFunctionRef<struct_UE::Math::TVector<float>___cdecl(int)>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049e2e0

bool __thiscall
`UE::Geometry::TConvexHull3<double>::GetFaces'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7106120869809750888>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7106120869809750888>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Geometry::TConvexHull3<double>::GetFaces(TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>)>,TFunctionRef<struct_UE::Math::TVector<double>___cdecl(int)>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049e320

bool __thiscall
`UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7106120869809751018>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7106120869809751018>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces(TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>&___ptr64,TFunctionRef<struct_UE::Math::TVector<float>___cdecl(int)>,float,float,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>*___ptr64)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049e360

bool __thiscall
`UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7106120869809750996>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7106120869809750996>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces(TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<float>)>,TFunctionRef<struct_UE::Math::TVector<float>___cdecl(int)>,float,float)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049e3a0

bool __thiscall
`UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7106120869809751018>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7106120869809751018>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces(TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>&___ptr64,TFunctionRef<struct_UE::Math::TVector<double>___cdecl(int)>,double,double,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>*___ptr64)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049e3e0

bool __thiscall
`UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7106120869809750996>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7106120869809750996>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces(TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>&___ptr64,UE::Math::TVector<double>)>,TFunctionRef<struct_UE::Math::TVector<double>___cdecl(int)>,double,double)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

