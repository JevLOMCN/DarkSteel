// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// operator() @ 14c7bd660

bool __thiscall
`UE::Geometry::TPlanarComplex<double>::FindSolidRegions'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  
  plVar3 = *(longlong **)this;
  uVar7 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  dVar2 = *(double *)(*plVar3 + (longlong)param_1 * 0x30);
  uVar7 = 0;
  if (param_2 < (int)plVar3[1]) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pdVar1 = (double *)(*plVar3 + (longlong)param_2 * 0x30);
  return *pdVar1 <= dVar2 && dVar2 != *pdVar1;
}

// ConvertNestToGeneralPolygon @ 14c7fa6d0

TGeneralPolygon2<double> * __thiscall
UE::Geometry::TPlanarComplex<double>::ConvertNestToGeneralPolygon
          (TPlanarComplex<double> *this,TGeneralPolygon2<double> *__return_storage_ptr__,
          FPolygonNesting *param_1)

{
  TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  void *_Src;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TGeneralPolygon2<double> *pTVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  double dVar12;
  undefined1 local_res8 [8];
  TGeneralPolygon2<double> *local_res10;
  FScriptContainerElement *local_res18;
  TPolygon2<double> local_48;
  
  uVar2 = param_1->OuterIndex;
  uVar9 = 0;
  if ((int)uVar2 < (this->Polygons).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  local_res10 = __return_storage_ptr__;
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TGeneralPolygon2<double> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar10 = (this->Polygons).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10;
  TPolygon2<double>::TPolygon2<double>(&__return_storage_ptr__->Outer,(TPolygon2<double> *)pFVar10);
  pTVar1 = &__return_storage_ptr__->Holes;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Holes).ArrayNum = 0;
  (__return_storage_ptr__->Holes).ArrayMax = 0;
  dVar12 = TPolygon2<double>::SignedArea((TPolygon2<double> *)pFVar10);
  __return_storage_ptr__->bOuterIsCW = dVar12 < 0.0;
  pFVar10 = (param_1->HoleIndices).AllocatorInstance.Data;
  iVar3 = (param_1->HoleIndices).ArrayNum;
  local_res18 = pFVar10 + (longlong)iVar3 * 4;
  while( true ) {
    pFVar4 = local_res18;
    if ((param_1->HoleIndices).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar4) break;
    uVar2 = *(uint *)pFVar10;
    uVar9 = 0;
    if ((int)uVar2 < (this->Polygons).ArrayNum) {
      uVar9 = ~uVar2 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TGeneralPolygon2<double> *)(*pcVar5)();
        return pTVar8;
      }
    }
    pFVar4 = (this->Polygons).AllocatorInstance.Data;
    local_48.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Vertices.ArrayNum = *(int *)(pFVar4 + (longlong)(int)uVar2 * 0x10 + 8);
    lVar11 = (longlong)local_48.Vertices.ArrayNum;
    _Src = *(void **)(pFVar4 + (longlong)(int)uVar2 * 0x10);
    if (local_48.Vertices.ArrayNum == 0) {
      local_48.Vertices.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_48.Vertices.ArrayNum,0,(ForAnyElementType *)&local_48,
                 local_48.Vertices.ArrayNum,&local_48.Vertices.ArrayMax);
      memcpy(local_48.Vertices.AllocatorInstance.Data,_Src,lVar11 << 4);
    }
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 <
        pFVar4 + (longlong)(__return_storage_ptr__->Holes).ArrayMax * 0x10)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TGeneralPolygon2<double> *)(*pcVar5)();
        return pTVar8;
      }
    }
    iVar7 = (__return_storage_ptr__->Holes).ArrayNum;
    if (iVar7 == (__return_storage_ptr__->Holes).ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,&(__return_storage_ptr__->Holes).ArrayMax)
      ;
    }
    (__return_storage_ptr__->Holes).ArrayNum = iVar7 + 1;
    TPolygon2<double>::TPolygon2<double>
              ((TPolygon2<double> *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10),
               &local_48);
    if (local_48.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Vertices.AllocatorInstance.Data);
    }
    pFVar10 = pFVar10 + 4;
  }
  return local_res10;
}

// FindSolidRegions @ 14c807430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::TPlanarComplex<double>::FindSolidRegions(TPlanarComplex<double> *this)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  double *pdVar21;
  uint uVar22;
  double *pdVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  int *piVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  longlong lVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  longlong local_res18;
  undefined8 local_res20;
  ForAnyElementType local_178;
  int local_170 [4];
  TArray<int,TSizedDefaultAllocator<32>_> local_160;
  longlong local_150;
  int *local_148;
  FScriptContainerElement *local_140;
  TArray<int,TSizedDefaultAllocator<32>_> local_138;
  uint local_128;
  TArray<bool,TSizedDefaultAllocator<32>_> local_120;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ForAnyElementType *local_e8 [21];
  
  DestructItems<UE::Geometry::TPlanarComplex<double>::FPolygonNesting,int>
            ((FPolygonNesting *)(this->Solids).AllocatorInstance.Data,(this->Solids).ArrayNum);
  uVar26 = 0;
  piVar27 = &(this->Solids).ArrayMax;
  (this->Solids).ArrayNum = 0;
  if (*piVar27 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->Solids).AllocatorInstance,0,piVar27);
  }
  uVar22 = (this->Polygons).ArrayNum;
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  local_128 = uVar22;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_160,uVar22,Default);
  lVar30 = (longlong)(int)uVar22;
  uVar20 = uVar26;
  uVar24 = uVar26;
  local_150 = lVar30;
  if (0 < (int)uVar22) {
    do {
      uVar19 = (uint)uVar20;
      uVar18 = 0;
      if ((int)uVar19 < local_160.ArrayNum) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(uint *)(local_160.AllocatorInstance.Data + uVar24 * 4) = uVar19;
      uVar24 = uVar24 + 1;
      uVar20 = (ulonglong)(uVar19 + 1);
    } while ((longlong)uVar24 < lVar30);
  }
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170[0] = 0;
  local_170[1] = 0;
  if ((int)uVar22 < 1) {
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
  }
  else {
    iVar15 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x30,8,uVar22,&local_178,local_170,local_170 + 1);
    DefaultConstructItems<_UE::Geometry::TPlanarComplex<double>::FindSolidRegions_::__l2::FPolygonInfo,int>
              (local_178.Data + (longlong)iVar15 * 0x30,uVar22);
  }
  uVar12 = _UNK_150a9e648;
  uVar11 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar10 = _UNK_1508ffb58;
  uVar9 = ___xmm_ffefffffffffffffffefffffffffffff;
  dVar8 = __real_3fe0000000000000;
  local_res20 = (FScriptContainerElement *)((ulonglong)local_res20._4_4_ << 0x20);
  if (0 < (int)uVar22) {
    uVar18 = (uint)__xmm_80000000000000008000000000000000;
    uVar20 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    local_110 = 0;
    local_140 = (FScriptContainerElement *)0x0;
    local_148 = (int *)0x0;
    do {
      pFVar29 = local_140;
      piVar27 = local_148;
      uVar28 = (uint)uVar26;
      uVar22 = ~uVar28 >> 0x1f;
      local_res18 = CONCAT44(local_res18._4_4_,uVar22);
      uVar19 = 0;
      if ((int)uVar28 < (this->Polygons).ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this->Polygons).AllocatorInstance.Data;
      iVar15 = *(int *)((longlong)piVar27 + (longlong)(pFVar5 + 8));
      lVar30 = (longlong)iVar15;
      pdVar21 = *(double **)((longlong)piVar27 + (longlong)pFVar5);
      if ((iVar15 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar4 = 0.0;
      if (iVar15 != 0) {
        dVar4 = 0.0;
        if (0 < iVar15) {
          lVar25 = (longlong)(int)(iVar15 - 1U) << 4;
          pdVar23 = pdVar21;
          uVar22 = iVar15 - 1U;
          uVar19 = 0;
          dVar4 = 0.0;
          do {
            uVar28 = 0;
            if ((int)uVar22 < iVar15) {
              uVar28 = ~uVar22 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar22 = 0;
            if ((int)uVar19 < iVar15) {
              uVar22 = ~uVar19 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar6 = lVar25 + 8;
            pdVar1 = pdVar23 + 1;
            pdVar2 = (double *)(lVar25 + (longlong)pdVar21);
            lVar25 = (longlong)pdVar23 - (longlong)pdVar21;
            dVar3 = *pdVar23;
            pdVar23 = pdVar23 + 2;
            dVar4 = dVar4 + (*pdVar1 * *pdVar2 - *(double *)(lVar6 + (longlong)pdVar21) * dVar3);
            lVar30 = lVar30 + -1;
            uVar22 = uVar19;
            uVar19 = uVar19 + 1;
          } while (lVar30 != 0);
          uVar22 = (uint)local_res18;
          uVar28 = (uint)local_res20;
        }
        pFVar29 = local_140;
        piVar27 = local_148;
        dVar4 = dVar4 * dVar8;
      }
      lVar30 = local_110;
      uVar19 = 0;
      if ((int)uVar28 < local_170[0]) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (pFVar29 + 8)[local_178.Data] = (FScriptContainerElement)(0.0 < dVar4);
      uVar19 = 0;
      if ((int)uVar28 < local_170[0]) {
        uVar19 = uVar22;
      }
      if (uVar19 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if ((pFVar29 + 8)[local_178.Data] == (FScriptContainerElement)0x0) {
        dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ (uint)uVar20,
                                 SUB84(dVar4,0) ^ uVar18);
      }
      uVar19 = 0;
      if ((int)uVar28 < local_170[0]) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(double *)(pFVar29 + local_178.Data) = dVar4;
      uVar19 = 0;
      if ((int)uVar28 < (this->Polygons).ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar29 = (this->Polygons).AllocatorInstance.Data;
      local_108 = uVar11;
      uStack_100 = uVar12;
      uVar34 = (undefined4)uVar12;
      uVar35 = (undefined4)((ulonglong)uVar12 >> 0x20);
      iVar15 = *(int *)((longlong)piVar27 + (longlong)(pFVar29 + 8));
      pdVar21 = *(double **)((longlong)piVar27 + (longlong)pFVar29);
      uVar38 = (undefined4)uVar11;
      uVar39 = (undefined4)((ulonglong)uVar11 >> 0x20);
      local_f8 = uVar9;
      uStack_f0 = uVar10;
      uVar32 = (undefined4)uVar10;
      uVar33 = (undefined4)((ulonglong)uVar10 >> 0x20);
      pdVar23 = pdVar21 + (longlong)iVar15 * 2;
      uVar36 = (undefined4)uVar9;
      uVar37 = (undefined4)((ulonglong)uVar9 >> 0x20);
      while( true ) {
        if (*(int *)((longlong)piVar27 + (longlong)(pFVar29 + 8)) != iVar15) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pdVar21 == pdVar23) break;
        dVar4 = *pdVar21;
        uVar31 = (undefined4)((ulonglong)dVar4 >> 0x20);
        if (dVar4 < (double)CONCAT44(uVar39,uVar38)) {
          uVar38 = SUB84(dVar4,0);
          uVar39 = uVar31;
        }
        if ((double)CONCAT44(uVar37,uVar36) <= dVar4 && dVar4 != (double)CONCAT44(uVar37,uVar36)) {
          uVar36 = SUB84(dVar4,0);
          uVar37 = uVar31;
        }
        dVar4 = pdVar21[1];
        uVar31 = (undefined4)((ulonglong)dVar4 >> 0x20);
        if (dVar4 < (double)CONCAT44(uVar35,uVar34)) {
          uVar34 = SUB84(dVar4,0);
          uVar35 = uVar31;
        }
        if ((double)CONCAT44(uVar33,uVar32) <= dVar4 && dVar4 != (double)CONCAT44(uVar33,uVar32)) {
          uVar32 = SUB84(dVar4,0);
          uVar33 = uVar31;
        }
        pdVar21 = pdVar21 + 2;
      }
      uStack_f0 = CONCAT44(uVar33,uVar32);
      uStack_100 = CONCAT44(uVar35,uVar34);
      iVar15 = 0;
      if ((int)uVar28 < local_170[0]) {
        iVar15 = (uint)local_res18;
      }
      local_f8 = CONCAT44(uVar37,uVar36);
      local_108 = CONCAT44(uVar39,uVar38);
      if ((iVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_110 = lVar30 + 1;
      uVar26 = (ulonglong)(uVar28 + 1);
      local_148 = piVar27 + 4;
      *(undefined8 *)(local_140 + 0x10 + local_178.Data) = local_108;
      *(undefined8 *)(local_140 + 0x10 + local_178.Data + 8) = uStack_100;
      local_res20 = (FScriptContainerElement *)CONCAT44(local_res20._4_4_,uVar28 + 1);
      *(undefined8 *)(local_140 + 0x20 + local_178.Data) = local_f8;
      *(undefined8 *)(local_140 + 0x20 + local_178.Data + 8) = uStack_f0;
      local_140 = local_140 + 0x30;
      lVar30 = local_150;
      uVar22 = local_128;
    } while (local_110 < local_150);
  }
  local_res8 = SUB81(this,0);
  local_e8[0] = &local_178;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UE::Geometry::TPlanarComplex<double>::FindSolidRegions_::__l2::<lambda_1>_>_>
            ((int *)local_160.AllocatorInstance.Data,local_160.ArrayNum,local_res8,
             (<lambda_1> *)local_e8);
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_138,uVar22,Default);
  uVar18 = 0;
  if (0 < lVar30) {
    lVar25 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar18 < local_138.ArrayNum) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar18 = uVar18 + 1;
      *(undefined4 *)(local_138.AllocatorInstance.Data + lVar25 * 4) = 0xffffffff;
      lVar25 = lVar25 + 1;
    } while (lVar25 < lVar30);
  }
  if (1 < (int)uVar22) {
    local_res18 = 1;
    local_148 = (int *)0x0;
    uVar18 = 0;
    do {
      piVar27 = local_148;
      uVar22 = 0;
      if ((int)uVar18 < local_160.ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar22 = *(uint *)((longlong)piVar27 + local_160.AllocatorInstance.Data);
      uVar19 = 0;
      if ((int)uVar22 < (this->Polygons).ArrayNum) {
        uVar19 = ~uVar22 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_res20 = (this->Polygons).AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10;
      uVar19 = 0;
      if ((int)uVar22 < local_170[0]) {
        uVar19 = ~uVar22 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_140 = local_178.Data + (longlong)(int)uVar22 * 0x30;
      if (((this->bTrustOrientations == false) || (local_140[8] != (FScriptContainerElement)0x0)) &&
         (lVar30 = local_res18, uVar22 = uVar18, local_res18 < local_150)) {
        do {
          uVar22 = uVar22 + 1;
          uVar19 = 0;
          if ((int)uVar22 < local_160.ArrayNum) {
            uVar19 = ~uVar22 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar19 = *(uint *)(local_160.AllocatorInstance.Data + lVar30 * 4);
          lVar25 = (longlong)(int)uVar19;
          uVar28 = 0;
          if ((int)uVar19 < (this->Polygons).ArrayNum) {
            uVar28 = ~uVar19 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar29 = (this->Polygons).AllocatorInstance.Data + lVar25 * 0x10;
          uVar28 = 0;
          if ((int)uVar19 < local_170[0]) {
            uVar28 = ~uVar19 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((this->bTrustOrientations == false) ||
             (local_178.Data[lVar25 * 0x30 + 8] == (FScriptContainerElement)0x0)) {
            if (*(double *)(local_140 + 0x10) <= *(double *)(local_178.Data + lVar25 * 0x30 + 0x10))
            {
              if (((((*(double *)(local_140 + 0x18) <=
                      *(double *)(local_178.Data + lVar25 * 0x30 + 0x18)) &&
                    (*(double *)(local_178.Data + lVar25 * 0x30 + 0x10) <=
                     *(double *)(local_140 + 0x20))) &&
                   (*(double *)(local_178.Data + lVar25 * 0x30 + 0x18) <=
                    *(double *)(local_140 + 0x28))) &&
                  ((*(double *)(local_140 + 0x10) <=
                    *(double *)(local_178.Data + lVar25 * 0x30 + 0x20) &&
                   (*(double *)(local_140 + 0x18) <=
                    *(double *)(local_178.Data + lVar25 * 0x30 + 0x28))))) &&
                 ((*(double *)(local_178.Data + lVar25 * 0x30 + 0x20) <=
                   *(double *)(local_140 + 0x20) &&
                  (*(double *)(local_178.Data + lVar25 * 0x30 + 0x28) <=
                   *(double *)(local_140 + 0x28))))) {
                iVar15 = *(int *)(pFVar29 + 8);
                uVar19 = 0;
                if (0 < iVar15) {
                  do {
                    uVar28 = 0;
                    if ((int)uVar19 < *(int *)(pFVar29 + 8)) {
                      uVar28 = ~uVar19 >> 0x1f;
                    }
                    if ((uVar28 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    bVar14 = TPolygon2<double>::Contains
                                       ((TPolygon2<double> *)local_res20,
                                        (TVector2<double> *)
                                        ((ulonglong)uVar19 * 0x10 + *(longlong *)&pFVar29->field_0x0
                                        ));
                    if (!bVar14) goto LAB_14c808064;
                    uVar19 = uVar19 + 1;
                  } while ((int)uVar19 < iVar15);
                }
                bVar14 = TPolygon2<double>::Intersects
                                   ((TPolygon2<double> *)local_res20,(TPolygon2<double> *)pFVar29);
                if (!bVar14) {
                  if ((this->bAllowOverlappingHoles == false) &&
                     (lVar25 = local_res18, uVar19 = uVar18, (int)(uVar18 + 1) < (int)uVar22)) {
                    do {
                      uVar19 = uVar19 + 1;
                      uVar28 = 0;
                      if ((int)uVar19 < local_138.ArrayNum) {
                        uVar28 = ~uVar19 >> 0x1f;
                      }
                      if ((uVar28 == 0) &&
                         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar14)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      if (*(uint *)(local_138.AllocatorInstance.Data + lVar25 * 4) == uVar18) {
                        uVar28 = 0;
                        if ((int)uVar19 < local_160.ArrayNum) {
                          uVar28 = ~uVar19 >> 0x1f;
                        }
                        if ((uVar28 == 0) &&
                           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar14)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        uVar28 = *(uint *)(local_160.AllocatorInstance.Data + lVar25 * 4);
                        uVar16 = 0;
                        if ((int)uVar28 < (this->Polygons).ArrayNum) {
                          uVar16 = ~uVar28 >> 0x1f;
                        }
                        if ((uVar16 == 0) &&
                           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar14)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        bVar14 = TPolygon2<double>::Overlaps
                                           ((TPolygon2<double> *)
                                            ((this->Polygons).AllocatorInstance.Data +
                                            (longlong)(int)uVar28 * 0x10),
                                            (TPolygon2<double> *)pFVar29);
                        if (bVar14) goto LAB_14c808064;
                      }
                      lVar25 = lVar25 + 1;
                    } while (lVar25 < lVar30);
                  }
                  uVar19 = 0;
                  if ((int)uVar22 < local_138.ArrayNum) {
                    uVar19 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  *(uint *)(local_138.AllocatorInstance.Data + lVar30 * 4) = uVar18;
                }
              }
            }
          }
LAB_14c808064:
          lVar30 = lVar30 + 1;
        } while (lVar30 < local_150);
      }
      local_148 = local_148 + 1;
      local_res18 = local_res18 + 1;
      iVar15 = uVar18 + 2;
      lVar30 = local_150;
      uVar18 = uVar18 + 1;
      uVar22 = local_128;
    } while (iVar15 < (int)local_128);
  }
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_120,uVar22,Default);
  uVar22 = 0;
  if (0 < lVar30) {
    lVar30 = 0;
    local_res20 = (FScriptContainerElement *)&this->Solids;
    local_148 = &(this->Solids).ArrayMax;
    pFVar29 = local_res20;
    piVar27 = local_148;
LAB_14c808100:
    do {
      uVar18 = 0;
      if ((int)uVar22 < local_160.ArrayNum) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      local_res18 = lVar30;
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar18 = *(uint *)(local_160.AllocatorInstance.Data + lVar30 * 4);
      uVar19 = 0;
      if ((int)uVar22 < local_120.ArrayNum) {
        uVar19 = ~uVar22 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_120.AllocatorInstance.Data[lVar30] == (FScriptContainerElement)0x0) {
        if (this->bTrustOrientations != false) {
          uVar19 = 0;
          if ((int)uVar18 < local_170[0]) {
            uVar19 = ~uVar18 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (local_178.Data[(longlong)(int)uVar18 * 0x30 + 8] == (FScriptContainerElement)0x0)
          goto LAB_14c808458;
        }
        iVar15 = *(int *)(pFVar29 + 8);
        if (iVar15 == *piVar27) {
          iVar15 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)pFVar29,piVar27);
        }
        lVar13 = local_150;
        lVar6 = *(longlong *)&pFVar29->field_0x0;
        *(int *)(pFVar29 + 8) = iVar15 + 1;
        lVar25 = lVar30 + 1;
        lVar17 = (longlong)iVar15;
        *(undefined4 *)(lVar6 + lVar17 * 0x18 + 4) = 0;
        *(uint *)(lVar6 + lVar17 * 0x18) = uVar18;
        *(undefined8 *)(lVar6 + lVar17 * 0x18 + 8) = 0;
        *(undefined8 *)(lVar6 + lVar17 * 0x18 + 0x10) = 0;
        pFVar29 = local_res20;
        piVar27 = local_148;
        uVar18 = uVar22;
        if (lVar25 < local_150) {
          do {
            uVar18 = uVar18 + 1;
            uVar19 = 0;
            if ((int)uVar18 < local_160.ArrayNum) {
              uVar19 = ~uVar18 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_170[2] = *(int *)(local_160.AllocatorInstance.Data + lVar25 * 4);
            uVar19 = 0;
            if ((int)uVar18 < local_138.ArrayNum) {
              uVar19 = ~uVar18 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(uint *)(local_138.AllocatorInstance.Data + lVar25 * 4) == uVar22) {
              piVar27 = *(int **)(lVar6 + lVar17 * 0x18 + 8);
              if (((piVar27 <= local_170 + 2) &&
                  (local_170 + 2 < piVar27 + *(int *)(lVar6 + lVar17 * 0x18 + 0x14))) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar15 = *(int *)(lVar6 + lVar17 * 0x18 + 0x10);
              piVar27 = (int *)(lVar6 + lVar17 * 0x18 + 0x14);
              if (iVar15 == *piVar27) {
                iVar15 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)(lVar6 + lVar17 * 0x18 + 8),piVar27);
              }
              *(int *)(lVar6 + lVar17 * 0x18 + 0x10) = iVar15 + 1;
              *(int *)(*(longlong *)(lVar6 + lVar17 * 0x18 + 8) + (longlong)iVar15 * 4) =
                   local_170[2];
              uVar19 = 0;
              if ((int)uVar18 < local_120.ArrayNum) {
                uVar19 = ~uVar18 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_120.AllocatorInstance.Data[lVar25] = (FScriptContainerElement)0x1;
            }
            lVar25 = lVar25 + 1;
          } while (lVar25 < lVar13);
          uVar22 = uVar22 + 1;
          lVar30 = local_res18 + 1;
          pFVar29 = local_res20;
          piVar27 = local_148;
          goto LAB_14c808100;
        }
      }
LAB_14c808458:
      lVar30 = lVar30 + 1;
      uVar22 = uVar22 + 1;
      local_res18 = lVar30;
    } while (lVar30 < local_150);
  }
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  return;
}

