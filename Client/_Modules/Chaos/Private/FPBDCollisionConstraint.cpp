// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 54

// GetManifoldPoint @ 143790e20

FManifoldPoint * __thiscall
Chaos::FPBDCollisionConstraint::GetManifoldPoint(FPBDCollisionConstraint *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FManifoldPoint *pFVar4;
  ForElementType<Chaos::FManifoldPoint> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ManifoldPoints).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FManifoldPoint *)(*pcVar1)();
      return pFVar4;
    }
  }
  FVar5 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
    FVar5 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
  }
  return (FManifoldPoint *)((longlong)FVar5 + (longlong)param_1 * 0x6c);
}

// GetManifoldPoints @ 143790ec0

TArrayView<Chaos::FManifoldPoint_const_,int> * __thiscall
Chaos::FPBDCollisionConstraint::GetManifoldPoints
          (FPBDCollisionConstraint *this,
          TArrayView<Chaos::FManifoldPoint_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<Chaos::FManifoldPoint> FVar4;
  TArrayView<Chaos::FManifoldPoint_const_,int> *pTVar5;
  
  FVar4 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
  iVar1 = (this->ManifoldPoints).ArrayNum;
  if (FVar4 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
    FVar4 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
  }
  __return_storage_ptr__->DataPtr = (FManifoldPoint *)FVar4;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::FManifoldPoint_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetPhi @ 143792230

double __thiscall Chaos::FPBDCollisionConstraint::GetPhi(FPBDCollisionConstraint *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<Chaos::FManifoldPoint> FVar5;
  double dVar6;
  
  uVar1 = this->ClosestManifoldPointIndex;
  if (uVar1 == 0xffffffff) {
    return __real_7fefffffffffffff;
  }
  uVar4 = 0;
  if ((int)uVar1 < (this->ManifoldPoints).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      dVar6 = (double)(*pcVar2)();
      return dVar6;
    }
  }
  FVar5 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
    FVar5 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
  }
  return (double)*(float *)((uchar *)((longlong)FVar5 + 0x24) + (longlong)(int)uVar1 * 0x6c);
}

// AddOneshotManifoldContact @ 14389a7c0

void __thiscall
Chaos::FPBDCollisionConstraint::AddOneshotManifoldContact
          (FPBDCollisionConstraint *this,TContactPoint<float> *param_1)

{
  TArray<Chaos::FManifoldPoint,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  uchar *puVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  ForElementType<Chaos::FManifoldPoint> FVar25;
  ForElementType<Chaos::FManifoldPoint> FVar26;
  longlong lVar27;
  uint uVar28;
  
  if (__real_7f7fffff != param_1->Phi) {
    uVar23 = (this->ManifoldPoints).ArrayNum;
    pTVar1 = &this->ManifoldPoints;
    piVar2 = &(this->ManifoldPoints).ArrayMax;
    if (uVar23 == *piVar2) {
      uVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FManifoldPoint>_>
                         (0x46c,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->ManifoldPoints).ArrayNum = uVar23 + 1;
    uVar24 = 0;
    if ((int)uVar23 < (int)(uVar23 + 1)) {
      uVar24 = ~uVar23 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar25 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
    uVar6 = *(undefined8 *)&param_1->ShapeContactPoints[0].field_0x8;
    lVar27 = (longlong)(int)uVar23 * 0x6c;
    if (FVar25 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
      FVar25 = (ForElementType<Chaos::FManifoldPoint>)pTVar1;
    }
    *(undefined8 *)((longlong)FVar25 + lVar27) = *(undefined8 *)param_1->ShapeContactPoints;
    ((undefined8 *)((longlong)FVar25 + lVar27))[1] = uVar6;
    uVar7 = param_1->ShapeContactPoints[1].field_0x5;
    uVar8 = param_1->ShapeContactPoints[1].field_0x6;
    uVar9 = param_1->ShapeContactPoints[1].field_0x7;
    uVar10 = param_1->ShapeContactPoints[1].field_0x8;
    uVar11 = param_1->ShapeContactPoints[1].field_0x9;
    uVar12 = param_1->ShapeContactPoints[1].field_0xa;
    uVar13 = param_1->ShapeContactPoints[1].field_0xb;
    uVar14 = (param_1->ShapeContactNormal).field_0x0;
    uVar15 = (param_1->ShapeContactNormal).field_0x1;
    uVar16 = (param_1->ShapeContactNormal).field_0x2;
    uVar17 = (param_1->ShapeContactNormal).field_0x3;
    uVar18 = (param_1->ShapeContactNormal).field_0x4;
    uVar19 = (param_1->ShapeContactNormal).field_0x5;
    uVar20 = (param_1->ShapeContactNormal).field_0x6;
    uVar21 = (param_1->ShapeContactNormal).field_0x7;
    puVar3 = (uchar *)((longlong)FVar25 + 0x10) + lVar27;
    puVar3[0] = param_1->ShapeContactPoints[1].field_0x4;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    puVar3[4] = uVar10;
    puVar3[5] = uVar11;
    puVar3[6] = uVar12;
    puVar3[7] = uVar13;
    puVar3[8] = uVar14;
    puVar3[9] = uVar15;
    puVar3[10] = uVar16;
    puVar3[0xb] = uVar17;
    puVar3[0xc] = uVar18;
    puVar3[0xd] = uVar19;
    puVar3[0xe] = uVar20;
    puVar3[0xf] = uVar21;
    uVar6 = *(undefined8 *)&param_1->FaceIndex;
    *(undefined8 *)((uchar *)((longlong)FVar25 + 0x20) + lVar27) =
         *(undefined8 *)&(param_1->ShapeContactNormal).field_0x8;
    *(undefined8 *)((uchar *)((longlong)FVar25 + 0x20) + lVar27 + 8) = uVar6;
    uVar7 = param_1->ShapeContactPoints[0].field_0x1;
    uVar8 = param_1->ShapeContactPoints[0].field_0x2;
    uVar9 = param_1->ShapeContactPoints[0].field_0x3;
    uVar10 = param_1->ShapeContactPoints[0].field_0x4;
    uVar11 = param_1->ShapeContactPoints[0].field_0x5;
    uVar12 = param_1->ShapeContactPoints[0].field_0x6;
    uVar13 = param_1->ShapeContactPoints[0].field_0x7;
    puVar3 = (uchar *)((longlong)FVar25 + 0x3c) + lVar27;
    puVar3[0] = param_1->ShapeContactPoints[0].field_0x0;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    puVar3[4] = uVar10;
    puVar3[5] = uVar11;
    puVar3[6] = uVar12;
    puVar3[7] = uVar13;
    uVar7 = param_1->ShapeContactPoints[0].field_0x9;
    uVar8 = param_1->ShapeContactPoints[0].field_0xa;
    uVar9 = param_1->ShapeContactPoints[0].field_0xb;
    puVar3 = (uchar *)((longlong)FVar25 + 0x44) + lVar27;
    puVar3[0] = param_1->ShapeContactPoints[0].field_0x8;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    uVar7 = param_1->ShapeContactPoints[1].field_0x1;
    uVar8 = param_1->ShapeContactPoints[1].field_0x2;
    uVar9 = param_1->ShapeContactPoints[1].field_0x3;
    uVar10 = param_1->ShapeContactPoints[1].field_0x4;
    uVar11 = param_1->ShapeContactPoints[1].field_0x5;
    uVar12 = param_1->ShapeContactPoints[1].field_0x6;
    uVar13 = param_1->ShapeContactPoints[1].field_0x7;
    puVar3 = (uchar *)((longlong)FVar25 + 0x48) + lVar27;
    puVar3[0] = param_1->ShapeContactPoints[1].field_0x0;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    puVar3[4] = uVar10;
    puVar3[5] = uVar11;
    puVar3[6] = uVar12;
    puVar3[7] = uVar13;
    uVar7 = param_1->ShapeContactPoints[1].field_0x9;
    uVar8 = param_1->ShapeContactPoints[1].field_0xa;
    uVar9 = param_1->ShapeContactPoints[1].field_0xb;
    puVar3 = (uchar *)((longlong)FVar25 + 0x50) + lVar27;
    puVar3[0] = param_1->ShapeContactPoints[1].field_0x8;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    uVar7 = param_1->ShapeContactPoints[0].field_0x1;
    uVar8 = param_1->ShapeContactPoints[0].field_0x2;
    uVar9 = param_1->ShapeContactPoints[0].field_0x3;
    uVar10 = param_1->ShapeContactPoints[0].field_0x4;
    uVar11 = param_1->ShapeContactPoints[0].field_0x5;
    uVar12 = param_1->ShapeContactPoints[0].field_0x6;
    uVar13 = param_1->ShapeContactPoints[0].field_0x7;
    puVar3 = (uchar *)((longlong)FVar25 + 0x54) + lVar27;
    puVar3[0] = param_1->ShapeContactPoints[0].field_0x0;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    puVar3[4] = uVar10;
    puVar3[5] = uVar11;
    puVar3[6] = uVar12;
    puVar3[7] = uVar13;
    uVar7 = param_1->ShapeContactPoints[0].field_0x9;
    uVar8 = param_1->ShapeContactPoints[0].field_0xa;
    uVar9 = param_1->ShapeContactPoints[0].field_0xb;
    puVar3 = (uchar *)((longlong)FVar25 + 0x5c) + lVar27;
    puVar3[0] = param_1->ShapeContactPoints[0].field_0x8;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    uVar7 = param_1->ShapeContactPoints[1].field_0x1;
    uVar8 = param_1->ShapeContactPoints[1].field_0x2;
    uVar9 = param_1->ShapeContactPoints[1].field_0x3;
    uVar10 = param_1->ShapeContactPoints[1].field_0x4;
    uVar11 = param_1->ShapeContactPoints[1].field_0x5;
    uVar12 = param_1->ShapeContactPoints[1].field_0x6;
    uVar13 = param_1->ShapeContactPoints[1].field_0x7;
    puVar3 = (uchar *)((longlong)FVar25 + 0x60) + lVar27;
    puVar3[0] = param_1->ShapeContactPoints[1].field_0x0;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    puVar3[4] = uVar10;
    puVar3[5] = uVar11;
    puVar3[6] = uVar12;
    puVar3[7] = uVar13;
    uVar7 = param_1->ShapeContactPoints[1].field_0x9;
    uVar8 = param_1->ShapeContactPoints[1].field_0xa;
    uVar9 = param_1->ShapeContactPoints[1].field_0xb;
    puVar3 = (uchar *)((longlong)FVar25 + 0x68) + lVar27;
    puVar3[0] = param_1->ShapeContactPoints[1].field_0x8;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    puVar3 = (uchar *)((longlong)FVar25 + 0x34) + lVar27;
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar3[4] = '\0';
    puVar3[5] = '\0';
    puVar3[6] = '\0';
    puVar3[7] = '\0';
    ((uchar *)((longlong)FVar25 + 0x30))[lVar27] = '\0';
    uVar24 = 0;
    if ((int)uVar23 < (this->ManifoldPoints).ArrayNum) {
      uVar24 = ~uVar23 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar25 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
    uVar24 = this->ClosestManifoldPointIndex;
    if (FVar25 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
      FVar25 = (ForElementType<Chaos::FManifoldPoint>)pTVar1;
    }
    dVar5 = __real_7fefffffffffffff;
    if (uVar24 != 0xffffffff) {
      uVar28 = 0;
      if ((int)uVar24 < (this->ManifoldPoints).ArrayNum) {
        uVar28 = ~uVar24 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar26 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
      if (FVar26 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
        FVar26 = (ForElementType<Chaos::FManifoldPoint>)pTVar1;
      }
      dVar5 = (double)*(float *)((uchar *)((longlong)FVar26 + 0x24) + (longlong)(int)uVar24 * 0x6c);
    }
    if ((double)*(float *)((longlong)FVar25 + lVar27 + 0x24) < dVar5) {
      this->ClosestManifoldPointIndex = uVar23;
    }
  }
  return;
}

// AddManifoldPoint @ 143958ee0

int __thiscall
Chaos::FPBDCollisionConstraint::AddManifoldPoint
          (FPBDCollisionConstraint *this,TContactPoint<float> *param_1)

{
  int *piVar1;
  uchar *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  ForElementType<Chaos::FManifoldPoint> FVar25;
  
  uVar21 = (this->ManifoldPoints).ArrayNum;
  piVar1 = &(this->ManifoldPoints).ArrayMax;
  if (uVar21 == *piVar1) {
    uVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FManifoldPoint>_>
                       (0x46c,&(this->ManifoldPoints).AllocatorInstance,piVar1);
  }
  (this->ManifoldPoints).ArrayNum = uVar21 + 1;
  uVar23 = 0;
  if ((int)uVar21 < (int)(uVar21 + 1)) {
    uVar23 = ~uVar21 >> 0x1f;
  }
  if (uVar23 == 0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar3 = (code *)swi(3);
      iVar22 = (*pcVar3)();
      return iVar22;
    }
  }
  FVar25 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
  uVar4 = *(undefined8 *)&param_1->ShapeContactPoints[0].field_0x8;
  if (FVar25 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
    FVar25 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
  }
  lVar24 = (longlong)(int)uVar21 * 0x6c;
  *(undefined8 *)((longlong)FVar25 + lVar24) = *(undefined8 *)param_1->ShapeContactPoints;
  ((undefined8 *)((longlong)FVar25 + lVar24))[1] = uVar4;
  uVar5 = param_1->ShapeContactPoints[1].field_0x5;
  uVar6 = param_1->ShapeContactPoints[1].field_0x6;
  uVar7 = param_1->ShapeContactPoints[1].field_0x7;
  uVar8 = param_1->ShapeContactPoints[1].field_0x8;
  uVar9 = param_1->ShapeContactPoints[1].field_0x9;
  uVar10 = param_1->ShapeContactPoints[1].field_0xa;
  uVar11 = param_1->ShapeContactPoints[1].field_0xb;
  uVar12 = (param_1->ShapeContactNormal).field_0x0;
  uVar13 = (param_1->ShapeContactNormal).field_0x1;
  uVar14 = (param_1->ShapeContactNormal).field_0x2;
  uVar15 = (param_1->ShapeContactNormal).field_0x3;
  uVar16 = (param_1->ShapeContactNormal).field_0x4;
  uVar17 = (param_1->ShapeContactNormal).field_0x5;
  uVar18 = (param_1->ShapeContactNormal).field_0x6;
  uVar19 = (param_1->ShapeContactNormal).field_0x7;
  puVar2 = (uchar *)((longlong)FVar25 + 0x10) + lVar24;
  puVar2[0] = param_1->ShapeContactPoints[1].field_0x4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar2[4] = uVar8;
  puVar2[5] = uVar9;
  puVar2[6] = uVar10;
  puVar2[7] = uVar11;
  puVar2[8] = uVar12;
  puVar2[9] = uVar13;
  puVar2[10] = uVar14;
  puVar2[0xb] = uVar15;
  puVar2[0xc] = uVar16;
  puVar2[0xd] = uVar17;
  puVar2[0xe] = uVar18;
  puVar2[0xf] = uVar19;
  uVar4 = *(undefined8 *)&param_1->FaceIndex;
  *(undefined8 *)((uchar *)((longlong)FVar25 + 0x20) + lVar24) =
       *(undefined8 *)&(param_1->ShapeContactNormal).field_0x8;
  *(undefined8 *)((uchar *)((longlong)FVar25 + 0x20) + lVar24 + 8) = uVar4;
  uVar5 = param_1->ShapeContactPoints[0].field_0x1;
  uVar6 = param_1->ShapeContactPoints[0].field_0x2;
  uVar7 = param_1->ShapeContactPoints[0].field_0x3;
  uVar8 = param_1->ShapeContactPoints[0].field_0x4;
  uVar9 = param_1->ShapeContactPoints[0].field_0x5;
  uVar10 = param_1->ShapeContactPoints[0].field_0x6;
  uVar11 = param_1->ShapeContactPoints[0].field_0x7;
  puVar2 = (uchar *)((longlong)FVar25 + 0x3c) + lVar24;
  puVar2[0] = param_1->ShapeContactPoints[0].field_0x0;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar2[4] = uVar8;
  puVar2[5] = uVar9;
  puVar2[6] = uVar10;
  puVar2[7] = uVar11;
  uVar5 = param_1->ShapeContactPoints[0].field_0x9;
  uVar6 = param_1->ShapeContactPoints[0].field_0xa;
  uVar7 = param_1->ShapeContactPoints[0].field_0xb;
  puVar2 = (uchar *)((longlong)FVar25 + 0x44) + lVar24;
  puVar2[0] = param_1->ShapeContactPoints[0].field_0x8;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  uVar5 = param_1->ShapeContactPoints[1].field_0x1;
  uVar6 = param_1->ShapeContactPoints[1].field_0x2;
  uVar7 = param_1->ShapeContactPoints[1].field_0x3;
  uVar8 = param_1->ShapeContactPoints[1].field_0x4;
  uVar9 = param_1->ShapeContactPoints[1].field_0x5;
  uVar10 = param_1->ShapeContactPoints[1].field_0x6;
  uVar11 = param_1->ShapeContactPoints[1].field_0x7;
  puVar2 = (uchar *)((longlong)FVar25 + 0x48) + lVar24;
  puVar2[0] = param_1->ShapeContactPoints[1].field_0x0;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar2[4] = uVar8;
  puVar2[5] = uVar9;
  puVar2[6] = uVar10;
  puVar2[7] = uVar11;
  uVar5 = param_1->ShapeContactPoints[1].field_0x9;
  uVar6 = param_1->ShapeContactPoints[1].field_0xa;
  uVar7 = param_1->ShapeContactPoints[1].field_0xb;
  puVar2 = (uchar *)((longlong)FVar25 + 0x50) + lVar24;
  puVar2[0] = param_1->ShapeContactPoints[1].field_0x8;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  uVar5 = param_1->ShapeContactPoints[0].field_0x1;
  uVar6 = param_1->ShapeContactPoints[0].field_0x2;
  uVar7 = param_1->ShapeContactPoints[0].field_0x3;
  uVar8 = param_1->ShapeContactPoints[0].field_0x4;
  uVar9 = param_1->ShapeContactPoints[0].field_0x5;
  uVar10 = param_1->ShapeContactPoints[0].field_0x6;
  uVar11 = param_1->ShapeContactPoints[0].field_0x7;
  puVar2 = (uchar *)((longlong)FVar25 + 0x54) + lVar24;
  puVar2[0] = param_1->ShapeContactPoints[0].field_0x0;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar2[4] = uVar8;
  puVar2[5] = uVar9;
  puVar2[6] = uVar10;
  puVar2[7] = uVar11;
  uVar5 = param_1->ShapeContactPoints[0].field_0x9;
  uVar6 = param_1->ShapeContactPoints[0].field_0xa;
  uVar7 = param_1->ShapeContactPoints[0].field_0xb;
  puVar2 = (uchar *)((longlong)FVar25 + 0x5c) + lVar24;
  puVar2[0] = param_1->ShapeContactPoints[0].field_0x8;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  uVar5 = param_1->ShapeContactPoints[1].field_0x1;
  uVar6 = param_1->ShapeContactPoints[1].field_0x2;
  uVar7 = param_1->ShapeContactPoints[1].field_0x3;
  uVar8 = param_1->ShapeContactPoints[1].field_0x4;
  uVar9 = param_1->ShapeContactPoints[1].field_0x5;
  uVar10 = param_1->ShapeContactPoints[1].field_0x6;
  uVar11 = param_1->ShapeContactPoints[1].field_0x7;
  puVar2 = (uchar *)((longlong)FVar25 + 0x60) + lVar24;
  puVar2[0] = param_1->ShapeContactPoints[1].field_0x0;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar2[4] = uVar8;
  puVar2[5] = uVar9;
  puVar2[6] = uVar10;
  puVar2[7] = uVar11;
  uVar5 = param_1->ShapeContactPoints[1].field_0x9;
  uVar6 = param_1->ShapeContactPoints[1].field_0xa;
  uVar7 = param_1->ShapeContactPoints[1].field_0xb;
  puVar2 = (uchar *)((longlong)FVar25 + 0x68) + lVar24;
  puVar2[0] = param_1->ShapeContactPoints[1].field_0x8;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar2 = (uchar *)((longlong)FVar25 + 0x34) + lVar24;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  ((uchar *)((longlong)FVar25 + 0x30))[lVar24] = '\0';
  return uVar21;
}

// SetCCDTimeOfImpact @ 143962a40

void __thiscall
Chaos::FPBDCollisionConstraint::SetCCDTimeOfImpact(FPBDCollisionConstraint *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 <= __real_47efffffe0000000) {
    this->CCDTimeOfImpact = (float)param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("TOI <= FReal(MaxTOI)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                     ,0x2ee,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->CCDTimeOfImpact = (float)param_1;
  return;
}

// SetOneShotManifoldContacts @ 143962ac0

void __thiscall
Chaos::FPBDCollisionConstraint::SetOneShotManifoldContacts
          (FPBDCollisionConstraint *this,
          TArrayView<Chaos::TContactPoint<double>_const_,int> *param_1)

{
  int *piVar1;
  float *pfVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  TContactPoint<double> *pTVar11;
  code *pcVar12;
  int iVar13;
  bool bVar14;
  uint uVar15;
  ForElementType<Chaos::FManifoldPoint> FVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  ForElementType<Chaos::FManifoldPoint> FVar20;
  TArray<Chaos::FManifoldPoint,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar21;
  ulonglong uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uStack_5c;
  
  ResetActiveManifoldContacts(this);
  iVar13 = Chaos_Collision_MaxManifoldPoints;
  uVar30 = (undefined4)__real_7fefffffffffffff;
  uVar31 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar15 = param_1->ArrayNum;
  if ((Chaos_Collision_MaxManifoldPoints < 0) || ((int)uVar15 <= Chaos_Collision_MaxManifoldPoints))
  {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
  }
  else {
    LogOneShotManifoldError(this,Chaos_Collision_MaxManifoldPoints,param_1);
    uVar15 = iVar13;
  }
  pTVar21 = &this->ManifoldPoints;
  piVar1 = &(this->ManifoldPoints).ArrayMax;
  if (*piVar1 < (int)uVar15) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FManifoldPoint>_>
              (0x6c,4,uVar15,&pTVar21->AllocatorInstance,(this->ManifoldPoints).ArrayNum,piVar1);
  }
  uVar23 = 0;
  uVar22 = (ulonglong)uVar15;
  if (uVar15 != 0) {
    lVar19 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar23 < param_1->ArrayNum) {
        uVar15 = ~uVar23 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pTVar11 = param_1->DataPtr;
      dVar5 = *(double *)((longlong)(pTVar11->ShapeContactPoints + 3) + lVar19);
      if (dVar5 < (double)this->CullDistance) {
        uVar10 = *(undefined4 *)((longlong)(pTVar11->ShapeContactPoints + 3) + lVar19 + 8);
        uVar15 = (this->ManifoldPoints).ArrayNum;
        fVar24 = (float)*(double *)(&pTVar11->ShapeContactPoints[0].field_0x0 + lVar19);
        uStack_5c = CONCAT31(uStack_5c._1_3_,
                             *(undefined1 *)
                              ((longlong)(pTVar11->ShapeContactPoints + 3) + lVar19 + 0xc));
        fVar27 = (float)*(double *)(&pTVar11->ShapeContactPoints[0].field_0x8 + lVar19);
        fVar25 = (float)*(double *)(&pTVar11->ShapeContactPoints[0].field_0x10 + lVar19);
        fVar28 = (float)*(double *)(&pTVar11->ShapeContactPoints[1].field_0x0 + lVar19);
        fVar26 = (float)*(double *)(&pTVar11->ShapeContactPoints[1].field_0x8 + lVar19);
        fVar29 = (float)*(double *)(&pTVar11->ShapeContactPoints[1].field_0x10 + lVar19);
        dVar6 = *(double *)(&pTVar11->ShapeContactPoints[2].field_0x0 + lVar19);
        dVar7 = *(double *)(&pTVar11->ShapeContactPoints[2].field_0x8 + lVar19);
        dVar8 = *(double *)(&pTVar11->ShapeContactPoints[2].field_0x10 + lVar19);
        if (uVar15 == *piVar1) {
          uVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FManifoldPoint>_>
                             (0x46c,&pTVar21->AllocatorInstance,piVar1);
          (this->ManifoldPoints).ArrayNum = uVar15;
        }
        (this->ManifoldPoints).ArrayNum = uVar15 + 1;
        uVar17 = 0;
        if ((int)uVar15 < (int)(uVar15 + 1)) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVar16 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
        FVar20 = (ForElementType<Chaos::FManifoldPoint>)pTVar21;
        if (FVar16 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
          FVar20 = FVar16;
        }
        lVar18 = (longlong)(int)uVar15 * 0x6c;
        pfVar2 = (float *)(lVar18 + (longlong)FVar20);
        *pfVar2 = fVar24;
        pfVar2[1] = fVar27;
        pfVar2[2] = fVar25;
        pfVar2[3] = fVar28;
        pfVar2 = (float *)(lVar18 + 0x10 + (longlong)FVar20);
        *pfVar2 = fVar26;
        pfVar2[1] = fVar29;
        pfVar2[2] = (float)dVar6;
        pfVar2[3] = (float)dVar7;
        puVar3 = (undefined8 *)(lVar18 + 0x20 + (longlong)FVar20);
        *puVar3 = CONCAT44((float)dVar5,(float)dVar8);
        puVar3[1] = CONCAT44(uStack_5c,uVar10);
        pfVar2 = (float *)(lVar18 + 0x3c + (longlong)FVar20);
        *pfVar2 = fVar24;
        pfVar2[1] = fVar27;
        pfVar2 = (float *)(lVar18 + 0x54 + (longlong)FVar20);
        *pfVar2 = fVar24;
        pfVar2[1] = fVar27;
        uVar9 = CONCAT44(fVar26,fVar28);
        *(undefined8 *)(lVar18 + 0x48 + (longlong)FVar20) = uVar9;
        *(undefined8 *)(lVar18 + 0x60 + (longlong)FVar20) = uVar9;
        *(float *)(lVar18 + 0x44 + (longlong)FVar20) = fVar25;
        *(float *)(lVar18 + 0x5c + (longlong)FVar20) = fVar25;
        *(float *)(lVar18 + 0x50 + (longlong)FVar20) = fVar29;
        *(float *)(lVar18 + 0x68 + (longlong)FVar20) = fVar29;
        *(undefined8 *)(lVar18 + 0x34 + (longlong)FVar20) = 0;
        *(undefined1 *)(lVar18 + 0x30 + (longlong)FVar20) = 0;
        pdVar4 = (double *)((longlong)(pTVar11->ShapeContactPoints + 3) + lVar19);
        if (*pdVar4 <= (double)CONCAT44(uVar31,uVar30) && (double)CONCAT44(uVar31,uVar30) != *pdVar4
           ) {
          this->ClosestManifoldPointIndex = uVar15;
          uVar9 = *(undefined8 *)((longlong)(pTVar11->ShapeContactPoints + 3) + lVar19);
          uVar30 = (undefined4)uVar9;
          uVar31 = (undefined4)((ulonglong)uVar9 >> 0x20);
        }
      }
      uVar23 = uVar23 + 1;
      lVar19 = lVar19 + 0x58;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  if (0 < (this->ManifoldPoints).ArrayNum) {
    FVar16 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
      FVar16 = (ForElementType<Chaos::FManifoldPoint>)pTVar21;
    }
    if (*(int *)((longlong)FVar16 + 0x28) != (this->Material).FaceIndex) {
      FVar16 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
      if (FVar16 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
        FVar16 = (ForElementType<Chaos::FManifoldPoint>)pTVar21;
      }
      (this->Material).FaceIndex = *(int *)((longlong)FVar16 + 0x28);
      (this->Flags).Bits = (this->Flags).Bits & 0xefff;
    }
  }
  return;
}

// GetImplicit @ 1439d3240

FImplicitObject * __thiscall
Chaos::FPBDCollisionConstraint::GetImplicit(FPBDCollisionConstraint *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FImplicitObject *pFVar3;
  
  if ((uint)param_1 < 2) {
    return this->Implicit[param_1];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                     ,0x163,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImplicitObject *)(*pcVar1)();
    return pFVar3;
  }
  return this->Implicit[param_1];
}

// GetManifoldPoints @ 1439d32b0

TArrayView<Chaos::FManifoldPoint,int> * __thiscall
Chaos::FPBDCollisionConstraint::GetManifoldPoints
          (FPBDCollisionConstraint *this,
          TArrayView<Chaos::FManifoldPoint,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<Chaos::FManifoldPoint> FVar4;
  TArrayView<Chaos::FManifoldPoint,int> *pTVar5;
  
  FVar4 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
  iVar1 = (this->ManifoldPoints).ArrayNum;
  if (FVar4 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
    FVar4 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
  }
  __return_storage_ptr__->DataPtr = (FManifoldPoint *)FVar4;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::FManifoldPoint,int> *)(*pcVar2)();
      return pTVar5;
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// SetLastShapeWorldTransforms @ 1439de710

void __thiscall
Chaos::FPBDCollisionConstraint::SetLastShapeWorldTransforms
          (FPBDCollisionConstraint *this,TRigidTransform<double,3> *param_1,
          TRigidTransform<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar1 = *(double *)&param_2->field_0x28;
  dVar2 = *(double *)&param_1->field_0x30;
  dVar3 = *(double *)&param_2->field_0x30;
  dVar4 = *(double *)&param_1->field_0x28;
  *(float *)&this->LastShapeWorldPositionDelta =
       (float)(*(double *)&param_1->field_0x20 - *(double *)&param_2->field_0x20);
  *(float *)&(this->LastShapeWorldPositionDelta).field_0x4 = (float)(dVar4 - dVar1);
  *(float *)&(this->LastShapeWorldPositionDelta).field_0x8 = (float)(dVar2 - dVar3);
  dVar14 = *(double *)&param_2->field_0x10;
  dVar15 = *(double *)&param_2->field_0x18;
  dVar16 = *(double *)param_2;
  dVar17 = *(double *)&param_2->field_0x8;
  dVar10 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar11 = *(double *)&param_1->field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar12 = *(double *)&param_1->field_0x10 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar13 = *(double *)&param_1->field_0x18 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  *(float *)&this->LastShapeWorldRotationDelta =
       (float)(dVar10 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar16 * dVar13 +
               dVar14 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              dVar12 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]);
  *(float *)&(this->LastShapeWorldRotationDelta).field_0x4 =
       (float)(dVar10 * dVar14 * dVar5 + dVar17 * dVar13 + dVar15 * dVar11 * dVar6 +
              dVar12 * dVar16 * dVar7);
  *(float *)&(this->LastShapeWorldRotationDelta).field_0x8 =
       (float)(dVar10 * dVar17 * dVar1 + dVar14 * dVar13 + dVar16 * dVar11 * dVar2 +
              dVar12 * dVar15 * dVar3);
  *(float *)&(this->LastShapeWorldRotationDelta).field_0xc =
       (float)(dVar10 * dVar16 * dVar4 + dVar15 * dVar13 + dVar17 * dVar11 * dVar8 +
              dVar12 * dVar14 * dVar9);
  (this->Flags).Bits = (this->Flags).Bits & 0xffef;
  (this->Flags).Bits = (this->Flags).Bits | (ushort)((this->BoundsTestFlags).Bits >> 4 & 1) << 4;
  return;
}

// FPBDCollisionConstraint @ 143a03640

FPBDCollisionConstraint * __thiscall
Chaos::FPBDCollisionConstraint::FPBDCollisionConstraint
          (FPBDCollisionConstraint *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FImplicitObject *param_2,FPerShapeData *param_3,FBVHParticles *param_4,
          TGeometryParticleHandleImp<double,3,1> *param_5,FImplicitObject *param_6,
          FPerShapeData *param_7,FBVHParticles *param_8)

{
  undefined1 *puVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  bool bVar29;
  FPBDCollisionConstraint *pFVar30;
  FShapeInstance *pFVar31;
  FShapeInstance *pFVar32;
  
  pFVar32 = (FShapeInstance *)0x0;
  this->_padding_ = (longlong)&___7FPBDCollisionConstraint_Chaos__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->CollisionMargins[0] = 0.0;
  this->CollisionMargins[1] = 0.0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])this->ImplicitTransform = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[0].field_0x10 = auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[0].field_0x20 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[0].field_0x30 = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[0].field_0x40 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[0].field_0x50 = auVar10;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ImplicitTransform + 1) = auVar11;
  auVar12._8_4_ = SUB84((double)fVar4,0);
  auVar12._0_8_ = (double)fVar3;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[1].field_0x10 = auVar12;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[1].field_0x20 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar4,0);
  auVar14._0_8_ = (double)fVar3;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[1].field_0x30 = auVar14;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[1].field_0x40 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar4,0);
  auVar16._0_8_ = (double)fVar3;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[1].field_0x50 = auVar16;
  this->Particle[1] = param_5;
  this->Implicit[1] = param_6;
  this->Simplicial[0] = param_4;
  this->Simplicial[1] = param_8;
  this->Particle[0] = param_1;
  this->Implicit[0] = param_2;
  this->Shape[0] = (FShapeInstance *)0x0;
  this->Shape[1] = (FShapeInstance *)0x0;
  *(undefined8 *)&this->AccumulatedImpulse = 0;
  *(undefined4 *)&(this->AccumulatedImpulse).field_0x8 = 0;
  *(undefined8 *)&this->CullDistance = 0x7f7fffff;
  *(undefined8 *)&(this->RelativeMovement).field_0x4 = 0;
  (this->ContainerCookie).MidPhase = (FParticlePairMidPhase *)0x0;
  (this->ContainerCookie).CreationEpoch = -1;
  (this->ContainerCookie).LastUsedEpoch = -1;
  puVar1 = &(this->ContainerCookie).field_0x10;
  (this->ContainerCookie).ConstraintIndex = -1;
  (this->ContainerCookie).bIsMultiShapePair = 0;
  (this->ContainerCookie).CCDConstraintIndex = -1;
  (this->CollisionSortKey).ParticlePairKey.Key.Key64 = 0;
  (this->CollisionSortKey).ShapePairKey.field0_0x0.Key = 0;
  this->CollisionTolerance = 0.0;
  this->ClosestManifoldPointIndex = -1;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])this->ShapeWorldTransforms = auVar17;
  auVar18._8_4_ = SUB84((double)fVar4,0);
  auVar18._0_8_ = (double)fVar3;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[0].field_0x10 = auVar18;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[0].field_0x20 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar4,0);
  auVar20._0_8_ = (double)fVar3;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[0].field_0x30 = auVar20;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar21._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar21._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar21._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[0].field_0x40 = auVar21;
  auVar22._8_4_ = SUB84((double)fVar4,0);
  auVar22._0_8_ = (double)fVar3;
  auVar22._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[0].field_0x50 = auVar22;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar23._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar23._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar23._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ShapeWorldTransforms + 1) = auVar23;
  auVar24._8_4_ = SUB84((double)fVar4,0);
  auVar24._0_8_ = (double)fVar3;
  auVar24._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[1].field_0x10 = auVar24;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar25._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar25._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar25._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[1].field_0x20 = auVar25;
  auVar26._8_4_ = SUB84((double)fVar4,0);
  auVar26._0_8_ = (double)fVar3;
  auVar26._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[1].field_0x30 = auVar26;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar27._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar27._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar27._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[1].field_0x40 = auVar27;
  auVar28._8_4_ = SUB84((double)fVar4,0);
  auVar28._0_8_ = (double)fVar3;
  auVar28._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[1].field_0x50 = auVar28;
  this->ExpectedNumManifoldPoints = 0;
  *(undefined8 *)&this->LastShapeWorldPositionDelta = 0;
  *(undefined4 *)&(this->LastShapeWorldPositionDelta).field_0x8 = 0;
  *(undefined8 *)&this->LastShapeWorldRotationDelta = 0;
  *(undefined8 *)&(this->LastShapeWorldRotationDelta).field_0x8 = 0;
  (this->GJKWarmStartData).NumVerts = 0;
  (this->Material).FaceIndex = -1;
  (this->Material).DynamicFriction = 0.0;
  (this->Material).StaticFriction = 0.0;
  (this->Material).Restitution = 0.0;
  (this->Material).RestitutionThreshold = 0.0;
  (this->Material).InvMassScale0 = 1.0;
  (this->Material).InvMassScale1 = 1.0;
  (this->Material).InvInertiaScale0 = 1.0;
  (this->Material).InvInertiaScale1 = 1.0;
  (this->Material).SoftSeparation = 0.0;
  (this->Material).BaseFrictionImpulse = 0.0;
  (this->SavedManifoldPoints).AllocatorInstance.SecondaryData =
       (ForElementType<Chaos::FSavedManifoldPoint>)0x0;
  this->Stiffness = 1.0;
  this->Flags = (FFlags)0x0;
  this->BoundsTestFlags = (FImplicitBoundsTestFlags)0x0;
  this->ShapesType = Unknown;
  (this->SavedManifoldPoints).ArrayNum = 0;
  (this->SavedManifoldPoints).ArrayMax = 4;
  (this->ManifoldPoints).AllocatorInstance.SecondaryData =
       (ForElementType<Chaos::FManifoldPoint>)0x0;
  (this->ManifoldPoints).ArrayNum = 0;
  (this->ManifoldPoints).ArrayMax = 4;
  (this->ManifoldPointResults).AllocatorInstance.SecondaryData =
       (ForElementType<Chaos::FManifoldPointResult>)0x0;
  (this->ManifoldPointResults).ArrayNum = 0;
  *(undefined8 *)&(this->ManifoldPointResults).ArrayMax = 4;
  this->InitialOverlapDepenetrationVelocity = -1.0;
  this->CCDTimeOfImpact = 0.0;
  this->SolverBodies[0] = (FSolverBody *)0x0;
  this->SolverBodies[1] = (FSolverBody *)0x0;
  this->CCDEnablePenetration = 0.0;
  this->CCDTargetPenetration = 0.0;
  if (param_3 != (FPerShapeData *)0x0) {
    pFVar31 = (FShapeInstance *)param_3;
    if (param_3->Type == 0) {
      pFVar31 = pFVar32;
    }
    if (pFVar31 == (FShapeInstance *)0x0) {
      bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Shape0 == nullptr) || (Shape0->AsShapeInstance() != nullptr)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionConstraint.cpp"
                          ,0x117,L"");
      if (bVar29) {
        pcVar2 = (code *)swi(3);
        pFVar30 = (FPBDCollisionConstraint *)(*pcVar2)();
        return pFVar30;
      }
    }
  }
  if (param_7 != (FPerShapeData *)0x0) {
    pFVar31 = (FShapeInstance *)param_7;
    if (param_7->Type == 0) {
      pFVar31 = pFVar32;
    }
    if (pFVar31 == (FShapeInstance *)0x0) {
      bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Shape1 == nullptr) || (Shape1->AsShapeInstance() != nullptr)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionConstraint.cpp"
                          ,0x118,L"");
      if (bVar29) {
        pcVar2 = (code *)swi(3);
        pFVar30 = (FPBDCollisionConstraint *)(*pcVar2)();
        return pFVar30;
      }
    }
  }
  if (param_3 != (FPerShapeData *)0x0) {
    if (param_3->Type == 0) {
      param_3 = (FPerShapeData *)pFVar32;
    }
    this->Shape[0] = (FShapeInstance *)param_3;
  }
  if (param_7 != (FPerShapeData *)0x0) {
    if (param_7->Type == 0) {
      param_7 = (FPerShapeData *)pFVar32;
    }
    this->Shape[1] = (FShapeInstance *)param_7;
  }
  return this;
}

