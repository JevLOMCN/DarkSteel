// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FCollisionStructure @ 14824e5e0

FCollisionStructure * __thiscall FCollisionStructure::FCollisionStructure(FCollisionStructure *this)

{
  (this->ValidFlag).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValidFlag).ArrayNum = 0;
  (this->ValidFlag).ArrayMax = 0;
  (this->Bounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bounds).ArrayNum = 0;
  (this->Bounds).ArrayMax = 0;
  (this->Geom).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Geom).ArrayNum = 0;
  (this->Geom).ArrayMax = 0;
  (this->Transform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transform).ArrayNum = 0;
  (this->Transform).ArrayMax = 0;
  (this->QueryFilter).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryFilter).ArrayNum = 0;
  (this->QueryFilter).ArrayMax = 0;
  (this->SimFilter).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimFilter).ArrayNum = 0;
  (this->SimFilter).ArrayMax = 0;
  (this->FreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeList).ArrayNum = 0;
  (this->FreeList).ArrayMax = 0;
  return this;
}

// CreateCollisionEntry @ 148271bc0

int __thiscall
FCollisionStructure::CreateCollisionEntry
          (FCollisionStructure *this,FKAggregateGeom *param_1,TTransform<double> *param_2,
          FCollisionFilterData *param_3,FCollisionFilterData *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
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
  bool bVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  FKAggregateGeom *this_00;
  uint uVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  
  if ((this->FreeList).ArrayNum < 1) {
    uVar23 = (this->ValidFlag).ArrayNum;
    piVar1 = &(this->ValidFlag).ArrayMax;
    if (uVar23 == *piVar1) {
      uVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,(ForAnyElementType *)this,piVar1);
    }
    (this->ValidFlag).ArrayNum = uVar23 + 1;
    piVar1 = &(this->Bounds).ArrayMax;
    iVar25 = (this->Bounds).ArrayNum;
    if (iVar25 == *piVar1) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,&(this->Bounds).AllocatorInstance,piVar1);
    }
    (this->Bounds).ArrayNum = iVar25 + 1;
    piVar1 = &(this->Geom).ArrayMax;
    iVar25 = (this->Geom).ArrayNum;
    if (iVar25 == *piVar1) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8a0,&(this->Geom).AllocatorInstance,piVar1);
    }
    (this->Geom).ArrayNum = iVar25 + 1;
    piVar1 = &(this->Transform).ArrayMax;
    iVar25 = (this->Transform).ArrayNum;
    if (iVar25 == *piVar1) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1060,&(this->Transform).AllocatorInstance,piVar1);
    }
    piVar1 = &(this->QueryFilter).ArrayMax;
    (this->Transform).ArrayNum = iVar25 + 1;
    iVar25 = (this->QueryFilter).ArrayNum;
    if (iVar25 == *piVar1) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&(this->QueryFilter).AllocatorInstance,piVar1);
    }
    piVar1 = &(this->SimFilter).ArrayMax;
    (this->QueryFilter).ArrayNum = iVar25 + 1;
    iVar25 = (this->SimFilter).ArrayNum;
    if (iVar25 == *piVar1) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&(this->SimFilter).AllocatorInstance,piVar1);
    }
    (this->SimFilter).ArrayNum = iVar25 + 1;
  }
  else {
    iVar25 = (this->FreeList).ArrayNum;
    iVar28 = iVar25 + -1;
    uVar23 = *(uint *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar25 * 4 + -4);
    (this->FreeList).ArrayNum = iVar28;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeList).AllocatorInstance,iVar28,&(this->FreeList).ArrayMax);
  }
  uVar27 = ~uVar23 >> 0x1f;
  uVar24 = 0;
  if ((int)uVar23 < (this->ValidFlag).ArrayNum) {
    uVar24 = uVar27;
  }
  if ((uVar24 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar4 = (code *)swi(3);
    iVar25 = (*pcVar4)();
    return iVar25;
  }
  lVar30 = (longlong)(int)uVar23;
  (this->ValidFlag).AllocatorInstance.Data[lVar30] = (FScriptContainerElement)0x1;
  uVar24 = 0;
  if ((int)uVar23 < (this->Geom).ArrayNum) {
    uVar24 = uVar27;
  }
  if ((uVar24 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar4 = (code *)swi(3);
    iVar25 = (*pcVar4)();
    return iVar25;
  }
  this_00 = (FKAggregateGeom *)((this->Geom).AllocatorInstance.Data + lVar30 * 0xa0);
  FKAggregateGeom::FreeRenderInfo(this_00);
  FKAggregateGeom::CloneAgg(this_00,param_1);
  dVar12 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar13 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar14 = (param_2->Translation).XY.m128d_f64[0];
  dVar15 = (param_2->Translation).XY.m128d_f64[1];
  uVar5 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
  uVar6 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
  uVar7 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
  uVar8 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
  uVar24 = 0;
  if ((int)uVar23 < (this->Transform).ArrayNum) {
    uVar24 = uVar27;
  }
  dVar16 = (param_2->Translation).ZW.m128d_f64[0];
  dVar17 = (param_2->Translation).ZW.m128d_f64[1];
  dVar18 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar19 = (param_2->Scale3D).ZW.m128d_f64[1];
  dVar20 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar21 = (param_2->Scale3D).XY.m128d_f64[1];
  if ((uVar24 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar4 = (code *)swi(3);
    iVar25 = (*pcVar4)();
    return iVar25;
  }
  pFVar3 = (this->Transform).AllocatorInstance.Data;
  lVar26 = lVar30 * 0x60;
  pFVar2 = pFVar3 + lVar26;
  *(undefined4 *)pFVar2 = uVar5;
  *(undefined4 *)(pFVar2 + 4) = uVar6;
  *(undefined4 *)(pFVar2 + 8) = uVar7;
  *(undefined4 *)(pFVar2 + 0xc) = uVar8;
  *(double *)(pFVar3 + lVar26 + 0x10) = dVar12;
  *(double *)(pFVar3 + lVar26 + 0x10 + 8) = dVar13;
  *(double *)(pFVar3 + lVar26 + 0x20) = dVar14;
  *(double *)(pFVar3 + lVar26 + 0x20 + 8) = dVar15;
  *(double *)(pFVar3 + lVar26 + 0x30) = dVar16;
  *(double *)(pFVar3 + lVar26 + 0x30 + 8) = dVar17;
  *(double *)(pFVar3 + lVar26 + 0x40) = dVar20;
  *(double *)(pFVar3 + lVar26 + 0x40 + 8) = dVar21;
  *(double *)(pFVar3 + lVar26 + 0x50) = dVar18;
  *(double *)(pFVar3 + lVar26 + 0x50 + 8) = dVar19;
  uVar9 = param_3->Word0;
  uVar10 = param_3->Word1;
  uVar11 = param_3->Word2;
  uVar29 = param_3->Word3;
  uVar24 = 0;
  if ((int)uVar23 < (this->QueryFilter).ArrayNum) {
    uVar24 = uVar27;
  }
  if ((uVar24 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar4 = (code *)swi(3);
    iVar25 = (*pcVar4)();
    return iVar25;
  }
  pFVar2 = (this->QueryFilter).AllocatorInstance.Data + lVar30 * 0x10;
  *(uint *)pFVar2 = uVar9;
  *(uint *)(pFVar2 + 4) = uVar10;
  *(uint *)(pFVar2 + 8) = uVar11;
  *(uint *)(pFVar2 + 0xc) = uVar29;
  uVar24 = param_4->Word0;
  uVar9 = param_4->Word1;
  uVar10 = param_4->Word2;
  uVar11 = param_4->Word3;
  uVar29 = 0;
  if ((int)uVar23 < (this->SimFilter).ArrayNum) {
    uVar29 = uVar27;
  }
  if ((uVar29 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar4 = (code *)swi(3);
    iVar25 = (*pcVar4)();
    return iVar25;
  }
  pFVar2 = (this->SimFilter).AllocatorInstance.Data + lVar30 * 0x10;
  *(uint *)pFVar2 = uVar24;
  *(uint *)(pFVar2 + 4) = uVar9;
  *(uint *)(pFVar2 + 8) = uVar10;
  *(uint *)(pFVar2 + 0xc) = uVar11;
  UpdateBounds(this,uVar23);
  return uVar23;
}

// DestroyCollisionEntry @ 148279b30

void __thiscall FCollisionStructure::DestroyCollisionEntry(FCollisionStructure *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint local_res10 [6];
  
  local_res10[0] = param_1;
  bVar4 = EntryIsValid(this,param_1);
  if (bVar4) {
    lVar7 = (longlong)(int)local_res10[0];
    uVar5 = 0;
    if ((int)local_res10[0] < (this->ValidFlag).ArrayNum) {
      uVar5 = ~local_res10[0] >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (this->ValidFlag).AllocatorInstance.Data[lVar7] = (FScriptContainerElement)0x0;
    pFVar2 = (this->FreeList).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->FreeList).ArrayMax * 4))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = (this->FreeList).ArrayNum;
    piVar1 = &(this->FreeList).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->FreeList).AllocatorInstance,piVar1);
    }
    (this->FreeList).ArrayNum = iVar6 + 1;
    *(uint *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_res10[0];
  }
  return;
}

