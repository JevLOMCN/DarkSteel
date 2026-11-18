// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 12

// TPolygon2<float> @ 1494ff260

TPolygon2<float> * __thiscall
UE::Geometry::TPolygon2<float>::TPolygon2<float>(TPolygon2<float> *this,TPolygon2<float> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Vertices).ArrayMax;
  iVar2 = (param_1->Vertices).ArrayNum;
  _Src = (param_1->Vertices).AllocatorInstance.Data;
  (this->Vertices).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Vertices).AllocatorInstance.Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// TPolygon2<double> @ 1494ff2f0

TPolygon2<double> * __thiscall
UE::Geometry::TPolygon2<double>::TPolygon2<double>
          (TPolygon2<double> *this,TPolygon2<double> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Vertices).ArrayMax;
  iVar2 = (param_1->Vertices).ArrayNum;
  _Src = (param_1->Vertices).AllocatorInstance.Data;
  (this->Vertices).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Vertices).AllocatorInstance.Data,_Src,(longlong)iVar2 << 4);
  return this;
}

// Bounds @ 14950cdd0

TAxisAlignedBox2<float> * __thiscall
UE::Geometry::TPolygon2<float>::Bounds
          (TPolygon2<float> *this,TAxisAlignedBox2<float> *__return_storage_ptr__)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  pFVar5 = (this->Vertices).AllocatorInstance.Data;
  iVar4 = (this->Vertices).ArrayNum;
  local_res8 = 0x7f7fffff;
  uStackX_c = 0x7f7fffff;
  local_res10 = 0xff7fffff;
  pFVar2 = pFVar5 + (longlong)iVar4 * 8;
  uStackX_14 = 0xff7fffff;
  (__return_storage_ptr__->Min).field0_0x0 = (TVector2<float>_u_0)0x7f7fffff7f7fffff;
  (__return_storage_ptr__->Max).field0_0x0 = (TVector2<float>_u_0)0xff7fffffff7fffff;
  while( true ) {
    if ((this->Vertices).ArrayNum != iVar4) {
      `TCheckedPointerIterator<UE::Math::TVector2<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar5 == pFVar2) break;
    fVar3 = *(float *)pFVar5;
    if (fVar3 < (__return_storage_ptr__->Min).field0_0x0._s_0.X) {
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = fVar3;
    }
    if ((__return_storage_ptr__->Max).field0_0x0._s_0.X <= fVar3 &&
        fVar3 != (__return_storage_ptr__->Max).field0_0x0._s_0.X) {
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = fVar3;
    }
    fVar3 = *(float *)(pFVar5 + 4);
    if (fVar3 < (__return_storage_ptr__->Min).field0_0x0._s_0.Y) {
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = fVar3;
    }
    pfVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Y;
    if (*pfVar1 <= fVar3 && fVar3 != *pfVar1) {
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = fVar3;
    }
    pFVar5 = pFVar5 + 8;
  }
  return __return_storage_ptr__;
}

// Bounds @ 14950ce90

TAxisAlignedBox2<double> * __thiscall
UE::Geometry::TPolygon2<double>::Bounds
          (TPolygon2<double> *this,TAxisAlignedBox2<double> *__return_storage_ptr__)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
  iVar3 = (this->Vertices).ArrayNum;
  pFVar5 = (this->Vertices).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->Vertices).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    dVar2 = *(double *)pFVar5;
    if (dVar2 < (__return_storage_ptr__->Min).field0_0x0._s_0.X) {
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar2;
    }
    if ((__return_storage_ptr__->Max).field0_0x0._s_0.X <= dVar2 &&
        dVar2 != (__return_storage_ptr__->Max).field0_0x0._s_0.X) {
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2;
    }
    dVar2 = *(double *)(pFVar5 + 8);
    if (dVar2 < (__return_storage_ptr__->Min).field0_0x0._s_0.Y) {
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
    }
    pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Y;
    if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar2;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return __return_storage_ptr__;
}

// Contains @ 149510960

bool __thiscall
UE::Geometry::TPolygon2<float>::Contains(TPolygon2<float> *this,TVector2<float> *param_1)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  float local_res8;
  float fStackX_c;
  undefined8 local_res18;
  
  iVar2 = (this->Vertices).ArrayNum;
  pFVar3 = (this->Vertices).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar8 = 0;
  if (iVar2 == 0) {
    return false;
  }
  uVar10 = iVar2 - 1;
  uVar11 = 0;
  if ((int)uVar10 < iVar2) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar11 = 0;
  if (0 < iVar2) {
    lVar9 = 0;
    local_res18 = *(undefined8 *)(pFVar3 + (longlong)(int)uVar10 * 8);
    do {
      uVar10 = 0;
      if ((int)uVar11 < iVar2) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar4 = *(undefined8 *)(pFVar3 + lVar9 * 8);
      fVar1 = (param_1->field0_0x0)._s_0.Y;
      fStackX_c = (float)((ulonglong)uVar4 >> 0x20);
      local_res8 = (float)uVar4;
      if (fVar1 < local_res18._4_4_) {
        if ((fStackX_c <= fVar1) &&
           ((fVar1 - local_res18._4_4_) * (local_res8 - (float)local_res18) -
            ((param_1->field0_0x0)._s_0.X - (float)local_res18) * (fStackX_c - local_res18._4_4_) <
            0.0)) {
          iVar8 = iVar8 + -1;
        }
      }
      else if ((fVar1 < fStackX_c) &&
              (0.0 < (fVar1 - local_res18._4_4_) * (local_res8 - (float)local_res18) -
                     ((param_1->field0_0x0)._s_0.X - (float)local_res18) *
                     (fStackX_c - local_res18._4_4_))) {
        iVar8 = iVar8 + 1;
      }
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + 1;
      local_res18 = uVar4;
    } while (lVar9 < iVar2);
  }
  return iVar8 != 0;
}

// Contains @ 149510b80

bool __thiscall
UE::Geometry::TPolygon2<double>::Contains(TPolygon2<double> *this,TVector2<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  iVar3 = (this->Vertices).ArrayNum;
  lVar9 = (longlong)iVar3;
  pFVar10 = (this->Vertices).AllocatorInstance.Data;
  if ((iVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  iVar8 = 0;
  if (iVar3 == 0) {
    return false;
  }
  uVar11 = iVar3 - 1;
  uVar12 = 0;
  if ((int)uVar11 < iVar3) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar12 = 0;
  pFVar1 = pFVar10 + (longlong)(int)uVar11 * 0x10;
  uVar14 = *(undefined4 *)pFVar1;
  uVar15 = *(undefined4 *)(pFVar1 + 4);
  uVar16 = *(undefined4 *)(pFVar1 + 8);
  uVar17 = *(undefined4 *)(pFVar1 + 0xc);
  if (0 < iVar3) {
    do {
      uVar11 = 0;
      if ((int)uVar12 < iVar3) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      dVar5 = *(double *)(pFVar10 + 8);
      dVar2 = (param_1->field0_0x0)._s_0.Y;
      dVar13 = (double)CONCAT44(uVar17,uVar16);
      if (dVar2 < dVar13) {
        if ((dVar5 <= dVar2) &&
           ((dVar2 - dVar13) * (*(double *)pFVar10 - (double)CONCAT44(uVar15,uVar14)) -
            ((param_1->field0_0x0)._s_0.X - (double)CONCAT44(uVar15,uVar14)) * (dVar5 - dVar13) <
            0.0)) {
          iVar8 = iVar8 + -1;
        }
      }
      else if ((dVar2 < dVar5) &&
              (0.0 < (dVar2 - dVar13) * (*(double *)pFVar10 - (double)CONCAT44(uVar15,uVar14)) -
                     ((param_1->field0_0x0)._s_0.X - (double)CONCAT44(uVar15,uVar14)) *
                     (dVar5 - dVar13))) {
        iVar8 = iVar8 + 1;
      }
      uVar14 = *(undefined4 *)pFVar10;
      uVar15 = *(undefined4 *)(pFVar10 + 4);
      uVar16 = *(undefined4 *)(pFVar10 + 8);
      uVar17 = *(undefined4 *)(pFVar10 + 0xc);
      pFVar10 = pFVar10 + 0x10;
      uVar12 = uVar12 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return iVar8 != 0;
}

// Intersects @ 14951d1e0

bool __thiscall
UE::Geometry::TPolygon2<float>::Intersects(TPolygon2<float> *this,TPolygon2<float> *param_1)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TVector2<float>_u_0 *pTVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  TAxisAlignedBox2<float> *pTVar16;
  TAxisAlignedBox2<float> *pTVar17;
  TVector2<float>_u_0 *this_00;
  char cVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  TVector2<float>_u_0 local_148;
  undefined8 local_140;
  float local_138;
  TVector2<float>_u_0 local_130;
  undefined8 local_128;
  float local_120;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  TAxisAlignedBox2<float> local_100;
  TAxisAlignedBox2<float> local_f0 [11];
  
  pTVar16 = Bounds(this,&local_100);
  pTVar17 = Bounds(param_1,local_f0);
  fVar11 = __real_34000000;
  fVar10 = __real_3f000000;
  uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar8 = __real_3f800000;
  fVar29 = (pTVar16->Min).field0_0x0._s_0.X;
  if ((((fVar29 < (pTVar17->Max).field0_0x0._s_0.X || fVar29 == (pTVar17->Max).field0_0x0._s_0.X) &&
       ((pTVar17->Min).field0_0x0._s_0.X <= (pTVar16->Max).field0_0x0._s_0.X)) &&
      (fVar29 = (pTVar16->Min).field0_0x0._s_0.Y, pfVar1 = &(pTVar17->Max).field0_0x0._s_0.Y,
      fVar29 < *pfVar1 || fVar29 == *pfVar1)) &&
     ((pTVar17->Min).field0_0x0._s_0.Y <= (pTVar16->Max).field0_0x0._s_0.Y)) {
    uVar2 = (this->Vertices).ArrayNum;
    uVar28 = __xmm_80000000800000008000000080000000;
    for (uVar21 = 0; uVar2 != uVar21; uVar21 = uVar21 + 1) {
      if (((this->Vertices).ArrayNum <= (int)uVar21) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("polygon != nullptr && i < polygon->VertexCount()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Polygon2.h"
                              ,0xd7,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      iVar3 = (this->Vertices).ArrayNum;
      uVar19 = (int)(uVar21 + 1) % iVar3;
      uVar14 = 0;
      if ((int)uVar19 < iVar3) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      pFVar4 = (this->Vertices).AllocatorInstance.Data;
      uVar14 = 0;
      if ((int)uVar21 < (this->Vertices).ArrayNum) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      pFVar5 = (this->Vertices).AllocatorInstance.Data;
      fVar29 = *(float *)(pFVar4 + (longlong)(int)uVar19 * 8);
      fVar30 = *(float *)(pFVar4 + (longlong)(int)uVar19 * 8 + 4);
      fVar31 = *(float *)(pFVar5 + (longlong)(int)uVar21 * 8);
      fVar26 = *(float *)(pFVar5 + (longlong)(int)uVar21 * 8 + 4);
      local_118 = fVar29 - fVar31;
      fStack_114 = fVar30 - fVar26;
      local_148._s_0.Y = (fVar26 + fVar30) * fVar10;
      local_148._s_0.X = (fVar31 + fVar29) * fVar10;
      fVar29 = SQRT(fStack_114 * fStack_114 + local_118 * local_118);
      if (fVar29 <= 0.0) {
        fVar30 = 0.0;
        local_140 = 0;
        fVar31 = 0.0;
        fVar29 = 0.0;
      }
      else {
        fVar31 = local_118 * (fVar8 / fVar29);
        fVar30 = fStack_114 * (fVar8 / fVar29);
        local_140 = CONCAT44(fVar30,fVar31);
      }
      uVar14 = (param_1->Vertices).ArrayNum;
      uVar19 = 0;
      fVar29 = fVar29 * fVar10;
      local_138 = fVar29;
      while (uVar14 != uVar19) {
        if (((param_1 == (TPolygon2<float> *)0x0) || ((param_1->Vertices).ArrayNum <= (int)uVar19))
           && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("polygon != nullptr && i < polygon->VertexCount()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Polygon2.h"
                                   ,0xd7,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        iVar3 = (param_1->Vertices).ArrayNum;
        uVar20 = (int)(uVar19 + 1) % iVar3;
        uVar15 = 0;
        if ((int)uVar20 < iVar3) {
          uVar15 = ~uVar20 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        pFVar4 = (param_1->Vertices).AllocatorInstance.Data;
        uVar15 = 0;
        if ((int)uVar19 < (param_1->Vertices).ArrayNum) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        pFVar5 = (param_1->Vertices).AllocatorInstance.Data;
        fVar26 = *(float *)(pFVar4 + (longlong)(int)uVar20 * 8 + 4);
        fVar27 = *(float *)(pFVar4 + (longlong)(int)uVar20 * 8);
        fVar22 = *(float *)(pFVar5 + (longlong)(int)uVar19 * 8 + 4);
        fVar24 = *(float *)(pFVar5 + (longlong)(int)uVar19 * 8);
        fStack_104 = fVar26 - fVar22;
        local_108 = fVar27 - fVar24;
        fStack_10c = (fVar22 + fVar26) * fVar10;
        local_110 = (fVar24 + fVar27) * fVar10;
        local_130._s_0.Y = fStack_10c;
        local_130._s_0.X = local_110;
        local_120 = SQRT(fStack_104 * fStack_104 + local_108 * local_108);
        if (local_120 <= 0.0) {
          local_128 = 0;
          local_120 = 0.0;
          fVar26 = 0.0;
          fVar27 = 0.0;
        }
        else {
          fVar26 = local_108 * (fVar8 / local_120);
          fVar27 = fStack_104 * (fVar8 / local_120);
          local_128 = CONCAT44(fVar27,fVar26);
        }
        local_120 = local_120 * fVar10;
        cVar18 = (fVar29 == 0.0) + (local_120 == 0.0);
        if (cVar18 == '\x02') {
          fVar26 = (fStack_10c - local_148._s_0.Y) * (fStack_10c - local_148._s_0.Y) +
                   (local_110 - local_148._s_0.X) * (local_110 - local_148._s_0.X);
LAB_14951d6f7:
          if (fVar26 <= 0.0) {
            return true;
          }
LAB_14951d798:
          uVar19 = uVar19 + 1;
        }
        else {
          if (cVar18 == '\x01') {
            this_00 = &local_148;
            pTVar7 = &local_130;
            if (fVar29 == 0.0) {
              this_00 = &local_130;
              pTVar7 = &local_148;
            }
            fVar26 = TSegment2<float>::DistanceSquared
                               ((TSegment2<float> *)&this_00->_s_0,(TVector2<float> *)&pTVar7->_s_0)
            ;
            goto LAB_14951d6f7;
          }
          fVar25 = fStack_10c - local_148._s_0.Y;
          fVar24 = local_110 - local_148._s_0.X;
          fVar22 = fVar27 * fVar31 - fVar30 * fVar26;
          if (fVar11 < (float)((uint)fVar22 & uVar9)) {
            fVar22 = fVar8 / fVar22;
            uVar28 = __xmm_80000000800000008000000080000000;
            if (((float)((uint)((fVar24 * fVar27 - fVar25 * fVar26) * fVar22) & uVar9) <= fVar29) &&
               ((float)((uint)((fVar24 * fVar30 - fVar25 * fVar31) * fVar22) & uVar9) <= local_120))
            {
              return true;
            }
            goto LAB_14951d798;
          }
          fVar22 = SQRT(fVar24 * fVar24 + fVar25 * fVar25);
          if (fVar22 <= 0.0) {
            fVar23 = 0.0;
            fVar22 = 0.0;
          }
          else {
            fVar22 = fVar8 / fVar22;
            fVar23 = fVar22 * fVar25;
            fVar22 = fVar22 * fVar24;
          }
          if (fVar11 < (float)((uint)(fVar22 * fVar27 - fVar23 * fVar26) & uVar9))
          goto LAB_14951d798;
          fVar26 = fVar24 * fVar31 + fVar25 * fVar30;
          if (fVar29 < fVar26 - local_120) goto LAB_14951d798;
          if ((float)((uint)fVar29 ^ uVar28) <= fVar26 + local_120) {
            return true;
          }
          uVar19 = uVar19 + 1;
        }
      }
    }
  }
  return false;
}

// Intersects @ 14951d890

bool __thiscall
UE::Geometry::TPolygon2<double>::Intersects(TPolygon2<double> *this,TPolygon2<double> *param_1)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  TAxisAlignedBox2<double> *pTVar18;
  TAxisAlignedBox2<double> *pTVar19;
  uint uVar20;
  uint uVar21;
  char cVar22;
  uint uVar23;
  double dVar24;
  uint uVar25;
  double dVar26;
  double dVar27;
  undefined1 in_XMM5 [16];
  uint uVar28;
  uint uVar29;
  uint uVar30;
  TVector2<double>_u_0 local_158;
  double local_148;
  double local_140;
  double local_138;
  TVector2<double>_u_0 local_130;
  double local_120;
  double local_118;
  double local_110;
  TAxisAlignedBox2<double> local_108;
  TAxisAlignedBox2<double> local_e8 [6];
  
  pTVar18 = Bounds(this,&local_108);
  pTVar19 = Bounds(param_1,local_e8);
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = (pTVar18->Min).field0_0x0._s_0.X;
  if ((((dVar2 < (pTVar19->Max).field0_0x0._s_0.X || dVar2 == (pTVar19->Max).field0_0x0._s_0.X) &&
       ((pTVar19->Min).field0_0x0._s_0.X <= (pTVar18->Max).field0_0x0._s_0.X)) &&
      (dVar2 = (pTVar18->Min).field0_0x0._s_0.Y, pdVar1 = &(pTVar19->Max).field0_0x0._s_0.Y,
      dVar2 < *pdVar1 || dVar2 == *pdVar1)) &&
     ((pTVar19->Min).field0_0x0._s_0.Y <= (pTVar18->Max).field0_0x0._s_0.Y)) {
    uVar3 = (this->Vertices).ArrayNum;
    uVar29 = (uint)__xmm_80000000000000008000000000000000;
    uVar30 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    for (uVar23 = 0; uVar3 != uVar23; uVar23 = uVar23 + 1) {
      if (((this->Vertices).ArrayNum <= (int)uVar23) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("polygon != nullptr && i < polygon->VertexCount()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Polygon2.h"
                              ,0xd7,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return (bool)uVar16;
      }
      iVar4 = (this->Vertices).ArrayNum;
      uVar20 = (int)(uVar23 + 1) % iVar4;
      uVar17 = 0;
      if ((int)uVar20 < iVar4) {
        uVar17 = ~uVar20 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return (bool)uVar16;
      }
      pFVar5 = (this->Vertices).AllocatorInstance.Data;
      uVar17 = 0;
      if ((int)uVar23 < (this->Vertices).ArrayNum) {
        uVar17 = ~uVar23 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return (bool)uVar16;
      }
      TSegment2<double>::TSegment2<double>
                ((TSegment2<double> *)&local_158._s_0,
                 (TVector2<double> *)
                 ((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10),
                 (TVector2<double> *)(pFVar5 + (longlong)(int)uVar20 * 0x10));
      dVar14 = local_138;
      dVar13 = local_140;
      dVar2 = local_148;
      uVar12 = local_158._s_0.Y;
      uVar11 = local_158._s_0.X;
      uVar17 = (param_1->Vertices).ArrayNum;
      uVar20 = 0;
      uVar28 = (uint)((ulonglong)local_138 >> 0x20);
      while (uVar17 != uVar20) {
        if (((param_1 == (TPolygon2<double> *)0x0) || ((param_1->Vertices).ArrayNum <= (int)uVar20))
           && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("polygon != nullptr && i < polygon->VertexCount()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Polygon2.h"
                                   ,0xd7,L""), bVar15)) {
          pcVar6 = (code *)swi(3);
          uVar16 = (*pcVar6)();
          return (bool)uVar16;
        }
        iVar4 = (param_1->Vertices).ArrayNum;
        uVar21 = (int)(uVar20 + 1) % iVar4;
        uVar25 = 0;
        if ((int)uVar21 < iVar4) {
          uVar25 = ~uVar21 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          uVar16 = (*pcVar6)();
          return (bool)uVar16;
        }
        pFVar5 = (param_1->Vertices).AllocatorInstance.Data;
        uVar25 = 0;
        if ((int)uVar20 < (param_1->Vertices).ArrayNum) {
          uVar25 = ~uVar20 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          uVar16 = (*pcVar6)();
          return (bool)uVar16;
        }
        TSegment2<double>::TSegment2<double>
                  ((TSegment2<double> *)&local_130._s_0,
                   (TVector2<double> *)
                   ((param_1->Vertices).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x10),
                   (TVector2<double> *)(pFVar5 + (longlong)(int)uVar21 * 0x10));
        cVar22 = (dVar14 == 0.0) + (local_110 == 0.0);
        if (cVar22 == '\x02') {
          dVar24 = (local_130._s_0.Y - (double)uVar12) * (local_130._s_0.Y - (double)uVar12) +
                   (local_130._s_0.X - (double)uVar11) * (local_130._s_0.X - (double)uVar11);
LAB_14951de05:
          if (dVar24 <= 0.0) {
            return true;
          }
LAB_14951df46:
          uVar20 = uVar20 + 1;
        }
        else {
          if (cVar22 == '\x01') {
            if (dVar14 == 0.0) {
              in_XMM5._8_8_ = 0;
              in_XMM5._0_8_ = local_130._s_0.Y;
              dVar24 = ((double)uVar12 - local_130._s_0.Y) * local_118 +
                       ((double)uVar11 - local_130._s_0.X) * local_120;
              if (dVar24 < local_110) {
                if ((double)CONCAT44((uint)((ulonglong)local_110 >> 0x20) ^ uVar30,
                                     SUB84(local_110,0) ^ uVar29) < dVar24) {
                  dVar26 = (double)uVar12 - (local_118 * dVar24 + local_130._s_0.Y);
                  dVar24 = (double)uVar11 - (local_120 * dVar24 + local_130._s_0.X);
                  dVar24 = dVar26 * dVar26 + dVar24 * dVar24;
                }
                else {
                  dVar26 = (local_130._s_0.Y - local_118 * local_110) - (double)uVar12;
                  dVar24 = (local_130._s_0.X - local_120 * local_110) - (double)uVar11;
                  in_XMM5._0_8_ = dVar26 * dVar26;
                  in_XMM5._8_8_ = 0;
                  dVar24 = dVar24 * dVar24 + in_XMM5._0_8_;
                }
              }
              else {
                dVar24 = (local_118 * local_110 + local_130._s_0.Y) - (double)uVar12;
                dVar26 = (local_120 * local_110 + local_130._s_0.X) - (double)uVar11;
                dVar24 = dVar24 * dVar24 + dVar26 * dVar26;
              }
            }
            else {
              dVar24 = (local_130._s_0.Y - (double)uVar12) * dVar13 +
                       (local_130._s_0.X - (double)uVar11) * dVar2;
              if (dVar24 < dVar14) {
                if ((double)CONCAT44(uVar28 ^ uVar30,SUB84(dVar14,0) ^ uVar29) < dVar24) {
                  dVar26 = local_130._s_0.X - (dVar2 * dVar24 + (double)uVar11);
                  dVar24 = local_130._s_0.Y - (dVar13 * dVar24 + (double)uVar12);
                  dVar24 = dVar24 * dVar24 + dVar26 * dVar26;
                }
                else {
                  dVar24 = ((double)uVar11 - dVar2 * dVar14) - local_130._s_0.X;
                  dVar26 = ((double)uVar12 - dVar13 * dVar14) - local_130._s_0.Y;
                  dVar24 = dVar26 * dVar26 + dVar24 * dVar24;
                }
              }
              else {
                dVar26 = (dVar13 * dVar14 + (double)uVar12) - local_130._s_0.Y;
                dVar24 = (dVar2 * dVar14 + (double)uVar11) - local_130._s_0.X;
                dVar24 = dVar26 * dVar26 + dVar24 * dVar24;
              }
            }
            goto LAB_14951de05;
          }
          dVar26 = local_130._s_0.X - (double)uVar11;
          dVar27 = local_130._s_0.Y - (double)uVar12;
          dVar24 = dVar2 * local_118 - dVar13 * local_120;
          if ((double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar10,SUB84(dVar24,0) & uVar9)
              <= __real_3cb0000000000000) {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = dVar26 * dVar26 + dVar27 * dVar27;
            in_XMM5 = sqrtpd(in_XMM5,auVar7);
            if (in_XMM5._0_8_ <= 0.0) {
              dVar8 = 0.0;
              dVar24 = 0.0;
            }
            else {
              dVar24 = __real_3ff0000000000000 / in_XMM5._0_8_;
              dVar8 = dVar24 * dVar27;
              dVar24 = dVar24 * dVar26;
            }
            dVar24 = dVar24 * local_118 - dVar8 * local_120;
            if ((double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar10,SUB84(dVar24,0) & uVar9)
                <= __real_3cb0000000000000) {
              dVar24 = dVar2 * dVar26 + dVar13 * dVar27;
              if ((dVar24 - local_110 <= dVar14) &&
                 ((double)CONCAT44(uVar28 ^ uVar30,SUB84(dVar14,0) ^ uVar29) <= local_110 + dVar24))
              {
                return true;
              }
            }
            goto LAB_14951df46;
          }
          in_XMM5._0_8_ = __real_3ff0000000000000 / dVar24;
          in_XMM5._8_8_ = 0;
          dVar24 = (local_118 * dVar26 - local_120 * dVar27) * in_XMM5._0_8_;
          if (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar10,
                                        SUB84(dVar24,0) & uVar9)) goto LAB_14951df46;
          dVar24 = (dVar13 * dVar26 - dVar2 * dVar27) * in_XMM5._0_8_;
          uVar25 = SUB84(dVar24,0) & uVar9;
          uVar21 = (uint)((ulonglong)dVar24 >> 0x20) & uVar10;
          if ((double)CONCAT44(uVar21,uVar25) < local_110 ||
              (double)CONCAT44(uVar21,uVar25) == local_110) {
            return true;
          }
          uVar20 = uVar20 + 1;
        }
      }
    }
  }
  return false;
}

// IsClockwise @ 14951dfc0

bool __thiscall UE::Geometry::TPolygon2<float>::IsClockwise(TPolygon2<float> *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  float fVar16;
  
  iVar4 = (this->Vertices).ArrayNum;
  lVar15 = (longlong)iVar4;
  pFVar5 = (this->Vertices).AllocatorInstance.Data;
  if ((iVar4 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  fVar16 = 0.0;
  if (iVar4 != 0) {
    if (0 < iVar4) {
      lVar13 = (longlong)(int)(iVar4 - 1U) * 8;
      pFVar14 = pFVar5;
      uVar11 = iVar4 - 1U;
      uVar12 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar11 < iVar4) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        uVar11 = 0;
        if ((int)uVar12 < iVar4) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        lVar7 = lVar13 + 4;
        pFVar1 = pFVar14 + 4;
        pFVar2 = pFVar5 + lVar13;
        lVar13 = (longlong)pFVar14 - (longlong)pFVar5;
        fVar3 = *(float *)pFVar14;
        pFVar14 = pFVar14 + 8;
        fVar16 = fVar16 + (*(float *)pFVar1 * *(float *)pFVar2 - *(float *)(pFVar5 + lVar7) * fVar3)
        ;
        lVar15 = lVar15 + -1;
        uVar11 = uVar12;
        uVar12 = uVar12 + 1;
      } while (lVar15 != 0);
    }
    fVar16 = fVar16 * __real_3f000000;
  }
  return fVar16 < 0.0;
}

// IsClockwise @ 14951e170

bool __thiscall UE::Geometry::TPolygon2<double>::IsClockwise(TPolygon2<double> *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  double dVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  longlong lVar16;
  
  iVar5 = (this->Vertices).ArrayNum;
  lVar16 = (longlong)iVar5;
  pFVar6 = (this->Vertices).AllocatorInstance.Data;
  if ((iVar5 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  dVar8 = 0.0;
  if (iVar5 != 0) {
    dVar4 = 0.0;
    if (0 < iVar5) {
      lVar15 = (longlong)(int)(iVar5 - 1U) << 4;
      pFVar14 = pFVar6;
      uVar12 = iVar5 - 1U;
      uVar13 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar12 < iVar5) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        uVar12 = 0;
        if ((int)uVar13 < iVar5) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        lVar3 = lVar15 + 8;
        pFVar1 = pFVar14 + 8;
        pFVar2 = pFVar6 + lVar15;
        lVar15 = (longlong)pFVar14 - (longlong)pFVar6;
        dVar4 = *(double *)pFVar14;
        pFVar14 = pFVar14 + 0x10;
        dVar8 = dVar8 + (*(double *)pFVar1 * *(double *)pFVar2 - *(double *)(pFVar6 + lVar3) * dVar4
                        );
        lVar16 = lVar16 + -1;
        uVar12 = uVar13;
        uVar13 = uVar13 + 1;
        dVar4 = dVar8;
      } while (lVar16 != 0);
    }
    dVar8 = dVar4 * __real_3fe0000000000000;
  }
  return dVar8 < 0.0;
}

// Overlaps @ 149520200

bool __thiscall
UE::Geometry::TPolygon2<float>::Overlaps(TPolygon2<float> *this,TPolygon2<float> *param_1)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TVector2<float>_u_0 *pTVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  TAxisAlignedBox2<float> *pTVar15;
  TAxisAlignedBox2<float> *pTVar16;
  TVector2<float>_u_0 *this_00;
  char cVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  TVector2<float>_u_0 local_148;
  undefined8 local_140;
  float local_138;
  TVector2<float>_u_0 local_130;
  undefined8 local_128;
  float local_120;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  TAxisAlignedBox2<float> local_f8;
  TAxisAlignedBox2<float> local_e8 [11];
  
  pTVar15 = Bounds(this,&local_f8);
  pTVar16 = Bounds(param_1,local_e8);
  fVar3 = (pTVar15->Min).field0_0x0._s_0.X;
  if ((((fVar3 < (pTVar16->Max).field0_0x0._s_0.X || fVar3 == (pTVar16->Max).field0_0x0._s_0.X) &&
       ((pTVar16->Min).field0_0x0._s_0.X <= (pTVar15->Max).field0_0x0._s_0.X)) &&
      (fVar3 = (pTVar15->Min).field0_0x0._s_0.Y, pfVar2 = &(pTVar16->Max).field0_0x0._s_0.Y,
      fVar3 < *pfVar2 || fVar3 == *pfVar2)) &&
     ((pTVar16->Min).field0_0x0._s_0.Y <= (pTVar15->Max).field0_0x0._s_0.Y)) {
    iVar4 = (param_1->Vertices).ArrayNum;
    uVar22 = 0;
    if (0 < iVar4) {
      do {
        uVar20 = (uint)uVar22;
        uVar13 = 0;
        if ((int)uVar20 < (param_1->Vertices).ArrayNum) {
          uVar13 = ~uVar20 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        bVar11 = Contains(this,(TVector2<float> *)
                               ((param_1->Vertices).AllocatorInstance.Data + uVar22 * 8));
        if (bVar11) {
          return true;
        }
        uVar22 = (ulonglong)(uVar20 + 1);
      } while ((int)(uVar20 + 1) < iVar4);
    }
    iVar4 = (this->Vertices).ArrayNum;
    uVar22 = 0;
    if (0 < iVar4) {
      do {
        uVar20 = (uint)uVar22;
        uVar13 = 0;
        if ((int)uVar20 < (this->Vertices).ArrayNum) {
          uVar13 = ~uVar20 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        bVar11 = Contains(param_1,(TVector2<float> *)
                                  ((this->Vertices).AllocatorInstance.Data + uVar22 * 8));
        if (bVar11) {
          return true;
        }
        uVar22 = (ulonglong)(uVar20 + 1);
      } while ((int)(uVar20 + 1) < iVar4);
    }
    fVar10 = __real_34000000;
    fVar9 = __real_3f000000;
    uVar20 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar3 = __real_3f800000;
    uVar13 = (this->Vertices).ArrayNum;
    uVar29 = __xmm_80000000800000008000000080000000;
    uVar21 = 0;
    while (uVar13 != uVar21) {
      if (((this->Vertices).ArrayNum <= (int)uVar21) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("polygon != nullptr && i < polygon->VertexCount()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Polygon2.h"
                              ,0xd7,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      iVar4 = (this->Vertices).ArrayNum;
      uVar1 = uVar21 + 1;
      uVar18 = (int)uVar1 % iVar4;
      uVar14 = 0;
      if ((int)uVar18 < iVar4) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      pFVar5 = (this->Vertices).AllocatorInstance.Data;
      uVar14 = 0;
      if ((int)uVar21 < (this->Vertices).ArrayNum) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      pFVar6 = (this->Vertices).AllocatorInstance.Data;
      fVar30 = *(float *)(pFVar5 + (longlong)(int)uVar18 * 8);
      fVar31 = *(float *)(pFVar5 + (longlong)(int)uVar18 * 8 + 4);
      fVar32 = *(float *)(pFVar6 + (longlong)(int)uVar21 * 8);
      fVar27 = *(float *)(pFVar6 + (longlong)(int)uVar21 * 8 + 4);
      local_110 = fVar30 - fVar32;
      fStack_10c = fVar31 - fVar27;
      local_118 = (fVar32 + fVar30) * fVar9;
      fStack_114 = (fVar27 + fVar31) * fVar9;
      local_148._s_0.Y = fStack_114;
      local_148._s_0.X = local_118;
      fVar30 = SQRT(fStack_10c * fStack_10c + local_110 * local_110);
      if (fVar30 <= 0.0) {
        fVar31 = 0.0;
        local_140 = 0;
        fVar32 = 0.0;
        fVar30 = 0.0;
      }
      else {
        fVar32 = local_110 * (fVar3 / fVar30);
        fVar31 = fStack_10c * (fVar3 / fVar30);
        local_140 = CONCAT44(fVar31,fVar32);
      }
      uVar14 = (param_1->Vertices).ArrayNum;
      uVar18 = 0;
      fVar30 = fVar30 * fVar9;
      local_138 = fVar30;
      while (uVar21 = uVar1, uVar14 != uVar18) {
        if (((param_1->Vertices).ArrayNum <= (int)uVar18) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("polygon != nullptr && i < polygon->VertexCount()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Polygon2.h"
                                ,0xd7,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        iVar4 = (param_1->Vertices).ArrayNum;
        uVar19 = (int)(uVar18 + 1) % iVar4;
        uVar21 = 0;
        if ((int)uVar19 < iVar4) {
          uVar21 = ~uVar19 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        pFVar5 = (param_1->Vertices).AllocatorInstance.Data;
        uVar21 = 0;
        if ((int)uVar18 < (param_1->Vertices).ArrayNum) {
          uVar21 = ~uVar18 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar12 = (*pcVar7)();
          return (bool)uVar12;
        }
        pFVar6 = (param_1->Vertices).AllocatorInstance.Data;
        fVar27 = *(float *)(pFVar5 + (longlong)(int)uVar19 * 8 + 4);
        fVar28 = *(float *)(pFVar5 + (longlong)(int)uVar19 * 8);
        fVar23 = *(float *)(pFVar6 + (longlong)(int)uVar18 * 8 + 4);
        fVar25 = *(float *)(pFVar6 + (longlong)(int)uVar18 * 8);
        fStack_fc = fVar27 - fVar23;
        local_100 = fVar28 - fVar25;
        fStack_104 = (fVar27 + fVar23) * fVar9;
        local_108 = (fVar28 + fVar25) * fVar9;
        local_130._s_0.Y = fStack_104;
        local_130._s_0.X = local_108;
        local_120 = SQRT(fStack_fc * fStack_fc + local_100 * local_100);
        if (local_120 <= 0.0) {
          local_128 = 0;
          local_120 = 0.0;
          fVar27 = 0.0;
          fVar28 = 0.0;
        }
        else {
          fVar27 = local_100 * (fVar3 / local_120);
          fVar28 = fStack_fc * (fVar3 / local_120);
          local_128 = CONCAT44(fVar28,fVar27);
        }
        local_120 = local_120 * fVar9;
        cVar17 = (fVar30 == 0.0) + (local_120 == 0.0);
        if (cVar17 == '\x02') {
          fVar27 = (fStack_104 - local_148._s_0.Y) * (fStack_104 - local_148._s_0.Y) +
                   (local_108 - local_148._s_0.X) * (local_108 - local_148._s_0.X);
LAB_1495207e9:
          if (fVar27 <= 0.0) {
            return true;
          }
LAB_14952088a:
          uVar18 = uVar18 + 1;
        }
        else {
          if (cVar17 == '\x01') {
            this_00 = &local_148;
            pTVar8 = &local_130;
            if (fVar30 == 0.0) {
              this_00 = &local_130;
              pTVar8 = &local_148;
            }
            fVar27 = TSegment2<float>::DistanceSquared
                               ((TSegment2<float> *)&this_00->_s_0,(TVector2<float> *)&pTVar8->_s_0)
            ;
            goto LAB_1495207e9;
          }
          fVar26 = fStack_104 - local_148._s_0.Y;
          fVar25 = local_108 - local_148._s_0.X;
          fVar23 = fVar28 * fVar32 - fVar31 * fVar27;
          if (fVar10 < (float)((uint)fVar23 & uVar20)) {
            fVar23 = fVar3 / fVar23;
            uVar29 = __xmm_80000000800000008000000080000000;
            if (((float)((uint)((fVar25 * fVar28 - fVar26 * fVar27) * fVar23) & uVar20) <= fVar30)
               && ((float)((uint)((fVar25 * fVar31 - fVar26 * fVar32) * fVar23) & uVar20) <=
                   local_120)) {
              return true;
            }
            goto LAB_14952088a;
          }
          fVar23 = SQRT(fVar25 * fVar25 + fVar26 * fVar26);
          if (fVar23 <= 0.0) {
            fVar24 = 0.0;
            fVar23 = 0.0;
          }
          else {
            fVar23 = fVar3 / fVar23;
            fVar24 = fVar23 * fVar26;
            fVar23 = fVar23 * fVar25;
          }
          if (fVar10 < (float)((uint)(fVar23 * fVar28 - fVar24 * fVar27) & uVar20))
          goto LAB_14952088a;
          fVar27 = fVar25 * fVar32 + fVar26 * fVar31;
          if (fVar30 < fVar27 - local_120) goto LAB_14952088a;
          if ((float)((uint)fVar30 ^ uVar29) <= local_120 + fVar27) {
            return true;
          }
          uVar18 = uVar18 + 1;
        }
      }
    }
  }
  return false;
}

// Overlaps @ 149520980

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TPolygon2<double>::Overlaps(TPolygon2<double> *this,TPolygon2<double> *param_1)

{
  uint uVar1;
  double *pdVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  TAxisAlignedBox2<double> *pTVar16;
  TAxisAlignedBox2<double> *pTVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  char cVar21;
  double dVar22;
  double dVar23;
  uint uVar24;
  undefined8 uVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  undefined1 in_XMM5 [16];
  undefined1 auVar29 [16];
  uint uVar30;
  uint uVar31;
  uint uVar32;
  TVector2<double>_u_0 local_158;
  double local_148;
  double local_140;
  double local_138;
  TVector2<double>_u_0 local_130;
  double local_120;
  double local_118;
  double local_110;
  TAxisAlignedBox2<double> local_108;
  TAxisAlignedBox2<double> local_e8 [6];
  
  pTVar16 = Bounds(this,&local_108);
  pTVar17 = Bounds(param_1,local_e8);
  dVar3 = (pTVar16->Min).field0_0x0._s_0.X;
  if ((((dVar3 < (pTVar17->Max).field0_0x0._s_0.X || dVar3 == (pTVar17->Max).field0_0x0._s_0.X) &&
       ((pTVar17->Min).field0_0x0._s_0.X <= (pTVar16->Max).field0_0x0._s_0.X)) &&
      (dVar3 = (pTVar16->Min).field0_0x0._s_0.Y, pdVar2 = &(pTVar17->Max).field0_0x0._s_0.Y,
      dVar3 < *pdVar2 || dVar3 == *pdVar2)) &&
     ((pTVar17->Min).field0_0x0._s_0.Y <= (pTVar16->Max).field0_0x0._s_0.Y)) {
    iVar4 = (param_1->Vertices).ArrayNum;
    uVar20 = 0;
    if (0 < iVar4) {
      do {
        uVar14 = 0;
        if ((int)uVar20 < (param_1->Vertices).ArrayNum) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        bVar12 = Contains(this,(TVector2<double> *)
                               ((param_1->Vertices).AllocatorInstance.Data +
                               (ulonglong)uVar20 * 0x10));
        if (bVar12) {
          return true;
        }
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < iVar4);
    }
    iVar4 = (this->Vertices).ArrayNum;
    uVar20 = 0;
    if (0 < iVar4) {
      do {
        uVar14 = 0;
        if ((int)uVar20 < (this->Vertices).ArrayNum) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        bVar12 = Contains(param_1,(TVector2<double> *)
                                  ((this->Vertices).AllocatorInstance.Data +
                                  (ulonglong)uVar20 * 0x10));
        if (bVar12) {
          return true;
        }
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < iVar4);
    }
    uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar20 = (this->Vertices).ArrayNum;
    uVar31 = (uint)__xmm_80000000000000008000000000000000;
    uVar32 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar24 = 0;
    while (uVar20 != uVar24) {
      if (((this->Vertices).ArrayNum <= (int)uVar24) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("polygon != nullptr && i < polygon->VertexCount()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Polygon2.h"
                              ,0xd7,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      iVar4 = (this->Vertices).ArrayNum;
      uVar1 = uVar24 + 1;
      uVar18 = (int)uVar1 % iVar4;
      uVar15 = 0;
      if ((int)uVar18 < iVar4) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      pFVar5 = (this->Vertices).AllocatorInstance.Data;
      uVar15 = 0;
      if ((int)uVar24 < (this->Vertices).ArrayNum) {
        uVar15 = ~uVar24 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      TSegment2<double>::TSegment2<double>
                ((TSegment2<double> *)&local_158._s_0,
                 (TVector2<double> *)
                 ((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x10),
                 (TVector2<double> *)(pFVar5 + (longlong)(int)uVar18 * 0x10));
      dVar11 = local_138;
      dVar10 = local_140;
      dVar3 = local_148;
      uVar9 = local_158._s_0.Y;
      uVar8 = local_158._s_0.X;
      uVar15 = (param_1->Vertices).ArrayNum;
      uVar18 = 0;
      uVar30 = (uint)((ulonglong)local_138 >> 0x20);
      while (uVar24 = uVar1, uVar15 != uVar18) {
        if (((param_1->Vertices).ArrayNum <= (int)uVar18) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("polygon != nullptr && i < polygon->VertexCount()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Polygon2.h"
                                ,0xd7,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        iVar4 = (param_1->Vertices).ArrayNum;
        uVar19 = (int)(uVar18 + 1) % iVar4;
        uVar24 = 0;
        if ((int)uVar19 < iVar4) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        pFVar5 = (param_1->Vertices).AllocatorInstance.Data;
        uVar24 = 0;
        if ((int)uVar18 < (param_1->Vertices).ArrayNum) {
          uVar24 = ~uVar18 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        TSegment2<double>::TSegment2<double>
                  ((TSegment2<double> *)&local_130._s_0,
                   (TVector2<double> *)
                   ((param_1->Vertices).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10),
                   (TVector2<double> *)(pFVar5 + (longlong)(int)uVar19 * 0x10));
        cVar21 = (dVar11 == 0.0) + (local_110 == 0.0);
        if (cVar21 == '\x02') {
          dVar22 = (local_130._s_0.Y - (double)uVar9) * (local_130._s_0.Y - (double)uVar9) +
                   (local_130._s_0.X - (double)uVar8) * (local_130._s_0.X - (double)uVar8);
LAB_149520fc1:
          if (dVar22 <= 0.0) {
            return true;
          }
LAB_149521105:
          uVar18 = uVar18 + 1;
        }
        else {
          if (cVar21 == '\x01') {
            if (dVar11 == 0.0) {
              in_XMM5._8_8_ = 0;
              in_XMM5._0_8_ = local_130._s_0.Y;
              dVar26 = ((double)uVar9 - local_130._s_0.Y) * local_118 +
                       ((double)uVar8 - local_130._s_0.X) * local_120;
              if (dVar26 < local_110) {
                if (dVar26 <= (double)CONCAT44((uint)((ulonglong)local_110 >> 0x20) ^ uVar32,
                                               SUB84(local_110,0) ^ uVar31)) {
                  dVar26 = (local_130._s_0.X - local_120 * local_110) - (double)uVar8;
                  dVar22 = (local_130._s_0.Y - local_118 * local_110) - (double)uVar9;
                  dVar22 = dVar22 * dVar22 + dVar26 * dVar26;
                  goto LAB_149520fc1;
                }
                dVar22 = (double)uVar9 - (local_118 * dVar26 + local_130._s_0.Y);
                uVar25 = uVar8;
                uVar27 = local_120 * dVar26 + local_130._s_0.X;
LAB_149520f37:
                dVar22 = ((double)uVar25 - (double)uVar27) * ((double)uVar25 - (double)uVar27) +
                         dVar22 * dVar22;
                goto LAB_149520fc1;
              }
              dVar26 = (local_120 * local_110 + local_130._s_0.X) - (double)uVar8;
              dVar22 = (local_118 * local_110 + local_130._s_0.Y) - (double)uVar9;
            }
            else {
              dVar22 = (local_130._s_0.Y - (double)uVar9) * dVar10 +
                       (local_130._s_0.X - (double)uVar8) * dVar3;
              if (dVar11 <= dVar22) {
                uVar25 = dVar3 * dVar11 + (double)uVar8;
                dVar22 = (dVar10 * dVar11 + (double)uVar9) - local_130._s_0.Y;
                uVar27 = local_130._s_0.X;
                goto LAB_149520f37;
              }
              if (dVar22 <= (double)CONCAT44(uVar30 ^ uVar32,SUB84(dVar11,0) ^ uVar31)) {
                dVar22 = ((double)uVar8 - dVar3 * dVar11) - local_130._s_0.X;
                dVar26 = ((double)uVar9 - dVar10 * dVar11) - local_130._s_0.Y;
                dVar22 = dVar26 * dVar26 + dVar22 * dVar22;
                goto LAB_149520fc1;
              }
              dVar26 = local_130._s_0.X - (dVar3 * dVar22 + (double)uVar8);
              dVar22 = local_130._s_0.Y - (dVar10 * dVar22 + (double)uVar9);
            }
            dVar22 = dVar22 * dVar22 + dVar26 * dVar26;
            goto LAB_149520fc1;
          }
          dVar26 = local_130._s_0.X - (double)uVar8;
          dVar28 = local_130._s_0.Y - (double)uVar9;
          dVar22 = dVar3 * local_118 - dVar10 * local_120;
          if ((double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar7,SUB84(dVar22,0) & uVar14)
              <= __real_3cb0000000000000) {
            auVar29._8_8_ = 0;
            auVar29._0_8_ = dVar26 * dVar26 + dVar28 * dVar28;
            auVar29 = sqrtpd(in_XMM5,auVar29);
            if (auVar29._0_8_ <= 0.0) {
              dVar23 = 0.0;
              dVar22 = 0.0;
            }
            else {
              dVar23 = __real_3ff0000000000000 / auVar29._0_8_;
              dVar22 = dVar26 * dVar23;
              dVar23 = dVar28 * dVar23;
            }
            in_XMM5._0_8_ = dVar23 * local_120;
            in_XMM5._8_8_ = 0;
            dVar22 = dVar22 * local_118 - in_XMM5._0_8_;
            uVar24 = SUB84(dVar22,0) & uVar14;
            uVar19 = (uint)((ulonglong)dVar22 >> 0x20) & uVar7;
            if ((double)CONCAT44(uVar19,uVar24) < __real_3cb0000000000000 ||
                (double)CONCAT44(uVar19,uVar24) == __real_3cb0000000000000) {
              dVar22 = dVar3 * dVar26 + dVar10 * dVar28;
              if ((dVar22 - local_110 <= dVar11) &&
                 ((double)CONCAT44(uVar30 ^ uVar32,SUB84(dVar11,0) ^ uVar31) <= dVar22 + local_110))
              {
                return true;
              }
            }
            goto LAB_149521105;
          }
          in_XMM5._0_8_ = __real_3ff0000000000000 / dVar22;
          in_XMM5._8_8_ = 0;
          dVar22 = (local_118 * dVar26 - local_120 * dVar28) * in_XMM5._0_8_;
          if (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar7,
                                        SUB84(dVar22,0) & uVar14)) goto LAB_149521105;
          dVar22 = (dVar10 * dVar26 - dVar3 * dVar28) * in_XMM5._0_8_;
          uVar24 = SUB84(dVar22,0) & uVar14;
          uVar19 = (uint)((ulonglong)dVar22 >> 0x20) & uVar7;
          if ((double)CONCAT44(uVar19,uVar24) < local_110 ||
              (double)CONCAT44(uVar19,uVar24) == local_110) {
            return true;
          }
          uVar18 = uVar18 + 1;
        }
      }
    }
  }
  return false;
}

