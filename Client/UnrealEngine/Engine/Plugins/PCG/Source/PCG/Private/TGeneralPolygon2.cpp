// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// operator= @ 1498920d0

TGeneralPolygon2<double> * __thiscall
UE::Geometry::TGeneralPolygon2<double>::operator=
          (TGeneralPolygon2<double> *this,TGeneralPolygon2<double> *param_1)

{
  TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)this,
             (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)param_1);
  pTVar1 = &this->Holes;
  this->bOuterIsCW = param_1->bOuterIsCW;
  if (pTVar1 != &param_1->Holes) {
    DestructItems<UE::Geometry::TPolygon2<double>,int>
              ((TPolygon2<double> *)(pTVar1->AllocatorInstance).Data,(this->Holes).ArrayNum);
    iVar3 = (param_1->Holes).ArrayNum;
    piVar2 = &(this->Holes).ArrayMax;
    pFVar4 = (param_1->Holes).AllocatorInstance.Data;
    (this->Holes).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<UE::Geometry::TPolygon2<double>,UE::Geometry::TPolygon2<double>,int>
                ((pTVar1->AllocatorInstance).Data,(TPolygon2<double> *)pFVar4,iVar3);
    }
  }
  return this;
}

// Bounds @ 1498a0170

TAxisAlignedBox2<double> * __thiscall
UE::Geometry::TGeneralPolygon2<double>::Bounds
          (TGeneralPolygon2<double> *this,TAxisAlignedBox2<double> *__return_storage_ptr__)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 local_res8 [8];
  uint local_res10;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c [25];
  
  TPolygon2<double>::Bounds(&this->Outer,__return_storage_ptr__);
  local_res10 = (this->Holes).ArrayNum;
  uVar1 = (ulonglong)(int)local_res10;
  pFVar8 = (this->Holes).AllocatorInstance.Data;
  uVar20 = (undefined4)__real_7fefffffffffffff;
  uVar21 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar22 = (undefined4)__real_ffefffffffffffff;
  uVar23 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
  pFVar7 = pFVar8 + uVar1 * 0x10;
  while( true ) {
    if ((this->Holes).ArrayNum != (int)uVar1) {
      `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    local_a0 = *(int *)(pFVar8 + 8);
    lVar4 = (longlong)local_a0;
    _Src = *(void **)pFVar8;
    local_a8.Data = (FScriptContainerElement *)0x0;
    if (local_a0 == 0) {
      local_9c[0] = 0;
      iVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_a0,0,&local_a8,local_a0,local_9c);
      memcpy(local_a8.Data,_Src,lVar4 << 4);
      iVar2 = local_a0;
    }
    pFVar5 = local_a8.Data + (longlong)iVar2 * 0x10;
    FVar6.Data = local_a8.Data;
    uVar11 = uVar20;
    uVar13 = uVar21;
    uVar14 = uVar20;
    uVar15 = uVar21;
    uVar16 = uVar22;
    uVar17 = uVar23;
    uVar18 = uVar22;
    uVar19 = uVar23;
    iVar3 = iVar2;
    while( true ) {
      if (iVar3 != iVar2) {
        `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
        iVar3 = local_a0;
      }
      if (FVar6.Data == pFVar5) break;
      dVar9 = *(double *)FVar6.Data;
      dVar10 = *(double *)(FVar6.Data + 8);
      uVar12 = (undefined4)((ulonglong)dVar9 >> 0x20);
      if (dVar9 <= (double)CONCAT44(uVar13,uVar11)) {
        uVar11 = SUB84(dVar9,0);
        uVar13 = uVar12;
      }
      if ((double)CONCAT44(uVar17,uVar16) <= dVar9) {
        uVar16 = SUB84(dVar9,0);
        uVar17 = uVar12;
      }
      FVar6.Data = FVar6.Data + 0x10;
      uVar12 = (undefined4)((ulonglong)dVar10 >> 0x20);
      if (dVar10 <= (double)CONCAT44(uVar15,uVar14)) {
        uVar14 = SUB84(dVar10,0);
        uVar15 = uVar12;
      }
      if ((double)CONCAT44(uVar19,uVar18) <= dVar10) {
        uVar18 = SUB84(dVar10,0);
        uVar19 = uVar12;
      }
    }
    dVar9 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
    dVar10 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
    if ((double)CONCAT44(uVar13,uVar11) <= dVar9) {
      dVar9 = (double)CONCAT44(uVar13,uVar11);
    }
    if ((double)CONCAT44(uVar15,uVar14) <= dVar10) {
      dVar10 = (double)CONCAT44(uVar15,uVar14);
    }
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar9;
    dVar9 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar10;
    if (dVar9 <= (double)CONCAT44(uVar17,uVar16)) {
      dVar9 = (double)CONCAT44(uVar17,uVar16);
    }
    dVar10 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
    if (dVar10 <= (double)CONCAT44(uVar19,uVar18)) {
      dVar10 = (double)CONCAT44(uVar19,uVar18);
    }
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar9;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar10;
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    uVar1 = (ulonglong)local_res10;
    pFVar8 = pFVar8 + 0x10;
  }
  return __return_storage_ptr__;
}