// EntryIsValid @ 14827c420

bool __thiscall FCollisionStructure::EntryIsValid(FCollisionStructure *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->ValidFlag).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((this->ValidFlag).AllocatorInstance.Data[param_1] != (FScriptContainerElement)0x0) {
      return true;
    }
  }
  return false;
}

// RaycastSingle @ 14829f160

bool __thiscall
FCollisionStructure::RaycastSingle
          (FCollisionStructure *this,TVector<double> *param_1,TVector<double> *param_2,
          FHitResult *param_3,FCollisionFilterData *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  
  dVar12 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar11 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar8 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  auVar9._0_8_ = dVar8 * dVar8;
  auVar9._8_8_ = 0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar12 * dVar12 + dVar11 * dVar11 + auVar9._0_8_;
  auVar10 = sqrtpd(auVar9,auVar10);
  if ((float)auVar10._0_8_ <= __real_38d1b717) {
    return false;
  }
  lVar6 = (longlong)(this->ValidFlag).ArrayNum;
  uVar7 = 0;
  if (0 < lVar6) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->ValidFlag).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((this->ValidFlag).AllocatorInstance.Data[lVar5] != (FScriptContainerElement)0x0) {
        uVar4 = 0;
        if ((int)uVar7 < (this->Bounds).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar6);
  }
  return false;
}