// FPBDCollisionConstraint @ 143a03a20

FPBDCollisionConstraint * __thiscall
Chaos::FPBDCollisionConstraint::FPBDCollisionConstraint
          (FPBDCollisionConstraint *this,FPBDCollisionConstraint *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  FImplicitObject *pFVar5;
  FShapeInstance *pFVar6;
  FBVHParticles *pFVar7;
  FCollisionShapePairKey_u_0 FVar8;
  double dVar9;
  FSolverBody *pFVar10;
  int iVar11;
  undefined4 uVar12;
  ForElementType<Chaos::FSavedManifoldPoint> _Dst;
  ForElementType<Chaos::FManifoldPoint> _Dst_00;
  ForElementType<Chaos::FManifoldPointResult> _Dst_01;
  ForElementType<Chaos::FManifoldPoint> _Src;
  ForElementType<Chaos::FManifoldPointResult> _Src_00;
  ForElementType<Chaos::FSavedManifoldPoint> _Src_01;
  
  this->_padding_ = (longlong)&___7FConstraintHandle_Chaos__6B_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FPBDCollisionConstraint_Chaos__6B_;
  *(undefined8 *)this->CollisionMargins = *(undefined8 *)param_1->CollisionMargins;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[0].field_0x8;
  *(undefined8 *)this->ImplicitTransform = *(undefined8 *)param_1->ImplicitTransform;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[0].field_0x18;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x10 =
       *(undefined8 *)&param_1->ImplicitTransform[0].field_0x10;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[0].field_0x28;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x20 =
       *(undefined8 *)&param_1->ImplicitTransform[0].field_0x20;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x28 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[0].field_0x38;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x30 =
       *(undefined8 *)&param_1->ImplicitTransform[0].field_0x30;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x38 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[0].field_0x48;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x40 =
       *(undefined8 *)&param_1->ImplicitTransform[0].field_0x40;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x48 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[0].field_0x58;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x50 =
       *(undefined8 *)&param_1->ImplicitTransform[0].field_0x50;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x58 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[1].field_0x8;
  *(undefined8 *)(this->ImplicitTransform + 1) = *(undefined8 *)(param_1->ImplicitTransform + 1);
  *(undefined8 *)&this->ImplicitTransform[1].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[1].field_0x18;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x10 =
       *(undefined8 *)&param_1->ImplicitTransform[1].field_0x10;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[1].field_0x28;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x20 =
       *(undefined8 *)&param_1->ImplicitTransform[1].field_0x20;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x28 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[1].field_0x38;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x30 =
       *(undefined8 *)&param_1->ImplicitTransform[1].field_0x30;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x38 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[1].field_0x48;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x40 =
       *(undefined8 *)&param_1->ImplicitTransform[1].field_0x40;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x48 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[1].field_0x58;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x50 =
       *(undefined8 *)&param_1->ImplicitTransform[1].field_0x50;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x58 = uVar3;
  pTVar4 = param_1->Particle[1];
  this->Particle[0] = param_1->Particle[0];
  this->Particle[1] = pTVar4;
  pFVar5 = param_1->Implicit[1];
  this->Implicit[0] = param_1->Implicit[0];
  this->Implicit[1] = pFVar5;
  pFVar6 = param_1->Shape[1];
  this->Shape[0] = param_1->Shape[0];
  this->Shape[1] = pFVar6;
  pFVar7 = param_1->Simplicial[1];
  this->Simplicial[0] = param_1->Simplicial[0];
  this->Simplicial[1] = pFVar7;
  *(undefined8 *)&this->AccumulatedImpulse = *(undefined8 *)&param_1->AccumulatedImpulse;
  *(undefined4 *)&(this->AccumulatedImpulse).field_0x8 =
       *(undefined4 *)&(param_1->AccumulatedImpulse).field_0x8;
  this->CullDistance = param_1->CullDistance;
  *(undefined8 *)&this->RelativeMovement = *(undefined8 *)&param_1->RelativeMovement;
  *(undefined4 *)&(this->RelativeMovement).field_0x8 =
       *(undefined4 *)&(param_1->RelativeMovement).field_0x8;
  iVar2 = (param_1->ContainerCookie).CreationEpoch;
  iVar11 = (param_1->ContainerCookie).LastUsedEpoch;
  (this->ContainerCookie).MidPhase = (param_1->ContainerCookie).MidPhase;
  (this->ContainerCookie).CreationEpoch = iVar2;
  (this->ContainerCookie).LastUsedEpoch = iVar11;
  iVar2 = (param_1->ContainerCookie).CCDConstraintIndex;
  *(undefined4 *)&(this->ContainerCookie).field_0x10 =
       *(undefined4 *)&(param_1->ContainerCookie).field_0x10;
  (this->ContainerCookie).CCDConstraintIndex = iVar2;
  FVar8 = (param_1->CollisionSortKey).ShapePairKey.field0_0x0;
  (this->CollisionSortKey).ParticlePairKey.Key = (param_1->CollisionSortKey).ParticlePairKey.Key;
  (this->CollisionSortKey).ShapePairKey.field0_0x0 = FVar8;
  this->CollisionTolerance = param_1->CollisionTolerance;
  this->ClosestManifoldPointIndex = param_1->ClosestManifoldPointIndex;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x8;
  *(undefined8 *)this->ShapeWorldTransforms = *(undefined8 *)param_1->ShapeWorldTransforms;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x18;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x10 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x10;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x28;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x20 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x20;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x28 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x38;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x30 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x30;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x38 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x48;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x40 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x40;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x48 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x58;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x50 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x50;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x58 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x8;
  *(undefined8 *)(this->ShapeWorldTransforms + 1) =
       *(undefined8 *)(param_1->ShapeWorldTransforms + 1);
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x18;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x10 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x10;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x28;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x20 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x20;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x28 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x38;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x30 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x30;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x38 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x48;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x40 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x40;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x48 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x58;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x50 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x50;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x58 = uVar3;
  this->ExpectedNumManifoldPoints = param_1->ExpectedNumManifoldPoints;
  *(undefined8 *)&this->LastShapeWorldPositionDelta =
       *(undefined8 *)&param_1->LastShapeWorldPositionDelta;
  *(undefined4 *)&(this->LastShapeWorldPositionDelta).field_0x8 =
       *(undefined4 *)&(param_1->LastShapeWorldPositionDelta).field_0x8;
  uVar3 = *(undefined8 *)&(param_1->LastShapeWorldRotationDelta).field_0x8;
  *(undefined8 *)&this->LastShapeWorldRotationDelta =
       *(undefined8 *)&param_1->LastShapeWorldRotationDelta;
  *(undefined8 *)&(this->LastShapeWorldRotationDelta).field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->GJKWarmStartData).As[0].field_0x8;
  *(undefined8 *)(this->GJKWarmStartData).As = *(undefined8 *)(param_1->GJKWarmStartData).As;
  *(undefined8 *)&(this->GJKWarmStartData).As[0].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)((param_1->GJKWarmStartData).As + 1);
  *(undefined8 *)&(this->GJKWarmStartData).As[0].field_0x10 =
       *(undefined8 *)&(param_1->GJKWarmStartData).As[0].field_0x10;
  *(undefined8 *)((this->GJKWarmStartData).As + 1) = uVar3;
  uVar3 = *(undefined8 *)&(param_1->GJKWarmStartData).As[1].field_0x10;
  *(undefined8 *)&(this->GJKWarmStartData).As[1].field_0x8 =
       *(undefined8 *)&(param_1->GJKWarmStartData).As[1].field_0x8;
  *(undefined8 *)&(this->GJKWarmStartData).As[1].field_0x10 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->GJKWarmStartData).As[2].field_0x8;
  *(undefined8 *)((this->GJKWarmStartData).As + 2) =
       *(undefined8 *)((param_1->GJKWarmStartData).As + 2);
  *(undefined8 *)&(this->GJKWarmStartData).As[2].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)((param_1->GJKWarmStartData).As + 3);
  *(undefined8 *)&(this->GJKWarmStartData).As[2].field_0x10 =
       *(undefined8 *)&(param_1->GJKWarmStartData).As[2].field_0x10;
  *(undefined8 *)((this->GJKWarmStartData).As + 3) = uVar3;
  uVar3 = *(undefined8 *)&(param_1->GJKWarmStartData).As[3].field_0x10;
  *(undefined8 *)&(this->GJKWarmStartData).As[3].field_0x8 =
       *(undefined8 *)&(param_1->GJKWarmStartData).As[3].field_0x8;
  *(undefined8 *)&(this->GJKWarmStartData).As[3].field_0x10 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->GJKWarmStartData).Bs[0].field_0x8;
  *(undefined8 *)(this->GJKWarmStartData).Bs = *(undefined8 *)(param_1->GJKWarmStartData).Bs;
  *(undefined8 *)&(this->GJKWarmStartData).Bs[0].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)((param_1->GJKWarmStartData).Bs + 1);
  *(undefined8 *)&(this->GJKWarmStartData).Bs[0].field_0x10 =
       *(undefined8 *)&(param_1->GJKWarmStartData).Bs[0].field_0x10;
  *(undefined8 *)((this->GJKWarmStartData).Bs + 1) = uVar3;
  uVar3 = *(undefined8 *)&(param_1->GJKWarmStartData).Bs[1].field_0x10;
  *(undefined8 *)&(this->GJKWarmStartData).Bs[1].field_0x8 =
       *(undefined8 *)&(param_1->GJKWarmStartData).Bs[1].field_0x8;
  *(undefined8 *)&(this->GJKWarmStartData).Bs[1].field_0x10 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->GJKWarmStartData).Bs[2].field_0x8;
  *(undefined8 *)((this->GJKWarmStartData).Bs + 2) =
       *(undefined8 *)((param_1->GJKWarmStartData).Bs + 2);
  *(undefined8 *)&(this->GJKWarmStartData).Bs[2].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)((param_1->GJKWarmStartData).Bs + 3);
  *(undefined8 *)&(this->GJKWarmStartData).Bs[2].field_0x10 =
       *(undefined8 *)&(param_1->GJKWarmStartData).Bs[2].field_0x10;
  *(undefined8 *)((this->GJKWarmStartData).Bs + 3) = uVar3;
  uVar3 = *(undefined8 *)&(param_1->GJKWarmStartData).Bs[3].field_0x10;
  *(undefined8 *)&(this->GJKWarmStartData).Bs[3].field_0x8 =
       *(undefined8 *)&(param_1->GJKWarmStartData).Bs[3].field_0x8;
  *(undefined8 *)&(this->GJKWarmStartData).Bs[3].field_0x10 = uVar3;
  dVar9 = (param_1->GJKWarmStartData).Barycentric[1];
  (this->GJKWarmStartData).Barycentric[0] = (param_1->GJKWarmStartData).Barycentric[0];
  (this->GJKWarmStartData).Barycentric[1] = dVar9;
  dVar9 = (param_1->GJKWarmStartData).Barycentric[3];
  (this->GJKWarmStartData).Barycentric[2] = (param_1->GJKWarmStartData).Barycentric[2];
  (this->GJKWarmStartData).Barycentric[3] = dVar9;
  uVar12 = *(undefined4 *)&(param_1->GJKWarmStartData).field_0xe4;
  (this->GJKWarmStartData).NumVerts = (param_1->GJKWarmStartData).NumVerts;
  *(undefined4 *)&(this->GJKWarmStartData).field_0xe4 = uVar12;
  (this->Material).FaceIndex = (param_1->Material).FaceIndex;
  (this->Material).DynamicFriction = (param_1->Material).DynamicFriction;
  (this->Material).StaticFriction = (param_1->Material).StaticFriction;
  (this->Material).Restitution = (param_1->Material).Restitution;
  (this->Material).RestitutionThreshold = (param_1->Material).RestitutionThreshold;
  (this->Material).InvMassScale0 = (param_1->Material).InvMassScale0;
  (this->Material).InvMassScale1 = (param_1->Material).InvMassScale1;
  (this->Material).InvInertiaScale0 = (param_1->Material).InvInertiaScale0;
  (this->Material).InvInertiaScale1 = (param_1->Material).InvInertiaScale1;
  (this->Material).SoftSeparation = (param_1->Material).SoftSeparation;
  (this->Material).BaseFrictionImpulse = (param_1->Material).BaseFrictionImpulse;
  this->Stiffness = param_1->Stiffness;
  this->Flags = param_1->Flags;
  this->BoundsTestFlags = param_1->BoundsTestFlags;
  this->ShapesType = param_1->ShapesType;
  (this->SavedManifoldPoints).AllocatorInstance.SecondaryData =
       (ForElementType<Chaos::FSavedManifoldPoint>)0x0;
  _Src_01 = (param_1->SavedManifoldPoints).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->SavedManifoldPoints).ArrayNum;
  (this->SavedManifoldPoints).ArrayNum = iVar2;
  if (_Src_01 == (ForElementType<Chaos::FSavedManifoldPoint>)0x0) {
    _Src_01 = (ForElementType<Chaos::FSavedManifoldPoint>)&param_1->SavedManifoldPoints;
  }
  piVar1 = &(this->SavedManifoldPoints).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSavedManifoldPoint>_>
              (0x1c,4,iVar2,0,&(this->SavedManifoldPoints).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->SavedManifoldPoints).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<Chaos::FSavedManifoldPoint>)0x0) {
      _Dst = (ForElementType<Chaos::FSavedManifoldPoint>)&this->SavedManifoldPoints;
    }
    memcpy((void *)_Dst,(void *)_Src_01,(longlong)iVar2 * 0x1c);
  }
  (this->ManifoldPoints).AllocatorInstance.SecondaryData =
       (ForElementType<Chaos::FManifoldPoint>)0x0;
  _Src = (param_1->ManifoldPoints).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ManifoldPoints).ArrayNum;
  (this->ManifoldPoints).ArrayNum = iVar2;
  if (_Src == (ForElementType<Chaos::FManifoldPoint>)0x0) {
    _Src = (ForElementType<Chaos::FManifoldPoint>)&param_1->ManifoldPoints;
  }
  piVar1 = &(this->ManifoldPoints).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FManifoldPoint>_>
              (0x6c,4,iVar2,0,&(this->ManifoldPoints).AllocatorInstance,iVar2,piVar1);
    _Dst_00 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
    if (_Dst_00 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
      _Dst_00 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
    }
    memcpy((void *)_Dst_00,(void *)_Src,(longlong)iVar2 * 0x6c);
  }
  (this->ManifoldPointResults).AllocatorInstance.SecondaryData =
       (ForElementType<Chaos::FManifoldPointResult>)0x0;
  _Src_00 = (param_1->ManifoldPointResults).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ManifoldPointResults).ArrayNum;
  (this->ManifoldPointResults).ArrayNum = iVar2;
  if (_Src_00 == (ForElementType<Chaos::FManifoldPointResult>)0x0) {
    _Src_00 = (ForElementType<Chaos::FManifoldPointResult>)&param_1->ManifoldPointResults;
  }
  piVar1 = &(this->ManifoldPointResults).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FManifoldPointResult>_>
              (0x1c,4,iVar2,0,&(this->ManifoldPointResults).AllocatorInstance,iVar2,piVar1);
    _Dst_01 = (this->ManifoldPointResults).AllocatorInstance.SecondaryData;
    if (_Dst_01 == (ForElementType<Chaos::FManifoldPointResult>)0x0) {
      _Dst_01 = (ForElementType<Chaos::FManifoldPointResult>)&this->ManifoldPointResults;
    }
    memcpy((void *)_Dst_01,(void *)_Src_00,(longlong)iVar2 * 0x1c);
  }
  this->MinInitialPhi = param_1->MinInitialPhi;
  this->InitialOverlapDepenetrationVelocity = param_1->InitialOverlapDepenetrationVelocity;
  this->CCDTimeOfImpact = param_1->CCDTimeOfImpact;
  pFVar10 = param_1->SolverBodies[1];
  this->SolverBodies[0] = param_1->SolverBodies[0];
  this->SolverBodies[1] = pFVar10;
  this->CCDEnablePenetration = param_1->CCDEnablePenetration;
  this->CCDTargetPenetration = param_1->CCDTargetPenetration;
  return this;
}

// FPBDCollisionConstraint @ 143a03fb0

FPBDCollisionConstraint * __thiscall
Chaos::FPBDCollisionConstraint::FPBDCollisionConstraint(FPBDCollisionConstraint *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPBDCollisionConstraint_Chaos__6B_;
  this->CollisionMargins[0] = 0.0;
  this->CollisionMargins[1] = 0.0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])this->ImplicitTransform = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[0].field_0x10 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[0].field_0x20 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[0].field_0x30 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[0].field_0x40 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[0].field_0x50 = auVar9;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ImplicitTransform + 1) = auVar10;
  auVar11._8_4_ = SUB84((double)fVar3,0);
  auVar11._0_8_ = (double)fVar2;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[1].field_0x10 = auVar11;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar12._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[1].field_0x20 = auVar12;
  auVar13._8_4_ = SUB84((double)fVar3,0);
  auVar13._0_8_ = (double)fVar2;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[1].field_0x30 = auVar13;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar14._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar14._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar14._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[1].field_0x40 = auVar14;
  auVar15._8_4_ = SUB84((double)fVar3,0);
  auVar15._0_8_ = (double)fVar2;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])&this->ImplicitTransform[1].field_0x50 = auVar15;
  this->Particle[0] = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  this->Particle[1] = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  this->Implicit[0] = (FImplicitObject *)0x0;
  this->Implicit[1] = (FImplicitObject *)0x0;
  this->Shape[0] = (FShapeInstance *)0x0;
  this->Shape[1] = (FShapeInstance *)0x0;
  this->Simplicial[0] = (FBVHParticles *)0x0;
  this->Simplicial[1] = (FBVHParticles *)0x0;
  *(undefined8 *)&this->AccumulatedImpulse = 0;
  *(undefined4 *)&(this->AccumulatedImpulse).field_0x8 = 0;
  *(undefined8 *)&this->CullDistance = 0x7f7fffff;
  *(undefined8 *)&(this->RelativeMovement).field_0x4 = 0;
  (this->ContainerCookie).MidPhase = (FParticlePairMidPhase *)0x0;
  (this->ContainerCookie).CreationEpoch = -1;
  (this->ContainerCookie).LastUsedEpoch = -1;
  puVar1 = &(this->ContainerCookie).field_0x10;
  (this->ContainerCookie).ConstraintIndex = -1;
  (this->ContainerCookie).bIsMultiShapePair = 0;
  (this->ContainerCookie).CCDConstraintIndex = -1;
  (this->CollisionSortKey).ParticlePairKey.Key.Key64 = 0;
  (this->CollisionSortKey).ShapePairKey.field0_0x0.Key = 0;
  this->CollisionTolerance = 0.0;
  this->ClosestManifoldPointIndex = -1;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar16._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar16._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])this->ShapeWorldTransforms = auVar16;
  auVar17._8_4_ = SUB84((double)fVar3,0);
  auVar17._0_8_ = (double)fVar2;
  auVar17._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[0].field_0x10 = auVar17;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar18._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar18._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar18._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[0].field_0x20 = auVar18;
  auVar19._8_4_ = SUB84((double)fVar3,0);
  auVar19._0_8_ = (double)fVar2;
  auVar19._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[0].field_0x30 = auVar19;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar20._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar20._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar20._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[0].field_0x40 = auVar20;
  auVar21._8_4_ = SUB84((double)fVar3,0);
  auVar21._0_8_ = (double)fVar2;
  auVar21._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[0].field_0x50 = auVar21;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar22._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar22._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar22._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ShapeWorldTransforms + 1) = auVar22;
  auVar23._8_4_ = SUB84((double)fVar3,0);
  auVar23._0_8_ = (double)fVar2;
  auVar23._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[1].field_0x10 = auVar23;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar24._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar24._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar24._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[1].field_0x20 = auVar24;
  auVar25._8_4_ = SUB84((double)fVar3,0);
  auVar25._0_8_ = (double)fVar2;
  auVar25._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[1].field_0x30 = auVar25;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar26._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar26._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar26._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[1].field_0x40 = auVar26;
  auVar27._8_4_ = SUB84((double)fVar3,0);
  auVar27._0_8_ = (double)fVar2;
  auVar27._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])&this->ShapeWorldTransforms[1].field_0x50 = auVar27;
  this->ExpectedNumManifoldPoints = 0;
  *(undefined8 *)&this->LastShapeWorldPositionDelta = 0;
  *(undefined4 *)&(this->LastShapeWorldPositionDelta).field_0x8 = 0;
  *(undefined8 *)&this->LastShapeWorldRotationDelta = 0;
  *(undefined8 *)&(this->LastShapeWorldRotationDelta).field_0x8 = 0;
  (this->GJKWarmStartData).NumVerts = 0;
  (this->Material).FaceIndex = -1;
  (this->Material).DynamicFriction = 0.0;
  (this->Material).StaticFriction = 0.0;
  (this->Material).Restitution = 0.0;
  (this->Material).RestitutionThreshold = 0.0;
  (this->Material).InvMassScale0 = 1.0;
  (this->Material).InvMassScale1 = 1.0;
  (this->Material).InvInertiaScale0 = 1.0;
  (this->Material).InvInertiaScale1 = 1.0;
  (this->Material).SoftSeparation = 0.0;
  (this->Material).BaseFrictionImpulse = 0.0;
  (this->SavedManifoldPoints).AllocatorInstance.SecondaryData =
       (ForElementType<Chaos::FSavedManifoldPoint>)0x0;
  this->Stiffness = 1.0;
  this->Flags = (FFlags)0x0;
  this->BoundsTestFlags = (FImplicitBoundsTestFlags)0x0;
  this->ShapesType = Unknown;
  (this->SavedManifoldPoints).ArrayNum = 0;
  (this->SavedManifoldPoints).ArrayMax = 4;
  (this->ManifoldPoints).AllocatorInstance.SecondaryData =
       (ForElementType<Chaos::FManifoldPoint>)0x0;
  (this->ManifoldPoints).ArrayNum = 0;
  (this->ManifoldPoints).ArrayMax = 4;
  (this->ManifoldPointResults).AllocatorInstance.SecondaryData =
       (ForElementType<Chaos::FManifoldPointResult>)0x0;
  (this->ManifoldPointResults).ArrayNum = 0;
  *(undefined8 *)&(this->ManifoldPointResults).ArrayMax = 4;
  this->InitialOverlapDepenetrationVelocity = -1.0;
  this->CCDTimeOfImpact = 0.0;
  this->SolverBodies[0] = (FSolverBody *)0x0;
  this->SolverBodies[1] = (FSolverBody *)0x0;
  this->CCDEnablePenetration = 0.0;
  this->CCDTargetPenetration = 0.0;
  return this;
}

// ~FPBDCollisionConstraint @ 143a04670

void __thiscall
Chaos::FPBDCollisionConstraint::~FPBDCollisionConstraint(FPBDCollisionConstraint *this)

