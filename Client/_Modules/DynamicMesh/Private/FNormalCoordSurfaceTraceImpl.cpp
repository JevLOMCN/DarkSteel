// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 40

// ContinueFromEdgePointCrossing<UE::Geometry::FIntrinsicEdgeFlipMesh> @ 14c6c5c00

void __cdecl
FNormalCoordSurfaceTraceImpl::ContinueFromEdgePointCrossing<UE::Geometry::FIntrinsicEdgeFlipMesh>
          (FIntrinsicEdgeFlipMesh *param_1,int param_2,int param_3,bool param_4,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
          *param_5)

{
  return;
}

// ContinueFromEdgePointCrossing<UE::Geometry::FIntrinsicMesh> @ 14c6c5c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FNormalCoordSurfaceTraceImpl::ContinueFromEdgePointCrossing<UE::Geometry::FIntrinsicMesh>
          (FIntrinsicMesh *param_1,int param_2,int param_3,bool param_4,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
          *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  FEdgeAndCrossingIdx *pFVar8;
  undefined1 auStackY_d8 [32];
  bool local_88 [8];
  uint local_80 [2];
  int local_78 [2];
  FEdgeAndCrossingIdx local_70 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_88[0] = param_4;
  local_80[0] = param_2;
  local_78[0] = param_3;
  while( true ) {
    uVar7 = (ulonglong)(local_80[0] & 0x1ff);
    lVar2 = *(longlong *)
             ((param_1->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data +
             (ulonglong)(local_80[0] >> 9) * 8);
    puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar7 * 0x28);
    local_50 = *puVar1;
    uStack_48 = puVar1[1];
    local_40 = *(undefined8 *)(lVar2 + 0x20 + uVar7 * 0x28);
    if (*(int *)(lVar2 + uVar7 * 0x28) != 1) {
      return;
    }
    pFVar8 = NextCrossingFromEdgePoint<UE::Geometry::FIntrinsicMesh>
                       (local_70,param_1,(int *)local_80,local_78,local_88);
    pFVar3 = (param_5->AllocatorInstance).Data;
    local_38._0_4_ = pFVar8->TID;
    local_38._4_4_ = pFVar8->EID;
    local_30 = pFVar8->CIdx;
    if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)param_5->ArrayMax * 0xc)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = param_5->ArrayNum;
    if (iVar6 == param_5->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&param_5->AllocatorInstance,&param_5->ArrayMax);
      param_5->ArrayNum = iVar6;
    }
    param_5->ArrayNum = iVar6 + 1;
    pFVar3 = (param_5->AllocatorInstance).Data + (longlong)iVar6 * 0xc;
    *(undefined8 *)pFVar3 = local_38;
    *(int *)(pFVar3 + 8) = local_30;
    if (local_30 != 0) {
      return;
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// ContinueTraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh> @ 14c6c5dc0

void __cdecl
FNormalCoordSurfaceTraceImpl::ContinueTraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>
          (FIntrinsicEdgeFlipMesh *param_1,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2->ArrayNum != 0) {
    while( true ) {
      uVar5 = param_2->ArrayNum - 1;
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
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
      iVar1 = param_2->ArrayNum;
      if (*(int *)((param_2->AllocatorInstance).Data + ((longlong)iVar1 + -1) * 0xc + 8) == 0)
      break;
      uVar4 = 0;
      if ((int)(iVar1 - 1U) < iVar1) {
        uVar4 = ~(iVar1 - 1U) >> 0x1f;
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
      if (*(int *)((param_2->AllocatorInstance).Data + (longlong)param_2->ArrayNum * 0xc + -4) != 0)
      {
        ContinueTraceSurfaceEdgeAcrossFaces<UE::Geometry::FIntrinsicEdgeFlipMesh>(param_1,param_2);
      }
    }
  }
  return;
}

// ContinueTraceSurfaceEdge<UE::Geometry::FIntrinsicMesh> @ 14c6c5f00

void __cdecl
FNormalCoordSurfaceTraceImpl::ContinueTraceSurfaceEdge<UE::Geometry::FIntrinsicMesh>
          (FIntrinsicMesh *param_1,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if (param_2->ArrayNum == 0) {
    return;
  }
  while( true ) {
    uVar11 = param_2->ArrayNum - 1;
    uVar8 = 0;
    if ((int)uVar11 < param_2->ArrayNum) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar3 = param_2->ArrayNum;
    pFVar4 = (param_2->AllocatorInstance).Data;
    pFVar1 = pFVar4 + ((longlong)iVar3 + -1) * 0xc;
    if (*(int *)(pFVar4 + ((longlong)iVar3 + -1) * 0xc + 8) == 0) {
      uVar8 = *(uint *)pFVar1;
      uVar10 = (ulonglong)(uVar8 & 0x1ff);
      lVar9 = *(longlong *)(param_1->_padding_ + (ulonglong)(uVar8 >> 9) * 8);
      local_40 = *(undefined4 *)(lVar9 + 8 + uVar10 * 0xc);
      local_48 = *(undefined8 *)(lVar9 + uVar10 * 0xc);
      uVar8 = *(uint *)((longlong)&local_48 + (longlong)(int)*(uint *)(pFVar1 + 4) * 4);
      uVar10 = (ulonglong)(uVar8 & 0x1ff);
      lVar9 = *(longlong *)
               ((param_1->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data +
               (ulonglong)(uVar8 >> 9) * 8);
      puVar2 = (undefined8 *)(lVar9 + 0x10 + uVar10 * 0x28);
      local_10 = *(undefined8 *)(lVar9 + 0x20 + uVar10 * 0x28);
      local_20 = *puVar2;
      uStack_18 = puVar2[1];
      if (*(int *)(lVar9 + uVar10 * 0x28) == 0) {
        return;
      }
    }
    uVar8 = 0;
    if ((int)(iVar3 - 1U) < iVar3) {
      uVar8 = ~(iVar3 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    lVar9 = (longlong)param_2->ArrayNum;
    pFVar1 = (param_2->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + lVar9 * 0xc + -4) == 0) {
      uVar8 = *(uint *)(pFVar1 + lVar9 * 0xc + -0xc);
      lVar5 = *(longlong *)(param_1->_padding_ + (ulonglong)(uVar8 >> 9) * 8);
      local_3c = *(undefined8 *)(lVar5 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
      local_34 = *(undefined4 *)(lVar5 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
      ContinueFromEdgePointCrossing<UE::Geometry::FIntrinsicMesh>
                (param_1,*(int *)((longlong)&local_3c +
                                 (longlong)*(int *)(pFVar1 + lVar9 * 0xc + -8) * 4),uVar8,false,
                 param_2);
    }
    else {
      ContinueTraceSurfaceEdgeAcrossFaces<UE::Geometry::FIntrinsicMesh>(param_1,param_2);
    }
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// ContinueTraceSurfaceEdgeAcrossFaces<UE::Geometry::FIntrinsicEdgeFlipMesh> @ 14c6c60e0

void __cdecl
FNormalCoordSurfaceTraceImpl::
ContinueTraceSurfaceEdgeAcrossFaces<UE::Geometry::FIntrinsicEdgeFlipMesh>
          (FIntrinsicEdgeFlipMesh *param_1,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint local_res10;
  int iStackX_14;
  
  uVar9 = param_2->ArrayNum - 1;
  uVar6 = 0;
  if ((int)uVar9 < param_2->ArrayNum) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = (longlong)param_2->ArrayNum;
  pFVar1 = (param_2->AllocatorInstance).Data;
  uVar6 = *(uint *)(pFVar1 + lVar8 * 0xc + -0xc);
  uVar9 = *(uint *)(pFVar1 + lVar8 * 0xc + -8);
  if (((-1 < (int)uVar6) &&
      ((int)uVar6 < (int)param_1->_padding_ * 0x200 + *(int *)((longlong)&param_1->_padding_ + 4)))
     && ((ushort)(*(short *)(*(longlong *)(param_1->_padding_ + (ulonglong)(uVar6 >> 9) * 8) +
                            (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    iVar7 = *(int *)(*(longlong *)
                      ((param_1->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 4);
    if (iVar7 < 1) {
      iVar7 = 0;
    }
    if ((*(int *)(pFVar1 + lVar8 * 0xc + -4) <= iVar7) && (0 < *(int *)(pFVar1 + lVar8 * 0xc + -4)))
    {
      do {
        uVar2 = *(undefined8 *)
                 (*(longlong *)(param_1->_padding_ + (ulonglong)(uVar9 >> 9) * 8) + 8 +
                 (ulonglong)(uVar9 & 0x1ff) * 0x10);
        uVar10 = (uint)uVar2;
        bVar5 = uVar10 == uVar6;
        uVar6 = uVar10;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)uVar2 >> 0x20);
        }
        GetCrossingExit<UE::Geometry::FIntrinsicEdgeFlipMesh>
                  ((FIntrinsicEdgeFlipMesh *)&local_res10,(FNormalCoordinates *)param_1,
                   (int)param_1 + 0x1c0,uVar6,uVar9);
        iVar4 = iStackX_14;
        uVar9 = local_res10;
        iVar7 = param_2->ArrayNum;
        if (iVar7 == param_2->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        lVar8 = (longlong)iVar7;
        param_2->ArrayNum = iVar7 + 1;
        pFVar1 = (param_2->AllocatorInstance).Data;
        *(uint *)(pFVar1 + lVar8 * 0xc) = uVar6;
        *(uint *)(pFVar1 + lVar8 * 0xc + 4) = uVar9;
        *(int *)(pFVar1 + lVar8 * 0xc + 8) = iVar4;
      } while (iVar4 != 0);
    }
  }
  return;
}

// ContinueTraceSurfaceEdgeAcrossFaces<UE::Geometry::FIntrinsicMesh> @ 14c6c62b0

void __cdecl
FNormalCoordSurfaceTraceImpl::ContinueTraceSurfaceEdgeAcrossFaces<UE::Geometry::FIntrinsicMesh>
          (FIntrinsicMesh *param_1,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint local_res10;
  int iStackX_14;
  
  uVar9 = param_2->ArrayNum - 1;
  uVar6 = 0;
  if ((int)uVar9 < param_2->ArrayNum) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = (longlong)param_2->ArrayNum;
  pFVar1 = (param_2->AllocatorInstance).Data;
  uVar6 = *(uint *)(pFVar1 + lVar8 * 0xc + -0xc);
  uVar9 = *(uint *)(pFVar1 + lVar8 * 0xc + -8);
  if (((-1 < (int)uVar6) &&
      ((int)uVar6 < (int)param_1->_padding_ * 0x200 + *(int *)((longlong)&param_1->_padding_ + 4)))
     && ((ushort)(*(short *)(*(longlong *)(param_1->_padding_ + (ulonglong)(uVar6 >> 9) * 8) +
                            (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    iVar7 = *(int *)(*(longlong *)
                      ((param_1->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 4);
    if (iVar7 < 1) {
      iVar7 = 0;
    }
    if ((*(int *)(pFVar1 + lVar8 * 0xc + -4) <= iVar7) && (0 < *(int *)(pFVar1 + lVar8 * 0xc + -4)))
    {
      do {
        uVar2 = *(undefined8 *)
                 (*(longlong *)(param_1->_padding_ + (ulonglong)(uVar9 >> 9) * 8) + 8 +
                 (ulonglong)(uVar9 & 0x1ff) * 0x10);
        uVar10 = (uint)uVar2;
        bVar5 = uVar10 == uVar6;
        uVar6 = uVar10;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)uVar2 >> 0x20);
        }
        GetCrossingExit<UE::Geometry::FIntrinsicMesh>
                  ((FIntrinsicMesh *)&local_res10,(FNormalCoordinates *)param_1,(int)param_1 + 0x1c0
                   ,uVar6,uVar9);
        iVar4 = iStackX_14;
        uVar9 = local_res10;
        iVar7 = param_2->ArrayNum;
        if (iVar7 == param_2->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        lVar8 = (longlong)iVar7;
        param_2->ArrayNum = iVar7 + 1;
        pFVar1 = (param_2->AllocatorInstance).Data;
        *(uint *)(pFVar1 + lVar8 * 0xc) = uVar6;
        *(uint *)(pFVar1 + lVar8 * 0xc + 4) = uVar9;
        *(int *)(pFVar1 + lVar8 * 0xc + 8) = iVar4;
      } while (iVar4 != 0);
    }
  }
  return;
}

// GetAdjElementsContainingSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh> @ 14c6cf340

bool __cdecl
FNormalCoordSurfaceTraceImpl::
GetAdjElementsContainingSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>
          (FIntrinsicEdgeFlipMesh *param_1,int param_2,
          TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 local_res8;
  int local_res10;
  uint local_b8;
  uint local_b4;
  int iStack_b0;
  undefined8 local_a8;
  uint local_a0;
  FIndex3i_u_0 local_98;
  undefined8 local_88;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  BaseValueIterator local_68;
  
  local_res10 = param_2;
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_68,(FSmallListSet *)&param_1->_padding_,param_2,false);
LAB_14c6cf390:
  do {
    lVar14 = 0;
    if ((((local_68.ListSet == (FSmallListSet *)&param_1->_padding_) &&
         (local_68.ListIndex == param_2)) && (local_68.iCur == -1)) && (local_68.cur_ptr == -1)) {
      if ((param_3->ArrayNum < 1) && (param_4->ArrayNum < 1)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      return bVar7;
    }
    local_b8 = local_68.cur_value;
    uVar16 = local_68._32_8_;
    if (*(int *)(*(longlong *)
                  ((param_1->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data +
                  ((local_68._32_8_ & 0xffffffff) >> 9) * 8) + (ulonglong)(local_b8 & 0x1ff) * 4) ==
        -1) {
      pFVar4 = (param_4->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar4 + (longlong)param_4->ArrayMax * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar9 = param_4->ArrayNum;
      if (iVar9 == param_4->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar9 + 1;
      *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_b8;
      uVar16 = (ulonglong)local_b8;
    }
    uVar15 = (uint)uVar16;
    local_res8 = *(undefined8 *)
                  (*(longlong *)(param_1->_padding_ + ((uVar16 & 0xffffffff) >> 9) * 8) + 8 +
                  (ulonglong)(uVar15 & 0x1ff) * 0x10);
    lVar17 = lVar14;
    do {
      uVar3 = *(uint *)((longlong)&local_res8 + lVar17 * 4);
      if (uVar3 != 0xffffffff) {
        lVar1 = (ulonglong)(uVar3 >> 9) * 8;
        lVar2 = (ulonglong)(uVar3 & 0x1ff) * 0xc;
        puVar18 = (undefined8 *)(*(longlong *)(param_1->_padding_ + lVar1) + lVar2);
        local_88 = *puVar18;
        uVar6 = local_88;
        if ((uint)local_88 == uVar15) {
          iVar9 = 0;
        }
        else if ((uint)((ulonglong)local_88 >> 0x20) == uVar15) {
          iVar9 = 1;
        }
        else {
          iVar9 = -1;
          if (*(uint *)(puVar18 + 1) == uVar15) {
            iVar9 = 2;
          }
        }
        lVar1 = *(longlong *)(param_1->_padding_ + lVar1);
        local_70 = *(undefined4 *)(lVar1 + 8 + lVar2);
        local_78 = *(undefined8 *)(lVar1 + lVar2);
        local_88 = uVar6;
        if (*(int *)((longlong)&local_78 + (longlong)iVar9 * 4) == param_2) {
          local_a8 = *puVar18;
          uVar6 = local_a8;
          local_a0 = *(uint *)(puVar18 + 1);
          if ((uint)local_a8 != uVar15) {
            if ((uint)((ulonglong)local_a8 >> 0x20) == uVar15) {
              lVar14 = 1;
            }
            else {
              lVar14 = 0xffffffff;
              if (*(uint *)(puVar18 + 1) == uVar15) {
                lVar14 = 2;
              }
            }
          }
          iVar13 = (int)lVar14;
          lVar14 = (longlong)iVar13;
          local_98._s_0.A = *(uint *)((longlong)&local_a8 + lVar14 * 4);
          local_98._s_0.B =
               *(uint *)((longlong)&local_a8 +
                        (longlong)*(int *)((longlong)&param_1->_padding_ + lVar14 * 4) * 4);
          local_98._s_0.C =
               *(uint *)((longlong)&local_a8 +
                        (longlong)*(int *)((longlong)&param_1->_padding_ + lVar14 * 4 + 4) * 4);
          pFVar4 = (param_1->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data;
          iVar9 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)((uint)local_98._s_0.B >> 9) * 8) +
                          (ulonglong)(local_98._s_0.B & 0x1ff) * 4);
          if (iVar9 < 1) {
            iVar9 = 0;
          }
          local_a8 = uVar6;
          if (iVar9 != 0) {
            iVar12 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)((uint)local_98._s_0.C >> 9) * 8) +
                             (ulonglong)(local_98._s_0.C & 0x1ff) * 4);
            iVar11 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)((uint)local_98._s_0.A >> 9) * 8) +
                             (ulonglong)(local_98._s_0.A & 0x1ff) * 4);
            if (iVar11 < 1) {
              iVar11 = 0;
            }
            if (iVar12 < 1) {
              iVar12 = 0;
            }
            iVar10 = (iVar12 - iVar9) - iVar11;
            if (iVar10 < 1) {
              iVar10 = 0;
            }
            if (iVar10 < 1) {
              iVar12 = (iVar11 - iVar9) - iVar12;
              if (iVar12 < 1) {
                iVar12 = 0;
              }
              if (iVar12 < 1) {
                iVar12 = UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::
                         NumCornerCrossingRefEdges
                                   (&param_1->NormalCoordinates,(FIndex3i *)&local_98._s_0,2);
                iVar11 = UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::
                         NumCornerCrossingRefEdges
                                   (&param_1->NormalCoordinates,(FIndex3i *)&local_98._s_0,1);
                param_2 = local_res10;
                if (iVar12 + iVar11 < iVar9) {
                  pFVar4 = (param_3->AllocatorInstance).Data;
                  local_b4 = uVar3;
                  iStack_b0 = iVar13;
                  if (((pFVar4 <= (FScriptContainerElement *)&local_b4) &&
                      ((FScriptContainerElement *)&local_b4 <
                       pFVar4 + (longlong)param_3->ArrayMax * 8)) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
                    pcVar5 = (code *)swi(3);
                    uVar8 = (*pcVar5)();
                    return (bool)uVar8;
                  }
                  iVar9 = param_3->ArrayNum;
                  if (iVar9 == param_3->ArrayMax) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x408,&param_3->AllocatorInstance,&param_3->ArrayMax);
                  }
                  param_3->ArrayNum = iVar9 + 1;
                  *(ulonglong *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 8) =
                       CONCAT44(iStack_b0,local_b4);
                  param_2 = local_res10;
                }
              }
            }
          }
          UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_68);
          goto LAB_14c6cf390;
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < 2);
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_68);
  } while( true );
}

// GetAdjElementsContainingSurfaceEdge<UE::Geometry::FIntrinsicMesh> @ 14c6cf790

bool __cdecl
FNormalCoordSurfaceTraceImpl::GetAdjElementsContainingSurfaceEdge<UE::Geometry::FIntrinsicMesh>
          (FIntrinsicMesh *param_1,int param_2,
          TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 local_res8;
  int local_res10;
  uint local_b8;
  uint local_b4;
  int iStack_b0;
  undefined8 local_a8;
  uint local_a0;
  FIndex3i_u_0 local_98;
  undefined8 local_88;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  BaseValueIterator local_68;
  
  local_res10 = param_2;
  UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_68,(FSmallListSet *)&param_1->_padding_,param_2,false);
LAB_14c6cf7e0:
  do {
    lVar14 = 0;
    if ((((local_68.ListSet == (FSmallListSet *)&param_1->_padding_) &&
         (local_68.ListIndex == param_2)) && (local_68.iCur == -1)) && (local_68.cur_ptr == -1)) {
      if ((param_3->ArrayNum < 1) && (param_4->ArrayNum < 1)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      return bVar7;
    }
    local_b8 = local_68.cur_value;
    uVar16 = local_68._32_8_;
    if (*(int *)(*(longlong *)
                  ((param_1->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data +
                  ((local_68._32_8_ & 0xffffffff) >> 9) * 8) + (ulonglong)(local_b8 & 0x1ff) * 4) ==
        -1) {
      pFVar4 = (param_4->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar4 + (longlong)param_4->ArrayMax * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar9 = param_4->ArrayNum;
      if (iVar9 == param_4->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar9 + 1;
      *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_b8;
      uVar16 = (ulonglong)local_b8;
    }
    uVar15 = (uint)uVar16;
    local_res8 = *(undefined8 *)
                  (*(longlong *)(param_1->_padding_ + ((uVar16 & 0xffffffff) >> 9) * 8) + 8 +
                  (ulonglong)(uVar15 & 0x1ff) * 0x10);
    lVar17 = lVar14;
    do {
      uVar3 = *(uint *)((longlong)&local_res8 + lVar17 * 4);
      if (uVar3 != 0xffffffff) {
        lVar1 = (ulonglong)(uVar3 >> 9) * 8;
        lVar2 = (ulonglong)(uVar3 & 0x1ff) * 0xc;
        puVar18 = (undefined8 *)(*(longlong *)(param_1->_padding_ + lVar1) + lVar2);
        local_88 = *puVar18;
        uVar6 = local_88;
        if ((uint)local_88 == uVar15) {
          iVar9 = 0;
        }
        else if ((uint)((ulonglong)local_88 >> 0x20) == uVar15) {
          iVar9 = 1;
        }
        else {
          iVar9 = -1;
          if (*(uint *)(puVar18 + 1) == uVar15) {
            iVar9 = 2;
          }
        }
        lVar1 = *(longlong *)(param_1->_padding_ + lVar1);
        local_70 = *(undefined4 *)(lVar1 + 8 + lVar2);
        local_78 = *(undefined8 *)(lVar1 + lVar2);
        local_88 = uVar6;
        if (*(int *)((longlong)&local_78 + (longlong)iVar9 * 4) == param_2) {
          local_a8 = *puVar18;
          uVar6 = local_a8;
          local_a0 = *(uint *)(puVar18 + 1);
          if ((uint)local_a8 != uVar15) {
            if ((uint)((ulonglong)local_a8 >> 0x20) == uVar15) {
              lVar14 = 1;
            }
            else {
              lVar14 = 0xffffffff;
              if (*(uint *)(puVar18 + 1) == uVar15) {
                lVar14 = 2;
              }
            }
          }
          iVar13 = (int)lVar14;
          lVar14 = (longlong)iVar13;
          local_98._s_0.A = *(uint *)((longlong)&local_a8 + lVar14 * 4);
          local_98._s_0.B =
               *(uint *)((longlong)&local_a8 +
                        (longlong)*(int *)((longlong)&param_1->_padding_ + lVar14 * 4) * 4);
          local_98._s_0.C =
               *(uint *)((longlong)&local_a8 +
                        (longlong)*(int *)((longlong)&param_1->_padding_ + lVar14 * 4 + 4) * 4);
          pFVar4 = (param_1->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data;
          iVar9 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)((uint)local_98._s_0.B >> 9) * 8) +
                          (ulonglong)(local_98._s_0.B & 0x1ff) * 4);
          if (iVar9 < 1) {
            iVar9 = 0;
          }
          local_a8 = uVar6;
          if (iVar9 != 0) {
            iVar12 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)((uint)local_98._s_0.C >> 9) * 8) +
                             (ulonglong)(local_98._s_0.C & 0x1ff) * 4);
            iVar11 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)((uint)local_98._s_0.A >> 9) * 8) +
                             (ulonglong)(local_98._s_0.A & 0x1ff) * 4);
            if (iVar11 < 1) {
              iVar11 = 0;
            }
            if (iVar12 < 1) {
              iVar12 = 0;
            }
            iVar10 = (iVar12 - iVar9) - iVar11;
            if (iVar10 < 1) {
              iVar10 = 0;
            }
            if (iVar10 < 1) {
              iVar12 = (iVar11 - iVar9) - iVar12;
              if (iVar12 < 1) {
                iVar12 = 0;
              }
              if (iVar12 < 1) {
                iVar12 = UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::
                         NumCornerCrossingRefEdges
                                   (&param_1->NormalCoordinates,(FIndex3i *)&local_98._s_0,2);
                iVar11 = UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::
                         NumCornerCrossingRefEdges
                                   (&param_1->NormalCoordinates,(FIndex3i *)&local_98._s_0,1);
                param_2 = local_res10;
                if (iVar12 + iVar11 < iVar9) {
                  pFVar4 = (param_3->AllocatorInstance).Data;
                  local_b4 = uVar3;
                  iStack_b0 = iVar13;
                  if (((pFVar4 <= (FScriptContainerElement *)&local_b4) &&
                      ((FScriptContainerElement *)&local_b4 <
                       pFVar4 + (longlong)param_3->ArrayMax * 8)) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
                    pcVar5 = (code *)swi(3);
                    uVar8 = (*pcVar5)();
                    return (bool)uVar8;
                  }
                  iVar9 = param_3->ArrayNum;
                  if (iVar9 == param_3->ArrayMax) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x408,&param_3->AllocatorInstance,&param_3->ArrayMax);
                  }
                  param_3->ArrayNum = iVar9 + 1;
                  *(ulonglong *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 8) =
                       CONCAT44(iStack_b0,local_b4);
                  param_2 = local_res10;
                }
              }
            }
          }
          UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_68);
          goto LAB_14c6cf7e0;
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < 2);
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_68);
  } while( true );
}

// GetCrossingExit<UE::Geometry::FIntrinsicEdgeFlipMesh> @ 14c6cfbe0

TTuple<int,int> __cdecl
FNormalCoordSurfaceTraceImpl::GetCrossingExit<UE::Geometry::FIntrinsicEdgeFlipMesh>
          (FIntrinsicEdgeFlipMesh *param_1,FNormalCoordinates *param_2,int param_3,int param_4,
          int param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_register_00000084;
  int iVar7;
  uint uVar8;
  int in_stack_00000030;
  undefined8 local_38;
  uint local_30;
  
  *(int *)&param_1->_padding_ = param_5;
  *(int *)((longlong)&param_1->_padding_ + 4) = in_stack_00000030;
  lVar3 = *(longlong *)(*(longlong *)&param_2[2].NormalCoord + (ulonglong)((uint)param_4 >> 9) * 8);
  local_38 = *(undefined8 *)(lVar3 + (ulonglong)(param_4 & 0x1ff) * 0xc);
  local_30 = *(uint *)(lVar3 + 8 + (ulonglong)(param_4 & 0x1ff) * 0xc);
  uVar4 = (uint)((ulonglong)local_38 >> 0x20);
  if ((uint)local_38 == param_5) {
    iVar7 = 0;
  }
  else if (uVar4 == param_5) {
    iVar7 = 1;
  }
  else {
    iVar7 = -1;
    if (local_30 == param_5) {
      iVar7 = 2;
    }
  }
  iVar2 = iVar7 + 1;
  uVar8 = *(uint *)((longlong)&local_38 +
                   (longlong)
                   (iVar2 + (iVar2 / 3 + (iVar2 >> 0x1f) +
                            (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >>
                                 0x1f)) * -3) * 4);
  iVar7 = iVar7 + 2;
  lVar3 = *(longlong *)(CONCAT44(in_register_00000084,param_3) + 0x38);
  uVar1 = *(uint *)((longlong)&local_38 +
                   (longlong)
                   (iVar7 + (iVar7 / 3 + (iVar7 >> 0x1f) +
                            (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >>
                                 0x1f)) * -3) * 4);
  iVar7 = *(int *)(*(longlong *)(lVar3 + (ulonglong)((uint)param_5 >> 9) * 8) +
                  (ulonglong)(param_5 & 0x1ff) * 4);
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  iVar2 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar8 >> 9) * 8) +
                  (ulonglong)(uVar8 & 0x1ff) * 4);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar6 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 >> 9) * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4);
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  if (iVar6 + iVar2 < iVar7) {
    if (in_stack_00000030 <= iVar2) goto LAB_14c6cfda9;
    if (in_stack_00000030 <= iVar7 - iVar6) {
      if ((uint)local_38 == uVar1) {
        in_stack_00000030 = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
        if (uVar4 != uVar1) {
          uVar8 = 0xffffffff;
          if (local_30 == uVar1) {
            uVar8 = 2;
          }
        }
        in_stack_00000030 = 0;
      }
      goto LAB_14c6cfda9;
    }
LAB_14c6cfd63:
    iVar6 = iVar6 - iVar7;
  }
  else {
    if (iVar2 + iVar7 < iVar6) goto LAB_14c6cfd63;
    if ((iVar6 + iVar7 < iVar2) ||
       (iVar5 = ((iVar6 - iVar7) + iVar2) / 2, in_stack_00000030 <= iVar2 - iVar5))
    goto LAB_14c6cfda9;
    iVar6 = iVar5 - (iVar7 + (iVar2 - iVar6)) / 2;
  }
  in_stack_00000030 = in_stack_00000030 + iVar6;
  uVar8 = uVar1;
