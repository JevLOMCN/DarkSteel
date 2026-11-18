// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 6

// GetEdgeConnectedPolygons<TSizedDefaultAllocator<32>_> @ 144368840

void __thiscall
FMeshDescription::GetEdgeConnectedPolygons<TSizedDefaultAllocator<32>_>
          (FMeshDescription *this,FEdgeID param_1,
          TArray<FPolygonID,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FTriangleID FVar2;
  FMeshAttributeArraySetBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<int_const_,int> *pTVar6;
  FPolygonID *pFVar7;
  FMeshAttributeArraySetBase *this_00;
  FTriangleID *pFVar8;
  TArrayView<FTriangleID_const_,int> local_38;
  TArrayView<int_const_,int> local_28;
  
  pTVar6 = FMeshElementIndexer::Find(&this->EdgeToTriangles,&local_28,(int)param_1,0);
  uVar1 = pTVar6->ArrayNum;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar1,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  FMeshElementIndexer::Find<FTriangleID>(&this->EdgeToTriangles,&local_38,(int)param_1,0);
  pFVar8 = local_38.DataPtr;
  while( true ) {
    if (pFVar8 == local_38.DataPtr + local_38.ArrayNum) {
      return;
    }
    pFVar3 = (this->TrianglePolygons).ArrayPtr;
    FVar2 = *pFVar8;
    if (((int)pFVar3[2].Type < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    this_00 = pFVar3 + 1;
    if ((FMeshAttributeArraySetBase *)pFVar3[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
      this_00 = (FMeshAttributeArraySetBase *)pFVar3[2]._padding_;
    }
    pFVar7 = TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                       ((TMeshAttributeArrayBase<FPolygonID> *)this_00,(int)FVar2);
    TArray<FPolygonID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPolygonID_const_&>
              (param_2,pFVar7);
    pFVar8 = pFVar8 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// GetPolygonVertexInstances<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> @ 144368f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshDescription::
GetPolygonVertexInstances<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          (FMeshDescription *this,FPolygonID param_1,
          TArray<FVertexInstanceID,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  void *_Dst;
  FTriangleID FVar2;
  FVertexInstanceID FVar3;
  FVertexInstanceID *_Src;
  ForElementType<FVertexInstanceID> FVar4;
  TMeshAttributeArraySet<FVertexInstanceID> *this_00;
  ForElementType<TMeshAttributeArrayBase<FVertexInstanceID>_> FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TArrayView<FVertexInstanceID,int> *pTVar11;
  ForElementType<TTuple<int,int>_> FVar12;
  TMeshAttributeArrayBase<FVertexInstanceID> *this_01;
  ForElementType<FVertexInstanceID> FVar13;
  uint uVar14;
  ForElementType<TMeshAttributeArrayBase<FVertexInstanceID>_> this_02;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStackY_168 [32];
  TArrayView<FTriangleID_const_,int> local_118;
  longlong local_108;
  TArrayView<FVertexInstanceID,int> local_100;
  ForElementType<TTuple<int,int>_> local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<FTriangleID_const_,int> local_d8;
  TArrayView<TTuple<int,int>,int> local_c8;
  TArrayView<FTriangleID_const_,int> local_b8;
  TArrayView<FVertexInstanceID,int> local_a8;
  TArray<TTuple<int,int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_d8,(int)param_1,0);
  piVar1 = &param_2->ArrayNum;
  iVar8 = *piVar1;
  uVar15 = local_d8.ArrayNum + 2;
  if (iVar8 < (int)uVar15) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInstanceID>_>
              (4,4,uVar15 - iVar8,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  else {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if ((int)uVar15 < iVar8) {
      uVar14 = iVar8 - uVar15;
      if (((int)(uVar14 | uVar15) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar14 != 0) {
        FVar4 = (param_2->AllocatorInstance).SecondaryData;
        FVar13 = (ForElementType<FVertexInstanceID>)param_2;
        if (FVar4 != (ForElementType<FVertexInstanceID>)0x0) {
          FVar13 = FVar4;
        }
        _Dst = (void *)((longlong)FVar13 + (longlong)(int)uVar15 * 4);
        iVar8 = (*piVar1 - uVar14) - uVar15;
        if (iVar8 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar14 * 4),(longlong)iVar8 << 2);
        }
        *piVar1 = *piVar1 - uVar14;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInstanceID>_>
                  (4,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_118,(int)param_1,0);
  if (local_118.ArrayNum == 1) {
    pTVar11 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                        (&this->TriangleVertexInstances,&local_a8,(int)*local_118.DataPtr);
    iVar8 = pTVar11->ArrayNum;
    _Src = pTVar11->DataPtr;
    *piVar1 = iVar8;
    if ((iVar8 == 0) && (param_2->ArrayMax == 0)) {
      param_2->ArrayMax = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInstanceID>_>
                (4,4,iVar8,param_2->ArrayMax,&param_2->AllocatorInstance,iVar8,&param_2->ArrayMax);
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      if (FVar4 != (ForElementType<FVertexInstanceID>)0x0) {
        param_2 = (TArray<FVertexInstanceID,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar4;
      }
      if (iVar8 != 0) {
        memcpy(param_2,_Src,(longlong)iVar8 << 2);
      }
    }
  }
  else {
    local_98.AllocatorInstance.SecondaryData = (ForElementType<TTuple<int,int>_>)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 8;
    TArray<TTuple<int,int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_98,local_118.ArrayNum + 2,Default);
    iStack_e0 = local_98.ArrayNum;
    local_e8 = (ForElementType<TTuple<int,int>_>)&local_98;
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
      local_e8 = local_98.AllocatorInstance.SecondaryData;
    }
    if ((local_98.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_c8._12_4_ = uStack_dc;
    local_c8.ArrayNum = iStack_e0;
    local_c8.DataPtr = (TTuple<int,int> *)local_e8;
    local_b8.DataPtr = local_118.DataPtr;
    FindPolygonPerimeter(this,&local_b8,&local_c8);
    uVar15 = 0;
    if (0 < local_98.ArrayNum) {
      lVar16 = 0;
      local_108 = 0;
      do {
        uVar17 = ~uVar15 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar15 < local_98.ArrayNum) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar12 = (ForElementType<TTuple<int,int>_>)&local_98;
        if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
          FVar12 = local_98.AllocatorInstance.SecondaryData;
        }
        uVar14 = *(uint *)(lVar16 + (longlong)FVar12);
        uVar9 = 0;
        if ((int)uVar14 < local_118.ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar2 = local_118.DataPtr[(int)uVar14];
        uVar14 = 0;
        if ((int)uVar15 < local_98.ArrayNum) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_00 = (TMeshAttributeArraySet<FVertexInstanceID> *)
                  (this->TriangleVertexInstances).ArrayPtr;
        FVar12 = (ForElementType<TTuple<int,int>_>)&local_98;
        if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
          FVar12 = local_98.AllocatorInstance.SecondaryData;
        }
        uVar14 = *(uint *)(lVar16 + 4 + (longlong)FVar12);
        if ((this->TriangleVertexInstances).Extent == 0) {
          if (((this_00->ArrayForChannels).ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar5 = (this_00->ArrayForChannels).AllocatorInstance.SecondaryData;
          this_02 = (ForElementType<TMeshAttributeArrayBase<FVertexInstanceID>_>)
                    &this_00->ArrayForChannels;
          if (FVar5 != (ForElementType<TMeshAttributeArrayBase<FVertexInstanceID>_>)0x0) {
            this_02 = FVar5;
          }
          TAttributeArrayContainer<FVertexInstanceID>::Get
                    ((TAttributeArrayContainer<FVertexInstanceID> *)this_02,&local_100,(int)FVar2);
          uVar9 = local_100.ArrayNum;
        }
        else {
          this_01 = TMeshAttributeArraySet<FVertexInstanceID>::GetArrayForChannel(this_00,0);
          local_100.DataPtr =
               TMeshAttributeArrayBase<FVertexInstanceID>::GetElementBase(this_01,(int)FVar2);
          uVar9 = (this->TriangleVertexInstances).Extent;
          local_100.ArrayNum = uVar9;
          if (((int)uVar9 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar10 = 0;
        if ((int)uVar14 < (int)uVar9) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar9 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar9 = uVar17;
        }
        FVar3 = local_100.DataPtr[(int)uVar14];
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar4 = (param_2->AllocatorInstance).SecondaryData;
        FVar13 = (ForElementType<FVertexInstanceID>)param_2;
        if (FVar4 != (ForElementType<FVertexInstanceID>)0x0) {
          FVar13 = FVar4;
        }
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 8;
        *(FVertexInstanceID *)(local_108 + (longlong)FVar13) = FVar3;
        local_108 = local_108 + 4;
      } while ((int)uVar15 < local_98.ArrayNum);
    }
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
      FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// ReserveNewEdges @ 144387c60

void __thiscall FMeshDescription::ReserveNewEdges(FMeshDescription *this,int param_1)

{
  FMeshElementContainer *this_00;
  FMeshElementContainer *pFVar1;
  
  this_00 = FMeshElementChannels::Get(this->EdgeElements,0);
  pFVar1 = FMeshElementChannels::Get(this->EdgeElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this_00->BitArray,((pFVar1->BitArray).NumBits - pFVar1->NumHoles) + param_1);
  return;
}

// ReserveNewTriangles @ 144387cc0

void __thiscall FMeshDescription::ReserveNewTriangles(FMeshDescription *this,int param_1)

{
  FMeshElementContainer *this_00;
  FMeshElementContainer *pFVar1;
  
  this_00 = FMeshElementChannels::Get(this->TriangleElements,0);
  pFVar1 = FMeshElementChannels::Get(this->TriangleElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this_00->BitArray,((pFVar1->BitArray).NumBits - pFVar1->NumHoles) + param_1);
  return;
}

// ReserveNewVertexInstances @ 144387d20

void __thiscall FMeshDescription::ReserveNewVertexInstances(FMeshDescription *this,int param_1)

{
  FMeshElementContainer *this_00;
  FMeshElementContainer *pFVar1;
  
  this_00 = FMeshElementChannels::Get(this->VertexInstanceElements,0);
  pFVar1 = FMeshElementChannels::Get(this->VertexInstanceElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this_00->BitArray,((pFVar1->BitArray).NumBits - pFVar1->NumHoles) + param_1);
  return;
}

// ReserveNewVertices @ 144387d80

void __thiscall FMeshDescription::ReserveNewVertices(FMeshDescription *this,int param_1)

{
  FMeshElementContainer *this_00;
  FMeshElementContainer *pFVar1;
  
  this_00 = FMeshElementChannels::Get(this->VertexElements,0);
  pFVar1 = FMeshElementChannels::Get(this->VertexElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this_00->BitArray,((pFVar1->BitArray).NumBits - pFVar1->NumHoles) + param_1);
  return;
}

