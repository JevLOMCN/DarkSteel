// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 7

// StaticStruct @ 14acdd6b0

UScriptStruct * __cdecl FSpriteGeometryCollection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSpriteGeometryCollection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UScriptStruct_FSpriteGeometryCollection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSpriteGeometryCollection,(UObject *)pUVar1,
                         L"SpriteGeometryCollection");
  }
  return Z_Registration_Info_UScriptStruct_FSpriteGeometryCollection.OuterSingleton;
}

// operator= @ 14acec0d0

FSpriteGeometryCollection * __thiscall
FSpriteGeometryCollection::operator=
          (FSpriteGeometryCollection *this,FSpriteGeometryCollection *param_1)

{
  int *piVar1;
  int iVar2;
  FSpriteGeometryShape *pFVar3;
  
  if (this != param_1) {
    DestructItems<FSpriteGeometryShape,int>
              ((FSpriteGeometryShape *)(this->Shapes).AllocatorInstance.Data,(this->Shapes).ArrayNum
              );
    iVar2 = (param_1->Shapes).ArrayNum;
    piVar1 = &(this->Shapes).ArrayMax;
    pFVar3 = (FSpriteGeometryShape *)(param_1->Shapes).AllocatorInstance.Data;
    (this->Shapes).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
      ConstructItems<FSpriteGeometryShape,FSpriteGeometryShape,int>
                ((this->Shapes).AllocatorInstance.Data,pFVar3,iVar2);
    }
  }
  (this->GeometryType).Value = (param_1->GeometryType).Value;
  this->PixelsPerSubdivisionX = param_1->PixelsPerSubdivisionX;
  this->PixelsPerSubdivisionY = param_1->PixelsPerSubdivisionY;
  this->bAvoidVertexMerging = param_1->bAvoidVertexMerging;
  this->AlphaThreshold = param_1->AlphaThreshold;
  this->DetailAmount = param_1->DetailAmount;
  this->SimplifyEpsilon = param_1->SimplifyEpsilon;
  return this;
}

// AddCircleShape @ 14acedc80

void __thiscall
FSpriteGeometryCollection::AddCircleShape
          (FSpriteGeometryCollection *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  
  uVar5 = (this->Shapes).ArrayNum;
  piVar1 = &(this->Shapes).ArrayMax;
  if (uVar5 == *piVar1) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,(ForAnyElementType *)this,piVar1);
  }
  pFVar8 = (FScriptContainerElement *)0x0;
  (this->Shapes).ArrayNum = uVar5 + 1;
  uVar6 = 0;
  if ((int)uVar5 < (int)(uVar5 + 1)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar7 = (this->Shapes).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x40;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(pFVar7 + 8) = 0;
    *(undefined8 *)(pFVar7 + 0x10) = 0;
    *(undefined4 *)(pFVar7 + 0x38) = 0;
    pFVar7[0x3c] = (FScriptContainerElement)0x0;
    pFVar8 = pFVar7;
  }
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  *(double *)(pFVar8 + 0x18) = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar8 + 0x20) = dVar3;
  *pFVar8 = (FScriptContainerElement)0x1;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  *(double *)(pFVar8 + 0x28) = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar8 + 0x30) = dVar3;
  return;
}

// AddRectangleShape @ 14aceead0