{
  ForElementType<Chaos::FManifoldPointResult> FVar1;
  ForElementType<Chaos::FManifoldPoint> FVar2;
  ForElementType<Chaos::FSavedManifoldPoint> FVar3;
  code *pcVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7FPBDCollisionConstraint_Chaos__6B_;
  if (this->_padding_ != 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7684347910233784615>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionConstraint.cpp"
                       ,0x127,"GetConstraintGraphEdge() == nullptr");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar1 = (this->ManifoldPointResults).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<Chaos::FManifoldPointResult>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar2 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar3 = (this->SavedManifoldPoints).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<Chaos::FSavedManifoldPoint>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  this->_padding_ = (longlong)&___7FConstraintHandle_Chaos__6B_;
  if (this->_padding_ != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphEdge == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                       ,0x79,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// operator= @ 143a04860

FPBDCollisionConstraint * __thiscall
Chaos::FPBDCollisionConstraint::operator=
          (FPBDCollisionConstraint *this,FPBDCollisionConstraint *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  FCollisionShapePairKey_u_0 FVar4;
  double dVar5;
  int iVar6;
  undefined4 uVar7;
  ForElementType<Chaos::FSavedManifoldPoint> _Dst;
  ForElementType<Chaos::FManifoldPoint> _Dst_00;
  ForElementType<Chaos::FManifoldPointResult> _Dst_01;
  ForElementType<Chaos::FSavedManifoldPoint> _Src;
  ForElementType<Chaos::FManifoldPoint> _Src_00;
  ForElementType<Chaos::FManifoldPointResult> _Src_01;
  
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->CollisionMargins[0] = param_1->CollisionMargins[0];
  this->CollisionMargins[1] = param_1->CollisionMargins[1];
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[0].field_0x8;
  *(undefined8 *)this->ImplicitTransform = *(undefined8 *)param_1->ImplicitTransform;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[0].field_0x18;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x10 =
       *(undefined8 *)&param_1->ImplicitTransform[0].field_0x10;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[0].field_0x28;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x20 =
       *(undefined8 *)&param_1->ImplicitTransform[0].field_0x20;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x28 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[0].field_0x38;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x30 =
       *(undefined8 *)&param_1->ImplicitTransform[0].field_0x30;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x38 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[0].field_0x48;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x40 =
       *(undefined8 *)&param_1->ImplicitTransform[0].field_0x40;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x48 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[0].field_0x58;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x50 =
       *(undefined8 *)&param_1->ImplicitTransform[0].field_0x50;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x58 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[1].field_0x8;
  *(undefined8 *)(this->ImplicitTransform + 1) = *(undefined8 *)(param_1->ImplicitTransform + 1);
  *(undefined8 *)&this->ImplicitTransform[1].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[1].field_0x18;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x10 =
       *(undefined8 *)&param_1->ImplicitTransform[1].field_0x10;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[1].field_0x28;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x20 =
       *(undefined8 *)&param_1->ImplicitTransform[1].field_0x20;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x28 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[1].field_0x38;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x30 =
       *(undefined8 *)&param_1->ImplicitTransform[1].field_0x30;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x38 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[1].field_0x48;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x40 =
       *(undefined8 *)&param_1->ImplicitTransform[1].field_0x40;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x48 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ImplicitTransform[1].field_0x58;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x50 =
       *(undefined8 *)&param_1->ImplicitTransform[1].field_0x50;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x58 = uVar3;
  this->Particle[0] = param_1->Particle[0];
  this->Particle[1] = param_1->Particle[1];
  this->Implicit[0] = param_1->Implicit[0];
  this->Implicit[1] = param_1->Implicit[1];
  this->Shape[0] = param_1->Shape[0];
  this->Shape[1] = param_1->Shape[1];
  this->Simplicial[0] = param_1->Simplicial[0];
  this->Simplicial[1] = param_1->Simplicial[1];
  *(undefined8 *)&this->AccumulatedImpulse = *(undefined8 *)&param_1->AccumulatedImpulse;
  *(undefined4 *)&(this->AccumulatedImpulse).field_0x8 =
       *(undefined4 *)&(param_1->AccumulatedImpulse).field_0x8;
  this->CullDistance = param_1->CullDistance;
  *(undefined8 *)&this->RelativeMovement = *(undefined8 *)&param_1->RelativeMovement;
  *(undefined4 *)&(this->RelativeMovement).field_0x8 =
       *(undefined4 *)&(param_1->RelativeMovement).field_0x8;
  iVar2 = (param_1->ContainerCookie).CreationEpoch;
  iVar6 = (param_1->ContainerCookie).LastUsedEpoch;
  (this->ContainerCookie).MidPhase = (param_1->ContainerCookie).MidPhase;
  (this->ContainerCookie).CreationEpoch = iVar2;
  (this->ContainerCookie).LastUsedEpoch = iVar6;
  iVar2 = (param_1->ContainerCookie).CCDConstraintIndex;
  *(undefined4 *)&(this->ContainerCookie).field_0x10 =
       *(undefined4 *)&(param_1->ContainerCookie).field_0x10;
  (this->ContainerCookie).CCDConstraintIndex = iVar2;
  FVar4 = (param_1->CollisionSortKey).ShapePairKey.field0_0x0;
  (this->CollisionSortKey).ParticlePairKey.Key = (param_1->CollisionSortKey).ParticlePairKey.Key;
  (this->CollisionSortKey).ShapePairKey.field0_0x0 = FVar4;
  this->CollisionTolerance = param_1->CollisionTolerance;
  this->ClosestManifoldPointIndex = param_1->ClosestManifoldPointIndex;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x8;
  *(undefined8 *)this->ShapeWorldTransforms = *(undefined8 *)param_1->ShapeWorldTransforms;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x18;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x10 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x10;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x28;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x20 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x20;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x28 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x38;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x30 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x30;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x38 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x48;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x40 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x40;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x48 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x58;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x50 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[0].field_0x50;
  *(undefined8 *)&this->ShapeWorldTransforms[0].field_0x58 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x8;
  *(undefined8 *)(this->ShapeWorldTransforms + 1) =
       *(undefined8 *)(param_1->ShapeWorldTransforms + 1);
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x18;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x10 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x10;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x28;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x20 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x20;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x28 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x38;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x30 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x30;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x38 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x48;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x40 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x40;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x48 = uVar3;
  uVar3 = *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x58;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x50 =
       *(undefined8 *)&param_1->ShapeWorldTransforms[1].field_0x50;
  *(undefined8 *)&this->ShapeWorldTransforms[1].field_0x58 = uVar3;
  this->ExpectedNumManifoldPoints = param_1->ExpectedNumManifoldPoints;
  *(undefined8 *)&this->LastShapeWorldPositionDelta =
       *(undefined8 *)&param_1->LastShapeWorldPositionDelta;
  *(undefined4 *)&(this->LastShapeWorldPositionDelta).field_0x8 =
       *(undefined4 *)&(param_1->LastShapeWorldPositionDelta).field_0x8;
  uVar3 = *(undefined8 *)&(param_1->LastShapeWorldRotationDelta).field_0x8;
  *(undefined8 *)&this->LastShapeWorldRotationDelta =
       *(undefined8 *)&param_1->LastShapeWorldRotationDelta;
  *(undefined8 *)&(this->LastShapeWorldRotationDelta).field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->GJKWarmStartData).As[0].field_0x8;
  *(undefined8 *)(this->GJKWarmStartData).As = *(undefined8 *)(param_1->GJKWarmStartData).As;
  *(undefined8 *)&(this->GJKWarmStartData).As[0].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)((param_1->GJKWarmStartData).As + 1);
  *(undefined8 *)&(this->GJKWarmStartData).As[0].field_0x10 =
       *(undefined8 *)&(param_1->GJKWarmStartData).As[0].field_0x10;
  *(undefined8 *)((this->GJKWarmStartData).As + 1) = uVar3;
  uVar3 = *(undefined8 *)&(param_1->GJKWarmStartData).As[1].field_0x10;
  *(undefined8 *)&(this->GJKWarmStartData).As[1].field_0x8 =
       *(undefined8 *)&(param_1->GJKWarmStartData).As[1].field_0x8;
  *(undefined8 *)&(this->GJKWarmStartData).As[1].field_0x10 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->GJKWarmStartData).As[2].field_0x8;
  *(undefined8 *)((this->GJKWarmStartData).As + 2) =
       *(undefined8 *)((param_1->GJKWarmStartData).As + 2);
  *(undefined8 *)&(this->GJKWarmStartData).As[2].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)((param_1->GJKWarmStartData).As + 3);
  *(undefined8 *)&(this->GJKWarmStartData).As[2].field_0x10 =
       *(undefined8 *)&(param_1->GJKWarmStartData).As[2].field_0x10;
  *(undefined8 *)((this->GJKWarmStartData).As + 3) = uVar3;
  uVar3 = *(undefined8 *)&(param_1->GJKWarmStartData).As[3].field_0x10;
  *(undefined8 *)&(this->GJKWarmStartData).As[3].field_0x8 =
       *(undefined8 *)&(param_1->GJKWarmStartData).As[3].field_0x8;
  *(undefined8 *)&(this->GJKWarmStartData).As[3].field_0x10 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->GJKWarmStartData).Bs[0].field_0x8;
  *(undefined8 *)(this->GJKWarmStartData).Bs = *(undefined8 *)(param_1->GJKWarmStartData).Bs;
  *(undefined8 *)&(this->GJKWarmStartData).Bs[0].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)((param_1->GJKWarmStartData).Bs + 1);
  *(undefined8 *)&(this->GJKWarmStartData).Bs[0].field_0x10 =
       *(undefined8 *)&(param_1->GJKWarmStartData).Bs[0].field_0x10;
  *(undefined8 *)((this->GJKWarmStartData).Bs + 1) = uVar3;
  uVar3 = *(undefined8 *)&(param_1->GJKWarmStartData).Bs[1].field_0x10;
  *(undefined8 *)&(this->GJKWarmStartData).Bs[1].field_0x8 =
       *(undefined8 *)&(param_1->GJKWarmStartData).Bs[1].field_0x8;
  *(undefined8 *)&(this->GJKWarmStartData).Bs[1].field_0x10 = uVar3;
  uVar3 = *(undefined8 *)&(param_1->GJKWarmStartData).Bs[2].field_0x8;
  *(undefined8 *)((this->GJKWarmStartData).Bs + 2) =
       *(undefined8 *)((param_1->GJKWarmStartData).Bs + 2);
  *(undefined8 *)&(this->GJKWarmStartData).Bs[2].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)((param_1->GJKWarmStartData).Bs + 3);
  *(undefined8 *)&(this->GJKWarmStartData).Bs[2].field_0x10 =
       *(undefined8 *)&(param_1->GJKWarmStartData).Bs[2].field_0x10;
  *(undefined8 *)((this->GJKWarmStartData).Bs + 3) = uVar3;
  uVar3 = *(undefined8 *)&(param_1->GJKWarmStartData).Bs[3].field_0x10;
  *(undefined8 *)&(this->GJKWarmStartData).Bs[3].field_0x8 =
       *(undefined8 *)&(param_1->GJKWarmStartData).Bs[3].field_0x8;
  *(undefined8 *)&(this->GJKWarmStartData).Bs[3].field_0x10 = uVar3;
  dVar5 = (param_1->GJKWarmStartData).Barycentric[1];
  (this->GJKWarmStartData).Barycentric[0] = (param_1->GJKWarmStartData).Barycentric[0];
  (this->GJKWarmStartData).Barycentric[1] = dVar5;
  dVar5 = (param_1->GJKWarmStartData).Barycentric[3];
  (this->GJKWarmStartData).Barycentric[2] = (param_1->GJKWarmStartData).Barycentric[2];
  (this->GJKWarmStartData).Barycentric[3] = dVar5;
  uVar7 = *(undefined4 *)&(param_1->GJKWarmStartData).field_0xe4;
  (this->GJKWarmStartData).NumVerts = (param_1->GJKWarmStartData).NumVerts;
  *(undefined4 *)&(this->GJKWarmStartData).field_0xe4 = uVar7;
  (this->Material).FaceIndex = (param_1->Material).FaceIndex;
  (this->Material).DynamicFriction = (param_1->Material).DynamicFriction;
  (this->Material).StaticFriction = (param_1->Material).StaticFriction;
  (this->Material).Restitution = (param_1->Material).Restitution;
  (this->Material).RestitutionThreshold = (param_1->Material).RestitutionThreshold;
  (this->Material).InvMassScale0 = (param_1->Material).InvMassScale0;
  (this->Material).InvMassScale1 = (param_1->Material).InvMassScale1;
  (this->Material).InvInertiaScale0 = (param_1->Material).InvInertiaScale0;
  (this->Material).InvInertiaScale1 = (param_1->Material).InvInertiaScale1;
  (this->Material).SoftSeparation = (param_1->Material).SoftSeparation;
  (this->Material).BaseFrictionImpulse = (param_1->Material).BaseFrictionImpulse;
  this->Stiffness = param_1->Stiffness;
  this->Flags = param_1->Flags;
  this->BoundsTestFlags = param_1->BoundsTestFlags;
  this->ShapesType = param_1->ShapesType;
  if (this == param_1) {
LAB_143a04ceb:
    if (this != param_1) goto LAB_143a04d05;
LAB_143a04d8c:
    if (this == param_1) goto LAB_143a04e16;
  }
  else {
    _Src = (param_1->SavedManifoldPoints).AllocatorInstance.SecondaryData;
    piVar1 = &(this->SavedManifoldPoints).ArrayMax;
    iVar2 = (param_1->SavedManifoldPoints).ArrayNum;
    if (_Src == (ForElementType<Chaos::FSavedManifoldPoint>)0x0) {
      _Src = (ForElementType<Chaos::FSavedManifoldPoint>)&param_1->SavedManifoldPoints;
    }
    (this->SavedManifoldPoints).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSavedManifoldPoint>_>
                (0x1c,4,iVar2,*piVar1,&(this->SavedManifoldPoints).AllocatorInstance,iVar2,piVar1);
      _Dst = (this->SavedManifoldPoints).AllocatorInstance.SecondaryData;
      if (iVar2 == 0) goto LAB_143a04ceb;
      if (_Dst == (ForElementType<Chaos::FSavedManifoldPoint>)0x0) {
        _Dst = (ForElementType<Chaos::FSavedManifoldPoint>)&this->SavedManifoldPoints;
      }
      memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 * 0x1c);
    }
LAB_143a04d05:
    _Src_00 = (param_1->ManifoldPoints).AllocatorInstance.SecondaryData;
    piVar1 = &(this->ManifoldPoints).ArrayMax;
    iVar2 = (param_1->ManifoldPoints).ArrayNum;
    if (_Src_00 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
      _Src_00 = (ForElementType<Chaos::FManifoldPoint>)&param_1->ManifoldPoints;
    }
    (this->ManifoldPoints).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FManifoldPoint>_>
                (0x6c,4,iVar2,*piVar1,&(this->ManifoldPoints).AllocatorInstance,iVar2,piVar1);
      _Dst_00 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
      if (iVar2 == 0) goto LAB_143a04d8c;
      if (_Dst_00 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
        _Dst_00 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
      }
      memcpy((void *)_Dst_00,(void *)_Src_00,(longlong)iVar2 * 0x6c);
    }
  }
  _Src_01 = (param_1->ManifoldPointResults).AllocatorInstance.SecondaryData;
  piVar1 = &(this->ManifoldPointResults).ArrayMax;
  iVar2 = (param_1->ManifoldPointResults).ArrayNum;
  if (_Src_01 == (ForElementType<Chaos::FManifoldPointResult>)0x0) {
    _Src_01 = (ForElementType<Chaos::FManifoldPointResult>)&param_1->ManifoldPointResults;
  }
  (this->ManifoldPointResults).ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FManifoldPointResult>_>
              (0x1c,4,iVar2,*piVar1,&(this->ManifoldPointResults).AllocatorInstance,iVar2,piVar1);
    _Dst_01 = (this->ManifoldPointResults).AllocatorInstance.SecondaryData;
    if (iVar2 != 0) {
      if (_Dst_01 == (ForElementType<Chaos::FManifoldPointResult>)0x0) {
        _Dst_01 = (ForElementType<Chaos::FManifoldPointResult>)&this->ManifoldPointResults;
      }
      memcpy((void *)_Dst_01,(void *)_Src_01,(longlong)iVar2 * 0x1c);
    }
  }
LAB_143a04e16:
  this->MinInitialPhi = param_1->MinInitialPhi;
  this->InitialOverlapDepenetrationVelocity = param_1->InitialOverlapDepenetrationVelocity;
  this->CCDTimeOfImpact = param_1->CCDTimeOfImpact;
  this->SolverBodies[0] = param_1->SolverBodies[0];
  this->SolverBodies[1] = param_1->SolverBodies[1];
  this->CCDEnablePenetration = param_1->CCDEnablePenetration;
  this->CCDTargetPenetration = param_1->CCDTargetPenetration;
  return this;
}

// Activate @ 143a06450

void __thiscall Chaos::FPBDCollisionConstraint::Activate(FPBDCollisionConstraint *this)

{
  (this->Flags).Bits = (this->Flags).Bits & 0xfffd | 1;
  AssignSavedManifoldPoints(this);
  UpdateMaterialProperties(this);
  if (((this->Flags).Bits >> 0xb & 1) != 0) {
    (this->Flags).Bits = (this->Flags).Bits & 0xefff;
    UpdateMaterialProperties(this);
    (this->Flags).Bits =
         (ushort)((this->BoundsTestFlags).Bits >> 5 & 1) << 8 | (this->Flags).Bits & 0xf6ff;
  }
  *(undefined8 *)&this->AccumulatedImpulse = 0;
  *(undefined4 *)&(this->AccumulatedImpulse).field_0x8 = 0;
  return;
}

// AddIncrementalManifoldContact @ 143a07ba0

void __thiscall
Chaos::FPBDCollisionConstraint::AddIncrementalManifoldContact
          (FPBDCollisionConstraint *this,TContactPoint<double> *param_1)

{
  TArray<Chaos::FManifoldPoint,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ForElementType<Chaos::FManifoldPoint> FVar10;
  ForElementType<Chaos::FManifoldPoint> FVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  double local_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  int local_120;
  EContactPointType local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  int local_f0;
  EContactPointType local_ec;
  longlong local_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  int local_88;
  EContactPointType local_84;
  
  pTVar1 = &this->ManifoldPoints;
  piVar2 = &(this->ManifoldPoints).ArrayNum;
  iVar4 = *piVar2;
  if ((*(byte *)&this->Flags & 4) != 0) {
    uVar12 = 0;
    uVar8 = 0xffffffff;
    if (0 < iVar4) {
      lVar14 = 0;
      lVar13 = 0;
      local_e8 = (longlong)iVar4;
      do {
        local_180 = 0.0;
        uVar8 = 0;
        if ((int)uVar12 < *piVar2) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar11 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<Chaos::FManifoldPoint>)pTVar1;
        if (FVar11 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
          FVar10 = FVar11;
        }
        local_88 = *(int *)(lVar13 + 0x28 + (longlong)FVar10);
        local_d8 = (double)*(float *)(lVar13 + (longlong)FVar10);
        local_84 = *(EContactPointType *)(lVar13 + 0x2c + (longlong)FVar10);
        local_d0 = (double)*(float *)(lVar13 + 4 + (longlong)FVar10);
        local_c8 = (double)*(float *)(lVar13 + 8 + (longlong)FVar10);
        local_c0 = (double)*(float *)(lVar13 + 0xc + (longlong)FVar10);
        local_b8 = (double)*(float *)(lVar13 + 0x10 + (longlong)FVar10);
        local_b0 = (double)*(float *)(lVar13 + 0x14 + (longlong)FVar10);
        local_a8 = (double)*(float *)(lVar13 + 0x18 + (longlong)FVar10);
        local_a0 = (double)*(float *)(lVar13 + 0x1c + (longlong)FVar10);
        local_98 = (double)*(float *)(lVar13 + 0x20 + (longlong)FVar10);
        local_90 = (double)*(float *)(lVar13 + 0x24 + (longlong)FVar10);
        bVar7 = AreMatchingContactPoints(this,param_1,(TContactPoint<double> *)&local_d8,&local_180)
        ;
        if ((bVar7) && (uVar8 = uVar12, 0.0 < local_180)) break;
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x6c;
        uVar8 = 0xffffffff;
      } while (lVar14 < local_e8);
    }
    iStack_150 = param_1->FaceIndex;
    local_11c = param_1->ContactType;
    uVar12 = *piVar2;
    local_178 = (float)*(double *)param_1->ShapeContactPoints;
    fStack_174 = (float)*(double *)&param_1->ShapeContactPoints[0].field_0x8;
    fStack_170 = (float)*(double *)&param_1->ShapeContactPoints[0].field_0x10;
    fStack_16c = (float)*(double *)(param_1->ShapeContactPoints + 1);
    local_168 = (float)*(double *)&param_1->ShapeContactPoints[1].field_0x8;
    fStack_164 = (float)*(double *)&param_1->ShapeContactPoints[1].field_0x10;
    fStack_160 = (float)*(double *)&param_1->ShapeContactNormal;
    fStack_15c = (float)*(double *)&(param_1->ShapeContactNormal).field_0x8;
    local_158 = (float)*(double *)&(param_1->ShapeContactNormal).field_0x10;
    fStack_154 = (float)param_1->Phi;
    if ((int)uVar8 < 0) {
      piVar3 = &(this->ManifoldPoints).ArrayMax;
      uVar8 = uVar12;
      local_148 = local_178;
      local_144 = fStack_174;
      local_140 = fStack_170;
      local_13c = fStack_16c;
      local_138 = local_168;
      local_134 = fStack_164;
      local_130 = fStack_160;
      local_12c = fStack_15c;
      local_128 = local_158;
      local_124 = fStack_154;
      local_120 = iStack_150;
      if (uVar12 == *piVar3) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FManifoldPoint>_>
                          (0x46c,&pTVar1->AllocatorInstance,piVar3);
      }
      *piVar2 = uVar8 + 1;
      InitManifoldPoint(this,uVar8,(TContactPoint<float> *)&local_148);
    }
    else {
      uVar6 = 0;
      if ((int)uVar8 < (int)uVar12) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      uStack_14c = CONCAT31(uStack_14c._1_3_,local_11c);
      if ((uVar6 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar11 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
        FVar11 = (ForElementType<Chaos::FManifoldPoint>)pTVar1;
      }
      lVar13 = (longlong)(int)uVar8 * 0x6c;
      *(undefined8 *)((longlong)FVar11 + lVar13) = CONCAT44(fStack_174,local_178);
      ((undefined8 *)((longlong)FVar11 + lVar13))[1] = CONCAT44(fStack_16c,fStack_170);
      *(ulonglong *)((uchar *)((longlong)FVar11 + 0x10) + lVar13) = CONCAT44(fStack_164,local_168);
      *(ulonglong *)((uchar *)((longlong)FVar11 + 0x10) + lVar13 + 8) =
           CONCAT44(fStack_15c,fStack_160);
      *(ulonglong *)((uchar *)((longlong)FVar11 + 0x20) + lVar13) = CONCAT44(fStack_154,local_158);
      *(ulonglong *)((uchar *)((longlong)FVar11 + 0x20) + lVar13 + 8) =
           CONCAT44(uStack_14c,iStack_150);
    }
    this->ClosestManifoldPointIndex = uVar8;
    return;
  }
  if (iVar4 < 1) {
    iVar9 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FManifoldPoint>_>
                      (0x6c,4,1 - iVar4,&pTVar1->AllocatorInstance,piVar2,
                       &(this->ManifoldPoints).ArrayMax);
    FVar11 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
      FVar11 = (ForElementType<Chaos::FManifoldPoint>)pTVar1;
    }
    DefaultConstructItems<Chaos::FManifoldPoint,int>
              ((void *)((longlong)FVar11 + (longlong)iVar9 * 0x6c),1 - iVar4);
  }
  else if (1 < iVar4) {
    uVar8 = iVar4 - 1;
    if ((int)uVar8 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else if (uVar8 == 0) goto LAB_143a0803b;
    FVar11 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
      FVar11 = (ForElementType<Chaos::FManifoldPoint>)pTVar1;
    }
    if (~uVar8 + *piVar2 != 0) {
      memmove((uchar *)((longlong)FVar11 + 0x6c),
              (uchar *)((longlong)FVar11 + 0x6c) + (longlong)(int)uVar8 * 0x6c,
              (longlong)(int)(~uVar8 + *piVar2) * 0x6c);
    }
    *piVar2 = *piVar2 - uVar8;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FManifoldPoint>_>
              (0x6c,4,&pTVar1->AllocatorInstance,*piVar2,&(this->ManifoldPoints).ArrayMax);
  }
LAB_143a0803b:
  local_f0 = param_1->FaceIndex;
  local_118 = (float)*(double *)param_1->ShapeContactPoints;
  local_ec = param_1->ContactType;
  local_114 = (float)*(double *)&param_1->ShapeContactPoints[0].field_0x8;
  local_110 = (float)*(double *)&param_1->ShapeContactPoints[0].field_0x10;
  local_10c = (float)*(double *)(param_1->ShapeContactPoints + 1);
  local_108 = (float)*(double *)&param_1->ShapeContactPoints[1].field_0x8;
  local_104 = (float)*(double *)&param_1->ShapeContactPoints[1].field_0x10;
  local_100 = (float)*(double *)&param_1->ShapeContactNormal;
  local_fc = (float)*(double *)&(param_1->ShapeContactNormal).field_0x8;
  local_f8 = (float)*(double *)&(param_1->ShapeContactNormal).field_0x10;
  local_f4 = (float)param_1->Phi;
  InitManifoldPoint(this,0,(TContactPoint<float> *)&local_118);
  this->ClosestManifoldPointIndex = 0;
  return;
}

// AreMatchingContactPoints @ 143a09660

bool __thiscall
Chaos::FPBDCollisionConstraint::AreMatchingContactPoints
          (FPBDCollisionConstraint *this,TContactPoint<double> *param_1,
          TContactPoint<double> *param_2,double *param_3)

{
  FImplicitObject *pFVar1;
  double *pdVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 local_58 [64];
  
  lVar4 = 0;
  pTVar3 = this->Particle[0];
  *param_3 = 0.0;
  pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(pTVar3);
  if ((pFVar1->bHasBoundingBox == false) ||
     (pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(this->Particle[1]),
     pFVar1->bHasBoundingBox == false)) {
    pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(this->Particle[0]);
    if (pFVar1->bHasBoundingBox == false) {
      pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(this->Particle[1]);
      if (pFVar1->bHasBoundingBox == false) {
        return false;
      }
      pTVar3 = this->Particle[1];
    }
    else {
      pTVar3 = this->Particle[0];
    }
    pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(pTVar3);
    pdVar2 = (double *)(**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,local_58);
    dVar8 = pdVar2[4] - pdVar2[1];
    dVar7 = pdVar2[3] - *pdVar2;
    dVar6 = pdVar2[5] - pdVar2[2];
    if (((dVar7 <= dVar8) || (dVar7 <= dVar6)) && (dVar7 = dVar6, dVar6 <= dVar8)) {
      dVar7 = dVar8;
    }
    dVar6 = (double)Chaos_Manifold_MatchPositionTolerance;
  }
  else {
    pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(this->Particle[0]);
    pdVar2 = (double *)(**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,local_58);
    dVar8 = pdVar2[4] - pdVar2[1];
    dVar7 = pdVar2[3] - *pdVar2;
    dVar6 = pdVar2[5] - pdVar2[2];
    if (((dVar7 <= dVar8) || (dVar7 <= dVar6)) && (dVar7 = dVar6, dVar6 <= dVar8)) {
      dVar7 = dVar8;
    }
    pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetGeometry(this->Particle[1]);
    pdVar2 = (double *)(**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,local_58);
    dVar9 = pdVar2[4] - pdVar2[1];
    dVar6 = pdVar2[3] - *pdVar2;
    dVar8 = pdVar2[5] - pdVar2[2];
    if (((dVar6 <= dVar9) || (dVar6 <= dVar8)) && (dVar6 = dVar8, dVar8 <= dVar9)) {
      dVar6 = dVar9;
    }
    if (dVar7 <= dVar6) {
      dVar6 = dVar7;
    }
    dVar7 = (double)Chaos_Manifold_MatchPositionTolerance;
  }
  dVar6 = dVar6 * dVar7;
  if ((__real_3ff0000000000000 - (double)Chaos_Manifold_MatchNormalTolerance <=
       *(double *)&(param_1->ShapeContactNormal).field_0x8 *
       *(double *)&(param_2->ShapeContactNormal).field_0x8 +
       *(double *)&param_1->ShapeContactNormal * *(double *)&param_2->ShapeContactNormal +
       *(double *)&(param_1->ShapeContactNormal).field_0x10 *
       *(double *)&(param_2->ShapeContactNormal).field_0x10) && (0.0 < dVar6)) {
    pdVar2 = (double *)&param_2->ShapeContactPoints[0].field_0x10;
    lVar5 = (longlong)param_1 - (longlong)param_2;
    do {
      dVar9 = *(double *)((longlong)pdVar2 + lVar5 + -0x10) - pdVar2[-2];
      dVar7 = *(double *)((longlong)pdVar2 + lVar5 + -8) - pdVar2[-1];
      dVar8 = *(double *)((longlong)pdVar2 + lVar5) - *pdVar2;
      dVar7 = dVar9 * dVar9 + dVar7 * dVar7 + dVar8 * dVar8;
      if (dVar7 < dVar6 * dVar6) {
        dVar7 = __real_3ff0000000000000 - dVar7 / (dVar6 * dVar6);
        if (__real_3ff0000000000000 <= dVar7) {
          dVar7 = __real_3ff0000000000000;
        }
        if (dVar7 <= 0.0) {
          dVar7 = 0.0;
        }
        *param_3 = dVar7;
        return true;
      }
      lVar4 = lVar4 + 1;
      pdVar2 = pdVar2 + 3;
    } while (lVar4 < 2);
  }
  return false;
}

// AssignSavedManifoldPoints @ 143a09940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FPBDCollisionConstraint::AssignSavedManifoldPoints(FPBDCollisionConstraint *this)