LAB_14c6cfda9:
  *(uint *)&param_1->_padding_ = uVar8;
  *(int *)((longlong)&param_1->_padding_ + 4) = in_stack_00000030;
  return (TTuple<int,int>)param_1;
}

// GetCrossingExit<UE::Geometry::FIntrinsicMesh> @ 14c6cfde0

TTuple<int,int> __cdecl
FNormalCoordSurfaceTraceImpl::GetCrossingExit<UE::Geometry::FIntrinsicMesh>
          (FIntrinsicMesh *param_1,FNormalCoordinates *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_register_00000084;
  int iVar7;
  uint uVar8;
  int in_stack_00000030;
  undefined8 local_38;
  uint local_30;
  
  *(int *)&param_1->_padding_ = param_5;
  *(int *)((longlong)&param_1->_padding_ + 4) = in_stack_00000030;
  lVar3 = *(longlong *)(*(longlong *)&param_2[2].NormalCoord + (ulonglong)((uint)param_4 >> 9) * 8);
  local_38 = *(undefined8 *)(lVar3 + (ulonglong)(param_4 & 0x1ff) * 0xc);
  local_30 = *(uint *)(lVar3 + 8 + (ulonglong)(param_4 & 0x1ff) * 0xc);
  uVar4 = (uint)((ulonglong)local_38 >> 0x20);
  if ((uint)local_38 == param_5) {
    iVar7 = 0;
  }
  else if (uVar4 == param_5) {
    iVar7 = 1;
  }
  else {
    iVar7 = -1;
    if (local_30 == param_5) {
      iVar7 = 2;
    }
  }
  iVar2 = iVar7 + 1;
  uVar8 = *(uint *)((longlong)&local_38 +
                   (longlong)
                   (iVar2 + (iVar2 / 3 + (iVar2 >> 0x1f) +
                            (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >>
                                 0x1f)) * -3) * 4);
  iVar7 = iVar7 + 2;
  lVar3 = *(longlong *)(CONCAT44(in_register_00000084,param_3) + 0x38);
  uVar1 = *(uint *)((longlong)&local_38 +
                   (longlong)
                   (iVar7 + (iVar7 / 3 + (iVar7 >> 0x1f) +
                            (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >>
                                 0x1f)) * -3) * 4);
  iVar7 = *(int *)(*(longlong *)(lVar3 + (ulonglong)((uint)param_5 >> 9) * 8) +
                  (ulonglong)(param_5 & 0x1ff) * 4);
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  iVar2 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar8 >> 9) * 8) +
                  (ulonglong)(uVar8 & 0x1ff) * 4);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar6 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar1 >> 9) * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4);
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  if (iVar6 + iVar2 < iVar7) {
    if (in_stack_00000030 <= iVar2) goto LAB_14c6cffa9;
    if (in_stack_00000030 <= iVar7 - iVar6) {
      if ((uint)local_38 == uVar1) {
        in_stack_00000030 = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
        if (uVar4 != uVar1) {
          uVar8 = 0xffffffff;
          if (local_30 == uVar1) {
            uVar8 = 2;
          }
        }
        in_stack_00000030 = 0;
      }
      goto LAB_14c6cffa9;
    }
LAB_14c6cff63:
    iVar6 = iVar6 - iVar7;
  }
  else {
    if (iVar2 + iVar7 < iVar6) goto LAB_14c6cff63;
    if ((iVar6 + iVar7 < iVar2) ||
       (iVar5 = ((iVar6 - iVar7) + iVar2) / 2, in_stack_00000030 <= iVar2 - iVar5))
    goto LAB_14c6cffa9;
    iVar6 = iVar5 - (iVar7 + (iVar2 - iVar6)) / 2;
  }
  in_stack_00000030 = in_stack_00000030 + iVar6;
  uVar8 = uVar1;
LAB_14c6cffa9:
  *(uint *)&param_1->_padding_ = uVar8;
  *(int *)((longlong)&param_1->_padding_ + 4) = in_stack_00000030;
  return (TTuple<int,int>)param_1;
}

// IdentifyInitialAdjacentEdge<UE::Geometry::FIntrinsicEdgeFlipMesh> @ 14c6d0760

int __cdecl
FNormalCoordSurfaceTraceImpl::IdentifyInitialAdjacentEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>
          (FIntrinsicEdgeFlipMesh *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  uint local_48;
  int iStack_40;
  undefined8 local_3c;
  undefined4 local_34;
  BaseValueIterator local_30;
  
  if (((-1 < param_2) &&
      (param_2 < (int)param_1->_padding_ * 0x200 + *(int *)((longlong)&param_1->_padding_ + 4))) &&
     ((ushort)(*(short *)(*(longlong *)(param_1->_padding_ + (ulonglong)((uint)param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    plVar1 = &param_1->_padding_;
    bVar7 = UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::IsBoundaryVertex
                      ((FSimpleIntrinsicEdgeFlipMesh *)param_1,param_2);
    if (bVar7) {
      UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
                (&local_30,(FSmallListSet *)plVar1,param_2,false);
      while (((local_30.ListSet != (FSmallListSet *)plVar1 || (local_30.ListIndex != param_2)) ||
             ((local_30.iCur != -1 || (local_30.cur_ptr != -1))))) {
        lVar5 = *(longlong *)(param_1->_padding_ + (ulonglong)((uint)local_30.cur_value >> 9) * 8);
        if (*(int *)(lVar5 + 0xc + (ulonglong)(local_30.cur_value & 0x1ff) * 0x10) == -1) {
          uVar4 = *(uint *)(lVar5 + 8 + (ulonglong)(local_30.cur_value & 0x1ff) * 0x10);
          lVar5 = (ulonglong)(uVar4 >> 9) * 8;
          lVar2 = (ulonglong)(uVar4 & 0x1ff) * 0xc;
          lVar6 = *(longlong *)(param_1->_padding_ + lVar5);
          uVar3 = *(undefined8 *)(lVar6 + lVar2);
          local_48 = (uint)uVar3;
          if (local_48 == local_30.cur_value) {
            iVar8 = 0;
          }
          else if ((uint)((ulonglong)uVar3 >> 0x20) == local_30.cur_value) {
            iVar8 = 1;
          }
          else {
            iVar8 = -1;
            if (*(uint *)(lVar6 + 8 + lVar2) == local_30.cur_value) {
              iVar8 = 2;
            }
          }
          lVar5 = *(longlong *)(param_1->_padding_ + lVar5);
          local_34 = *(undefined4 *)(lVar5 + 8 + lVar2);
          local_3c = *(undefined8 *)(lVar5 + lVar2);
          if (*(int *)((longlong)&local_3c + (longlong)iVar8 * 4) == param_2) {
            return local_30.cur_value;
          }
        }
        UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_30);
      }
    }
    else {
      UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
                (&local_30,(FSmallListSet *)plVar1,param_2,false);
      if (local_30.ListSet != (FSmallListSet *)plVar1) {
        return local_30.cur_value;
      }
      if (local_30.ListIndex != param_2) {
        return local_30.cur_value;
      }
      if (local_30.iCur != -1) {
        return local_30.cur_value;
      }
      if (local_30.cur_ptr != -1) {
        return local_30.cur_value;
      }
    }
  }
  return -1;
}

// IdentifyInitialAdjacentEdge<UE::Geometry::FIntrinsicMesh> @ 14c6d0930

int __cdecl
FNormalCoordSurfaceTraceImpl::IdentifyInitialAdjacentEdge<UE::Geometry::FIntrinsicMesh>
          (FIntrinsicMesh *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  uint local_48;
  int iStack_40;
  undefined8 local_3c;
  undefined4 local_34;
  BaseValueIterator local_30;
  
  if (((-1 < param_2) &&
      (param_2 < (int)param_1->_padding_ * 0x200 + *(int *)((longlong)&param_1->_padding_ + 4))) &&
     ((ushort)(*(short *)(*(longlong *)(param_1->_padding_ + (ulonglong)((uint)param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    plVar1 = &param_1->_padding_;
    bVar7 = UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::IsBoundaryVertex
                      ((FSimpleIntrinsicEdgeFlipMesh *)param_1,param_2);
    if (bVar7) {
      UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
                (&local_30,(FSmallListSet *)plVar1,param_2,false);
      while (((local_30.ListSet != (FSmallListSet *)plVar1 || (local_30.ListIndex != param_2)) ||
             ((local_30.iCur != -1 || (local_30.cur_ptr != -1))))) {
        lVar5 = *(longlong *)(param_1->_padding_ + (ulonglong)((uint)local_30.cur_value >> 9) * 8);
        if (*(int *)(lVar5 + 0xc + (ulonglong)(local_30.cur_value & 0x1ff) * 0x10) == -1) {
          uVar4 = *(uint *)(lVar5 + 8 + (ulonglong)(local_30.cur_value & 0x1ff) * 0x10);
          lVar5 = (ulonglong)(uVar4 >> 9) * 8;
          lVar2 = (ulonglong)(uVar4 & 0x1ff) * 0xc;
          lVar6 = *(longlong *)(param_1->_padding_ + lVar5);
          uVar3 = *(undefined8 *)(lVar6 + lVar2);
          local_48 = (uint)uVar3;
          if (local_48 == local_30.cur_value) {
            iVar8 = 0;
          }
          else if ((uint)((ulonglong)uVar3 >> 0x20) == local_30.cur_value) {
            iVar8 = 1;
          }
          else {
            iVar8 = -1;
            if (*(uint *)(lVar6 + 8 + lVar2) == local_30.cur_value) {
              iVar8 = 2;
            }
          }
          lVar5 = *(longlong *)(param_1->_padding_ + lVar5);
          local_34 = *(undefined4 *)(lVar5 + 8 + lVar2);
          local_3c = *(undefined8 *)(lVar5 + lVar2);
          if (*(int *)((longlong)&local_3c + (longlong)iVar8 * 4) == param_2) {
            return local_30.cur_value;
          }
        }
        UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_30);
      }
    }
    else {
      UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
                (&local_30,(FSmallListSet *)plVar1,param_2,false);
      if (local_30.ListSet != (FSmallListSet *)plVar1) {
        return local_30.cur_value;
      }
      if (local_30.ListIndex != param_2) {
        return local_30.cur_value;
      }
      if (local_30.iCur != -1) {
        return local_30.cur_value;
      }
      if (local_30.cur_ptr != -1) {
        return local_30.cur_value;
      }
    }
  }
  return -1;
}

// NextCrossingFromEdgePoint<UE::Geometry::FIntrinsicEdgeFlipMesh> @ 14c6d1a30

FEdgeAndCrossingIdx * __cdecl
FNormalCoordSurfaceTraceImpl::NextCrossingFromEdgePoint<UE::Geometry::FIntrinsicEdgeFlipMesh>
          (FEdgeAndCrossingIdx *__return_storage_ptr__,FIntrinsicEdgeFlipMesh *param_1,int *param_2,
          int *param_3,bool *param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FEdgeAndCrossingIdx *pFVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  FEdgeAndCrossingIdx local_e8;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  FIndex3i_u_0 local_98;
  FIndex3i_u_0 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  FIntrinsicEdgeFlipMesh *local_60;
  int *local_58;
  FEdgeAndCrossingIdx local_50;
  FEdgeAndCrossingIdx local_40 [2];
  
  lVar8 = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  GetAdjElementsContainingSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>
            (param_1,*param_2,&local_d8,&local_c8);
  uVar1 = *param_3;
  local_60 = param_1;
  local_58 = param_2;
  local_e8.TID = -1;
  local_e8.EID = -1;
  local_e8.CIdx = -1;
  iVar7 = local_d8.ArrayNum;
  if (*param_4 == false) {
    if (local_c8.ArrayNum == 1) {
      uVar1 = *(uint *)local_c8.AllocatorInstance.Data;
      `FNormalCoordSurfaceTraceImpl::
      NextCrossingFromEdgePoint<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l2::<lambda_1>::operator()
                (&local_60,local_40,uVar1,&local_e8);
      lVar8 = *(longlong *)(param_1->_padding_ + (ulonglong)((uint)local_e8.TID >> 9) * 8);
      local_64 = *(undefined4 *)(lVar8 + 8 + (ulonglong)(local_e8.TID & 0x1ff) * 0xc);
      local_6c = *(undefined8 *)(lVar8 + (ulonglong)(local_e8.TID & 0x1ff) * 0xc);
      *param_2 = *(int *)((longlong)&local_6c + (longlong)local_e8.EID * 4);
      *param_3 = uVar1;
      *param_4 = true;
      goto LAB_14c6d1da0;
    }
    if (local_d8.ArrayNum != 2) goto LAB_14c6d1da0;
    uVar2 = *(uint *)local_d8.AllocatorInstance.Data;
    iVar7 = 2;
    if (true < (uVar2 == uVar1)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FEdgeAndCrossingIdx *)(*pcVar3)();
        return pFVar5;
      }
      iVar7 = local_d8.ArrayNum;
    }
    if (uVar2 == uVar1) {
      lVar8 = 8;
    }
    local_e8.TID = *(int *)(local_d8.AllocatorInstance.Data + lVar8);
    lVar6 = *(longlong *)(param_1->_padding_ + (ulonglong)((uint)local_e8.TID >> 9) * 8);
    lVar8 = (longlong)(int)*(uint *)(local_d8.AllocatorInstance.Data + lVar8 + 4);
    local_a0 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(local_e8.TID & 0x1ff) * 0xc);
    local_a8 = *(undefined8 *)(lVar6 + (ulonglong)(local_e8.TID & 0x1ff) * 0xc);
    local_88._s_0.A = *(int *)((longlong)&local_a8 + lVar8 * 4);
    local_88._s_0.B =
         *(int *)((longlong)&local_a8 +
                 (longlong)*(int *)((longlong)&param_1->_padding_ + lVar8 * 4) * 4);
    local_e8.EID = local_88._s_0.B;
    local_88._s_0.C =
         *(int *)((longlong)&local_a8 +
                 (longlong)*(int *)((longlong)&param_1->_padding_ + lVar8 * 4 + 4) * 4);
    local_e8.CIdx =
         UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::NumCornerCrossingRefEdges
                   (&param_1->NormalCoordinates,(FIndex3i *)&local_88._s_0,2);
  }
  else {
    if (local_c8.ArrayNum == 2) {
      uVar2 = *(uint *)local_c8.AllocatorInstance.Data;
      if ((true < (uVar2 == uVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FEdgeAndCrossingIdx *)(*pcVar3)();
        return pFVar5;
      }
      iVar7 = *(int *)(local_c8.AllocatorInstance.Data + (ulonglong)(uVar2 == uVar1) * 4);
      `FNormalCoordSurfaceTraceImpl::
      NextCrossingFromEdgePoint<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l2::<lambda_1>::operator()
                (&local_60,&local_50,iVar7,&local_e8);
      lVar8 = *(longlong *)(param_1->_padding_ + (ulonglong)((uint)local_e8.TID >> 9) * 8);
      local_70 = *(undefined4 *)(lVar8 + 8 + (ulonglong)(local_e8.TID & 0x1ff) * 0xc);
      local_78 = *(undefined8 *)(lVar8 + (ulonglong)(local_e8.TID & 0x1ff) * 0xc);
      *param_2 = *(int *)((longlong)&local_78 + (longlong)local_e8.EID * 4);
      *param_3 = iVar7;
      *param_4 = true;
      goto LAB_14c6d1da0;
    }
    if (local_d8.ArrayNum < 1) goto LAB_14c6d1da0;
    local_e8.TID = *(int *)local_d8.AllocatorInstance.Data;
    lVar8 = *(longlong *)(param_1->_padding_ + (ulonglong)((uint)local_e8.TID >> 9) * 8);
    lVar6 = (longlong)(int)*(uint *)(local_d8.AllocatorInstance.Data + 4);
    local_b0 = *(undefined4 *)(lVar8 + 8 + (ulonglong)(local_e8.TID & 0x1ff) * 0xc);
    local_b8 = *(undefined8 *)(lVar8 + (ulonglong)(local_e8.TID & 0x1ff) * 0xc);
    local_98._s_0.A = *(int *)((longlong)&local_b8 + lVar6 * 4);
    local_98._s_0.B =
         *(int *)((longlong)&local_b8 +
                 (longlong)*(int *)((longlong)&param_1->_padding_ + lVar6 * 4) * 4);
    local_e8.EID = local_98._s_0.B;
    local_98._s_0.C =
         *(int *)((longlong)&local_b8 +
                 (longlong)*(int *)((longlong)&param_1->_padding_ + lVar6 * 4 + 4) * 4);
    local_e8.CIdx =
         UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::NumCornerCrossingRefEdges
                   (&param_1->NormalCoordinates,(FIndex3i *)&local_98._s_0,2);
  }
  local_e8.CIdx = local_e8.CIdx + 1;
  if ((iVar7 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FEdgeAndCrossingIdx *)(*pcVar3)();
    return pFVar5;
  }
  *param_3 = *(uint *)local_d8.AllocatorInstance.Data;
  *param_4 = false;
LAB_14c6d1da0:
  __return_storage_ptr__->TID = local_e8.TID;
  __return_storage_ptr__->EID = local_e8.EID;
  __return_storage_ptr__->CIdx = local_e8.CIdx;
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// NextCrossingFromEdgePoint<UE::Geometry::FIntrinsicMesh> @ 14c6d1e00

FEdgeAndCrossingIdx * __cdecl
FNormalCoordSurfaceTraceImpl::NextCrossingFromEdgePoint<UE::Geometry::FIntrinsicMesh>
          (FEdgeAndCrossingIdx *__return_storage_ptr__,FIntrinsicMesh *param_1,int *param_2,
          int *param_3,bool *param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FEdgeAndCrossingIdx *pFVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  FEdgeAndCrossingIdx local_e8;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  FIndex3i_u_0 local_98;
  FIndex3i_u_0 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  FIntrinsicMesh *local_60;
  int *local_58;
  FEdgeAndCrossingIdx local_50;
  FEdgeAndCrossingIdx local_40 [2];
  
  lVar8 = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  GetAdjElementsContainingSurfaceEdge<UE::Geometry::FIntrinsicMesh>
            (param_1,*param_2,&local_d8,&local_c8);
  uVar1 = *param_3;
  local_60 = param_1;
  local_58 = param_2;
  local_e8.TID = -1;
  local_e8.EID = -1;
  local_e8.CIdx = -1;
  iVar7 = local_d8.ArrayNum;
  if (*param_4 == false) {
    if (local_c8.ArrayNum == 1) {
      uVar1 = *(uint *)local_c8.AllocatorInstance.Data;
      `FNormalCoordSurfaceTraceImpl::NextCrossingFromEdgePoint<UE::Geometry::FIntrinsicMesh>'::__l2
      ::<lambda_1>::operator()(&local_60,local_40,uVar1,&local_e8);
      lVar8 = *(longlong *)(param_1->_padding_ + (ulonglong)((uint)local_e8.TID >> 9) * 8);
      local_64 = *(undefined4 *)(lVar8 + 8 + (ulonglong)(local_e8.TID & 0x1ff) * 0xc);
      local_6c = *(undefined8 *)(lVar8 + (ulonglong)(local_e8.TID & 0x1ff) * 0xc);
      *param_2 = *(int *)((longlong)&local_6c + (longlong)local_e8.EID * 4);
      *param_3 = uVar1;
      *param_4 = true;
      goto LAB_14c6d2170;
    }
    if (local_d8.ArrayNum != 2) goto LAB_14c6d2170;
    uVar2 = *(uint *)local_d8.AllocatorInstance.Data;
    iVar7 = 2;
    if (true < (uVar2 == uVar1)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FEdgeAndCrossingIdx *)(*pcVar3)();
        return pFVar5;
      }
      iVar7 = local_d8.ArrayNum;
    }
    if (uVar2 == uVar1) {
      lVar8 = 8;
    }
    local_e8.TID = *(int *)(local_d8.AllocatorInstance.Data + lVar8);
    lVar6 = *(longlong *)(param_1->_padding_ + (ulonglong)((uint)local_e8.TID >> 9) * 8);
    lVar8 = (longlong)(int)*(uint *)(local_d8.AllocatorInstance.Data + lVar8 + 4);
    local_a0 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(local_e8.TID & 0x1ff) * 0xc);
    local_a8 = *(undefined8 *)(lVar6 + (ulonglong)(local_e8.TID & 0x1ff) * 0xc);
    local_88._s_0.A = *(int *)((longlong)&local_a8 + lVar8 * 4);
    local_88._s_0.B =
         *(int *)((longlong)&local_a8 +
                 (longlong)*(int *)((longlong)&param_1->_padding_ + lVar8 * 4) * 4);
    local_e8.EID = local_88._s_0.B;
    local_88._s_0.C =
         *(int *)((longlong)&local_a8 +
                 (longlong)*(int *)((longlong)&param_1->_padding_ + lVar8 * 4 + 4) * 4);
    local_e8.CIdx =
         UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::NumCornerCrossingRefEdges
                   (&param_1->NormalCoordinates,(FIndex3i *)&local_88._s_0,2);
  }
  else {
    if (local_c8.ArrayNum == 2) {
      uVar2 = *(uint *)local_c8.AllocatorInstance.Data;
      if ((true < (uVar2 == uVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FEdgeAndCrossingIdx *)(*pcVar3)();
        return pFVar5;
      }
      iVar7 = *(int *)(local_c8.AllocatorInstance.Data + (ulonglong)(uVar2 == uVar1) * 4);
      `FNormalCoordSurfaceTraceImpl::NextCrossingFromEdgePoint<UE::Geometry::FIntrinsicMesh>'::__l2
      ::<lambda_1>::operator()(&local_60,&local_50,iVar7,&local_e8);
      lVar8 = *(longlong *)(param_1->_padding_ + (ulonglong)((uint)local_e8.TID >> 9) * 8);
      local_70 = *(undefined4 *)(lVar8 + 8 + (ulonglong)(local_e8.TID & 0x1ff) * 0xc);
      local_78 = *(undefined8 *)(lVar8 + (ulonglong)(local_e8.TID & 0x1ff) * 0xc);
      *param_2 = *(int *)((longlong)&local_78 + (longlong)local_e8.EID * 4);
      *param_3 = iVar7;
      *param_4 = true;
      goto LAB_14c6d2170;
    }
    if (local_d8.ArrayNum < 1) goto LAB_14c6d2170;
    local_e8.TID = *(int *)local_d8.AllocatorInstance.Data;
    lVar8 = *(longlong *)(param_1->_padding_ + (ulonglong)((uint)local_e8.TID >> 9) * 8);
    lVar6 = (longlong)(int)*(uint *)(local_d8.AllocatorInstance.Data + 4);
    local_b0 = *(undefined4 *)(lVar8 + 8 + (ulonglong)(local_e8.TID & 0x1ff) * 0xc);
    local_b8 = *(undefined8 *)(lVar8 + (ulonglong)(local_e8.TID & 0x1ff) * 0xc);
    local_98._s_0.A = *(int *)((longlong)&local_b8 + lVar6 * 4);
    local_98._s_0.B =
         *(int *)((longlong)&local_b8 +
                 (longlong)*(int *)((longlong)&param_1->_padding_ + lVar6 * 4) * 4);
    local_e8.EID = local_98._s_0.B;
    local_98._s_0.C =
         *(int *)((longlong)&local_b8 +
                 (longlong)*(int *)((longlong)&param_1->_padding_ + lVar6 * 4 + 4) * 4);
    local_e8.CIdx =
         UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::NumCornerCrossingRefEdges
                   (&param_1->NormalCoordinates,(FIndex3i *)&local_98._s_0,2);
  }
  local_e8.CIdx = local_e8.CIdx + 1;
  if ((iVar7 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FEdgeAndCrossingIdx *)(*pcVar3)();
    return pFVar5;
  }
  *param_3 = *(uint *)local_d8.AllocatorInstance.Data;
  *param_4 = false;
LAB_14c6d2170:
  __return_storage_ptr__->TID = local_e8.TID;
  __return_storage_ptr__->EID = local_e8.EID;
  __return_storage_ptr__->CIdx = local_e8.CIdx;
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh> @ 14c6d8610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
* __cdecl FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>
                    (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
                     *__return_storage_ptr__,FIntrinsicEdgeFlipMesh *param_1,int param_2,int param_3
                    )

{
  FNormalCoordinates *this;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
  *pTVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
  local_c8;
  int local_b8 [2];
  <unnamed_type_FinderInfo> local_b0;
  int local_98 [2];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  <lambda_1> local_70;
  
  this = &param_1->NormalCoordinates;
  lVar4 = this->_padding_;
  if ((-1 < param_2) && (param_2 < *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144))) {
    uVar12 = (ulonglong)(param_2 & 0x1ff);
    lVar2 = (ulonglong)((uint)param_2 >> 9) * 8;
    if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x148) + lVar2) + uVar12 * 2) - 1U)
         < 0xfffe) && ((uint)param_3 < 3)) {
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x130) + lVar2);
      local_88 = *(undefined4 *)(lVar5 + 8 + uVar12 * 0xc);
      local_90 = *(undefined8 *)(lVar5 + uVar12 * 0xc);
      uVar16 = *(uint *)((longlong)&local_90 + (longlong)param_3 * 4);
      uVar14 = 0;
      iVar10 = *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x180) + lVar2) +
                       ((longlong)param_3 + uVar12 * 3) * 4);
      uVar8 = uVar14;
      if ((int)uVar16 < (int)(param_1->NormalCoordinates)._padding_) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar11;
      }
      local_b8[0] = UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::GetEdgeOrder
                              (this,uVar16,iVar10);
      uVar8 = uVar14;
      if ((int)uVar16 < (param_1->NormalCoordinates).RefVertDegree.ArrayNum) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar11;
      }
      local_98[0] = *(int *)((param_1->NormalCoordinates).RefVertDegree.AllocatorInstance.Data +
                            (longlong)(int)uVar16 * 4);
      local_b0.bIsAlsoSurfaceEdge = false;
      local_b0.TID = (int)___xmm_ffffffffffffffffffffffffffffffff;
      local_b0.EID = (int)((ulonglong)___xmm_ffffffffffffffffffffffffffffffff >> 0x20);
      local_b0.IdxOf = (int)_UNK_15060db28;
      local_b0.FirstRoundabout = (int)((ulonglong)_UNK_15060db28 >> 0x20);
      local_b0.SecondRoundabout = -1;
      uVar8 = IdentifyInitialAdjacentEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>(param_1,uVar16);
      lVar4 = (ulonglong)(uVar8 >> 9) * 8;
      uVar12 = *(ulonglong *)
                (*(longlong *)(param_1->_padding_ + lVar4) + 8 + (ulonglong)(uVar8 & 0x1ff) * 0x10);
      uVar15 = (uint)uVar12;
      if (uVar15 == (uint)(uVar12 >> 0x20)) {
        uVar13 = (ulonglong)(uVar15 & 0x1ff);
        lVar2 = ((uVar12 & 0xffffffff) >> 9) * 8;
        lVar5 = *(longlong *)(param_1->_padding_ + lVar2);
        local_90 = *(undefined8 *)(lVar5 + uVar13 * 0xc);
        if ((uint)local_90 == uVar16) {
          local_b0.IdxOf = 0;
        }
        else if ((uint)((ulonglong)local_90 >> 0x20) == uVar16) {
          local_b0.IdxOf = 1;
        }
        else {
          local_b0.IdxOf = -1;
          if (*(uint *)(lVar5 + 8 + uVar13 * 0xc) == uVar16) {
            local_b0.IdxOf = 2;
          }
        }
        local_b0.FirstRoundabout =
             *(int *)(*(longlong *)
                       ((param_1->NormalCoordinates).RoundaboutOrder.Blocks.AllocatorInstance.Data +
                       lVar2) + (uVar13 * 3 + (longlong)local_b0.IdxOf) * 4);
        local_b0.TID = uVar15;
        local_b0.EID = uVar8;
        local_b0.SecondRoundabout = local_b0.FirstRoundabout;
        if ((*(int *)(*(longlong *)
                       ((param_1->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data +
                       lVar4) + (ulonglong)(uVar8 & 0x1ff) * 4) == -1) &&
           (local_b0.FirstRoundabout == local_b8[0])) {
          local_b0.bIsAlsoSurfaceEdge = true;
        }
        else {
          local_b0.bIsAlsoSurfaceEdge = false;
        }
      }
      else {
        local_70.OrderOfTraceEID = local_b8;
        local_70.ValenceOfStartVID = local_98;
        local_70.FinderInfo = &local_b0;
        local_70.IntrinsicMesh = param_1;
        local_70.NCoords = this;
        UE::Geometry::IntrinsicCorrespondenceUtils::
        VisitVertexAdjacentElements<UE::Geometry::FIntrinsicEdgeFlipMesh,_FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>_::__l12::<lambda_1>_>
                  (param_1,uVar16,uVar8,&local_70);
      }
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
      iVar10 = iVar9 + 1;
      pFVar1 = local_c8.AllocatorInstance.Data + (longlong)iVar9 * 0xc;
      *(undefined8 *)pFVar1 = 0;
      *(undefined4 *)(pFVar1 + 8) = 0;
      *(int *)pFVar1 = local_b0.TID;
      *(int *)(pFVar1 + 4) = local_b0.IdxOf;
      local_c8.ArrayNum = iVar10;
      if (local_b0.bIsAlsoSurfaceEdge != false) {
        if (iVar10 == local_c8.ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
        }
        pFVar1 = local_c8.AllocatorInstance.Data + (longlong)iVar10 * 0xc;
        *(undefined8 *)pFVar1 = 0;
        *(undefined4 *)(pFVar1 + 8) = 0;
        *(int *)pFVar1 = local_b0.TID;
        local_b0.IdxOf = local_b0.IdxOf + 1;
        *(int *)(pFVar1 + 4) =
             local_b0.IdxOf +
             (local_b0.IdxOf / 3 + (local_b0.IdxOf >> 0x1f) +
             (int)(((longlong)local_b0.IdxOf / 3 + ((longlong)local_b0.IdxOf >> 0x3f) & 0xffffffffU)
                  >> 0x1f)) * -3;
        (__return_storage_ptr__->AllocatorInstance).Data = local_c8.AllocatorInstance.Data;
        __return_storage_ptr__->ArrayNum = iVar10 + 1;
        __return_storage_ptr__->ArrayMax = local_c8.ArrayMax;
        return __return_storage_ptr__;
      }
      lVar4 = *(longlong *)(param_1->_padding_ + (ulonglong)((uint)local_b0.TID >> 9) * 8);
      local_78 = *(undefined4 *)(lVar4 + 8 + (ulonglong)(local_b0.TID & 0x1ff) * 0xc);
      iVar9 = local_b0.IdxOf + 1;
      local_80 = *(undefined8 *)(lVar4 + (ulonglong)(local_b0.TID & 0x1ff) * 0xc);
      uVar3 = *(undefined4 *)
               ((longlong)&local_80 +
               (longlong)
               (iVar9 + (iVar9 / 3 + (iVar9 >> 0x1f) +
                        (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >>
                             0x1f)) * -3) * 4);
      iVar9 = ((local_98[0] - local_b0.FirstRoundabout) + local_b8[0]) % local_98[0];
      uVar16 = *(uint *)(*(longlong *)
                          ((param_1->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)local_b0.EID >> 9) * 8) +
                        (ulonglong)(local_b0.EID & 0x1ff) * 4);
      if (uVar16 != 0xffffffff) {
        if ((int)uVar16 < 1) {
          uVar16 = uVar14;
        }
        iVar9 = iVar9 + 1 + uVar16;
      }
      if (iVar10 == local_c8.ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
      }
      local_c8.ArrayNum = iVar10 + 1;
      pFVar1 = local_c8.AllocatorInstance.Data + (longlong)iVar10 * 0xc;
      *(undefined8 *)pFVar1 = 0;
      *(undefined4 *)(pFVar1 + 8) = 0;
      *(int *)pFVar1 = local_b0.TID;
      *(undefined4 *)(pFVar1 + 4) = uVar3;
      *(int *)(pFVar1 + 8) = iVar9;
      ContinueTraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>(param_1,&local_c8);
      (__return_storage_ptr__->AllocatorInstance).Data = local_c8.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = local_c8.ArrayNum;
      __return_storage_ptr__->ArrayMax = local_c8.ArrayMax;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// TraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh> @ 14c6d8ad0

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
* __cdecl FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>
                    (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
                     *__return_storage_ptr__,FIntrinsicEdgeFlipMesh *param_1,int param_2,
                    bool param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong uVar8;
  bool bVar9;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
  *pTVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ForAnyElementType local_b8;
  int local_b0 [2];
  ulonglong local_a8;
  uint local_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int iStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
  local_68;
  BaseValueIterator local_58;
  
  lVar17 = (param_1->NormalCoordinates)._padding_;
  if ((-1 < param_2) && (param_2 < *(int *)(lVar17 + 0x1d0) * 0x200 + *(int *)(lVar17 + 0x1d4))) {
    local_a8 = (ulonglong)((uint)param_2 >> 9);
    uVar13 = (ulonglong)(param_2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar17 + 0x1d8) + local_a8 * 8) + uVar13 * 2
                           ) - 1U) < 0xfffe) {
      uVar3 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar17 + 0x1c0) + local_a8 * 8) + uVar13 * 0x10);
      uVar8 = uVar3 >> 0x20;
      if (param_3) {
        uVar8 = uVar3;
        uVar3 = uVar3 >> 0x20;
      }
      iVar19 = (int)uVar3;
      UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
                (&local_58,(FSmallListSet *)&param_1->_padding_,iVar19,false);
      while( true ) {
        if ((((local_58.ListSet == (FSmallListSet *)&param_1->_padding_) &&
             (local_58.ListIndex == iVar19)) && (local_58.iCur == -1)) && (local_58.cur_ptr == -1))
        goto LAB_14c6d8dd9;
        uVar12 = local_58.cur_value;
        lVar1 = ((local_58._32_8_ & 0xffffffff) >> 9) * 8;
        puVar18 = (undefined8 *)
                  (*(longlong *)(param_1->_padding_ + lVar1) + (ulonglong)(uVar12 & 0x1ff) * 0x10);
        uVar4 = *puVar18;
        if ((((int)uVar4 == (int)uVar8) || ((int)((ulonglong)uVar4 >> 0x20) == (int)uVar8)) &&
           (*(int *)(*(longlong *)
                      ((param_1->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data +
                      lVar1) + (ulonglong)(uVar12 & 0x1ff) * 4) == -1)) break;
        UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_58);
      }
      if (uVar12 != 0xffffffff) {
        uVar11 = *(uint *)(puVar18 + 1);
        uVar21 = 0;
        lVar17 = (ulonglong)(uVar11 >> 9) * 8;
        lVar1 = (ulonglong)(uVar11 & 0x1ff) * 0xc;
        lVar5 = *(longlong *)(param_1->_padding_ + lVar17);
        local_a8 = *(undefined8 *)(lVar5 + lVar1);
        local_a0 = *(uint *)(lVar5 + 8 + lVar1);
        if ((uint)local_a8 != uVar12) {
          if ((uint)(local_a8 >> 0x20) == uVar12) {
            uVar21 = 1;
          }
          else {
            uVar21 = 0xffffffff;
            if (local_a0 == uVar12) {
              uVar21 = 2;
            }
          }
        }
        lVar17 = *(longlong *)(param_1->_padding_ + lVar17);
        local_90 = *(undefined4 *)(lVar17 + 8 + lVar1);
        local_98 = *(undefined8 *)(lVar17 + lVar1);
        iVar15 = *(int *)((longlong)&local_98 + (longlong)(int)uVar21 * 4);
        local_b8.Data = (FScriptContainerElement *)0x0;
        local_b0[0] = 0;
        local_b0[1] = 0;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,2,&local_b8,local_b0,local_b0 + 1);
        if ((local_b0[0] < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar10 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
                     *)(*pcVar7)();
          return pTVar10;
        }
        iVar20 = uVar21 + 1;
        *(uint *)local_b8.Data = uVar11;
        uVar12 = uVar21;
        if (iVar15 != iVar19) {
          uVar12 = iVar20 + (iVar20 / 3 + (iVar20 >> 0x1f) +
                            (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU)
                                 >> 0x1f)) * -3;
        }
        *(uint *)(local_b8.Data + 4) = uVar12;
        *(uint *)(local_b8.Data + 8) = 0;
        if ((local_b0[0] < 2) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar10 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
                     *)(*pcVar7)();
          return pTVar10;
        }
        *(uint *)(local_b8.Data + 0xc) = uVar11;
        if (iVar15 == iVar19) {
          uVar21 = iVar20 + (iVar20 / 3 + (iVar20 >> 0x1f) +
                            (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU)
                                 >> 0x1f)) * -3;
        }
        *(uint *)(local_b8.Data + 0x10) = uVar21;
        *(uint *)(local_b8.Data + 0x14) = 0;
        (__return_storage_ptr__->AllocatorInstance).Data = local_b8.Data;
        __return_storage_ptr__->ArrayNum = local_b0[0];
        __return_storage_ptr__->ArrayMax = local_b0[1];
        return __return_storage_ptr__;
      }