// SignedArea @ 1498f63c0

double __thiscall UE::Geometry::TGeneralPolygon2<double>::SignedArea(TGeneralPolygon2<double> *this)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  int iVar5;
  double *pdVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  double *pdVar16;
  longlong lVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  if (this->bOuterIsCW == false) {
    uVar21 = (undefined4)__real_3ff0000000000000;
    uVar22 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  else {
    uVar21 = (undefined4)__real_bff0000000000000;
    uVar22 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  dVar20 = TPolygon2<double>::SignedArea(&this->Outer);
  dVar9 = __real_3fe0000000000000;
  local_res18 = (this->Holes).ArrayNum;
  uVar13 = (ulonglong)(int)local_res18;
  pFVar19 = (this->Holes).AllocatorInstance.Data;
  local_res20 = pFVar19 + uVar13 * 0x10;
  dVar20 = dVar20 * (double)CONCAT44(uVar22,uVar21);
  do {
    pFVar10 = local_res20;
    if ((this->Holes).ArrayNum != (int)uVar13) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar19 == pFVar10) {
      return dVar20;
    }
    iVar5 = *(int *)(pFVar19 + 8);
    lVar18 = (longlong)iVar5;
    pdVar6 = *(double **)pFVar19;
    if ((iVar5 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      dVar20 = (double)(*pcVar7)();
      return dVar20;
    }
    dVar8 = 0.0;
    if (iVar5 != 0) {
      if (0 < iVar5) {
        lVar17 = (longlong)(int)(iVar5 - 1U) << 4;
        pdVar16 = pdVar6;
        uVar14 = iVar5 - 1U;
        uVar15 = 0;
        dVar8 = 0.0;
        do {
          uVar12 = 0;
          if ((int)uVar14 < iVar5) {
            uVar12 = ~uVar14 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            dVar20 = (double)(*pcVar7)();
            return dVar20;
          }
          uVar14 = 0;
          if ((int)uVar15 < iVar5) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            dVar20 = (double)(*pcVar7)();
            return dVar20;
          }
          lVar3 = lVar17 + 8;
          pdVar1 = pdVar16 + 1;
          pdVar2 = (double *)(lVar17 + (longlong)pdVar6);
          lVar17 = (longlong)pdVar16 - (longlong)pdVar6;
          dVar4 = *pdVar16;
          pdVar16 = pdVar16 + 2;
          dVar8 = dVar8 + (*pdVar1 * *pdVar2 - *(double *)(lVar3 + (longlong)pdVar6) * dVar4);
          lVar18 = lVar18 + -1;
          uVar14 = uVar15;
          uVar15 = uVar15 + 1;
        } while (lVar18 != 0);
      }
      dVar8 = dVar8 * dVar9;
    }
    pFVar19 = pFVar19 + 0x10;
    uVar13 = (ulonglong)local_res18;
    dVar20 = dVar20 + dVar8 * (double)CONCAT44(uVar22,uVar21);
  } while( true );
}

// Transform @ 149d669c0

void __thiscall
UE::Geometry::TGeneralPolygon2<double>::Transform
          (TGeneralPolygon2<double> *this,
          TFunction<UE::Math::TVector2<double>___cdecl(UE::Math::TVector2<double>_const_&)> *param_1
          )

{
  undefined4 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  TPolygon2<double>::Transform(&this->Outer,param_1);
  local_res20 = (this->Holes).ArrayNum;
  uVar10 = (ulonglong)(int)local_res20;
  pFVar16 = (this->Holes).AllocatorInstance.Data;
  pFVar13 = pFVar16 + uVar10 * 0x10;
  do {
    if ((this->Holes).ArrayNum != (int)uVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (pFVar16 == pFVar13) {
      return;
    }
    lVar15 = (longlong)*(int *)(pFVar16 + 8);
    uVar14 = 0;
    if (0 < lVar15) {
      lVar17 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar14 < *(int *)(pFVar16 + 8)) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)pFVar16;
        Core::Private::Function::CheckCallable(*(void **)param_1);
        pcVar3 = *(code **)param_1;
        plVar12 = *(longlong **)&param_1->field_0x28;
        if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
          plVar12 = (longlong *)&param_1->field_0x10;
        }
        uVar11 = (**(code **)(*plVar12 + 8))();
        (*pcVar3)(&local_58,uVar11,(longlong)(int)uVar14 * 0x10 + lVar2);
        uVar7 = uStack_4c;
        uVar6 = uStack_50;
        uVar5 = uStack_54;
        uVar4 = local_58;
        uVar9 = 0;
        if ((int)uVar14 < *(int *)(pFVar16 + 8)) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar14 = uVar14 + 1;
        puVar1 = (undefined4 *)(lVar17 + *(longlong *)pFVar16);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        lVar17 = lVar17 + 0x10;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    uVar10 = (ulonglong)local_res20;
    pFVar16 = pFVar16 + 0x10;
  } while( true );
}