// SetEntryTransform @ 1482aad00

void __thiscall
FCollisionStructure::SetEntryTransform
          (FCollisionStructure *this,int param_1,TTransform<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  bool bVar18;
  uint uVar19;
  longlong lVar20;
  
  bVar18 = EntryIsValid(this,param_1);
  if (bVar18) {
    dVar8 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar9 = (param_2->Rotation).ZW.m128d_f64[1];
    dVar10 = (param_2->Translation).XY.m128d_f64[0];
    dVar11 = (param_2->Translation).XY.m128d_f64[1];
    uVar4 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
    uVar5 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
    uVar6 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
    uVar7 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
    uVar19 = 0;
    if (param_1 < (this->Transform).ArrayNum) {
      uVar19 = (uint)~param_1 >> 0x1f;
    }
    dVar12 = (param_2->Translation).ZW.m128d_f64[0];
    dVar13 = (param_2->Translation).ZW.m128d_f64[1];
    dVar14 = (param_2->Scale3D).XY.m128d_f64[0];
    dVar15 = (param_2->Scale3D).XY.m128d_f64[1];
    dVar16 = (param_2->Scale3D).ZW.m128d_f64[0];
    dVar17 = (param_2->Scale3D).ZW.m128d_f64[1];
    if ((uVar19 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->Transform).AllocatorInstance.Data;
    lVar20 = (longlong)param_1 * 0x60;
    pFVar1 = pFVar2 + lVar20;
    *(undefined4 *)pFVar1 = uVar4;
    *(undefined4 *)(pFVar1 + 4) = uVar5;
    *(undefined4 *)(pFVar1 + 8) = uVar6;
    *(undefined4 *)(pFVar1 + 0xc) = uVar7;
    *(double *)(pFVar2 + lVar20 + 0x10) = dVar8;
    *(double *)(pFVar2 + lVar20 + 0x10 + 8) = dVar9;
    *(double *)(pFVar2 + lVar20 + 0x20) = dVar10;
    *(double *)(pFVar2 + lVar20 + 0x20 + 8) = dVar11;
    *(double *)(pFVar2 + lVar20 + 0x30) = dVar12;
    *(double *)(pFVar2 + lVar20 + 0x30 + 8) = dVar13;
    *(double *)(pFVar2 + lVar20 + 0x40) = dVar14;
    *(double *)(pFVar2 + lVar20 + 0x40 + 8) = dVar15;
    *(double *)(pFVar2 + lVar20 + 0x50) = dVar16;
    *(double *)(pFVar2 + lVar20 + 0x50 + 8) = dVar17;
    UpdateBounds(this,param_1);
  }
  return;
}

// UpdateBounds @ 1482b7270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCollisionStructure::UpdateBounds(FCollisionStructure *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TBox<double> *pTVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  TBox<double> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lVar8 = (longlong)param_1;
  bVar5 = EntryIsValid(this,param_1);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntryIsValid(EntryIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\CollisionStructure.cpp"
                         ,0x3d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = (this->Geom).ArrayNum;
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < iVar1) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (local_b8 = lVar8, local_b0 = (longlong)iVar1,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = (this->Transform).ArrayNum;
  pFVar2 = (this->Geom).AllocatorInstance.Data;
  uVar6 = 0;
  if (param_1 < iVar1) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (local_b8 = lVar8, local_b0 = (longlong)iVar1,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar7 = FKAggregateGeom::CalcAABB
                     ((FKAggregateGeom *)(pFVar2 + lVar8 * 0xa0),&local_70,
                      (TTransform<double> *)
                      ((this->Transform).AllocatorInstance.Data + lVar8 * 0x60));
  local_90 = (pTVar7->Min).field0_0x0._s_0.Z;
  dStack_88 = (pTVar7->Max).field0_0x0._s_0.X;
  local_a0 = *(undefined4 *)&(pTVar7->Min).field0_0x0;
  uStack_9c = *(undefined4 *)((longlong)&(pTVar7->Min).field0_0x0 + 4);
  uStack_98 = *(undefined4 *)((longlong)&(pTVar7->Min).field0_0x0 + 8);
  uStack_94 = *(undefined4 *)((longlong)&(pTVar7->Min).field0_0x0 + 0xc);
  local_80 = (pTVar7->Max).field0_0x0._s_0.Y;
  dStack_78 = (pTVar7->Max).field0_0x0._s_0.Z;
  local_a8._0_1_ = pTVar7->IsValid;
  local_a8._1_1_ = pTVar7->Pad[0];
  local_a8._2_1_ = pTVar7->Pad[1];
  local_a8._3_1_ = pTVar7->Pad[2];
  local_a8._4_1_ = pTVar7->Pad[3];
  local_a8._5_1_ = pTVar7->Pad[4];
  local_a8._6_1_ = pTVar7->Pad[5];
  local_a8._7_1_ = pTVar7->Pad[6];
  iVar1 = (this->Bounds).ArrayNum;
  local_b0 = (longlong)iVar1;
  uVar6 = 0;
  if (param_1 < iVar1) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (local_b8 = lVar8,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->Bounds).AllocatorInstance.Data;
  lVar8 = lVar8 * 0x38;
  pFVar2 = pFVar3 + lVar8;
  *(undefined4 *)pFVar2 = local_a0;
  *(undefined4 *)(pFVar2 + 4) = uStack_9c;
  *(undefined4 *)(pFVar2 + 8) = uStack_98;
  *(undefined4 *)(pFVar2 + 0xc) = uStack_94;
  *(double *)(pFVar3 + lVar8 + 0x10) = local_90;
  *(double *)(pFVar3 + lVar8 + 0x10 + 8) = dStack_88;
  *(double *)(pFVar3 + lVar8 + 0x20) = local_80;
  *(double *)(pFVar3 + lVar8 + 0x20 + 8) = dStack_78;
  *(undefined8 *)(pFVar3 + lVar8 + 0x30) = local_a8;
  return;
}