{
  TArray<Chaos::FManifoldPoint,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  ForElementType<Chaos::FManifoldPoint> FVar6;
  ForElementType<Chaos::FSavedManifoldPoint> FVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ForElementType<int> FVar12;
  ForElementType<Chaos::FSavedManifoldPoint> FVar13;
  ForElementType<Chaos::FManifoldPoint> FVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ForElementType<Chaos::FSavedManifoldPoint> FVar20;
  FPBDCollisionConstraint *this_00;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  int local_80 [2];
  longlong local_78;
  FPBDCollisionConstraint *local_70;
  longlong local_68;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 4;
  local_80[0] = 0;
  local_70 = this;
  if (!bChaos_Collision_SimpleAssignContact) {
    TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
              (&local_60,(this->SavedManifoldPoints).ArrayNum,Default);
    lVar17 = (longlong)(this->SavedManifoldPoints).ArrayNum;
    uVar15 = 0;
    if (0 < lVar17) {
      lVar18 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar15 < local_60.ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if (uVar10 == 0) {
          local_98 = (longlong)(int)uVar15;
          local_90 = (longlong)local_60.ArrayNum;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        FVar12 = (ForElementType<int>)&local_60;
        if (local_60.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar12 = local_60.AllocatorInstance.SecondaryData;
        }
        *(uint *)((longlong)FVar12 + lVar18 * 4) = uVar15;
        uVar15 = uVar15 + 1;
        lVar18 = lVar18 + 1;
      } while (lVar18 < lVar17);
    }
  }
  local_68 = (longlong)(this->ManifoldPoints).ArrayNum;
  uVar15 = 0;
  local_80[0] = local_60.ArrayNum;
  if (0 < local_68) {
    pTVar1 = &this->ManifoldPoints;
    lVar18 = 0;
    lVar17 = 0;
    this_00 = this;
    do {
      iVar5 = (this->ManifoldPoints).ArrayNum;
      uVar16 = ~uVar15 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar15 < iVar5) {
        uVar10 = uVar16;
      }
      if (uVar10 == 0) {
        local_98 = (longlong)(int)uVar15;
        local_90 = (longlong)iVar5;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      FVar6 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<Chaos::FManifoldPoint>)pTVar1;
      if (FVar6 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
        FVar14 = FVar6;
      }
      pbVar2 = (byte *)(lVar17 + 0x30 + (longlong)FVar14);
      *pbVar2 = *pbVar2 | 0x10;
      if (bChaos_Collision_SimpleAssignContact == false) {
        FVar12 = (ForElementType<int>)&local_60;
        if (local_60.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar12 = local_60.AllocatorInstance.SecondaryData;
        }
        uVar10 = FindSavedManifoldPoint(this_00,uVar15,(int *)FVar12,local_80);
      }
      else {
        uVar10 = FindSimpleSavedManifoldPoint(this_00,uVar15);
      }
      if (uVar10 != 0xffffffff) {
        iVar5 = (this->ManifoldPoints).ArrayNum;
        uVar11 = 0;
        if ((int)uVar15 < iVar5) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (local_98 = lVar18, local_90 = (longlong)iVar5,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar6 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<Chaos::FManifoldPoint>)pTVar1;
        if (FVar6 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
          FVar14 = FVar6;
        }
        FVar20 = (ForElementType<Chaos::FSavedManifoldPoint>)&this_00->SavedManifoldPoints;
        uVar19 = ~uVar10 >> 0x1f;
        pbVar2 = (byte *)(lVar17 + 0x30 + (longlong)FVar14);
        *pbVar2 = *pbVar2 | 8;
        iVar5 = (this_00->SavedManifoldPoints).ArrayNum;
        uVar11 = 0;
        if ((int)uVar10 < iVar5) {
          uVar11 = uVar19;
        }
        if (uVar11 == 0) {
          local_98 = (longlong)(int)uVar10;
          local_90 = (longlong)iVar5;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        FVar7 = (this_00->SavedManifoldPoints).AllocatorInstance.SecondaryData;
        FVar13 = FVar20;
        if (FVar7 != (ForElementType<Chaos::FSavedManifoldPoint>)0x0) {
          FVar13 = FVar7;
        }
        local_78 = (longlong)(int)uVar10 * 0x1c;
        uVar4 = *(undefined8 *)(local_78 + (longlong)FVar13);
        local_88 = *(undefined4 *)(local_78 + 8 + (longlong)FVar13);
        iVar5 = (this->ManifoldPoints).ArrayNum;
        uVar11 = 0;
        if ((int)uVar15 < iVar5) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (local_98 = lVar18, local_90 = (longlong)iVar5,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar6 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<Chaos::FManifoldPoint>)pTVar1;
        if (FVar6 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
          FVar14 = FVar6;
        }
        *(undefined8 *)(lVar17 + 0x3c + (longlong)FVar14) = uVar4;
        *(undefined4 *)(lVar17 + 0x44 + (longlong)FVar14) = local_88;
        iVar5 = (this_00->SavedManifoldPoints).ArrayNum;
        uVar11 = 0;
        if ((int)uVar10 < iVar5) {
          uVar11 = uVar19;
        }
        if ((uVar11 == 0) &&
           (local_98 = (longlong)(int)uVar10, local_90 = (longlong)iVar5,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar7 = (this_00->SavedManifoldPoints).AllocatorInstance.SecondaryData;
        FVar13 = FVar20;
        if (FVar7 != (ForElementType<Chaos::FSavedManifoldPoint>)0x0) {
          FVar13 = FVar7;
        }
        uVar4 = *(undefined8 *)(local_78 + 0xc + (longlong)FVar13);
        local_88 = *(undefined4 *)(local_78 + 0x14 + (longlong)FVar13);
        iVar5 = (this->ManifoldPoints).ArrayNum;
        uVar11 = 0;
        if ((int)uVar15 < iVar5) {
          uVar11 = uVar16;
        }
        if (uVar11 == 0) {
          local_98 = (longlong)(int)uVar15;
          local_90 = (longlong)iVar5;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        FVar6 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<Chaos::FManifoldPoint>)pTVar1;
        if (FVar6 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
          FVar14 = FVar6;
        }
        *(undefined8 *)(lVar17 + 0x48 + (longlong)FVar14) = uVar4;
        *(undefined4 *)(lVar17 + 0x50 + (longlong)FVar14) = local_88;
        iVar5 = (this_00->SavedManifoldPoints).ArrayNum;
        uVar11 = 0;
        if ((int)uVar10 < iVar5) {
          uVar11 = uVar19;
        }
        if (uVar11 == 0) {
          local_98 = (longlong)(int)uVar10;
          local_90 = (longlong)iVar5;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        FVar7 = (this_00->SavedManifoldPoints).AllocatorInstance.SecondaryData;
        iVar5 = (this->ManifoldPoints).ArrayNum;
        if (FVar7 != (ForElementType<Chaos::FSavedManifoldPoint>)0x0) {
          FVar20 = FVar7;
        }
        uVar3 = *(undefined4 *)(local_78 + 0x18 + (longlong)FVar20);
        uVar10 = 0;
        if ((int)uVar15 < iVar5) {
          uVar10 = uVar16;
        }
        if (uVar10 == 0) {
          local_98 = (longlong)(int)uVar15;
          local_90 = (longlong)iVar5;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        FVar6 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<Chaos::FManifoldPoint>)pTVar1;
        if (FVar6 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
          FVar14 = FVar6;
        }
        *(undefined4 *)(lVar17 + 0x38 + (longlong)FVar14) = uVar3;
        iVar5 = (this->ManifoldPoints).ArrayNum;
        uVar10 = 0;
        if ((int)uVar15 < iVar5) {
          uVar10 = uVar16;
        }
        if (uVar10 == 0) {
          local_98 = (longlong)(int)uVar15;
          local_90 = (longlong)iVar5;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        FVar6 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<Chaos::FManifoldPoint>)pTVar1;
        if (FVar6 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
          FVar14 = FVar6;
        }
        pbVar2 = (byte *)(lVar17 + 0x30 + (longlong)FVar14);
        *pbVar2 = *pbVar2 & 0xef;
        this_00 = local_70;
      }
      uVar15 = uVar15 + 1;
      lVar18 = lVar18 + 1;
      lVar17 = lVar17 + 0x6c;
    } while (lVar18 < local_68);
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  return;
}

// CalculateSavedManifoldPointDistanceSq @ 143a0a090

float __thiscall
Chaos::FPBDCollisionConstraint::CalculateSavedManifoldPointDistanceSq
          (FPBDCollisionConstraint *this,FSavedManifoldPoint *param_1,FManifoldPoint *param_2)

{
  byte bVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *(float *)&(param_2->ContactPoint).ShapeContactPoints[0].field_0x8 -
          *(float *)&param_1->ShapeContactPoints[0].field_0x8;
  fVar6 = *(float *)&(param_2->ContactPoint).ShapeContactPoints[0].field_0x4 -
          *(float *)&param_1->ShapeContactPoints[0].field_0x4;
  fVar3 = *(float *)(param_2->ContactPoint).ShapeContactPoints -
          *(float *)param_1->ShapeContactPoints;
  fVar7 = *(float *)&(param_2->ContactPoint).ShapeContactPoints[1].field_0x8 -
          *(float *)&param_1->ShapeContactPoints[1].field_0x8;
  fVar8 = *(float *)&(param_2->ContactPoint).ShapeContactPoints[1].field_0x4 -
          *(float *)&param_1->ShapeContactPoints[1].field_0x4;
  fVar4 = *(float *)((param_2->ContactPoint).ShapeContactPoints + 1) -
          *(float *)(param_1->ShapeContactPoints + 1);
  uVar2 = (this->Flags).Bits >> 7;
  bVar1 = (byte)(this->Flags).Bits >> 6 & 1;
  if ((bVar1 != 0) && ((uVar2 & 1) == 0)) {
    return fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5;
  }
  if (((uVar2 & 1) != 0) && (bVar1 == 0)) {
    return fVar4 * fVar4 + fVar8 * fVar8 + fVar7 * fVar7;
  }
  fVar3 = fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5;
  fVar4 = fVar4 * fVar4 + fVar8 * fVar8 + fVar7 * fVar7;
  if (fVar4 <= fVar3) {
    fVar3 = fVar4;
  }
  return fVar3;
}

// CalculateWorldContactLocation @ 143a0a160

TVector<double,3> * __thiscall
Chaos::FPBDCollisionConstraint::CalculateWorldContactLocation
          (FPBDCollisionConstraint *this,TVector<double,3> *__return_storage_ptr__)

{
  double dVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  TVector<double,3> *pTVar15;
  uint uVar16;
  longlong lVar17;
  ForElementType<Chaos::FManifoldPoint> FVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  uVar2 = this->ClosestManifoldPointIndex;
  if (uVar2 == 0xffffffff) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    uVar16 = 0;
    if ((int)uVar2 < (this->ManifoldPoints).ArrayNum) {
      uVar16 = ~uVar2 >> 0x1f;
    }
    if (uVar16 == 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TVector<double,3> *)(*pcVar3)();
        return pTVar15;
      }
    }
    auVar36 = *(undefined1 (*) [16])&this->ShapeWorldTransforms[0].field_0x10;
    FVar18 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
    dVar12 = *(double *)&this->ShapeWorldTransforms[0].field_0x18;
    if (FVar18 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
      FVar18 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
    }
    lVar17 = (longlong)(int)uVar2 * 0x6c;
    uVar2 = this->ClosestManifoldPointIndex;
    uVar16 = 0;
    if ((int)uVar2 < (this->ManifoldPoints).ArrayNum) {
      uVar16 = ~uVar2 >> 0x1f;
    }
    dVar19 = (double)*(float *)((uchar *)((longlong)FVar18 + 8) + lVar17);
    dVar25 = (double)*(float *)((uchar *)((longlong)FVar18 + 4) + lVar17);
    auVar20 = *(undefined1 (*) [16])this->ShapeWorldTransforms;
    auVar33 = blendpd(auVar20,auVar36,2);
    dVar4 = (double)*(float *)((longlong)FVar18 + lVar17);
    uVar40 = (undefined4)((ulonglong)dVar25 >> 0x20);
    auVar30 = *(undefined1 (*) [16])this->ShapeWorldTransforms;
    auVar41._8_4_ = SUB84(dVar25,0);
    auVar41._0_8_ = dVar4;
    auVar41._12_4_ = uVar40;
    dVar27 = auVar36._0_8_;
    auVar42._0_8_ = auVar41._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar4;
    auVar42._8_8_ = dVar19 * auVar20._8_8_ - dVar27 * dVar25;
    auVar29._8_4_ = SUB84(dVar25,0);
    auVar29._0_8_ = dVar4;
    auVar29._12_4_ = uVar40;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = dVar19;
    auVar20 = blendpd(auVar29,auVar20,2);
    auVar21._0_8_ = auVar20._0_8_ * dVar27 - auVar33._0_8_ * dVar19;
    auVar21._8_8_ = auVar20._8_8_ * auVar36._8_8_ - auVar33._8_8_ * 0.0;
    auVar20 = blendpd(auVar42,auVar21,2);
    dVar10 = auVar42._8_8_ + auVar42._8_8_;
    dVar11 = auVar21._0_8_ + auVar21._0_8_;
    uVar40 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar43._0_8_ = auVar20._0_8_ + auVar20._0_8_;
    auVar43._8_8_ = auVar20._8_8_ + auVar20._8_8_;
    auVar34._8_4_ = SUB84(dVar11,0);
    auVar34._0_8_ = dVar10;
    auVar34._12_4_ = uVar40;
    auVar37._8_4_ = SUB84(dVar11,0);
    auVar37._0_8_ = dVar10;
    auVar37._12_4_ = uVar40;
    auVar29 = blendpd(auVar37,auVar43,2);
    auVar35._0_8_ = auVar34._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar10;
    auVar35._8_8_ = auVar43._0_8_ * auVar30._8_8_ - dVar27 * dVar11;
    auVar33._8_4_ = SUB84(auVar35._8_8_,0);
    auVar33._0_8_ = auVar35._0_8_;
    auVar33._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
    auVar20 = blendpd(auVar30,auVar36,2);
    auVar30._0_8_ = auVar29._0_8_ * dVar27 - auVar20._0_8_ * auVar43._0_8_;
    auVar30._8_8_ = auVar29._8_8_ * auVar36._8_8_ - auVar20._8_8_ * auVar43._8_8_;
    auVar36 = blendpd(auVar35,auVar30,2);
    dVar27 = *(double *)&this->ShapeWorldTransforms[0].field_0x20;
    dVar1 = *(double *)&this->ShapeWorldTransforms[0].field_0x28;
    dVar44 = *(double *)&this->ShapeWorldTransforms[0].field_0x30;
    if (uVar16 == 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TVector<double,3> *)(*pcVar3)();
        return pTVar15;
      }
    }
    auVar20 = *(undefined1 (*) [16])&this->ShapeWorldTransforms[1].field_0x10;
    FVar18 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
    dVar13 = *(double *)&this->ShapeWorldTransforms[1].field_0x18;
    if (FVar18 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
      FVar18 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
    }
    lVar17 = (longlong)(int)uVar2 * 0x6c;
    dVar9 = (double)*(float *)((uchar *)((longlong)FVar18 + 0x14) + lVar17);
    auVar29 = *(undefined1 (*) [16])(this->ShapeWorldTransforms + 1);
    auVar37 = blendpd(auVar29,auVar20,2);
    dVar26 = (double)*(float *)((uchar *)((longlong)FVar18 + 0x10) + lVar17);
    dVar5 = (double)*(float *)((uchar *)((longlong)FVar18 + 0xc) + lVar17);
    uVar40 = (undefined4)((ulonglong)dVar26 >> 0x20);
    auVar21 = *(undefined1 (*) [16])(this->ShapeWorldTransforms + 1);
    auVar45._8_4_ = SUB84(dVar26,0);
    auVar45._0_8_ = dVar5;
    auVar45._12_4_ = uVar40;
    dVar28 = auVar20._0_8_;
    auVar46._0_8_ = auVar45._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar5;
    auVar46._8_8_ = dVar9 * auVar29._8_8_ - dVar28 * dVar26;
    auVar22._8_4_ = SUB84(dVar26,0);
    auVar22._0_8_ = dVar5;
    auVar22._12_4_ = uVar40;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar9;
    auVar29 = blendpd(auVar22,auVar8,2);
    auVar23._0_8_ = auVar29._0_8_ * dVar28 - auVar37._0_8_ * dVar9;
    auVar23._8_8_ = auVar29._8_8_ * auVar20._8_8_ - auVar37._8_8_ * 0.0;
    auVar29 = blendpd(auVar46,auVar23,2);
    dVar6 = auVar46._8_8_ + auVar46._8_8_;
    dVar7 = auVar23._0_8_ + auVar23._0_8_;
    uVar40 = (undefined4)((ulonglong)dVar7 >> 0x20);
    auVar47._0_8_ = auVar29._0_8_ + auVar29._0_8_;
    auVar47._8_8_ = auVar29._8_8_ + auVar29._8_8_;
    auVar38._8_4_ = SUB84(dVar7,0);
    auVar38._0_8_ = dVar6;
    auVar38._12_4_ = uVar40;
    auVar31._8_4_ = SUB84(dVar7,0);
    auVar31._0_8_ = dVar6;
    auVar31._12_4_ = uVar40;
    auVar37 = blendpd(auVar31,auVar47,2);
    auVar39._0_8_ = auVar38._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar6;
    auVar39._8_8_ = auVar47._0_8_ * auVar21._8_8_ - dVar28 * dVar7;
    auVar29 = blendpd(auVar21,auVar20,2);
    auVar24._8_4_ = SUB84(auVar39._8_8_,0);
    auVar24._0_8_ = auVar39._0_8_;
    auVar24._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
    auVar32._0_8_ = auVar37._0_8_ * dVar28 - auVar29._0_8_ * auVar47._0_8_;
    auVar32._8_8_ = auVar37._8_8_ * auVar20._8_8_ - auVar29._8_8_ * auVar47._8_8_;
    auVar20 = blendpd(auVar39,auVar32,2);
    dVar1 = (dVar7 * dVar13 + dVar26 + auVar32._0_8_ +
             *(double *)&this->ShapeWorldTransforms[1].field_0x28 +
            dVar11 * dVar12 + dVar25 + auVar30._0_8_ + dVar1) * __real_3fe0000000000000;
    dVar44 = (auVar47._0_8_ * dVar13 + dVar9 + auVar20._0_8_ +
              *(double *)&this->ShapeWorldTransforms[1].field_0x30 +
             auVar43._0_8_ * dVar12 + dVar19 + auVar36._0_8_ + dVar44) * __real_3fe0000000000000;
    *(double *)__return_storage_ptr__ =
         (dVar6 * dVar13 + dVar5 + auVar24._8_8_ +
          *(double *)&this->ShapeWorldTransforms[1].field_0x20 +
         dVar10 * dVar12 + dVar4 + auVar33._8_8_ + dVar27) * __real_3fe0000000000000;
    *(double *)&__return_storage_ptr__->field_0x8 = dVar1;
    *(double *)&__return_storage_ptr__->field_0x10 = dVar44;
  }
  return __return_storage_ptr__;
}

// CalculateWorldContactNormal @ 143a0a560

TVector<double,3> * __thiscall
Chaos::FPBDCollisionConstraint::CalculateWorldContactNormal
          (FPBDCollisionConstraint *this,TVector<double,3> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  uint uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  TVector<double,3> *pTVar10;
  uint uVar11;
  longlong lVar12;
  ForElementType<Chaos::FManifoldPoint> FVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  uVar2 = this->ClosestManifoldPointIndex;
  if (uVar2 == 0xffffffff) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0x3ff0000000000000;
  }
  else {
    uVar11 = 0;
    if ((int)uVar2 < (this->ManifoldPoints).ArrayNum) {
      uVar11 = ~uVar2 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TVector<double,3> *)(*pcVar3)();
        return pTVar10;
      }
    }
    auVar1 = *(undefined1 (*) [16])&this->ShapeWorldTransforms[1].field_0x10;
    FVar13 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
    dVar8 = *(double *)&this->ShapeWorldTransforms[1].field_0x18;
    if (FVar13 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
      FVar13 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
    }
    lVar12 = (longlong)(int)uVar2 * 0x6c;
    dVar7 = (double)*(float *)((uchar *)((longlong)FVar13 + 0x20) + lVar12);
    auVar14 = *(undefined1 (*) [16])(this->ShapeWorldTransforms + 1);
    auVar21 = blendpd(auVar14,auVar1,2);
    dVar16 = (double)*(float *)((uchar *)((longlong)FVar13 + 0x1c) + lVar12);
    dVar6 = (double)*(float *)((uchar *)((longlong)FVar13 + 0x18) + lVar12);
    uVar24 = (undefined4)((ulonglong)dVar16 >> 0x20);
    auVar20 = *(undefined1 (*) [16])(this->ShapeWorldTransforms + 1);
    auVar25._8_4_ = SUB84(dVar16,0);
    auVar25._0_8_ = dVar6;
    auVar25._12_4_ = uVar24;
    dVar17 = auVar1._0_8_;
    auVar26._0_8_ = auVar25._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar6;
    auVar26._8_8_ = dVar7 * auVar14._8_8_ - dVar17 * dVar16;
    auVar19._8_4_ = SUB84(dVar16,0);
    auVar19._0_8_ = dVar6;
    auVar19._12_4_ = uVar24;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar7;
    auVar14 = blendpd(auVar19,auVar14,2);
    auVar15._0_8_ = auVar14._0_8_ * dVar17 - auVar21._0_8_ * dVar7;
    auVar15._8_8_ = auVar14._8_8_ * auVar1._8_8_ - auVar21._8_8_ * 0.0;
    auVar14 = blendpd(auVar26,auVar15,2);
    auVar27._0_8_ = auVar14._0_8_ + auVar14._0_8_;
    auVar27._8_8_ = auVar14._8_8_ + auVar14._8_8_;
    dVar4 = auVar26._8_8_ + auVar26._8_8_;
    dVar5 = auVar15._0_8_ + auVar15._0_8_;
    uVar24 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar22._8_4_ = SUB84(dVar5,0);
    auVar22._0_8_ = dVar4;
    auVar22._12_4_ = uVar24;
    auVar18._8_4_ = SUB84(dVar5,0);
    auVar18._0_8_ = dVar4;
    auVar18._12_4_ = uVar24;
    auVar19 = blendpd(auVar18,auVar27,2);
    auVar23._0_8_ = auVar22._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar4;
    auVar23._8_8_ = auVar27._0_8_ * auVar20._8_8_ - dVar17 * dVar5;
    auVar21._8_4_ = SUB84(auVar23._8_8_,0);
    auVar21._0_8_ = auVar23._0_8_;
    auVar21._12_4_ = (int)((ulonglong)auVar23._8_8_ >> 0x20);
    auVar14 = blendpd(auVar20,auVar1,2);
    auVar20._0_8_ = auVar19._0_8_ * dVar17 - auVar14._0_8_ * auVar27._0_8_;
    auVar20._8_8_ = auVar19._8_8_ * auVar1._8_8_ - auVar14._8_8_ * auVar27._8_8_;
    auVar14 = blendpd(auVar23,auVar20,2);
    dVar5 = dVar5 * dVar8 + dVar16 + auVar20._0_8_;
    auVar1._8_4_ = SUB84(dVar5,0);
    auVar1._0_8_ = dVar4 * dVar8 + dVar6 + auVar21._8_8_;
    auVar1._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])__return_storage_ptr__ = auVar1;
    *(double *)&__return_storage_ptr__->field_0x10 = auVar27._0_8_ * dVar8 + dVar7 + auVar14._0_8_;
  }
  return __return_storage_ptr__;
}

// CorrectManifoldPoints @ 143a0bbf0

void __thiscall Chaos::FPBDCollisionConstraint::CorrectManifoldPoints(FPBDCollisionConstraint *this)