void __thiscall
FSpriteGeometryCollection::AddRectangleShape
          (FSpriteGeometryCollection *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  double *pdVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  uVar6 = (this->Shapes).ArrayNum;
  dVar3 = (param_2->field0_0x0)._s_0.X * __real_3fe0000000000000;
  uVar13 = (uint)((ulonglong)dVar3 >> 0x20);
  piVar1 = &(this->Shapes).ArrayMax;
  dVar4 = (param_2->field0_0x0)._s_0.Y * __real_3fe0000000000000;
  uVar14 = (uint)((ulonglong)dVar4 >> 0x20);
  if (uVar6 == *piVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,(ForAnyElementType *)this,piVar1);
  }
  pFVar12 = (FScriptContainerElement *)0x0;
  (this->Shapes).ArrayNum = uVar6 + 1;
  uVar15 = 0;
  if ((int)uVar6 < (int)(uVar6 + 1)) {
    uVar15 = ~uVar6 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar11 = (this->Shapes).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x40;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    *pFVar11 = (FScriptContainerElement)0x0;
    *(undefined8 *)(pFVar11 + 8) = 0;
    *(undefined8 *)(pFVar11 + 0x10) = 0;
    *(undefined8 *)(pFVar11 + 0x18) = 0;
    *(undefined8 *)(pFVar11 + 0x20) = 0;
    *(undefined8 *)(pFVar11 + 0x28) = 0;
    *(undefined8 *)(pFVar11 + 0x30) = 0;
    *(undefined4 *)(pFVar11 + 0x38) = 0;
    pFVar11[0x3c] = (FScriptContainerElement)0x0;
    pFVar12 = pFVar11;
  }
  uVar6 = *(uint *)(pFVar12 + 0x10);
  if (uVar6 == *(uint *)(pFVar12 + 0x14)) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(pFVar12 + 8),(int *)(pFVar12 + 0x14));
  }
  *(uint *)(pFVar12 + 0x10) = uVar6 + 1;
  uVar15 = 0;
  if ((int)uVar6 < (int)(uVar6 + 1)) {
    uVar15 = ~uVar6 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar15 = (uint)__xmm_80000000000000008000000000000000;
  uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  puVar9 = (undefined8 *)((longlong)(int)uVar6 * 0x10 + *(longlong *)(pFVar12 + 8));
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = CONCAT44(uVar13 ^ uVar16,SUB84(dVar3,0) ^ uVar15);
    puVar9[1] = CONCAT44(uVar14 ^ uVar16,SUB84(dVar4,0) ^ uVar15);
  }
  uVar6 = *(uint *)(pFVar12 + 0x10);
  if (uVar6 == *(uint *)(pFVar12 + 0x14)) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(pFVar12 + 8),(int *)(pFVar12 + 0x14));
  }
  *(uint *)(pFVar12 + 0x10) = uVar6 + 1;
  uVar7 = 0;
  uVar8 = uVar7;
  if ((int)uVar6 < (int)(uVar6 + 1)) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pdVar10 = (double *)((longlong)(int)uVar6 * 0x10 + *(longlong *)(pFVar12 + 8));
  if (pdVar10 != (double *)0x0) {
    *pdVar10 = dVar3;
    pdVar10[1] = (double)CONCAT44(uVar14 ^ uVar16,SUB84(dVar4,0) ^ uVar15);
  }
  uVar6 = *(uint *)(pFVar12 + 0x10);
  if (uVar6 == *(uint *)(pFVar12 + 0x14)) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(pFVar12 + 8),(int *)(pFVar12 + 0x14));
  }
  *(uint *)(pFVar12 + 0x10) = uVar6 + 1;
  uVar14 = uVar7;
  if ((int)uVar6 < (int)(uVar6 + 1)) {
    uVar14 = ~uVar6 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pdVar10 = (double *)((longlong)(int)uVar6 * 0x10 + *(longlong *)(pFVar12 + 8));
  if (pdVar10 != (double *)0x0) {
    *pdVar10 = dVar3;
    pdVar10[1] = dVar4;
  }
  uVar6 = *(uint *)(pFVar12 + 0x10);
  if (uVar6 == *(uint *)(pFVar12 + 0x14)) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(pFVar12 + 8),(int *)(pFVar12 + 0x14));
  }
  *(uint *)(pFVar12 + 0x10) = uVar6 + 1;
  if ((int)uVar6 < (int)(uVar6 + 1)) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar9 = (undefined8 *)((longlong)(int)uVar6 * 0x10 + *(longlong *)(pFVar12 + 8));
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = dVar4;
    *puVar9 = CONCAT44(uVar13 ^ uVar16,SUB84(dVar3,0) ^ uVar15);
  }
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  *pFVar12 = (FScriptContainerElement)0x0;
  *(double *)(pFVar12 + 0x18) = dVar3;
  *(double *)(pFVar12 + 0x20) = dVar4;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  *(double *)(pFVar12 + 0x28) = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar12 + 0x30) = dVar3;
  return;
}

