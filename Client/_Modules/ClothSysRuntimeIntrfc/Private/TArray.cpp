// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothSysRuntimeIntrfc
// Functions: 8

// AddUniqueImpl<FClothCollisionPrim_Box_const_&> @ 144646680

int __thiscall
TArray<FClothCollisionPrim_Box,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FClothCollisionPrim_Box_const_&>
          (TArray<FClothCollisionPrim_Box,TSizedDefaultAllocator<32>_> *this,
          FClothCollisionPrim_Box *param_1)

{
  FClothCollisionPrim_Box *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  
  iVar8 = Find(this,param_1);
  if (iVar8 == -1) {
    pFVar1 = (FClothCollisionPrim_Box *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        iVar8 = (*pcVar3)();
        return iVar8;
      }
    }
    iVar8 = this->ArrayNum;
    if (iVar8 == this->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1060,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar8 + 1;
    dVar4 = (param_1->LocalPosition).field0_0x0._s_0.Y;
    pFVar2 = (this->AllocatorInstance).Data;
    lVar9 = (longlong)iVar8 * 0x60;
    *(double *)(pFVar2 + lVar9) = (param_1->LocalPosition).field0_0x0._s_0.X;
    *(double *)(pFVar2 + lVar9 + 8) = dVar4;
    lVar5 = param_1->_padding_;
    *(double *)(pFVar2 + lVar9 + 0x10) = (param_1->LocalPosition).field0_0x0._s_0.Z;
    *(longlong *)(pFVar2 + lVar9 + 0x10 + 8) = lVar5;
    dVar4 = (param_1->LocalRotation).Y;
    *(double *)(pFVar2 + lVar9 + 0x20) = (param_1->LocalRotation).X;
    *(double *)(pFVar2 + lVar9 + 0x20 + 8) = dVar4;
    dVar4 = (param_1->LocalRotation).W;
    *(double *)(pFVar2 + lVar9 + 0x30) = (param_1->LocalRotation).Z;
    *(double *)(pFVar2 + lVar9 + 0x30 + 8) = dVar4;
    dVar4 = (param_1->HalfExtents).field0_0x0._s_0.Y;
    *(double *)(pFVar2 + lVar9 + 0x40) = (param_1->HalfExtents).field0_0x0._s_0.X;
    *(double *)(pFVar2 + lVar9 + 0x40 + 8) = dVar4;
    uVar6 = *(undefined8 *)&param_1->BoneIndex;
    *(double *)(pFVar2 + lVar9 + 0x50) = (param_1->HalfExtents).field0_0x0._s_0.Z;
    *(undefined8 *)(pFVar2 + lVar9 + 0x50 + 8) = uVar6;
  }
  return iVar8;
}

// AddUniqueImpl<FClothCollisionPrim_Convex_const_&> @ 144646780

int __thiscall
TArray<FClothCollisionPrim_Convex,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FClothCollisionPrim_Convex_const_&>
          (TArray<FClothCollisionPrim_Convex,TSizedDefaultAllocator<32>_> *this,
          FClothCollisionPrim_Convex *param_1)

{
  FClothCollisionPrim_Convex *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (FClothCollisionPrim_Convex *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    FClothCollisionPrim_Convex::FClothCollisionPrim_Convex
              ((FClothCollisionPrim_Convex *)
               ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x28),param_1);
  }
  return iVar4;
}

// AddUniqueImpl<FClothCollisionPrim_Sphere_const_&> @ 144646860

int __thiscall
TArray<FClothCollisionPrim_Sphere,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FClothCollisionPrim_Sphere_const_&>
          (TArray<FClothCollisionPrim_Sphere,TSizedDefaultAllocator<32>_> *this,
          FClothCollisionPrim_Sphere *param_1)