LAB_14c6d8dd9:
      uVar13 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(lVar17 + 0x1c0) + local_a8 * 8) + 8 + uVar13 * 0x10);
      uVar11 = (uint)(uVar13 >> 0x20);
      uVar12 = (uint)uVar13;
      lVar1 = ((uVar13 & 0xffffffff) >> 9) * 8;
      lVar5 = (ulonglong)(uVar12 & 0x1ff) * 0xc;
      lVar6 = *(longlong *)(*(longlong *)(lVar17 + 0x180) + lVar1);
      local_8c = *(undefined8 *)(lVar6 + lVar5);
      if ((int)local_8c == param_2) {
        iVar15 = 0;
      }
      else if ((int)((ulonglong)local_8c >> 0x20) == param_2) {
        iVar15 = 1;
      }
      else {
        iVar15 = -1;
        if (*(int *)(lVar6 + 8 + lVar5) == param_2) {
          iVar15 = 2;
        }
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar17 + 0x130) + lVar1);
      local_78 = *(undefined4 *)(lVar1 + 8 + lVar5);
      local_80 = *(undefined8 *)(lVar1 + lVar5);
      if (*(int *)((longlong)&local_80 + (longlong)iVar15 * 4) != iVar19) {
        if (uVar11 == 0xffffffff) {
          TraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>(&local_68,param_1,uVar12,iVar15);
          lVar17 = (longlong)(local_68.ArrayNum / 2);
          if (0 < local_68.ArrayNum / 2) {
            FVar14.Data = local_68.AllocatorInstance.Data;
            pFVar16 = local_68.AllocatorInstance.Data + (longlong)(local_68.ArrayNum + -1) * 0xc;
            do {
              uVar4 = *(undefined8 *)FVar14.Data;
              uVar2 = *(undefined4 *)(FVar14.Data + 8);
              *(undefined8 *)FVar14.Data = *(undefined8 *)pFVar16;
              *(undefined4 *)(FVar14.Data + 8) = *(undefined4 *)(pFVar16 + 8);
              *(undefined8 *)pFVar16 = uVar4;
              *(undefined4 *)(pFVar16 + 8) = uVar2;
              lVar17 = lVar17 + -1;
              FVar14.Data = FVar14.Data + 0xc;
              pFVar16 = pFVar16 + -0xc;
            } while (lVar17 != 0);
          }
          (__return_storage_ptr__->AllocatorInstance).Data = local_68.AllocatorInstance.Data;
          __return_storage_ptr__->ArrayNum = local_68.ArrayNum;
          __return_storage_ptr__->ArrayMax = local_68.ArrayMax;
          return __return_storage_ptr__;
        }
        lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x180) + (uVar13 >> 0x29) * 8);
        local_74 = *(undefined8 *)(lVar17 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
        iVar15 = 0;
        uVar12 = uVar11;
        if ((int)local_74 != param_2) {
          if ((int)((ulonglong)local_74 >> 0x20) == param_2) {
            iVar15 = 1;
          }
          else {
            iVar15 = -1;
            if (*(int *)(lVar17 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc) == param_2) {
              iVar15 = 2;
            }
          }
        }
      }
      TraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>
                (__return_storage_ptr__,param_1,uVar12,iVar15);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// TraceSurfaceEdge<UE::Geometry::FIntrinsicMesh> @ 14c6d8fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
* __cdecl FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicMesh>
                    (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
                     *__return_storage_ptr__,FIntrinsicMesh *param_1,int param_2,int param_3)

{
  FNormalCoordinates *this;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
  *pTVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  int local_res10 [2];
  int local_res18 [4];
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
  local_108;
  <unnamed_type_FinderInfo> local_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  <lambda_1> local_88;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  this = &param_1->NormalCoordinates;
  lVar17 = this->_padding_;
  if ((param_2 < 0) || (*(int *)(lVar17 + 0x140) * 0x200 + *(int *)(lVar17 + 0x144) <= param_2)) {
LAB_14c6d9782:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  uVar16 = (ulonglong)(param_2 & 0x1ff);
  lVar2 = (ulonglong)((uint)param_2 >> 9) * 8;
  if ((0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar17 + 0x148) + lVar2) +
                                   uVar16 * 2) - 1U)) || (2 < (uint)param_3)) goto LAB_14c6d9782;
  lVar5 = *(longlong *)(*(longlong *)(lVar17 + 0x130) + lVar2);
  local_d8 = *(undefined4 *)(lVar5 + 8 + uVar16 * 0xc);
  local_e0 = *(undefined8 *)(lVar5 + uVar16 * 0xc);
  uVar11 = *(uint *)((longlong)&local_e0 + (longlong)param_3 * 4);
  uVar14 = 0;
  iVar10 = *(int *)(*(longlong *)(*(longlong *)(lVar17 + 0x180) + lVar2) +
                   ((longlong)param_3 + uVar16 * 3) * 4);
  uVar8 = uVar14;
  if ((int)uVar11 < (int)(param_1->NormalCoordinates)._padding_) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
               *)(*pcVar6)();
    return pTVar12;
  }
  local_res18[0] =
       UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::GetEdgeOrder
                 (this,uVar11,iVar10);
  uVar8 = uVar14;
  if ((int)uVar11 < (param_1->NormalCoordinates).RefVertDegree.ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
               *)(*pcVar6)();
    return pTVar12;
  }
  local_res10[0] =
       *(int *)((param_1->NormalCoordinates).RefVertDegree.AllocatorInstance.Data +
               (longlong)(int)uVar11 * 4);
  local_f8.bIsAlsoSurfaceEdge = false;
  local_f8.TID = (int)___xmm_ffffffffffffffffffffffffffffffff;
  local_f8.EID = (int)((ulonglong)___xmm_ffffffffffffffffffffffffffffffff >> 0x20);
  local_f8.IdxOf = (int)_UNK_15060db28;
  local_f8.FirstRoundabout = (int)((ulonglong)_UNK_15060db28 >> 0x20);
  local_f8.SecondRoundabout = -1;
  uVar8 = IdentifyInitialAdjacentEdge<UE::Geometry::FIntrinsicMesh>(param_1,uVar11);
  lVar17 = (ulonglong)(uVar8 >> 9) * 8;
  uVar16 = *(ulonglong *)
            (*(longlong *)(param_1->_padding_ + lVar17) + 8 + (ulonglong)(uVar8 & 0x1ff) * 0x10);
  uVar15 = (uint)uVar16;
  uVar18 = 0;
  if (uVar15 == (uint)(uVar16 >> 0x20)) {
    uVar13 = (ulonglong)(uVar15 & 0x1ff);
    lVar2 = ((uVar16 & 0xffffffff) >> 9) * 8;
    lVar5 = *(longlong *)(lVar2 + param_1->_padding_);
    local_d0 = *(undefined8 *)(lVar5 + uVar13 * 0xc);
    local_f8.IdxOf = uVar18;
    if ((uint)local_d0 != uVar11) {
      if ((uint)((ulonglong)local_d0 >> 0x20) == uVar11) {
        local_f8.IdxOf = 1;
      }
      else {
        local_f8.IdxOf = 0xffffffff;
        if (*(uint *)(lVar5 + 8 + uVar13 * 0xc) == uVar11) {
          local_f8.IdxOf = 2;
        }
      }
    }
    local_f8.FirstRoundabout =
         *(int *)(*(longlong *)
                   ((param_1->NormalCoordinates).RoundaboutOrder.Blocks.AllocatorInstance.Data +
                   lVar2) + (uVar13 * 3 + (longlong)local_f8.IdxOf) * 4);
    local_f8.TID = uVar15;
    local_f8.EID = uVar8;
    local_f8.SecondRoundabout = local_f8.FirstRoundabout;
    if ((*(int *)(*(longlong *)
                   ((param_1->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data + lVar17)
                 + (ulonglong)(uVar8 & 0x1ff) * 4) == -1) &&
       (local_f8.FirstRoundabout == local_res18[0])) {
      local_f8.bIsAlsoSurfaceEdge = true;
    }
    else {
      local_f8.bIsAlsoSurfaceEdge = false;
    }
  }
  else {
    local_88.OrderOfTraceEID = local_res18;
    local_88.ValenceOfStartVID = local_res10;
    local_88.FinderInfo = &local_f8;
    local_88.IntrinsicMesh = param_1;
    local_88.NCoords = this;
    UE::Geometry::IntrinsicCorrespondenceUtils::
    VisitVertexAdjacentElements<UE::Geometry::FIntrinsicMesh,_FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicMesh>_::__l12::<lambda_1>_>
              (param_1,uVar11,uVar8,&local_88);
  }
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  iVar9 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40c,&local_108.AllocatorInstance,&local_108.ArrayMax);
  iVar10 = iVar9 + 1;
  pFVar1 = local_108.AllocatorInstance.Data + (longlong)iVar9 * 0xc;
  *(undefined8 *)pFVar1 = 0;
  *(undefined4 *)(pFVar1 + 8) = 0;
  *(int *)pFVar1 = local_f8.TID;
  *(int *)(pFVar1 + 4) = local_f8.IdxOf;
  local_108.ArrayNum = iVar10;
  if (local_f8.bIsAlsoSurfaceEdge == false) {
    lVar17 = *(longlong *)(param_1->_padding_ + (ulonglong)((uint)local_f8.TID >> 9) * 8);
    local_90 = *(undefined4 *)(lVar17 + 8 + (ulonglong)(local_f8.TID & 0x1ff) * 0xc);
    iVar9 = local_f8.IdxOf + 1;
    local_98 = *(undefined8 *)(lVar17 + (ulonglong)(local_f8.TID & 0x1ff) * 0xc);
    uVar4 = *(undefined4 *)
             ((longlong)&local_98 +
             (longlong)
             (iVar9 + (iVar9 / 3 + (iVar9 >> 0x1f) +
                      (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)
                      ) * -3) * 4);
    iVar9 = ((local_res10[0] - local_f8.FirstRoundabout) + local_res18[0]) % local_res10[0];
    uVar11 = *(uint *)(*(longlong *)
                        ((param_1->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data +
                        (ulonglong)((uint)local_f8.EID >> 9) * 8) +
                      (ulonglong)(local_f8.EID & 0x1ff) * 4);
    if (uVar11 != 0xffffffff) {
      if ((int)uVar11 < 1) {
        uVar11 = uVar14;
      }
      iVar9 = iVar9 + 1 + uVar11;
    }
    if (iVar10 == local_108.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&local_108.AllocatorInstance,&local_108.ArrayMax);
    }
    local_108.ArrayNum = iVar10 + 1;
    pFVar1 = local_108.AllocatorInstance.Data + (longlong)iVar10 * 0xc;
    *(undefined8 *)pFVar1 = 0;
    *(undefined4 *)(pFVar1 + 8) = 0;
    *(int *)pFVar1 = local_f8.TID;
    *(undefined4 *)(pFVar1 + 4) = uVar4;
    *(int *)(pFVar1 + 8) = iVar9;
    ContinueTraceSurfaceEdge<UE::Geometry::FIntrinsicMesh>(param_1,&local_108);
    iVar10 = local_108.ArrayNum;
LAB_14c6d9775:
    (__return_storage_ptr__->AllocatorInstance).Data = local_108.AllocatorInstance.Data;
  }
  else {
    if (iVar10 == local_108.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&local_108.AllocatorInstance,&local_108.ArrayMax);
    }
    local_108.ArrayNum = iVar10 + 1;
    pFVar1 = local_108.AllocatorInstance.Data + (longlong)iVar10 * 0xc;
    *(undefined8 *)pFVar1 = 0;
    *(undefined4 *)(pFVar1 + 8) = 0;
    *(int *)pFVar1 = local_f8.TID;
    iVar9 = local_f8.IdxOf + 1;
    *(int *)(pFVar1 + 4) =
         iVar9 + (iVar9 / 3 + (iVar9 >> 0x1f) +
                 (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                 -3;
    lVar17 = *(longlong *)(param_1->_padding_ + (ulonglong)((uint)local_f8.TID >> 9) * 8);
    local_b8 = *(undefined4 *)(lVar17 + 8 + (ulonglong)(local_f8.TID & 0x1ff) * 0xc);
    iVar9 = local_f8.IdxOf + 1;
    local_c0 = *(undefined8 *)(lVar17 + (ulonglong)(local_f8.TID & 0x1ff) * 0xc);
    uVar11 = *(uint *)((longlong)&local_c0 +
                      (longlong)
                      (iVar9 + (iVar9 / 3 + (iVar9 >> 0x1f) +
                               (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU)
                                    >> 0x1f)) * -3) * 4);
    uVar16 = (ulonglong)(uVar11 & 0x1ff);
    lVar17 = *(longlong *)
              ((param_1->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data +
              (ulonglong)(uVar11 >> 9) * 8);
    puVar3 = (undefined8 *)(lVar17 + 0x10 + uVar16 * 0x28);
    local_50 = *puVar3;
    uStack_48 = puVar3[1];
    local_40 = *(undefined8 *)(lVar17 + 0x20 + uVar16 * 0x28);
    if (*(int *)(lVar17 + uVar16 * 0x28) != 1) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_108.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      goto LAB_14c6d9487;
    }
    ContinueFromEdgePointCrossing<UE::Geometry::FIntrinsicMesh>
              (param_1,uVar11,local_f8.EID,true,&local_108);
    uVar16 = (ulonglong)local_108.ArrayNum;
    uVar11 = uVar18;
    if ((int)(local_108.ArrayNum - 1U) < local_108.ArrayNum) {
      uVar11 = ~(local_108.ArrayNum - 1U) >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar12;
      }
      uVar16 = local_108._8_8_ & 0xffffffff;
    }
    iVar10 = (int)uVar16;
    if (*(int *)(local_108.AllocatorInstance.Data + (longlong)(iVar10 + -1) * 0xc + 8) != 0) {
      if (iVar10 != 0) {
        do {
          iVar10 = (int)uVar16;
          uVar11 = uVar18;
          if ((int)(iVar10 - 1U) < iVar10) {
            uVar11 = ~(iVar10 - 1U) >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
                         *)(*pcVar6)();
              return pTVar12;
            }
            iVar10 = local_108.ArrayNum;
          }
          lVar17 = (longlong)iVar10;
          if (*(int *)(local_108.AllocatorInstance.Data + lVar17 * 0xc + -4) == 0) {
            uVar16 = (ulonglong)
                     (*(uint *)(local_108.AllocatorInstance.Data + lVar17 * 0xc + -0xc) & 0x1ff);
            lVar2 = *(longlong *)
                     (param_1->_padding_ +
                     (ulonglong)
                     (*(uint *)(local_108.AllocatorInstance.Data + lVar17 * 0xc + -0xc) >> 9) * 8);
            local_ac = *(undefined4 *)(lVar2 + 8 + uVar16 * 0xc);
            local_b4 = *(undefined8 *)(lVar2 + uVar16 * 0xc);
            uVar11 = *(uint *)((longlong)&local_b4 +
                              (longlong)
                              *(int *)(local_108.AllocatorInstance.Data + lVar17 * 0xc + -8) * 4);
            uVar16 = (ulonglong)(uVar11 & 0x1ff);
            lVar17 = *(longlong *)
                      ((param_1->IntrinsicVertexPositions).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar11 >> 9) * 8);
            puVar3 = (undefined8 *)(lVar17 + 0x10 + uVar16 * 0x28);
            local_40 = *(undefined8 *)(lVar17 + 0x20 + uVar16 * 0x28);
            local_50 = *puVar3;
            uStack_48 = puVar3[1];
            if (*(int *)(lVar17 + uVar16 * 0x28) == 0) break;
          }
          uVar11 = uVar18;
          if ((int)(iVar10 - 1U) < iVar10) {
            uVar11 = ~(iVar10 - 1U) >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
                         *)(*pcVar6)();
              return pTVar12;
            }
            iVar10 = local_108.ArrayNum;
          }
          lVar17 = (longlong)iVar10;
          if (*(int *)(local_108.AllocatorInstance.Data + lVar17 * 0xc + -4) == 0) {
            uVar11 = *(uint *)(local_108.AllocatorInstance.Data + lVar17 * 0xc + -0xc);
            lVar2 = *(longlong *)(param_1->_padding_ + (ulonglong)(uVar11 >> 9) * 8);
            local_a0 = *(undefined4 *)(lVar2 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
            local_a8 = *(undefined8 *)(lVar2 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
            ContinueFromEdgePointCrossing<UE::Geometry::FIntrinsicMesh>
                      (param_1,*(int *)((longlong)&local_a8 +
                                       (longlong)
                                       *(int *)(local_108.AllocatorInstance.Data + lVar17 * 0xc + -8
                                               ) * 4),uVar11,false,&local_108);
            uVar16 = local_108._8_8_ & 0xffffffff;
          }
          else {
            ContinueTraceSurfaceEdgeAcrossFaces<UE::Geometry::FIntrinsicMesh>(param_1,&local_108);
            uVar16 = local_108._8_8_ & 0xffffffff;
          }
        } while( true );
      }
      goto LAB_14c6d9775;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_108.AllocatorInstance.Data;
  }
  __return_storage_ptr__->ArrayNum = iVar10;