// ConditionGeometry @ 14acf1b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FSpriteGeometryCollection::ConditionGeometry(FSpriteGeometryCollection *this)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  double *pdVar16;
  double *pdVar17;
  FScriptContainerElement *pFVar18;
  bool bVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  double extraout_XMM0_Qa;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 extraout_XMM0 [16];
  double dVar25;
  double extraout_XMM0_Qb;
  undefined1 extraout_XMM0_00 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 in_XMM2 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 in_XMM3 [16];
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  uint uVar36;
  undefined4 uVar37;
  uint uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  uint uVar45;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  pFVar21 = (this->Shapes).AllocatorInstance.Data;
  bVar19 = false;
  pFVar18 = pFVar21 + 0x10;
  uVar43 = (undefined4)__real_3fe0000000000000;
  uVar44 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  uVar1 = (this->Shapes).ArrayNum;
  uVar15 = (ulonglong)(int)uVar1;
  pFVar20 = pFVar21 + uVar15 * 0x40;
  fVar42 = __real_38d1b717;
  uVar45 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  while( true ) {
    if ((this->Shapes).ArrayNum != (int)uVar15) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FSpriteGeometryShape,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar21 == pFVar20) break;
    if ((*pFVar21 == (FScriptContainerElement)0x2) && (*(int *)pFVar18 == 4)) {
      pdVar17 = *(double **)(pFVar18 + -8);
      if (*(int *)pFVar18 < 4) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar3 = (code *)swi(3);
          uVar14 = (*pcVar3)();
          return (bool)uVar14;
        }
      }
      uVar10 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar12 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar16 = *(double **)(pFVar18 + -8);
      dVar8 = pdVar16[6] - pdVar17[4];
      dVar6 = pdVar17[4] - pdVar17[2];
      dVar30 = pdVar17[2] - *pdVar17;
      dVar25 = pdVar17[3] - pdVar17[1];
      dVar28 = pdVar16[7] - pdVar17[5];
      dVar9 = pdVar17[5] - pdVar17[3];
      dVar11 = *pdVar17 - pdVar16[6];
      dVar26 = pdVar17[1] - pdVar16[7];
      if (((float)((uint)(float)(dVar30 * dVar6 + dVar9 * dVar25) & uVar45) <= fVar42) &&
         ((float)((uint)(float)(dVar11 * dVar8 + dVar26 * dVar28) & uVar45) <= fVar42)) {
        auVar22._0_8_ = dVar25 * dVar28;
        auVar22._8_8_ = 0;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = dVar30 * dVar30 + dVar25 * dVar25;
        in_XMM2 = sqrtpd(in_XMM2,auVar23);
        dVar27 = in_XMM2._0_8_;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = dVar8 * dVar8 + dVar28 * dVar28;
        auVar23 = sqrtpd(auVar22,auVar7);
        if ((float)((uint)((float)((uint)((float)(dVar30 * dVar8 + auVar22._0_8_) /
                                         (float)(auVar23._0_8_ * dVar27)) & uVar45) -
                          __real_3f800000) & uVar45) <= fVar42) {
          auVar24._0_8_ = dVar9 * dVar26;
          auVar24._8_8_ = 0;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = dVar11 * dVar11 + dVar26 * dVar26;
          in_XMM3 = sqrtpd(in_XMM3,auVar4);
          in_XMM2._0_8_ = dVar6 * dVar11 + auVar24._0_8_;
          in_XMM2._8_8_ = 0;
          dVar30 = in_XMM3._0_8_;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = dVar6 * dVar6 + dVar9 * dVar9;
          auVar23 = sqrtpd(auVar24,auVar5);
          if (((float)((uint)((float)((uint)((float)in_XMM2._0_8_ / (float)(auVar23._0_8_ * dVar30))
                                     & uVar45) - __real_3f800000) & uVar45) <= fVar42) &&
             (uVar36 = SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
             uVar38 = (uint)((ulonglong)dVar25 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
             (double)CONCAT44(uVar38,uVar36) < __real_3e45798ee2308c3a ||
             (double)CONCAT44(uVar38,uVar36) == __real_3e45798ee2308c3a)) {
            iVar2 = *(int *)pFVar18;
            bVar19 = false;
            pdVar17 = pdVar16 + (longlong)iVar2 * 2;
            uVar37 = 0;
            uVar39 = 0;
            uVar32 = 0;
            uVar33 = 0;
            uVar34 = 0;
            uVar35 = 0;
            uVar40 = 0;
            uVar41 = 0;
            while( true ) {
              if (*(int *)pFVar18 != iVar2) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(local_res18);
              }
              if (pdVar16 == pdVar17) break;
              if (bVar19) {
                dVar6 = *pdVar16;
                if (dVar6 <= (double)CONCAT44(uVar35,uVar34)) {
                  uVar34 = SUB84(dVar6,0);
                  uVar35 = (undefined4)((ulonglong)dVar6 >> 0x20);
                }
                dVar6 = pdVar16[1];
                if (dVar6 <= (double)CONCAT44(uVar41,uVar40)) {
                  uVar40 = SUB84(dVar6,0);
                  uVar41 = (undefined4)((ulonglong)dVar6 >> 0x20);
                }
                dVar6 = *pdVar16;
                if ((double)CONCAT44(uVar33,uVar32) <= dVar6) {
                  uVar32 = SUB84(dVar6,0);
                  uVar33 = (undefined4)((ulonglong)dVar6 >> 0x20);
                }
                dVar6 = pdVar16[1];
                if ((double)CONCAT44(uVar39,uVar37) <= dVar6) {
                  uVar37 = SUB84(dVar6,0);
                  uVar39 = (undefined4)((ulonglong)dVar6 >> 0x20);
                }
                pdVar16 = pdVar16 + 2;
              }
              else {
                uVar32 = *(undefined4 *)pdVar16;
                uVar33 = *(undefined4 *)((longlong)pdVar16 + 4);
                uVar37 = *(undefined4 *)(pdVar16 + 1);
                uVar39 = *(undefined4 *)((longlong)pdVar16 + 0xc);
                bVar19 = true;
                pdVar16 = pdVar16 + 2;
                uVar34 = uVar32;
                uVar35 = uVar33;
                uVar40 = uVar37;
                uVar41 = uVar39;
              }
            }
            iVar2 = *(int *)pFVar18;
            if (0 < iVar2) {
              uVar12 = ((double)CONCAT44(uVar33,uVar32) + (double)CONCAT44(uVar35,uVar34)) *
                       (double)CONCAT44(uVar44,uVar43);
              uVar10 = ((double)CONCAT44(uVar39,uVar37) + (double)CONCAT44(uVar41,uVar40)) *
                       (double)CONCAT44(uVar44,uVar43);
            }
            __libm_sse2_sincos_();
            dVar6 = *(double *)(pFVar18 + 0x18);
            dVar8 = *(double *)(pFVar18 + 0x20);
            pdVar17 = *(double **)(pFVar18 + -8);
            dVar28 = extraout_XMM0._0_8_;
            dVar25 = extraout_XMM0._8_8_;
            in_XMM2._8_8_ = dVar28;
            in_XMM2._0_8_ = dVar25;
            pdVar16 = pdVar17 + (longlong)iVar2 * 2;
            dVar9 = ((double)uVar12 * dVar25 - (double)uVar10 * dVar28) + dVar6;
            dVar25 = (double)uVar10 * dVar25 + (double)uVar12 * dVar28 + dVar8;
            while( true ) {
              if (*(int *)pFVar18 != iVar2) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<UE::Math::TVector2<double>,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res20);
              }
              if (pdVar17 == pdVar16) break;
              __libm_sse2_sincos_();
              dVar28 = ((extraout_XMM0_Qb * *pdVar17 - extraout_XMM0_Qa * pdVar17[1]) +
                        *(double *)(pFVar18 + 0x18) + (dVar6 - dVar9)) - *(double *)(pFVar18 + 0x18)
              ;
              dVar11 = (extraout_XMM0_Qa * *pdVar17 + extraout_XMM0_Qb * pdVar17[1] +
                       (dVar8 - dVar25) + *(double *)(pFVar18 + 0x20)) - *(double *)(pFVar18 + 0x20)
              ;
              __libm_sse2_sincos_();
              dVar31 = extraout_XMM0_00._0_8_;
              dVar26 = extraout_XMM0_00._8_8_;
              auVar29._8_4_ = extraout_XMM0_00._0_4_;
              auVar29._0_8_ = dVar26;
              auVar29._12_4_ = extraout_XMM0_00._4_4_;
              in_XMM2._8_8_ = auVar29._8_8_;
              in_XMM2._0_8_ = dVar26 * dVar28 - dVar31 * dVar11;
              in_XMM3._0_8_ = dVar26 * dVar11 + dVar31 * dVar28;
              in_XMM3._8_8_ = dVar31;
              *pdVar17 = in_XMM2._0_8_;
              pdVar17[1] = in_XMM3._0_8_;
              pdVar17 = pdVar17 + 2;
            }
            bVar19 = true;
            *(double *)(pFVar18 + 0x18) = dVar9;
            *(double *)(pFVar18 + 0x20) = dVar25;
            *(double *)(pFVar18 + 8) = dVar27;
            *(double *)(pFVar18 + 0x10) = dVar30;
            uVar45 = __xmm_7fffffff7fffffff7fffffff7fffffff;
            fVar42 = __real_38d1b717;
            uVar43 = (undefined4)__real_3fe0000000000000;
            uVar44 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
            *pFVar21 = (FScriptContainerElement)0x0;
          }
        }
      }
    }
    pFVar21 = pFVar21 + 0x40;
    uVar15 = (ulonglong)uVar1;
    pFVar18 = pFVar18 + 0x40;
  }
  return bVar19;
}