{
  FScriptContainerElement *pFVar1;
  FClothCollisionPrim_Sphere *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  
  iVar7 = Find(this,param_1);
  if (iVar7 == -1) {
    pFVar2 = (FClothCollisionPrim_Sphere *)(this->AllocatorInstance).Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
    }
    iVar7 = this->ArrayNum;
    if (iVar7 == this->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar7 + 1;
    pFVar3 = (this->AllocatorInstance).Data;
    dVar5 = (param_1->LocalPosition).field0_0x0._s_0.X;
    pFVar1 = pFVar3 + (longlong)iVar7 * 0x20;
    *(undefined8 *)pFVar1 = *(undefined8 *)param_1;
    *(double *)(pFVar1 + 8) = dVar5;
    dVar5 = (param_1->LocalPosition).field0_0x0._s_0.Z;
    pFVar3 = pFVar3 + (longlong)iVar7 * 0x20 + 0x10;
    *(double *)pFVar3 = (param_1->LocalPosition).field0_0x0._s_0.Y;
    *(double *)(pFVar3 + 8) = dVar5;
  }
  return iVar7;
}

// AddUniqueImpl<FClothCollisionPrim_SphereConnection> @ 144646930

int __thiscall
TArray<FClothCollisionPrim_SphereConnection,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FClothCollisionPrim_SphereConnection>
          (TArray<FClothCollisionPrim_SphereConnection,TSizedDefaultAllocator<32>_> *this,
          FClothCollisionPrim_SphereConnection *param_1)

{
  FScriptContainerElement *pFVar1;
  FClothCollisionPrim_SphereConnection *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  
  iVar7 = Find(this,param_1);
  if (iVar7 == -1) {
    pFVar2 = (FClothCollisionPrim_SphereConnection *)(this->AllocatorInstance).Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
    }
    iVar7 = this->ArrayNum;
    if (iVar7 == this->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar7 + 1;
    pFVar3 = (this->AllocatorInstance).Data;
    dVar5 = (param_1->OneSidedPlaneNormal).field0_0x0._s_0.X;
    pFVar1 = pFVar3 + (longlong)iVar7 * 0x20;
    *(undefined8 *)pFVar1 = *(undefined8 *)param_1->SphereIndices;
    *(double *)(pFVar1 + 8) = dVar5;
    dVar5 = (param_1->OneSidedPlaneNormal).field0_0x0._s_0.Z;
    pFVar3 = pFVar3 + (longlong)iVar7 * 0x20 + 0x10;
    *(double *)pFVar3 = (param_1->OneSidedPlaneNormal).field0_0x0._s_0.Y;
    *(double *)(pFVar3 + 8) = dVar5;
  }
  return iVar7;
}