LAB_14c6d9487:
  __return_storage_ptr__->ArrayMax = local_108.ArrayMax;
  return __return_storage_ptr__;
}

// TraceSurfaceEdge<UE::Geometry::FIntrinsicMesh> @ 14c6d97a0

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
* __cdecl FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicMesh>
                    (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
                     *__return_storage_ptr__,FIntrinsicMesh *param_1,int param_2,bool param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong uVar8;
  bool bVar9;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
  *pTVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ForAnyElementType local_b8;
  int local_b0 [2];
  ulonglong local_a8;
  uint local_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int iStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
  local_68;
  BaseValueIterator local_58;
  
  lVar17 = (param_1->NormalCoordinates)._padding_;
  if ((-1 < param_2) && (param_2 < *(int *)(lVar17 + 0x1d0) * 0x200 + *(int *)(lVar17 + 0x1d4))) {
    local_a8 = (ulonglong)((uint)param_2 >> 9);
    uVar13 = (ulonglong)(param_2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar17 + 0x1d8) + local_a8 * 8) + uVar13 * 2
                           ) - 1U) < 0xfffe) {
      uVar3 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar17 + 0x1c0) + local_a8 * 8) + uVar13 * 0x10);
      uVar8 = uVar3 >> 0x20;
      if (param_3) {
        uVar8 = uVar3;
        uVar3 = uVar3 >> 0x20;
      }
      iVar19 = (int)uVar3;
      UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
                (&local_58,(FSmallListSet *)&param_1->_padding_,iVar19,false);
      while( true ) {
        if ((((local_58.ListSet == (FSmallListSet *)&param_1->_padding_) &&
             (local_58.ListIndex == iVar19)) && (local_58.iCur == -1)) && (local_58.cur_ptr == -1))
        goto LAB_14c6d9aa9;
        uVar12 = local_58.cur_value;
        lVar1 = ((local_58._32_8_ & 0xffffffff) >> 9) * 8;
        puVar18 = (undefined8 *)
                  (*(longlong *)(param_1->_padding_ + lVar1) + (ulonglong)(uVar12 & 0x1ff) * 0x10);
        uVar4 = *puVar18;
        if ((((int)uVar4 == (int)uVar8) || ((int)((ulonglong)uVar4 >> 0x20) == (int)uVar8)) &&
           (*(int *)(*(longlong *)
                      ((param_1->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data +
                      lVar1) + (ulonglong)(uVar12 & 0x1ff) * 4) == -1)) break;
        UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_58);
      }
      if (uVar12 != 0xffffffff) {
        uVar11 = *(uint *)(puVar18 + 1);
        uVar21 = 0;
        lVar17 = (ulonglong)(uVar11 >> 9) * 8;
        lVar1 = (ulonglong)(uVar11 & 0x1ff) * 0xc;
        lVar5 = *(longlong *)(param_1->_padding_ + lVar17);
        local_a8 = *(undefined8 *)(lVar5 + lVar1);
        local_a0 = *(uint *)(lVar5 + 8 + lVar1);
        if ((uint)local_a8 != uVar12) {
          if ((uint)(local_a8 >> 0x20) == uVar12) {
            uVar21 = 1;
          }
          else {
            uVar21 = 0xffffffff;
            if (local_a0 == uVar12) {
              uVar21 = 2;
            }
          }
        }
        lVar17 = *(longlong *)(param_1->_padding_ + lVar17);
        local_90 = *(undefined4 *)(lVar17 + 8 + lVar1);
        local_98 = *(undefined8 *)(lVar17 + lVar1);
        iVar15 = *(int *)((longlong)&local_98 + (longlong)(int)uVar21 * 4);
        local_b8.Data = (FScriptContainerElement *)0x0;
        local_b0[0] = 0;
        local_b0[1] = 0;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,2,&local_b8,local_b0,local_b0 + 1);
        if ((local_b0[0] < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar10 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
                     *)(*pcVar7)();
          return pTVar10;
        }
        iVar20 = uVar21 + 1;
        *(uint *)local_b8.Data = uVar11;
        uVar12 = uVar21;
        if (iVar15 != iVar19) {
          uVar12 = iVar20 + (iVar20 / 3 + (iVar20 >> 0x1f) +
                            (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU)
                                 >> 0x1f)) * -3;
        }
        *(uint *)(local_b8.Data + 4) = uVar12;
        *(uint *)(local_b8.Data + 8) = 0;
        if ((local_b0[0] < 2) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar10 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
                     *)(*pcVar7)();
          return pTVar10;
        }
        *(uint *)(local_b8.Data + 0xc) = uVar11;
        if (iVar15 == iVar19) {
          uVar21 = iVar20 + (iVar20 / 3 + (iVar20 >> 0x1f) +
                            (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU)
                                 >> 0x1f)) * -3;
        }
        *(uint *)(local_b8.Data + 0x10) = uVar21;
        *(uint *)(local_b8.Data + 0x14) = 0;
        (__return_storage_ptr__->AllocatorInstance).Data = local_b8.Data;
        __return_storage_ptr__->ArrayNum = local_b0[0];
        __return_storage_ptr__->ArrayMax = local_b0[1];
        return __return_storage_ptr__;
      }
LAB_14c6d9aa9:
      uVar13 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(lVar17 + 0x1c0) + local_a8 * 8) + 8 + uVar13 * 0x10);
      uVar11 = (uint)(uVar13 >> 0x20);
      uVar12 = (uint)uVar13;
      lVar1 = ((uVar13 & 0xffffffff) >> 9) * 8;
      lVar5 = (ulonglong)(uVar12 & 0x1ff) * 0xc;
      lVar6 = *(longlong *)(*(longlong *)(lVar17 + 0x180) + lVar1);
      local_8c = *(undefined8 *)(lVar6 + lVar5);
      if ((int)local_8c == param_2) {
        iVar15 = 0;
      }
      else if ((int)((ulonglong)local_8c >> 0x20) == param_2) {
        iVar15 = 1;
      }
      else {
        iVar15 = -1;
        if (*(int *)(lVar6 + 8 + lVar5) == param_2) {
          iVar15 = 2;
        }
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar17 + 0x130) + lVar1);
      local_78 = *(undefined4 *)(lVar1 + 8 + lVar5);
      local_80 = *(undefined8 *)(lVar1 + lVar5);
      if (*(int *)((longlong)&local_80 + (longlong)iVar15 * 4) != iVar19) {
        if (uVar11 == 0xffffffff) {
          TraceSurfaceEdge<UE::Geometry::FIntrinsicMesh>(&local_68,param_1,uVar12,iVar15);
          lVar17 = (longlong)(local_68.ArrayNum / 2);
          if (0 < local_68.ArrayNum / 2) {
            FVar14.Data = local_68.AllocatorInstance.Data;
            pFVar16 = local_68.AllocatorInstance.Data + (longlong)(local_68.ArrayNum + -1) * 0xc;
            do {
              uVar4 = *(undefined8 *)FVar14.Data;
              uVar2 = *(undefined4 *)(FVar14.Data + 8);
              *(undefined8 *)FVar14.Data = *(undefined8 *)pFVar16;
              *(undefined4 *)(FVar14.Data + 8) = *(undefined4 *)(pFVar16 + 8);
              *(undefined8 *)pFVar16 = uVar4;
              *(undefined4 *)(pFVar16 + 8) = uVar2;
              lVar17 = lVar17 + -1;
              FVar14.Data = FVar14.Data + 0xc;
              pFVar16 = pFVar16 + -0xc;
            } while (lVar17 != 0);
          }
          (__return_storage_ptr__->AllocatorInstance).Data = local_68.AllocatorInstance.Data;
          __return_storage_ptr__->ArrayNum = local_68.ArrayNum;
          __return_storage_ptr__->ArrayMax = local_68.ArrayMax;
          return __return_storage_ptr__;
        }
        lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x180) + (uVar13 >> 0x29) * 8);
        local_74 = *(undefined8 *)(lVar17 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
        iVar15 = 0;
        uVar12 = uVar11;
        if ((int)local_74 != param_2) {
          if ((int)((ulonglong)local_74 >> 0x20) == param_2) {
            iVar15 = 1;
          }
          else {
            iVar15 = -1;
            if (*(int *)(lVar17 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc) == param_2) {
              iVar15 = 2;
            }
          }
        }
      }
      TraceSurfaceEdge<UE::Geometry::FIntrinsicMesh>(__return_storage_ptr__,param_1,uVar12,iVar15);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// operator() @ 14c6e47a0

FEdgeAndCrossingIdx * __thiscall
`FNormalCoordSurfaceTraceImpl::NextCrossingFromEdgePoint<UE::Geometry::FIntrinsicEdgeFlipMesh>'::
__l2::<lambda_1>::operator()
          (void *this,FEdgeAndCrossingIdx *__return_storage_ptr__,int param_1,
          FEdgeAndCrossingIdx *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar4 = *(longlong *)this;
  uVar5 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) + 8 +
           (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar9 = (uint)uVar5;
  lVar1 = ((uVar5 & 0xffffffff) >> 9) * 8;
  lVar2 = (ulonglong)(uVar9 & 0x1ff) * 0xc;
  lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x130) + lVar1);
  uVar3 = *(undefined8 *)(lVar6 + lVar2);
  local_18._0_4_ = (int)uVar3;
  if ((int)local_18 == param_1) {
    iVar8 = 0;
  }
  else if ((int)((ulonglong)uVar3 >> 0x20) == param_1) {
    iVar8 = 1;
  }
  else {
    iVar8 = -1;
    if (*(int *)(lVar6 + 8 + lVar2) == param_1) {
      iVar8 = 2;
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0xe0) + lVar1);
  local_10 = *(undefined4 *)(lVar1 + 8 + lVar2);
  local_18 = *(undefined8 *)(lVar1 + lVar2);
  if (*(int *)((longlong)&local_18 + (longlong)iVar8 * 4) == **(int **)((longlong)this + 8)) {
    iVar8 = iVar8 + 1;
    iVar8 = iVar8 + (iVar8 / 3 + (iVar8 >> 0x1f) +
                    (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f))
                    * -3;
  }
  param_2->TID = uVar9;
  param_2->EID = iVar8;
  param_2->CIdx = 0;
  iVar8 = param_2->CIdx;
  iVar7 = param_2->EID;
  __return_storage_ptr__->TID = param_2->TID;
  __return_storage_ptr__->EID = iVar7;
  __return_storage_ptr__->CIdx = iVar8;
  return __return_storage_ptr__;
}

// operator() @ 14c6e48d0

FEdgeAndCrossingIdx * __thiscall
`FNormalCoordSurfaceTraceImpl::NextCrossingFromEdgePoint<UE::Geometry::FIntrinsicMesh>'::__l2::
<lambda_1>::operator()
          (void *this,FEdgeAndCrossingIdx *__return_storage_ptr__,int param_1,
          FEdgeAndCrossingIdx *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar4 = *(longlong *)this;
  uVar5 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) + 8 +
           (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar9 = (uint)uVar5;
  lVar1 = ((uVar5 & 0xffffffff) >> 9) * 8;
  lVar2 = (ulonglong)(uVar9 & 0x1ff) * 0xc;
  lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x130) + lVar1);
  uVar3 = *(undefined8 *)(lVar6 + lVar2);
  local_18._0_4_ = (int)uVar3;
  if ((int)local_18 == param_1) {
    iVar8 = 0;
  }
  else if ((int)((ulonglong)uVar3 >> 0x20) == param_1) {
    iVar8 = 1;
  }
  else {
    iVar8 = -1;
    if (*(int *)(lVar6 + 8 + lVar2) == param_1) {
      iVar8 = 2;
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0xe0) + lVar1);
  local_10 = *(undefined4 *)(lVar1 + 8 + lVar2);
  local_18 = *(undefined8 *)(lVar1 + lVar2);
  if (*(int *)((longlong)&local_18 + (longlong)iVar8 * 4) == **(int **)((longlong)this + 8)) {
    iVar8 = iVar8 + 1;
    iVar8 = iVar8 + (iVar8 / 3 + (iVar8 >> 0x1f) +
                    (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f))
                    * -3;
  }
  param_2->TID = uVar9;
  param_2->EID = iVar8;
  param_2->CIdx = 0;
  iVar8 = param_2->CIdx;
  iVar7 = param_2->EID;
  __return_storage_ptr__->TID = param_2->TID;
  __return_storage_ptr__->EID = iVar7;
  __return_storage_ptr__->CIdx = iVar8;
  return __return_storage_ptr__;
}

// operator() @ 14c6ef2e0

bool __thiscall
`FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l12::
<lambda_1>::operator()(void *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 local_38;
  undefined4 local_30;
  
  uVar12 = (ulonglong)(param_1 & 0x1ff);
  lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
  lVar4 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x50);
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x130) + lVar1);
  local_30 = *(undefined4 *)(lVar5 + 8 + uVar12 * 0xc);
  local_38 = *(undefined8 *)(lVar5 + uVar12 * 0xc);
  iVar2 = *(int *)(*(longlong *)(lVar4 + lVar1) + (uVar12 * 3 + (longlong)param_3) * 4);
  if ((*(int *)(*(longlong *)
                 (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x38) +
                 (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4) == -1) &&
     (iVar2 == **(int **)((longlong)this + 0x10))) {
    uVar9 = 1;
    iVar11 = -1;
    bVar10 = true;
    goto LAB_14c6ef497;
  }
  iVar7 = param_3 + 2;
  uVar9 = 0;
  bVar10 = false;
  iVar11 = -1;
  uVar3 = *(uint *)((longlong)&local_38 +
                   (longlong)
                   (iVar7 + (iVar7 / 3 + (iVar7 >> 0x1f) +
                            (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >>
                                 0x1f)) * -3) * 4);
  uVar6 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)this + 0x148) + (ulonglong)(uVar3 >> 9) * 8) +
            8 + (ulonglong)(uVar3 & 0x1ff) * 0x10);
  uVar8 = (uint)uVar6;
  if (uVar8 == param_1) {
    uVar8 = (uint)((ulonglong)uVar6 >> 0x20);
  }
  if (uVar8 == 0xffffffff) {
LAB_14c6ef494:
    bVar10 = true;
  }
  else {
    uVar12 = (ulonglong)(uVar8 & 0x1ff);
    lVar1 = (ulonglong)(uVar8 >> 9) * 8;
    lVar5 = *(longlong *)(lVar1 + *(longlong *)(*(longlong *)this + 0x130));
    uVar6 = *(undefined8 *)(lVar5 + uVar12 * 0xc);
    local_38._0_4_ = (uint)uVar6;
    if ((uint)local_38 == uVar3) {
      iVar11 = 0;
    }
    else if ((uint)((ulonglong)uVar6 >> 0x20) == uVar3) {
      iVar11 = 1;
    }
    else {
      iVar11 = -1;
      if (*(uint *)(lVar5 + 8 + uVar12 * 0xc) == uVar3) {
        iVar11 = 2;
      }
    }
    iVar11 = *(int *)(*(longlong *)(lVar4 + lVar1) + (uVar12 * 3 + (longlong)iVar11) * 4);
    if (iVar11 < iVar2) {
      if (iVar11 <= **(int **)((longlong)this + 0x10)) {
        iVar11 = iVar11 + **(int **)((longlong)this + 0x18);
        goto LAB_14c6ef47d;
      }
      iVar7 = **(int **)((longlong)this + 0x10);
      bVar10 = true;
LAB_14c6ef488:
      if (iVar2 <= iVar7) goto LAB_14c6ef494;
    }
    else {
LAB_14c6ef47d:
      iVar7 = **(int **)((longlong)this + 0x10);
      if (iVar7 < iVar11) goto LAB_14c6ef488;
    }
    if (bVar10 == false) {
      return false;
    }
  }
LAB_14c6ef497:
  **(undefined1 **)((longlong)this + 0x20) = uVar9;
  *(int *)(*(longlong *)((longlong)this + 0x20) + 4) = param_1;
  *(int *)(*(longlong *)((longlong)this + 0x20) + 8) = param_2;
  *(int *)(*(longlong *)((longlong)this + 0x20) + 0xc) = param_3;
  *(int *)(*(longlong *)((longlong)this + 0x20) + 0x10) = iVar2;
  *(int *)(*(longlong *)((longlong)this + 0x20) + 0x14) = iVar11;
  return bVar10;
}

// operator() @ 14c6ef4f0

bool __thiscall
`FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicMesh>'::__l12::<lambda_1>::
operator()(void *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 local_38;
  undefined4 local_30;
  
  uVar12 = (ulonglong)(param_1 & 0x1ff);
  lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
  lVar4 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x50);
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x130) + lVar1);
  local_30 = *(undefined4 *)(lVar5 + 8 + uVar12 * 0xc);
  local_38 = *(undefined8 *)(lVar5 + uVar12 * 0xc);
  iVar2 = *(int *)(*(longlong *)(lVar4 + lVar1) + (uVar12 * 3 + (longlong)param_3) * 4);
  if ((*(int *)(*(longlong *)
                 (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x38) +
                 (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4) == -1) &&
     (iVar2 == **(int **)((longlong)this + 0x10))) {
    uVar9 = 1;
    iVar11 = -1;
    bVar10 = true;
    goto LAB_14c6ef6a7;
  }
  iVar7 = param_3 + 2;
  uVar9 = 0;
  bVar10 = false;
  iVar11 = -1;
  uVar3 = *(uint *)((longlong)&local_38 +
                   (longlong)
                   (iVar7 + (iVar7 / 3 + (iVar7 >> 0x1f) +
                            (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >>
                                 0x1f)) * -3) * 4);
  uVar6 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)this + 0x148) + (ulonglong)(uVar3 >> 9) * 8) +
            8 + (ulonglong)(uVar3 & 0x1ff) * 0x10);
  uVar8 = (uint)uVar6;
  if (uVar8 == param_1) {
    uVar8 = (uint)((ulonglong)uVar6 >> 0x20);
  }
  if (uVar8 == 0xffffffff) {
LAB_14c6ef6a4:
    bVar10 = true;
  }
  else {
    uVar12 = (ulonglong)(uVar8 & 0x1ff);
    lVar1 = (ulonglong)(uVar8 >> 9) * 8;
    lVar5 = *(longlong *)(lVar1 + *(longlong *)(*(longlong *)this + 0x130));
    uVar6 = *(undefined8 *)(lVar5 + uVar12 * 0xc);
    local_38._0_4_ = (uint)uVar6;
    if ((uint)local_38 == uVar3) {
      iVar11 = 0;
    }
    else if ((uint)((ulonglong)uVar6 >> 0x20) == uVar3) {
      iVar11 = 1;
    }
    else {
      iVar11 = -1;
      if (*(uint *)(lVar5 + 8 + uVar12 * 0xc) == uVar3) {
        iVar11 = 2;
      }
    }
    iVar11 = *(int *)(*(longlong *)(lVar4 + lVar1) + (uVar12 * 3 + (longlong)iVar11) * 4);
    if (iVar11 < iVar2) {
      if (iVar11 <= **(int **)((longlong)this + 0x10)) {
        iVar11 = iVar11 + **(int **)((longlong)this + 0x18);
        goto LAB_14c6ef68d;
      }
      iVar7 = **(int **)((longlong)this + 0x10);
      bVar10 = true;
LAB_14c6ef698:
      if (iVar2 <= iVar7) goto LAB_14c6ef6a4;
    }
    else {
LAB_14c6ef68d:
      iVar7 = **(int **)((longlong)this + 0x10);
      if (iVar7 < iVar11) goto LAB_14c6ef698;
    }
    if (bVar10 == false) {
      return false;
    }
  }
