// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// DistanceSquared @ 1498b1560

double __thiscall
UE::Geometry::TPolygon2<double>::DistanceSquared
          (TPolygon2<double> *this,TVector2<double> *param_1,int *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 in_XMM5 [16];
  uint uVar27;
  
  *param_2 = -1;
  *param_3 = 1.7976931348623157e+308;
  dVar10 = __real_bfe0000000000000;
  dVar9 = __real_3fe0000000000000;
  dVar18 = __real_3ff0000000000000;
  iVar3 = (this->Vertices).ArrayNum;
  uVar20 = (undefined4)__real_7fefffffffffffff;
  uVar23 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  if (0 < iVar3) {
    lVar15 = 0;
    uVar27 = (uint)__xmm_80000000000000008000000000000000;
    uVar8 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    uVar16 = 0;
    do {
      uVar17 = uVar16 + 1;
      uVar13 = (int)uVar17 % iVar3;
      uVar12 = 0;
      if ((int)uVar13 < (this->Vertices).ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        dVar18 = (double)(*pcVar5)();
        return dVar18;
      }
      pFVar14 = (this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10;
      uVar12 = 0;
      if ((int)uVar16 < (this->Vertices).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        dVar18 = (double)(*pcVar5)();
        return dVar18;
      }
      pFVar4 = (this->Vertices).AllocatorInstance.Data;
      dVar1 = *(double *)pFVar14;
      dVar22 = *(double *)(pFVar14 + 8);
      dVar19 = *(double *)(pFVar4 + lVar15);
      dVar2 = *(double *)(pFVar4 + lVar15 + 8);
      dVar25 = dVar1 - dVar19;
      dVar21 = dVar22 - dVar2;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar25 * dVar25 + dVar21 * dVar21;
      in_XMM5 = sqrtpd(in_XMM5,auVar6);
      if (in_XMM5._0_8_ <= 0.0) {
        in_XMM5 = ZEXT816(0);
        dVar24 = 0.0;
        dVar21 = 0.0;
      }
      else {
        dVar24 = dVar18 / in_XMM5._0_8_;
        dVar21 = dVar24 * dVar21;
        dVar24 = dVar24 * dVar25;
      }
      dVar7 = in_XMM5._0_8_ * dVar9;
      dVar25 = (param_1->field0_0x0)._s_0.X;
      dVar26 = (param_1->field0_0x0)._s_0.Y;
      dVar19 = (dVar19 + dVar1) * dVar9;
      dVar22 = (dVar2 + dVar22) * dVar9;
      dVar1 = (dVar26 - dVar22) * dVar21 + (dVar25 - dVar19) * dVar24;
      if (dVar1 < dVar7) {
        in_XMM5._0_8_ = in_XMM5._0_8_ * dVar10;
        if (in_XMM5._0_8_ < dVar1) {
          dVar25 = (dVar24 * dVar1 + dVar19) - dVar25;
          dVar26 = (dVar21 * dVar1 + dVar22) - dVar26;
          dVar22 = dVar25 * dVar25 + dVar26 * dVar26;
        }
        else {
          dVar26 = dVar26 - (dVar22 - dVar21 * dVar7);
          dVar25 = dVar25 - (dVar19 - dVar24 * dVar7);
          dVar22 = dVar25 * dVar25 + dVar26 * dVar26;
        }
      }
      else {
        dVar26 = dVar26 - (dVar21 * dVar7 + dVar22);
        dVar25 = dVar25 - (dVar24 * dVar7 + dVar19);
        dVar22 = dVar25 * dVar25 + dVar26 * dVar26;
      }
      if (dVar22 < (double)CONCAT44(uVar23,uVar20)) {
        dVar19 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ (uint)uVar8,
                                  SUB84(dVar7,0) ^ uVar27);
        uVar20 = SUB84(dVar22,0);
        uVar23 = (undefined4)((ulonglong)dVar22 >> 0x20);
        *param_2 = uVar16;
        if ((dVar19 <= dVar1) && (dVar19 = dVar7, dVar1 <= dVar7)) {
          dVar19 = dVar1;
        }
        *param_3 = dVar19;
      }
      lVar15 = lVar15 + 0x10;
      uVar16 = uVar17;
    } while ((int)uVar17 < iVar3);
  }
  return (double)CONCAT44(uVar23,uVar20);
}

// Segment @ 1498de4a0

TSegment2<double> * __thiscall
UE::Geometry::TPolygon2<double>::Segment
          (TPolygon2<double> *this,TSegment2<double> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSegment2<double> *pTVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = (this->Vertices).ArrayNum;
  uVar7 = (param_1 + 1) % iVar1;
  uVar6 = 0;
  if ((int)uVar7 < iVar1) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSegment2<double> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Vertices).AllocatorInstance.Data;
  uVar6 = 0;
  if (param_1 < (this->Vertices).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSegment2<double> *)(*pcVar3)();
      return pTVar5;
    }
  }
  TSegment2<double>::TSegment2<double>
            (__return_storage_ptr__,
             (TVector2<double> *)
             ((this->Vertices).AllocatorInstance.Data + (longlong)param_1 * 0x10),
             (TVector2<double> *)(pFVar2 + (longlong)(int)uVar7 * 0x10));
  return __return_storage_ptr__;
}