// Reset @ 14ad08ba0

void __thiscall FSpriteGeometryCollection::Reset(FSpriteGeometryCollection *this)

{
  int *piVar1;
  
  DestructItems<FSpriteGeometryShape,int>
            ((FSpriteGeometryShape *)(this->Shapes).AllocatorInstance.Data,(this->Shapes).ArrayNum);
  piVar1 = &(this->Shapes).ArrayMax;
  (this->Shapes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  (this->GeometryType).Value = '\x01';
  return;
}

// Triangulate @ 14ad0e6a0

void __thiscall
FSpriteGeometryCollection::Triangulate
          (FSpriteGeometryCollection *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar8;
  uint uVar9;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  double *pdVar13;
  FScriptContainerElement *pFVar14;
  uint unaff_ESI;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  double *pdVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 local_res8 [8];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_res10;
  char local_res18;
  uint local_res20;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_e8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_d8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_c8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_b8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_a8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_98;
  double local_88;
  double dStack_80;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_78 [3];
  
  uVar15 = 0;
  param_1->ArrayNum = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  uVar6 = (this->Shapes).ArrayNum;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayMax = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  local_c8.ArrayNum = 0;
  if (uVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar6,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
  }
  uVar6 = (this->Shapes).ArrayNum;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if (local_e8.ArrayMax != uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar6,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
  }
  iVar7 = (this->Shapes).ArrayNum;
  local_res20 = unaff_ESI & 0xffffff00;
  uVar17 = uVar15;
  if (0 < iVar7) {
    do {
      uVar12 = (uint)uVar17;
      uVar6 = 0;
      if ((int)uVar12 < iVar7) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Shapes).AllocatorInstance.Data;
      if ((pFVar1[uVar15] == (FScriptContainerElement)0x2) ||
         ((param_2 != false && (pFVar1[uVar15] == (FScriptContainerElement)0x0)))) {
        if (2 < *(int *)(pFVar1 + uVar15 + 0x10)) {
          local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.ArrayNum = 0;
          local_d8.ArrayMax = 0;
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,*(int *)(pFVar1 + uVar15 + 0x10),&local_d8.AllocatorInstance,0,
                     &local_d8.ArrayMax);
          iVar7 = *(int *)(pFVar1 + uVar15 + 0x10);
          pdVar13 = *(double **)(pFVar1 + uVar15 + 8);
          pdVar18 = pdVar13 + (longlong)iVar7 * 2;
          while( true ) {
            if (*(int *)(pFVar1 + uVar15 + 0x10) != iVar7) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res8);
            }
            if (pdVar13 == pdVar18) break;
            __libm_sse2_sincos_();
            local_88 = (*pdVar13 * (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) -
                       pdVar13[1] * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da)) +
                       *(double *)(pFVar1 + uVar15 + 0x28);
            dStack_80 = pdVar13[1] * (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) +
                        *pdVar13 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) +
                        *(double *)(pFVar1 + uVar15 + 0x30);
            if (((local_d8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
                ((FScriptContainerElement *)&local_88 <
                 local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 0x10)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar5 = local_d8.ArrayNum;
            if (local_d8.ArrayNum == local_d8.ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
            }
            local_d8.ArrayNum = iVar5 + 1;
            pdVar13 = pdVar13 + 2;
            *(double *)(local_d8.AllocatorInstance.Data + (longlong)iVar5 * 0x10) = local_88;
            *(double *)(local_d8.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) = dStack_80;
          }
          uVar6 = local_e8.ArrayNum;
          if (local_e8.ArrayNum == local_e8.ArrayMax) {
            uVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
          }
          pTVar11 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
          local_e8.ArrayNum = uVar6 + 1;
          uVar9 = 0;
          if ((int)uVar6 < local_e8.ArrayNum) {
            uVar9 = ~uVar6 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar10 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                    (local_e8.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10);
          if (pTVar10 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
            (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            pTVar10->ArrayNum = 0;
            pTVar10->ArrayMax = 0;
            pTVar11 = pTVar10;
          }
          pFVar14 = pFVar1 + uVar15 + 0x3c;
          FGeomTools2D::CorrectPolygonWinding(pTVar11,&local_d8,(bool)*pFVar14);
          if (((local_c8.AllocatorInstance.Data <= pFVar14) &&
              (pFVar14 < local_c8.AllocatorInstance.Data + local_c8.ArrayMax)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_c8.ArrayNum == local_c8.ArrayMax) {
            local_c8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
          }
          iVar7 = local_c8.ArrayNum + 1;
          local_c8.AllocatorInstance.Data[local_c8.ArrayNum] = *pFVar14;
          param_2 = (bool)local_res18;
          local_c8.ArrayNum = iVar7;
          if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.AllocatorInstance.Data);
            param_2 = (bool)local_res18;
          }
        }
        local_res20 = local_res20 & 0xff;
        if (pFVar1[uVar15 + 0x3c] != (FScriptContainerElement)0x0) {
          local_res20 = 1;
        }
      }
      iVar7 = (this->Shapes).ArrayNum;
      uVar15 = uVar15 + 0x40;
      uVar17 = (ulonglong)(uVar12 + 1);
      param_1 = local_res10;
    } while ((int)(uVar12 + 1) < iVar7);
  }
  uVar6 = local_res20;
  uVar12 = 0;
  bVar3 = FGeomTools2D::ArePolygonsValid(&local_e8);
  if (bVar3) {
    pTVar8 = FGeomTools2D::ReducePolygons(local_78,&local_e8,&local_c8);
    if (&local_e8 != pTVar8) {
      DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                 local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
      if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
          local_e8.AllocatorInstance.Data !=
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      local_e8.AllocatorInstance.Data = (pTVar8->AllocatorInstance).Data;
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayNum = pTVar8->ArrayNum;
      local_e8.ArrayMax = pTVar8->ArrayMax;
      pTVar8->ArrayNum = 0;
      pTVar8->ArrayMax = 0;
    }
    DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               local_78[0].AllocatorInstance.Data,local_78[0].ArrayNum);
    if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
        local_78[0].AllocatorInstance.Data !=
        (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_78[0].AllocatorInstance.Data);
    }
    if (0 < local_e8.ArrayNum) {
      do {
        local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        bVar3 = this->bAvoidVertexMerging;
        local_a8.ArrayNum = 0;
        local_a8.ArrayMax = 0;
        uVar9 = 0;
        if ((int)uVar12 < local_e8.ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar3 = FGeomTools2D::TriangulatePoly
                          (&local_a8,
                           (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                           (local_e8.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10),bVar3);
        if (bVar3) {
          lVar16 = (longlong)local_a8.ArrayNum;
          if (local_a8.ArrayNum != 0) {
            iVar7 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,local_a8.ArrayNum,&local_b8.AllocatorInstance,
                               &local_b8.ArrayNum,&local_b8.ArrayMax);
            memcpy(local_b8.AllocatorInstance.Data + (longlong)iVar7 * 0x10,
                   local_a8.AllocatorInstance.Data,lVar16 << 4);
          }
        }
        if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.AllocatorInstance.Data);
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < local_e8.ArrayNum);
    }
    _Src.Data = local_b8.AllocatorInstance.Data;
    if ((((char)uVar6 == '\0') && (this->bAvoidVertexMerging == false)) && (1 < local_e8.ArrayNum))
    {
      lVar16 = (longlong)local_b8.ArrayNum;
      if (1 < local_b8.ArrayNum) {
        local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.ArrayNum = local_b8.ArrayNum;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_b8.ArrayNum,0,&local_98.AllocatorInstance,local_b8.ArrayNum,
                   &local_98.ArrayMax);
        memcpy(local_98.AllocatorInstance.Data,_Src.Data,lVar16 << 4);
        bVar3 = local_b8.ArrayMax != 0;
        local_b8._8_8_ = (ulonglong)(uint)local_b8.ArrayMax << 0x20;
        if (bVar3) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
        }
        FGeomTools2D::RemoveRedundantTriangles(&local_b8,&local_98);
        if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.AllocatorInstance.Data);
        }
      }
    }
    if ((param_1 == &local_b8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar16 = (longlong)local_b8.ArrayNum;
    if (local_b8.ArrayNum != 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_b8.ArrayNum,&param_1->AllocatorInstance,&param_1->ArrayNum,
                         &param_1->ArrayMax);
      memcpy((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10,
             local_b8.AllocatorInstance.Data,lVar16 << 4);
    }
  }
  DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      local_e8.AllocatorInstance.Data !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return;
}