LAB_14c6ef6a7:
  **(undefined1 **)((longlong)this + 0x20) = uVar9;
  *(int *)(*(longlong *)((longlong)this + 0x20) + 4) = param_1;
  *(int *)(*(longlong *)((longlong)this + 0x20) + 8) = param_2;
  *(int *)(*(longlong *)((longlong)this + 0x20) + 0xc) = param_3;
  *(int *)(*(longlong *)((longlong)this + 0x20) + 0x10) = iVar2;
  *(int *)(*(longlong *)((longlong)this + 0x20) + 0x14) = iVar11;
  return bVar10;
}

// operator() @ 14c6f07e0

void __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::TraceEdge'::__l2::<lambda_1>_>'
::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  longlong lVar16;
  longlong *plVar17;
  double *pdVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar31 [16];
  undefined8 local_138;
  uint local_130;
  undefined4 local_128;
  int local_124;
  double local_120;
  double dStack_118;
  TPairInitializer<int_const_&,int_const_&> local_110;
  double local_f8 [4];
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 *local_a8;
  int *local_a0;
  
  dVar6 = __real_3ff0000000000000;
  puVar19 = (uint *)0x0;
  plVar3 = *(longlong **)((longlong)this + 8);
  lVar16 = *(longlong *)
            (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  iVar11 = (int)plVar3[1];
  local_138 = *(undefined8 *)(lVar16 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_130 = *(uint *)(lVar16 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  iVar2 = *(int *)((longlong)plVar3 + 0x34);
  uVar8 = local_138;
  puVar15 = puVar19;
  puVar13 = puVar19;
  while( true ) {
    uVar22 = *(uint *)((longlong)&local_138 + (longlong)puVar15 * 4);
    iVar21 = (int)puVar13;
    if (iVar11 == iVar2) break;
    plVar17 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar17 = (longlong *)plVar3[8];
    }
    uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
    if (uVar10 == 0xffffffff) break;
    while (puVar13 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3), *puVar13 != uVar22) {
      uVar10 = puVar13[2];
      if (uVar10 == 0xffffffff) goto LAB_14c6f088b;
    }
    puVar14 = puVar13 + 1;
    if (puVar13 == (uint *)0x0) {
      puVar14 = puVar19;
    }
    if (puVar14 == (uint *)0x0) break;
    puVar13 = (uint *)(ulonglong)(iVar21 + 1);
    puVar15 = (uint *)((longlong)puVar15 + 1);
    if (2 < (longlong)puVar15) {
      return;
    }
  }
LAB_14c6f088b:
  if (iVar21 != -1) {
    lVar16 = *(longlong *)(*(longlong *)this + 0x10);
    lVar23 = *(longlong *)(lVar16 + (ulonglong)((uint)local_138 >> 9) * 8);
    pdVar18 = (double *)(lVar23 + (ulonglong)((uint)local_138 & 0x1ff) * 0x18);
    local_138._4_4_ = (uint)((ulonglong)local_138 >> 0x20);
    local_f8[0] = *pdVar18;
    local_f8[1] = pdVar18[1];
    local_f8[2] = (double)*(undefined8 *)
                           (lVar23 + 0x10 + (ulonglong)((uint)local_138 & 0x1ff) * 0x18);
    lVar23 = *(longlong *)(lVar16 + (ulonglong)(local_138._4_4_ >> 9) * 8);
    puVar1 = (undefined8 *)(lVar23 + (ulonglong)(local_138._4_4_ & 0x1ff) * 0x18);
    local_d0 = *(undefined8 *)(lVar23 + 0x10 + (ulonglong)(local_138._4_4_ & 0x1ff) * 0x18);
    local_f8[3] = (double)*puVar1;
    uStack_d8 = puVar1[1];
    lVar16 = *(longlong *)(lVar16 + (ulonglong)(local_130 >> 9) * 8);
    iVar20 = iVar21 + 2;
    puVar1 = (undefined8 *)(lVar16 + (ulonglong)(local_130 & 0x1ff) * 0x18);
    local_c8 = *puVar1;
    uStack_c0 = puVar1[1];
    local_b8 = *(undefined8 *)(lVar16 + 0x10 + (ulonglong)(local_130 & 0x1ff) * 0x18);
    iVar12 = iVar21 + 1;
    lVar23 = (longlong)
             (iVar20 + (iVar20 / 3 + (iVar20 >> 0x1f) +
                       (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >>
                            0x1f)) * -3);
    lVar16 = (longlong)
             (iVar12 + (iVar12 / 3 + (iVar12 >> 0x1f) +
                       (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >>
                            0x1f)) * -3);
    dVar27 = local_f8[lVar23 * 3] - local_f8[lVar16 * 3];
    dVar25 = local_f8[lVar23 * 3 + 2] - local_f8[lVar16 * 3 + 2];
    local_110.Value = (int *)(longlong)iVar21;
    dVar29 = local_f8[lVar23 * 3 + 1] - local_f8[lVar16 * 3 + 1];
    dVar28 = local_f8[(longlong)local_110.Value * 3] - local_f8[lVar16 * 3];
    dVar26 = local_f8[(longlong)local_110.Value * 3 + 1] - local_f8[lVar16 * 3 + 1];
    dVar24 = local_f8[(longlong)local_110.Value * 3 + 2] - local_f8[lVar16 * 3 + 2];
    uVar22 = *(uint *)((longlong)&local_138 + lVar16 * 4);
    dVar7 = dVar26 * dVar29 + dVar28 * dVar27 + dVar24 * dVar25;
    dVar25 = dVar29 * dVar29 + dVar27 * dVar27 + dVar25 * dVar25;
    if (dVar25 <= __real_3e45798ee2308c3a) {
      dVar25 = __real_3e45798ee2308c3a;
    }
    auVar30._8_8_ = 0;
    auVar30._0_8_ = dVar25;
    auVar31 = sqrtpd(unaff_XMM11,auVar30);
    dVar25 = __real_3ff0000000000000 / dVar25;
    dVar26 = (dVar26 * dVar26 + dVar28 * dVar28 + dVar24 * dVar24) - dVar7 * dVar7 * dVar25;
    if (dVar26 <= 0.0) {
      dVar26 = 0.0;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar26;
    auVar30 = sqrtpd(auVar30,auVar5);
    puVar15 = puVar19;
    puVar13 = puVar19;
    if (iVar11 != iVar2) {
      plVar17 = (longlong *)plVar3[8];
      if (plVar17 == (longlong *)0x0) {
        plVar17 = plVar3 + 7;
      }
      uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar14 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3);
          if (*puVar14 == uVar22) {
            if (uVar10 != 0xffffffff) {
              uVar22 = *(uint *)((longlong)&local_138 + lVar23 * 4);
              puVar13 = puVar14 + 1;
              if (puVar14 == (uint *)0x0) {
                puVar13 = puVar19;
              }
              goto LAB_14c6f0aef;
            }
            break;
          }
          uVar10 = puVar14[2];
        } while (uVar10 != 0xffffffff);
      }
    }
    uVar22 = *(uint *)((longlong)&local_138 + lVar23 * 4);
    if (iVar11 != iVar2) {
LAB_14c6f0aef:
      plVar17 = (longlong *)plVar3[8];
      if (plVar17 == (longlong *)0x0) {
        plVar17 = plVar3 + 7;
      }
      uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar15 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3);
          if (*puVar15 == uVar22) break;
          uVar10 = puVar15[2];
          puVar15 = puVar19;
        } while (uVar10 != 0xffffffff);
      }
    }
    uVar22 = *puVar13;
    puVar13 = puVar15 + 1;
    if (puVar15 == (uint *)0x0) {
      puVar13 = puVar19;
    }
    uVar10 = 0;
    if ((int)uVar22 < (int)plVar3[0xb]) {
      uVar10 = ~uVar22 >> 0x1f;
    }
    local_138 = uVar8;
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
    lVar16 = *(longlong *)((longlong)this + 8);
    pdVar18 = (double *)((longlong)(int)uVar22 * 0x10 + plVar3[10]);
    uVar22 = *puVar13;
    uVar10 = 0;
    if ((int)uVar22 < *(int *)(lVar16 + 0x58)) {
      uVar10 = ~uVar22 >> 0x1f;
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
    lVar16 = *(longlong *)(lVar16 + 0x50);
    lVar23 = *(longlong *)((longlong)this + 8);
    dVar6 = dVar6 / auVar31._0_8_;
    dVar26 = *(double *)(lVar16 + (longlong)(int)uVar22 * 0x10) - *pdVar18;
    dVar24 = *(double *)(lVar16 + 8 + (longlong)(int)uVar22 * 0x10) - pdVar18[1];
    dStack_118 = dVar24 * dVar7 * dVar25 + pdVar18[1] + dVar6 * dVar26 * auVar30._0_8_;
    local_120 = (dVar26 * dVar7 * dVar25 + *pdVar18) - dVar6 * dVar24 * auVar30._0_8_;
    if (((*(double **)(lVar23 + 0x50) <= &local_120) &&
        (&local_120 < *(double **)(lVar23 + 0x50) + (longlong)*(int *)(lVar23 + 0x5c) * 2)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = *(int *)(lVar23 + 0x58);
    if (iVar11 == *(int *)(lVar23 + 0x5c)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)(lVar23 + 0x50),(int *)(lVar23 + 0x5c));
    }
    *(int *)(lVar23 + 0x58) = iVar11 + 1;
    pdVar18 = (double *)(*(longlong *)(lVar23 + 0x50) + (longlong)iVar11 * 0x10);
    *pdVar18 = local_120;
    pdVar18[1] = dStack_118;
    local_124 = *(int *)&(*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            **)((longlong)this + 8))[1].Elements.field_0x8 + -1;
    local_128 = *(undefined4 *)((longlong)&local_138 + (longlong)local_110.Value * 4);
    local_a8 = &local_128;
    local_a0 = &local_124;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                 **)((longlong)this + 8),&local_110,(bool *)&local_a8);
  }
  return;
}

// operator() @ 14c6f0dd0

void __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::FIntrinsicEdgeFlipMesh::TraceSurfaceEdge'::__l2::<lambda_1>_>'
::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  longlong lVar16;
  longlong *plVar17;
  double *pdVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar31 [16];
  undefined8 local_138;
  uint local_130;
  undefined4 local_128;
  int local_124;
  double local_120;
  double dStack_118;
  TPairInitializer<int_const_&,int_const_&> local_110;
  double local_f8 [4];
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 *local_a8;
  int *local_a0;
  
  dVar6 = __real_3ff0000000000000;
  puVar19 = (uint *)0x0;
  plVar3 = *(longlong **)((longlong)this + 8);
  lVar16 = *(longlong *)
            (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  iVar11 = (int)plVar3[1];
  local_138 = *(undefined8 *)(lVar16 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_130 = *(uint *)(lVar16 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  iVar2 = *(int *)((longlong)plVar3 + 0x34);
  uVar8 = local_138;
  puVar15 = puVar19;
  puVar13 = puVar19;
  while( true ) {
    uVar22 = *(uint *)((longlong)&local_138 + (longlong)puVar15 * 4);
    iVar21 = (int)puVar13;
    if (iVar11 == iVar2) break;
    plVar17 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar17 = (longlong *)plVar3[8];
    }
    uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
    if (uVar10 == 0xffffffff) break;
    while (puVar13 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3), *puVar13 != uVar22) {
      uVar10 = puVar13[2];
      if (uVar10 == 0xffffffff) goto LAB_14c6f0e7b;
    }
    puVar14 = puVar13 + 1;
    if (puVar13 == (uint *)0x0) {
      puVar14 = puVar19;
    }
    if (puVar14 == (uint *)0x0) break;
    puVar13 = (uint *)(ulonglong)(iVar21 + 1);
    puVar15 = (uint *)((longlong)puVar15 + 1);
    if (2 < (longlong)puVar15) {
      return;
    }
  }
LAB_14c6f0e7b:
  if (iVar21 != -1) {
    lVar16 = *(longlong *)(*(longlong *)this + 0x10);
    lVar23 = *(longlong *)(lVar16 + (ulonglong)((uint)local_138 >> 9) * 8);
    pdVar18 = (double *)(lVar23 + (ulonglong)((uint)local_138 & 0x1ff) * 0x18);
    local_138._4_4_ = (uint)((ulonglong)local_138 >> 0x20);
    local_f8[0] = *pdVar18;
    local_f8[1] = pdVar18[1];
    local_f8[2] = (double)*(undefined8 *)
                           (lVar23 + 0x10 + (ulonglong)((uint)local_138 & 0x1ff) * 0x18);
    lVar23 = *(longlong *)(lVar16 + (ulonglong)(local_138._4_4_ >> 9) * 8);
    puVar1 = (undefined8 *)(lVar23 + (ulonglong)(local_138._4_4_ & 0x1ff) * 0x18);
    local_d0 = *(undefined8 *)(lVar23 + 0x10 + (ulonglong)(local_138._4_4_ & 0x1ff) * 0x18);
    local_f8[3] = (double)*puVar1;
    uStack_d8 = puVar1[1];
    lVar16 = *(longlong *)(lVar16 + (ulonglong)(local_130 >> 9) * 8);
    iVar20 = iVar21 + 2;
    puVar1 = (undefined8 *)(lVar16 + (ulonglong)(local_130 & 0x1ff) * 0x18);
    local_c8 = *puVar1;
    uStack_c0 = puVar1[1];
    local_b8 = *(undefined8 *)(lVar16 + 0x10 + (ulonglong)(local_130 & 0x1ff) * 0x18);
    iVar12 = iVar21 + 1;
    lVar23 = (longlong)
             (iVar20 + (iVar20 / 3 + (iVar20 >> 0x1f) +
                       (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >>
                            0x1f)) * -3);
    lVar16 = (longlong)
             (iVar12 + (iVar12 / 3 + (iVar12 >> 0x1f) +
                       (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >>
                            0x1f)) * -3);
    dVar27 = local_f8[lVar23 * 3] - local_f8[lVar16 * 3];
    dVar25 = local_f8[lVar23 * 3 + 2] - local_f8[lVar16 * 3 + 2];
    local_110.Value = (int *)(longlong)iVar21;
    dVar29 = local_f8[lVar23 * 3 + 1] - local_f8[lVar16 * 3 + 1];
    dVar28 = local_f8[(longlong)local_110.Value * 3] - local_f8[lVar16 * 3];
    dVar26 = local_f8[(longlong)local_110.Value * 3 + 1] - local_f8[lVar16 * 3 + 1];
    dVar24 = local_f8[(longlong)local_110.Value * 3 + 2] - local_f8[lVar16 * 3 + 2];
    uVar22 = *(uint *)((longlong)&local_138 + lVar16 * 4);
    dVar7 = dVar26 * dVar29 + dVar28 * dVar27 + dVar24 * dVar25;
    dVar25 = dVar29 * dVar29 + dVar27 * dVar27 + dVar25 * dVar25;
    if (dVar25 <= __real_3e45798ee2308c3a) {
      dVar25 = __real_3e45798ee2308c3a;
    }
    auVar30._8_8_ = 0;
    auVar30._0_8_ = dVar25;
    auVar31 = sqrtpd(unaff_XMM11,auVar30);
    dVar25 = __real_3ff0000000000000 / dVar25;
    dVar26 = (dVar26 * dVar26 + dVar28 * dVar28 + dVar24 * dVar24) - dVar7 * dVar7 * dVar25;
    if (dVar26 <= 0.0) {
      dVar26 = 0.0;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar26;
    auVar30 = sqrtpd(auVar30,auVar5);
    puVar15 = puVar19;
    puVar13 = puVar19;
    if (iVar11 != iVar2) {
      plVar17 = (longlong *)plVar3[8];
      if (plVar17 == (longlong *)0x0) {
        plVar17 = plVar3 + 7;
      }
      uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar14 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3);
          if (*puVar14 == uVar22) {
            if (uVar10 != 0xffffffff) {
              uVar22 = *(uint *)((longlong)&local_138 + lVar23 * 4);
              puVar13 = puVar14 + 1;
              if (puVar14 == (uint *)0x0) {
                puVar13 = puVar19;
              }
              goto LAB_14c6f10df;
            }
            break;
          }
          uVar10 = puVar14[2];
        } while (uVar10 != 0xffffffff);
      }
    }
    uVar22 = *(uint *)((longlong)&local_138 + lVar23 * 4);
    if (iVar11 != iVar2) {
LAB_14c6f10df:
      plVar17 = (longlong *)plVar3[8];
      if (plVar17 == (longlong *)0x0) {
        plVar17 = plVar3 + 7;
      }
      uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar15 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3);
          if (*puVar15 == uVar22) break;
          uVar10 = puVar15[2];
          puVar15 = puVar19;
        } while (uVar10 != 0xffffffff);
      }
    }
    uVar22 = *puVar13;
    puVar13 = puVar15 + 1;
    if (puVar15 == (uint *)0x0) {
      puVar13 = puVar19;
    }
    uVar10 = 0;
    if ((int)uVar22 < (int)plVar3[0xb]) {
      uVar10 = ~uVar22 >> 0x1f;
    }
    local_138 = uVar8;
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
    lVar16 = *(longlong *)((longlong)this + 8);
    pdVar18 = (double *)((longlong)(int)uVar22 * 0x10 + plVar3[10]);
    uVar22 = *puVar13;
    uVar10 = 0;
    if ((int)uVar22 < *(int *)(lVar16 + 0x58)) {
      uVar10 = ~uVar22 >> 0x1f;
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
    lVar16 = *(longlong *)(lVar16 + 0x50);
    lVar23 = *(longlong *)((longlong)this + 8);
    dVar6 = dVar6 / auVar31._0_8_;
    dVar26 = *(double *)(lVar16 + (longlong)(int)uVar22 * 0x10) - *pdVar18;
    dVar24 = *(double *)(lVar16 + 8 + (longlong)(int)uVar22 * 0x10) - pdVar18[1];
    dStack_118 = dVar24 * dVar7 * dVar25 + pdVar18[1] + dVar6 * dVar26 * auVar30._0_8_;
    local_120 = (dVar26 * dVar7 * dVar25 + *pdVar18) - dVar6 * dVar24 * auVar30._0_8_;
    if (((*(double **)(lVar23 + 0x50) <= &local_120) &&
        (&local_120 < *(double **)(lVar23 + 0x50) + (longlong)*(int *)(lVar23 + 0x5c) * 2)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = *(int *)(lVar23 + 0x58);
    if (iVar11 == *(int *)(lVar23 + 0x5c)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)(lVar23 + 0x50),(int *)(lVar23 + 0x5c));
    }
    *(int *)(lVar23 + 0x58) = iVar11 + 1;
    pdVar18 = (double *)(*(longlong *)(lVar23 + 0x50) + (longlong)iVar11 * 0x10);
    *pdVar18 = local_120;
    pdVar18[1] = dStack_118;
    local_124 = *(int *)&(*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            **)((longlong)this + 8))[1].Elements.field_0x8 + -1;
    local_128 = *(undefined4 *)((longlong)&local_138 + (longlong)local_110.Value * 4);
    local_a8 = &local_128;
    local_a0 = &local_124;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                 **)((longlong)this + 8),&local_110,(bool *)&local_a8);
  }
  return;
}

// operator() @ 14c6f13c0

void __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l2::<lambda_2>_>'
::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  longlong lVar16;
  longlong *plVar17;
  double *pdVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar31 [16];
  undefined8 local_138;
  uint local_130;
  undefined4 local_128;
  int local_124;
  double local_120;
  double dStack_118;
  TPairInitializer<int_const_&,int_const_&> local_110;
  double local_f8 [4];
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 *local_a8;
  int *local_a0;
  
  dVar6 = __real_3ff0000000000000;
  puVar19 = (uint *)0x0;
  plVar3 = *(longlong **)((longlong)this + 8);
  lVar16 = *(longlong *)
            (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  iVar11 = (int)plVar3[1];
  local_138 = *(undefined8 *)(lVar16 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_130 = *(uint *)(lVar16 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  iVar2 = *(int *)((longlong)plVar3 + 0x34);
  uVar8 = local_138;
  puVar15 = puVar19;
  puVar13 = puVar19;
  while( true ) {
    uVar22 = *(uint *)((longlong)&local_138 + (longlong)puVar15 * 4);
    iVar21 = (int)puVar13;
    if (iVar11 == iVar2) break;
    plVar17 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar17 = (longlong *)plVar3[8];
    }
    uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
    if (uVar10 == 0xffffffff) break;
    while (puVar13 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3), *puVar13 != uVar22) {
      uVar10 = puVar13[2];
      if (uVar10 == 0xffffffff) goto LAB_14c6f146b;
    }
    puVar14 = puVar13 + 1;
    if (puVar13 == (uint *)0x0) {
      puVar14 = puVar19;
    }
    if (puVar14 == (uint *)0x0) break;
    puVar13 = (uint *)(ulonglong)(iVar21 + 1);
    puVar15 = (uint *)((longlong)puVar15 + 1);
    if (2 < (longlong)puVar15) {
      return;
    }
  }
LAB_14c6f146b:
  if (iVar21 != -1) {
    lVar16 = *(longlong *)(*(longlong *)this + 0x10);
    lVar23 = *(longlong *)(lVar16 + (ulonglong)((uint)local_138 >> 9) * 8);
    pdVar18 = (double *)(lVar23 + (ulonglong)((uint)local_138 & 0x1ff) * 0x18);
    local_138._4_4_ = (uint)((ulonglong)local_138 >> 0x20);
    local_f8[0] = *pdVar18;
    local_f8[1] = pdVar18[1];
    local_f8[2] = (double)*(undefined8 *)
                           (lVar23 + 0x10 + (ulonglong)((uint)local_138 & 0x1ff) * 0x18);
    lVar23 = *(longlong *)(lVar16 + (ulonglong)(local_138._4_4_ >> 9) * 8);
    puVar1 = (undefined8 *)(lVar23 + (ulonglong)(local_138._4_4_ & 0x1ff) * 0x18);
    local_d0 = *(undefined8 *)(lVar23 + 0x10 + (ulonglong)(local_138._4_4_ & 0x1ff) * 0x18);
    local_f8[3] = (double)*puVar1;
    uStack_d8 = puVar1[1];
    lVar16 = *(longlong *)(lVar16 + (ulonglong)(local_130 >> 9) * 8);
    iVar20 = iVar21 + 2;
    puVar1 = (undefined8 *)(lVar16 + (ulonglong)(local_130 & 0x1ff) * 0x18);
    local_c8 = *puVar1;
    uStack_c0 = puVar1[1];
    local_b8 = *(undefined8 *)(lVar16 + 0x10 + (ulonglong)(local_130 & 0x1ff) * 0x18);
    iVar12 = iVar21 + 1;
    lVar23 = (longlong)
             (iVar20 + (iVar20 / 3 + (iVar20 >> 0x1f) +
                       (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >>
                            0x1f)) * -3);
    lVar16 = (longlong)
             (iVar12 + (iVar12 / 3 + (iVar12 >> 0x1f) +
                       (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >>
                            0x1f)) * -3);
    dVar27 = local_f8[lVar23 * 3] - local_f8[lVar16 * 3];
    dVar25 = local_f8[lVar23 * 3 + 2] - local_f8[lVar16 * 3 + 2];
    local_110.Value = (int *)(longlong)iVar21;
    dVar29 = local_f8[lVar23 * 3 + 1] - local_f8[lVar16 * 3 + 1];
    dVar28 = local_f8[(longlong)local_110.Value * 3] - local_f8[lVar16 * 3];
    dVar26 = local_f8[(longlong)local_110.Value * 3 + 1] - local_f8[lVar16 * 3 + 1];
    dVar24 = local_f8[(longlong)local_110.Value * 3 + 2] - local_f8[lVar16 * 3 + 2];
    uVar22 = *(uint *)((longlong)&local_138 + lVar16 * 4);
    dVar7 = dVar26 * dVar29 + dVar28 * dVar27 + dVar24 * dVar25;
    dVar25 = dVar29 * dVar29 + dVar27 * dVar27 + dVar25 * dVar25;
    if (dVar25 <= __real_3e45798ee2308c3a) {
      dVar25 = __real_3e45798ee2308c3a;
    }
    auVar30._8_8_ = 0;
    auVar30._0_8_ = dVar25;
    auVar31 = sqrtpd(unaff_XMM11,auVar30);
    dVar25 = __real_3ff0000000000000 / dVar25;
    dVar26 = (dVar26 * dVar26 + dVar28 * dVar28 + dVar24 * dVar24) - dVar7 * dVar7 * dVar25;
    if (dVar26 <= 0.0) {
      dVar26 = 0.0;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar26;
    auVar30 = sqrtpd(auVar30,auVar5);
    puVar15 = puVar19;
    puVar13 = puVar19;
    if (iVar11 != iVar2) {
      plVar17 = (longlong *)plVar3[8];
      if (plVar17 == (longlong *)0x0) {
        plVar17 = plVar3 + 7;
      }
      uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar14 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3);
          if (*puVar14 == uVar22) {
            if (uVar10 != 0xffffffff) {
              uVar22 = *(uint *)((longlong)&local_138 + lVar23 * 4);
              puVar13 = puVar14 + 1;
              if (puVar14 == (uint *)0x0) {
                puVar13 = puVar19;
              }
              goto LAB_14c6f16cf;
            }
            break;
          }
          uVar10 = puVar14[2];
        } while (uVar10 != 0xffffffff);
      }
    }
    uVar22 = *(uint *)((longlong)&local_138 + lVar23 * 4);
    if (iVar11 != iVar2) {
LAB_14c6f16cf:
      plVar17 = (longlong *)plVar3[8];
      if (plVar17 == (longlong *)0x0) {
        plVar17 = plVar3 + 7;
      }
      uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar15 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3);
          if (*puVar15 == uVar22) break;
          uVar10 = puVar15[2];
          puVar15 = puVar19;
        } while (uVar10 != 0xffffffff);
      }
    }
    uVar22 = *puVar13;
    puVar13 = puVar15 + 1;
    if (puVar15 == (uint *)0x0) {
      puVar13 = puVar19;
    }
    uVar10 = 0;
    if ((int)uVar22 < (int)plVar3[0xb]) {
      uVar10 = ~uVar22 >> 0x1f;
    }
    local_138 = uVar8;
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
    lVar16 = *(longlong *)((longlong)this + 8);
    pdVar18 = (double *)((longlong)(int)uVar22 * 0x10 + plVar3[10]);
    uVar22 = *puVar13;
    uVar10 = 0;
    if ((int)uVar22 < *(int *)(lVar16 + 0x58)) {
      uVar10 = ~uVar22 >> 0x1f;
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
    lVar16 = *(longlong *)(lVar16 + 0x50);
    lVar23 = *(longlong *)((longlong)this + 8);
    dVar6 = dVar6 / auVar31._0_8_;
    dVar26 = *(double *)(lVar16 + (longlong)(int)uVar22 * 0x10) - *pdVar18;
    dVar24 = *(double *)(lVar16 + 8 + (longlong)(int)uVar22 * 0x10) - pdVar18[1];
    dStack_118 = dVar24 * dVar7 * dVar25 + pdVar18[1] + dVar6 * dVar26 * auVar30._0_8_;
    local_120 = (dVar26 * dVar7 * dVar25 + *pdVar18) - dVar6 * dVar24 * auVar30._0_8_;
    if (((*(double **)(lVar23 + 0x50) <= &local_120) &&
        (&local_120 < *(double **)(lVar23 + 0x50) + (longlong)*(int *)(lVar23 + 0x5c) * 2)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = *(int *)(lVar23 + 0x58);
    if (iVar11 == *(int *)(lVar23 + 0x5c)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)(lVar23 + 0x50),(int *)(lVar23 + 0x5c));
    }
    *(int *)(lVar23 + 0x58) = iVar11 + 1;
    pdVar18 = (double *)(*(longlong *)(lVar23 + 0x50) + (longlong)iVar11 * 0x10);
    *pdVar18 = local_120;
    pdVar18[1] = dStack_118;
    local_124 = *(int *)&(*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            **)((longlong)this + 8))[1].Elements.field_0x8 + -1;
    local_128 = *(undefined4 *)((longlong)&local_138 + (longlong)local_110.Value * 4);
    local_a8 = &local_128;
    local_a0 = &local_124;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                 **)((longlong)this + 8),&local_110,(bool *)&local_a8);
  }
  return;
}