{
  float *pfVar1;
  uchar *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ForElementType<Chaos::FManifoldPoint> FVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  ForElementType<Chaos::FManifoldPoint> FVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  uint uVar47;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar48;
  double dVar49;
  double dVar60;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar76;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  double dVar77;
  undefined1 auVar75 [16];
  double dVar78;
  double dVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  double dVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  double dVar99;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined4 uVar100;
  undefined4 uVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined4 uVar105;
  double dVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  double dVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined4 uStack_224;
  FGenericParticleHandleImp local_220;
  FGenericParticleHandleImp local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1e8;
  undefined1 local_1d8 [16];
  double local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  double local_178;
  undefined1 local_170 [16];
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  undefined1 local_140 [16];
  double local_130;
  undefined1 local_128 [16];
  double local_118;
  undefined1 local_110 [16];
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_e0 [16];
  double local_d0;
  
  local_220.MHandle = this->Particle[0];
  local_218.MHandle = this->Particle[1];
  dVar26 = FGenericParticleHandleImp::InvM(&local_220);
  dVar27 = FGenericParticleHandleImp::InvM(&local_218);
  if (dVar27 + dVar26 <= 0.0) {
    dVar27 = 0.0;
  }
  else {
    dVar27 = dVar27 / (dVar27 + dVar26);
  }
  uVar17 = 0;
  local_210 = __real_3ff0000000000000 - dVar27;
  if (0 < (this->ManifoldPoints).ArrayNum) {
    uVar19 = uVar17;
    do {
      uVar18 = (uint)uVar19;
      uVar15 = 0;
      if ((int)uVar18 < (this->ManifoldPoints).ArrayNum) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      auVar82 = *(undefined1 (*) [16])&this->ShapeWorldTransforms[0].field_0x10;
      dVar48 = auVar82._0_8_;
      FVar6 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
      dVar26 = *(double *)&this->ShapeWorldTransforms[0].field_0x18;
      FVar16 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
      if (FVar6 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
        FVar16 = FVar6;
      }
      local_178 = (double)*(float *)((uchar *)((longlong)FVar16 + 8) + uVar17);
      dVar78 = (double)*(float *)((uchar *)((longlong)FVar16 + 4) + uVar17);
      auVar30 = *(undefined1 (*) [16])this->ShapeWorldTransforms;
      auVar61 = blendpd(auVar30,auVar82,2);
      dVar79 = (double)*(float *)((longlong)FVar16 + uVar17);
      auVar72 = *(undefined1 (*) [16])this->ShapeWorldTransforms;
      uVar89 = SUB84(dVar78,0);
      uVar90 = (undefined4)((ulonglong)dVar78 >> 0x20);
      auVar102._8_4_ = uVar89;
      auVar102._0_8_ = dVar79;
      auVar102._12_4_ = uVar90;
      local_188._8_4_ = uVar89;
      local_188._0_8_ = dVar79;
      local_188._12_4_ = uVar90;
      auVar103._0_8_ = auVar102._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar79;
      auVar103._8_8_ = local_178 * auVar30._8_8_ - dVar48 * dVar78;
      auVar29._8_4_ = uVar89;
      auVar29._0_8_ = dVar79;
      auVar29._12_4_ = uVar90;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = local_178;
      auVar30 = blendpd(auVar29,auVar30,2);
      auVar31._0_8_ = auVar30._0_8_ * dVar48 - auVar61._0_8_ * local_178;
      auVar31._8_8_ = auVar30._8_8_ * auVar82._8_8_ - auVar61._8_8_ * 0.0;
      auVar30 = blendpd(auVar103,auVar31,2);
      dVar49 = auVar103._8_8_ + auVar103._8_8_;
      dVar60 = auVar31._0_8_ + auVar31._0_8_;
      uVar89 = (undefined4)((ulonglong)dVar60 >> 0x20);
      auVar104._0_8_ = auVar30._0_8_ + auVar30._0_8_;
      auVar104._8_8_ = auVar30._8_8_ + auVar30._8_8_;
      auVar80._8_4_ = SUB84(dVar60,0);
      auVar80._0_8_ = dVar49;
      auVar80._12_4_ = uVar89;
      auVar62._8_4_ = SUB84(dVar60,0);
      auVar62._0_8_ = dVar49;
      auVar62._12_4_ = uVar89;
      auVar61 = blendpd(auVar62,auVar104,2);
      auVar81._0_8_ = auVar80._8_8_ * auVar72._0_8_ - auVar72._8_8_ * dVar49;
      auVar81._8_8_ = auVar104._0_8_ * auVar72._8_8_ - dVar48 * dVar60;
      auVar32._8_4_ = SUB84(auVar81._8_8_,0);
      auVar32._0_8_ = auVar81._0_8_;
      auVar32._12_4_ = (int)((ulonglong)auVar81._8_8_ >> 0x20);
      auVar72 = blendpd(auVar72,auVar82,2);
      dVar76 = *(double *)&this->ShapeWorldTransforms[1].field_0x18;
      auVar30 = *(undefined1 (*) [16])&this->ShapeWorldTransforms[1].field_0x10;
      auVar63._0_8_ = auVar61._0_8_ * dVar48 - auVar72._0_8_ * auVar104._0_8_;
      auVar63._8_8_ = auVar61._8_8_ * auVar82._8_8_ - auVar72._8_8_ * auVar104._8_8_;
      auVar82 = blendpd(auVar81,auVar63,2);
      local_f8 = dVar49 * dVar26 + dVar79 + auVar32._8_8_ +
                 *(double *)&this->ShapeWorldTransforms[0].field_0x20;
      dVar48 = dVar60 * dVar26 + dVar78 + auVar63._0_8_ +
               *(double *)&this->ShapeWorldTransforms[0].field_0x28;
      uVar100 = SUB84(dVar48,0);
      uVar101 = (undefined4)((ulonglong)dVar48 >> 0x20);
      local_160 = (double)*(float *)((uchar *)((longlong)FVar16 + 0x14) + uVar17);
      local_118 = auVar104._0_8_ * dVar26 + local_178 + auVar82._0_8_ +
                  *(double *)&this->ShapeWorldTransforms[0].field_0x30;
      dVar78 = (double)*(float *)((uchar *)((longlong)FVar16 + 0x10) + uVar17);
      dVar26 = (double)*(float *)((uchar *)((longlong)FVar16 + 0xc) + uVar17);
      auVar82 = *(undefined1 (*) [16])(this->ShapeWorldTransforms + 1);
      uVar89 = SUB84(dVar78,0);
      uVar90 = (undefined4)((ulonglong)dVar78 >> 0x20);
      auVar107._8_4_ = uVar89;
      auVar107._0_8_ = dVar26;
      auVar107._12_4_ = uVar90;
      local_128._8_4_ = uVar100;
      local_128._0_8_ = local_f8;
      local_128._12_4_ = uVar101;
      local_170._8_4_ = uVar89;
      local_170._0_8_ = dVar26;
      local_170._12_4_ = uVar90;
      auVar72 = *(undefined1 (*) [16])(this->ShapeWorldTransforms + 1);
      dVar49 = auVar30._0_8_;
      dVar60 = auVar30._8_8_;
      auVar64 = blendpd(auVar82,auVar30,2);
      auVar108._0_8_ = auVar107._8_8_ * auVar82._0_8_ - auVar82._8_8_ * dVar26;
      auVar108._8_8_ = local_160 * auVar82._8_8_ - dVar49 * dVar78;
      auVar33._8_4_ = uVar89;
      auVar33._0_8_ = dVar26;
      auVar33._12_4_ = uVar90;
      auVar61._8_8_ = 0;
      auVar61._0_8_ = local_160;
      auVar82 = blendpd(auVar33,auVar61,2);
      auVar34._0_8_ = auVar82._0_8_ * dVar49 - auVar64._0_8_ * local_160;
      auVar34._8_8_ = auVar82._8_8_ * dVar60 - auVar64._8_8_ * 0.0;
      auVar82 = blendpd(auVar108,auVar34,2);
      dVar48 = auVar108._8_8_ + auVar108._8_8_;
      dVar79 = auVar34._0_8_ + auVar34._0_8_;
      uVar89 = (undefined4)((ulonglong)dVar79 >> 0x20);
      auVar109._0_8_ = auVar82._0_8_ + auVar82._0_8_;
      auVar109._8_8_ = auVar82._8_8_ + auVar82._8_8_;
      auVar83._8_4_ = SUB84(dVar79,0);
      auVar83._0_8_ = dVar48;
      auVar83._12_4_ = uVar89;
      auVar65._8_4_ = SUB84(dVar79,0);
      auVar65._0_8_ = dVar48;
      auVar65._12_4_ = uVar89;
      auVar82 = blendpd(auVar65,auVar109,2);
      auVar84._0_8_ = auVar83._8_8_ * auVar72._0_8_ - auVar72._8_8_ * dVar48;
      auVar84._8_8_ = auVar109._0_8_ * auVar72._8_8_ - dVar49 * dVar79;
      auVar35._8_4_ = SUB84(auVar84._8_8_,0);
      auVar35._0_8_ = auVar84._0_8_;
      auVar35._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
      auVar72 = blendpd(auVar72,auVar30,2);
      auVar66._0_8_ = auVar82._0_8_ * dVar49 - auVar72._0_8_ * auVar109._0_8_;
      auVar66._8_8_ = auVar82._8_8_ * dVar60 - auVar72._8_8_ * auVar109._8_8_;
      fVar3 = *(float *)((uchar *)((longlong)FVar16 + 0x18) + uVar17);
      auVar82 = blendpd(auVar84,auVar66,2);
      fVar4 = *(float *)((uchar *)((longlong)FVar16 + 0x1c) + uVar17);
      local_130 = auVar109._0_8_ * dVar76 + local_160 + auVar82._0_8_ +
                  *(double *)&this->ShapeWorldTransforms[1].field_0x30;
      fVar5 = *(float *)((uchar *)((longlong)FVar16 + 0x20) + uVar17);
      dVar10 = dVar48 * dVar76 + dVar26 + auVar35._8_8_ +
               *(double *)&this->ShapeWorldTransforms[1].field_0x20;
      dVar78 = dVar79 * dVar76 + dVar78 + auVar66._0_8_ +
               *(double *)&this->ShapeWorldTransforms[1].field_0x28;
      uVar105 = (undefined4)((ulonglong)dVar78 >> 0x20);
      local_1f8 = (double)fVar5;
      local_200 = (double)fVar4;
      auVar82 = *(undefined1 (*) [16])(this->ShapeWorldTransforms + 1);
      local_208 = (double)fVar3;
      auVar61 = blendpd(auVar82,auVar30,2);
      uVar89 = SUB84(local_200,0);
      uVar90 = (undefined4)((ulonglong)local_200 >> 0x20);
      auVar93._8_4_ = uVar89;
      auVar93._0_8_ = local_208;
      auVar93._12_4_ = uVar90;
      auVar72 = *(undefined1 (*) [16])(this->ShapeWorldTransforms + 1);
      local_140._8_4_ = SUB84(dVar78,0);
      local_140._0_8_ = dVar10;
      local_140._12_4_ = uVar105;
      auVar94._0_8_ = auVar93._8_8_ * auVar82._0_8_ - auVar82._8_8_ * local_208;
      auVar94._8_8_ = local_1f8 * auVar82._8_8_ - dVar49 * local_200;
      auVar36._8_4_ = uVar89;
      auVar36._0_8_ = local_208;
      auVar36._12_4_ = uVar90;
      auVar64._8_8_ = 0;
      auVar64._0_8_ = local_1f8;
      auVar82 = blendpd(auVar36,auVar64,2);
      local_158._8_4_ = uVar89;
      local_158._0_8_ = local_208;
      local_158._12_4_ = uVar90;
      auVar37._0_8_ = auVar82._0_8_ * dVar49 - auVar61._0_8_ * local_1f8;
      auVar37._8_8_ = auVar82._8_8_ * dVar60 - auVar61._8_8_ * 0.0;
      dVar26 = auVar94._8_8_ + auVar94._8_8_;
      dVar79 = auVar37._0_8_ + auVar37._0_8_;
      uVar90 = (undefined4)((ulonglong)dVar79 >> 0x20);
      auVar82 = blendpd(auVar94,auVar37,2);
      auVar95._0_8_ = auVar82._0_8_ + auVar82._0_8_;
      auVar95._8_8_ = auVar82._8_8_ + auVar82._8_8_;
      auVar85._8_4_ = SUB84(dVar79,0);
      auVar85._0_8_ = dVar26;
      auVar85._12_4_ = uVar90;
      uVar89 = *(undefined4 *)((uchar *)((longlong)FVar16 + 0x28) + uVar17);
      auVar50._8_4_ = SUB84(dVar79,0);
      auVar50._0_8_ = dVar26;
      auVar50._12_4_ = uVar90;
      auVar82 = blendpd(auVar50,auVar95,2);
      auVar86._0_8_ = auVar85._8_8_ * auVar72._0_8_ - auVar72._8_8_ * dVar26;
      auVar86._8_8_ = auVar95._0_8_ * auVar72._8_8_ - dVar49 * dVar79;
      auVar30 = blendpd(auVar72,auVar30,2);
      dVar76 = auVar30._8_8_ * auVar95._8_8_;
      auVar51._0_8_ = auVar82._0_8_ * dVar49 - auVar30._0_8_ * auVar95._0_8_;
      auVar51._8_8_ = auVar82._8_8_ * dVar60 - dVar76;
      auVar38._8_4_ = SUB84(auVar86._8_8_,0);
      auVar38._0_8_ = auVar86._0_8_;
      auVar38._12_4_ = (int)((ulonglong)auVar86._8_8_ >> 0x20);
      auVar82 = blendpd(auVar86,auVar51,2);
      local_100 = auVar95._0_8_ * dVar60 + local_1f8 + auVar82._0_8_;
      dVar48 = dVar26 * dVar60 + local_208 + auVar38._8_8_;
      dVar26 = dVar79 * dVar60 + local_200 + auVar51._0_8_;
      uVar90 = SUB84(dVar26,0);
      uVar91 = (undefined4)((ulonglong)dVar26 >> 0x20);
      auVar11._4_8_ = dVar76;
      auVar11._0_4_ = (int)((ulonglong)local_f8 >> 0x20);
      auVar73._0_8_ = auVar11._0_8_ << 0x20;
      auVar73._8_4_ = uVar100;
      auVar73._12_4_ = uVar101;
      auVar12._4_8_ = dVar60;
      auVar12._0_4_ = (int)((ulonglong)dVar48 >> 0x20);
      auVar67._0_8_ = auVar12._0_8_ << 0x20;
      auVar67._8_4_ = uVar90;
      auVar67._12_4_ = uVar91;
      dVar26 = dVar78 - auVar73._8_8_;
      local_110._8_4_ = uVar90;
      local_110._0_8_ = dVar48;
      local_110._12_4_ = uVar91;
      local_1e8 = (dVar10 - local_f8) * dVar48 + dVar26 * auVar67._8_8_ +
                  (local_130 - local_118) * local_100;
      dVar79 = (dVar10 - local_f8) - local_1e8 * dVar48;
      dVar26 = dVar26 - local_1e8 * auVar67._8_8_;
      dVar48 = (local_130 - local_118) - local_1e8 * local_100;
      local_f8 = dVar79 * dVar27 + local_f8;
      dStack_f0 = dVar26 * dVar27 + auVar73._8_8_;
      local_e8 = dVar48 * dVar27 + local_118;
      dVar10 = dVar10 - dVar79 * local_210;
      local_d0 = local_130 - dVar48 * local_210;
      dVar28 = local_e8 - *(double *)&this->ShapeWorldTransforms[0].field_0x30;
      dVar92 = local_f8 - *(double *)&this->ShapeWorldTransforms[0].field_0x20;
      dVar99 = dStack_f0 - *(double *)&this->ShapeWorldTransforms[0].field_0x28;
      local_198._8_4_ = SUB84(dVar78,0);
      local_198._0_8_ = dVar10;
      local_198._12_4_ = uVar105;
      dVar78 = dVar78 - dVar26 * local_210;
      auVar112._8_4_ = SUB84(dVar99,0);
      auVar112._0_8_ = dVar92;
      uVar91 = (undefined4)((ulonglong)dVar99 >> 0x20);
      auVar112._12_4_ = uVar91;
      dVar26 = *(double *)this->ShapeWorldTransforms *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar48 = *(double *)&this->ShapeWorldTransforms[0].field_0x8 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar90 = (undefined4)((ulonglong)dVar48 >> 0x20);
      auVar52._8_4_ = SUB84(dVar99,0);
      auVar52._0_8_ = dVar92;
      auVar52._12_4_ = uVar91;
      dVar79 = *(double *)&this->ShapeWorldTransforms[0].field_0x10 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar60 = *(double *)&this->ShapeWorldTransforms[0].field_0x18 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar28;
      auVar30 = blendpd(auVar52,auVar8,2);
      auVar74._8_4_ = SUB84(dVar48,0);
      auVar74._0_8_ = dVar26;
      auVar74._12_4_ = uVar90;
      dVar77 = auVar74._8_8_;
      auVar87._8_4_ = SUB84(dVar48,0);
      auVar87._0_8_ = dVar26;
      auVar87._12_4_ = uVar90;
      auVar82._8_4_ = SUB84(dVar60,0);
      auVar82._0_8_ = dVar79;
      auVar82._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
      auVar72 = blendpd(auVar87,auVar82,2);
      auVar39._8_4_ = SUB84(dVar79,0);
      auVar39._0_8_ = dVar77;
      auVar39._12_4_ = (int)((ulonglong)dVar79 >> 0x20);
      local_e0._8_4_ = SUB84(dVar78,0);
      local_e0._0_8_ = dVar10;
      local_e0._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
      dVar10 = dVar10 - *(double *)&this->ShapeWorldTransforms[1].field_0x20;
      dVar78 = dVar78 - *(double *)&this->ShapeWorldTransforms[1].field_0x28;
      uVar91 = SUB84(dVar78,0);
      uVar100 = (undefined4)((ulonglong)dVar78 >> 0x20);
      auVar113._0_8_ = auVar112._8_8_ * dVar26 - dVar77 * dVar92;
      auVar113._8_8_ = dVar28 * dVar48 - auVar39._8_8_ * dVar99;
      auVar110._8_4_ = SUB84(auVar113._8_8_,0);
      auVar110._0_8_ = auVar113._0_8_;
      auVar110._12_4_ = (int)((ulonglong)auVar113._8_8_ >> 0x20);
      auVar53._0_8_ = auVar30._0_8_ * dVar79 - auVar72._0_8_ * dVar28;
      auVar53._8_8_ = auVar30._8_8_ * dVar60 - auVar72._8_8_ * 0.0;
      auVar82 = blendpd(auVar113,auVar53,2);
      dVar106 = auVar110._8_8_ + auVar110._8_8_;
      dVar111 = auVar53._0_8_ + auVar53._0_8_;
      auVar114._0_8_ = auVar82._0_8_ + auVar82._0_8_;
      auVar114._8_8_ = auVar82._8_8_ + auVar82._8_8_;
      uVar90 = SUB84(dVar111,0);
      auVar68._8_4_ = uVar90;
      auVar68._0_8_ = dVar106;
      uVar101 = (undefined4)((ulonglong)dVar111 >> 0x20);
      auVar68._12_4_ = uVar101;
      auVar40._8_4_ = uVar90;
      auVar40._0_8_ = dVar106;
      auVar40._12_4_ = uVar101;
      auVar54._8_4_ = uVar90;
      auVar54._0_8_ = dVar106;
      auVar54._12_4_ = uVar101;
      auVar82 = blendpd(auVar54,auVar114,2);
      dVar49 = *(double *)(this->ShapeWorldTransforms + 1) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar76 = *(double *)&this->ShapeWorldTransforms[1].field_0x8 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar90 = (undefined4)((ulonglong)dVar76 >> 0x20);
      auVar69._0_8_ = auVar68._8_8_ * dVar26 - dVar106 * dVar77;
      auVar69._8_8_ = auVar114._0_8_ * dVar48 - auVar40._8_8_ * dVar79;
      auVar41._8_4_ = SUB84(auVar114._8_8_,0);
      auVar41._0_8_ = auVar114._0_8_;
      auVar41._12_4_ = (int)((ulonglong)auVar114._8_8_ >> 0x20);
      auVar75._8_4_ = SUB84(dVar76,0);
      auVar75._0_8_ = dVar49;
      auVar75._12_4_ = uVar90;
      auVar96._8_4_ = uVar91;
      auVar96._0_8_ = dVar10;
      auVar96._12_4_ = uVar100;
      dVar26 = *(double *)&this->ShapeWorldTransforms[1].field_0x10 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar48 = *(double *)&this->ShapeWorldTransforms[1].field_0x18 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar55._0_8_ = auVar82._0_8_ * dVar79 - auVar114._0_8_ * auVar72._0_8_;
      auVar55._8_8_ = auVar82._8_8_ * dVar60 - auVar41._8_8_ * auVar72._8_8_;
      auVar42._8_4_ = SUB84(auVar69._8_8_,0);
      auVar42._0_8_ = auVar69._0_8_;
      auVar42._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
      local_1b8 = dVar106 * dVar60 + dVar92 + auVar42._8_8_;
      dStack_1b0 = dVar111 * dVar60 + dVar99 + auVar55._0_8_;
      auVar30 = blendpd(auVar69,auVar55,2);
      dVar79 = local_d0 - *(double *)&this->ShapeWorldTransforms[1].field_0x30;
      auVar56._8_4_ = uVar91;
      auVar56._0_8_ = dVar10;
      auVar56._12_4_ = uVar100;
      auVar88._8_4_ = SUB84(dVar76,0);
      auVar88._0_8_ = dVar49;
      auVar88._12_4_ = uVar90;
      auVar43._8_4_ = uVar91;
      auVar43._0_8_ = dVar10;
      auVar43._12_4_ = uVar100;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar79;
      auVar82 = blendpd(auVar56,auVar9,2);
      auVar97._0_8_ = auVar96._8_8_ * dVar49 - dVar10 * auVar75._8_8_;
      auVar97._8_8_ = dVar79 * dVar76 - auVar43._8_8_ * dVar26;
      local_1a8 = auVar114._0_8_ * dVar60 + dVar28 + auVar30._0_8_;
      auVar72._8_4_ = SUB84(dVar48,0);
      auVar72._0_8_ = dVar26;
      auVar72._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      auVar30 = blendpd(auVar88,auVar72,2);
      uStack_224 = CONCAT31(uStack_224._1_3_,((uchar *)((longlong)FVar16 + 0x2c))[uVar17]);
      uVar15 = 0;
      if ((int)uVar18 < (this->ManifoldPoints).ArrayNum) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      auVar57._0_8_ = auVar82._0_8_ * dVar26 - dVar79 * auVar30._0_8_;
      auVar57._8_8_ = auVar82._8_8_ * dVar48 - auVar30._8_8_ * 0.0;
      auVar82 = blendpd(auVar97,auVar57,2);
      dVar60 = auVar97._8_8_ + auVar97._8_8_;
      dVar28 = auVar57._0_8_ + auVar57._0_8_;
      uVar90 = SUB84(dVar28,0);
      uVar91 = (undefined4)((ulonglong)dVar28 >> 0x20);
      auVar98._0_8_ = auVar82._0_8_ + auVar82._0_8_;
      auVar98._8_8_ = auVar82._8_8_ + auVar82._8_8_;
      auVar70._8_4_ = uVar90;
      auVar70._0_8_ = dVar60;
      auVar70._12_4_ = uVar91;
      auVar44._8_4_ = uVar90;
      auVar44._0_8_ = dVar60;
      auVar44._12_4_ = uVar91;
      auVar58._8_4_ = uVar90;
      auVar58._0_8_ = dVar60;
      auVar58._12_4_ = uVar91;
      auVar82 = blendpd(auVar58,auVar98,2);
      auVar71._0_8_ = auVar70._8_8_ * dVar49 - dVar60 * auVar75._8_8_;
      auVar71._8_8_ = auVar98._0_8_ * dVar76 - auVar44._8_8_ * dVar26;
      auVar45._8_4_ = SUB84(auVar98._8_8_,0);
      auVar45._0_8_ = auVar98._0_8_;
      auVar45._12_4_ = (int)((ulonglong)auVar98._8_8_ >> 0x20);
      auVar59._0_8_ = auVar82._0_8_ * dVar26 - auVar98._0_8_ * auVar30._0_8_;
      auVar59._8_8_ = auVar82._8_8_ * dVar48 - auVar45._8_8_ * auVar30._8_8_;
      auVar46._8_4_ = SUB84(auVar71._8_8_,0);
      auVar46._0_8_ = auVar71._0_8_;
      auVar46._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
      dVar26 = dVar60 * dVar48 + dVar10 + auVar46._8_8_;
      dVar49 = dVar28 * dVar48 + dVar78 + auVar59._0_8_;
      fVar20 = (float)local_1b8;
      fVar21 = (float)dStack_1b0;
      auVar82 = blendpd(auVar71,auVar59,2);
      fVar22 = (float)local_1a8;
      fVar23 = (float)dVar26;
      local_1c8 = auVar98._0_8_ * dVar48 + dVar79 + auVar82._0_8_;
      local_1d8._8_4_ = SUB84(dVar49,0);
      local_1d8._0_8_ = dVar26;
      local_1d8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
      fVar24 = (float)local_1c8;
      uVar25 = SUB84(local_1e8,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar47 = (uint)((ulonglong)local_1e8 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      local_148 = local_1f8;
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar6 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
      if (FVar6 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
        FVar16 = FVar6;
      }
      uVar19 = (ulonglong)(uVar18 + 1);
      pfVar1 = (float *)((longlong)FVar16 + uVar17);
      *pfVar1 = fVar20;
      pfVar1[1] = fVar21;
      pfVar1[2] = fVar22;
      pfVar1[3] = fVar23;
      puVar2 = (uchar *)((longlong)FVar16 + 0x10) + uVar17;
      *(float *)puVar2 = (float)dVar49;
      *(float *)(puVar2 + 4) = fVar24;
      *(float *)(puVar2 + 8) = fVar3;
      *(float *)(puVar2 + 0xc) = fVar4;
      *(ulonglong *)((uchar *)((longlong)FVar16 + 0x20) + uVar17) =
           CONCAT44((float)(double)CONCAT44(uVar47,uVar25),fVar5);
      *(ulonglong *)((uchar *)((longlong)FVar16 + 0x20) + uVar17 + 8) = CONCAT44(uStack_224,uVar89);
      *(float *)((uchar *)((longlong)FVar16 + 0x3c) + uVar17) = fVar20;
      *(float *)((uchar *)((longlong)FVar16 + 0x3c) + uVar17 + 4) = fVar21;
      *(float *)((uchar *)((longlong)FVar16 + 0x54) + uVar17) = fVar20;
      *(float *)((uchar *)((longlong)FVar16 + 0x54) + uVar17 + 4) = fVar21;
      uVar13 = CONCAT44((float)dVar49,fVar23);
      *(undefined8 *)((uchar *)((longlong)FVar16 + 0x48) + uVar17) = uVar13;
      *(undefined8 *)((uchar *)((longlong)FVar16 + 0x60) + uVar17) = uVar13;
      *(float *)((uchar *)((longlong)FVar16 + 0x44) + uVar17) = fVar22;
      *(float *)((uchar *)((longlong)FVar16 + 0x5c) + uVar17) = fVar22;
      *(float *)((uchar *)((longlong)FVar16 + 0x50) + uVar17) = fVar24;
      *(float *)((uchar *)((longlong)FVar16 + 0x68) + uVar17) = fVar24;
      puVar2 = (uchar *)((longlong)FVar16 + 0x34) + uVar17;
      puVar2[0] = '\0';
      puVar2[1] = '\0';
      puVar2[2] = '\0';
      puVar2[3] = '\0';
      puVar2[4] = '\0';
      puVar2[5] = '\0';
      puVar2[6] = '\0';
      puVar2[7] = '\0';
      ((uchar *)((longlong)FVar16 + 0x30))[uVar17] = '\0';
      uVar17 = uVar17 + 0x6c;
    } while ((int)(uVar18 + 1) < (this->ManifoldPoints).ArrayNum);
  }
  return;
}

// FindManifoldPoint @ 143a0cdf0

int __thiscall
Chaos::FPBDCollisionConstraint::FindManifoldPoint
          (FPBDCollisionConstraint *this,TContactPoint<double> *param_1)

{
  ForElementType<Chaos::FManifoldPoint> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<Chaos::FManifoldPoint> FVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  double local_a8 [2];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  int local_48;
  EContactPointType local_44;
  
  iVar5 = (this->ManifoldPoints).ArrayNum;
  uVar7 = 0;
  if (iVar5 < 1) {
    return -1;
  }
  lVar8 = 0;
  lVar9 = 0;
  while( true ) {
    local_a8[0] = 0.0;
    uVar4 = 0;
    if ((int)uVar7 < (this->ManifoldPoints).ArrayNum) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    FVar1 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
    FVar6 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
    if (FVar1 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
      FVar6 = FVar1;
    }
    local_48 = *(int *)(lVar9 + 0x28 + (longlong)FVar6);
    local_98 = (double)*(float *)(lVar9 + (longlong)FVar6);
    local_44 = *(EContactPointType *)(lVar9 + 0x2c + (longlong)FVar6);
    local_90 = (double)*(float *)(lVar9 + 4 + (longlong)FVar6);
    local_88 = (double)*(float *)(lVar9 + 8 + (longlong)FVar6);
    local_80 = (double)*(float *)(lVar9 + 0xc + (longlong)FVar6);
    local_78 = (double)*(float *)(lVar9 + 0x10 + (longlong)FVar6);
    local_70 = (double)*(float *)(lVar9 + 0x14 + (longlong)FVar6);
    local_68 = (double)*(float *)(lVar9 + 0x18 + (longlong)FVar6);
    local_60 = (double)*(float *)(lVar9 + 0x1c + (longlong)FVar6);
    local_58 = (double)*(float *)(lVar9 + 0x20 + (longlong)FVar6);
    local_50 = (double)*(float *)(lVar9 + 0x24 + (longlong)FVar6);
    bVar3 = AreMatchingContactPoints(this,param_1,(TContactPoint<double> *)&local_98,local_a8);
    if ((bVar3) && (0.0 < local_a8[0])) break;
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 1;
    lVar9 = lVar9 + 0x6c;
    if (iVar5 <= lVar8) {
      return -1;
    }
  }
  return uVar7;
}

// FindSavedManifoldPoint @ 143a0cfe0

int __thiscall
Chaos::FPBDCollisionConstraint::FindSavedManifoldPoint
          (FPBDCollisionConstraint *this,int param_1,int *param_2,int *param_3)

{
  ForElementType<Chaos::FSavedManifoldPoint> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ForElementType<Chaos::FSavedManifoldPoint> FVar9;
  int iVar10;
  ForElementType<Chaos::FManifoldPoint> FVar11;
  FManifoldPoint *pFVar12;
  uint *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (bChaos_Manifold_EnableFrictionRestore) {
    uVar7 = 0;
    if (param_1 < (this->ManifoldPoints).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    FVar11 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
      FVar11 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
    }
    pFVar12 = (FManifoldPoint *)((longlong)FVar11 + (longlong)param_1 * 0x6c);
    if (((pFVar12->Flags).Bits & 1) == 0) {
      iVar10 = 0;
      iVar4 = -1;
      fVar16 = Chaos_Manifold_FrictionExactPositionTolerance *
               Chaos_Manifold_FrictionExactPositionTolerance;
      fVar15 = Chaos_Manifold_FrictionNearPositionTolerance *
               Chaos_Manifold_FrictionNearPositionTolerance;
      puVar13 = (uint *)param_2;
      if (0 < *param_3) {
        do {
          uVar7 = *puVar13;
          uVar5 = 0;
          if ((int)uVar7 < (this->SavedManifoldPoints).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
          FVar1 = (this->SavedManifoldPoints).AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<Chaos::FSavedManifoldPoint>)&this->SavedManifoldPoints;
          if (FVar1 != (ForElementType<Chaos::FSavedManifoldPoint>)0x0) {
            FVar9 = FVar1;
          }
          fVar14 = CalculateSavedManifoldPointDistanceSq
                             (this,(FSavedManifoldPoint *)
                                   ((longlong)(int)uVar7 * 0x1c + (longlong)FVar9),pFVar12);
          iVar6 = iVar10;
          if (fVar14 < fVar16) break;
          if (fVar15 <= fVar14) {
            iVar6 = iVar4;
            fVar14 = fVar15;
          }
          fVar15 = fVar14;
          iVar10 = iVar10 + 1;
          puVar13 = puVar13 + 1;
          iVar4 = iVar6;
        } while (iVar10 < *param_3);
        if (iVar6 != -1) {
          iVar4 = *param_3;
          iVar8 = iVar4 + -1;
          iVar10 = param_2[iVar6];
          *param_3 = iVar8;
          if (iVar8 <= iVar6) {
            return iVar10;
          }
          param_2[iVar6] = param_2[(longlong)iVar4 + -1];
          return iVar10;
        }
      }
    }
  }
  return -1;
}

// FindSimpleSavedManifoldPoint @ 143a0d1e0

int __thiscall
Chaos::FPBDCollisionConstraint::FindSimpleSavedManifoldPoint
          (FPBDCollisionConstraint *this,int param_1)

{
  ForElementType<Chaos::FSavedManifoldPoint> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ForElementType<Chaos::FSavedManifoldPoint> FVar6;
  uint uVar7;
  ForElementType<Chaos::FManifoldPoint> FVar8;
  FManifoldPoint *pFVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (bChaos_Manifold_EnableFrictionRestore) {
    uVar7 = 0;
    if (param_1 < (this->ManifoldPoints).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    FVar8 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
      FVar8 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
    }
    pFVar9 = (FManifoldPoint *)((longlong)FVar8 + (longlong)param_1 * 0x6c);
    if (((pFVar9->Flags).Bits & 1) == 0) {
      uVar11 = 0xffffffff;
      uVar7 = 0xffffffff;
      iVar10 = 0;
      iVar4 = (this->SavedManifoldPoints).ArrayNum;
      fVar14 = Chaos_Manifold_FrictionExactPositionTolerance *
               Chaos_Manifold_FrictionExactPositionTolerance;
      fVar13 = Chaos_Manifold_FrictionNearPositionTolerance *
               Chaos_Manifold_FrictionNearPositionTolerance;
      if (0 < iVar4) {
        do {
          uVar7 = (iVar10 + param_1) % iVar4;
          uVar5 = 0;
          if ((int)uVar7 < (this->SavedManifoldPoints).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
          FVar1 = (this->SavedManifoldPoints).AllocatorInstance.SecondaryData;
          FVar6 = (ForElementType<Chaos::FSavedManifoldPoint>)&this->SavedManifoldPoints;
          if (FVar1 != (ForElementType<Chaos::FSavedManifoldPoint>)0x0) {
            FVar6 = FVar1;
          }
          fVar12 = CalculateSavedManifoldPointDistanceSq
                             (this,(FSavedManifoldPoint *)
                                   ((longlong)(int)uVar7 * 0x1c + (longlong)FVar6),pFVar9);
          if (fVar12 < fVar14) {
            return uVar7;
          }
          if (fVar13 <= fVar12) {
            uVar7 = uVar11;
            fVar12 = fVar13;
          }
          fVar13 = fVar12;
          iVar10 = iVar10 + 1;
          uVar11 = uVar7;
        } while (iVar10 < iVar4);
      }
      return uVar7;
    }
  }
  return -1;
}

// GetConstraintDirection @ 143a0f080

ECollisionConstraintDirection __thiscall
Chaos::FPBDCollisionConstraint::GetConstraintDirection(FPBDCollisionConstraint *this,double param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double local_68;
  double local_60;
  double local_58;
  
  if (((this->Flags).Bits & 0x102) == 0) {
    dVar9 = (double)Chaos_GBFCharacteristicTimeRatio;
    CalculateWorldContactNormal(this,(TVector<double,3> *)&local_68);
    dVar4 = GetPhi(this);
    fVar1 = this->CullDistance;
    dVar5 = GetPhi(this);
    if (dVar5 < (double)fVar1) {
      lVar3 = this->_padding_;
      dVar5 = *(double *)(lVar3 + 0xe8);
      dVar10 = *(double *)(lVar3 + 0xe0);
      auVar2 = *(undefined1 (*) [16])(lVar3 + 0xd0);
      dVar6 = auVar2._0_8_;
      uVar7 = auVar2._8_4_;
      uVar8 = auVar2._12_4_;
      if (dVar5 < __real_3e45798ee0000000) {
        dVar6 = 0.0;
        uVar7 = 0;
        uVar8 = 0;
        dVar5 = __real_408ea00000000000;
        dVar10 = __real_bff0000000000000;
      }
      dVar5 = dVar5 * dVar9 * param_1 * dVar9 * param_1;
      dVar9 = (double)CONCAT44(uVar8,uVar7) * local_60 + dVar6 * local_68 + dVar10 * local_58;
      if (__real_bfb99999a0000000 <= dVar9) {
        if ((__real_3fb99999a0000000 < dVar9) && (dVar4 - dVar9 * dVar5 < 0.0)) {
          return Particle0ToParticle1;
        }
      }
      else if (dVar9 * dVar5 + dVar4 < 0.0) {
        return Particle1ToParticle0;
      }
    }
  }
  return NoRestingDependency;
}

// GetManifoldPoint @ 143a0f2d0

FManifoldPoint * __thiscall
Chaos::FPBDCollisionConstraint::GetManifoldPoint(FPBDCollisionConstraint *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FManifoldPoint *pFVar4;
  ForElementType<Chaos::FManifoldPoint> FVar5;
  
  uVar3 = 0;
  if (param_1 < (this->ManifoldPoints).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FManifoldPoint *)(*pcVar1)();
      return pFVar4;
    }
  }
  FVar5 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
    FVar5 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
  }
  return (FManifoldPoint *)((longlong)FVar5 + (longlong)param_1 * 0x6c);
}

// GetNetLinearImpulse @ 143a0f370

TVector<float,3> * __thiscall
Chaos::FPBDCollisionConstraint::GetNetLinearImpulse
          (FPBDCollisionConstraint *this,TVector<float,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  ForElementType<Chaos::FManifoldPointResult> FVar5;
  undefined1 local_res8 [8];
  
  FVar5 = (this->ManifoldPointResults).AllocatorInstance.SecondaryData;
  iVar3 = (this->ManifoldPointResults).ArrayNum;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  if (FVar5 == (ForElementType<Chaos::FManifoldPointResult>)0x0) {
    FVar5 = (ForElementType<Chaos::FManifoldPointResult>)&this->ManifoldPointResults;
  }
  pfVar4 = (float *)((longlong)FVar5 + 0x14);
  while( true ) {
    if ((this->ManifoldPointResults).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::FManifoldPointResult_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pfVar4 + -5 == (float *)((longlong)iVar3 * 0x1c + (longlong)FVar5)) break;
    fVar1 = pfVar4[-1];
    *(float *)__return_storage_ptr__ = pfVar4[-2] + *(float *)__return_storage_ptr__;
    fVar2 = *pfVar4;
    pfVar4 = pfVar4 + 7;
    *(float *)&__return_storage_ptr__->field_0x4 =
         fVar1 + *(float *)&__return_storage_ptr__->field_0x4;
    *(float *)&__return_storage_ptr__->field_0x8 =
         fVar2 + *(float *)&__return_storage_ptr__->field_0x8;
  }
  return __return_storage_ptr__;
}

// InitCCDThreshold @ 143a0f5e0

void __thiscall Chaos::FPBDCollisionConstraint::InitCCDThreshold(FPBDCollisionConstraint *this)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  FGenericParticleHandleImp local_res8 [4];
  undefined1 local_68 [96];
  
  local_res8[0].MHandle = this->Particle[0];
  bVar3 = FGenericParticleHandleImp::CCDEnabled(local_res8);
  uVar2 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar1 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  fVar7 = 0.0;
  if (bVar3) {
    pdVar4 = (double *)
             (**(code **)(this->Implicit[0]->_padding_ + 0x90))(this->Implicit[0],local_68);
    dVar6 = (double)CONCAT44((uint)((ulonglong)(pdVar4[4] - pdVar4[1]) >> 0x20) & uVar2,
                             SUB84(pdVar4[4] - pdVar4[1],0) & uVar1);
    dVar5 = (double)CONCAT44((uint)((ulonglong)(pdVar4[3] - *pdVar4) >> 0x20) & uVar2,
                             SUB84(pdVar4[3] - *pdVar4,0) & uVar1);
    if (dVar5 <= dVar6) {
      dVar6 = dVar5;
    }
    dVar5 = (double)CONCAT44((uint)((ulonglong)(pdVar4[5] - pdVar4[2]) >> 0x20) & uVar2,
                             SUB84(pdVar4[5] - pdVar4[2],0) & uVar1);
    if (dVar5 <= dVar6) {
      dVar6 = dVar5;
    }
    fVar8 = (float)dVar6;
  }
  else {
    fVar8 = 0.0;
  }
  local_res8[0].MHandle = this->Particle[1];
  bVar3 = FGenericParticleHandleImp::CCDEnabled(local_res8);
  if (bVar3) {
    pdVar4 = (double *)
             (**(code **)(this->Implicit[1]->_padding_ + 0x90))(this->Implicit[1],local_68);
    dVar6 = (double)CONCAT44((uint)((ulonglong)(pdVar4[4] - pdVar4[1]) >> 0x20) & uVar2,
                             SUB84(pdVar4[4] - pdVar4[1],0) & uVar1);
    dVar5 = (double)CONCAT44((uint)((ulonglong)(pdVar4[3] - *pdVar4) >> 0x20) & uVar2,
                             SUB84(pdVar4[3] - *pdVar4,0) & uVar1);
    if (dVar5 <= dVar6) {
      dVar6 = dVar5;
    }
    dVar5 = (double)CONCAT44((uint)((ulonglong)(pdVar4[5] - pdVar4[2]) >> 0x20) & uVar2,
                             SUB84(pdVar4[5] - pdVar4[2],0) & uVar1);
    if (dVar5 <= dVar6) {
      dVar6 = dVar5;
    }
    fVar7 = (float)dVar6;
  }
  if (fVar7 <= fVar8) {
    fVar7 = fVar8;
  }
  this->CCDEnablePenetration = fVar7 * CVars::CCDEnableThresholdBoundsScale;
  this->CCDTargetPenetration = fVar7 * CVars::CCDAllowedDepthBoundsScale;
  return;
}

// InitManifoldPoint @ 143a0f720

void __thiscall
Chaos::FPBDCollisionConstraint::InitManifoldPoint
          (FPBDCollisionConstraint *this,int param_1,TContactPoint<float> *param_2)

{
  uchar *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  bool bVar19;
  uint uVar20;
  longlong lVar21;
  ForElementType<Chaos::FManifoldPoint> FVar22;
  
  uVar20 = 0;
  if (param_1 < (this->ManifoldPoints).ArrayNum) {
    uVar20 = (uint)~param_1 >> 0x1f;
  }
  if (uVar20 == 0) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar19) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar22 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
  uVar3 = *(undefined8 *)&param_2->ShapeContactPoints[0].field_0x8;
  if (FVar22 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
    FVar22 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
  }
  lVar21 = (longlong)param_1 * 0x6c;
  *(undefined8 *)((longlong)FVar22 + lVar21) = *(undefined8 *)param_2->ShapeContactPoints;
  ((undefined8 *)((longlong)FVar22 + lVar21))[1] = uVar3;
  uVar4 = param_2->ShapeContactPoints[1].field_0x5;
  uVar5 = param_2->ShapeContactPoints[1].field_0x6;
  uVar6 = param_2->ShapeContactPoints[1].field_0x7;
  uVar7 = param_2->ShapeContactPoints[1].field_0x8;
  uVar8 = param_2->ShapeContactPoints[1].field_0x9;
  uVar9 = param_2->ShapeContactPoints[1].field_0xa;
  uVar10 = param_2->ShapeContactPoints[1].field_0xb;
  uVar11 = (param_2->ShapeContactNormal).field_0x0;
  uVar12 = (param_2->ShapeContactNormal).field_0x1;
  uVar13 = (param_2->ShapeContactNormal).field_0x2;
  uVar14 = (param_2->ShapeContactNormal).field_0x3;
  uVar15 = (param_2->ShapeContactNormal).field_0x4;
  uVar16 = (param_2->ShapeContactNormal).field_0x5;
  uVar17 = (param_2->ShapeContactNormal).field_0x6;
  uVar18 = (param_2->ShapeContactNormal).field_0x7;
  puVar1 = (uchar *)((longlong)FVar22 + 0x10) + lVar21;
  puVar1[0] = param_2->ShapeContactPoints[1].field_0x4;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar1[4] = uVar7;
  puVar1[5] = uVar8;
  puVar1[6] = uVar9;
  puVar1[7] = uVar10;
  puVar1[8] = uVar11;
  puVar1[9] = uVar12;
  puVar1[10] = uVar13;
  puVar1[0xb] = uVar14;
  puVar1[0xc] = uVar15;
  puVar1[0xd] = uVar16;
  puVar1[0xe] = uVar17;
  puVar1[0xf] = uVar18;
  uVar3 = *(undefined8 *)&param_2->FaceIndex;
  *(undefined8 *)((uchar *)((longlong)FVar22 + 0x20) + lVar21) =
       *(undefined8 *)&(param_2->ShapeContactNormal).field_0x8;
  *(undefined8 *)((uchar *)((longlong)FVar22 + 0x20) + lVar21 + 8) = uVar3;
  uVar4 = param_2->ShapeContactPoints[0].field_0x1;
  uVar5 = param_2->ShapeContactPoints[0].field_0x2;
  uVar6 = param_2->ShapeContactPoints[0].field_0x3;
  uVar7 = param_2->ShapeContactPoints[0].field_0x4;
  uVar8 = param_2->ShapeContactPoints[0].field_0x5;
  uVar9 = param_2->ShapeContactPoints[0].field_0x6;
  uVar10 = param_2->ShapeContactPoints[0].field_0x7;
  puVar1 = (uchar *)((longlong)FVar22 + 0x3c) + lVar21;
  puVar1[0] = param_2->ShapeContactPoints[0].field_0x0;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar1[4] = uVar7;
  puVar1[5] = uVar8;
  puVar1[6] = uVar9;
  puVar1[7] = uVar10;
  uVar4 = param_2->ShapeContactPoints[0].field_0x9;
  uVar5 = param_2->ShapeContactPoints[0].field_0xa;
  uVar6 = param_2->ShapeContactPoints[0].field_0xb;
  puVar1 = (uchar *)((longlong)FVar22 + 0x44) + lVar21;
  puVar1[0] = param_2->ShapeContactPoints[0].field_0x8;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  uVar4 = param_2->ShapeContactPoints[1].field_0x1;
  uVar5 = param_2->ShapeContactPoints[1].field_0x2;
  uVar6 = param_2->ShapeContactPoints[1].field_0x3;
  uVar7 = param_2->ShapeContactPoints[1].field_0x4;
  uVar8 = param_2->ShapeContactPoints[1].field_0x5;
  uVar9 = param_2->ShapeContactPoints[1].field_0x6;
  uVar10 = param_2->ShapeContactPoints[1].field_0x7;
  puVar1 = (uchar *)((longlong)FVar22 + 0x48) + lVar21;
  puVar1[0] = param_2->ShapeContactPoints[1].field_0x0;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar1[4] = uVar7;
  puVar1[5] = uVar8;
  puVar1[6] = uVar9;
  puVar1[7] = uVar10;
  uVar4 = param_2->ShapeContactPoints[1].field_0x9;
  uVar5 = param_2->ShapeContactPoints[1].field_0xa;
  uVar6 = param_2->ShapeContactPoints[1].field_0xb;
  puVar1 = (uchar *)((longlong)FVar22 + 0x50) + lVar21;
  puVar1[0] = param_2->ShapeContactPoints[1].field_0x8;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  uVar4 = param_2->ShapeContactPoints[0].field_0x1;
  uVar5 = param_2->ShapeContactPoints[0].field_0x2;
  uVar6 = param_2->ShapeContactPoints[0].field_0x3;
  uVar7 = param_2->ShapeContactPoints[0].field_0x4;
  uVar8 = param_2->ShapeContactPoints[0].field_0x5;
  uVar9 = param_2->ShapeContactPoints[0].field_0x6;
  uVar10 = param_2->ShapeContactPoints[0].field_0x7;
  puVar1 = (uchar *)((longlong)FVar22 + 0x54) + lVar21;
  puVar1[0] = param_2->ShapeContactPoints[0].field_0x0;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar1[4] = uVar7;
  puVar1[5] = uVar8;
  puVar1[6] = uVar9;
  puVar1[7] = uVar10;
  uVar4 = param_2->ShapeContactPoints[0].field_0x9;
  uVar5 = param_2->ShapeContactPoints[0].field_0xa;
  uVar6 = param_2->ShapeContactPoints[0].field_0xb;
  puVar1 = (uchar *)((longlong)FVar22 + 0x5c) + lVar21;
  puVar1[0] = param_2->ShapeContactPoints[0].field_0x8;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  uVar4 = param_2->ShapeContactPoints[1].field_0x1;
  uVar5 = param_2->ShapeContactPoints[1].field_0x2;
  uVar6 = param_2->ShapeContactPoints[1].field_0x3;
  uVar7 = param_2->ShapeContactPoints[1].field_0x4;
  uVar8 = param_2->ShapeContactPoints[1].field_0x5;
  uVar9 = param_2->ShapeContactPoints[1].field_0x6;
  uVar10 = param_2->ShapeContactPoints[1].field_0x7;
  puVar1 = (uchar *)((longlong)FVar22 + 0x60) + lVar21;
  puVar1[0] = param_2->ShapeContactPoints[1].field_0x0;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar1[4] = uVar7;
  puVar1[5] = uVar8;
  puVar1[6] = uVar9;
  puVar1[7] = uVar10;
  uVar4 = param_2->ShapeContactPoints[1].field_0x9;
  uVar5 = param_2->ShapeContactPoints[1].field_0xa;
  uVar6 = param_2->ShapeContactPoints[1].field_0xb;
  puVar1 = (uchar *)((longlong)FVar22 + 0x68) + lVar21;
  puVar1[0] = param_2->ShapeContactPoints[1].field_0x8;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar1 = (uchar *)((longlong)FVar22 + 0x34) + lVar21;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  ((uchar *)((longlong)FVar22 + 0x30))[lVar21] = '\0';
  return;
}

