// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// FNiagaraUvQuadTree @ 149427a90

FNiagaraUvQuadTree * __thiscall
FNiagaraUvQuadTree::FNiagaraUvQuadTree(FNiagaraUvQuadTree *this,int param_1,int param_2)

{
  this->NodeCapacity = param_1;
  (this->ChildTrees).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildTrees).ArrayNum = 0;
  (this->ChildTrees).ArrayMax = 0;
  (this->ChildNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildNodes).ArrayNum = 0;
  (this->ChildNodes).ArrayMax = 0;
  this->MaxDepth = param_2;
  AddDefaultSubTree(this);
  return this;
}

// AddDefaultSubTree @ 149430840

void __thiscall FNiagaraUvQuadTree::AddDefaultSubTree(FNiagaraUvQuadTree *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  undefined7 uStack_17;
  
  if ((this->ChildTrees).ArrayNum != 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("ChildTrees.Num() == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraUvQuadTree.cpp"
                        ,0x20,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar5 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
  uVar7 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
  uVar9 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
  uVar11 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
  iVar14 = (this->ChildTrees).ArrayNum;
  piVar1 = &(this->ChildTrees).ArrayMax;
  uVar6 = UE::Math::TVector2<double>::UnitVector.field0_0x0._0_4_;
  uVar8 = UE::Math::TVector2<double>::UnitVector.field0_0x0._4_4_;
  uVar10 = UE::Math::TVector2<double>::UnitVector.field0_0x0._8_4_;
  uVar12 = UE::Math::TVector2<double>::UnitVector.field0_0x0._12_4_;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&(this->ChildTrees).AllocatorInstance,piVar1);
  }
  lVar15 = (longlong)iVar14;
  (this->ChildTrees).ArrayNum = iVar14 + 1;
  pFVar3 = (this->ChildTrees).AllocatorInstance.Data;
  pFVar2 = pFVar3 + lVar15 * 0x50;
  *(undefined4 *)pFVar2 = uVar5;
  *(undefined4 *)(pFVar2 + 4) = uVar7;
  *(undefined4 *)(pFVar2 + 8) = uVar9;
  *(undefined4 *)(pFVar2 + 0xc) = uVar11;
  pFVar3[lVar15 * 0x50 + 0x48] = (FScriptContainerElement)0x0;
  pFVar2 = pFVar3 + lVar15 * 0x50 + 0x10;
  *(undefined4 *)pFVar2 = uVar6;
  *(undefined4 *)(pFVar2 + 4) = uVar8;
  *(undefined4 *)(pFVar2 + 8) = uVar10;
  *(undefined4 *)(pFVar2 + 0xc) = uVar12;
  *(ulonglong *)(pFVar3 + lVar15 * 0x50 + 0x20) = CONCAT71(uStack_17,1);
  *(undefined8 *)(pFVar3 + lVar15 * 0x50 + 0x38) = 0;
  *(undefined8 *)(pFVar3 + lVar15 * 0x50 + 0x40) = 0;
  *(undefined8 *)(pFVar3 + lVar15 * 0x50 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar3 + lVar15 * 0x50 + 0x28) = 0xffffffffffffffff;
  return;
}

// Empty @ 149441850

void __thiscall FNiagaraUvQuadTree::Empty(FNiagaraUvQuadTree *this)

{
  int *piVar1;
  
  DestructItems<FNiagaraUvQuadTree::FSubTree,int>
            ((FSubTree *)(this->ChildTrees).AllocatorInstance.Data,(this->ChildTrees).ArrayNum);
  piVar1 = &(this->ChildTrees).ArrayMax;
  (this->ChildTrees).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->ChildTrees).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ChildNodes).ArrayMax;
  (this->ChildNodes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->ChildNodes).AllocatorInstance,0,piVar1);
  }
  AddDefaultSubTree(this);
  return;
}

// Freeze @ 1494454b0

void __thiscall FNiagaraUvQuadTree::Freeze(FNiagaraUvQuadTree *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ChildTrees).ArrayNum == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildTrees.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraUvQuadTree.cpp"
                       ,0x26,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ChildTrees).ArrayNum < 1) {
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
  FSubTree::Freeze((FSubTree *)(this->ChildTrees).AllocatorInstance.Data,this,param_1);
  return;
}