// operator() @ 14c6f19b0

void __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::TraceEdge'::__l2::<lambda_1>_>'
::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  longlong lVar16;
  longlong *plVar17;
  double *pdVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar31 [16];
  undefined8 local_138;
  uint local_130;
  undefined4 local_128;
  int local_124;
  double local_120;
  double dStack_118;
  TPairInitializer<int_const_&,int_const_&> local_110;
  double local_f8 [4];
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 *local_a8;
  int *local_a0;
  
  dVar6 = __real_3ff0000000000000;
  puVar19 = (uint *)0x0;
  plVar3 = *(longlong **)((longlong)this + 8);
  lVar16 = *(longlong *)
            (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  iVar11 = (int)plVar3[1];
  local_138 = *(undefined8 *)(lVar16 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_130 = *(uint *)(lVar16 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  iVar2 = *(int *)((longlong)plVar3 + 0x34);
  uVar8 = local_138;
  puVar15 = puVar19;
  puVar13 = puVar19;
  while( true ) {
    uVar22 = *(uint *)((longlong)&local_138 + (longlong)puVar15 * 4);
    iVar21 = (int)puVar13;
    if (iVar11 == iVar2) break;
    plVar17 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar17 = (longlong *)plVar3[8];
    }
    uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
    if (uVar10 == 0xffffffff) break;
    while (puVar13 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3), *puVar13 != uVar22) {
      uVar10 = puVar13[2];
      if (uVar10 == 0xffffffff) goto LAB_14c6f1a5b;
    }
    puVar14 = puVar13 + 1;
    if (puVar13 == (uint *)0x0) {
      puVar14 = puVar19;
    }
    if (puVar14 == (uint *)0x0) break;
    puVar13 = (uint *)(ulonglong)(iVar21 + 1);
    puVar15 = (uint *)((longlong)puVar15 + 1);
    if (2 < (longlong)puVar15) {
      return;
    }
  }
LAB_14c6f1a5b:
  if (iVar21 != -1) {
    lVar16 = *(longlong *)(*(longlong *)this + 0x10);
    lVar23 = *(longlong *)(lVar16 + (ulonglong)((uint)local_138 >> 9) * 8);
    pdVar18 = (double *)(lVar23 + (ulonglong)((uint)local_138 & 0x1ff) * 0x18);
    local_138._4_4_ = (uint)((ulonglong)local_138 >> 0x20);
    local_f8[0] = *pdVar18;
    local_f8[1] = pdVar18[1];
    local_f8[2] = (double)*(undefined8 *)
                           (lVar23 + 0x10 + (ulonglong)((uint)local_138 & 0x1ff) * 0x18);
    lVar23 = *(longlong *)(lVar16 + (ulonglong)(local_138._4_4_ >> 9) * 8);
    puVar1 = (undefined8 *)(lVar23 + (ulonglong)(local_138._4_4_ & 0x1ff) * 0x18);
    local_d0 = *(undefined8 *)(lVar23 + 0x10 + (ulonglong)(local_138._4_4_ & 0x1ff) * 0x18);
    local_f8[3] = (double)*puVar1;
    uStack_d8 = puVar1[1];
    lVar16 = *(longlong *)(lVar16 + (ulonglong)(local_130 >> 9) * 8);
    iVar20 = iVar21 + 2;
    puVar1 = (undefined8 *)(lVar16 + (ulonglong)(local_130 & 0x1ff) * 0x18);
    local_c8 = *puVar1;
    uStack_c0 = puVar1[1];
    local_b8 = *(undefined8 *)(lVar16 + 0x10 + (ulonglong)(local_130 & 0x1ff) * 0x18);
    iVar12 = iVar21 + 1;
    lVar23 = (longlong)
             (iVar20 + (iVar20 / 3 + (iVar20 >> 0x1f) +
                       (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >>
                            0x1f)) * -3);
    lVar16 = (longlong)
             (iVar12 + (iVar12 / 3 + (iVar12 >> 0x1f) +
                       (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >>
                            0x1f)) * -3);
    dVar27 = local_f8[lVar23 * 3] - local_f8[lVar16 * 3];
    dVar25 = local_f8[lVar23 * 3 + 2] - local_f8[lVar16 * 3 + 2];
    local_110.Value = (int *)(longlong)iVar21;
    dVar29 = local_f8[lVar23 * 3 + 1] - local_f8[lVar16 * 3 + 1];
    dVar28 = local_f8[(longlong)local_110.Value * 3] - local_f8[lVar16 * 3];
    dVar26 = local_f8[(longlong)local_110.Value * 3 + 1] - local_f8[lVar16 * 3 + 1];
    dVar24 = local_f8[(longlong)local_110.Value * 3 + 2] - local_f8[lVar16 * 3 + 2];
    uVar22 = *(uint *)((longlong)&local_138 + lVar16 * 4);
    dVar7 = dVar26 * dVar29 + dVar28 * dVar27 + dVar24 * dVar25;
    dVar25 = dVar29 * dVar29 + dVar27 * dVar27 + dVar25 * dVar25;
    if (dVar25 <= __real_3e45798ee2308c3a) {
      dVar25 = __real_3e45798ee2308c3a;
    }
    auVar30._8_8_ = 0;
    auVar30._0_8_ = dVar25;
    auVar31 = sqrtpd(unaff_XMM11,auVar30);
    dVar25 = __real_3ff0000000000000 / dVar25;
    dVar26 = (dVar26 * dVar26 + dVar28 * dVar28 + dVar24 * dVar24) - dVar7 * dVar7 * dVar25;
    if (dVar26 <= 0.0) {
      dVar26 = 0.0;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar26;
    auVar30 = sqrtpd(auVar30,auVar5);
    puVar15 = puVar19;
    puVar13 = puVar19;
    if (iVar11 != iVar2) {
      plVar17 = (longlong *)plVar3[8];
      if (plVar17 == (longlong *)0x0) {
        plVar17 = plVar3 + 7;
      }
      uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar14 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3);
          if (*puVar14 == uVar22) {
            if (uVar10 != 0xffffffff) {
              uVar22 = *(uint *)((longlong)&local_138 + lVar23 * 4);
              puVar13 = puVar14 + 1;
              if (puVar14 == (uint *)0x0) {
                puVar13 = puVar19;
              }
              goto LAB_14c6f1cbf;
            }
            break;
          }
          uVar10 = puVar14[2];
        } while (uVar10 != 0xffffffff);
      }
    }
    uVar22 = *(uint *)((longlong)&local_138 + lVar23 * 4);
    if (iVar11 != iVar2) {
LAB_14c6f1cbf:
      plVar17 = (longlong *)plVar3[8];
      if (plVar17 == (longlong *)0x0) {
        plVar17 = plVar3 + 7;
      }
      uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar15 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3);
          if (*puVar15 == uVar22) break;
          uVar10 = puVar15[2];
          puVar15 = puVar19;
        } while (uVar10 != 0xffffffff);
      }
    }
    uVar22 = *puVar13;
    puVar13 = puVar15 + 1;
    if (puVar15 == (uint *)0x0) {
      puVar13 = puVar19;
    }
    uVar10 = 0;
    if ((int)uVar22 < (int)plVar3[0xb]) {
      uVar10 = ~uVar22 >> 0x1f;
    }
    local_138 = uVar8;
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
    lVar16 = *(longlong *)((longlong)this + 8);
    pdVar18 = (double *)((longlong)(int)uVar22 * 0x10 + plVar3[10]);
    uVar22 = *puVar13;
    uVar10 = 0;
    if ((int)uVar22 < *(int *)(lVar16 + 0x58)) {
      uVar10 = ~uVar22 >> 0x1f;
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
    lVar16 = *(longlong *)(lVar16 + 0x50);
    lVar23 = *(longlong *)((longlong)this + 8);
    dVar6 = dVar6 / auVar31._0_8_;
    dVar26 = *(double *)(lVar16 + (longlong)(int)uVar22 * 0x10) - *pdVar18;
    dVar24 = *(double *)(lVar16 + 8 + (longlong)(int)uVar22 * 0x10) - pdVar18[1];
    dStack_118 = dVar24 * dVar7 * dVar25 + pdVar18[1] + dVar6 * dVar26 * auVar30._0_8_;
    local_120 = (dVar26 * dVar7 * dVar25 + *pdVar18) - dVar6 * dVar24 * auVar30._0_8_;
    if (((*(double **)(lVar23 + 0x50) <= &local_120) &&
        (&local_120 < *(double **)(lVar23 + 0x50) + (longlong)*(int *)(lVar23 + 0x5c) * 2)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = *(int *)(lVar23 + 0x58);
    if (iVar11 == *(int *)(lVar23 + 0x5c)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)(lVar23 + 0x50),(int *)(lVar23 + 0x5c));
    }
    *(int *)(lVar23 + 0x58) = iVar11 + 1;
    pdVar18 = (double *)(*(longlong *)(lVar23 + 0x50) + (longlong)iVar11 * 0x10);
    *pdVar18 = local_120;
    pdVar18[1] = dStack_118;
    local_124 = *(int *)&(*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            **)((longlong)this + 8))[1].Elements.field_0x8 + -1;
    local_128 = *(undefined4 *)((longlong)&local_138 + (longlong)local_110.Value * 4);
    local_a8 = &local_128;
    local_a0 = &local_124;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                 **)((longlong)this + 8),&local_110,(bool *)&local_a8);
  }
  return;
}

// operator() @ 14c6f1fa0

void __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>'::__l2::<lambda_2>_>'
::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  longlong lVar16;
  longlong *plVar17;
  double *pdVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar31 [16];
  undefined8 local_138;
  uint local_130;
  undefined4 local_128;
  int local_124;
  double local_120;
  double dStack_118;
  TPairInitializer<int_const_&,int_const_&> local_110;
  double local_f8 [4];
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 *local_a8;
  int *local_a0;
  
  dVar6 = __real_3ff0000000000000;
  puVar19 = (uint *)0x0;
  plVar3 = *(longlong **)((longlong)this + 8);
  lVar16 = *(longlong *)
            (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  iVar11 = (int)plVar3[1];
  local_138 = *(undefined8 *)(lVar16 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_130 = *(uint *)(lVar16 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  iVar2 = *(int *)((longlong)plVar3 + 0x34);
  uVar8 = local_138;
  puVar15 = puVar19;
  puVar13 = puVar19;
  while( true ) {
    uVar22 = *(uint *)((longlong)&local_138 + (longlong)puVar15 * 4);
    iVar21 = (int)puVar13;
    if (iVar11 == iVar2) break;
    plVar17 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar17 = (longlong *)plVar3[8];
    }
    uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
    if (uVar10 == 0xffffffff) break;
    while (puVar13 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3), *puVar13 != uVar22) {
      uVar10 = puVar13[2];
      if (uVar10 == 0xffffffff) goto LAB_14c6f204b;
    }
    puVar14 = puVar13 + 1;
    if (puVar13 == (uint *)0x0) {
      puVar14 = puVar19;
    }
    if (puVar14 == (uint *)0x0) break;
    puVar13 = (uint *)(ulonglong)(iVar21 + 1);
    puVar15 = (uint *)((longlong)puVar15 + 1);
    if (2 < (longlong)puVar15) {
      return;
    }
  }
LAB_14c6f204b:
  if (iVar21 != -1) {
    lVar16 = *(longlong *)(*(longlong *)this + 0x10);
    lVar23 = *(longlong *)(lVar16 + (ulonglong)((uint)local_138 >> 9) * 8);
    pdVar18 = (double *)(lVar23 + (ulonglong)((uint)local_138 & 0x1ff) * 0x18);
    local_138._4_4_ = (uint)((ulonglong)local_138 >> 0x20);
    local_f8[0] = *pdVar18;
    local_f8[1] = pdVar18[1];
    local_f8[2] = (double)*(undefined8 *)
                           (lVar23 + 0x10 + (ulonglong)((uint)local_138 & 0x1ff) * 0x18);
    lVar23 = *(longlong *)(lVar16 + (ulonglong)(local_138._4_4_ >> 9) * 8);
    puVar1 = (undefined8 *)(lVar23 + (ulonglong)(local_138._4_4_ & 0x1ff) * 0x18);
    local_d0 = *(undefined8 *)(lVar23 + 0x10 + (ulonglong)(local_138._4_4_ & 0x1ff) * 0x18);
    local_f8[3] = (double)*puVar1;
    uStack_d8 = puVar1[1];
    lVar16 = *(longlong *)(lVar16 + (ulonglong)(local_130 >> 9) * 8);
    iVar20 = iVar21 + 2;
    puVar1 = (undefined8 *)(lVar16 + (ulonglong)(local_130 & 0x1ff) * 0x18);
    local_c8 = *puVar1;
    uStack_c0 = puVar1[1];
    local_b8 = *(undefined8 *)(lVar16 + 0x10 + (ulonglong)(local_130 & 0x1ff) * 0x18);
    iVar12 = iVar21 + 1;
    lVar23 = (longlong)
             (iVar20 + (iVar20 / 3 + (iVar20 >> 0x1f) +
                       (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >>
                            0x1f)) * -3);
    lVar16 = (longlong)
             (iVar12 + (iVar12 / 3 + (iVar12 >> 0x1f) +
                       (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >>
                            0x1f)) * -3);
    dVar27 = local_f8[lVar23 * 3] - local_f8[lVar16 * 3];
    dVar25 = local_f8[lVar23 * 3 + 2] - local_f8[lVar16 * 3 + 2];
    local_110.Value = (int *)(longlong)iVar21;
    dVar29 = local_f8[lVar23 * 3 + 1] - local_f8[lVar16 * 3 + 1];
    dVar28 = local_f8[(longlong)local_110.Value * 3] - local_f8[lVar16 * 3];
    dVar26 = local_f8[(longlong)local_110.Value * 3 + 1] - local_f8[lVar16 * 3 + 1];
    dVar24 = local_f8[(longlong)local_110.Value * 3 + 2] - local_f8[lVar16 * 3 + 2];
    uVar22 = *(uint *)((longlong)&local_138 + lVar16 * 4);
    dVar7 = dVar26 * dVar29 + dVar28 * dVar27 + dVar24 * dVar25;
    dVar25 = dVar29 * dVar29 + dVar27 * dVar27 + dVar25 * dVar25;
    if (dVar25 <= __real_3e45798ee2308c3a) {
      dVar25 = __real_3e45798ee2308c3a;
    }
    auVar30._8_8_ = 0;
    auVar30._0_8_ = dVar25;
    auVar31 = sqrtpd(unaff_XMM11,auVar30);
    dVar25 = __real_3ff0000000000000 / dVar25;
    dVar26 = (dVar26 * dVar26 + dVar28 * dVar28 + dVar24 * dVar24) - dVar7 * dVar7 * dVar25;
    if (dVar26 <= 0.0) {
      dVar26 = 0.0;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar26;
    auVar30 = sqrtpd(auVar30,auVar5);
    puVar15 = puVar19;
    puVar13 = puVar19;
    if (iVar11 != iVar2) {
      plVar17 = (longlong *)plVar3[8];
      if (plVar17 == (longlong *)0x0) {
        plVar17 = plVar3 + 7;
      }
      uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar14 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3);
          if (*puVar14 == uVar22) {
            if (uVar10 != 0xffffffff) {
              uVar22 = *(uint *)((longlong)&local_138 + lVar23 * 4);
              puVar13 = puVar14 + 1;
              if (puVar14 == (uint *)0x0) {
                puVar13 = puVar19;
              }
              goto LAB_14c6f22af;
            }
            break;
          }
          uVar10 = puVar14[2];
        } while (uVar10 != 0xffffffff);
      }
    }
    uVar22 = *(uint *)((longlong)&local_138 + lVar23 * 4);
    if (iVar11 != iVar2) {
LAB_14c6f22af:
      plVar17 = (longlong *)plVar3[8];
      if (plVar17 == (longlong *)0x0) {
        plVar17 = plVar3 + 7;
      }
      uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar15 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3);
          if (*puVar15 == uVar22) break;
          uVar10 = puVar15[2];
          puVar15 = puVar19;
        } while (uVar10 != 0xffffffff);
      }
    }
    uVar22 = *puVar13;
    puVar13 = puVar15 + 1;
    if (puVar15 == (uint *)0x0) {
      puVar13 = puVar19;
    }
    uVar10 = 0;
    if ((int)uVar22 < (int)plVar3[0xb]) {
      uVar10 = ~uVar22 >> 0x1f;
    }
    local_138 = uVar8;
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
    lVar16 = *(longlong *)((longlong)this + 8);
    pdVar18 = (double *)((longlong)(int)uVar22 * 0x10 + plVar3[10]);
    uVar22 = *puVar13;
    uVar10 = 0;
    if ((int)uVar22 < *(int *)(lVar16 + 0x58)) {
      uVar10 = ~uVar22 >> 0x1f;
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
    lVar16 = *(longlong *)(lVar16 + 0x50);
    lVar23 = *(longlong *)((longlong)this + 8);
    dVar6 = dVar6 / auVar31._0_8_;
    dVar26 = *(double *)(lVar16 + (longlong)(int)uVar22 * 0x10) - *pdVar18;
    dVar24 = *(double *)(lVar16 + 8 + (longlong)(int)uVar22 * 0x10) - pdVar18[1];
    dStack_118 = dVar24 * dVar7 * dVar25 + pdVar18[1] + dVar6 * dVar26 * auVar30._0_8_;
    local_120 = (dVar26 * dVar7 * dVar25 + *pdVar18) - dVar6 * dVar24 * auVar30._0_8_;
    if (((*(double **)(lVar23 + 0x50) <= &local_120) &&
        (&local_120 < *(double **)(lVar23 + 0x50) + (longlong)*(int *)(lVar23 + 0x5c) * 2)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = *(int *)(lVar23 + 0x58);
    if (iVar11 == *(int *)(lVar23 + 0x5c)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)(lVar23 + 0x50),(int *)(lVar23 + 0x5c));
    }
    *(int *)(lVar23 + 0x58) = iVar11 + 1;
    pdVar18 = (double *)(*(longlong *)(lVar23 + 0x50) + (longlong)iVar11 * 0x10);
    *pdVar18 = local_120;
    pdVar18[1] = dStack_118;
    local_124 = *(int *)&(*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            **)((longlong)this + 8))[1].Elements.field_0x8 + -1;
    local_128 = *(undefined4 *)((longlong)&local_138 + (longlong)local_110.Value * 4);
    local_a8 = &local_128;
    local_a0 = &local_124;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                 **)((longlong)this + 8),&local_110,(bool *)&local_a8);
  }
  return;
}

// operator() @ 14c6f2590