// InitMarginsAndTolerances @ 143a0f830

void __thiscall
Chaos::FPBDCollisionConstraint::InitMarginsAndTolerances
          (FPBDCollisionConstraint *this,uchar param_1,uchar param_2,float param_3,float param_4)

{
  FImplicitObject *pFVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  double *pdVar6;
  byte bVar7;
  byte bVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  FGenericParticleHandleImp local_res8;
  FGenericParticleHandleImp local_c8;
  undefined1 local_c0 [48];
  undefined1 local_90 [136];
  
  if ((param_1 == '\0') || (param_1 == '\x03')) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  if ((param_2 == '\0') || (param_2 == '\x03')) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  fVar13 = param_4;
  if (bVar7 == 0) {
    if (bVar8 != 0) {
      this->CollisionTolerance = param_4 * __real_3d4ccccd;
      fVar12 = 0.0;
      goto LAB_143a0fa97;
    }
    if ((this->Particle[0] == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
       (local_res8.MHandle = this->Particle[0],
       bVar4 = FGenericParticleHandleImp::IsDynamic(&local_res8), !bVar4)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((this->Particle[1] == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
       (local_c8.MHandle = this->Particle[1],
       bVar5 = FGenericParticleHandleImp::IsDynamic(&local_c8), !bVar5)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar3 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar2 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    fVar12 = 0.0;
    if (!bVar4) {
      param_3 = 0.0;
    }
    if (!bVar5) {
      param_4 = 0.0;
    }
    pFVar1 = this->Implicit[0];
    if ((pFVar1 == (FImplicitObject *)0x0) || (pFVar1->bHasBoundingBox == false)) {
      fVar13 = 0.0;
    }
    else {
      pdVar6 = (double *)(**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,local_c0);
      dVar11 = (double)CONCAT44((uint)((ulonglong)(pdVar6[4] - pdVar6[1]) >> 0x20) & uVar3,
                                SUB84(pdVar6[4] - pdVar6[1],0) & uVar2);
      dVar10 = (double)CONCAT44((uint)((ulonglong)(pdVar6[3] - *pdVar6) >> 0x20) & uVar3,
                                SUB84(pdVar6[3] - *pdVar6,0) & uVar2);
      if (dVar11 <= dVar10) {
        dVar11 = dVar10;
      }
      dVar10 = (double)CONCAT44((uint)((ulonglong)(pdVar6[5] - pdVar6[2]) >> 0x20) & uVar3,
                                SUB84(pdVar6[5] - pdVar6[2],0) & uVar2);
      if (dVar11 <= dVar10) {
        dVar11 = dVar10;
      }
      fVar13 = (float)dVar11;
    }
    pFVar1 = this->Implicit[1];
    if ((pFVar1 == (FImplicitObject *)0x0) || (pFVar1->bHasBoundingBox == false)) {
      fVar9 = 0.0;
    }
    else {
      pdVar6 = (double *)(**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,local_90);
      dVar11 = (double)CONCAT44((uint)((ulonglong)(pdVar6[4] - pdVar6[1]) >> 0x20) & uVar3,
                                SUB84(pdVar6[4] - pdVar6[1],0) & uVar2);
      dVar10 = (double)CONCAT44((uint)((ulonglong)(pdVar6[3] - *pdVar6) >> 0x20) & uVar3,
                                SUB84(pdVar6[3] - *pdVar6,0) & uVar2);
      if (dVar11 <= dVar10) {
        dVar11 = dVar10;
      }
      dVar10 = (double)CONCAT44((uint)((ulonglong)(pdVar6[5] - pdVar6[2]) >> 0x20) & uVar3,
                                SUB84(pdVar6[5] - pdVar6[2],0) & uVar2);
      if (dVar11 <= dVar10) {
        dVar11 = dVar10;
      }
      fVar9 = (float)dVar11;
    }
    if (fVar13 <= fVar9) {
      fVar9 = fVar13;
    }
    this->CollisionTolerance = fVar9 * __real_3dcccccd;
    if (param_3 == 0.0) {
      fVar13 = Chaos_Collision_ConvexZeroMargin;
      if (Chaos_Collision_ConvexZeroMargin <= param_4) {
        fVar13 = param_4;
      }
      goto LAB_143a0fa97;
    }
    if (param_4 != 0.0) {
      fVar12 = param_4;
      fVar13 = param_4;
      if (param_3 <= param_4) {
        fVar12 = param_3;
        fVar13 = param_3;
      }
      goto LAB_143a0fa97;
    }
    fVar12 = Chaos_Collision_ConvexZeroMargin;
    if (Chaos_Collision_ConvexZeroMargin <= param_3) {
      fVar12 = param_3;
    }
  }
  else {
    fVar12 = param_3;
    if (bVar8 != 0) {
      fVar9 = param_3;
      if (param_4 <= param_3) {
        fVar9 = param_4;
      }
      this->CollisionTolerance = fVar9 * __real_3d4ccccd;
      goto LAB_143a0fa97;
    }
    this->CollisionTolerance = param_3 * __real_3d4ccccd;
  }
  fVar13 = 0.0;
LAB_143a0fa97:
  this->CollisionMargins[0] = fVar12;
  this->CollisionMargins[1] = fVar13;
  (this->Flags).Bits = (this->Flags).Bits & 0xffbf;
  (this->Flags).Bits = (ushort)bVar7 << 6 | (this->Flags).Bits & 0xff7f | (ushort)bVar8 << 7;
  return;
}

// IsSleeping @ 143a0fc40

bool __thiscall Chaos::FPBDCollisionConstraint::IsSleeping(FPBDCollisionConstraint *this)

{
  FParticlePairMidPhase *pFVar1;
  
  pFVar1 = (this->ContainerCookie).MidPhase;
  if (pFVar1 != (FParticlePairMidPhase *)0x0) {
    return (bool)(*(byte *)&pFVar1->Flags >> 7);
  }
  return false;
}

// LogOneShotManifoldError @ 143a0fc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDCollisionConstraint::LogOneShotManifoldError
          (FPBDCollisionConstraint *this,int param_1,
          TArrayView<Chaos::TContactPoint<double>_const_,int> *param_2)

{
  if (1 < (byte)LogChaos._0_1_) {
    TGeometryParticleHandleImp<double,3,1>::GetDebugName(this->Particle[1]);
    TGeometryParticleHandleImp<double,3,1>::GetDebugName(this->Particle[0]);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  return;
}

// Make @ 143a0fd10

void __cdecl
Chaos::FPBDCollisionConstraint::Make
          (TGeometryParticleHandleImp<double,3,1> *param_1,FImplicitObject *param_2,
          FPerShapeData *param_3,FBVHParticles *param_4,TRigidTransform<double,3> *param_5,
          TGeometryParticleHandleImp<double,3,1> *param_6,FImplicitObject *param_7,
          FPerShapeData *param_8,FBVHParticles *param_9,TRigidTransform<double,3> *param_10,
          double param_11,bool param_12,EContactShapesType param_13,
          FPBDCollisionConstraint *param_14)

{
  FShapeInstance *pFVar1;
  
  param_14->Particle[1] = param_6;
  param_14->Implicit[1] = param_7;
  param_14->Particle[0] = param_1;
  param_14->Implicit[0] = param_2;
  if (param_3 == (FPerShapeData *)0x0) {
    param_3 = (FPerShapeData *)0x0;
  }
  else if (param_3->Type == 0) {
    param_3 = (FPerShapeData *)0x0;
  }
  param_14->Shape[0] = (FShapeInstance *)param_3;
  pFVar1 = (FShapeInstance *)0x0;
  if ((param_8 != (FPerShapeData *)0x0) && (pFVar1 = (FShapeInstance *)param_8, param_8->Type == 0))
  {
    pFVar1 = (FShapeInstance *)0x0;
  }
  param_14->Shape[1] = pFVar1;
  param_14->Simplicial[1] = param_9;
  param_14->Simplicial[0] = param_4;
  Setup(param_14,Disabled,param_13,param_5,param_10,param_11,param_12);
  return;
}

// MakeCopy @ 143a0fdd0

FPBDCollisionConstraint * __cdecl
Chaos::FPBDCollisionConstraint::MakeCopy
          (FPBDCollisionConstraint *__return_storage_ptr__,FPBDCollisionConstraint *param_1)

{
  undefined1 *puVar1;
  
  FPBDCollisionConstraint(__return_storage_ptr__,param_1);
  (__return_storage_ptr__->ContainerCookie).CCDConstraintIndex = -1;
  (__return_storage_ptr__->ContainerCookie).ConstraintIndex = -1;
  (__return_storage_ptr__->ContainerCookie).MidPhase = (FParticlePairMidPhase *)0x0;
  __return_storage_ptr__->_padding_ = 0;
  return __return_storage_ptr__;
}

// MakeTriangle @ 143a0fe10

FPBDCollisionConstraint * __cdecl
Chaos::FPBDCollisionConstraint::MakeTriangle
          (FPBDCollisionConstraint *__return_storage_ptr__,FImplicitObject *param_1)

{
  uchar uVar1;
  float fVar2;
  
  FPBDCollisionConstraint(__return_storage_ptr__);
  fVar2 = (float)(**(code **)(param_1->_padding_ + 0x28))(param_1);
  uVar1 = FImplicitObject::GetCollisionType(param_1);
  InitMarginsAndTolerances(__return_storage_ptr__,uVar1,'\x0e',fVar2,0.0);
  return __return_storage_ptr__;
}

// ResetActiveManifoldContacts @ 143a11850

void __thiscall
Chaos::FPBDCollisionConstraint::ResetActiveManifoldContacts(FPBDCollisionConstraint *this)

{
  int *piVar1;
  
  this->ClosestManifoldPointIndex = -1;
  piVar1 = &(this->ManifoldPoints).ArrayMax;
  (this->ManifoldPoints).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FManifoldPoint>_>
              (0x6c,4,0,&(this->ManifoldPoints).AllocatorInstance,0,piVar1);
  }
  (this->ManifoldPointResults).ArrayNum = 0;
  if ((this->ManifoldPointResults).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FManifoldPointResult>_>
              (0x1c,4,0,&(this->ManifoldPointResults).AllocatorInstance,0,
               &(this->ManifoldPointResults).ArrayMax);
  }
  this->ExpectedNumManifoldPoints = 0;
  (this->Flags).Bits = (this->Flags).Bits & 0xffcf;
  return;
}

// ResetManifold @ 143a11900

void __thiscall Chaos::FPBDCollisionConstraint::ResetManifold(FPBDCollisionConstraint *this)

{
  (this->SavedManifoldPoints).ArrayNum = 0;
  if ((this->SavedManifoldPoints).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSavedManifoldPoint>_>
              (0x1c,4,0,&(this->SavedManifoldPoints).AllocatorInstance,0,
               &(this->SavedManifoldPoints).ArrayMax);
  }
  ResetActiveManifoldContacts(this);
  return;
}

// RestoreFrom @ 143a11a70

void __thiscall
Chaos::FPBDCollisionConstraint::RestoreFrom
          (FPBDCollisionConstraint *this,FPBDCollisionConstraint *param_1)

{
  longlong lVar1;
  code *pcVar2;
  FParticlePairMidPhase *pFVar3;
  FIDKey FVar4;
  FCollisionShapePairKey_u_0 FVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  
  pFVar3 = (this->ContainerCookie).MidPhase;
  iVar6 = (this->ContainerCookie).CreationEpoch;
  iVar7 = (this->ContainerCookie).LastUsedEpoch;
  lVar1 = this->_padding_;
  uVar8 = *(undefined4 *)&(this->ContainerCookie).field_0x10;
  iVar9 = (this->ContainerCookie).CCDConstraintIndex;
  FVar4 = (this->CollisionSortKey).ParticlePairKey.Key;
  FVar5 = (this->CollisionSortKey).ShapePairKey.field0_0x0;
  operator=(this,param_1);
  (this->ContainerCookie).MidPhase = pFVar3;
  (this->ContainerCookie).CreationEpoch = iVar6;
  (this->ContainerCookie).LastUsedEpoch = iVar7;
  *(undefined4 *)&(this->ContainerCookie).field_0x10 = uVar8;
  (this->ContainerCookie).CCDConstraintIndex = iVar9;
  (this->CollisionSortKey).ParticlePairKey.Key = FVar4;
  (this->CollisionSortKey).ShapePairKey.field0_0x0 = FVar5;
  if ((lVar1 != 0) && (this->_padding_ != 0)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InEdge == nullptr) || (GraphEdge == nullptr)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                        ,0x99,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->_padding_ = lVar1;
  return;
}

// SetIsSleeping @ 143a136e0

void __thiscall
Chaos::FPBDCollisionConstraint::SetIsSleeping(FPBDCollisionConstraint *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ContainerCookie).MidPhase == (FParticlePairMidPhase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerCookie.MidPhase != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionConstraint.cpp"
                       ,0x21f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FParticlePairMidPhase::SetIsSleeping
            ((this->ContainerCookie).MidPhase,param_1,*(int *)(this->_padding_ + 0x78));
  return;
}

// Setup @ 143a13c30

void __thiscall
Chaos::FPBDCollisionConstraint::Setup
          (FPBDCollisionConstraint *this,ECollisionCCDType param_1,EContactShapesType param_2,
          TRigidTransform<double,3> *param_3,TRigidTransform<double,3> *param_4,double param_5,
          bool param_6)

{
  byte bVar1;
  undefined8 uVar2;
  FImplicitBoundsTestFlags FVar3;
  uchar uVar4;
  uchar uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  undefined7 extraout_var;
  ushort uVar13;
  float fVar14;
  float fVar15;
  
  uVar13 = 0;
  this->ShapesType = param_2;
  uVar2 = *(undefined8 *)&param_3->field_0x8;
  *(undefined8 *)this->ImplicitTransform = *(undefined8 *)param_3;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x18 = uVar2;
  uVar2 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x20 = *(undefined8 *)&param_3->field_0x20;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x28 = uVar2;
  uVar2 = *(undefined8 *)&param_3->field_0x38;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x30 = *(undefined8 *)&param_3->field_0x30;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x38 = uVar2;
  uVar2 = *(undefined8 *)&param_3->field_0x48;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x40 = *(undefined8 *)&param_3->field_0x40;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x48 = uVar2;
  uVar2 = *(undefined8 *)&param_3->field_0x58;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x50 = *(undefined8 *)&param_3->field_0x50;
  *(undefined8 *)&this->ImplicitTransform[0].field_0x58 = uVar2;
  uVar2 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)(this->ImplicitTransform + 1) = *(undefined8 *)param_4;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x18 = uVar2;
  uVar2 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x20 = *(undefined8 *)&param_4->field_0x20;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x28 = uVar2;
  uVar2 = *(undefined8 *)&param_4->field_0x38;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x30 = *(undefined8 *)&param_4->field_0x30;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x38 = uVar2;
  uVar2 = *(undefined8 *)&param_4->field_0x48;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x40 = *(undefined8 *)&param_4->field_0x40;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x48 = uVar2;
  uVar2 = *(undefined8 *)&param_4->field_0x58;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x50 = *(undefined8 *)&param_4->field_0x50;
  *(undefined8 *)&this->ImplicitTransform[1].field_0x58 = uVar2;
  this->CullDistance = (float)param_5;
  *(undefined8 *)&this->RelativeMovement = 0;
  *(undefined4 *)&(this->RelativeMovement).field_0x8 = 0;
  FVar3 = Chaos::Private::CalculateImplicitBoundsTestFlags
                    ((TGeometryParticleHandleImp<double,3,1> *)&stack0x00000018,
                     (FImplicitObject *)this->Particle[0],(FPerShapeData *)this->Implicit[0],
                     (TGeometryParticleHandleImp<double,3,1> *)this->Shape[0],
                     (FImplicitObject *)this->Particle[1],(FPerShapeData *)this->Implicit[1],
                     (float *)this->Shape[1]);
  bVar1 = *(byte *)CONCAT71(extraout_var,FVar3.Bits);
  (this->BoundsTestFlags).Bits = bVar1;
  uVar10 = 0;
  if (param_1 == Enabled) {
    uVar10 = 0x200;
  }
  (this->Flags).Bits = (ushort)(bVar1 >> 5 & 1) << 8 | (this->Flags).Bits & 0xfcff | uVar10 | 2;
  fVar14 = (float)(**(code **)(this->Implicit[0]->_padding_ + 0x28))();
  fVar15 = (float)(**(code **)(this->Implicit[1]->_padding_ + 0x28))();
  uVar4 = Chaos::Private::GetImplicitCollisionType(this->Particle[0],this->Implicit[0]);
  uVar5 = Chaos::Private::GetImplicitCollisionType(this->Particle[1],this->Implicit[1]);
  InitMarginsAndTolerances(this,uVar4,uVar5,fVar14,fVar15);
  param_4 = (TRigidTransform<double,3> *)this->Particle[0];
  (this->Flags).Bits = ((ushort)param_6 << 2 | (this->Flags).Bits & 0xfffb) & 0xfff7;
  fVar15 = FGenericParticleHandleImp::InitialOverlapDepenetrationVelocity
                     ((FGenericParticleHandleImp *)&param_4);
  param_4 = (TRigidTransform<double,3> *)this->Particle[1];
  fVar14 = FGenericParticleHandleImp::InitialOverlapDepenetrationVelocity
                     ((FGenericParticleHandleImp *)&param_4);
  param_4 = (TRigidTransform<double,3> *)this->Particle[0];
  if (fVar14 <= fVar15) {
    fVar14 = fVar15;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  this->InitialOverlapDepenetrationVelocity = fVar14;
  bVar6 = FGenericParticleHandleImp::IsDynamic((FGenericParticleHandleImp *)&param_4);
  param_4 = (TRigidTransform<double,3> *)this->Particle[1];
  bVar7 = FGenericParticleHandleImp::IsDynamic((FGenericParticleHandleImp *)&param_4);
  param_4 = (TRigidTransform<double,3> *)this->Particle[0];
  bVar8 = FGenericParticleHandleImp::OneWayInteraction((FGenericParticleHandleImp *)&param_4);
  param_4 = (TRigidTransform<double,3> *)this->Particle[1];
  bVar9 = FGenericParticleHandleImp::OneWayInteraction((FGenericParticleHandleImp *)&param_4);
  if (((bVar6) || (bVar7)) && ((bVar8 || (bVar9)))) {
    uVar13 = 0x4000;
  }
  uVar10 = (this->Flags).Bits;
  uVar11 = uVar10 & 0x3fff;
  uVar12 = uVar11 | uVar13 | 0x8000;
  (this->Flags).Bits = uVar12;
  if (((bChaos_Collision_AllowGlobalInitialPhi != false) && ((uVar10 & 0xc0) == 0)) &&
     ((!bVar6 || (!bVar7)))) {
    uVar12 = uVar11 | uVar13;
    (this->Flags).Bits = uVar12;
  }
  if ((param_6 != false) && ((uVar4 == '\x06' || (uVar5 == '\x06')))) {
    (this->Flags).Bits = uVar12 | 8;
  }
  return;
}

// SupportsPartialIslandSleeping @ 143a1bc60

bool __thiscall
Chaos::FPBDCollisionConstraint::SupportsPartialIslandSleeping(FPBDCollisionConstraint *this)

{
  return true;
}

// SupportsSleeping @ 143a1bc70

bool __thiscall Chaos::FPBDCollisionConstraint::SupportsSleeping(FPBDCollisionConstraint *this)

{
  return true;
}

// ToString @ 143a1c150

FString * __thiscall
Chaos::FPBDCollisionConstraint::ToString
          (FPBDCollisionConstraint *this,FString *__return_storage_ptr__)

{
  char cVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
  pwVar3 = L"GeometryCollection[%d]";
  cVar1 = *(char *)((longlong)&this->Particle[1]->_padding_ + 4);
  if (cVar1 == '\0') {
    pwVar2 = L"Static[%d]";
LAB_143a1c22c:
    ::FString::PrintfImpl(&local_48,pwVar2);
  }
  else {
    if (cVar1 == '\x01') {
      pwVar2 = L"Kinemmatic[%d]";
      goto LAB_143a1c22c;
    }
    if (cVar1 == '\x02') {
      pwVar2 = L"Dynamic[%d]";
      goto LAB_143a1c22c;
    }
    if (cVar1 == '\x03') {
      pwVar2 = L"Clustered[%d]";
      goto LAB_143a1c22c;
    }
    if (cVar1 == '\x06') {
      pwVar2 = L"GeometryCollection[%d]";
      goto LAB_143a1c22c;
    }
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  cVar1 = *(char *)((longlong)&this->Particle[0]->_padding_ + 4);
  if (cVar1 == '\0') {
    pwVar3 = L"Static[%d]";
  }
  else if (cVar1 == '\x01') {
    pwVar3 = L"Kinemmatic[%d]";
  }
  else if (cVar1 == '\x02') {
    pwVar3 = L"Dynamic[%d]";
  }
  else if (cVar1 == '\x03') {
    pwVar3 = L"Clustered[%d]";
  }
  else if (cVar1 != '\x06') {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    goto LAB_143a1c2b5;
  }
  ::FString::PrintfImpl(&local_58,pwVar3);
LAB_143a1c2b5:
  ::FString::PrintfImpl(__return_storage_ptr__,L"Particle:%s, Levelset:%s, AccumulatedImpulse:%s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TryAddManifoldContact @ 143a1c320

bool __thiscall
Chaos::FPBDCollisionConstraint::TryAddManifoldContact
          (FPBDCollisionConstraint *this,TContactPoint<double> *param_1)

{
  float *pfVar1;
  byte *pbVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  ForElementType<Chaos::FManifoldPoint> FVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  ForElementType<Chaos::FManifoldPoint> FVar13;
  longlong lVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fStack_7c;
  
  dVar4 = Chaos_Manifold_Tolerances.ManifoldPointNormalThreshold;
  iVar12 = (this->ManifoldPoints).ArrayNum;
  dVar8 = (double)this->CollisionTolerance *
          Chaos_Manifold_Tolerances.ManifoldPointPositionToleranceScale;
  if (iVar12 != 0) {
    uVar15 = 0;
    dVar8 = dVar8 * dVar8;
    if (0 < iVar12) {
      lVar14 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar15 < (this->ManifoldPoints).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        FVar6 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
        dVar3 = *(double *)&param_1->ShapeContactNormal;
        FVar13 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
        if (FVar6 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
          FVar13 = FVar6;
        }
        if ((double)*(float *)(lVar14 + 0x1c + (longlong)FVar13) *
            *(double *)&(param_1->ShapeContactNormal).field_0x8 +
            (double)*(float *)(lVar14 + 0x18 + (longlong)FVar13) * dVar3 +
            (double)*(float *)(lVar14 + 0x20 + (longlong)FVar13) *
            *(double *)&(param_1->ShapeContactNormal).field_0x10 < dVar4) {
          return false;
        }
        fVar21 = (float)*(double *)&param_1->ShapeContactPoints[0].field_0x8;
        fVar20 = (float)*(double *)&param_1->ShapeContactPoints[0].field_0x10;
        dVar17 = (double)(*(float *)(lVar14 + (longlong)FVar13) -
                         (float)*(double *)param_1->ShapeContactPoints);
        dVar18 = (double)(*(float *)(lVar14 + 4 + (longlong)FVar13) - fVar21);
        dVar16 = (double)(*(float *)(lVar14 + 8 + (longlong)FVar13) - fVar20);
        if ((dVar18 * dVar18 + dVar17 * dVar17 + dVar16 * dVar16 < dVar8) &&
           (dVar19 = (double)(*(float *)(lVar14 + 0x10 + (longlong)FVar13) -
                             (float)*(double *)&param_1->ShapeContactPoints[1].field_0x8),
           dVar16 = *(double *)(param_1->ShapeContactPoints + 1),
           dVar18 = (double)(*(float *)(lVar14 + 0x14 + (longlong)FVar13) -
                            (float)*(double *)&param_1->ShapeContactPoints[1].field_0x10),
           dVar17 = (double)(*(float *)(lVar14 + 0xc + (longlong)FVar13) - (float)dVar16),
           dVar19 * dVar19 + dVar17 * dVar17 + dVar18 * dVar18 < dVar8)) {
          dVar8 = param_1->Phi;
          if (dVar8 < (double)*(float *)(lVar14 + 0x24 + (longlong)FVar13)) {
            fVar5 = (float)param_1->FaceIndex;
            dVar4 = *(double *)&param_1->ShapeContactPoints[1].field_0x8;
            dVar17 = *(double *)&param_1->ShapeContactPoints[1].field_0x10;
            dVar18 = *(double *)&(param_1->ShapeContactNormal).field_0x10;
            dVar19 = *(double *)&(param_1->ShapeContactNormal).field_0x8;
            fStack_7c = (float)CONCAT31(fStack_7c._1_3_,param_1->ContactType);
            pfVar1 = (float *)(lVar14 + (longlong)FVar13);
            *pfVar1 = (float)*(double *)param_1->ShapeContactPoints;
            pfVar1[1] = fVar21;
            pfVar1[2] = fVar20;
            pfVar1[3] = (float)dVar16;
            pfVar1 = (float *)(lVar14 + 0x10 + (longlong)FVar13);
            *pfVar1 = (float)dVar4;
            pfVar1[1] = (float)dVar17;
            pfVar1[2] = (float)dVar3;
            pfVar1[3] = (float)dVar19;
            pfVar1 = (float *)(lVar14 + 0x20 + (longlong)FVar13);
            *pfVar1 = (float)dVar18;
            pfVar1[1] = (float)dVar8;
            pfVar1[2] = fVar5;
            pfVar1[3] = fStack_7c;
            dVar8 = *(double *)&param_1->ShapeContactPoints[0].field_0x8;
            dVar4 = *(double *)&param_1->ShapeContactPoints[0].field_0x10;
            *(float *)(lVar14 + 0x54 + (longlong)FVar13) =
                 (float)*(double *)param_1->ShapeContactPoints;
            *(float *)(lVar14 + 0x58 + (longlong)FVar13) = (float)dVar8;
            *(float *)(lVar14 + 0x5c + (longlong)FVar13) = (float)dVar4;
            dVar8 = *(double *)&param_1->ShapeContactPoints[1].field_0x8;
            dVar4 = *(double *)&param_1->ShapeContactPoints[1].field_0x10;
            *(float *)(lVar14 + 0x60 + (longlong)FVar13) =
                 (float)*(double *)(param_1->ShapeContactPoints + 1);
            *(float *)(lVar14 + 100 + (longlong)FVar13) = (float)dVar8;
            *(float *)(lVar14 + 0x68 + (longlong)FVar13) = (float)dVar4;
            pbVar2 = (byte *)(lVar14 + 0x30 + (longlong)FVar13);
            *pbVar2 = *pbVar2 & 0xfd;
            pbVar2 = (byte *)(lVar14 + 0x30 + (longlong)FVar13);
            *pbVar2 = *pbVar2 | 4;
            dVar8 = param_1->Phi;
            dVar4 = GetPhi(this);
            if (dVar8 < dVar4) {
              this->ClosestManifoldPointIndex = uVar15;
            }
          }
          return true;
        }
        iVar12 = (this->ManifoldPoints).ArrayNum;
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + 0x6c;
      } while ((int)uVar15 < iVar12);
    }
    if ((iVar12 == 4) && (bChaos_Collision_EnableManifoldGJKInject != false)) {
      bVar9 = TryInsertManifoldContact(this,param_1);
      return bVar9;
    }
  }
  return false;
}

// TryInsertManifoldContact @ 143a1c6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FPBDCollisionConstraint::TryInsertManifoldContact
          (FPBDCollisionConstraint *this,TContactPoint<double> *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  ForElementType<Chaos::FManifoldPoint> FVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FPBDCollisionConstraint *pFVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  ulonglong uVar14;
  ForElementType<Chaos::FManifoldPoint> FVar15;
  int iVar16;
  double *pdVar17;
  int iVar18;
  longlong lVar19;
  TArray<Chaos::FManifoldPoint,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar20;
  longlong lVar21;
  char *pcVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  uint uVar34;
  uint uVar35;
  double dVar36;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  double *local_218;
  double local_210;
  double local_208;
  double local_200;
  FPBDCollisionConstraint *local_1f8;
  double local_1f0 [17];
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  double local_118;
  double local_110;
  double local_108 [4];
  undefined8 local_e8;
  char local_e0 [4];
  undefined1 local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_1f8 = this;
  if (((this->ManifoldPoints).ArrayNum != 4) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ManifoldPoints.Num() == 4",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionConstraint.cpp"
                          ,0x3e2,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  iVar23 = 0;
  lVar19 = 0;
  local_218 = local_108;
  lVar21 = 0;
  pcVar22 = local_e0;
  pdVar17 = local_1f0 + 2;
  do {
    iVar16 = (this->ManifoldPoints).ArrayNum;
    if ((iVar16 <= iVar23) &&
       (local_228 = lVar21, local_220 = (longlong)iVar16,
       bVar11 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
    FVar5 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
    FVar15 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
    if (FVar5 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
      FVar15 = FVar5;
    }
    iVar23 = iVar23 + 1;
    lVar21 = lVar21 + 1;
    fVar3 = *(float *)(lVar19 + 0x10 + (longlong)FVar15);
    fVar4 = *(float *)(lVar19 + 0x14 + (longlong)FVar15);
    pdVar17[-1] = (double)*(float *)(lVar19 + 0xc + (longlong)FVar15);
    *pdVar17 = (double)fVar3;
    pdVar17[1] = (double)fVar4;
    pdVar17 = pdVar17 + 3;
    fVar3 = *(float *)(lVar19 + 0x24 + (longlong)FVar15);
    lVar19 = lVar19 + 0x6c;
    *pcVar22 = '\0';
    pcVar22 = pcVar22 + 1;
    *local_218 = (double)fVar3;
    local_218 = local_218 + 1;
  } while (iVar23 < 4);
  local_1f0[0xf] = *(double *)&param_1->ShapeContactPoints[1].field_0x10;
  local_1f0[0xd] = *(double *)(param_1->ShapeContactPoints + 1);
  local_1f0[0xe] = *(double *)&param_1->ShapeContactPoints[1].field_0x8;
  iVar23 = -1;
  local_dc = 0;
  local_e8 = param_1->Phi;
  local_168 = *(double *)&param_1->ShapeContactNormal;
  dStack_160 = *(double *)&(param_1->ShapeContactNormal).field_0x8;
  uVar14 = (ulonglong)(local_108[1] < local_108[0]);
  local_158 = *(double *)&(param_1->ShapeContactNormal).field_0x10;
  if (local_108[2] < local_108[uVar14]) {
    uVar14 = 2;
  }
  if (local_108[3] < local_108[uVar14]) {
    uVar14 = 3;
  }
  iVar16 = 4;
  if (param_1->Phi < local_108[uVar14]) {
    uVar14 = 4;
  }
  local_e0[uVar14] = '\x01';
  dVar29 = __real_ffefffffffffffff;
  iVar18 = -1;
  if ((local_e0[0] == '\0') &&
     (dVar26 = (local_1f0[1] - local_1f0[uVar14 * 3 + 1]) *
               (local_1f0[1] - local_1f0[uVar14 * 3 + 1]) +
               (local_1f0[2] - local_1f0[uVar14 * 3 + 2]) *
               (local_1f0[2] - local_1f0[uVar14 * 3 + 2]) +
               (local_1f0[3] - local_1f0[uVar14 * 3 + 3]) *
               (local_1f0[3] - local_1f0[uVar14 * 3 + 3]), iVar18 = -1,
     __real_ffefffffffffffff < dVar26)) {
    iVar18 = 0;
    dVar29 = dVar26;
  }
  if ((local_e0[1] == '\0') &&
     (dVar26 = (local_1f0[4] - local_1f0[uVar14 * 3 + 1]) *
               (local_1f0[4] - local_1f0[uVar14 * 3 + 1]) +
               (local_1f0[5] - local_1f0[uVar14 * 3 + 2]) *
               (local_1f0[5] - local_1f0[uVar14 * 3 + 2]) +
               (local_1f0[6] - local_1f0[uVar14 * 3 + 3]) *
               (local_1f0[6] - local_1f0[uVar14 * 3 + 3]), dVar29 < dVar26)) {
    dVar29 = dVar26;
    iVar18 = 1;
  }
  if ((local_e0[2] == '\0') &&
     (dVar26 = (local_1f0[7] - local_1f0[uVar14 * 3 + 1]) *
               (local_1f0[7] - local_1f0[uVar14 * 3 + 1]) +
               (local_1f0[8] - local_1f0[uVar14 * 3 + 2]) *
               (local_1f0[8] - local_1f0[uVar14 * 3 + 2]) +
               (local_1f0[9] - local_1f0[uVar14 * 3 + 3]) *
               (local_1f0[9] - local_1f0[uVar14 * 3 + 3]), dVar29 < dVar26)) {
    dVar29 = dVar26;
    iVar18 = 2;
  }
  if ((local_e0[3] == '\0') &&
     (dVar26 = (local_1f0[10] - local_1f0[uVar14 * 3 + 1]) *
               (local_1f0[10] - local_1f0[uVar14 * 3 + 1]) +
               (local_1f0[0xb] - local_1f0[uVar14 * 3 + 2]) *
               (local_1f0[0xb] - local_1f0[uVar14 * 3 + 2]) +
               (local_1f0[0xc] - local_1f0[uVar14 * 3 + 3]) *
               (local_1f0[0xc] - local_1f0[uVar14 * 3 + 3]), dVar29 < dVar26)) {
    dVar29 = dVar26;
    iVar18 = 3;
  }
  dVar28 = local_1f0[0xf] - local_1f0[uVar14 * 3 + 3];
  dVar7 = local_1f0[0xd] - local_1f0[uVar14 * 3 + 1];
  dVar26 = local_1f0[0xe] - local_1f0[uVar14 * 3 + 2];
  if (((dVar7 * dVar7 + dVar26 * dVar26 + dVar28 * dVar28 <= dVar29) &&
      (iVar16 = iVar18, iVar18 == -1)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SelectedContactIndices[1] != INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionConstraint.cpp"
                          ,0x41a,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  pFVar10 = local_1f8;
  dVar29 = __real_7fefffffffffffff;
  pcVar22 = local_e0;
  pdVar17 = local_1f0 + 2;
  iVar18 = -1;
  uVar34 = 0;
  uVar35 = 0;
  iVar13 = 0;
  lVar19 = (longlong)iVar16;
  local_150 = 0.0;
  local_210 = __real_3ff0000000000000;
  local_e0[lVar19] = '\x01';
  do {
    if (*pcVar22 == '\0') {
      dVar26 = pdVar17[1] - local_1f0[lVar19 * 3 + 3];
      dVar28 = local_1f0[lVar19 * 3 + 3] - local_1f0[uVar14 * 3 + 3];
      dVar27 = pdVar17[-1] - local_1f0[lVar19 * 3 + 1];
      dVar7 = local_1f0[lVar19 * 3 + 1] - local_1f0[uVar14 * 3 + 1];
      dVar30 = *pdVar17 - local_1f0[lVar19 * 3 + 2];
      dVar32 = local_1f0[lVar19 * 3 + 2] - local_1f0[uVar14 * 3 + 2];
      dVar26 = (dVar28 * dVar27 - dVar7 * dVar26) * dStack_160 +
               (dVar32 * dVar26 - dVar28 * dVar30) * local_168 +
               (dVar7 * dVar30 - dVar32 * dVar27) * local_158;
      uVar24 = SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar25 = (uint)((ulonglong)dVar26 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar35,uVar34) <= (double)CONCAT44(uVar25,uVar24) &&
          (double)CONCAT44(uVar25,uVar24) != (double)CONCAT44(uVar35,uVar34)) {
        uVar34 = uVar24;
        uVar35 = uVar25;
        iVar18 = iVar13;
        if (dVar26 <= 0.0) {
          if (0.0 <= dVar26) {
            local_210 = 0.0;
          }
          else {
            local_210 = __real_bff0000000000000;
          }
        }
        else {
          local_210 = __real_3ff0000000000000;
        }
      }
    }
    iVar13 = iVar13 + 1;
    pcVar22 = pcVar22 + 1;
    pdVar17 = pdVar17 + 3;
  } while (iVar13 < 5);
  if (iVar18 != -1) {
    lVar21 = (longlong)iVar18;
    pcVar22 = local_e0;
    iVar16 = 0;
    pdVar17 = local_1f0 + 2;
    local_e0[lVar21] = '\x01';
    do {
      if (*pcVar22 == '\0') {
        dVar26 = pdVar17[1];
        dVar28 = *pdVar17;
        local_1f0[0] = local_1f0[lVar19 * 3 + 2] - dVar28;
        dVar32 = local_1f0[lVar21 * 3 + 2] - dVar28;
        dVar7 = pdVar17[-1];
        dVar30 = local_1f0[lVar21 * 3 + 3] - dVar26;
        dVar8 = local_1f0[lVar21 * 3 + 1] - dVar7;
        local_200 = dVar26;
        dVar36 = local_1f0[lVar19 * 3 + 1] - dVar7;
        dVar9 = local_1f0[lVar19 * 3 + 3] - dVar26;
        dVar27 = dVar26 - local_1f0[lVar19 * 3 + 3];
        dVar33 = *pdVar17 - local_1f0[lVar19 * 3 + 2];
        dVar31 = dVar7 - local_1f0[lVar19 * 3 + 1];
        local_118 = local_1f0[uVar14 * 3 + 2] - dVar28;
        local_110 = local_1f0[uVar14 * 3 + 1] - dVar7;
        local_200 = pdVar17[1] - local_1f0[lVar21 * 3 + 3];
        local_208 = *pdVar17 - local_1f0[lVar21 * 3 + 2];
        local_218 = (double *)(pdVar17[-1] - local_1f0[lVar21 * 3 + 1]);
        local_1f0[0] = (((dVar26 - local_1f0[uVar14 * 3 + 3]) * dVar36 -
                        (dVar7 - local_1f0[uVar14 * 3 + 1]) * dVar9) * dStack_160 +
                        (dVar9 * (dVar28 - local_1f0[uVar14 * 3 + 2]) -
                        (dVar26 - local_1f0[uVar14 * 3 + 3]) * local_1f0[0]) * local_168 +
                       ((dVar7 - local_1f0[uVar14 * 3 + 1]) * local_1f0[0] -
                       dVar36 * (dVar28 - local_1f0[uVar14 * 3 + 2])) * local_158) * local_210;
        dVar28 = ((dVar30 * dVar33 - dVar27 * dVar32) * local_168 +
                  (dVar27 * dVar8 - dVar31 * dVar30) * dStack_160 +
                 (dVar31 * dVar32 - dVar8 * dVar33) * local_158) * local_210;
        if (local_1f0[0] <= dVar28) {
          local_1f0[0] = dVar28;
        }
        dVar28 = (((local_1f0[uVar14 * 3 + 3] - dVar26) * local_208 - local_200 * local_118) *
                  local_168 +
                  (local_200 * local_110 - (double)local_218 * (local_1f0[uVar14 * 3 + 3] - dVar26))
                  * dStack_160 + ((double)local_218 * local_118 - local_110 * local_208) * local_158
                 ) * local_210;
        dVar26 = local_1f0[0];
        if (local_1f0[0] <= dVar28) {
          dVar26 = dVar28;
        }
        if (local_150 < dVar26) {
          local_150 = dVar26;
          iVar23 = iVar16;
        }
      }
      iVar16 = iVar16 + 1;
      pcVar22 = pcVar22 + 1;
      pdVar17 = pdVar17 + 3;
    } while (iVar16 < 5);
    if (iVar23 != -1) {
      pcVar22 = local_e0;
      pTVar20 = &local_1f8->ManifoldPoints;
      lVar19 = 0;
      iVar16 = 0;
      lVar21 = 0;
      local_e0[iVar23] = '\x01';
      do {
        if (*pcVar22 == '\0') {
          iStack_120 = param_1->FaceIndex;
          uStack_11c = CONCAT31(uStack_11c._1_3_,param_1->ContactType);
          iVar23 = (pFVar10->ManifoldPoints).ArrayNum;
          local_220 = (longlong)iVar23;
          local_148 = (float)*(double *)param_1->ShapeContactPoints;
          fStack_13c = (float)*(double *)(param_1->ShapeContactPoints + 1);
          fStack_144 = (float)*(double *)&param_1->ShapeContactPoints[0].field_0x8;
          fStack_134 = (float)*(double *)&param_1->ShapeContactPoints[1].field_0x10;
          fStack_140 = (float)*(double *)&param_1->ShapeContactPoints[0].field_0x10;
          fStack_12c = (float)*(double *)&(param_1->ShapeContactNormal).field_0x8;
          local_138 = (float)*(double *)&param_1->ShapeContactPoints[1].field_0x8;
          fStack_124 = (float)param_1->Phi;
          fStack_130 = (float)*(double *)&param_1->ShapeContactNormal;
          local_128 = (float)*(double *)&(param_1->ShapeContactNormal).field_0x10;
          if ((iVar23 <= iVar16) &&
             (local_228 = lVar21,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
          FVar5 = (pFVar10->ManifoldPoints).AllocatorInstance.SecondaryData;
          FVar15 = (ForElementType<Chaos::FManifoldPoint>)pTVar20;
          if (FVar5 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
            FVar15 = FVar5;
          }
          *(undefined8 *)(lVar19 + (longlong)FVar15) = CONCAT44(fStack_144,local_148);
          ((undefined8 *)(lVar19 + (longlong)FVar15))[1] = CONCAT44(fStack_13c,fStack_140);
          puVar1 = (undefined8 *)(lVar19 + 0x10 + (longlong)FVar15);
          *puVar1 = CONCAT44(fStack_134,local_138);
          puVar1[1] = CONCAT44(fStack_12c,fStack_130);
          puVar1 = (undefined8 *)(lVar19 + 0x20 + (longlong)FVar15);
          *puVar1 = CONCAT44(fStack_124,local_128);
          puVar1[1] = CONCAT44(uStack_11c,iStack_120);
          iVar23 = (pFVar10->ManifoldPoints).ArrayNum;
          local_220 = (longlong)iVar23;
          dVar26 = *(double *)param_1->ShapeContactPoints;
          dVar28 = *(double *)&param_1->ShapeContactPoints[0].field_0x8;
          dVar7 = *(double *)&param_1->ShapeContactPoints[0].field_0x10;
          if ((iVar23 <= iVar16) &&
             (local_228 = lVar21,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
          FVar5 = (pFVar10->ManifoldPoints).AllocatorInstance.SecondaryData;
          FVar15 = (ForElementType<Chaos::FManifoldPoint>)pTVar20;
          if (FVar5 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
            FVar15 = FVar5;
          }
          *(float *)(lVar19 + 0x54 + (longlong)FVar15) = (float)dVar26;
          *(float *)(lVar19 + 0x58 + (longlong)FVar15) = (float)dVar28;
          *(float *)(lVar19 + 0x5c + (longlong)FVar15) = (float)dVar7;
          iVar23 = (pFVar10->ManifoldPoints).ArrayNum;
          local_220 = (longlong)iVar23;
          dVar26 = *(double *)(param_1->ShapeContactPoints + 1);
          dVar28 = *(double *)&param_1->ShapeContactPoints[1].field_0x8;
          dVar7 = *(double *)&param_1->ShapeContactPoints[1].field_0x10;
          if ((iVar23 <= iVar16) &&
             (local_228 = lVar21,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
          FVar5 = (pFVar10->ManifoldPoints).AllocatorInstance.SecondaryData;
          FVar15 = (ForElementType<Chaos::FManifoldPoint>)pTVar20;
          if (FVar5 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
            FVar15 = FVar5;
          }
          *(float *)(lVar19 + 0x60 + (longlong)FVar15) = (float)dVar26;
          *(float *)(lVar19 + 100 + (longlong)FVar15) = (float)dVar28;
          *(float *)(lVar19 + 0x68 + (longlong)FVar15) = (float)dVar7;
          iVar23 = (pFVar10->ManifoldPoints).ArrayNum;
          local_220 = (longlong)iVar23;
          if ((iVar23 <= iVar16) &&
             (local_228 = lVar21,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
          FVar5 = (pFVar10->ManifoldPoints).AllocatorInstance.SecondaryData;
          FVar15 = (ForElementType<Chaos::FManifoldPoint>)pTVar20;
          if (FVar5 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
            FVar15 = FVar5;
          }
          pbVar2 = (byte *)(lVar19 + 0x30 + (longlong)FVar15);
          *pbVar2 = *pbVar2 & 0xfd;
          uVar34 = local_1f8->ClosestManifoldPointIndex;
          dVar26 = dVar29;
          if (uVar34 != 0xffffffff) {
            iVar23 = (pFVar10->ManifoldPoints).ArrayNum;
            local_220 = (longlong)iVar23;
            uVar35 = 0;
            if ((int)uVar34 < iVar23) {
              uVar35 = ~uVar34 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (local_228 = (longlong)(int)uVar34,
               bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              uVar12 = (*pcVar6)();
              return (bool)uVar12;
            }
            FVar5 = (pFVar10->ManifoldPoints).AllocatorInstance.SecondaryData;
            FVar15 = (ForElementType<Chaos::FManifoldPoint>)pTVar20;
            if (FVar5 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
              FVar15 = FVar5;
            }
            dVar26 = (double)*(float *)((longlong)(int)uVar34 * 0x6c + 0x24 + (longlong)FVar15);
          }
          if (param_1->Phi <= dVar26 && dVar26 != param_1->Phi) {
            local_1f8->ClosestManifoldPointIndex = iVar16;
          }
        }
        iVar16 = iVar16 + 1;
        lVar21 = lVar21 + 1;
        pcVar22 = pcVar22 + 1;
        lVar19 = lVar19 + 0x6c;
        if (3 < iVar16) {
          return true;
        }
      } while( true );
    }
  }
  return false;
}

// TryRestoreManifold @ 143a1d200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall Chaos::FPBDCollisionConstraint::TryRestoreManifold(FPBDCollisionConstraint *this)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  ForElementType<Chaos::FManifoldPoint> FVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ForElementType<Chaos::FManifoldPoint> FVar17;
  ForElementType<Chaos::FManifoldPoint> FVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 in_XMM4_Qb;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined1 local_1b8 [40];
  double dStack_190;
  double local_188;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined1 local_128 [16];
  double local_118;
  undefined1 local_110 [16];
  double local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  
  iVar21 = (this->ManifoldPoints).ArrayNum;
  local_f8 = ___xmm_3fe00000000000003fe999999999999a;
  uStack_f0 = _UNK_150af0138;
  dVar9 = (double)this->CollisionTolerance;
  local_d8 = ___xmm_3ff00000000000003fefff2e48e8a71e;
  uStack_d0 = _UNK_150af0158;
  local_c8 = __real_3fe6666666666666;
  local_e8 = ___xmm_3feffe5c91d14e3c3fc999999999999a;
  uStack_e0 = _UNK_150af0148;
  if (iVar21 < 1) {
    uVar51 = (undefined4)__real_3feffe5c91d14e3c;
    uVar52 = (undefined4)((ulonglong)__real_3feffe5c91d14e3c >> 0x20);
    dVar37 = __real_3fe0000000000000;
  }
  else {
    uVar51 = (undefined4)__real_3fefff2e48e8a71e;
    uVar52 = (undefined4)((ulonglong)__real_3fefff2e48e8a71e >> 0x20);
    dVar37 = __real_3fc999999999999a;
  }
  dVar37 = dVar9 * dVar37;
  (this->Flags).Bits = (this->Flags).Bits & 0xffdf;
  this->ClosestManifoldPointIndex = -1;
  dVar9 = dVar9 * dVar9 * __real_3fe47ae147ae147c;
  if ((((this->Flags).Bits & 0x810) == 0x10) && (0.0 < dVar37)) {
    local_158 = *(undefined1 (*) [16])&this->ShapeWorldTransforms[0].field_0x20;
    local_140 = *(double *)&this->ShapeWorldTransforms[1].field_0x20;
    dStack_138 = *(double *)&this->ShapeWorldTransforms[1].field_0x28;
    auVar11._4_8_ = in_XMM4_Qb;
    auVar11._0_4_ = local_158._4_4_;
    auVar29._0_8_ = auVar11._0_8_ << 0x20;
    auVar29._8_4_ = local_158._8_4_;
    auVar29._12_4_ = local_158._12_4_;
    local_130 = *(double *)&this->ShapeWorldTransforms[1].field_0x30;
    local_148 = *(double *)&this->ShapeWorldTransforms[0].field_0x30;
    dVar44 = (local_148 - local_130) -
             (double)*(float *)&(this->LastShapeWorldPositionDelta).field_0x8;
    dVar39 = (auVar29._8_8_ - dStack_138) -
             (double)*(float *)&(this->LastShapeWorldPositionDelta).field_0x4;
    dVar33 = (local_158._0_8_ - local_140) - (double)*(float *)&this->LastShapeWorldPositionDelta;
    if (((double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar33,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar37)
       && (((double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar39,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            dVar37 &&
           ((double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar44,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            dVar37)))) {
      dVar8 = *(double *)&this->ShapeWorldTransforms[1].field_0x10;
      dVar10 = *(double *)&this->ShapeWorldTransforms[1].field_0x18;
      dVar34 = *(double *)(this->ShapeWorldTransforms + 1);
      dVar38 = *(double *)&this->ShapeWorldTransforms[1].field_0x8;
      dVar37 = *(double *)this->ShapeWorldTransforms *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar33 = *(double *)&this->ShapeWorldTransforms[0].field_0x8 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar39 = *(double *)&this->ShapeWorldTransforms[0].field_0x10 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar44 = *(double *)&this->ShapeWorldTransforms[0].field_0x18 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar53 = (undefined4)((ulonglong)dVar44 >> 0x20);
      auVar41._8_4_ = SUB84(dVar44,0);
      auVar41._0_8_ = dVar39;
      auVar41._12_4_ = uVar53;
      dVar40 = auVar41._8_8_;
      auVar43._8_4_ = SUB84(dVar44,0);
      auVar43._0_8_ = dVar40;
      auVar43._12_4_ = uVar53;
      auVar27._8_4_ = SUB84(dVar33,0);
      auVar27._0_8_ = dVar33;
      auVar27._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      auVar22._8_4_ = SUB84(dVar39,0);
      auVar22._0_8_ = dVar39;
      auVar22._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      dVar37 = (double)*(float *)&(this->LastShapeWorldRotationDelta).field_0x8 *
               (dVar37 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                dVar40 * dVar8 +
                dVar33 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar39 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]) +
               (double)*(float *)&(this->LastShapeWorldRotationDelta).field_0xc *
               (dVar37 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                dVar44 * dVar10 +
                dVar33 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar39 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]) +
               (double)*(float *)&(this->LastShapeWorldRotationDelta).field_0x4 *
               (dVar37 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                auVar43._8_8_ * dVar38 +
                auVar27._8_8_ * dVar10 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar22._8_8_ * dVar34 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]) +
               (double)*(float *)&this->LastShapeWorldRotationDelta *
               (dVar37 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar40 * dVar34 +
                dVar33 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar39 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]);
      if ((double)CONCAT44(uVar52,uVar51) <= dVar37 && dVar37 != (double)CONCAT44(uVar52,uVar51)) {
        if (0 < iVar21) {
          TRigidTransform<double,3>::GetRelativeTransformNoScale
                    (this->ShapeWorldTransforms,(TRigidTransform<double,3> *)local_1b8,
                     this->ShapeWorldTransforms + 1);
          dVar37 = __real_7fefffffffffffff;
          uVar19 = 0;
          lVar20 = 0;
          uVar51 = local_1b8._16_4_;
          uVar52 = local_1b8._20_4_;
          uVar53 = local_1b8._24_4_;
          uVar54 = local_1b8._28_4_;
          uVar55 = local_1b8._0_4_;
          uVar56 = local_1b8._4_4_;
          uVar57 = local_1b8._8_4_;
          uVar58 = local_1b8._12_4_;
          do {
            uVar14 = 0;
            if ((int)uVar19 < (this->ManifoldPoints).ArrayNum) {
              uVar14 = ~uVar19 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar13 = (*pcVar5)();
              return (bool)uVar13;
            }
            FVar4 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
            FVar18 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
            if (FVar4 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
              FVar18 = FVar4;
            }
            bVar2 = *(byte *)(lVar20 + 0x30 + (longlong)FVar18);
            if ((bVar2 & 1) == 0) {
              uVar1 = *(undefined8 *)(lVar20 + 0x54 + (longlong)FVar18);
              dVar33 = (double)(float)uVar1;
              dVar39 = (double)(float)((ulonglong)uVar1 >> 0x20);
              uVar46 = SUB84(dVar39,0);
              uVar47 = (undefined4)((ulonglong)dVar39 >> 0x20);
              local_118 = (double)*(float *)(lVar20 + 0x5c + (longlong)FVar18);
              auVar48._8_4_ = uVar46;
              auVar48._0_8_ = dVar33;
              auVar48._12_4_ = uVar47;
              auVar28._8_4_ = uVar46;
              auVar28._0_8_ = dVar33;
              auVar28._12_4_ = uVar47;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = local_118;
              auVar29 = blendpd(auVar28,auVar6,2);
              auVar23._8_4_ = uVar46;
              auVar23._0_8_ = dVar33;
              auVar23._12_4_ = uVar47;
              auVar42._4_4_ = uVar56;
              auVar42._0_4_ = uVar55;
              auVar42._8_4_ = uVar57;
              auVar42._12_4_ = uVar58;
              auVar7._4_4_ = uVar52;
              auVar7._0_4_ = uVar51;
              auVar7._8_4_ = uVar53;
              auVar7._12_4_ = uVar54;
              auVar43 = blendpd(auVar42,auVar7,2);
              auVar49._0_8_ =
                   auVar48._8_8_ * (double)CONCAT44(uVar56,uVar55) -
                   dVar33 * (double)CONCAT44(uVar58,uVar57);
              auVar49._8_8_ =
                   local_118 * (double)CONCAT44(uVar58,uVar57) -
                   auVar23._8_8_ * (double)CONCAT44(uVar52,uVar51);
              auVar30._0_8_ =
                   auVar29._0_8_ * (double)CONCAT44(uVar52,uVar51) - local_118 * auVar43._0_8_;
              auVar30._8_8_ = auVar29._8_8_ * (double)CONCAT44(uVar54,uVar53) - auVar43._8_8_ * 0.0;
              local_128._8_4_ = uVar46;
              local_128._0_8_ = dVar33;
              local_128._12_4_ = uVar47;
              auVar29 = blendpd(auVar49,auVar30,2);
              dVar44 = auVar49._8_8_ + auVar49._8_8_;
              dVar8 = auVar30._0_8_ + auVar30._0_8_;
              uVar46 = SUB84(dVar8,0);
              uVar47 = (undefined4)((ulonglong)dVar8 >> 0x20);
              auVar50._0_8_ = auVar29._0_8_ + auVar29._0_8_;
              auVar50._8_8_ = auVar29._8_8_ + auVar29._8_8_;
              auVar35._8_4_ = uVar46;
              auVar35._0_8_ = dVar44;
              auVar35._12_4_ = uVar47;
              auVar24._8_4_ = uVar46;
              auVar24._0_8_ = dVar44;
              auVar24._12_4_ = uVar47;
              auVar31._8_4_ = uVar46;
              auVar31._0_8_ = dVar44;
              auVar31._12_4_ = uVar47;
              auVar29 = blendpd(auVar31,auVar50,2);
              auVar36._0_8_ =
                   auVar35._8_8_ * (double)CONCAT44(uVar56,uVar55) -
                   dVar44 * (double)CONCAT44(uVar58,uVar57);
              auVar36._8_8_ =
                   auVar50._0_8_ * (double)CONCAT44(uVar58,uVar57) -
                   auVar24._8_8_ * (double)CONCAT44(uVar52,uVar51);
              auVar25._8_4_ = SUB84(auVar50._8_8_,0);
              auVar25._0_8_ = auVar50._0_8_;
              auVar25._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
              auVar32._0_8_ =
                   auVar29._0_8_ * (double)CONCAT44(uVar52,uVar51) - auVar50._0_8_ * auVar43._0_8_;
              auVar32._8_8_ =
                   auVar29._8_8_ * (double)CONCAT44(uVar54,uVar53) - auVar25._8_8_ * auVar43._8_8_;
              auVar26._8_4_ = SUB84(auVar36._8_8_,0);
              auVar26._0_8_ = auVar36._0_8_;
              auVar26._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
              auVar29 = blendpd(auVar36,auVar32,2);
              dVar44 = dVar44 * (double)CONCAT44(uVar54,uVar53) + dVar33 + auVar26._8_8_ +
                       (double)local_1b8._32_8_;
              dVar8 = dVar8 * (double)CONCAT44(uVar54,uVar53) + dVar39 + auVar32._0_8_ + dStack_190;
              local_100 = auVar50._0_8_ * (double)CONCAT44(uVar54,uVar53) + local_118 +
                          auVar29._0_8_ + local_188;
              dVar39 = local_100 - (double)*(float *)(lVar20 + 0x68 + (longlong)FVar18);
              dVar33 = dVar8 - (double)*(float *)(lVar20 + 100 + (longlong)FVar18);
              dVar45 = dVar44 - (double)*(float *)(lVar20 + 0x60 + (longlong)FVar18);
              dVar34 = (double)*(float *)(lVar20 + 0x18 + (longlong)FVar18);
              dVar38 = (double)*(float *)(lVar20 + 0x1c + (longlong)FVar18);
              dVar40 = (double)*(float *)(lVar20 + 0x20 + (longlong)FVar18);
              local_110._8_4_ = SUB84(dVar8,0);
              local_110._0_8_ = dVar44;
              local_110._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
              dVar10 = dVar33 * dVar38 + dVar45 * dVar34 + dVar39 * dVar40;
              dVar34 = dVar10 * dVar34;
              dVar38 = dVar10 * dVar38;
              dVar40 = dVar10 * dVar40;
              dVar45 = dVar45 - dVar34;
              dVar33 = dVar33 - dVar38;
              dVar39 = dVar39 - dVar40;
              if (dVar9 <= dVar45 * dVar45 + dVar33 * dVar33 + dVar39 * dVar39) {
                *(byte *)(lVar20 + 0x30 + (longlong)FVar18) = bVar2 & 0xe9 | 1;
                goto LAB_143a1d8cb;
              }
              *(float *)(lVar20 + 0xc + (longlong)FVar18) = (float)(dVar44 - dVar34);
              *(float *)(lVar20 + 0x10 + (longlong)FVar18) = (float)(dVar8 - dVar38);
              *(float *)(lVar20 + 0x14 + (longlong)FVar18) = (float)(local_100 - dVar40);
              *(float *)(lVar20 + 0x24 + (longlong)FVar18) = (float)dVar10;
              *(byte *)(lVar20 + 0x30 + (longlong)FVar18) = bVar2 & 0xeb | 2;
              uVar14 = this->ClosestManifoldPointIndex;
              dVar33 = dVar37;
              if (uVar14 != 0xffffffff) {
                uVar15 = 0;
                if ((int)uVar14 < (this->ManifoldPoints).ArrayNum) {
                  uVar15 = ~uVar14 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar5 = (code *)swi(3);
                  uVar13 = (*pcVar5)();
                  return (bool)uVar13;
                }
                FVar4 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
                FVar17 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
                if (FVar4 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
                  FVar17 = FVar4;
                }
                dVar33 = (double)*(float *)((longlong)(int)uVar14 * 0x6c + 0x24 + (longlong)FVar17);
              }
              uVar51 = local_1b8._16_4_;
              uVar52 = local_1b8._20_4_;
              uVar53 = local_1b8._24_4_;
              uVar54 = local_1b8._28_4_;
              uVar55 = local_1b8._0_4_;
              uVar56 = local_1b8._4_4_;
              uVar57 = local_1b8._8_4_;
              uVar58 = local_1b8._12_4_;
              if ((double)*(float *)(lVar20 + 0x24 + (longlong)FVar18) < dVar33) {
                this->ClosestManifoldPointIndex = uVar19;
              }
            }
            else {
LAB_143a1d8cb:
              iVar21 = iVar21 + -1;
            }
            iVar3 = (this->ManifoldPoints).ArrayNum;
            uVar19 = uVar19 + 1;
            lVar20 = lVar20 + 0x6c;
          } while ((int)uVar19 < iVar3);
          iVar16 = 4;
          if (iVar3 < 4) {
            iVar16 = iVar3;
          }
          this->ExpectedNumManifoldPoints = iVar16;
          if (iVar21 < iVar16) {
            return false;
          }
        }
        (this->Flags).Bits = (this->Flags).Bits | 0x20;
        return true;
      }
    }
  }
  return false;
}

// UpdateManifoldContacts @ 143a20e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDCollisionConstraint::UpdateManifoldContacts(FPBDCollisionConstraint *this)

{
  int iVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  FSolverBody *pFVar3;
  ForElementType<Chaos::FManifoldPoint> FVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  TRotation<double,3> *pTVar27;
  TVector<double,3> *pTVar28;
  TVector<double> *pTVar29;
  TGeometryParticleHandleImp<double,3,1> *pTVar30;
  TGeometryParticleHandleImp<double,3,1> *pTVar31;
  ForElementType<Chaos::FManifoldPoint> FVar32;
  uint uVar33;
  longlong lVar34;
  ForElementType<Chaos::FManifoldPoint> FVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auStack_4e8 [32];
  longlong local_4c8;
  longlong local_4c0;
  FGenericParticleHandleImp local_4b8;
  FGenericParticleHandleImp local_4b0;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double local_490;
  double dStack_488;
  double local_480;
  TVector<double>_u_0 local_478;
  TVector<double>_u_0 local_458;
  double local_438;
  double dStack_430;
  double local_428;
  TQuat<double> local_418;
  TQuat<double> local_3f8;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  TVector<double> local_378;
  TVector<double> local_360;
  double local_338;
  TRotation<double,3> local_328;
  TRotation<double,3> local_308;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_4e8;
  if ((this->SolverBodies[0] != (FSolverBody *)0x0) && (this->SolverBodies[1] != (FSolverBody *)0x0)
     ) {
    pTVar31 = this->Particle[0];
    pTVar2 = this->Particle[1];
    local_4b8.MHandle = pTVar31;
    local_4b0.MHandle = pTVar2;
    pTVar27 = FSolverBody::CorrectedQ(this->SolverBodies[0],&local_328);
    dVar23 = _UNK_150689688;
    dVar22 = ___xmm_3ff00000000000003ff0000000000000;
    dVar21 = _UNK_150689518;
    dVar14 = ___xmm_00000000000000003ff0000000000000;
    pFVar3 = this->SolverBodies[0];
    local_228.Rotation.XY.m128d_f64[0] = *(double *)pTVar27;
    local_228.Rotation.XY.m128d_f64[1] = *(double *)&pTVar27->field_0x8;
    local_228.Rotation.ZW.m128d_f64[0] = *(double *)&pTVar27->field_0x10;
    local_228.Rotation.ZW.m128d_f64[1] = *(double *)&pTVar27->field_0x18;
    dVar11 = (double)*(float *)&(pFVar3->State).DP.field_0x4 +
             *(double *)&(pFVar3->State).P.field_0x8;
    local_228.Translation.ZW.m128d_f64[0] =
         (double)*(float *)&(pFVar3->State).DP.field_0x8 + *(double *)&(pFVar3->State).P.field_0x10;
    local_228.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
    local_228.Translation.XY.m128d_f64[0] =
         (double)*(float *)&(pFVar3->State).DP + *(double *)&(pFVar3->State).P;
    local_228.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
    local_228.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_228.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_228.Translation.ZW.m128d_f64[1] = 0.0;
    local_228.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_228.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    pTVar27 = FSolverBody::CorrectedQ(this->SolverBodies[1],&local_308);
    pFVar3 = this->SolverBodies[1];
    local_168.Rotation.XY.m128d_f64[0] = *(double *)pTVar27;
    local_168.Rotation.XY.m128d_f64[1] = *(double *)&pTVar27->field_0x8;
    local_168.Rotation.ZW.m128d_f64[0] = *(double *)&pTVar27->field_0x10;
    local_168.Rotation.ZW.m128d_f64[1] = *(double *)&pTVar27->field_0x18;
    dVar11 = (double)*(float *)&(pFVar3->State).DP.field_0x4 +
             *(double *)&(pFVar3->State).P.field_0x8;
    local_168.Translation.ZW.m128d_f64[0] =
         (double)*(float *)&(pFVar3->State).DP.field_0x8 + *(double *)&(pFVar3->State).P.field_0x10;
    local_168.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
    local_168.Translation.XY.m128d_f64[0] =
         (double)*(float *)&(pFVar3->State).DP + *(double *)&(pFVar3->State).P;
    local_168.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
    local_168.Scale3D.XY.m128d_f64[0] = dVar22;
    local_168.Scale3D.XY.m128d_f64[1] = dVar23;
    local_168.Translation.ZW.m128d_f64[1] = 0.0;
    local_168.Scale3D.ZW.m128d_f64[0] = dVar14;
    local_168.Scale3D.ZW.m128d_f64[1] = dVar21;
    bVar24 = FGenericParticleHandleImp::IsDynamic(&local_4b8);
    if (bVar24) {
      pTVar30 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar31->_padding_ + 4)) {
        pTVar30 = pTVar31;
      }
      pTVar27 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar30);
      local_3b8 = *(double *)pTVar27;
      dStack_3b0 = *(double *)&pTVar27->field_0x8;
      local_3a8 = *(double *)&pTVar27->field_0x10;
      dStack_3a0 = *(double *)&pTVar27->field_0x18;
    }
    else {
      local_3b8 = 0.0;
      dStack_3b0 = 0.0;
      local_3a8 = ___xmm_3ff00000000000000000000000000000;
      dStack_3a0 = _UNK_15061cbc8;
    }
    dVar15 = *(double *)&this->ImplicitTransform[0].field_0x10;
    dVar16 = *(double *)&this->ImplicitTransform[0].field_0x18;
    dVar17 = *(double *)this->ImplicitTransform;
    dVar18 = *(double *)&this->ImplicitTransform[0].field_0x8;
    dVar38 = local_3b8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar39 = dStack_3b0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar40 = local_3a8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar41 = dStack_3a0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
    auVar37._8_4_ = SUB84(dVar39,0);
    auVar37._0_8_ = dVar39;
    auVar37._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
    dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar13 = dVar38 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar41 * dVar18 +
             auVar37._8_8_ * dVar16 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar40 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar12 = dVar38 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar41 * dVar16 +
             dVar39 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar40 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    bVar24 = FGenericParticleHandleImp::IsDynamic(&local_4b8);
    if (bVar24) {
      pTVar30 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar31->_padding_ + 4)) {
        pTVar30 = pTVar31;
      }
      pTVar27 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar30);
      local_418.X._0_4_ = *(undefined4 *)pTVar27;
      local_418.X._4_4_ = *(undefined4 *)&pTVar27->field_0x4;
      local_418.Y._0_4_ = *(undefined4 *)&pTVar27->field_0x8;
      local_418.Y._4_4_ = *(undefined4 *)&pTVar27->field_0xc;
      local_418.Z = *(double *)&pTVar27->field_0x10;
      local_418.W = *(double *)&pTVar27->field_0x18;
    }
    else {
      local_418.X._0_4_ = 0;
      local_418.X._4_4_ = 0;
      local_418.Y._0_4_ = 0;
      local_418.Y._4_4_ = 0;
      local_418.Z = ___xmm_3ff00000000000000000000000000000;
      local_418.W = _UNK_15061cbc8;
    }
    dVar19 = *(double *)&this->ImplicitTransform[0].field_0x20;
    dVar20 = *(double *)&this->ImplicitTransform[0].field_0x28;
    local_3c8 = *(double *)&this->ImplicitTransform[0].field_0x30;
    local_3d8 = dVar19;
    dStack_3d0 = dVar20;
    bVar24 = FGenericParticleHandleImp::IsDynamic(&local_4b8);
    if (bVar24) {
      pTVar30 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar31->_padding_ + 4)) {
        pTVar30 = pTVar31;
      }
      pTVar28 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar30);
      dVar36 = *(double *)pTVar28;
      dStack_4a0 = *(double *)&pTVar28->field_0x8;
      local_498 = *(double *)&pTVar28->field_0x10;
      local_4a8 = dVar36;
    }
    else {
      dVar36 = 0.0;
      dStack_4a0 = 0.0;
      local_498 = 0.0;
    }
    local_478._s_0.X = dVar19 - dVar36;
    local_478._s_0.Y = dVar20 - dStack_4a0;
    local_478._s_0.Z = local_3c8 - local_498;
    pTVar29 = UE::Math::TQuat<double>::UnrotateVector
                        (&local_418,&local_378,(TVector<double> *)&local_478._s_0);
    local_1c8.Translation.XY.m128d_f64[0] = (pTVar29->field0_0x0)._s_0.X;
    local_1c8.Translation.XY.m128d_f64[1] = (pTVar29->field0_0x0)._s_0.Y;
    local_428 = (pTVar29->field0_0x0)._s_0.Z;
    local_1c8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar13,0);
    local_1c8.Rotation.XY.m128d_f64[0] =
         dVar38 * dVar16 * dVar11 + dVar41 * dVar17 + dVar39 * dVar15 * dVar7 +
         dVar40 * dVar18 * dVar9;
    local_1c8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar13 >> 0x20);
    local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar12,0);
    local_1c8.Rotation.ZW.m128d_f64[0] =
         dVar38 * dVar18 * dVar6 + dVar41 * dVar15 + dVar39 * dVar17 * dVar8 +
         dVar40 * dVar16 * dVar10;
    local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
    local_1c8.Translation.ZW.m128d_f64[1] = 0.0;
    local_1c8.Scale3D.XY.m128d_f64[0] = dVar22;
    local_1c8.Scale3D.XY.m128d_f64[1] = dVar23;
    local_1c8.Scale3D.ZW.m128d_f64[0] = dVar14;
    local_1c8.Scale3D.ZW.m128d_f64[1] = dVar21;
    local_1c8.Translation.ZW.m128d_f64[0] = local_428;
    bVar24 = FGenericParticleHandleImp::IsDynamic(&local_4b0);
    if (bVar24) {
      pTVar31 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
        pTVar31 = pTVar2;
      }
      pTVar27 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar31);
      local_398 = *(double *)pTVar27;
      dStack_390 = *(double *)&pTVar27->field_0x8;
      local_388 = *(double *)&pTVar27->field_0x10;
      dStack_380 = *(double *)&pTVar27->field_0x18;
    }
    else {
      local_398 = 0.0;
      dStack_390 = 0.0;
      local_388 = ___xmm_3ff00000000000000000000000000000;
      dStack_380 = _UNK_15061cbc8;
    }
    dVar15 = *(double *)&this->ImplicitTransform[1].field_0x10;
    dVar16 = *(double *)&this->ImplicitTransform[1].field_0x18;
    dVar17 = *(double *)(this->ImplicitTransform + 1);
    dVar18 = *(double *)&this->ImplicitTransform[1].field_0x8;
    dVar38 = local_388 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar39 = dStack_380 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar40 = local_398 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar41 = dStack_390 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
    dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
    dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar13 = dVar40 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar39 * dVar18 +
             dVar16 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar38 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar12 = dVar40 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar39 * dVar16 +
             dVar18 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar38 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    bVar24 = FGenericParticleHandleImp::IsDynamic(&local_4b0);
    if (bVar24) {
      pTVar31 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
        pTVar31 = pTVar2;
      }
      pTVar27 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar31);
      local_3f8.X._0_4_ = *(undefined4 *)pTVar27;
      local_3f8.X._4_4_ = *(undefined4 *)&pTVar27->field_0x4;
      local_3f8.Y._0_4_ = *(undefined4 *)&pTVar27->field_0x8;
      local_3f8.Y._4_4_ = *(undefined4 *)&pTVar27->field_0xc;
      local_3f8.Z = *(double *)&pTVar27->field_0x10;
      local_3f8.W = *(double *)&pTVar27->field_0x18;
    }
    else {
      local_3f8.X._0_4_ = 0;
      local_3f8.X._4_4_ = 0;
      local_3f8.Y._0_4_ = 0;
      local_3f8.Y._4_4_ = 0;
      local_3f8.Z = ___xmm_3ff00000000000000000000000000000;
      local_3f8.W = _UNK_15061cbc8;
    }
    dVar19 = *(double *)&this->ImplicitTransform[1].field_0x20;
    dVar20 = *(double *)&this->ImplicitTransform[1].field_0x28;
    local_428 = *(double *)&this->ImplicitTransform[1].field_0x30;
    local_438 = dVar19;
    dStack_430 = dVar20;
    bVar24 = FGenericParticleHandleImp::IsDynamic(&local_4b0);
    if (bVar24) {
      pTVar31 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
        pTVar31 = pTVar2;
      }
      pTVar28 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar31);
      dVar36 = *(double *)pTVar28;
      dStack_488 = *(double *)&pTVar28->field_0x8;
      local_480 = *(double *)&pTVar28->field_0x10;
      local_490 = dVar36;
    }
    else {
      dVar36 = 0.0;
      dStack_488 = 0.0;
      local_480 = 0.0;
    }
    local_458._s_0.X = dVar19 - dVar36;
    local_458._s_0.Y = dVar20 - dStack_488;
    local_458._s_0.Z = local_428 - local_480;
    pTVar29 = UE::Math::TQuat<double>::UnrotateVector
                        (&local_3f8,&local_360,(TVector<double> *)&local_458._s_0);
    local_108.Translation.XY.m128d_f64[0] = (pTVar29->field0_0x0)._s_0.X;
    local_108.Translation.XY.m128d_f64[1] = (pTVar29->field0_0x0)._s_0.Y;
    local_338 = (pTVar29->field0_0x0)._s_0.Z;
    local_108.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar13,0);
    local_108.Rotation.XY.m128d_f64[0] =
         dVar40 * dVar16 * dVar11 + dVar39 * dVar17 + dVar15 * dVar41 * dVar7 +
         dVar38 * dVar18 * dVar9;
    local_108.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar13 >> 0x20);
    local_108.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar12,0);
    local_108.Rotation.ZW.m128d_f64[0] =
         dVar40 * dVar18 * dVar6 + dVar39 * dVar15 + dVar17 * dVar41 * dVar8 +
         dVar38 * dVar16 * dVar10;
    local_108.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
    local_2e8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_2e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_2e8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_108.Translation.ZW.m128d_f64[1] = 0.0;
    local_2e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_2e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_2e8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_2e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_2e8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_2e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_2e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_2e8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_2e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_2e8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_108.Scale3D.XY.m128d_f64[0] = dVar22;
    local_108.Scale3D.XY.m128d_f64[1] = dVar23;
    local_2e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_2e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_2e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_108.Scale3D.ZW.m128d_f64[0] = dVar14;
    local_108.Scale3D.ZW.m128d_f64[1] = dVar21;
    local_108.Translation.ZW.m128d_f64[0] = local_338;
    UE::Math::TTransform<double>::Multiply(&local_2e8,&local_1c8,&local_228);
    *(double *)this->ShapeWorldTransforms = local_2e8.Rotation.XY.m128d_f64[0];
    *(double *)&this->ShapeWorldTransforms[0].field_0x8 = local_2e8.Rotation.XY.m128d_f64[1];
    *(double *)&this->ShapeWorldTransforms[0].field_0x10 = local_2e8.Rotation.ZW.m128d_f64[0];
    *(double *)&this->ShapeWorldTransforms[0].field_0x18 = local_2e8.Rotation.ZW.m128d_f64[1];
    *(double *)&this->ShapeWorldTransforms[0].field_0x20 = local_2e8.Translation.XY.m128d_f64[0];
    *(double *)&this->ShapeWorldTransforms[0].field_0x28 = local_2e8.Translation.XY.m128d_f64[1];
    *(double *)&this->ShapeWorldTransforms[0].field_0x30 = local_2e8.Translation.ZW.m128d_f64[0];
    *(double *)&this->ShapeWorldTransforms[0].field_0x38 = local_2e8.Translation.ZW.m128d_f64[1];
    *(double *)&this->ShapeWorldTransforms[0].field_0x40 = local_2e8.Scale3D.XY.m128d_f64[0];
    *(double *)&this->ShapeWorldTransforms[0].field_0x48 = local_2e8.Scale3D.XY.m128d_f64[1];
    *(double *)&this->ShapeWorldTransforms[0].field_0x50 = local_2e8.Scale3D.ZW.m128d_f64[0];
    *(double *)&this->ShapeWorldTransforms[0].field_0x58 = local_2e8.Scale3D.ZW.m128d_f64[1];
    local_288.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_288.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_288.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_288.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_288.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_288.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_288.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_288.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_288.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_288.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_288.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_288.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_288.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_288.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_288.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_288.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_288,&local_108,&local_168);
    *(double *)(this->ShapeWorldTransforms + 1) = local_288.Rotation.XY.m128d_f64[0];
    *(double *)&this->ShapeWorldTransforms[1].field_0x8 = local_288.Rotation.XY.m128d_f64[1];
    *(double *)&this->ShapeWorldTransforms[1].field_0x10 = local_288.Rotation.ZW.m128d_f64[0];
    *(double *)&this->ShapeWorldTransforms[1].field_0x18 = local_288.Rotation.ZW.m128d_f64[1];
    *(double *)&this->ShapeWorldTransforms[1].field_0x20 = local_288.Translation.XY.m128d_f64[0];
    *(double *)&this->ShapeWorldTransforms[1].field_0x28 = local_288.Translation.XY.m128d_f64[1];
    *(double *)&this->ShapeWorldTransforms[1].field_0x30 = local_288.Translation.ZW.m128d_f64[0];
    *(double *)&this->ShapeWorldTransforms[1].field_0x38 = local_288.Translation.ZW.m128d_f64[1];
    *(double *)&this->ShapeWorldTransforms[1].field_0x40 = local_288.Scale3D.XY.m128d_f64[0];
    *(double *)&this->ShapeWorldTransforms[1].field_0x48 = local_288.Scale3D.XY.m128d_f64[1];
    *(double *)&this->ShapeWorldTransforms[1].field_0x50 = local_288.Scale3D.ZW.m128d_f64[0];
    *(double *)&this->ShapeWorldTransforms[1].field_0x58 = local_288.Scale3D.ZW.m128d_f64[1];
  }
  uVar33 = 0;
  this->ClosestManifoldPointIndex = -1;
  dVar11 = __real_7fefffffffffffff;
  if (0 < (this->ManifoldPoints).ArrayNum) {
    lVar34 = 0;
    do {
      iVar1 = (this->ManifoldPoints).ArrayNum;
      uVar25 = 0;
      if ((int)uVar33 < iVar1) {
        uVar25 = ~uVar33 >> 0x1f;
      }
      if (uVar25 == 0) {
        local_4c8 = (longlong)(int)uVar33;
        local_4c0 = (longlong)iVar1;
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar24) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar4 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
      FVar35 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
      if (FVar4 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
        FVar35 = FVar4;
      }
      UpdateManifoldPointPhi(this,uVar33);
      uVar25 = this->ClosestManifoldPointIndex;
      dVar14 = dVar11;
      if (uVar25 != 0xffffffff) {
        iVar1 = (this->ManifoldPoints).ArrayNum;
        uVar26 = 0;
        if ((int)uVar25 < iVar1) {
          uVar26 = ~uVar25 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (local_4c8 = (longlong)(int)uVar25, local_4c0 = (longlong)iVar1,
           bVar24 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar24)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
        FVar32 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
        if (FVar4 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
          FVar32 = FVar4;
        }
        dVar14 = (double)*(float *)((longlong)(int)uVar25 * 0x6c + 0x24 + (longlong)FVar32);
      }
      if ((double)*(float *)((uchar *)((longlong)FVar35 + 0x24) + lVar34) < dVar14) {
        this->ClosestManifoldPointIndex = uVar33;
      }
      uVar33 = uVar33 + 1;
      lVar34 = lVar34 + 0x6c;
    } while ((int)uVar33 < (this->ManifoldPoints).ArrayNum);
  }
  return;
}