// Insert @ 1494528e0

void __thiscall
FNiagaraUvQuadTree::Insert(FNiagaraUvQuadTree *this,int param_1,TBox2<double> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  
  if ((this->ChildTrees).ArrayNum == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildTrees.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraUvQuadTree.cpp"
                       ,0x11,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->ChildNodes).ArrayNum;
  piVar1 = &(this->ChildNodes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->ChildNodes).AllocatorInstance,piVar1);
  }
  (this->ChildNodes).ArrayNum = iVar6 + 1;
  dVar4 = (param_2->Min).field0_0x0._s_0.Y;
  lVar7 = (longlong)iVar6;
  pFVar2 = (this->ChildNodes).AllocatorInstance.Data;
  *(double *)(pFVar2 + lVar7 * 0x30) = (param_2->Min).field0_0x0._s_0.X;
  *(double *)(pFVar2 + lVar7 * 0x30 + 8) = dVar4;
  dVar4 = (param_2->Max).field0_0x0._s_0.Y;
  *(double *)(pFVar2 + lVar7 * 0x30 + 0x10) = (param_2->Max).field0_0x0._s_0.X;
  *(double *)(pFVar2 + lVar7 * 0x30 + 0x10 + 8) = dVar4;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x20) = *(undefined8 *)&param_2->bIsValid;
  *(int *)(pFVar2 + lVar7 * 0x30 + 0x28) = param_1;
  InsertElement(this,0,iVar6,0);
  return;
}