void __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FIntrinsicMesh,UE::Geometry::FDynamicMesh3,`UE::Geometry::FIntrinsicMesh::TraceSurfaceEdge'::__l15::<lambda_2>_>'
::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  longlong lVar16;
  longlong *plVar17;
  double *pdVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar31 [16];
  undefined8 local_138;
  uint local_130;
  undefined4 local_128;
  int local_124;
  double local_120;
  double dStack_118;
  TPairInitializer<int_const_&,int_const_&> local_110;
  double local_f8 [4];
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 *local_a8;
  int *local_a0;
  
  dVar6 = __real_3ff0000000000000;
  puVar19 = (uint *)0x0;
  plVar3 = *(longlong **)((longlong)this + 8);
  lVar16 = *(longlong *)
            (*(longlong *)(*(longlong *)this + 0xe0) + (ulonglong)((uint)param_1 >> 9) * 8);
  iVar11 = (int)plVar3[1];
  local_138 = *(undefined8 *)(lVar16 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_130 = *(uint *)(lVar16 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  iVar2 = *(int *)((longlong)plVar3 + 0x34);
  uVar8 = local_138;
  puVar15 = puVar19;
  puVar13 = puVar19;
  while( true ) {
    uVar22 = *(uint *)((longlong)&local_138 + (longlong)puVar15 * 4);
    iVar21 = (int)puVar13;
    if (iVar11 == iVar2) break;
    plVar17 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar17 = (longlong *)plVar3[8];
    }
    uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
    if (uVar10 == 0xffffffff) break;
    while (puVar13 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3), *puVar13 != uVar22) {
      uVar10 = puVar13[2];
      if (uVar10 == 0xffffffff) goto LAB_14c6f263b;
    }
    puVar14 = puVar13 + 1;
    if (puVar13 == (uint *)0x0) {
      puVar14 = puVar19;
    }
    if (puVar14 == (uint *)0x0) break;
    puVar13 = (uint *)(ulonglong)(iVar21 + 1);
    puVar15 = (uint *)((longlong)puVar15 + 1);
    if (2 < (longlong)puVar15) {
      return;
    }
  }
LAB_14c6f263b:
  if (iVar21 != -1) {
    lVar16 = *(longlong *)(*(longlong *)this + 0x20);
    lVar23 = *(longlong *)(lVar16 + (ulonglong)((uint)local_138 >> 9) * 8);
    pdVar18 = (double *)(lVar23 + (ulonglong)((uint)local_138 & 0x1ff) * 0x18);
    local_138._4_4_ = (uint)((ulonglong)local_138 >> 0x20);
    local_f8[0] = *pdVar18;
    local_f8[1] = pdVar18[1];
    local_f8[2] = (double)*(undefined8 *)
                           (lVar23 + 0x10 + (ulonglong)((uint)local_138 & 0x1ff) * 0x18);
    lVar23 = *(longlong *)(lVar16 + (ulonglong)(local_138._4_4_ >> 9) * 8);
    puVar1 = (undefined8 *)(lVar23 + (ulonglong)(local_138._4_4_ & 0x1ff) * 0x18);
    local_d0 = *(undefined8 *)(lVar23 + 0x10 + (ulonglong)(local_138._4_4_ & 0x1ff) * 0x18);
    local_f8[3] = (double)*puVar1;
    uStack_d8 = puVar1[1];
    lVar16 = *(longlong *)(lVar16 + (ulonglong)(local_130 >> 9) * 8);
    iVar20 = iVar21 + 2;
    puVar1 = (undefined8 *)(lVar16 + (ulonglong)(local_130 & 0x1ff) * 0x18);
    local_c8 = *puVar1;
    uStack_c0 = puVar1[1];
    local_b8 = *(undefined8 *)(lVar16 + 0x10 + (ulonglong)(local_130 & 0x1ff) * 0x18);
    iVar12 = iVar21 + 1;
    lVar23 = (longlong)
             (iVar20 + (iVar20 / 3 + (iVar20 >> 0x1f) +
                       (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >>
                            0x1f)) * -3);
    lVar16 = (longlong)
             (iVar12 + (iVar12 / 3 + (iVar12 >> 0x1f) +
                       (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >>
                            0x1f)) * -3);
    dVar27 = local_f8[lVar23 * 3] - local_f8[lVar16 * 3];
    dVar25 = local_f8[lVar23 * 3 + 2] - local_f8[lVar16 * 3 + 2];
    local_110.Value = (int *)(longlong)iVar21;
    dVar29 = local_f8[lVar23 * 3 + 1] - local_f8[lVar16 * 3 + 1];
    dVar28 = local_f8[(longlong)local_110.Value * 3] - local_f8[lVar16 * 3];
    dVar26 = local_f8[(longlong)local_110.Value * 3 + 1] - local_f8[lVar16 * 3 + 1];
    dVar24 = local_f8[(longlong)local_110.Value * 3 + 2] - local_f8[lVar16 * 3 + 2];
    uVar22 = *(uint *)((longlong)&local_138 + lVar16 * 4);
    dVar7 = dVar26 * dVar29 + dVar28 * dVar27 + dVar24 * dVar25;
    dVar25 = dVar29 * dVar29 + dVar27 * dVar27 + dVar25 * dVar25;
    if (dVar25 <= __real_3e45798ee2308c3a) {
      dVar25 = __real_3e45798ee2308c3a;
    }
    auVar30._8_8_ = 0;
    auVar30._0_8_ = dVar25;
    auVar31 = sqrtpd(unaff_XMM11,auVar30);
    dVar25 = __real_3ff0000000000000 / dVar25;
    dVar26 = (dVar26 * dVar26 + dVar28 * dVar28 + dVar24 * dVar24) - dVar7 * dVar7 * dVar25;
    if (dVar26 <= 0.0) {
      dVar26 = 0.0;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar26;
    auVar30 = sqrtpd(auVar30,auVar5);
    puVar15 = puVar19;
    puVar13 = puVar19;
    if (iVar11 != iVar2) {
      plVar17 = (longlong *)plVar3[8];
      if (plVar17 == (longlong *)0x0) {
        plVar17 = plVar3 + 7;
      }
      uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar14 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3);
          if (*puVar14 == uVar22) {
            if (uVar10 != 0xffffffff) {
              uVar22 = *(uint *)((longlong)&local_138 + lVar23 * 4);
              puVar13 = puVar14 + 1;
              if (puVar14 == (uint *)0x0) {
                puVar13 = puVar19;
              }
              goto LAB_14c6f289f;
            }
            break;
          }
          uVar10 = puVar14[2];
        } while (uVar10 != 0xffffffff);
      }
    }
    uVar22 = *(uint *)((longlong)&local_138 + lVar23 * 4);
    if (iVar11 != iVar2) {
LAB_14c6f289f:
      plVar17 = (longlong *)plVar3[8];
      if (plVar17 == (longlong *)0x0) {
        plVar17 = plVar3 + 7;
      }
      uVar10 = *(uint *)((longlong)plVar17 + (ulonglong)((int)plVar3[9] - 1U & uVar22) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar15 = (uint *)((longlong)(int)uVar10 * 0x10 + *plVar3);
          if (*puVar15 == uVar22) break;
          uVar10 = puVar15[2];
          puVar15 = puVar19;
        } while (uVar10 != 0xffffffff);
      }
    }
    uVar22 = *puVar13;
    puVar13 = puVar15 + 1;
    if (puVar15 == (uint *)0x0) {
      puVar13 = puVar19;
    }
    uVar10 = 0;
    if ((int)uVar22 < (int)plVar3[0xb]) {
      uVar10 = ~uVar22 >> 0x1f;
    }
    local_138 = uVar8;
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
    lVar16 = *(longlong *)((longlong)this + 8);
    pdVar18 = (double *)((longlong)(int)uVar22 * 0x10 + plVar3[10]);
    uVar22 = *puVar13;
    uVar10 = 0;
    if ((int)uVar22 < *(int *)(lVar16 + 0x58)) {
      uVar10 = ~uVar22 >> 0x1f;
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
    lVar16 = *(longlong *)(lVar16 + 0x50);
    lVar23 = *(longlong *)((longlong)this + 8);
    dVar6 = dVar6 / auVar31._0_8_;
    dVar26 = *(double *)(lVar16 + (longlong)(int)uVar22 * 0x10) - *pdVar18;
    dVar24 = *(double *)(lVar16 + 8 + (longlong)(int)uVar22 * 0x10) - pdVar18[1];
    dStack_118 = dVar24 * dVar7 * dVar25 + pdVar18[1] + dVar6 * dVar26 * auVar30._0_8_;
    local_120 = (dVar26 * dVar7 * dVar25 + *pdVar18) - dVar6 * dVar24 * auVar30._0_8_;
    if (((*(double **)(lVar23 + 0x50) <= &local_120) &&
        (&local_120 < *(double **)(lVar23 + 0x50) + (longlong)*(int *)(lVar23 + 0x5c) * 2)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = *(int *)(lVar23 + 0x58);
    if (iVar11 == *(int *)(lVar23 + 0x5c)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)(lVar23 + 0x50),(int *)(lVar23 + 0x5c));
    }
    *(int *)(lVar23 + 0x58) = iVar11 + 1;
    pdVar18 = (double *)(*(longlong *)(lVar23 + 0x50) + (longlong)iVar11 * 0x10);
    *pdVar18 = local_120;
    pdVar18[1] = dStack_118;
    local_124 = *(int *)&(*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            **)((longlong)this + 8))[1].Elements.field_0x8 + -1;
    local_128 = *(undefined4 *)((longlong)&local_138 + (longlong)local_110.Value * 4);
    local_a8 = &local_128;
    local_a0 = &local_124;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                 **)((longlong)this + 8),&local_110,(bool *)&local_a8);
  }
  return;
}

// operator() @ 14c6f8420

int __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::TraceEdge'::__l2::<lambda_1>_>'
::__l2::<lambda_3>::operator()(void *this)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 local_res8;
  int local_18;
  
  iVar9 = **(int **)this;
  if (iVar9 == 0) {
    puVar4 = *(undefined8 **)((longlong)this + 8);
    iVar9 = 0;
    if ((*(int *)(puVar4 + 1) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
    uVar2 = *(uint *)*puVar4;
    uVar5 = *(ulonglong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x1c0) +
               (ulonglong)(uVar2 >> 9) * 8) + 8 + (ulonglong)(uVar2 & 0x1ff) * 0x10);
    uVar10 = (ulonglong)((uint)uVar5 & 0x1ff);
    lVar11 = *(longlong *)
              (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x130) +
              ((uVar5 & 0xffffffff) >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar11 + uVar10 * 0xc);
    iVar3 = *(int *)(*(longlong *)this + 8);
    local_18 = (int)uVar1;
    if (local_18 != iVar3) {
      if ((int)((ulonglong)uVar1 >> 0x20) == iVar3) {
        return (uint)uVar5;
      }
      iVar9 = -1;
      if (*(int *)(lVar11 + 8 + uVar10 * 0xc) == iVar3) {
        iVar9 = 2;
      }
    }
    uVar10 = uVar5 >> 0x20;
    if (iVar9 != -1) {
      uVar10 = uVar5;
    }
    return (int)uVar10;
  }
  uVar2 = (*(int **)this)[2];
  if (iVar9 != 1) {
    return uVar2;
  }
  lVar11 = 0;
  puVar4 = *(undefined8 **)((longlong)this + 8);
  if ((*(int *)(puVar4 + 1) < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  iVar9 = *(int *)*puVar4;
  local_res8 = *(undefined8 *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x1c0) +
                  (ulonglong)(uVar2 >> 9) * 8) + 8 + (ulonglong)(uVar2 & 0x1ff) * 0x10);
  while( true ) {
    uVar2 = *(uint *)((longlong)&local_res8 + lVar11 * 4);
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x180) +
             (ulonglong)(uVar2 >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar6 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
    local_18 = (int)uVar1;
    if (((local_18 == iVar9) || ((int)((ulonglong)uVar1 >> 0x20) == iVar9)) ||
       (*(int *)(lVar6 + 8 + (ulonglong)(uVar2 & 0x1ff) * 0xc) == iVar9)) break;
    lVar11 = lVar11 + 1;
    if ((longlong)((ulonglong)((int)((ulonglong)local_res8 >> 0x20) != -1) + 1) <= lVar11) {
      return -1;
    }
  }
  return uVar2;
}

// operator() @ 14c6f8670

int __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::FIntrinsicEdgeFlipMesh::TraceSurfaceEdge'::__l2::<lambda_1>_>'
::__l2::<lambda_3>::operator()(void *this)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 local_res8;
  int local_18;
  
  iVar9 = **(int **)this;
  if (iVar9 == 0) {
    puVar4 = *(undefined8 **)((longlong)this + 8);
    iVar9 = 0;
    if ((*(int *)(puVar4 + 1) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
    uVar2 = *(uint *)*puVar4;
    uVar5 = *(ulonglong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x1c0) +
               (ulonglong)(uVar2 >> 9) * 8) + 8 + (ulonglong)(uVar2 & 0x1ff) * 0x10);
    uVar10 = (ulonglong)((uint)uVar5 & 0x1ff);
    lVar11 = *(longlong *)
              (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x130) +
              ((uVar5 & 0xffffffff) >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar11 + uVar10 * 0xc);
    iVar3 = *(int *)(*(longlong *)this + 8);
    local_18 = (int)uVar1;
    if (local_18 != iVar3) {
      if ((int)((ulonglong)uVar1 >> 0x20) == iVar3) {
        return (uint)uVar5;
      }
      iVar9 = -1;
      if (*(int *)(lVar11 + 8 + uVar10 * 0xc) == iVar3) {
        iVar9 = 2;
      }
    }
    uVar10 = uVar5 >> 0x20;
    if (iVar9 != -1) {
      uVar10 = uVar5;
    }
    return (int)uVar10;
  }
  uVar2 = (*(int **)this)[2];
  if (iVar9 != 1) {
    return uVar2;
  }
  lVar11 = 0;
  puVar4 = *(undefined8 **)((longlong)this + 8);
  if ((*(int *)(puVar4 + 1) < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  iVar9 = *(int *)*puVar4;
  local_res8 = *(undefined8 *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x1c0) +
                  (ulonglong)(uVar2 >> 9) * 8) + 8 + (ulonglong)(uVar2 & 0x1ff) * 0x10);
  while( true ) {
    uVar2 = *(uint *)((longlong)&local_res8 + lVar11 * 4);
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x180) +
             (ulonglong)(uVar2 >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar6 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
    local_18 = (int)uVar1;
    if (((local_18 == iVar9) || ((int)((ulonglong)uVar1 >> 0x20) == iVar9)) ||
       (*(int *)(lVar6 + 8 + (ulonglong)(uVar2 & 0x1ff) * 0xc) == iVar9)) break;
    lVar11 = lVar11 + 1;
    if ((longlong)((ulonglong)((int)((ulonglong)local_res8 >> 0x20) != -1) + 1) <= lVar11) {
      return -1;
    }
  }
  return uVar2;
}

// operator() @ 14c6f88c0

int __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l2::<lambda_2>_>'
::__l2::<lambda_3>::operator()(void *this)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 local_res8;
  int local_18;
  
  iVar9 = **(int **)this;
  if (iVar9 == 0) {
    puVar4 = *(undefined8 **)((longlong)this + 8);
    iVar9 = 0;
    if ((*(int *)(puVar4 + 1) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
    uVar2 = *(uint *)*puVar4;
    uVar5 = *(ulonglong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x1c0) +
               (ulonglong)(uVar2 >> 9) * 8) + 8 + (ulonglong)(uVar2 & 0x1ff) * 0x10);
    uVar10 = (ulonglong)((uint)uVar5 & 0x1ff);
    lVar11 = *(longlong *)
              (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x130) +
              ((uVar5 & 0xffffffff) >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar11 + uVar10 * 0xc);
    iVar3 = *(int *)(*(longlong *)this + 8);
    local_18 = (int)uVar1;
    if (local_18 != iVar3) {
      if ((int)((ulonglong)uVar1 >> 0x20) == iVar3) {
        return (uint)uVar5;
      }
      iVar9 = -1;
      if (*(int *)(lVar11 + 8 + uVar10 * 0xc) == iVar3) {
        iVar9 = 2;
      }
    }
    uVar10 = uVar5 >> 0x20;
    if (iVar9 != -1) {
      uVar10 = uVar5;
    }
    return (int)uVar10;
  }
  uVar2 = (*(int **)this)[2];
  if (iVar9 != 1) {
    return uVar2;
  }
  lVar11 = 0;
  puVar4 = *(undefined8 **)((longlong)this + 8);
  if ((*(int *)(puVar4 + 1) < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  iVar9 = *(int *)*puVar4;
  local_res8 = *(undefined8 *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x1c0) +
                  (ulonglong)(uVar2 >> 9) * 8) + 8 + (ulonglong)(uVar2 & 0x1ff) * 0x10);
  while( true ) {
    uVar2 = *(uint *)((longlong)&local_res8 + lVar11 * 4);
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x180) +
             (ulonglong)(uVar2 >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar6 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
    local_18 = (int)uVar1;
    if (((local_18 == iVar9) || ((int)((ulonglong)uVar1 >> 0x20) == iVar9)) ||
       (*(int *)(lVar6 + 8 + (ulonglong)(uVar2 & 0x1ff) * 0xc) == iVar9)) break;
    lVar11 = lVar11 + 1;
    if ((longlong)((ulonglong)((int)((ulonglong)local_res8 >> 0x20) != -1) + 1) <= lVar11) {
      return -1;
    }
  }
  return uVar2;
}

// operator() @ 14c6f8b10

int __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::TraceEdge'::__l2::<lambda_1>_>'
::__l2::<lambda_3>::operator()(void *this)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 local_res8;
  int local_18;
  
  iVar9 = **(int **)this;
  if (iVar9 == 0) {
    puVar4 = *(undefined8 **)((longlong)this + 8);
    iVar9 = 0;
    if ((*(int *)(puVar4 + 1) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
    uVar2 = *(uint *)*puVar4;
    uVar5 = *(ulonglong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x1c0) +
               (ulonglong)(uVar2 >> 9) * 8) + 8 + (ulonglong)(uVar2 & 0x1ff) * 0x10);
    uVar10 = (ulonglong)((uint)uVar5 & 0x1ff);
    lVar11 = *(longlong *)
              (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x130) +
              ((uVar5 & 0xffffffff) >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar11 + uVar10 * 0xc);
    iVar3 = *(int *)(*(longlong *)this + 8);
    local_18 = (int)uVar1;
    if (local_18 != iVar3) {
      if ((int)((ulonglong)uVar1 >> 0x20) == iVar3) {
        return (uint)uVar5;
      }
      iVar9 = -1;
      if (*(int *)(lVar11 + 8 + uVar10 * 0xc) == iVar3) {
        iVar9 = 2;
      }
    }
    uVar10 = uVar5 >> 0x20;
    if (iVar9 != -1) {
      uVar10 = uVar5;
    }
    return (int)uVar10;
  }
  uVar2 = (*(int **)this)[2];
  if (iVar9 != 1) {
    return uVar2;
  }
  lVar11 = 0;
  puVar4 = *(undefined8 **)((longlong)this + 8);
  if ((*(int *)(puVar4 + 1) < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  iVar9 = *(int *)*puVar4;
  local_res8 = *(undefined8 *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x1c0) +
                  (ulonglong)(uVar2 >> 9) * 8) + 8 + (ulonglong)(uVar2 & 0x1ff) * 0x10);
  while( true ) {
    uVar2 = *(uint *)((longlong)&local_res8 + lVar11 * 4);
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x180) +
             (ulonglong)(uVar2 >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar6 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
    local_18 = (int)uVar1;
    if (((local_18 == iVar9) || ((int)((ulonglong)uVar1 >> 0x20) == iVar9)) ||
       (*(int *)(lVar6 + 8 + (ulonglong)(uVar2 & 0x1ff) * 0xc) == iVar9)) break;
    lVar11 = lVar11 + 1;
    if ((longlong)((ulonglong)((int)((ulonglong)local_res8 >> 0x20) != -1) + 1) <= lVar11) {
      return -1;
    }
  }
  return uVar2;
}

// operator() @ 14c6f8d60

int __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>'::__l2::<lambda_2>_>'
::__l2::<lambda_3>::operator()(void *this)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 local_res8;
  int local_18;
  
  iVar9 = **(int **)this;
  if (iVar9 == 0) {
    puVar4 = *(undefined8 **)((longlong)this + 8);
    iVar9 = 0;
    if ((*(int *)(puVar4 + 1) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
    uVar2 = *(uint *)*puVar4;
    uVar5 = *(ulonglong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x1c0) +
               (ulonglong)(uVar2 >> 9) * 8) + 8 + (ulonglong)(uVar2 & 0x1ff) * 0x10);
    uVar10 = (ulonglong)((uint)uVar5 & 0x1ff);
    lVar11 = *(longlong *)
              (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x130) +
              ((uVar5 & 0xffffffff) >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar11 + uVar10 * 0xc);
    iVar3 = *(int *)(*(longlong *)this + 8);
    local_18 = (int)uVar1;
    if (local_18 != iVar3) {
      if ((int)((ulonglong)uVar1 >> 0x20) == iVar3) {
        return (uint)uVar5;
      }
      iVar9 = -1;
      if (*(int *)(lVar11 + 8 + uVar10 * 0xc) == iVar3) {
        iVar9 = 2;
      }
    }
    uVar10 = uVar5 >> 0x20;
    if (iVar9 != -1) {
      uVar10 = uVar5;
    }
    return (int)uVar10;
  }
  uVar2 = (*(int **)this)[2];
  if (iVar9 != 1) {
    return uVar2;
  }
  lVar11 = 0;
  puVar4 = *(undefined8 **)((longlong)this + 8);
  if ((*(int *)(puVar4 + 1) < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  iVar9 = *(int *)*puVar4;
  local_res8 = *(undefined8 *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x1c0) +
                  (ulonglong)(uVar2 >> 9) * 8) + 8 + (ulonglong)(uVar2 & 0x1ff) * 0x10);
  while( true ) {
    uVar2 = *(uint *)((longlong)&local_res8 + lVar11 * 4);
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x180) +
             (ulonglong)(uVar2 >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar6 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
    local_18 = (int)uVar1;
    if (((local_18 == iVar9) || ((int)((ulonglong)uVar1 >> 0x20) == iVar9)) ||
       (*(int *)(lVar6 + 8 + (ulonglong)(uVar2 & 0x1ff) * 0xc) == iVar9)) break;
    lVar11 = lVar11 + 1;
    if ((longlong)((ulonglong)((int)((ulonglong)local_res8 >> 0x20) != -1) + 1) <= lVar11) {
      return -1;
    }
  }
  return uVar2;
}

// operator() @ 14c6f8fb0

int __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FIntrinsicMesh,UE::Geometry::FDynamicMesh3,`UE::Geometry::FIntrinsicMesh::TraceSurfaceEdge'::__l15::<lambda_2>_>'
::__l2::<lambda_3>::operator()(void *this)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 local_res8;
  int local_18;
  
  iVar9 = **(int **)this;
  if (iVar9 == 0) {
    puVar4 = *(undefined8 **)((longlong)this + 8);
    iVar9 = 0;
    if ((*(int *)(puVar4 + 1) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
    uVar2 = *(uint *)*puVar4;
    uVar5 = *(ulonglong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x148) +
               (ulonglong)(uVar2 >> 9) * 8) + 8 + (ulonglong)(uVar2 & 0x1ff) * 0x10);
    uVar10 = (ulonglong)((uint)uVar5 & 0x1ff);
    lVar11 = *(longlong *)
              (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0xe0) +
              ((uVar5 & 0xffffffff) >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar11 + uVar10 * 0xc);
    iVar3 = *(int *)(*(longlong *)this + 8);
    local_18 = (int)uVar1;
    if (local_18 != iVar3) {
      if ((int)((ulonglong)uVar1 >> 0x20) == iVar3) {
        return (uint)uVar5;
      }
      iVar9 = -1;
      if (*(int *)(lVar11 + 8 + uVar10 * 0xc) == iVar3) {
        iVar9 = 2;
      }
    }
    uVar10 = uVar5 >> 0x20;
    if (iVar9 != -1) {
      uVar10 = uVar5;
    }
    return (int)uVar10;
  }
  uVar2 = (*(int **)this)[2];
  if (iVar9 != 1) {
    return uVar2;
  }
  lVar11 = 0;
  puVar4 = *(undefined8 **)((longlong)this + 8);
  if ((*(int *)(puVar4 + 1) < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  iVar9 = *(int *)*puVar4;
  local_res8 = *(undefined8 *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x148) +
                  (ulonglong)(uVar2 >> 9) * 8) + 8 + (ulonglong)(uVar2 & 0x1ff) * 0x10);
  while( true ) {
    uVar2 = *(uint *)((longlong)&local_res8 + lVar11 * 4);
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x130) +
             (ulonglong)(uVar2 >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar6 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
    local_18 = (int)uVar1;
    if (((local_18 == iVar9) || ((int)((ulonglong)uVar1 >> 0x20) == iVar9)) ||
       (*(int *)(lVar6 + 8 + (ulonglong)(uVar2 & 0x1ff) * 0xc) == iVar9)) break;
    lVar11 = lVar11 + 1;
    if ((longlong)((ulonglong)((int)((ulonglong)local_res8 >> 0x20) != -1) + 1) <= lVar11) {
      return -1;
    }
  }
  return uVar2;
}

// operator() @ 14c6f9e20

TVector2<double> * __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicEdgeFlipMesh>::TraceEdge'::__l2::<lambda_1>_>'
::__l2::<lambda_4>::operator()
          (void *this,TVector2<double> *__return_storage_ptr__,FSurfacePoint *param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  uint *puVar18;
  TVector2<double> *pTVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  ulonglong uVar23;
  longlong *plVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  double dVar28;
  int local_a8;
  
  if (param_1->PositionType == Vertex) {
    plVar4 = *(longlong **)this;
    puVar27 = (uint *)0x0;
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    puVar22 = puVar27;
    if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
      plVar24 = (longlong *)plVar4[8];
      if ((longlong *)plVar4[8] == (longlong *)0x0) {
        plVar24 = plVar4 + 7;
      }
      uVar17 = *(uint *)((longlong)plVar24 + (ulonglong)((int)plVar4[9] - 1U & uVar25) * 4);
      if (uVar17 != 0xffffffff) {
        do {
          puVar22 = (uint *)((longlong)(int)uVar17 * 0x10 + *plVar4);
          if (*puVar22 == uVar25) break;
          uVar17 = puVar22[2];
          puVar22 = puVar27;
        } while (uVar17 != 0xffffffff);
      }
    }
    puVar18 = puVar22 + 1;
    if (puVar22 == (uint *)0x0) {
      puVar18 = puVar27;
    }
    uVar25 = *puVar18;
    uVar17 = 0;
    if ((int)uVar25 < (int)plVar4[0xb]) {
      uVar17 = ~uVar25 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    pdVar1 = (double *)(plVar4[10] + (longlong)(int)uVar25 * 0x10);
    dVar2 = pdVar1[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  }
  else if (param_1->PositionType == Edge) {
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    pTVar5 = *(TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)
              this;
    dVar2 = (param_1->Position).EdgePosition.Alpha;
    uVar6 = *(undefined8 *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1c0) +
               (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 0x10);
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)uVar6);
    uVar25 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)((ulonglong)uVar6 >> 0x20));
    uVar17 = *puVar22;
    uVar20 = 0;
    if ((int)uVar25 < *(int *)&pTVar5[1].Pairs.Elements.field_0x8) {
      uVar20 = ~uVar25 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar7 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)&pTVar5[1].Pairs.Elements + (longlong)(int)uVar25 * 0x10);
    dVar12 = *pdVar1;
    dVar13 = pdVar1[1];
    uVar25 = 0;
    if ((int)uVar17 < *(int *)(lVar7 + 0x58)) {
      uVar25 = ~uVar17 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    dVar28 = __real_3ff0000000000000 - dVar2;
    pdVar1 = (double *)(*(longlong *)(lVar7 + 0x50) + (longlong)(int)uVar17 * 0x10);
    dVar10 = *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13 * dVar2 + pdVar1[1] * dVar28;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar12 * dVar2 + dVar10 * dVar28;
  }
  else {
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    dVar12 = (param_1->Position).EdgePosition.Alpha;
    dVar13 = *(double *)((longlong)&param_1->Position + 0x10);
    dVar2 = *(double *)((longlong)&param_1->Position + 0x18);
    uVar23 = (ulonglong)(uVar25 & 0x1ff);
    pTVar5 = *(TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)
              this;
    lVar7 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) +
             (ulonglong)(uVar25 >> 9) * 8);
    uVar6 = *(undefined8 *)(lVar7 + uVar23 * 0xc);
    iVar3 = *(int *)(lVar7 + 8 + uVar23 * 0xc);
    local_a8 = (int)uVar6;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,local_a8);
    uVar25 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)((ulonglong)uVar6 >> 0x20));
    uVar17 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,iVar3);
    uVar26 = 0;
    uVar20 = *puVar22;
    uVar21 = uVar26;
    if ((int)uVar25 < *(int *)&pTVar5[1].Pairs.Elements.field_0x8) {
      uVar21 = ~uVar25 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar7 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)&pTVar5[1].Pairs.Elements + (longlong)(int)uVar25 * 0x10);
    dVar10 = *pdVar1;
    dVar28 = pdVar1[1];
    uVar25 = uVar26;
    if ((int)uVar17 < *(int *)(lVar7 + 0x58)) {
      uVar25 = ~uVar17 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar8 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)(lVar7 + 0x50) + (longlong)(int)uVar17 * 0x10);
    dVar14 = *pdVar1;
    dVar15 = pdVar1[1];
    if ((int)uVar20 < *(int *)(lVar8 + 0x58)) {
      uVar26 = ~uVar20 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    pdVar1 = (double *)(*(longlong *)(lVar8 + 0x50) + (longlong)(int)uVar20 * 0x10);
    dVar11 = pdVar1[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         dVar13 * dVar14 + dVar12 * dVar10 + dVar2 * *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13 * dVar15 + dVar12 * dVar28 + dVar2 * dVar11
    ;
  }
  return __return_storage_ptr__;
}