// UpdateManifoldPointPhi @ 143a22280

void __thiscall
Chaos::FPBDCollisionConstraint::UpdateManifoldPointPhi(FPBDCollisionConstraint *this,int param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  ForElementType<Chaos::FManifoldPoint> FVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar42;
  undefined4 uVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  
  uVar11 = 0;
  if (param_1 < (this->ManifoldPoints).ArrayNum) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  auVar20 = *(undefined1 (*) [16])&this->ShapeWorldTransforms[0].field_0x10;
  FVar13 = (this->ManifoldPoints).AllocatorInstance.SecondaryData;
  dVar7 = *(double *)&this->ShapeWorldTransforms[0].field_0x18;
  dVar8 = *(double *)&this->ShapeWorldTransforms[1].field_0x18;
  if (FVar13 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
    FVar13 = (ForElementType<Chaos::FManifoldPoint>)&this->ManifoldPoints;
  }
  lVar12 = (longlong)param_1 * 0x6c;
  auVar49._0_8_ = (double)*(float *)((uchar *)((longlong)FVar13 + 8) + lVar12);
  auVar49._8_8_ = 0;
  auVar14 = *(undefined1 (*) [16])this->ShapeWorldTransforms;
  auVar34 = blendpd(auVar14,auVar20,2);
  dVar21 = (double)*(float *)((uchar *)((longlong)FVar13 + 4) + lVar12);
  dVar44 = (double)*(float *)((longlong)FVar13 + lVar12);
  auVar16 = *(undefined1 (*) [16])this->ShapeWorldTransforms;
  auVar56._8_4_ = SUB84(dVar21,0);
  auVar56._0_8_ = dVar44;
  uVar43 = (undefined4)((ulonglong)dVar21 >> 0x20);
  auVar56._12_4_ = uVar43;
  dVar24 = auVar20._0_8_;
  auVar57._0_8_ = auVar56._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar44;
  auVar57._8_8_ = auVar49._0_8_ * auVar14._8_8_ - dVar24 * dVar21;
  auVar37._8_4_ = SUB84(dVar21,0);
  auVar37._0_8_ = dVar44;
  auVar37._12_4_ = uVar43;
  auVar14 = blendpd(auVar37,auVar49,2);
  auVar39._0_8_ = auVar14._0_8_ * dVar24 - auVar34._0_8_ * auVar49._0_8_;
  auVar39._8_8_ = auVar14._8_8_ * auVar20._8_8_ - auVar34._8_8_ * 0.0;
  auVar14 = blendpd(auVar57,auVar39,2);
  dVar5 = auVar57._8_8_ + auVar57._8_8_;
  dVar6 = auVar39._0_8_ + auVar39._0_8_;
  uVar43 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar58._0_8_ = auVar14._0_8_ + auVar14._0_8_;
  auVar58._8_8_ = auVar14._8_8_ + auVar14._8_8_;
  auVar35._8_4_ = SUB84(dVar6,0);
  auVar35._0_8_ = dVar5;
  auVar35._12_4_ = uVar43;
  auVar27._8_4_ = SUB84(dVar6,0);
  auVar27._0_8_ = dVar5;
  auVar27._12_4_ = uVar43;
  auVar34 = blendpd(auVar27,auVar58,2);
  auVar36._0_8_ = auVar35._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar5;
  auVar36._8_8_ = auVar58._0_8_ * auVar16._8_8_ - dVar24 * dVar6;
  auVar14 = blendpd(auVar16,auVar20,2);
  auVar15._8_4_ = SUB84(auVar36._8_8_,0);
  auVar15._0_8_ = auVar36._0_8_;
  auVar15._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
  auVar28._0_8_ = auVar34._0_8_ * dVar24 - auVar14._0_8_ * auVar58._0_8_;
  auVar28._8_8_ = auVar34._8_8_ * auVar20._8_8_ - auVar14._8_8_ * auVar58._8_8_;
  auVar37 = blendpd(auVar36,auVar28,2);
  auVar20 = *(undefined1 (*) [16])&this->ShapeWorldTransforms[1].field_0x10;
  dVar3 = (double)*(float *)((uchar *)((longlong)FVar13 + 0x14) + lVar12);
  auVar14 = *(undefined1 (*) [16])(this->ShapeWorldTransforms + 1);
  dVar24 = (double)*(float *)((uchar *)((longlong)FVar13 + 0xc) + lVar12);
  dVar22 = (double)*(float *)((uchar *)((longlong)FVar13 + 0x10) + lVar12);
  auVar34 = blendpd(auVar14,auVar20,2);
  uVar43 = (undefined4)((ulonglong)dVar22 >> 0x20);
  auVar50._8_4_ = SUB84(dVar22,0);
  auVar50._0_8_ = dVar24;
  auVar50._12_4_ = uVar43;
  dVar25 = auVar20._0_8_;
  auVar51._0_8_ = auVar50._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar24;
  auVar51._8_8_ = dVar3 * auVar14._8_8_ - dVar25 * dVar22;
  auVar16._8_4_ = SUB84(dVar22,0);
  auVar16._0_8_ = dVar24;
  auVar16._12_4_ = uVar43;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar3;
  auVar16 = blendpd(auVar16,auVar14,2);
  auVar14 = *(undefined1 (*) [16])(this->ShapeWorldTransforms + 1);
  auVar48._0_8_ = auVar16._0_8_ * dVar25 - auVar34._0_8_ * dVar3;
  auVar48._8_8_ = auVar16._8_8_ * auVar20._8_8_ - auVar34._8_8_ * 0.0;
  auVar38._8_4_ = SUB84(auVar51._8_8_,0);
  auVar38._0_8_ = auVar51._0_8_;
  auVar38._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
  auVar16 = blendpd(auVar51,auVar48,2);
  dVar33 = auVar38._8_8_ + auVar38._8_8_;
  dVar42 = auVar48._0_8_ + auVar48._0_8_;
  auVar46._8_4_ = SUB84(dVar42,0);
  auVar46._0_8_ = dVar33;
  uVar43 = (undefined4)((ulonglong)dVar42 >> 0x20);
  auVar46._12_4_ = uVar43;
  auVar29._8_4_ = SUB84(dVar42,0);
  auVar29._0_8_ = dVar33;
  auVar29._12_4_ = uVar43;
  auVar52._0_8_ = auVar16._0_8_ + auVar16._0_8_;
  auVar52._8_8_ = auVar16._8_8_ + auVar16._8_8_;
  auVar34 = blendpd(auVar29,auVar52,2);
  auVar16 = blendpd(auVar14,auVar20,2);
  auVar47._0_8_ = auVar46._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar33;
  auVar47._8_8_ = auVar52._0_8_ * auVar14._8_8_ - dVar25 * dVar42;
  dVar9 = *(double *)&this->ShapeWorldTransforms[1].field_0x18;
  auVar17._8_4_ = SUB84(auVar47._8_8_,0);
  auVar17._0_8_ = auVar47._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
  auVar30._0_8_ = auVar34._0_8_ * dVar25 - auVar16._0_8_ * auVar52._0_8_;
  auVar30._8_8_ = auVar34._8_8_ * auVar20._8_8_ - auVar16._8_8_ * auVar52._8_8_;
  auVar48 = blendpd(auVar47,auVar30,2);
  auVar20 = *(undefined1 (*) [16])&this->ShapeWorldTransforms[1].field_0x10;
  dVar23 = (double)*(float *)((uchar *)((longlong)FVar13 + 0x1c) + lVar12);
  dVar4 = (double)*(float *)((uchar *)((longlong)FVar13 + 0x20) + lVar12);
  auVar14 = *(undefined1 (*) [16])(this->ShapeWorldTransforms + 1);
  auVar39 = blendpd(auVar14,auVar20,2);
  dVar45 = (double)*(float *)((uchar *)((longlong)FVar13 + 0x18) + lVar12);
  auVar16 = *(undefined1 (*) [16])(this->ShapeWorldTransforms + 1);
  auVar53._8_4_ = SUB84(dVar23,0);
  auVar53._0_8_ = dVar45;
  uVar43 = (undefined4)((ulonglong)dVar23 >> 0x20);
  auVar53._12_4_ = uVar43;
  dVar26 = auVar20._0_8_;
  auVar54._0_8_ = auVar53._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar45;
  auVar54._8_8_ = dVar4 * auVar14._8_8_ - dVar26 * dVar23;
  auVar18._8_4_ = SUB84(dVar23,0);
  auVar18._0_8_ = dVar45;
  auVar18._12_4_ = uVar43;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = dVar4;
  auVar14 = blendpd(auVar18,auVar34,2);
  auVar19._0_8_ = auVar14._0_8_ * dVar26 - auVar39._0_8_ * dVar4;
  auVar19._8_8_ = auVar14._8_8_ * auVar20._8_8_ - auVar39._8_8_ * 0.0;
  dVar25 = auVar54._8_8_ + auVar54._8_8_;
  dVar2 = auVar19._0_8_ + auVar19._0_8_;
  uVar43 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar14 = blendpd(auVar54,auVar19,2);
  auVar55._0_8_ = auVar14._0_8_ + auVar14._0_8_;
  auVar55._8_8_ = auVar14._8_8_ + auVar14._8_8_;
  auVar40._8_4_ = SUB84(dVar2,0);
  auVar40._0_8_ = dVar25;
  auVar40._12_4_ = uVar43;
  auVar31._8_4_ = SUB84(dVar2,0);
  auVar31._0_8_ = dVar25;
  auVar31._12_4_ = uVar43;
  auVar34 = blendpd(auVar31,auVar55,2);
  auVar14 = blendpd(auVar16,auVar20,2);
  auVar41._0_8_ = auVar40._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar25;
  auVar41._8_8_ = auVar55._0_8_ * auVar16._8_8_ - dVar26 * dVar2;
  auVar32._0_8_ = auVar34._0_8_ * dVar26 - auVar14._0_8_ * auVar55._0_8_;
  auVar32._8_8_ = auVar34._8_8_ * auVar20._8_8_ - auVar14._8_8_ * auVar55._8_8_;
  auVar20._8_4_ = SUB84(auVar41._8_8_,0);
  auVar20._0_8_ = auVar41._0_8_;
  auVar20._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
  auVar14 = blendpd(auVar41,auVar32,2);
  *(float *)((uchar *)((longlong)FVar13 + 0x24) + lVar12) =
       (float)(((dVar5 * dVar7 + dVar44 + auVar15._8_8_ +
                *(double *)&this->ShapeWorldTransforms[0].field_0x20) -
               (dVar8 * dVar33 + dVar24 + auVar17._8_8_ +
               *(double *)&this->ShapeWorldTransforms[1].field_0x20)) *
               (dVar25 * dVar9 + dVar45 + auVar20._8_8_) +
               ((dVar6 * dVar7 + dVar21 + auVar28._0_8_ +
                *(double *)&this->ShapeWorldTransforms[0].field_0x28) -
               (dVar8 * dVar42 + dVar22 + auVar30._0_8_ +
               *(double *)&this->ShapeWorldTransforms[1].field_0x28)) *
               (dVar2 * dVar9 + dVar23 + auVar32._0_8_) +
              ((auVar58._0_8_ * dVar7 + auVar49._0_8_ + auVar37._0_8_ +
               *(double *)&this->ShapeWorldTransforms[0].field_0x30) -
              (dVar8 * auVar52._0_8_ + dVar3 + auVar48._0_8_ +
              *(double *)&this->ShapeWorldTransforms[1].field_0x30)) *
              (auVar55._0_8_ * dVar9 + dVar4 + auVar14._0_8_));
  return;
}

