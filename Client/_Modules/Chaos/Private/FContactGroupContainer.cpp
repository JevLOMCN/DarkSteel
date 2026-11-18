// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Add @ 1439c4ec0

void __thiscall
Chaos::FContactGroupContainer::Add
          (FContactGroupContainer *this,FPBDCollisionConstraint *param_1,int param_2,
          TVector<double,3> *param_3,TVector<double,3> *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  longlong lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  TVector<double,3> *pTVar28;
  bool bVar29;
  uint uVar30;
  uint uVar31;
  ForElementType<Chaos::FContactGroup> FVar32;
  longlong lVar33;
  ForElementType<Chaos::FContactGroup> FVar34;
  uchar *puVar35;
  double dVar36;
  
  pTVar28 = param_4;
  dVar5 = __real_4014000000000000;
  uVar31 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar4 = __real_3fefae147ae147ae;
  FVar32 = (this->ContactGroups).AllocatorInstance.SecondaryData;
  piVar1 = &(this->ContactGroups).ArrayNum;
  iVar9 = *piVar1;
  FVar34 = (ForElementType<Chaos::FContactGroup>)this;
  if (FVar32 != (ForElementType<Chaos::FContactGroup>)0x0) {
    FVar34 = FVar32;
  }
  FVar32 = (ForElementType<Chaos::FContactGroup>)((longlong)iVar9 * 0x50 + (longlong)FVar34);
  puVar35 = (uchar *)((longlong)FVar34 + 0x18);
  while( true ) {
    if (*piVar1 != iVar9) {
      param_4._0_1_ = 0;
      `TCheckedPointerIterator<Chaos::FContactGroup,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_4);
    }
    if (FVar34 == FVar32) goto LAB_1439c5025;
    if ((dVar4 < *(double *)(puVar35 + 0x18) * *(double *)&pTVar28->field_0x8 +
                 *(double *)(puVar35 + 0x10) * *(double *)pTVar28 +
                 *(double *)(puVar35 + 0x20) * *(double *)&pTVar28->field_0x10) &&
       (dVar36 = (*(double *)param_3 - *(double *)(puVar35 + -8)) * *(double *)(puVar35 + 0x10) +
                 (*(double *)&param_3->field_0x8 - *(double *)puVar35) * *(double *)(puVar35 + 0x18)
                 + (*(double *)&param_3->field_0x10 - *(double *)(puVar35 + 8)) *
                   *(double *)(puVar35 + 0x20),
       (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar31,SUB84(dVar36,0) & uVar30) < dVar5
       )) break;
    FVar34 = (ForElementType<Chaos::FContactGroup>)((longlong)FVar34 + 0x50);
    puVar35 = puVar35 + 0x50;
  }
  if (FVar34 == (ForElementType<Chaos::FContactGroup>)0x0) {
LAB_1439c5025:
    piVar2 = &(this->ContactGroups).ArrayMax;
    uVar30 = *piVar1;
    if (uVar30 == *piVar2) {
      uVar30 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FContactGroup>_>
                         (0x850,(ForElementType<Chaos::FContactGroup> *)this,piVar2);
      *piVar1 = uVar30;
    }
    *piVar1 = uVar30 + 1;
    FVar32 = (this->ContactGroups).AllocatorInstance.SecondaryData;
    FVar34 = (ForElementType<Chaos::FContactGroup>)this;
    if (FVar32 != (ForElementType<Chaos::FContactGroup>)0x0) {
      FVar34 = FVar32;
    }
    DefaultConstructItems<Chaos::FContactGroup,int>
              ((void *)((longlong)(int)uVar30 * 0x50 + (longlong)FVar34),1);
    uVar31 = 0;
    if ((int)uVar30 < *piVar1) {
      uVar31 = ~uVar30 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar29)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    FVar32 = (this->ContactGroups).AllocatorInstance.SecondaryData;
    FVar34 = (ForElementType<Chaos::FContactGroup>)this;
    if (FVar32 != (ForElementType<Chaos::FContactGroup>)0x0) {
      FVar34 = FVar32;
    }
    FVar34 = (ForElementType<Chaos::FContactGroup>)((longlong)FVar34 + (longlong)(int)uVar30 * 0x50)
    ;
  }
  dVar4 = *(double *)&(this->UpVector).field_0x8;
  dVar5 = *(double *)&pTVar28->field_0x8;
  uVar30 = *(uint *)((longlong)FVar34 + 8);
  dVar36 = *(double *)&this->UpVector;
  dVar6 = *(double *)pTVar28;
  dVar7 = *(double *)&(this->UpVector).field_0x10;
  dVar8 = *(double *)&pTVar28->field_0x10;
  if (uVar30 == 0) {
    uVar13 = param_3->field_0x1;
    uVar14 = param_3->field_0x2;
    uVar15 = param_3->field_0x3;
    uVar16 = param_3->field_0x4;
    uVar17 = param_3->field_0x5;
    uVar18 = param_3->field_0x6;
    uVar19 = param_3->field_0x7;
    uVar20 = param_3->field_0x8;
    uVar21 = param_3->field_0x9;
    uVar22 = param_3->field_0xa;
    uVar23 = param_3->field_0xb;
    uVar24 = param_3->field_0xc;
    uVar25 = param_3->field_0xd;
    uVar26 = param_3->field_0xe;
    uVar27 = param_3->field_0xf;
    puVar35 = (uchar *)((longlong)FVar34 + 0x10);
    puVar35[0] = param_3->field_0x0;
    puVar35[1] = uVar13;
    puVar35[2] = uVar14;
    puVar35[3] = uVar15;
    puVar35[4] = uVar16;
    puVar35[5] = uVar17;
    puVar35[6] = uVar18;
    puVar35[7] = uVar19;
    puVar35 = (uchar *)((longlong)FVar34 + 0x18);
    puVar35[0] = uVar20;
    puVar35[1] = uVar21;
    puVar35[2] = uVar22;
    puVar35[3] = uVar23;
    puVar35[4] = uVar24;
    puVar35[5] = uVar25;
    puVar35[6] = uVar26;
    puVar35[7] = uVar27;
    uVar13 = param_3->field_0x11;
    uVar14 = param_3->field_0x12;
    uVar15 = param_3->field_0x13;
    uVar16 = param_3->field_0x14;
    uVar17 = param_3->field_0x15;
    uVar18 = param_3->field_0x16;
    uVar19 = param_3->field_0x17;
    puVar35 = (uchar *)((longlong)FVar34 + 0x20);
    puVar35[0] = param_3->field_0x10;
    puVar35[1] = uVar13;
    puVar35[2] = uVar14;
    puVar35[3] = uVar15;
    puVar35[4] = uVar16;
    puVar35[5] = uVar17;
    puVar35[6] = uVar18;
    puVar35[7] = uVar19;
    uVar13 = pTVar28->field_0x1;
    uVar14 = pTVar28->field_0x2;
    uVar15 = pTVar28->field_0x3;
    uVar16 = pTVar28->field_0x4;
    uVar17 = pTVar28->field_0x5;
    uVar18 = pTVar28->field_0x6;
    uVar19 = pTVar28->field_0x7;
    uVar20 = pTVar28->field_0x8;
    uVar21 = pTVar28->field_0x9;
    uVar22 = pTVar28->field_0xa;
    uVar23 = pTVar28->field_0xb;
    uVar24 = pTVar28->field_0xc;
    uVar25 = pTVar28->field_0xd;
    uVar26 = pTVar28->field_0xe;
    uVar27 = pTVar28->field_0xf;
    puVar35 = (uchar *)((longlong)FVar34 + 0x28);
    puVar35[0] = pTVar28->field_0x0;
    puVar35[1] = uVar13;
    puVar35[2] = uVar14;
    puVar35[3] = uVar15;
    puVar35[4] = uVar16;
    puVar35[5] = uVar17;
    puVar35[6] = uVar18;
    puVar35[7] = uVar19;
    puVar35 = (uchar *)((longlong)FVar34 + 0x30);
    puVar35[0] = uVar20;
    puVar35[1] = uVar21;
    puVar35[2] = uVar22;
    puVar35[3] = uVar23;
    puVar35[4] = uVar24;
    puVar35[5] = uVar25;
    puVar35[6] = uVar26;
    puVar35[7] = uVar27;
    uVar13 = pTVar28->field_0x11;
    uVar14 = pTVar28->field_0x12;
    uVar15 = pTVar28->field_0x13;
    uVar16 = pTVar28->field_0x14;
    uVar17 = pTVar28->field_0x15;
    uVar18 = pTVar28->field_0x16;
    uVar19 = pTVar28->field_0x17;
    puVar35 = (uchar *)((longlong)FVar34 + 0x38);
    puVar35[0] = pTVar28->field_0x10;
    puVar35[1] = uVar13;
    puVar35[2] = uVar14;
    puVar35[3] = uVar15;
    puVar35[4] = uVar16;
    puVar35[5] = uVar17;
    puVar35[6] = uVar18;
    puVar35[7] = uVar19;
    *(double *)((longlong)FVar34 + 0x40) = dVar4 * dVar5 + dVar36 * dVar6 + dVar7 * dVar8;
    *(uchar *)((longlong)FVar34 + 0x48) = '\x01';
  }
  if (uVar30 == *(uint *)((longlong)FVar34 + 0xc)) {
    uVar30 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,(ForAnyElementType *)FVar34,(int *)((longlong)FVar34 + 0xc));
  }
  *(uint *)((longlong)FVar34 + 8) = uVar30 + 1;
  uVar31 = 0;
  if ((int)uVar30 < (int)(uVar30 + 1)) {
    uVar31 = ~uVar30 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  lVar10 = *(longlong *)FVar34;
  lVar33 = (longlong)(int)uVar30 * 0x40;
  *(FPBDCollisionConstraint **)(lVar33 + lVar10) = param_1;
  *(int *)(lVar33 + 8 + lVar10) = param_2;
  uVar12 = *(undefined8 *)&param_3->field_0x8;
  puVar3 = (undefined8 *)(lVar33 + 0x28 + lVar10);
  *puVar3 = *(undefined8 *)param_3;
  puVar3[1] = uVar12;
  *(undefined8 *)(lVar33 + 0x38 + lVar10) = *(undefined8 *)&param_3->field_0x10;
  uVar12 = *(undefined8 *)&pTVar28->field_0x8;
  puVar3 = (undefined8 *)(lVar33 + 0x10 + lVar10);
  *puVar3 = *(undefined8 *)pTVar28;
  puVar3[1] = uVar12;
  *(undefined8 *)(lVar33 + 0x20 + lVar10) = *(undefined8 *)&pTVar28->field_0x10;
  return;
}