// operator() @ 14c6fa2a0

TVector2<double> * __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`UE::Geometry::FIntrinsicEdgeFlipMesh::TraceSurfaceEdge'::__l2::<lambda_1>_>'
::__l2::<lambda_4>::operator()
          (void *this,TVector2<double> *__return_storage_ptr__,FSurfacePoint *param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  uint *puVar18;
  TVector2<double> *pTVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  ulonglong uVar23;
  longlong *plVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  double dVar28;
  int local_a8;
  
  if (param_1->PositionType == Vertex) {
    plVar4 = *(longlong **)this;
    puVar27 = (uint *)0x0;
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    puVar22 = puVar27;
    if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
      plVar24 = (longlong *)plVar4[8];
      if ((longlong *)plVar4[8] == (longlong *)0x0) {
        plVar24 = plVar4 + 7;
      }
      uVar17 = *(uint *)((longlong)plVar24 + (ulonglong)((int)plVar4[9] - 1U & uVar25) * 4);
      if (uVar17 != 0xffffffff) {
        do {
          puVar22 = (uint *)((longlong)(int)uVar17 * 0x10 + *plVar4);
          if (*puVar22 == uVar25) break;
          uVar17 = puVar22[2];
          puVar22 = puVar27;
        } while (uVar17 != 0xffffffff);
      }
    }
    puVar18 = puVar22 + 1;
    if (puVar22 == (uint *)0x0) {
      puVar18 = puVar27;
    }
    uVar25 = *puVar18;
    uVar17 = 0;
    if ((int)uVar25 < (int)plVar4[0xb]) {
      uVar17 = ~uVar25 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    pdVar1 = (double *)(plVar4[10] + (longlong)(int)uVar25 * 0x10);
    dVar2 = pdVar1[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  }
  else if (param_1->PositionType == Edge) {
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    pTVar5 = *(TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)
              this;
    dVar2 = (param_1->Position).EdgePosition.Alpha;
    uVar6 = *(undefined8 *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1c0) +
               (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 0x10);
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)uVar6);
    uVar25 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)((ulonglong)uVar6 >> 0x20));
    uVar17 = *puVar22;
    uVar20 = 0;
    if ((int)uVar25 < *(int *)&pTVar5[1].Pairs.Elements.field_0x8) {
      uVar20 = ~uVar25 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar7 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)&pTVar5[1].Pairs.Elements + (longlong)(int)uVar25 * 0x10);
    dVar12 = *pdVar1;
    dVar13 = pdVar1[1];
    uVar25 = 0;
    if ((int)uVar17 < *(int *)(lVar7 + 0x58)) {
      uVar25 = ~uVar17 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    dVar28 = __real_3ff0000000000000 - dVar2;
    pdVar1 = (double *)(*(longlong *)(lVar7 + 0x50) + (longlong)(int)uVar17 * 0x10);
    dVar10 = *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13 * dVar2 + pdVar1[1] * dVar28;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar12 * dVar2 + dVar10 * dVar28;
  }
  else {
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    dVar12 = (param_1->Position).EdgePosition.Alpha;
    dVar13 = *(double *)((longlong)&param_1->Position + 0x10);
    dVar2 = *(double *)((longlong)&param_1->Position + 0x18);
    uVar23 = (ulonglong)(uVar25 & 0x1ff);
    pTVar5 = *(TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)
              this;
    lVar7 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) +
             (ulonglong)(uVar25 >> 9) * 8);
    uVar6 = *(undefined8 *)(lVar7 + uVar23 * 0xc);
    iVar3 = *(int *)(lVar7 + 8 + uVar23 * 0xc);
    local_a8 = (int)uVar6;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,local_a8);
    uVar25 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)((ulonglong)uVar6 >> 0x20));
    uVar17 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,iVar3);
    uVar26 = 0;
    uVar20 = *puVar22;
    uVar21 = uVar26;
    if ((int)uVar25 < *(int *)&pTVar5[1].Pairs.Elements.field_0x8) {
      uVar21 = ~uVar25 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar7 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)&pTVar5[1].Pairs.Elements + (longlong)(int)uVar25 * 0x10);
    dVar10 = *pdVar1;
    dVar28 = pdVar1[1];
    uVar25 = uVar26;
    if ((int)uVar17 < *(int *)(lVar7 + 0x58)) {
      uVar25 = ~uVar17 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar8 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)(lVar7 + 0x50) + (longlong)(int)uVar17 * 0x10);
    dVar14 = *pdVar1;
    dVar15 = pdVar1[1];
    if ((int)uVar20 < *(int *)(lVar8 + 0x58)) {
      uVar26 = ~uVar20 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    pdVar1 = (double *)(*(longlong *)(lVar8 + 0x50) + (longlong)(int)uVar20 * 0x10);
    dVar11 = pdVar1[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         dVar13 * dVar14 + dVar12 * dVar10 + dVar2 * *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13 * dVar15 + dVar12 * dVar28 + dVar2 * dVar11
    ;
  }
  return __return_storage_ptr__;
}

// operator() @ 14c6fa720

TVector2<double> * __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l2::<lambda_2>_>'
::__l2::<lambda_4>::operator()
          (void *this,TVector2<double> *__return_storage_ptr__,FSurfacePoint *param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  uint *puVar18;
  TVector2<double> *pTVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  ulonglong uVar23;
  longlong *plVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  double dVar28;
  int local_a8;
  
  if (param_1->PositionType == Vertex) {
    plVar4 = *(longlong **)this;
    puVar27 = (uint *)0x0;
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    puVar22 = puVar27;
    if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
      plVar24 = (longlong *)plVar4[8];
      if ((longlong *)plVar4[8] == (longlong *)0x0) {
        plVar24 = plVar4 + 7;
      }
      uVar17 = *(uint *)((longlong)plVar24 + (ulonglong)((int)plVar4[9] - 1U & uVar25) * 4);
      if (uVar17 != 0xffffffff) {
        do {
          puVar22 = (uint *)((longlong)(int)uVar17 * 0x10 + *plVar4);
          if (*puVar22 == uVar25) break;
          uVar17 = puVar22[2];
          puVar22 = puVar27;
        } while (uVar17 != 0xffffffff);
      }
    }
    puVar18 = puVar22 + 1;
    if (puVar22 == (uint *)0x0) {
      puVar18 = puVar27;
    }
    uVar25 = *puVar18;
    uVar17 = 0;
    if ((int)uVar25 < (int)plVar4[0xb]) {
      uVar17 = ~uVar25 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    pdVar1 = (double *)(plVar4[10] + (longlong)(int)uVar25 * 0x10);
    dVar2 = pdVar1[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  }
  else if (param_1->PositionType == Edge) {
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    pTVar5 = *(TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)
              this;
    dVar2 = (param_1->Position).EdgePosition.Alpha;
    uVar6 = *(undefined8 *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1c0) +
               (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 0x10);
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)uVar6);
    uVar25 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)((ulonglong)uVar6 >> 0x20));
    uVar17 = *puVar22;
    uVar20 = 0;
    if ((int)uVar25 < *(int *)&pTVar5[1].Pairs.Elements.field_0x8) {
      uVar20 = ~uVar25 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar7 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)&pTVar5[1].Pairs.Elements + (longlong)(int)uVar25 * 0x10);
    dVar12 = *pdVar1;
    dVar13 = pdVar1[1];
    uVar25 = 0;
    if ((int)uVar17 < *(int *)(lVar7 + 0x58)) {
      uVar25 = ~uVar17 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    dVar28 = __real_3ff0000000000000 - dVar2;
    pdVar1 = (double *)(*(longlong *)(lVar7 + 0x50) + (longlong)(int)uVar17 * 0x10);
    dVar10 = *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13 * dVar2 + pdVar1[1] * dVar28;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar12 * dVar2 + dVar10 * dVar28;
  }
  else {
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    dVar12 = (param_1->Position).EdgePosition.Alpha;
    dVar13 = *(double *)((longlong)&param_1->Position + 0x10);
    dVar2 = *(double *)((longlong)&param_1->Position + 0x18);
    uVar23 = (ulonglong)(uVar25 & 0x1ff);
    pTVar5 = *(TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)
              this;
    lVar7 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) +
             (ulonglong)(uVar25 >> 9) * 8);
    uVar6 = *(undefined8 *)(lVar7 + uVar23 * 0xc);
    iVar3 = *(int *)(lVar7 + 8 + uVar23 * 0xc);
    local_a8 = (int)uVar6;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,local_a8);
    uVar25 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)((ulonglong)uVar6 >> 0x20));
    uVar17 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,iVar3);
    uVar26 = 0;
    uVar20 = *puVar22;
    uVar21 = uVar26;
    if ((int)uVar25 < *(int *)&pTVar5[1].Pairs.Elements.field_0x8) {
      uVar21 = ~uVar25 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar7 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)&pTVar5[1].Pairs.Elements + (longlong)(int)uVar25 * 0x10);
    dVar10 = *pdVar1;
    dVar28 = pdVar1[1];
    uVar25 = uVar26;
    if ((int)uVar17 < *(int *)(lVar7 + 0x58)) {
      uVar25 = ~uVar17 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar8 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)(lVar7 + 0x50) + (longlong)(int)uVar17 * 0x10);
    dVar14 = *pdVar1;
    dVar15 = pdVar1[1];
    if ((int)uVar20 < *(int *)(lVar8 + 0x58)) {
      uVar26 = ~uVar20 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    pdVar1 = (double *)(*(longlong *)(lVar8 + 0x50) + (longlong)(int)uVar20 * 0x10);
    dVar11 = pdVar1[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         dVar13 * dVar14 + dVar12 * dVar10 + dVar2 * *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13 * dVar15 + dVar12 * dVar28 + dVar2 * dVar11
    ;
  }
  return __return_storage_ptr__;
}

// operator() @ 14c6faba0

TVector2<double> * __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`UE::Geometry::TEdgeCorrespondence<UE::Geometry::FIntrinsicMesh>::TraceEdge'::__l2::<lambda_1>_>'
::__l2::<lambda_4>::operator()
          (void *this,TVector2<double> *__return_storage_ptr__,FSurfacePoint *param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  uint *puVar18;
  TVector2<double> *pTVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  ulonglong uVar23;
  longlong *plVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  double dVar28;
  int local_a8;
  
  if (param_1->PositionType == Vertex) {
    plVar4 = *(longlong **)this;
    puVar27 = (uint *)0x0;
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    puVar22 = puVar27;
    if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
      plVar24 = (longlong *)plVar4[8];
      if ((longlong *)plVar4[8] == (longlong *)0x0) {
        plVar24 = plVar4 + 7;
      }
      uVar17 = *(uint *)((longlong)plVar24 + (ulonglong)((int)plVar4[9] - 1U & uVar25) * 4);
      if (uVar17 != 0xffffffff) {
        do {
          puVar22 = (uint *)((longlong)(int)uVar17 * 0x10 + *plVar4);
          if (*puVar22 == uVar25) break;
          uVar17 = puVar22[2];
          puVar22 = puVar27;
        } while (uVar17 != 0xffffffff);
      }
    }
    puVar18 = puVar22 + 1;
    if (puVar22 == (uint *)0x0) {
      puVar18 = puVar27;
    }
    uVar25 = *puVar18;
    uVar17 = 0;
    if ((int)uVar25 < (int)plVar4[0xb]) {
      uVar17 = ~uVar25 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    pdVar1 = (double *)(plVar4[10] + (longlong)(int)uVar25 * 0x10);
    dVar2 = pdVar1[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  }
  else if (param_1->PositionType == Edge) {
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    pTVar5 = *(TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)
              this;
    dVar2 = (param_1->Position).EdgePosition.Alpha;
    uVar6 = *(undefined8 *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1c0) +
               (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 0x10);
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)uVar6);
    uVar25 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)((ulonglong)uVar6 >> 0x20));
    uVar17 = *puVar22;
    uVar20 = 0;
    if ((int)uVar25 < *(int *)&pTVar5[1].Pairs.Elements.field_0x8) {
      uVar20 = ~uVar25 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar7 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)&pTVar5[1].Pairs.Elements + (longlong)(int)uVar25 * 0x10);
    dVar12 = *pdVar1;
    dVar13 = pdVar1[1];
    uVar25 = 0;
    if ((int)uVar17 < *(int *)(lVar7 + 0x58)) {
      uVar25 = ~uVar17 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    dVar28 = __real_3ff0000000000000 - dVar2;
    pdVar1 = (double *)(*(longlong *)(lVar7 + 0x50) + (longlong)(int)uVar17 * 0x10);
    dVar10 = *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13 * dVar2 + pdVar1[1] * dVar28;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar12 * dVar2 + dVar10 * dVar28;
  }
  else {
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    dVar12 = (param_1->Position).EdgePosition.Alpha;
    dVar13 = *(double *)((longlong)&param_1->Position + 0x10);
    dVar2 = *(double *)((longlong)&param_1->Position + 0x18);
    uVar23 = (ulonglong)(uVar25 & 0x1ff);
    pTVar5 = *(TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)
              this;
    lVar7 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) +
             (ulonglong)(uVar25 >> 9) * 8);
    uVar6 = *(undefined8 *)(lVar7 + uVar23 * 0xc);
    iVar3 = *(int *)(lVar7 + 8 + uVar23 * 0xc);
    local_a8 = (int)uVar6;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,local_a8);
    uVar25 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)((ulonglong)uVar6 >> 0x20));
    uVar17 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,iVar3);
    uVar26 = 0;
    uVar20 = *puVar22;
    uVar21 = uVar26;
    if ((int)uVar25 < *(int *)&pTVar5[1].Pairs.Elements.field_0x8) {
      uVar21 = ~uVar25 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar7 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)&pTVar5[1].Pairs.Elements + (longlong)(int)uVar25 * 0x10);
    dVar10 = *pdVar1;
    dVar28 = pdVar1[1];
    uVar25 = uVar26;
    if ((int)uVar17 < *(int *)(lVar7 + 0x58)) {
      uVar25 = ~uVar17 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar8 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)(lVar7 + 0x50) + (longlong)(int)uVar17 * 0x10);
    dVar14 = *pdVar1;
    dVar15 = pdVar1[1];
    if ((int)uVar20 < *(int *)(lVar8 + 0x58)) {
      uVar26 = ~uVar20 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    pdVar1 = (double *)(*(longlong *)(lVar8 + 0x50) + (longlong)(int)uVar20 * 0x10);
    dVar11 = pdVar1[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         dVar13 * dVar14 + dVar12 * dVar10 + dVar2 * *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13 * dVar15 + dVar12 * dVar28 + dVar2 * dVar11
    ;
  }
  return __return_storage_ptr__;
}

// operator() @ 14c6fb020

TVector2<double> * __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>'::__l2::<lambda_2>_>'
::__l2::<lambda_4>::operator()
          (void *this,TVector2<double> *__return_storage_ptr__,FSurfacePoint *param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  uint *puVar18;
  TVector2<double> *pTVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  ulonglong uVar23;
  longlong *plVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  double dVar28;
  int local_a8;
  
  if (param_1->PositionType == Vertex) {
    plVar4 = *(longlong **)this;
    puVar27 = (uint *)0x0;
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    puVar22 = puVar27;
    if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
      plVar24 = (longlong *)plVar4[8];
      if ((longlong *)plVar4[8] == (longlong *)0x0) {
        plVar24 = plVar4 + 7;
      }
      uVar17 = *(uint *)((longlong)plVar24 + (ulonglong)((int)plVar4[9] - 1U & uVar25) * 4);
      if (uVar17 != 0xffffffff) {
        do {
          puVar22 = (uint *)((longlong)(int)uVar17 * 0x10 + *plVar4);
          if (*puVar22 == uVar25) break;
          uVar17 = puVar22[2];
          puVar22 = puVar27;
        } while (uVar17 != 0xffffffff);
      }
    }
    puVar18 = puVar22 + 1;
    if (puVar22 == (uint *)0x0) {
      puVar18 = puVar27;
    }
    uVar25 = *puVar18;
    uVar17 = 0;
    if ((int)uVar25 < (int)plVar4[0xb]) {
      uVar17 = ~uVar25 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    pdVar1 = (double *)(plVar4[10] + (longlong)(int)uVar25 * 0x10);
    dVar2 = pdVar1[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  }
  else if (param_1->PositionType == Edge) {
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    pTVar5 = *(TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)
              this;
    dVar2 = (param_1->Position).EdgePosition.Alpha;
    uVar6 = *(undefined8 *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1c0) +
               (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 0x10);
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)uVar6);
    uVar25 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)((ulonglong)uVar6 >> 0x20));
    uVar17 = *puVar22;
    uVar20 = 0;
    if ((int)uVar25 < *(int *)&pTVar5[1].Pairs.Elements.field_0x8) {
      uVar20 = ~uVar25 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar7 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)&pTVar5[1].Pairs.Elements + (longlong)(int)uVar25 * 0x10);
    dVar12 = *pdVar1;
    dVar13 = pdVar1[1];
    uVar25 = 0;
    if ((int)uVar17 < *(int *)(lVar7 + 0x58)) {
      uVar25 = ~uVar17 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    dVar28 = __real_3ff0000000000000 - dVar2;
    pdVar1 = (double *)(*(longlong *)(lVar7 + 0x50) + (longlong)(int)uVar17 * 0x10);
    dVar10 = *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13 * dVar2 + pdVar1[1] * dVar28;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar12 * dVar2 + dVar10 * dVar28;
  }
  else {
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    dVar12 = (param_1->Position).EdgePosition.Alpha;
    dVar13 = *(double *)((longlong)&param_1->Position + 0x10);
    dVar2 = *(double *)((longlong)&param_1->Position + 0x18);
    uVar23 = (ulonglong)(uVar25 & 0x1ff);
    pTVar5 = *(TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)
              this;
    lVar7 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) +
             (ulonglong)(uVar25 >> 9) * 8);
    uVar6 = *(undefined8 *)(lVar7 + uVar23 * 0xc);
    iVar3 = *(int *)(lVar7 + 8 + uVar23 * 0xc);
    local_a8 = (int)uVar6;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,local_a8);
    uVar25 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)((ulonglong)uVar6 >> 0x20));
    uVar17 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,iVar3);
    uVar26 = 0;
    uVar20 = *puVar22;
    uVar21 = uVar26;
    if ((int)uVar25 < *(int *)&pTVar5[1].Pairs.Elements.field_0x8) {
      uVar21 = ~uVar25 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar7 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)&pTVar5[1].Pairs.Elements + (longlong)(int)uVar25 * 0x10);
    dVar10 = *pdVar1;
    dVar28 = pdVar1[1];
    uVar25 = uVar26;
    if ((int)uVar17 < *(int *)(lVar7 + 0x58)) {
      uVar25 = ~uVar17 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar8 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)(lVar7 + 0x50) + (longlong)(int)uVar17 * 0x10);
    dVar14 = *pdVar1;
    dVar15 = pdVar1[1];
    if ((int)uVar20 < *(int *)(lVar8 + 0x58)) {
      uVar26 = ~uVar20 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    pdVar1 = (double *)(*(longlong *)(lVar8 + 0x50) + (longlong)(int)uVar20 * 0x10);
    dVar11 = pdVar1[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         dVar13 * dVar14 + dVar12 * dVar10 + dVar2 * *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13 * dVar15 + dVar12 * dVar28 + dVar2 * dVar11
    ;
  }
  return __return_storage_ptr__;
}

// operator() @ 14c6fb4a0

TVector2<double> * __thiscall
`FNormalCoordSurfaceTraceImpl::
ConvertEdgesCrossed<UE::Geometry::FIntrinsicMesh,UE::Geometry::FDynamicMesh3,`UE::Geometry::FIntrinsicMesh::TraceSurfaceEdge'::__l15::<lambda_2>_>'
::__l2::<lambda_4>::operator()
          (void *this,TVector2<double> *__return_storage_ptr__,FSurfacePoint *param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  uint *puVar18;
  TVector2<double> *pTVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  ulonglong uVar23;
  longlong *plVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  double dVar28;
  int local_a8;
  
  if (param_1->PositionType == Vertex) {
    plVar4 = *(longlong **)this;
    puVar27 = (uint *)0x0;
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    puVar22 = puVar27;
    if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
      plVar24 = (longlong *)plVar4[8];
      if ((longlong *)plVar4[8] == (longlong *)0x0) {
        plVar24 = plVar4 + 7;
      }
      uVar17 = *(uint *)((longlong)plVar24 + (ulonglong)((int)plVar4[9] - 1U & uVar25) * 4);
      if (uVar17 != 0xffffffff) {
        do {
          puVar22 = (uint *)((longlong)(int)uVar17 * 0x10 + *plVar4);
          if (*puVar22 == uVar25) break;
          uVar17 = puVar22[2];
          puVar22 = puVar27;
        } while (uVar17 != 0xffffffff);
      }
    }
    puVar18 = puVar22 + 1;
    if (puVar22 == (uint *)0x0) {
      puVar18 = puVar27;
    }
    uVar25 = *puVar18;
    uVar17 = 0;
    if ((int)uVar25 < (int)plVar4[0xb]) {
      uVar17 = ~uVar25 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    pdVar1 = (double *)(plVar4[10] + (longlong)(int)uVar25 * 0x10);
    dVar2 = pdVar1[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  }
  else if (param_1->PositionType == Edge) {
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    pTVar5 = *(TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)
              this;
    dVar2 = (param_1->Position).EdgePosition.Alpha;
    uVar6 = *(undefined8 *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x148) +
               (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 0x10);
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)uVar6);
    uVar25 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)((ulonglong)uVar6 >> 0x20));
    uVar17 = *puVar22;
    uVar20 = 0;
    if ((int)uVar25 < *(int *)&pTVar5[1].Pairs.Elements.field_0x8) {
      uVar20 = ~uVar25 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar7 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)&pTVar5[1].Pairs.Elements + (longlong)(int)uVar25 * 0x10);
    dVar12 = *pdVar1;
    dVar13 = pdVar1[1];
    uVar25 = 0;
    if ((int)uVar17 < *(int *)(lVar7 + 0x58)) {
      uVar25 = ~uVar17 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    dVar28 = __real_3ff0000000000000 - dVar2;
    pdVar1 = (double *)(*(longlong *)(lVar7 + 0x50) + (longlong)(int)uVar17 * 0x10);
    dVar10 = *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13 * dVar2 + pdVar1[1] * dVar28;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar12 * dVar2 + dVar10 * dVar28;
  }
  else {
    uVar25 = (param_1->Position).EdgePosition.EdgeID;
    dVar12 = (param_1->Position).EdgePosition.Alpha;
    dVar13 = *(double *)((longlong)&param_1->Position + 0x10);
    dVar2 = *(double *)((longlong)&param_1->Position + 0x18);
    uVar23 = (ulonglong)(uVar25 & 0x1ff);
    pTVar5 = *(TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)
              this;
    lVar7 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 8) + 0xe0) + (ulonglong)(uVar25 >> 9) * 8
             );
    uVar6 = *(undefined8 *)(lVar7 + uVar23 * 0xc);
    iVar3 = *(int *)(lVar7 + 8 + uVar23 * 0xc);
    local_a8 = (int)uVar6;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,local_a8);
    uVar25 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,(int)((ulonglong)uVar6 >> 0x20));
    uVar17 = *puVar22;
    puVar22 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find(pTVar5,iVar3);
    uVar26 = 0;
    uVar20 = *puVar22;
    uVar21 = uVar26;
    if ((int)uVar25 < *(int *)&pTVar5[1].Pairs.Elements.field_0x8) {
      uVar21 = ~uVar25 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar7 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)&pTVar5[1].Pairs.Elements + (longlong)(int)uVar25 * 0x10);
    dVar10 = *pdVar1;
    dVar28 = pdVar1[1];
    uVar25 = uVar26;
    if ((int)uVar17 < *(int *)(lVar7 + 0x58)) {
      uVar25 = ~uVar17 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    lVar8 = *(longlong *)this;
    pdVar1 = (double *)(*(longlong *)(lVar7 + 0x50) + (longlong)(int)uVar17 * 0x10);
    dVar14 = *pdVar1;
    dVar15 = pdVar1[1];
    if ((int)uVar20 < *(int *)(lVar8 + 0x58)) {
      uVar26 = ~uVar20 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TVector2<double> *)(*pcVar9)();
      return pTVar19;
    }
    pdVar1 = (double *)(*(longlong *)(lVar8 + 0x50) + (longlong)(int)uVar20 * 0x10);
    dVar11 = pdVar1[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         dVar13 * dVar14 + dVar12 * dVar10 + dVar2 * *pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13 * dVar15 + dVar12 * dVar28 + dVar2 * dVar11
    ;
  }
  return __return_storage_ptr__;
}