// SignedArea @ 1498f6610

double __thiscall UE::Geometry::TPolygon2<double>::SignedArea(TPolygon2<double> *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  double dVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  
  iVar5 = (this->Vertices).ArrayNum;
  lVar14 = (longlong)iVar5;
  pFVar6 = (this->Vertices).AllocatorInstance.Data;
  if ((iVar5 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    dVar15 = (double)(*pcVar7)();
    return dVar15;
  }
  dVar15 = 0.0;
  if (iVar5 == 0) {
    return 0.0;
  }
  dVar4 = 0.0;
  if (0 < iVar5) {
    lVar13 = (longlong)(int)(iVar5 - 1U) << 4;
    pFVar12 = pFVar6;
    uVar10 = iVar5 - 1U;
    uVar11 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar10 < iVar5) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        dVar15 = (double)(*pcVar7)();
        return dVar15;
      }
      uVar10 = 0;
      if ((int)uVar11 < iVar5) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        dVar15 = (double)(*pcVar7)();
        return dVar15;
      }
      lVar3 = lVar13 + 8;
      pFVar1 = pFVar12 + 8;
      pFVar2 = pFVar6 + lVar13;
      lVar13 = (longlong)pFVar12 - (longlong)pFVar6;
      dVar4 = *(double *)pFVar12;
      pFVar12 = pFVar12 + 0x10;
      dVar15 = dVar15 + (*(double *)pFVar1 * *(double *)pFVar2 - *(double *)(pFVar6 + lVar3) * dVar4
                        );
      lVar14 = lVar14 + -1;
      uVar10 = uVar11;
      uVar11 = uVar11 + 1;
      dVar4 = dVar15;
    } while (lVar14 != 0);
  }
  return dVar4 * __real_3fe0000000000000;
}

// Reverse @ 149c85b00

void __thiscall UE::Geometry::TPolygon2<double>::Reverse(TPolygon2<double> *this)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  
  iVar1 = (this->Vertices).ArrayNum;
  pFVar8 = (this->Vertices).AllocatorInstance.Data;
  iVar5 = iVar1 / 2;
  lVar7 = (longlong)iVar5;
  if (0 < iVar5) {
    pFVar6 = pFVar8 + (longlong)(iVar1 + -1) * 0x10;
    do {
      uVar2 = *(undefined8 *)(pFVar6 + 8);
      uVar3 = *(undefined8 *)pFVar8;
      uVar4 = *(undefined8 *)(pFVar8 + 8);
      *(undefined8 *)pFVar8 = *(undefined8 *)pFVar6;
      *(undefined8 *)(pFVar8 + 8) = uVar2;
      pFVar8 = pFVar8 + 0x10;
      *(undefined8 *)pFVar6 = uVar3;
      *(undefined8 *)(pFVar6 + 8) = uVar4;
      lVar7 = lVar7 + -1;
      pFVar6 = pFVar6 + -0x10;
    } while (lVar7 != 0);
  }
  return;
}

// operator= @ 149d352b0

TPolygon2<double> * __thiscall
UE::Geometry::TPolygon2<double>::operator=(TPolygon2<double> *this,TPolygon2<double> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Vertices).ArrayMax;
    piVar1 = &(this->Vertices).ArrayMax;
    _Src = (param_1->Vertices).AllocatorInstance.Data;
    iVar3 = (param_1->Vertices).ArrayNum;
    (this->Vertices).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->Vertices).AllocatorInstance.Data,_Src,(longlong)iVar3 << 4);
    }
  }
  return this;
}

// Transform @ 149d66b70

TPolygon2<double> * __thiscall
UE::Geometry::TPolygon2<double>::Transform
          (TPolygon2<double> *this,
          TFunction<UE::Math::TVector2<double>___cdecl(UE::Math::TVector2<double>_const_&)> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  TPolygon2<double> *pTVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar13 = (longlong)(this->Vertices).ArrayNum;
  uVar12 = 0;
  if (0 < lVar13) {
    lVar14 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->Vertices).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TPolygon2<double> *)(*pcVar2)();
        return pTVar9;
      }
      pFVar1 = (this->Vertices).AllocatorInstance.Data;
      Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar2 = *(code **)param_1;
      plVar11 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar11 = (longlong *)&param_1->field_0x10;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      (*pcVar2)(&local_48,uVar10,pFVar1 + (longlong)(int)uVar12 * 0x10);
      uVar6 = uStack_3c;
      uVar5 = uStack_40;
      uVar4 = uStack_44;
      uVar3 = local_48;
      uVar8 = 0;
      if ((int)uVar12 < (this->Vertices).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TPolygon2<double> *)(*pcVar2)();
        return pTVar9;
      }
      uVar12 = uVar12 + 1;
      pFVar1 = (this->Vertices).AllocatorInstance.Data + lVar14;
      *(undefined4 *)pFVar1 = uVar3;
      *(undefined4 *)(pFVar1 + 4) = uVar4;
      *(undefined4 *)(pFVar1 + 8) = uVar5;
      *(undefined4 *)(pFVar1 + 0xc) = uVar6;
      lVar14 = lVar14 + 0x10;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return this;
}

