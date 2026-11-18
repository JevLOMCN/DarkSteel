// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 22

// ConstrainEdges @ 143393a20

bool __thiscall
UE::Geometry::FDelaunay2::ConstrainEdges
          (FDelaunay2 *this,TArrayView<UE::Math::TVector2<float>_const_,int> *param_1,
          TArrayView<UE::Geometry::FIndex2i_const_,int> *param_2)

{
  bool bVar1;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_28;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_18;
  
  if ((this->bIsConstrained == false) && (param_2->ArrayNum < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  this->bIsConstrained = bVar1;
  local_18.DataPtr = (FIndex2i *)param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = DelaunayInternal::ConstrainEdges<float>
                    (&this->RandomStream,(this->Connectivity).Ptr,
                     (TArrayView<UE::Math::TVector2<float>_const_,int> *)&local_18,&local_28,
                     this->bKeepFastEdgeAdjacencyData);
  if (!bVar1) {
    return false;
  }
  if (this->bValidateEdges != false) {
    local_18.DataPtr = param_2->DataPtr;
    local_18.ArrayNum = param_2->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    bVar1 = HasEdges(this,&local_18);
    if (!bVar1) {
      this->Result = MissingEdges;
      return false;
    }
  }
  return true;
}

// ConstrainEdges @ 143393ac0

bool __thiscall
UE::Geometry::FDelaunay2::ConstrainEdges
          (FDelaunay2 *this,TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,
          TArrayView<UE::Geometry::FIndex2i_const_,int> *param_2)

{
  bool bVar1;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_28;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_18;
  
  if ((this->bIsConstrained == false) && (param_2->ArrayNum < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  this->bIsConstrained = bVar1;
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = DelaunayInternal::ConstrainEdges<double>
                    (&this->RandomStream,(this->Connectivity).Ptr,&local_18,&local_28,
                     this->bKeepFastEdgeAdjacencyData);
  if (!bVar1) {
    return false;
  }
  if (this->bValidateEdges != false) {
    local_18.DataPtr = (TVector2<double> *)param_2->DataPtr;
    local_18.ArrayNum = param_2->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    bVar1 = HasEdges(this,(TArrayView<UE::Geometry::FIndex2i_const_,int> *)&local_18);
    if (!bVar1) {
      this->Result = MissingEdges;
      return false;
    }
  }
  return true;
}

// FixDuplicatesOnEdge @ 1433a1400

void __thiscall UE::Geometry::FDelaunay2::FixDuplicatesOnEdge(FDelaunay2 *this,FIndex2i *param_1)

{
  FDelaunay2Connectivity::FixDuplicatesOnEdge((this->Connectivity).Ptr,param_1);
  return;
}

// GetFilledTriangles @ 1433a5a80

bool __thiscall
UE::Geometry::FDelaunay2::GetFilledTriangles
          (FDelaunay2 *this,TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Geometry::FIndex2i_const_,int> *param_2,
          TArrayView<UE::Geometry::FIndex2i_const_,int> *param_3)

{
  FDelaunay2Connectivity *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_28;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_18;
  
  this_00 = (this->Connectivity).Ptr;
  if (this_00 != (FDelaunay2Connectivity *)0x0) {
    local_28.DataPtr = param_3->DataPtr;
    local_28.ArrayNum = param_3->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
    local_18.DataPtr = param_2->DataPtr;
    local_18.ArrayNum = param_2->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    bVar2 = FDelaunay2Connectivity::GetFilledTriangles(this_00,param_1,&local_18,&local_28);
    return bVar2;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6289950407804323509>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\Delaunay2.cpp"
                     ,0x6b5,"Connectivity.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// GetFilledTriangles @ 1433a5af0

bool __thiscall
UE::Geometry::FDelaunay2::GetFilledTriangles
          (FDelaunay2 *this,TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Geometry::FIndex2i_const_,int> *param_2,EFillMode param_3)

{
  FDelaunay2Connectivity *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_18;
  
  this_00 = (this->Connectivity).Ptr;
  if (this_00 != (FDelaunay2Connectivity *)0x0) {
    local_18.DataPtr = param_2->DataPtr;
    local_18.ArrayNum = param_2->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    bVar2 = FDelaunay2Connectivity::GetFilledTriangles(this_00,param_1,&local_18,param_3);
    return bVar2;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6289950407804323500>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\Delaunay2.cpp"
                     ,0x6ac,"Connectivity.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// GetFilledTrianglesGeneralizedWinding @ 1433a79f0

bool __thiscall
UE::Geometry::FDelaunay2::GetFilledTrianglesGeneralizedWinding
          (FDelaunay2 *this,TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Math::TVector2<float>_const_,int> *param_2,
          TArrayView<UE::Geometry::FIndex2i_const_,int> *param_3,EFillMode param_4)

{
  FDelaunay2Connectivity *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_28;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_18;
  
  this_00 = (this->Connectivity).Ptr;
  if (this_00 != (FDelaunay2Connectivity *)0x0) {
    local_28.DataPtr = param_3->DataPtr;
    local_28.ArrayNum = param_3->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
    local_18.DataPtr = param_2->DataPtr;
    local_18.ArrayNum = param_2->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    bVar2 = FDelaunay2Connectivity::GetFilledTrianglesGeneralizedWinding<float>
                      (this_00,param_1,&local_18,&local_28,param_4);
    return bVar2;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6289950407804323527>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\Delaunay2.cpp"
                     ,0x6c7,"Connectivity.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// GetFilledTrianglesGeneralizedWinding @ 1433a7a70

bool __thiscall
UE::Geometry::FDelaunay2::GetFilledTrianglesGeneralizedWinding
          (FDelaunay2 *this,TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_2,
          TArrayView<UE::Geometry::FIndex2i_const_,int> *param_3,EFillMode param_4)

{
  FDelaunay2Connectivity *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_28;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_18;
  
  this_00 = (this->Connectivity).Ptr;
  if (this_00 != (FDelaunay2Connectivity *)0x0) {
    local_28.DataPtr = param_3->DataPtr;
    local_28.ArrayNum = param_3->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
    local_18.DataPtr = param_2->DataPtr;
    local_18.ArrayNum = param_2->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    bVar2 = FDelaunay2Connectivity::GetFilledTrianglesGeneralizedWinding<double>
                      (this_00,param_1,&local_18,&local_28,param_4);
    return bVar2;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6289950407804323518>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\Delaunay2.cpp"
                     ,0x6be,"Connectivity.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// GetTriangles @ 1433b2dd0

TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FDelaunay2::GetTriangles
          (FDelaunay2 *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FDelaunay2Connectivity *this_00;
  
  this_00 = (this->Connectivity).Ptr;
  if (this_00 != (FDelaunay2Connectivity *)0x0) {
    FDelaunay2Connectivity::GetTriangles(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTrianglesAndAdjacency @ 1433b30f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDelaunay2::GetTrianglesAndAdjacency
          (FDelaunay2 *this,TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FDelaunay2Connectivity *pFVar8;
  code *pcVar9;
  FDelaunay2Connectivity *pFVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar20;
  uint *puVar21;
  undefined1 *puVar22;
  ForElementType<FSetElementId> FVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auStackY_198 [32];
  undefined1 auStack_168 [4];
  uint uStack_164;
  FIndex2i_u_0 FStack_160;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTStack_158;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTStack_150;
  FIndex2i_u_0 FStack_148;
  FIndex3i_u_0 FStack_140;
  int iStack_134;
  int iStack_130;
  FScriptContainerElement *pFStack_128;
  FDelaunay2Connectivity *pFStack_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *puStack_110;
  undefined4 uStack_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  FDelaunay2Connectivity *pFStack_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  undefined4 uStack_a4;
  TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
  TStack_98;
  ulonglong uStack_48;
  
  pFVar8 = (this->Connectivity).Ptr;
  if (pFVar8 == (FDelaunay2Connectivity *)0x0) {
    return;
  }
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  iVar14 = *(int *)&(pFVar8->EdgeToVert).field_0x8 - *(int *)&(pFVar8->EdgeToVert).field_0x34;
  uVar16 = iVar14 / 3 + (iVar14 >> 0x1f) +
           (int)(((longlong)iVar14 / 3 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >> 0x1f);
  pTStack_158 = param_2;
  pTStack_150 = param_1;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < (int)uVar16) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar16,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar14 = *(int *)&(pFVar8->EdgeToVert).field_0x28;
  puVar5 = &(pFVar8->EdgeToVert).field_0x10;
  iStack_118 = 0;
  uStack_114 = 1;
  iStack_100 = 0;
  iStack_104 = 0;
  if (iVar14 != 0) {
    puVar21 = *(uint **)&(pFVar8->EdgeToVert).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar5;
    }
    uVar16 = *puVar21;
    iStack_118 = 0;
    iStack_100 = 0;
    while (uVar16 == 0) {
      lVar15 = (longlong)iStack_118;
      iStack_100 = iStack_100 + 0x20;
      iStack_118 = iStack_118 + 1;
      iStack_104 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118) goto LAB_1433b321f;
      uVar16 = puVar21[lVar15 + 1];
    }
    uStack_114 = -uVar16 & uVar16;
    uVar4 = (ulonglong)uStack_114 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iStack_134 = (int)lVar15;
    iStack_104 = iStack_100 + -1 + iStack_134;
    if (iVar14 < iStack_104) {
      iStack_104 = iVar14;
    }
  }
LAB_1433b321f:
  uVar16 = *(uint *)&(pFVar8->EdgeToVert).field_0x28;
  uStack_fc = uStack_a4;
  uVar19 = uVar16 & 0xffffffe0;
  iStack_f8 = *(int *)&(pFVar8->EdgeToVert).field_0x8 - *(int *)&(pFVar8->EdgeToVert).field_0x34;
  uStack_108 = 0xffffffff;
  TStack_e8._padding_ = CONCAT44(uStack_114,iStack_118);
  TStack_e8.CurrentBitIndex = iStack_104;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_e8._28_4_ = uStack_a4;
  TStack_e8.BaseBitIndex = iStack_100;
  uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
  pFStack_120 = pFVar8;
  puStack_110 = puVar5;
  pFStack_f0 = pFVar8;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar5;
  if ((((int)uVar16 < 0) || (iVar14 < (int)uVar16)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar12 = *(uint *)&(pFVar8->EdgeToVert).field_0x28;
  if (uVar16 != uVar12) {
    puVar22 = *(undefined1 **)&(pFVar8->EdgeToVert).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar5;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar15 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_1433b3320;
      uVar16 = *(uint *)(puVar22 + lVar15 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iStack_130 = (int)lVar15;
    uVar16 = iStack_130 + -1 + uVar19;
    if ((int)uVar12 < (int)uVar16) {
      uVar16 = uVar12;
    }
  }
LAB_1433b3320:
  while( true ) {
    pFVar10 = pFStack_f0;
    if (*(int *)&(pFStack_f0->EdgeToVert).field_0x8 - *(int *)&(pFStack_f0->EdgeToVert).field_0x34
        != (int)uStack_c8) {
      auStack_168[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(auStack_168);
    }
    pTVar20 = pTStack_150;
    if (((TStack_e8.CurrentBitIndex == uVar16) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar5)) && (pFVar10 == pFVar8))
    break;
    lVar15 = *(longlong *)&pFVar10->EdgeToVert;
    iVar14 = *(int *)(lVar15 + (longlong)TStack_e8.CurrentBitIndex * 0x14);
    puVar2 = (undefined4 *)(lVar15 + (longlong)TStack_e8.CurrentBitIndex * 0x14);
    if ((((iVar14 != -1) && (puVar2[1] != -1)) && (iVar17 = puVar2[2], iVar17 != -1)) &&
       ((iVar17 < iVar14 && (iVar17 < (int)puVar2[1])))) {
      iVar14 = pTStack_150->ArrayNum;
      if (iVar14 == *piVar1) {
        iVar14 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTStack_150->AllocatorInstance,piVar1);
      }
      pTVar20->ArrayNum = iVar14 + 1;
      uVar6 = puVar2[2];
      pFVar3 = (pTVar20->AllocatorInstance).Data + (longlong)iVar14 * 0xc;
      uVar7 = puVar2[1];
      *(undefined4 *)pFVar3 = *puVar2;
      *(undefined4 *)(pFVar3 + 4) = uVar7;
      *(undefined4 *)(pFVar3 + 8) = uVar6;
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  FStack_140._0_8_ = 0xffffffffffffffff;
  FStack_140._s_0.C = -1;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::Init
            (pTStack_158,(FIndex3i *)&FStack_140._s_0,pTStack_150->ArrayNum);
  iVar14 = pTVar20->ArrayNum;
  TStack_98.Elements._0_8_ = 0;
  TStack_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_98.Elements._8_8_ = 0;
  TStack_98.Elements._32_8_ = 0;
  TStack_98.Elements._40_4_ = 0;
  TStack_98.Elements._44_4_ = 0x80;
  TStack_98.Elements._48_4_ = 0xffffffff;
  TStack_98.Elements._52_4_ = 0;
  TStack_98.HashSize = 0;
  uStack_164 = 0;
  if (0 < iVar14) {
    do {
      uVar16 = uStack_164;
      uVar19 = 0;
      if ((int)uStack_164 < iVar14) {
        uVar19 = ~uStack_164 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar24 = 3;
      pFStack_128 = (pTVar20->AllocatorInstance).Data + (longlong)(int)uVar16 * 0xc;
      lVar15 = 2;
      lVar25 = 0;
      do {
        FStack_160._s_0.A = *(undefined4 *)(pFStack_128 + lVar25 * 4);
        FStack_160._s_0.B = *(undefined4 *)(pFStack_128 + lVar15 * 4);
        uVar16 = FCrc::MemCrc_DEPRECATED(&FStack_160,8,0);
        if (TStack_98.Elements._8_4_ != TStack_98.Elements._52_4_) {
          FVar23 = (ForElementType<FSetElementId>)&TStack_98.Hash;
          if (TStack_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar23 = TStack_98.Hash.SecondaryData;
          }
          iVar14 = *(int *)((longlong)FVar23 + (ulonglong)(TStack_98.HashSize - 1U & uVar16) * 4);
          while (iVar14 != -1) {
            lVar18 = TStack_98.Elements._0_8_ + (longlong)iVar14 * 0x14;
            if ((*(int *)(TStack_98.Elements._0_8_ + (longlong)iVar14 * 0x14) == FStack_160._s_0.A)
               && (*(int *)(lVar18 + 4) == FStack_160._s_0.B)) {
              if (iVar14 != -1) {
                puVar21 = (uint *)(lVar18 + 8);
                if (lVar18 == 0) {
                  puVar21 = (uint *)0x0;
                }
                if (puVar21 != (uint *)0x0) {
                  uVar16 = FCrc::MemCrc_DEPRECATED(&FStack_160,8,0);
                  TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
                  ::RemoveImpl<UE::Geometry::FIndex2i>
                            (&TStack_98,uVar16,(FIndex2i *)&FStack_160._s_0);
                  uVar16 = *puVar21;
                  lVar18 = (longlong)(int)uVar16;
                  uVar12 = 0;
                  uVar19 = uVar12;
                  if ((int)uVar16 < pTVar20->ArrayNum) {
                    uVar19 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  uVar16 = uStack_164;
                  pFVar3 = (pTVar20->AllocatorInstance).Data;
                  if (*(int *)(pFVar3 + lVar18 * 0xc) != FStack_160._s_0.A) {
                    if (*(int *)(pFVar3 + lVar18 * 0xc + 4) == FStack_160._s_0.A) {
                      uVar12 = 1;
                    }
                    else {
                      uVar12 = 0xffffffff;
                      if (*(int *)(pFVar3 + lVar18 * 0xc + 8) == FStack_160._s_0.A) {
                        uVar12 = 2;
                      }
                    }
                  }
                  uVar19 = *puVar21;
                  uVar13 = 0;
                  if ((int)uVar19 < pTStack_158->ArrayNum) {
                    uVar13 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pTVar20 = pTStack_158;
                  *(uint *)((pTStack_158->AllocatorInstance).Data +
                           ((longlong)(int)uVar19 * 3 + (longlong)(int)uVar12) * 4) = uVar16;
                  lVar18 = (longlong)(int)uStack_164;
                  uVar16 = *puVar21;
                  uVar19 = 0;
                  if ((int)uStack_164 < pTStack_158->ArrayNum) {
                    uVar19 = ~uStack_164 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  *(uint *)((pTVar20->AllocatorInstance).Data + (lVar15 + lVar18 * 3) * 4) = uVar16;
                  pTVar20 = pTStack_150;
                  goto LAB_1433b3562;
                }
              }
              break;
            }
            iVar14 = *(int *)(lVar18 + 0xc);
          }
        }
        FStack_148._s_0.A = FStack_160._s_0.B;
        FStack_148._s_0.B = FStack_160._s_0.A;
        TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
        ::Emplace<UE::Geometry::FIndex2i,int_const_&>
                  ((TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
                    *)&TStack_98,(FIndex2i *)&FStack_148._s_0,(int *)&uStack_164);
LAB_1433b3562:
        lVar24 = lVar24 + -1;
        lVar15 = lVar25;
        lVar25 = lVar25 + 1;
      } while (lVar24 != 0);
      iVar14 = pTVar20->ArrayNum;
      uStack_164 = uStack_164 + 1;
    } while ((int)uStack_164 < iVar14);
  }
  TStack_98.HashSize = 0;
  if (TStack_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_98.Elements);
  return;
}

// GetVoronoiCells @ 1433b3d10

TArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
__thiscall
UE::Geometry::FDelaunay2::GetVoronoiCells
          (FDelaunay2 *this,
          TArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TArrayView<UE::Math::TVector2<float>_const_,int> *param_1,
          bool param_2,TAxisAlignedBox2<float> *param_3,float param_4)

{
  bool bVar1;
  undefined1 local_res8 [8];
  TVector2<float>_u_0 local_28;
  TVector2<float>_u_0 TStack_20;
  TVector2<float>_u_0 local_18;
  TVector2<float>_u_0 TStack_10;
  
  if (this->Result == Collinear) {
    local_18._s_0 = (TVector2<float>_u_0_s_0)param_1->DataPtr;
    TStack_10 = *(TVector2<float>_u_0 *)&param_1->ArrayNum;
    local_28._s_0 = *(TVector2<float>_u_0_s_0 *)&(param_3->Min).field0_0x0;
    TStack_20 = (param_3->Max).field0_0x0;
    DelaunayInternal::GetVoronoiCells_Collinear<float>
              (__return_storage_ptr__,
               (TArrayView<UE::Math::TVector2<float>_const_,int> *)&local_18._s_0,param_2,
               (TAxisAlignedBox2<float> *)&local_28._s_0,param_4);
  }
  else {
    if ((((this->Connectivity).Ptr == (FDelaunay2Connectivity *)0x0) ||
        (this->bIsConstrained != false)) &&
       (bVar1 = `UE::Geometry::FDelaunay2::GetVoronoiCells'::__l7::<lambda_1>::operator()
                          (local_res8), !bVar1)) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      return __return_storage_ptr__;
    }
    local_28._s_0 = (TVector2<float>_u_0_s_0)param_1->DataPtr;
    TStack_20 = *(TVector2<float>_u_0 *)&param_1->ArrayNum;
    local_18._s_0 = *(TVector2<float>_u_0_s_0 *)&(param_3->Min).field0_0x0;
    TStack_10 = (param_3->Max).field0_0x0;
    DelaunayInternal::GetVoronoiCells<float>
              (__return_storage_ptr__,(this->Connectivity).Ptr,
               (TArrayView<UE::Math::TVector2<float>_const_,int> *)&local_28._s_0,param_2,
               (TAxisAlignedBox2<float> *)&local_18._s_0,param_4);
  }
  return __return_storage_ptr__;
}

// GetVoronoiCells @ 1433b3e10

TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
__thiscall
UE::Geometry::FDelaunay2::GetVoronoiCells
          (FDelaunay2 *this,
          TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,
          bool param_2,TAxisAlignedBox2<double> *param_3,double param_4)

{
  bool bVar1;
  undefined1 local_res8 [8];
  TArrayView<UE::Math::TVector2<double>_const_,int> local_38;
  TVector2<double>_u_0 local_28;
  double local_18;
  double dStack_10;
  
  if (this->Result == Collinear) {
    local_28._s_0.X = (param_3->Min).field0_0x0._s_0.X;
    local_28._s_0.Y = (param_3->Min).field0_0x0._s_0.Y;
    local_18 = (param_3->Max).field0_0x0._s_0.X;
    dStack_10 = (param_3->Max).field0_0x0._s_0.Y;
    local_38.DataPtr = param_1->DataPtr;
    local_38.ArrayNum = param_1->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    DelaunayInternal::GetVoronoiCells_Collinear<double>
              (__return_storage_ptr__,&local_38,param_2,(TAxisAlignedBox2<double> *)&local_28._s_0,
               param_4);
  }
  else {
    if ((((this->Connectivity).Ptr == (FDelaunay2Connectivity *)0x0) ||
        (this->bIsConstrained != false)) &&
       (bVar1 = `UE::Geometry::FDelaunay2::GetVoronoiCells'::__l7::<lambda_1>::operator()
                          (local_res8), !bVar1)) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      return __return_storage_ptr__;
    }
    local_28._s_0.X = (param_3->Min).field0_0x0._s_0.X;
    local_28._s_0.Y = (param_3->Min).field0_0x0._s_0.Y;
    local_18 = (param_3->Max).field0_0x0._s_0.X;
    dStack_10 = (param_3->Max).field0_0x0._s_0.Y;
    local_38.DataPtr = param_1->DataPtr;
    local_38.ArrayNum = param_1->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    DelaunayInternal::GetVoronoiCells<double>
              (__return_storage_ptr__,(this->Connectivity).Ptr,&local_38,param_2,
               (TAxisAlignedBox2<double> *)&local_28._s_0,param_4);
  }
  return __return_storage_ptr__;
}

// HasDuplicates @ 1433b4080

bool __thiscall UE::Geometry::FDelaunay2::HasDuplicates(FDelaunay2 *this)

{
  return ((this->Connectivity).Ptr)->bHasDuplicates;
}

// HasEdge @ 1433b4090

bool __thiscall UE::Geometry::FDelaunay2::HasEdge(FDelaunay2 *this,FIndex2i *param_1,bool param_2)

{
  FDelaunay2Connectivity *pFVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong lVar7;
  FIndex2i_u_0 local_res20;
  
  pFVar1 = (this->Connectivity).Ptr;
  if (!param_2) {
    bVar3 = FDelaunay2Connectivity::HasEdge(pFVar1,param_1);
    return bVar3;
  }
  local_res20._s_0 = (param_1->field0_0x0)._s_0;
  FDelaunay2Connectivity::FixDuplicatesOnEdge(pFVar1,(FIndex2i *)&local_res20._s_0);
  pFVar1 = (this->Connectivity).Ptr;
  uVar4 = FCrc::MemCrc_DEPRECATED(&local_res20,8,0);
  if (*(int *)&(pFVar1->EdgeToVert).field_0x8 != *(int *)&(pFVar1->EdgeToVert).field_0x34) {
    puVar6 = *(undefined1 **)&(pFVar1->EdgeToVert).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pFVar1->EdgeToVert).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(*(int *)&(pFVar1->EdgeToVert).field_0x48 - 1U & uVar4) * 4
                    );
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&pFVar1->EdgeToVert;
      do {
        lVar7 = (longlong)iVar5;
        if ((*(int *)(lVar2 + lVar7 * 0x14) == local_res20._s_0.A) &&
           (*(int *)(lVar2 + 4 + lVar7 * 0x14) == local_res20._s_0.B)) goto LAB_1433b4133;
        iVar5 = *(int *)(lVar2 + 0xc + lVar7 * 0x14);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_1433b4133:
  return iVar5 != -1;
}

// HasEdges @ 1433b41e0

bool __thiscall
UE::Geometry::FDelaunay2::HasEdges
          (FDelaunay2 *this,TArrayView<UE::Geometry::FIndex2i_const_,int> *param_1)

{
  FIndex2i_u_0 *pFVar1;
  FDelaunay2Connectivity *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  int *piVar10;
  uint *puVar11;
  int iVar12;
  undefined1 *puVar13;
  FIndex2i_u_0 *pFVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  FIndex2i_u_0 local_res8;
  
  if ((this->Connectivity).Ptr == (FDelaunay2Connectivity *)0x0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6289950407804323582>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\Delaunay2.cpp"
                       ,0x6fe,"Connectivity.IsValid()");
    if (!bVar5) {
      return false;
    }
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar14 = &param_1->DataPtr->field0_0x0;
  pFVar1 = pFVar14 + param_1->ArrayNum;
  if (pFVar14 != pFVar1) {
    do {
      local_res8 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar14->_s_0;
      if (this->bAutomaticallyFixEdgesToDuplicateVertices != false) {
        pFVar2 = (this->Connectivity).Ptr;
        puVar16 = &(pFVar2->DuplicateVertices).field_0x38;
        if (*(int *)&(pFVar2->DuplicateVertices).field_0x8 !=
            *(int *)&(pFVar2->DuplicateVertices).field_0x34) {
          puVar13 = *(undefined1 **)&(pFVar2->DuplicateVertices).field_0x40;
          puVar15 = puVar16;
          if (puVar13 != (undefined1 *)0x0) {
            puVar15 = puVar13;
          }
          iVar12 = *(int *)(puVar15 +
                           ((ulonglong)(*(int *)&(pFVar2->DuplicateVertices).field_0x48 - 1) &
                           (ulonglong)local_res8 & 0xffffffff) * 4);
          if (iVar12 != -1) {
            do {
              piVar10 = (int *)((longlong)iVar12 * 0x10 + *(longlong *)&pFVar2->DuplicateVertices);
              if (*piVar10 == local_res8._0_4_) {
                if (iVar12 != -1) {
                  puVar11 = (uint *)(piVar10 + 1);
                  if (piVar10 == (int *)0x0) {
                    puVar11 = (uint *)0x0;
                  }
                  if (puVar11 != (uint *)0x0) {
                    local_res8._s_0.A = *puVar11;
                  }
                }
                break;
              }
              iVar12 = piVar10[2];
            } while (iVar12 != -1);
          }
        }
        if (*(int *)&(pFVar2->DuplicateVertices).field_0x8 !=
            *(int *)&(pFVar2->DuplicateVertices).field_0x34) {
          puVar13 = *(undefined1 **)&(pFVar2->DuplicateVertices).field_0x40;
          if (puVar13 != (undefined1 *)0x0) {
            puVar16 = puVar13;
          }
          uVar7 = *(uint *)(puVar16 +
                           (ulonglong)
                           (*(int *)&(pFVar2->DuplicateVertices).field_0x48 - 1U & local_res8._s_0.B
                           ) * 4);
          if (uVar7 != 0xffffffff) {
            do {
              puVar11 = (uint *)((longlong)(int)uVar7 * 0x10 +
                                *(longlong *)&pFVar2->DuplicateVertices);
              if (*puVar11 == local_res8._s_0.B) {
                puVar8 = puVar11 + 1;
                if (puVar11 == (uint *)0x0) {
                  puVar8 = (uint *)0x0;
                }
                if (puVar8 != (uint *)0x0) {
                  local_res8._s_0.B = *puVar8;
                }
                break;
              }
              uVar7 = puVar11[2];
            } while (uVar7 != 0xffffffff);
          }
        }
      }
      pFVar2 = (this->Connectivity).Ptr;
      uVar7 = FCrc::MemCrc_DEPRECATED(&local_res8,8,0);
      if (*(int *)&(pFVar2->EdgeToVert).field_0x8 == *(int *)&(pFVar2->EdgeToVert).field_0x34) {
        return false;
      }
      puVar16 = *(undefined1 **)&(pFVar2->EdgeToVert).field_0x40;
      puVar13 = &(pFVar2->EdgeToVert).field_0x38;
      if (puVar16 != (undefined1 *)0x0) {
        puVar13 = puVar16;
      }
      iVar12 = *(int *)(puVar13 +
                       (ulonglong)(*(int *)&(pFVar2->EdgeToVert).field_0x48 - 1U & uVar7) * 4);
      if (iVar12 == -1) {
        return false;
      }
      lVar3 = *(longlong *)&pFVar2->EdgeToVert;
      while ((lVar9 = (longlong)iVar12, *(int *)(lVar3 + lVar9 * 0x14) != local_res8._s_0.A ||
             (*(int *)(lVar3 + 4 + lVar9 * 0x14) != local_res8._s_0.B))) {
        iVar12 = *(int *)(lVar3 + 0xc + lVar9 * 0x14);
        if (iVar12 == -1) {
          return false;
        }
      }
      if (iVar12 == -1) {
        return false;
      }
      pFVar14 = pFVar14 + 1;
    } while (pFVar14 != pFVar1);
  }
  return true;
}

// IsDelaunay @ 1433bc040

bool __thiscall
UE::Geometry::FDelaunay2::IsDelaunay
          (FDelaunay2 *this,TArrayView<UE::Math::TVector2<float>_const_,int> *param_1,
          TArrayView<UE::Geometry::FIndex2i_const_,int> *param_2)

{
  FDelaunay2Connectivity *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_28;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_18;
  
  pFVar1 = (this->Connectivity).Ptr;
  if (pFVar1 != (FDelaunay2Connectivity *)0x0) {
    local_28.DataPtr = param_2->DataPtr;
    local_28.ArrayNum = param_2->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_18.DataPtr = param_1->DataPtr;
    local_18.ArrayNum = param_1->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar3 = DelaunayInternal::IsDelaunay<float>(pFVar1,&local_18,&local_28);
    return bVar3;
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6289950407804323536>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\Delaunay2.cpp"
                     ,0x6d0,"Connectivity.IsValid()");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// IsDelaunay @ 1433bc0b0

bool __thiscall
UE::Geometry::FDelaunay2::IsDelaunay
          (FDelaunay2 *this,TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,
          TArrayView<UE::Geometry::FIndex2i_const_,int> *param_2)

{
  FDelaunay2Connectivity *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_28;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_18;
  
  pFVar1 = (this->Connectivity).Ptr;
  if (pFVar1 != (FDelaunay2Connectivity *)0x0) {
    local_28.DataPtr = param_2->DataPtr;
    local_28.ArrayNum = param_2->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_18.DataPtr = param_1->DataPtr;
    local_18.ArrayNum = param_1->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar3 = DelaunayInternal::IsDelaunay<double>(pFVar1,&local_18,&local_28);
    return bVar3;
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6289950407804323545>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\Delaunay2.cpp"
                     ,0x6d9,"Connectivity.IsValid()");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// RemapIfDuplicate @ 1433c3690

int __thiscall UE::Geometry::FDelaunay2::RemapIfDuplicate(FDelaunay2 *this,int param_1)

{
  FDelaunay2Connectivity *pFVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  pFVar1 = (this->Connectivity).Ptr;
  if (*(int *)&(pFVar1->DuplicateVertices).field_0x8 !=
      *(int *)&(pFVar1->DuplicateVertices).field_0x34) {
    puVar5 = *(undefined1 **)&(pFVar1->DuplicateVertices).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(pFVar1->DuplicateVertices).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(pFVar1->DuplicateVertices).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar2 * 0x10 + *(longlong *)&pFVar1->DuplicateVertices);
        if (*piVar3 == param_1) {
          piVar4 = piVar3 + 1;
          if (piVar3 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 == (int *)0x0) {
            return param_1;
          }
          return *piVar4;
        }
        iVar2 = piVar3[2];
      } while (iVar2 != -1);
    }
  }
  return param_1;
}

// Triangulate @ 1433db020

bool __thiscall
UE::Geometry::FDelaunay2::Triangulate
          (FDelaunay2 *this,TArrayView<UE::Math::TVector2<float>_const_,int> *param_1,
          TArrayView<UE::Geometry::FIndex2i_const_,int> *param_2)

{
  TPimplPtr<UE::Geometry::FDelaunay2Connectivity,0> *pTVar1;
  FDelaunay2Connectivity *pFVar2;
  bool bVar3;
  TPimplPtr<UE::Geometry::FDelaunay2Connectivity,0> TVar4;
  longlong local_res8;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_28;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_18;
  
  TVar4 = MakePimpl<UE::Geometry::FDelaunay2Connectivity,0,bool_&>((bool *)&local_res8);
  pTVar1 = &this->Connectivity;
  if (TVar4.Ptr != (FDelaunay2Connectivity *)pTVar1) {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = *(FDelaunay2Connectivity **)&(TVar4.Ptr)->EdgeToVert;
    *(undefined8 *)&(TVar4.Ptr)->EdgeToVert = 0;
    if (pFVar2 != (FDelaunay2Connectivity *)0x0) {
      (**(code **)&pFVar2[-1].DuplicateVertices.field_0x40)
                (&pFVar2[-1].DuplicateVertices.field_0x40);
    }
  }
  if (local_res8 != 0) {
    (**(code **)(local_res8 + -0x10))(local_res8 + -0x10);
  }
  local_18.DataPtr = (FIndex2i *)param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pFVar2 = pTVar1->Ptr;
  this->bIsConstrained = 0 < param_2->ArrayNum;
  bVar3 = DelaunayInternal::Triangulate<float>
                    (&this->RandomStream,pFVar2,
                     (TArrayView<UE::Math::TVector2<float>_const_,int> *)&local_18,&local_28,
                     this->bKeepFastEdgeAdjacencyData,&this->Result);
  if (bVar3) {
    if (this->bValidateEdges != false) {
      local_18.DataPtr = param_2->DataPtr;
      local_18.ArrayNum = param_2->ArrayNum;
      local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
      bVar3 = HasEdges(this,&local_18);
      if (!bVar3) {
        this->Result = MissingEdges;
        goto LAB_1433db0f2;
      }
    }
    bVar3 = true;
  }
  else {
LAB_1433db0f2:
    bVar3 = false;
  }
  return bVar3;
}

// Triangulate @ 1433db120

bool __thiscall
UE::Geometry::FDelaunay2::Triangulate
          (FDelaunay2 *this,TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,
          TArrayView<UE::Geometry::FIndex2i_const_,int> *param_2)

{
  TPimplPtr<UE::Geometry::FDelaunay2Connectivity,0> *pTVar1;
  FDelaunay2Connectivity *pFVar2;
  bool bVar3;
  TPimplPtr<UE::Geometry::FDelaunay2Connectivity,0> TVar4;
  longlong local_res8;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_28;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_18;
  
  TVar4 = MakePimpl<UE::Geometry::FDelaunay2Connectivity,0,bool_&>((bool *)&local_res8);
  pTVar1 = &this->Connectivity;
  if (TVar4.Ptr != (FDelaunay2Connectivity *)pTVar1) {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = *(FDelaunay2Connectivity **)&(TVar4.Ptr)->EdgeToVert;
    *(undefined8 *)&(TVar4.Ptr)->EdgeToVert = 0;
    if (pFVar2 != (FDelaunay2Connectivity *)0x0) {
      (**(code **)&pFVar2[-1].DuplicateVertices.field_0x40)
                (&pFVar2[-1].DuplicateVertices.field_0x40);
    }
  }
  if (local_res8 != 0) {
    (**(code **)(local_res8 + -0x10))(local_res8 + -0x10);
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pFVar2 = pTVar1->Ptr;
  this->bIsConstrained = 0 < param_2->ArrayNum;
  bVar3 = DelaunayInternal::Triangulate<double>
                    (&this->RandomStream,pFVar2,&local_18,&local_28,this->bKeepFastEdgeAdjacencyData
                     ,&this->Result);
  if (bVar3) {
    if (this->bValidateEdges != false) {
      local_18.DataPtr = (TVector2<double> *)param_2->DataPtr;
      local_18.ArrayNum = param_2->ArrayNum;
      local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
      bVar3 = HasEdges(this,(TArrayView<UE::Geometry::FIndex2i_const_,int> *)&local_18);
      if (!bVar3) {
        this->Result = MissingEdges;
        goto LAB_1433db1f2;
      }
    }
    bVar3 = true;
  }
  else {
LAB_1433db1f2:
    bVar3 = false;
  }
  return bVar3;
}

// Update @ 1433dcf00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FDelaunay2::Update
          (FDelaunay2 *this,TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FDelaunay2Connectivity *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  int iVar10;
  undefined1 local_res8 [8];
  FRandomStream local_res20;
  undefined8 local_e8;
  int local_e0;
  FBRIOPoints local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_c0;
  FIndex3i_u_0 local_a8;
  TVector2<double> *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_88;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_78;
  TVector2<double>_u_0 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  
  pFVar2 = (this->Connectivity).Ptr;
  iVar10 = *(int *)&(pFVar2->EdgeToVert).field_0x8 - *(int *)&(pFVar2->EdgeToVert).field_0x34;
  if (iVar10 / 3 + (iVar10 >> 0x1f) +
      (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f) == 0) {
    return false;
  }
  iVar10 = param_1->ArrayNum;
  local_d8.MaxTreeDepth = 10;
  iVar4 = iVar10;
  if (iVar10 - param_2 < iVar10) {
    iVar4 = iVar10 - param_2;
  }
  local_d8.Order.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Order.ArrayNum = 0;
  local_d8.Order.ArrayMax = 0;
  local_res20.InitialSeed = 0;
  local_res20.Seed = 0;
  iStack_90 = 0;
  if (0 < iVar4) {
    iStack_90 = iVar4;
  }
  local_98 = param_1->DataPtr + ((longlong)iVar10 - (longlong)iStack_90);
  local_68._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_68._s_0.Y = _UNK_150a9e648;
  local_58 = ___xmm_ffefffffffffffffffefffffffffffff;
  uStack_50 = _UNK_1508ffb58;
  if (iStack_90 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  local_88._12_4_ = uStack_8c;
  local_88.ArrayNum = iStack_90;
  local_88.DataPtr = local_98;
  FBRIOPoints::Compute(&local_d8,&local_88,(TAxisAlignedBox2<double> *)&local_68._s_0,&local_res20);
  iVar10 = local_d8.Order.ArrayNum;
  uVar7 = (ulonglong)local_d8.Order.ArrayNum;
  pFVar1 = local_d8.Order.AllocatorInstance.Data + uVar7 * 4;
  FVar8.Data = local_d8.Order.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar10) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar8.Data == pFVar1) break;
    *(int *)FVar8.Data = *(int *)FVar8.Data + param_2;
    uVar7 = local_d8.Order._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 4;
  }
  local_e8 = 0xffffffffffffffff;
  local_e0 = -1;
  FDelaunay2Connectivity::EnumerateTriangles<_UE::Geometry::FDelaunay2::Update_::__l2::<lambda_1>_>
            ((this->Connectivity).Ptr,(FIndex3i *)&local_e8,false);
  FVar8.Data = local_d8.Order.AllocatorInstance.Data;
  local_a8._s_0.C = local_e0;
  local_a8._0_8_ = local_e8;
  bVar5 = this->bIsConstrained;
  lVar9 = (longlong)local_d8.Order.ArrayNum;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = local_d8.Order.ArrayNum;
  if (local_d8.Order.ArrayNum == 0) {
    local_c0.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_d8.Order.ArrayNum,0,&local_c0.AllocatorInstance,local_d8.Order.ArrayNum,
               &local_c0.ArrayMax);
    memcpy(local_c0.AllocatorInstance.Data,FVar8.Data,lVar9 << 2);
  }
  local_78.DataPtr = param_1->DataPtr;
  local_78.ArrayNum = param_1->ArrayNum;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  DelaunayInternal::Update<double>
            (&this->RandomStream,(this->Connectivity).Ptr,&local_78,&local_c0,
             (FIndex3i *)&local_a8._s_0,bVar5 == false);
  if (local_d8.Order.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Order.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 15049e520

bool __thiscall
`UE::Geometry::FDelaunay2::GetVoronoiCells'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6289950407804323572>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6289950407804323572>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049e560

bool __thiscall
`UE::Geometry::FDelaunay2::GetVoronoiCells'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6289950407804323559>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6289950407804323559>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