// Find @ 14464ac10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
TArray<FClothCollisionPrim_Box,TSizedDefaultAllocator<32>_>::Find
          (TArray<FClothCollisionPrim_Box,TSizedDefaultAllocator<32>_> *this,
          FClothCollisionPrim_Box *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  pFVar1 = (this->AllocatorInstance).Data;
  uVar11 = (ulonglong)this->ArrayNum;
  lVar10 = uVar11 * 0x60;
  if (pFVar1 != pFVar1 + lVar10) {
    pFVar13 = pFVar1;
    do {
      if ((((*(int *)(pFVar13 + 0x58) == param_1->BoneIndex) &&
           (dVar5 = *(double *)pFVar13 - (param_1->LocalPosition).field0_0x0._s_0.X,
           uVar15 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar16 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           (double)CONCAT44(uVar16,uVar15) < __real_3f1a36e2e0000000 ||
           (double)CONCAT44(uVar16,uVar15) == __real_3f1a36e2e0000000)) &&
          (dVar5 = *(double *)(pFVar13 + 8) - (param_1->LocalPosition).field0_0x0._s_0.Y,
          uVar15 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar16 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar16,uVar15) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar16,uVar15) == __real_3f1a36e2e0000000)) &&
         (dVar5 = *(double *)(pFVar13 + 0x10) - (param_1->LocalPosition).field0_0x0._s_0.Z,
         uVar15 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar16 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar16,uVar15) < __real_3f1a36e2e0000000 ||
         (double)CONCAT44(uVar16,uVar15) == __real_3f1a36e2e0000000)) {
        dVar8 = (param_1->LocalRotation).Z + *(double *)(pFVar13 + 0x30);
        dVar9 = (param_1->LocalRotation).W + *(double *)(pFVar13 + 0x38);
        dVar17 = *(double *)(pFVar13 + 0x30) - (param_1->LocalRotation).Z;
        dVar18 = *(double *)(pFVar13 + 0x38) - (param_1->LocalRotation).W;
        dVar5 = (param_1->LocalRotation).X + *(double *)(pFVar13 + 0x20);
        dVar7 = (param_1->LocalRotation).Y + *(double *)(pFVar13 + 0x28);
        dVar19 = *(double *)(pFVar13 + 0x20) - (param_1->LocalRotation).X;
        dVar20 = *(double *)(pFVar13 + 0x28) - (param_1->LocalRotation).Y;
        lVar14 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar18,0) & _UNK_15061cc88));
        auVar2._8_4_ = (int)lVar14;
        auVar2._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar17,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar2._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
        iVar12 = movmskpd((int)this,auVar2);
        lVar14 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar20,0) & _UNK_15061cc88));
        auVar3._8_4_ = (int)lVar14;
        auVar3._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar19,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar3._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
        uVar15 = movmskpd((int)uVar11,auVar3);
        uVar11 = (ulonglong)uVar15;
        uVar16 = iVar12 << 2 | uVar15;
        this = (TArray<FClothCollisionPrim_Box,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar16;
        if (uVar16 != 0) {
          lVar14 = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_15061cc8c,
                                     SUB84(dVar9,0) & _UNK_15061cc88));
          auVar4._8_4_ = (int)lVar14;
          auVar4._0_8_ = -(ulonglong)
                          (__real_3f1a36e2e0000000 <
                          (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar8,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar4._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
          iVar12 = movmskpd(uVar16,auVar4);
          lVar14 = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                                     SUB84(dVar7,0) & _UNK_15061cc88));
          auVar6._8_4_ = (int)lVar14;
          auVar6._0_8_ = -(ulonglong)
                          (__real_3f1a36e2e0000000 <
                          (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar5,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar6._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
          uVar15 = movmskpd(uVar15,auVar6);
          uVar11 = (ulonglong)uVar15;
          uVar15 = iVar12 << 2 | uVar15;
          this = (TArray<FClothCollisionPrim_Box,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar15;
          if (uVar15 != 0) goto LAB_14464ad58;
        }
        dVar5 = *(double *)(pFVar13 + 0x40) - (param_1->HalfExtents).field0_0x0._s_0.X;
        uVar15 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar16 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if ((((double)CONCAT44(uVar16,uVar15) < __real_3f1a36e2e0000000 ||
              (double)CONCAT44(uVar16,uVar15) == __real_3f1a36e2e0000000) &&
            (dVar5 = *(double *)(pFVar13 + 0x48) - (param_1->HalfExtents).field0_0x0._s_0.Y,
            uVar15 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar16 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
            , (double)CONCAT44(uVar16,uVar15) < __real_3f1a36e2e0000000 ||
              (double)CONCAT44(uVar16,uVar15) == __real_3f1a36e2e0000000)) &&
           (dVar5 = *(double *)(pFVar13 + 0x50) - (param_1->HalfExtents).field0_0x0._s_0.Z,
           uVar15 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar16 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           (double)CONCAT44(uVar16,uVar15) < __real_3f1a36e2e0000000 ||
           (double)CONCAT44(uVar16,uVar15) == __real_3f1a36e2e0000000)) {
          return (int)(((longlong)pFVar13 - (longlong)pFVar1) / 0x60);
        }
      }
LAB_14464ad58:
      pFVar13 = pFVar13 + 0x60;
    } while (pFVar13 != pFVar1 + lVar10);
  }
  return -1;
}

// Find @ 14464adc0