// InsertElement @ 1494529a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraUvQuadTree::InsertElement(FNiagaraUvQuadTree *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint *puVar7;
  TBox2<double> *pTVar8;
  FSubTree *this_00;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  uint *local_88;
  FScriptContainerElement *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  uint local_58 [2];
  TStaticArray<int,4,4294967295> local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  lVar9 = 0;
  iVar4 = (this->ChildTrees).ArrayNum;
  uVar5 = 0;
  if (param_1 < iVar4) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  local_58[0] = param_2;
  if ((uVar5 == 0) &&
     (local_88 = (uint *)(longlong)param_1, local_80 = (FScriptContainerElement *)(longlong)iVar4,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar7 = (uint *)(longlong)(int)local_58[0];
  iVar4 = (this->ChildNodes).ArrayNum;
  this_00 = (FSubTree *)((this->ChildTrees).AllocatorInstance.Data + (longlong)param_1 * 0x50);
  uVar5 = 0;
  if ((int)local_58[0] < iVar4) {
    uVar5 = ~local_58[0] >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (local_88 = puVar7, local_80 = (FScriptContainerElement *)(longlong)iVar4,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar8 = (TBox2<double> *)((this->ChildNodes).AllocatorInstance.Data + (longlong)puVar7 * 0x30);
  iVar4 = FSubTree::GetQuads(this_00,pTVar8,&local_50);
  if (iVar4 == 0) {
    if ((this_00->bInternal != false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Parent.bInternal",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraUvQuadTree.cpp"
                           ,0xd8,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_3 < this->MaxDepth) && (this->NodeCapacity <= (this_00->ContentIndices).ArrayNum)) {
      Split(this,param_1);
      InsertElement(this,param_1,local_58[0],param_3);
      return;
    }
    pFVar6 = (this_00->ContentIndices).AllocatorInstance.Data;
    if (((FScriptContainerElement *)local_58 < pFVar6) ||
       (lVar9 = (longlong)(this_00->ContentIndices).ArrayMax,
       pFVar6 + lVar9 * 4 <= (FScriptContainerElement *)local_58)) goto LAB_149452c58;
    iVar4 = (this_00->ContentIndices).ArrayNum;
    local_78 = lVar9;
  }
  else {
    if (iVar4 == 1) {
      if ((this_00->bInternal == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Parent.bInternal",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraUvQuadTree.cpp"
                             ,0xea,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      InsertElement(this,local_50.Elements[0],local_58[0],param_3 + 1);
      return;
    }
    if ((((pTVar8->Max).field0_0x0._s_0.Y - (pTVar8->Min).field0_0x0._s_0.Y) *
        ((pTVar8->Max).field0_0x0._s_0.X - (pTVar8->Min).field0_0x0._s_0.X)) /
        (((this_00->Coverage).Max.field0_0x0._s_0.Y - (this_00->Coverage).Min.field0_0x0._s_0.Y) *
        ((this_00->Coverage).Max.field0_0x0._s_0.X - (this_00->Coverage).Min.field0_0x0._s_0.X)) <=
        (double)GNiagaraUvQuadTreeDuplicateThreshold) {
      if (iVar4 < 1) {
        return;
      }
      do {
        InsertElement(this,local_50.Elements[lVar9],local_58[0],param_3 + 1);
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar4);
      return;
    }
    if ((this_00->bInternal == false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent.bInternal",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraUvQuadTree.cpp"
                           ,0xf2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = (this_00->ContentIndices).AllocatorInstance.Data;
    if (((FScriptContainerElement *)local_58 < pFVar6) ||
       (lVar9 = (longlong)(this_00->ContentIndices).ArrayMax,
       pFVar6 + lVar9 * 4 <= (FScriptContainerElement *)local_58)) goto LAB_149452c58;
    iVar4 = (this_00->ContentIndices).ArrayNum;
    local_78 = lVar9;
  }
  local_70 = (longlong)iVar4;
  local_68 = 4;
  local_88 = local_58;
  local_80 = pFVar6;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x7a5,
                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                    );
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_149452c58:
  iVar4 = (this_00->ContentIndices).ArrayNum;
  piVar1 = &(this_00->ContentIndices).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this_00->ContentIndices).AllocatorInstance,piVar1);
  }
  (this_00->ContentIndices).ArrayNum = iVar4 + 1;
  *(uint *)((this_00->ContentIndices).AllocatorInstance.Data + (longlong)iVar4 * 4) = local_58[0];
  return;
}

// Split @ 149469280

void __thiscall FNiagaraUvQuadTree::Split(FNiagaraUvQuadTree *this,int param_1)

{
  TArray<FNiagaraUvQuadTree::FSubTree,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  uint *puVar23;
  bool bVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint uVar29;
  ulonglong uVar30;
  longlong lVar31;
  FScriptContainerElement *pFVar32;
  FNiagaraUvQuadTree *pFVar33;
  uint *puVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  uint local_1a8;
  undefined1 local_1a4 [4];
  ForAnyElementType local_1a0;
  undefined8 uStack_198;
  uint local_190;
  FNiagaraUvQuadTree *local_188;
  uint local_180 [4];
  uint *local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148;
  undefined7 uStack_147;
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0;
  undefined7 uStack_cf;
  
  iVar25 = (this->ChildTrees).ArrayNum;
  pTVar1 = &this->ChildTrees;
  lVar31 = (longlong)param_1;
  uVar29 = iVar25 + 4;
  local_188 = this;
  if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
  }
  piVar2 = &(this->ChildTrees).ArrayMax;
  if (*piVar2 < (int)uVar29) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,uVar29,&pTVar1->AllocatorInstance,iVar25,piVar2);
  }
  uVar29 = 0;
  if (param_1 < (this->ChildTrees).ArrayNum) {
    uVar29 = (uint)~param_1 >> 0x1f;
  }
  if (uVar29 == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if (pFVar4[lVar31 * 0x50 + 0x48] != (FScriptContainerElement)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Parent.bInternal == false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraUvQuadTree.cpp"
                        ,0x86,L"");
    if (bVar24) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  dVar22 = __real_3fe0000000000000;
  iVar25 = (this->ChildTrees).ArrayNum;
  uVar18 = *(undefined8 *)(pFVar4 + lVar31 * 0x50);
  uVar19 = *(undefined8 *)(pFVar4 + lVar31 * 0x50 + 8);
  local_148 = 1;
  uVar20 = *(undefined8 *)(pFVar4 + lVar31 * 0x50 + 0x10);
  uVar21 = *(undefined8 *)(pFVar4 + lVar31 * 0x50 + 0x10 + 8);
  dVar15 = (*(double *)(pFVar4 + lVar31 * 0x50 + 0x10) + *(double *)(pFVar4 + lVar31 * 0x50)) *
           __real_3fe0000000000000;
  dVar16 = (*(double *)(pFVar4 + lVar31 * 0x50 + 8) + *(double *)(pFVar4 + lVar31 * 0x50 + 0x18)) *
           __real_3fe0000000000000;
  uVar35 = SUB84(dVar16,0);
  uVar37 = (undefined4)((ulonglong)dVar16 >> 0x20);
  dVar42 = (*(double *)(pFVar4 + lVar31 * 0x50 + 0x10) - *(double *)(pFVar4 + lVar31 * 0x50)) *
           __real_3fe0000000000000;
  dVar41 = (*(double *)(pFVar4 + lVar31 * 0x50 + 0x18) - *(double *)(pFVar4 + lVar31 * 0x50 + 8)) *
           __real_3fe0000000000000;
  dVar17 = dVar15 + dVar42;
  dVar42 = dVar15 - dVar42;
  dVar43 = dVar16 - dVar41;
  uVar36 = SUB84(dVar43,0);
  uVar38 = (undefined4)((ulonglong)dVar43 >> 0x20);
  dVar16 = dVar16 + dVar41;
  uVar39 = SUB84(dVar16,0);
  uVar40 = (undefined4)((ulonglong)dVar16 >> 0x20);
  if (iVar25 == *piVar2) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,piVar2);
  }
  local_120 = 1;
  (this->ChildTrees).ArrayNum = iVar25 + 1;
  lVar27 = (longlong)iVar25;
  pFVar32 = (pTVar1->AllocatorInstance).Data;
  local_168._8_4_ = uVar35;
  local_168._0_8_ = dVar42;
  local_168._12_4_ = uVar37;
  local_158._8_4_ = uVar39;
  local_158._0_8_ = dVar15;
  local_158._12_4_ = uVar40;
  pFVar32[lVar27 * 0x50 + 0x48] = (FScriptContainerElement)0x0;
  auVar9._8_4_ = uVar35;
  auVar9._0_8_ = dVar42;
  auVar9._12_4_ = uVar37;
  *(undefined1 (*) [16])(pFVar32 + lVar27 * 0x50) = auVar9;
  auVar13._8_4_ = uVar39;
  auVar13._0_8_ = dVar15;
  auVar13._12_4_ = uVar40;
  *(undefined1 (*) [16])(pFVar32 + lVar27 * 0x50 + 0x10) = auVar13;
  *(ulonglong *)(pFVar32 + lVar27 * 0x50 + 0x20) = CONCAT71(uStack_147,local_148);
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x38) = 0;
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x40) = 0;
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x28) = 0xffffffffffffffff;
  *(int *)(pFVar4 + lVar31 * 0x50 + 0x28) = iVar25;
  iVar25 = (this->ChildTrees).ArrayNum;
  local_130 = uVar20;
  uStack_128 = uVar21;
  if (iVar25 == *piVar2) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,piVar2);
  }
  local_f8 = 1;
  (this->ChildTrees).ArrayNum = iVar25 + 1;
  lVar27 = (longlong)iVar25;
  local_140._8_4_ = uVar35;
  local_140._0_8_ = dVar15;
  local_140._12_4_ = uVar37;
  pFVar32 = (pTVar1->AllocatorInstance).Data;
  local_118 = uVar18;
  uStack_110 = uVar19;
  auVar10._8_4_ = uVar35;
  auVar10._0_8_ = dVar15;
  auVar10._12_4_ = uVar37;
  *(undefined1 (*) [16])(pFVar32 + lVar27 * 0x50) = auVar10;
  pFVar32[lVar27 * 0x50 + 0x48] = (FScriptContainerElement)0x0;
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x10) = uVar20;
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x10 + 8) = uVar21;
  *(ulonglong *)(pFVar32 + lVar27 * 0x50 + 0x20) = CONCAT71(uStack_11f,local_120);
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x38) = 0;
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x40) = 0;
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x28) = 0xffffffffffffffff;
  *(int *)(pFVar4 + lVar31 * 0x50 + 0x2c) = iVar25;
  iVar25 = (this->ChildTrees).ArrayNum;
  if (iVar25 == *piVar2) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,piVar2);
  }
  pFVar32 = (pTVar1->AllocatorInstance).Data;
  (this->ChildTrees).ArrayNum = iVar25 + 1;
  lVar27 = (longlong)iVar25;
  local_108._8_4_ = uVar35;
  local_108._0_8_ = dVar15;
  local_108._12_4_ = uVar37;
  local_d0 = 1;
  *(undefined8 *)(pFVar32 + lVar27 * 0x50) = uVar18;
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 8) = uVar19;
  pFVar32[lVar27 * 0x50 + 0x48] = (FScriptContainerElement)0x0;
  auVar11._8_4_ = uVar35;
  auVar11._0_8_ = dVar15;
  auVar11._12_4_ = uVar37;
  *(undefined1 (*) [16])(pFVar32 + lVar27 * 0x50 + 0x10) = auVar11;
  *(ulonglong *)(pFVar32 + lVar27 * 0x50 + 0x20) = CONCAT71(uStack_f7,local_f8);
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x38) = 0;
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x40) = 0;
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x28) = 0xffffffffffffffff;
  *(int *)(pFVar4 + lVar31 * 0x50 + 0x30) = iVar25;
  iVar25 = (this->ChildTrees).ArrayNum;
  if (iVar25 == *piVar2) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ChildTrees).ArrayNum = iVar25 + 1;
  lVar27 = (longlong)iVar25;
  local_f0._8_4_ = uVar36;
  local_f0._0_8_ = dVar15;
  local_f0._12_4_ = uVar38;
  local_e0._8_4_ = uVar35;
  local_e0._0_8_ = dVar17;
  local_e0._12_4_ = uVar37;
  pFVar32 = (pTVar1->AllocatorInstance).Data;
  auVar12._8_4_ = uVar36;
  auVar12._0_8_ = dVar15;
  auVar12._12_4_ = uVar38;
  *(undefined1 (*) [16])(pFVar32 + lVar27 * 0x50) = auVar12;
  pFVar32[lVar27 * 0x50 + 0x48] = (FScriptContainerElement)0x0;
  auVar14._8_4_ = uVar35;
  auVar14._0_8_ = dVar17;
  auVar14._12_4_ = uVar37;
  *(undefined1 (*) [16])(pFVar32 + lVar27 * 0x50 + 0x10) = auVar14;
  *(ulonglong *)(pFVar32 + lVar27 * 0x50 + 0x20) = CONCAT71(uStack_cf,local_d0);
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x38) = 0;
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x40) = 0;
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(pFVar32 + lVar27 * 0x50 + 0x28) = 0xffffffffffffffff;
  *(int *)(pFVar4 + lVar31 * 0x50 + 0x34) = iVar25;
  pFVar4[lVar31 * 0x50 + 0x48] = (FScriptContainerElement)0x1;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  uStack_198 = 0;
  local_190 = *(uint *)(pFVar4 + lVar31 * 0x50 + 0x40);
  uVar28 = (ulonglong)(int)local_190;
  puVar34 = *(uint **)(pFVar4 + lVar31 * 0x50 + 0x38);
  local_170 = puVar34 + uVar28;
  pFVar33 = this;