// UpdateMassScales @ 143a24170

void __thiscall Chaos::FPBDCollisionConstraint::UpdateMassScales(FPBDCollisionConstraint *this)

{
  bool bVar1;
  bool bVar2;
  FGenericParticleHandleImp local_res8;
  
  if ((((this->Flags).Bits & 0x4000) != 0) && (bChaos_Collision_EnableOneWayInteraction)) {
    local_res8.MHandle = this->Particle[0];
    bVar1 = FGenericParticleHandleImp::OneWayInteraction(&local_res8);
    local_res8.MHandle = this->Particle[1];
    bVar2 = FGenericParticleHandleImp::OneWayInteraction(&local_res8);
    if (bVar1) {
      if (!bVar2) {
        (this->Material).InvMassScale1 = 0.0;
        (this->Material).InvInertiaScale1 = 0.0;
      }
    }
    else if (bVar2) {
      (this->Material).InvMassScale0 = 0.0;
      (this->Material).InvInertiaScale0 = 0.0;
    }
    this->Stiffness = Chaos_Collision_OneWayStiffness;
    return;
  }
  (this->Material).InvMassScale0 = 1.0;
  (this->Material).InvInertiaScale0 = 1.0;
  (this->Material).InvMassScale1 = 1.0;
  (this->Material).InvInertiaScale1 = 1.0;
  this->Stiffness = 1.0;
  if (0.0 <= Chaos_Collision_Stiffness) {
    this->Stiffness = Chaos_Collision_Stiffness;
  }
  return;
}

// UpdateMaterialProperties @ 143a24270

void __thiscall
Chaos::FPBDCollisionConstraint::UpdateMaterialProperties(FPBDCollisionConstraint *this)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  FGenericParticleHandleImp local_res8;
  
  if (((this->Flags).Bits & 0x1000) == 0) {
    FPBDCollisionConstraints::UpdateConstraintMaterialProperties
              ((FPBDCollisionConstraints *)this->_padding_,this);
    if ((((this->Flags).Bits & 0x4000) != 0) && (bChaos_Collision_EnableOneWayInteraction != false))
    {
      local_res8.MHandle = this->Particle[0];
      bVar2 = FGenericParticleHandleImp::OneWayInteraction(&local_res8);
      local_res8.MHandle = this->Particle[1];
      bVar3 = FGenericParticleHandleImp::OneWayInteraction(&local_res8);
      if (bVar2) {
        if (!bVar3) {
          (this->Material).InvMassScale1 = 0.0;
          (this->Material).InvInertiaScale1 = 0.0;
        }
      }
      else if (bVar3) {
        (this->Material).InvMassScale0 = 0.0;
        (this->Material).InvInertiaScale0 = 0.0;
      }
      fVar1 = Chaos_Collision_OneWayStiffness;
      (this->Flags).Bits = (this->Flags).Bits | 0x1000;
      this->Stiffness = fVar1;
      return;
    }
    (this->Material).InvMassScale0 = 1.0;
    (this->Material).InvInertiaScale0 = 1.0;
    (this->Material).InvMassScale1 = 1.0;
    (this->Material).InvInertiaScale1 = 1.0;
    this->Stiffness = 1.0;
    if (0.0 <= Chaos_Collision_Stiffness) {
      this->Stiffness = Chaos_Collision_Stiffness;
    }
    (this->Flags).Bits = (this->Flags).Bits | 0x1000;
  }
  return;
}

// UpdateMaterialPropertiesImpl @ 143a243b0

void __thiscall
Chaos::FPBDCollisionConstraint::UpdateMaterialPropertiesImpl(FPBDCollisionConstraint *this)

{
  bool bVar1;
  bool bVar2;
  FGenericParticleHandleImp local_res8;
  
  FPBDCollisionConstraints::UpdateConstraintMaterialProperties
            ((FPBDCollisionConstraints *)this->_padding_,this);
  if ((((this->Flags).Bits & 0x4000) != 0) && (bChaos_Collision_EnableOneWayInteraction != false)) {
    local_res8.MHandle = this->Particle[0];
    bVar1 = FGenericParticleHandleImp::OneWayInteraction(&local_res8);
    local_res8.MHandle = this->Particle[1];
    bVar2 = FGenericParticleHandleImp::OneWayInteraction(&local_res8);
    if (bVar1) {
      if (!bVar2) {
        (this->Material).InvMassScale1 = 0.0;
        (this->Material).InvInertiaScale1 = 0.0;
      }
    }
    else if (bVar2) {
      (this->Material).InvMassScale0 = 0.0;
      (this->Material).InvInertiaScale0 = 0.0;
    }
    this->Stiffness = Chaos_Collision_OneWayStiffness;
    return;
  }
  (this->Material).InvMassScale0 = 1.0;
  (this->Material).InvInertiaScale0 = 1.0;
  (this->Material).InvMassScale1 = 1.0;
  (this->Material).InvInertiaScale1 = 1.0;
  this->Stiffness = 1.0;
  if (0.0 <= Chaos_Collision_Stiffness) {
    this->Stiffness = Chaos_Collision_Stiffness;
  }
  return;
}

// UpdateParticleTransform @ 143a244b0

void __thiscall
Chaos::FPBDCollisionConstraint::UpdateParticleTransform
          (FPBDCollisionConstraint *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  (this->SavedManifoldPoints).ArrayNum = 0;
  if ((this->SavedManifoldPoints).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSavedManifoldPoint>_>
              (0x1c,4,0,&(this->SavedManifoldPoints).AllocatorInstance,0,
               &(this->SavedManifoldPoints).ArrayMax);
  }
  ResetActiveManifoldContacts(this);
  return;
}