int __thiscall
TArray<FClothCollisionPrim_Convex,TSizedDefaultAllocator<32>_>::Find
          (TArray<FClothCollisionPrim_Convex,TSizedDefaultAllocator<32>_> *this,
          FClothCollisionPrim_Convex *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  double dVar15;
  
  dVar7 = __real_3f1a36e2e0000000;
  uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar9 = this->ArrayNum;
  pFVar1 = (this->AllocatorInstance).Data;
  pFVar14 = pFVar1;
  do {
    if (pFVar14 == pFVar1 + (longlong)iVar9 * 0x28) {
      return -1;
    }
    if ((((*(int *)(pFVar14 + 0x20) == param_1->BoneIndex) &&
         (*(int *)(pFVar14 + 8) == (param_1->Faces).ArrayNum)) &&
        (bVar8 = CompareItems<FClothCollisionPrim_ConvexFace,int>
                           (*(FClothCollisionPrim_ConvexFace **)pFVar14,
                            (FClothCollisionPrim_ConvexFace *)
                            (param_1->Faces).AllocatorInstance.Data,*(int *)(pFVar14 + 8)), bVar8))
       && (iVar11 = *(int *)(pFVar14 + 0x18), iVar11 == (param_1->SurfacePoints).ArrayNum)) {
      uVar13 = 0;
      if (iVar11 < 1) {
LAB_14464af53:
        return (int)(((longlong)pFVar14 - (longlong)pFVar1) / 0x28);
      }
      lVar12 = 0;
      while( true ) {
        uVar10 = 0;
        if ((int)uVar13 < iVar11) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        lVar2 = *(longlong *)(pFVar14 + 0x10);
        uVar10 = 0;
        if ((int)uVar13 < (param_1->SurfacePoints).ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        pFVar3 = (param_1->SurfacePoints).AllocatorInstance.Data;
        dVar15 = *(double *)(lVar12 + lVar2) - *(double *)(pFVar3 + lVar12);
        if (((dVar7 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar6,
                                       SUB84(dVar15,0) & uVar5)) ||
            (dVar15 = *(double *)(lVar12 + 8 + lVar2) - *(double *)(pFVar3 + lVar12 + 8),
            dVar7 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar6,
                                     SUB84(dVar15,0) & uVar5))) ||
           (dVar15 = *(double *)(lVar12 + 0x10 + lVar2) - *(double *)(pFVar3 + lVar12 + 0x10),
           dVar7 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar6,
                                    SUB84(dVar15,0) & uVar5))) break;
        iVar11 = *(int *)(pFVar14 + 0x18);
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0x18;
        if (iVar11 <= (int)uVar13) goto LAB_14464af53;
      }
    }
    pFVar14 = pFVar14 + 0x28;
  } while( true );
}

// Find @ 14464afc0

int __thiscall
TArray<FClothCollisionPrim_Sphere,TSizedDefaultAllocator<32>_>::Find
          (TArray<FClothCollisionPrim_Sphere,TSizedDefaultAllocator<32>_> *this,
          FClothCollisionPrim_Sphere *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x20) {
    pFVar2 = pFVar1;
    do {
      if ((((*(int *)pFVar2 == param_1->BoneIndex) &&
           ((float)((uint)(*(float *)(pFVar2 + 4) - param_1->Radius) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
          (dVar3 = *(double *)(pFVar2 + 8) - (param_1->LocalPosition).field0_0x0._s_0.X,
          (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000)) &&
         ((dVar3 = *(double *)(pFVar2 + 0x10) - (param_1->LocalPosition).field0_0x0._s_0.Y,
          (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000 &&
          (dVar3 = *(double *)(pFVar2 + 0x18) - (param_1->LocalPosition).field0_0x0._s_0.Z,
          (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000)))) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 5);
      }
      pFVar2 = pFVar2 + 0x20;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 0x20);
  }
  return -1;
}

// Find @ 14464b070

int __thiscall
TArray<FClothCollisionPrim_SphereConnection,TSizedDefaultAllocator<32>_>::Find
          (TArray<FClothCollisionPrim_SphereConnection,TSizedDefaultAllocator<32>_> *this,
          FClothCollisionPrim_SphereConnection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x20) {
    pFVar2 = pFVar1;
    do {
      if ((((*(int *)pFVar2 == param_1->SphereIndices[0]) &&
           (*(int *)(pFVar2 + 4) == param_1->SphereIndices[1])) &&
          ((param_1->OneSidedPlaneNormal).field0_0x0._s_0.X == *(double *)(pFVar2 + 8))) &&
         (((param_1->OneSidedPlaneNormal).field0_0x0._s_0.Y == *(double *)(pFVar2 + 0x10) &&
          ((param_1->OneSidedPlaneNormal).field0_0x0._s_0.Z == *(double *)(pFVar2 + 0x18))))) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 5);
      }
      pFVar2 = pFVar2 + 0x20;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 0x20);
  }
  return -1;
}