LAB_1494696b0:
  do {
    puVar23 = local_170;
    if (*(int *)(pFVar4 + lVar31 * 0x50 + 0x40) != (int)uVar28) {
      local_1a4[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1a4);
    }
    if (puVar34 == puVar23) {
      pFVar32 = *(FScriptContainerElement **)(pFVar4 + lVar31 * 0x50 + 0x38);
      uVar18 = *(undefined8 *)(pFVar4 + lVar31 * 0x50 + 0x38 + 8);
      *(FScriptContainerElement **)(pFVar4 + lVar31 * 0x50 + 0x38) = local_1a0.Data;
      *(undefined8 *)(pFVar4 + lVar31 * 0x50 + 0x38 + 8) = uStack_198;
      if (pFVar32 != (FScriptContainerElement *)0x0) {
        local_1a0.Data = pFVar32;
        uStack_198 = uVar18;
        FMemory::Free(pFVar32);
      }
      return;
    }
    local_1a8 = *puVar34;
    lVar27 = (longlong)(int)local_1a8;
    uVar29 = 0;
    if ((int)local_1a8 < (pFVar33->ChildNodes).ArrayNum) {
      uVar29 = ~local_1a8 >> 0x1f;
    }
    if (uVar29 == 0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar24) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    uVar28 = 0;
    uVar29 = 0;
    pFVar32 = (pFVar33->ChildNodes).AllocatorInstance.Data + lVar27 * 0x30;
    if (pFVar4[lVar31 * 0x50 + 0x48] != (FScriptContainerElement)0x0) {
      dVar42 = (*(double *)(pFVar4 + lVar31 * 0x50 + 0x10) + *(double *)(pFVar4 + lVar31 * 0x50)) *
               dVar22;
      dVar16 = (*(double *)(pFVar4 + lVar31 * 0x50 + 0x18) + *(double *)(pFVar4 + lVar31 * 0x50 + 8)
               ) * dVar22;
      dVar15 = *(double *)pFVar32;
      bVar24 = dVar42 == *(double *)(pFVar32 + 0x10);
      bVar6 = dVar42 < *(double *)(pFVar32 + 0x10);
      bVar5 = dVar16 == *(double *)(pFVar32 + 0x18);
      bVar7 = dVar16 < *(double *)(pFVar32 + 0x18);
      if ((dVar15 <= dVar42) && (*(double *)(pFVar32 + 8) <= dVar16)) {
        uVar28 = 1;
        local_180[0] = *(uint *)(pFVar4 + lVar31 * 0x50 + 0x30);
      }
      uVar30 = uVar28;
      if ((bVar6 || bVar24) && (*(double *)(pFVar32 + 8) <= dVar16)) {
        uVar30 = (ulonglong)((int)uVar28 + 1);
        local_180[uVar28] = *(uint *)(pFVar4 + lVar31 * 0x50 + 0x34);
      }
      uVar28 = uVar30;
      if ((dVar15 <= dVar42) && (bVar7 || bVar5)) {
        uVar28 = (ulonglong)((int)uVar30 + 1);
        local_180[uVar30] = *(uint *)(pFVar4 + lVar31 * 0x50 + 0x28);
      }
      uVar29 = (uint)uVar28;
      if ((bVar6 || bVar24) && (bVar7 || bVar5)) {
        uVar29 = uVar29 + 1;
        local_180[uVar28] = *(uint *)(pFVar4 + lVar31 * 0x50 + 0x2c);
      }
      uVar3 = local_180[0];
      if (uVar29 == 1) {
        uVar29 = 0;
        if ((int)local_180[0] < (this->ChildTrees).ArrayNum) {
          uVar29 = ~local_180[0] >> 0x1f;
        }
        if (uVar29 == 0) {
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar24) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        pFVar32 = (pTVar1->AllocatorInstance).Data;
        if ((*(uint **)(pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x38) <= &local_1a8) &&
           (&local_1a8 <
            *(uint **)(pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x38) +
            *(int *)(pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x44))) {
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar24) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        iVar25 = *(int *)(pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x40);
        if (iVar25 == *(int *)(pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x44)) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)
                                    (pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x38),
                              (int *)(pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x44));
        }
        *(int *)(pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x40) = iVar25 + 1;
        puVar34 = puVar34 + 1;
        *(uint *)(*(longlong *)(pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x38) + (longlong)iVar25 * 4
                 ) = local_1a8;
        uVar28 = (ulonglong)local_190;
        goto LAB_1494696b0;
      }
    }
    dVar15 = *(double *)(pFVar32 + 8);
    uVar35 = SUB84(dVar15,0);
    uVar37 = (undefined4)((ulonglong)dVar15 >> 0x20);
    dVar16 = *(double *)(pFVar4 + lVar31 * 0x50 + 8);
    if (dVar15 <= dVar16) {
      uVar35 = SUB84(dVar16,0);
      uVar37 = (undefined4)((ulonglong)dVar16 >> 0x20);
    }
    dVar15 = *(double *)(pFVar4 + lVar31 * 0x50 + 0x18);
    dVar16 = *(double *)(pFVar4 + lVar31 * 0x50 + 0x10);
    dVar42 = *(double *)(pFVar4 + lVar31 * 0x50);
    uVar39 = SUB84(dVar42,0);
    uVar40 = (undefined4)((ulonglong)dVar42 >> 0x20);
    dVar43 = *(double *)(pFVar32 + 0x18);
    if (dVar15 <= *(double *)(pFVar32 + 0x18)) {
      dVar43 = dVar15;
    }
    dVar17 = *(double *)pFVar32;
    if (dVar42 <= dVar17) {
      uVar39 = SUB84(dVar17,0);
      uVar40 = (undefined4)((ulonglong)dVar17 >> 0x20);
    }
    if (dVar43 <= (double)CONCAT44(uVar37,uVar35)) {
      dVar43 = (double)CONCAT44(uVar37,uVar35);
    }
    uVar36 = SUB84(dVar16,0);
    uVar38 = (undefined4)((ulonglong)dVar16 >> 0x20);
    dVar42 = *(double *)(pFVar32 + 0x10);
    if (dVar42 <= dVar16) {
      uVar36 = SUB84(dVar42,0);
      uVar38 = (undefined4)((ulonglong)dVar42 >> 0x20);
    }
    if ((double)CONCAT44(uVar38,uVar36) <= (double)CONCAT44(uVar40,uVar39)) {
      uVar36 = uVar39;
      uVar38 = uVar40;
    }
    if (((dVar43 - (double)CONCAT44(uVar37,uVar35)) *
        ((double)CONCAT44(uVar38,uVar36) - (double)CONCAT44(uVar40,uVar39))) /
        ((dVar15 - *(double *)(pFVar4 + lVar31 * 0x50 + 8)) *
        (dVar16 - *(double *)(pFVar4 + lVar31 * 0x50))) <=
        (double)GNiagaraUvQuadTreeDuplicateThreshold) {
      if (uVar29 != 0) {
        lVar27 = 0;
        do {
          uVar3 = local_180[lVar27];
          uVar26 = 0;
          if ((int)uVar3 < (this->ChildTrees).ArrayNum) {
            uVar26 = ~uVar3 >> 0x1f;
          }
          if (uVar26 == 0) {
            bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar24) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          pFVar32 = (pTVar1->AllocatorInstance).Data;
          if ((*(uint **)(pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x38) <= &local_1a8) &&
             (&local_1a8 <
              *(uint **)(pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x38) +
              *(int *)(pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x44))) {
            bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar24) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          iVar25 = *(int *)(pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x40);
          if (iVar25 == *(int *)(pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x44)) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)
                                      (pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x38),
                                (int *)(pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x44));
          }
          *(int *)(pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x40) = iVar25 + 1;
          lVar27 = lVar27 + 1;
          *(uint *)(*(longlong *)(pFVar32 + (longlong)(int)uVar3 * 0x50 + 0x38) +
                   (longlong)iVar25 * 4) = local_1a8;
        } while (lVar27 < (longlong)(ulonglong)uVar29);
      }
      puVar34 = puVar34 + 1;
      uVar28 = (ulonglong)local_190;
      pFVar33 = local_188;
    }
    else {
      if ((local_1a0.Data <= (FScriptContainerElement *)&local_1a8) &&
         ((FScriptContainerElement *)&local_1a8 < local_1a0.Data + (longlong)uStack_198._4_4_ * 4))
      {
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar24) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if ((int)uStack_198 == uStack_198._4_4_) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_1a0,(int *)((longlong)&uStack_198 + 4));
        uStack_198 = CONCAT44(uStack_198._4_4_,iVar25);
      }
      lVar27 = (longlong)(int)uStack_198;
      puVar34 = puVar34 + 1;
      uStack_198 = CONCAT44(uStack_198._4_4_,(int)uStack_198 + 1);
      *(uint *)(local_1a0.Data + lVar27 * 4) = local_1a8;
      uVar28 = (ulonglong)local_190;
    }
  } while( true );
}

