// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 17

// TSpatialHash<double> @ 143dfa5b0

TSpatialHash<double> * __thiscall
Chaos::TSpatialHash<double>::TSpatialHash<double>
          (TSpatialHash<double> *this,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  piVar1 = &(this->MParticles).ArrayMax;
  (this->MParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  (this->MParticles).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->MParticles).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0x18);
  }
  *(undefined8 *)&this->MHashTable = 0;
  *(undefined8 *)&(this->MBoundingBox).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MHashTable).field_0x8 = 0;
  *(undefined8 *)&(this->MHashTable).field_0x20 = 0;
  *(undefined8 *)&(this->MBoundingBox).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->MBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->MBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
  *(undefined4 *)&(this->MHashTable).field_0x28 = 0;
  *(undefined4 *)&(this->MHashTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->MHashTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MHashTable).field_0x34 = 0;
  *(undefined8 *)&(this->MHashTable).field_0x40 = 0;
  *(undefined4 *)&(this->MHashTable).field_0x48 = 0;
  Init(this);
  return this;
}

// TSpatialHash<double> @ 143dfa6b0

TSpatialHash<double> * __thiscall
Chaos::TSpatialHash<double>::TSpatialHash<double>
          (TSpatialHash<double> *this,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_1,double param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->MParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->MParticles).ArrayMax;
  iVar2 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  (this->MParticles).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->MParticles).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0x18);
  }
  *(undefined8 *)&this->MHashTable = 0;
  *(undefined8 *)&(this->MBoundingBox).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MHashTable).field_0x8 = 0;
  *(undefined8 *)&(this->MHashTable).field_0x20 = 0;
  *(undefined8 *)&(this->MBoundingBox).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->MBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->MBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
  *(undefined4 *)&(this->MHashTable).field_0x28 = 0;
  *(undefined4 *)&(this->MHashTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->MHashTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MHashTable).field_0x34 = 0;
  *(undefined8 *)&(this->MHashTable).field_0x40 = 0;
  *(undefined4 *)&(this->MHashTable).field_0x48 = 0;
  Init(this,param_2);
  return this;
}

// ~TSpatialHash<double> @ 143dfdeb0

void __thiscall Chaos::TSpatialHash<double>::~TSpatialHash<double>(TSpatialHash<double> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->MHashTable).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MHashTable).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MHashTable);
  pFVar2 = (this->MParticles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ComputeGridXYZ @ 143e15710

void __thiscall
Chaos::TSpatialHash<double>::ComputeGridXYZ
          (TSpatialHash<double> *this,TVector<double,3> *param_1,int *param_2,int *param_3,
          int *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = *(double *)&param_1->field_0x8;
  dVar2 = *(double *)&(this->MBoundingBox).MMin.field_0x8;
  dVar3 = *(double *)&param_1->field_0x10;
  dVar4 = *(double *)&(this->MBoundingBox).MMin.field_0x10;
  dVar6 = __real_3ff0000000000000 / this->MCellSize;
  dVar5 = this->MCellSize * __real_3fe0000000000000;
  *param_2 = (int)(((*(double *)param_1 - *(double *)&(this->MBoundingBox).MMin) + dVar5) * dVar6);
  *param_3 = (int)(dVar6 * ((dVar1 - dVar2) + dVar5));
  *param_4 = (int)(dVar6 * ((dVar3 - dVar4) + dVar5));
  return;
}

// ComputeMaxN @ 143e15790

int __thiscall
Chaos::TSpatialHash<double>::ComputeMaxN
          (TSpatialHash<double> *this,TVector<double,3> *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  ForAnyElementType local_148;
  undefined8 local_140;
  ForAnyElementType local_138;
  int local_130 [2];
  ForAnyElementType local_128;
  int local_120 [2];
  double local_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  double dStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  double dStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  
  uVar20 = 0;
  iVar16 = -0x7fffffff;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120[0] = 0;
  local_120[1] = 0;
  iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,3,&local_128,local_120,local_120 + 1);
  *(undefined8 *)(local_128.Data + (longlong)iVar15 * 4) = 0;
  *(undefined4 *)(local_128.Data + (longlong)iVar15 * 4 + 8) = 0;
  if (local_120[0] < 3) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      iVar16 = (*pcVar7)();
      return iVar16;
    }
  }
  FVar11.Data = local_128.Data;
  iVar15 = local_120[0];
  if (local_120[0] < 2) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      iVar16 = (*pcVar7)();
      return iVar16;
    }
    iVar15 = local_120[0];
  }
  FVar12.Data = local_128.Data;
  if ((iVar15 < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar7 = (code *)swi(3);
    iVar16 = (*pcVar7)();
    return iVar16;
  }
  dVar10 = __real_3fe0000000000000;
  dVar9 = __real_3ff0000000000000;
  dVar1 = *(double *)&param_1->field_0x8;
  dVar2 = *(double *)&(this->MBoundingBox).MMin.field_0x8;
  dVar3 = *(double *)&param_1->field_0x10;
  dVar4 = *(double *)&(this->MBoundingBox).MMin.field_0x10;
  dVar24 = __real_3ff0000000000000 / this->MCellSize;
  dVar23 = this->MCellSize * __real_3fe0000000000000;
  *(int *)local_128.Data =
       (int)(((*(double *)param_1 - *(double *)&(this->MBoundingBox).MMin) + dVar23) * dVar24);
  *(int *)(FVar12.Data + 4) = (int)(((dVar1 - dVar2) + dVar23) * dVar24);
  *(int *)(FVar11.Data + 8) = (int)(dVar24 * ((dVar3 - dVar4) + dVar23));
  dVar1 = *(double *)param_1;
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  uVar6 = *(undefined8 *)&param_1->field_0x10;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  iVar17 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_148,(int *)((longlong)&local_140 + 4));
  uVar25 = (undefined4)uVar5;
  uVar26 = (undefined4)((ulonglong)uVar5 >> 0x20);
  iVar15 = iVar17 + 1;
  local_a0._8_4_ = uVar25;
  local_a0._0_8_ = dVar1 - param_2;
  local_a0._12_4_ = uVar26;
  auVar8._8_4_ = uVar25;
  auVar8._0_8_ = dVar1 - param_2;
  auVar8._12_4_ = uVar26;
  *(undefined1 (*) [16])(local_148.Data + (longlong)iVar17 * 0x18) = auVar8;
  *(undefined8 *)(local_148.Data + (longlong)iVar17 * 0x18 + 0x10) = uVar6;
  local_118 = param_2 + *(double *)param_1;
  dStack_110 = *(double *)&param_1->field_0x8;
  uStack_108 = *(undefined8 *)&param_1->field_0x10;
  local_90 = uVar6;
  local_140._0_4_ = iVar15;
  if (((local_148.Data <= (FScriptContainerElement *)&local_118) &&
      ((FScriptContainerElement *)&local_118 < local_148.Data + (longlong)local_140._4_4_ * 0x18))
     && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar14)) {
    pcVar7 = (code *)swi(3);
    iVar16 = (*pcVar7)();
    return iVar16;
  }
  if ((int)local_140 == local_140._4_4_) {
    local_140._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_148,(int *)((longlong)&local_140 + 4));
  }
  iVar15 = (int)local_140 + 1;
  *(double *)(local_148.Data + (longlong)(int)local_140 * 0x18) = local_118;
  *(double *)(local_148.Data + (longlong)(int)local_140 * 0x18 + 8) = dStack_110;
  *(undefined8 *)(local_148.Data + (longlong)(int)local_140 * 0x18 + 0x10) = uStack_108;
  local_100 = *(undefined8 *)param_1;
  dStack_f8 = *(double *)&param_1->field_0x8 - param_2;
  local_f0 = *(undefined8 *)&param_1->field_0x10;
  local_140._0_4_ = iVar15;
  if (((local_148.Data <= (FScriptContainerElement *)&local_100) &&
      ((FScriptContainerElement *)&local_100 < local_148.Data + (longlong)local_140._4_4_ * 0x18))
     && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar14)) {
    pcVar7 = (code *)swi(3);
    iVar16 = (*pcVar7)();
    return iVar16;
  }
  if ((int)local_140 == local_140._4_4_) {
    local_140._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_148,(int *)((longlong)&local_140 + 4));
  }
  iVar15 = (int)local_140 + 1;
  *(undefined8 *)(local_148.Data + (longlong)(int)local_140 * 0x18) = local_100;
  *(double *)(local_148.Data + (longlong)(int)local_140 * 0x18 + 8) = dStack_f8;
  *(undefined8 *)(local_148.Data + (longlong)(int)local_140 * 0x18 + 0x10) = local_f0;
  local_e8 = *(undefined8 *)param_1;
  dStack_e0 = param_2 + *(double *)&param_1->field_0x8;
  local_d8 = *(undefined8 *)&param_1->field_0x10;
  local_140._0_4_ = iVar15;
  if (((local_148.Data <= (FScriptContainerElement *)&local_e8) &&
      ((FScriptContainerElement *)&local_e8 < local_148.Data + (longlong)local_140._4_4_ * 0x18)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar7 = (code *)swi(3);
    iVar16 = (*pcVar7)();
    return iVar16;
  }
  if ((int)local_140 == local_140._4_4_) {
    local_140._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_148,(int *)((longlong)&local_140 + 4));
  }
  iVar15 = (int)local_140 + 1;
  *(undefined8 *)(local_148.Data + (longlong)(int)local_140 * 0x18) = local_e8;
  *(double *)(local_148.Data + (longlong)(int)local_140 * 0x18 + 8) = dStack_e0;
  *(undefined8 *)(local_148.Data + (longlong)(int)local_140 * 0x18 + 0x10) = local_d8;
  local_d0 = *(undefined8 *)param_1;
  uStack_c8 = *(undefined8 *)&param_1->field_0x8;
  local_c0 = *(double *)&param_1->field_0x10 - param_2;
  local_140._0_4_ = iVar15;
  if (((local_148.Data <= (FScriptContainerElement *)&local_d0) &&
      ((FScriptContainerElement *)&local_d0 < local_148.Data + (longlong)local_140._4_4_ * 0x18)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar7 = (code *)swi(3);
    iVar16 = (*pcVar7)();
    return iVar16;
  }
  if ((int)local_140 == local_140._4_4_) {
    local_140._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_148,(int *)((longlong)&local_140 + 4));
  }
  iVar15 = (int)local_140 + 1;
  *(undefined8 *)(local_148.Data + (longlong)(int)local_140 * 0x18) = local_d0;
  *(undefined8 *)(local_148.Data + (longlong)(int)local_140 * 0x18 + 8) = uStack_c8;
  *(double *)(local_148.Data + (longlong)(int)local_140 * 0x18 + 0x10) = local_c0;
  local_a8 = param_2 + *(double *)&param_1->field_0x10;
  local_b8 = *(undefined8 *)param_1;
  uStack_b0 = *(undefined8 *)&param_1->field_0x8;
  local_140._0_4_ = iVar15;
  if (((local_148.Data <= (FScriptContainerElement *)&local_b8) &&
      ((FScriptContainerElement *)&local_b8 < local_148.Data + (longlong)local_140._4_4_ * 0x18)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar7 = (code *)swi(3);
    iVar16 = (*pcVar7)();
    return iVar16;
  }
  if ((int)local_140 == local_140._4_4_) {
    local_140._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_148,(int *)((longlong)&local_140 + 4));
  }
  lVar19 = (longlong)(int)local_140;
  local_140 = CONCAT44(local_140._4_4_,(int)local_140 + 1);
  *(undefined8 *)(local_148.Data + lVar19 * 0x18) = local_b8;
  *(undefined8 *)(local_148.Data + lVar19 * 0x18 + 8) = uStack_b0;
  *(double *)(local_148.Data + lVar19 * 0x18 + 0x10) = local_a8;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130[0] = 0;
  local_130[1] = 0;
  iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,3,&local_138,local_130,local_130 + 1);
  *(undefined8 *)(local_138.Data + (longlong)iVar15 * 4) = 0;
  *(undefined4 *)(local_138.Data + (longlong)iVar15 * 4 + 8) = 0;
  uVar22 = uVar20;
  if (0 < (int)local_140) {
    do {
      if ((local_130[0] < 3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        iVar16 = (*pcVar7)();
        return iVar16;
      }
      FVar11.Data = local_138.Data;
      if ((local_130[0] < 2) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        iVar16 = (*pcVar7)();
        return iVar16;
      }
      FVar12.Data = local_138.Data;
      if ((local_130[0] < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        iVar16 = (*pcVar7)();
        return iVar16;
      }
      FVar13.Data = local_138.Data;
      uVar21 = (uint)uVar22;
      uVar18 = 0;
      if ((int)uVar21 < (int)local_140) {
        uVar18 = ~uVar21 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        iVar16 = (*pcVar7)();
        return iVar16;
      }
      dVar24 = dVar9 / this->MCellSize;
      dVar1 = *(double *)(local_148.Data + uVar20 + 8);
      dVar2 = *(double *)(local_148.Data + uVar20 + 0x10);
      dVar3 = *(double *)&(this->MBoundingBox).MMin.field_0x8;
      dVar4 = *(double *)&(this->MBoundingBox).MMin.field_0x10;
      dVar23 = this->MCellSize * dVar10;
      *(int *)FVar13.Data =
           (int)(((*(double *)(local_148.Data + uVar20) - *(double *)&(this->MBoundingBox).MMin) +
                 dVar23) * dVar24);
      *(int *)(FVar12.Data + 4) = (int)(dVar24 * ((dVar1 - dVar3) + dVar23));
      *(int *)(FVar11.Data + 8) = (int)(dVar24 * ((dVar2 - dVar4) + dVar23));
      iVar15 = this->MNumberOfCellsX + -1;
      if (local_130[0] < 1) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          iVar16 = (*pcVar7)();
          return iVar16;
        }
      }
      if (*(int *)local_138.Data < iVar15) {
        iVar15 = *(int *)local_138.Data;
      }
      iVar17 = 0;
      if (0 < iVar15) {
        iVar17 = iVar15;
      }
      if ((local_130[0] < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        iVar16 = (*pcVar7)();
        return iVar16;
      }
      *(int *)local_138.Data = iVar17;
      iVar15 = this->MNumberOfCellsY + -1;
      if (local_130[0] < 2) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          iVar16 = (*pcVar7)();
          return iVar16;
        }
      }
      if (*(int *)(local_138.Data + 4) < iVar15) {
        iVar15 = *(int *)(local_138.Data + 4);
      }
      iVar17 = 0;
      if (0 < iVar15) {
        iVar17 = iVar15;
      }
      if ((local_130[0] < 2) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        iVar16 = (*pcVar7)();
        return iVar16;
      }
      *(int *)(local_138.Data + 4) = iVar17;
      iVar15 = this->MNumberOfCellsZ + -1;
      if (local_130[0] < 3) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          iVar16 = (*pcVar7)();
          return iVar16;
        }
      }
      if (*(int *)(local_138.Data + 8) < iVar15) {
        iVar15 = *(int *)(local_138.Data + 8);
      }
      iVar17 = 0;
      if (0 < iVar15) {
        iVar17 = iVar15;
      }
      if ((local_130[0] < 3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        iVar16 = (*pcVar7)();
        return iVar16;
      }
      *(int *)(local_138.Data + 8) = iVar17;
      if ((local_120[0] < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        iVar16 = (*pcVar7)();
        return iVar16;
      }
      FVar11.Data = local_128.Data;
      if ((local_130[0] < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        iVar16 = (*pcVar7)();
        return iVar16;
      }
      iVar15 = -(*(int *)FVar11.Data - *(int *)local_138.Data);
      if (iVar15 < 0) {
        iVar15 = *(int *)FVar11.Data - *(int *)local_138.Data;
      }
      iVar17 = iVar15 + 1;
      if (iVar15 + 1 <= iVar16) {
        iVar17 = iVar16;
      }
      if ((local_120[0] < 2) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        iVar16 = (*pcVar7)();
        return iVar16;
      }
      FVar11.Data = local_128.Data;
      if ((local_130[0] < 2) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        iVar16 = (*pcVar7)();
        return iVar16;
      }
      iVar16 = -(*(int *)(FVar11.Data + 4) - *(int *)(local_138.Data + 4));
      if (iVar16 < 0) {
        iVar16 = *(int *)(FVar11.Data + 4) - *(int *)(local_138.Data + 4);
      }
      iVar15 = iVar16 + 1;
      if (iVar16 + 1 <= iVar17) {
        iVar15 = iVar17;
      }
      if ((local_120[0] < 3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        iVar16 = (*pcVar7)();
        return iVar16;
      }
      FVar11.Data = local_128.Data;
      if ((local_130[0] < 3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        iVar16 = (*pcVar7)();
        return iVar16;
      }
      iVar17 = -(*(int *)(FVar11.Data + 8) - *(int *)(local_138.Data + 8));
      if (iVar17 < 0) {
        iVar17 = *(int *)(FVar11.Data + 8) - *(int *)(local_138.Data + 8);
      }
      iVar16 = iVar17 + 1;
      if (iVar17 + 1 <= iVar15) {
        iVar16 = iVar15;
      }
      uVar20 = uVar20 + 0x18;
      uVar22 = (ulonglong)(uVar21 + 1);
    } while ((int)(uVar21 + 1) < (int)local_140);
  }
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data);
  }
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  return iVar16;
}

// GetClosestPoint @ 143e247a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Chaos::TSpatialHash<double>::GetClosestPoint(TSpatialHash<double> *this,TVector<double,3> *param_1)

{
  TAABB<double,3> *this_00;
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  double dVar3;
  undefined1 *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  TSpatialHash<double> *pTVar8;
  TVector<double,3> *pTVar9;
  longlong *plVar10;
  bool bVar11;
  ulonglong uVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte bVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  undefined1 *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  ForElementType<unsigned_int> FVar29;
  ulonglong uVar30;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  longlong local_2a0;
  undefined1 local_298;
  undefined1 local_297 [3];
  uint local_294;
  longlong *local_290;
  uint uStack_288;
  uint uStack_284;
  TBitArray<FDefaultBitArrayAllocator> *local_280;
  undefined4 uStack_278;
  uint uStack_274;
  uint local_270;
  undefined4 uStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  int local_260;
  uint uStack_25c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_258;
  undefined4 local_250;
  uint uStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  TSpatialHash<double> *local_240;
  TVector<double,3> *local_238;
  int local_230;
  int local_22c;
  undefined4 local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  LARGE_INTEGER local_210;
  LARGE_INTEGER local_208;
  longlong *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f8;
  longlong *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  TArray<int,TSizedDefaultAllocator<32>_> local_178;
  TVector<double,3> local_168 [2];
  undefined4 local_134;
  undefined4 local_114;
  undefined1 local_108 [32];
  ForElementType<unsigned_int> local_e8;
  uint local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  FScriptContainerElement local_d0 [8];
  ForAnyElementType local_c8;
  uint local_c0;
  undefined1 local_b8 [32];
  uint *local_98;
  uint local_90;
  int local_84;
  ForElementType<FSetElementId> local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_240 = this;
  local_238 = param_1;
  QueryPerformanceCounter(&local_210);
  this_00 = &this->MBoundingBox;
  uVar30 = 0;
  uVar12 = uVar30;
  do {
    dVar3 = *(double *)(&param_1->field_0x0 + uVar12);
    if ((dVar3 < *(double *)(&(this_00->MMin).field_0x0 + uVar12)) ||
       (pdVar2 = (double *)(&(this_00->MMax).field_0x0 + uVar12),
       *pdVar2 <= dVar3 && dVar3 != *pdVar2)) {
      TAABB<double,3>::FindClosestPoint(this_00,local_168,param_1,0.0);
      iVar21 = GetClosestPoint(this,local_168);
      goto LAB_143e251c5;
    }
    uVar12 = uVar12 + 8;
  } while ((longlong)uVar12 < 0x18);
  local_108._0_8_ = (FScriptContainerElement *)0x0;
  local_294 = 0;
  local_108._8_8_ = 0;
  local_e8 = (ForElementType<unsigned_int>)0x0;
  local_e0 = 0;
  local_dc = 0x80;
  local_d8 = -1;
  local_d4 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  do {
    GetNRing(this,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_b8,param_1,
             (int)uVar30);
    uVar27 = local_90;
    uStack_288 = 0;
    uStack_284 = 1;
    uStack_274 = uStack_288;
    local_270 = uStack_288;
    if (local_90 != 0) {
      puVar28 = (uint *)(local_b8 + 0x10);
      if (local_98 != (uint *)0x0) {
        puVar28 = local_98;
      }
      uStack_284 = *puVar28;
      while (uStack_284 == 0) {
        lVar17 = (longlong)(int)uStack_288;
        local_270 = local_270 + 0x20;
        uStack_288 = uStack_288 + 1;
        uStack_284 = 1;
        uStack_274 = local_90;
        if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_288)
        goto LAB_143e24940;
        uStack_284 = puVar28[lVar17 + 1];
      }
      uStack_284 = -uStack_284 & uStack_284;
      uVar12 = (ulonglong)uStack_284 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_230 = (int)lVar17;
      uStack_274 = (local_270 - 1) + local_230;
      if ((int)local_90 < (int)uStack_274) {
        uStack_274 = local_90;
      }
    }
LAB_143e24940:
    local_290 = (longlong *)local_b8;
    uStack_26c = local_134;
    local_280 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
    uVar26 = local_90 & 0xffffffe0;
    iStack_268 = local_b8._8_4_ - local_84;
    TStack_1d0._padding_ = CONCAT44(uStack_284,uStack_288);
    uStack_278 = 0xffffffff;
    TStack_1d0.CurrentBitIndex = uStack_274;
    TStack_1d0.UnvisitedBitMask = 0xffffffff;
    iVar21 = (int)local_90 >> 5;
    TStack_1d0._28_4_ = local_134;
    TStack_1d0.BaseBitIndex = local_270;
    uStack_1b0 = CONCAT44(uStack_264,iStack_268);
    bVar16 = (byte)local_90;
    local_1d8 = local_290;
    TStack_1d0.Array = local_280;
    if (((int)local_90 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      iVar21 = (*pcVar5)();
      return iVar21;
    }
    this = local_240;
    if (uVar27 != local_90) {
      puVar28 = (uint *)(local_b8 + 0x10);
      if (local_98 != (uint *)0x0) {
        puVar28 = local_98;
      }
      uVar27 = -1 << (bVar16 & 0x1f) & puVar28[iVar21];
      while (uVar27 == 0) {
        lVar17 = (longlong)iVar21;
        uVar26 = uVar26 + 0x20;
        iVar21 = iVar21 + 1;
        uVar27 = local_90;
        if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_143e24a70;
        uVar27 = puVar28[lVar17 + 1];
      }
      uVar12 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_22c = (int)lVar17;
      uVar27 = (uVar26 - 1) + local_22c;
      if ((int)local_90 < (int)uVar27) {
        uVar27 = local_90;
      }
    }
LAB_143e24a70:
    while( true ) {
      plVar10 = local_1d8;
      if ((int)local_1d8[1] - *(int *)((longlong)local_1d8 + 0x34) != (int)uStack_1b0) {
        local_298 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_298);
      }
      if (((TStack_1d0.CurrentBitIndex == uVar27) &&
          (TStack_1d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10))) &&
         (plVar10 == (longlong *)local_b8)) break;
      uVar26 = *(uint *)(*plVar10 + (longlong)TStack_1d0.CurrentBitIndex * 0xc);
      if (*(int *)&(this->MHashTable).field_0x8 != *(int *)&(this->MHashTable).field_0x34) {
        puVar4 = *(undefined1 **)&(this->MHashTable).field_0x40;
        puVar20 = &(this->MHashTable).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar20 = puVar4;
        }
        iVar21 = *(int *)(puVar20 +
                         (ulonglong)(*(int *)&(this->MHashTable).field_0x48 - 1U & uVar26) * 4);
        if (iVar21 != -1) {
LAB_143e24b00:
          if (*(uint *)((longlong)iVar21 * 0x20 + *(longlong *)&this->MHashTable) != uVar26)
          goto code_r0x000143e24b0c;
          pTVar13 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindChecked((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                   *)&this->MHashTable,uVar26);
          iVar21 = pTVar13->ArrayNum;
          pFVar24 = (pTVar13->AllocatorInstance).Data;
          if ((iVar21 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            iVar21 = (*pcVar5)();
            return iVar21;
          }
          uVar26 = (local_108._8_4_ - local_d4) + iVar21;
          if (uVar26 <= (uint)(local_108._8_4_ - local_d4)) goto LAB_143e24dc2;
          if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar26);
          }
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_108,uVar26);
          if (uVar26 < 4) {
            uVar26 = 1;
          }
          else {
            uVar12 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
            lVar17 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_228 = (undefined4)lVar17;
            uVar26 = 1 << ((byte)lVar17 & 0x1f);
          }
          if ((local_c0 == 0) || ((int)local_c0 < (int)uVar26)) {
            local_c0 = uVar26;
            if (local_c8.Data != (FScriptContainerElement *)0x0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
            }
            if (uVar26 != 0) {
              uVar19 = uVar26;
              if (uVar26 < 2) {
                if (local_c8.Data != (FScriptContainerElement *)0x0) {
                  uVar19 = 0;
                  goto LAB_143e24c0f;
                }
              }
              else {
LAB_143e24c0f:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_c8,0,uVar19,4);
              }
              if (0 < (int)uVar26) {
                uVar30 = (ulonglong)uVar26;
                uVar12 = 0;
                do {
                  FVar18.Data = local_d0;
                  if (local_c8.Data != (FScriptContainerElement *)0x0) {
                    FVar18.Data = local_c8.Data;
                  }
                  uVar14 = uVar12 & (longlong)(int)uVar26 - 1U;
                  uVar12 = uVar12 + 1;
                  *(undefined4 *)(FVar18.Data + uVar14 * 4) = 0xffffffff;
                  uVar30 = uVar30 - 1;
                } while (uVar30 != 0);
              }
            }
            if (local_c0 != 0) {
              pTStack_258 = (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10);
              uStack_25c = 1;
              local_260 = 0;
              uStack_24c = 0;
              iStack_248 = 0;
              if (local_e0 != 0) {
                FVar29 = (ForElementType<unsigned_int>)((longlong)local_108 + 0x10);
                if (local_e8 != (ForElementType<unsigned_int>)0x0) {
                  FVar29 = local_e8;
                }
                uVar26 = *(uint *)FVar29;
                iStack_248 = 0;
                local_260 = 0;
                while (uVar26 == 0) {
                  iStack_248 = iStack_248 + 0x20;
                  lVar17 = (longlong)local_260;
                  local_260 = local_260 + 1;
                  if ((int)((local_e0 - 1) + ((int)(local_e0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_260
                     ) goto LAB_143e24d20;
                  uVar26 = ((uint *)((longlong)FVar29 + 4))[lVar17];
                }
                uStack_25c = -uVar26 & uVar26;
                uVar12 = (ulonglong)uStack_25c * 2 + 1;
                lVar17 = 0x3f;
                if (uVar12 != 0) {
                  for (; uVar12 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                  }
                }
                local_224 = (int)lVar17;
                uStack_24c = iStack_248 + -1 + local_224;
                if ((int)uStack_24c <= (int)local_e0) goto LAB_143e24d28;
LAB_143e24d20:
                uStack_24c = local_e0;
              }
LAB_143e24d28:
              local_250 = 0xffffffff;
              local_200 = (longlong *)local_108;
              local_1f8._padding_ = CONCAT44(uStack_25c,local_260);
              local_1f8.CurrentBitIndex = uStack_24c;
              local_1f8.UnvisitedBitMask = 0xffffffff;
              local_1f8._28_4_ = uStack_244;
              local_1f8.BaseBitIndex = iStack_248;
              local_1f8.Array = pTStack_258;
              uVar26 = uStack_24c;
              if ((int)uStack_24c < (int)local_e0) {
                do {
                  lVar17 = *local_200;
                  lVar15 = (longlong)(int)uVar26;
                  uVar19 = local_c0 - 1 & *(uint *)(lVar17 + lVar15 * 0xc);
                  *(uint *)(lVar17 + 8 + lVar15 * 0xc) = uVar19;
                  FVar18.Data = local_d0;
                  if (local_c8.Data != (FScriptContainerElement *)0x0) {
                    FVar18.Data = local_c8.Data;
                  }
                  uVar12 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar19;
                  *(undefined4 *)(lVar17 + 4 + lVar15 * 0xc) =
                       *(undefined4 *)(FVar18.Data + uVar12 * 4);
                  *(uint *)(FVar18.Data + uVar12 * 4) = uVar26;
                  local_1f8.UnvisitedBitMask =
                       local_1f8.UnvisitedBitMask & ~local_1f8._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f8);
                  uVar26 = local_1f8.CurrentBitIndex;
                } while (local_1f8.CurrentBitIndex < (local_1f8.Array)->NumBits);
              }
            }
          }
LAB_143e24dc2:
          pFVar1 = pFVar24 + (longlong)iVar21 * 4;
          for (; pFVar24 != pFVar1; pFVar24 = pFVar24 + 4) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108,&local_220
                       ,(bool *)pFVar24);
          }
        }
      }
LAB_143e24def:
      TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
    }
    local_294 = local_294 + 1;
    uVar30 = (ulonglong)local_294;
    uVar27 = 0;
    local_70 = 0;
    if (local_78 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_78);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_b8);
    param_1 = local_238;
  } while (local_108._8_4_ - local_d4 < 1);
  pTVar13 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108,&local_178
                      );
  if (pTVar13->ArrayNum < 1) {
    local_2a8 = 0;
    local_2a0 = (longlong)pTVar13->ArrayNum;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      iVar21 = (*pcVar5)();
      return iVar21;
    }
  }
  iVar21 = *(int *)(pTVar13->AllocatorInstance).Data;
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  uVar26 = local_e0;
  dVar3 = __real_7fefffffffffffff;
  iVar22 = local_108._8_4_ - local_d4;
  if (1 < iVar22) {
    local_270 = 0;
    uStack_274 = local_270;
    uStack_284 = 1;
    if (local_e0 != 0) {
      FVar29 = (ForElementType<unsigned_int>)((longlong)local_108 + 0x10);
      if (local_e8 != (ForElementType<unsigned_int>)0x0) {
        FVar29 = local_e8;
      }
      uVar19 = *(uint *)FVar29;
      local_270 = 0;
      uVar27 = 0;
      while (uVar19 == 0) {
        lVar17 = (longlong)(int)uVar27;
        local_270 = local_270 + 0x20;
        uVar27 = uVar27 + 1;
        uStack_274 = local_e0;
        if ((int)((local_e0 - 1) + ((int)(local_e0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
        goto LAB_143e24f51;
        uVar19 = ((uint *)((longlong)FVar29 + 4))[lVar17];
      }
      uStack_284 = -uVar19 & uVar19;
      uVar12 = (ulonglong)uStack_284 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_21c = (int)lVar17;
      uStack_274 = (local_270 - 1) + local_21c;
      if ((int)local_e0 < (int)uStack_274) {
        uStack_274 = local_e0;
      }
    }
LAB_143e24f51:
    local_290 = (longlong *)local_108;
    local_280 = (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10);
    uVar19 = local_e0 & 0xffffffe0;
    uStack_278 = 0xffffffff;
    TStack_1a0.CurrentBitIndex = uStack_274;
    TStack_1a0.UnvisitedBitMask = 0xffffffff;
    TStack_1a0._padding_ = CONCAT44(uStack_284,uVar27);
    uStack_26c = local_114;
    iVar23 = (int)local_e0 >> 5;
    TStack_1a0._28_4_ = local_114;
    TStack_1a0.BaseBitIndex = local_270;
    uStack_180 = CONCAT44(uStack_264,iVar22);
    bVar16 = (byte)local_e0;
    uStack_288 = uVar27;
    iStack_268 = iVar22;
    local_1a8 = local_290;
    TStack_1a0.Array = local_280;
    if (((int)local_e0 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      iVar21 = (*pcVar5)();
      return iVar21;
    }
    pTVar9 = local_238;
    pTVar8 = local_240;
    if (uVar26 != local_e0) {
      FVar29 = (ForElementType<unsigned_int>)((longlong)local_108 + 0x10);
      if (local_e8 != (ForElementType<unsigned_int>)0x0) {
        FVar29 = local_e8;
      }
      uVar27 = -1 << (bVar16 & 0x1f) & *(uint *)((longlong)FVar29 + (longlong)iVar23 * 4);
      while (uVar27 == 0) {
        lVar17 = (longlong)iVar23;
        uVar19 = uVar19 + 0x20;
        iVar23 = iVar23 + 1;
        uVar26 = local_e0;
        if ((int)((local_e0 - 1) + ((int)(local_e0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_143e25070;
        uVar27 = ((uint *)((longlong)FVar29 + 4))[lVar17];
      }
      uVar12 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_218 = (int)lVar17;
      uVar26 = (uVar19 - 1) + local_218;
      if ((int)local_e0 < (int)uVar26) {
        uVar26 = local_e0;
      }
    }
LAB_143e25070:
    while( true ) {
      plVar10 = local_1a8;
      if ((int)local_1a8[1] - *(int *)((longlong)local_1a8 + 0x34) != (int)uStack_180) {
        local_297[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_297);
      }
      lVar17 = (longlong)TStack_1a0.CurrentBitIndex;
      if (((TStack_1a0.CurrentBitIndex == uVar26) &&
          (TStack_1a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10))) &&
         (plVar10 == (longlong *)local_108)) break;
      lVar15 = *plVar10;
      iVar22 = (pTVar8->MParticles).ArrayNum;
      uVar27 = *(uint *)(lVar15 + lVar17 * 0xc);
      lVar25 = (longlong)(int)uVar27;
      uVar19 = 0;
      if ((int)uVar27 < iVar22) {
        uVar19 = ~uVar27 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (local_2a8 = lVar25, local_2a0 = (longlong)iVar22,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        iVar21 = (*pcVar5)();
        return iVar21;
      }
      pFVar24 = (pTVar8->MParticles).AllocatorInstance.Data;
      dVar7 = *(double *)&pTVar9->field_0x8 - *(double *)(pFVar24 + lVar25 * 0x18 + 8);
      dVar6 = *(double *)&pTVar9->field_0x10 - *(double *)(pFVar24 + lVar25 * 0x18 + 0x10);
      dVar6 = dVar7 * dVar7 +
              (*(double *)pTVar9 - *(double *)(pFVar24 + lVar25 * 0x18)) *
              (*(double *)pTVar9 - *(double *)(pFVar24 + lVar25 * 0x18)) + dVar6 * dVar6;
      if (dVar6 < dVar3) {
        iVar21 = *(int *)(lVar15 + lVar17 * 0xc);
        dVar3 = dVar6;
      }
      TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
    }
  }
  local_c0 = 0;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
LAB_143e251c5:
  QueryPerformanceCounter(&local_208);
  if (4 < (byte)LogChaosSpatialHash._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_int___cdecl_Chaos::TSpatialHash<double>::GetClosestPoint(Chaos::TVector<double,3>_const&___ptr64)___ptr64'
                ::__l27::LOG_Static,(FLogCategoryBase *)&LogChaosSpatialHash);
  }
  return iVar21;
code_r0x000143e24b0c:
  iVar21 = *(int *)((longlong)iVar21 * 0x20 + 0x18 + *(longlong *)&this->MHashTable);
  if (iVar21 == -1) goto LAB_143e24def;
  goto LAB_143e24b00;
}

// GetClosestPoints @ 143e25260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TSpatialHash<double>::GetClosestPoints
          (TSpatialHash<double> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,TVector<double,3> *param_1
          ,double param_2)

{
  FScriptContainerElement *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  TSpatialHash<double> *pTVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  longlong lVar12;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar13;
  byte bVar14;
  uint *puVar15;
  ForAnyElementType FVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  undefined1 *puVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  longlong local_380;
  undefined1 local_378;
  undefined1 local_377 [3];
  int local_374;
  int local_370;
  longlong *local_368;
  uint uStack_360;
  uint uStack_35c;
  TBitArray<FDefaultBitArrayAllocator> *local_358;
  undefined4 uStack_350;
  uint uStack_34c;
  uint local_348;
  undefined4 uStack_344;
  int iStack_340;
  undefined4 uStack_33c;
  int local_338;
  uint uStack_334;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_330;
  undefined4 local_328;
  uint uStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  TVector<double,3> *local_318;
  TSpatialHash<double> *local_310;
  int local_308;
  int local_304;
  undefined4 local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  int local_2ec;
  LARGE_INTEGER local_2e8;
  LARGE_INTEGER local_2e0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2d8;
  longlong *local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2c8;
  longlong *local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2a0;
  undefined8 uStack_280;
  longlong *local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_270;
  undefined8 uStack_250;
  undefined4 local_22c;
  undefined4 local_20c;
  undefined1 local_208 [32];
  ForElementType<unsigned_int> local_1e8;
  uint local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  FScriptContainerElement local_1d0 [8];
  ForAnyElementType local_1c8;
  uint local_1c0;
  undefined1 local_1b8 [32];
  uint *local_198;
  uint local_190;
  int local_184;
  ForElementType<FSetElementId> local_178;
  int local_170;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_168;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_118;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  local_318 = param_1;
  local_310 = this;
  local_2d8 = __return_storage_ptr__;
  QueryPerformanceCounter(&local_2e8);
  local_1dc = 0x80;
  local_208._0_8_ = (FScriptContainerElement *)0x0;
  local_208._8_8_ = 0;
  local_1e8 = (ForElementType<unsigned_int>)0x0;
  local_1e0 = 0;
  local_1d8 = -1;
  local_1d4 = 0;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0 = 0;
  local_370 = ComputeMaxN(this,param_1,param_2);
  local_374 = 0;
  if (0 < local_370) {
    do {
      GetNRing(this,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1b8,param_1,
               local_374);
      uVar23 = local_190;
      uStack_360 = 0;
      uStack_35c = 1;
      uStack_34c = uStack_360;
      local_348 = uStack_360;
      if (local_190 != 0) {
        puVar15 = (uint *)(local_1b8 + 0x10);
        if (local_198 != (uint *)0x0) {
          puVar15 = local_198;
        }
        uStack_35c = *puVar15;
        while (uStack_35c == 0) {
          lVar9 = (longlong)(int)uStack_360;
          local_348 = local_348 + 0x20;
          uStack_360 = uStack_360 + 1;
          uStack_35c = 1;
          uStack_34c = local_190;
          if ((int)(((int)(local_190 - 1) >> 0x1f & 0x1fU) + (local_190 - 1)) >> 5 < (int)uStack_360
             ) goto LAB_143e253e0;
          uStack_35c = puVar15[lVar9 + 1];
        }
        uStack_35c = -uStack_35c & uStack_35c;
        uVar25 = (ulonglong)uStack_35c * 2 + 1;
        lVar9 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_308 = (int)lVar9;
        uStack_34c = (local_348 - 1) + local_308;
        if ((int)local_190 < (int)uStack_34c) {
          uStack_34c = local_190;
        }
      }
LAB_143e253e0:
      local_368 = (longlong *)local_1b8;
      uStack_344 = local_22c;
      local_358 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10);
      uVar22 = local_190 & 0xffffffe0;
      iStack_340 = local_1b8._8_4_ - local_184;
      TStack_2a0._padding_ = CONCAT44(uStack_35c,uStack_360);
      uStack_350 = 0xffffffff;
      TStack_2a0.CurrentBitIndex = uStack_34c;
      TStack_2a0.UnvisitedBitMask = 0xffffffff;
      iVar20 = (int)local_190 >> 5;
      TStack_2a0._28_4_ = local_22c;
      TStack_2a0.BaseBitIndex = local_348;
      uStack_280 = CONCAT44(uStack_33c,iStack_340);
      bVar14 = (byte)local_190;
      local_2a8 = local_368;
      TStack_2a0.Array = local_358;
      if (((int)local_190 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar10;
      }
      this = local_310;
      if (uVar23 != local_190) {
        puVar15 = (uint *)(local_1b8 + 0x10);
        if (local_198 != (uint *)0x0) {
          puVar15 = local_198;
        }
        uVar23 = -1 << (bVar14 & 0x1f) & puVar15[iVar20];
        while (uVar23 == 0) {
          lVar9 = (longlong)iVar20;
          uVar22 = uVar22 + 0x20;
          iVar20 = iVar20 + 1;
          uVar23 = local_190;
          if ((int)(((int)(local_190 - 1) >> 0x1f & 0x1fU) + (local_190 - 1)) >> 5 < iVar20)
          goto LAB_143e25510;
          uVar23 = puVar15[lVar9 + 1];
        }
        uVar25 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_304 = (int)lVar9;
        uVar23 = (uVar22 - 1) + local_304;
        if ((int)local_190 < (int)uVar23) {
          uVar23 = local_190;
        }
      }
LAB_143e25510:
      while( true ) {
        plVar7 = local_2a8;
        if ((int)local_2a8[1] - *(int *)((longlong)local_2a8 + 0x34) != (int)uStack_280) {
          local_378 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_378);
        }
        if (((TStack_2a0.CurrentBitIndex == uVar23) &&
            (TStack_2a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10))) &&
           (plVar7 == (longlong *)local_1b8)) break;
        uVar22 = *(uint *)(*plVar7 + (longlong)TStack_2a0.CurrentBitIndex * 0xc);
        if (*(int *)&(this->MHashTable).field_0x8 != *(int *)&(this->MHashTable).field_0x34) {
          puVar2 = *(undefined1 **)&(this->MHashTable).field_0x40;
          puVar19 = &(this->MHashTable).field_0x38;
          if (puVar2 != (undefined1 *)0x0) {
            puVar19 = puVar2;
          }
          iVar20 = *(int *)(puVar19 +
                           (ulonglong)(*(int *)&(this->MHashTable).field_0x48 - 1U & uVar22) * 4);
          if (iVar20 != -1) {
LAB_143e255a0:
            if (*(uint *)((longlong)iVar20 * 0x20 + *(longlong *)&this->MHashTable) != uVar22)
            goto code_r0x000143e255ac;
            pTVar10 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindChecked((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                     *)&this->MHashTable,uVar22);
            iVar20 = pTVar10->ArrayNum;
            pFVar24 = (pTVar10->AllocatorInstance).Data;
            if ((iVar20 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar10;
            }
            uVar22 = (iVar20 - local_1d4) + local_208._8_4_;
            if (uVar22 <= (uint)(local_208._8_4_ - local_1d4)) goto LAB_143e25872;
            if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar22);
            }
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_208,uVar22);
            if (uVar22 < 4) {
              uVar22 = 1;
            }
            else {
              uVar25 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
              lVar9 = 0x3f;
              if (uVar25 != 0) {
                for (; uVar25 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              local_300 = (undefined4)lVar9;
              uVar22 = 1 << ((byte)lVar9 & 0x1f);
            }
            if ((local_1c0 == 0) || ((int)local_1c0 < (int)uVar22)) {
              local_1c0 = uVar22;
              if (local_1c8.Data != (FScriptContainerElement *)0x0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_1c8,0,0,4);
              }
              if (uVar22 != 0) {
                uVar18 = uVar22;
                if (uVar22 < 2) {
                  if (local_1c8.Data != (FScriptContainerElement *)0x0) {
                    uVar18 = 0;
                    goto LAB_143e256b6;
                  }
                }
                else {
LAB_143e256b6:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_1c8,0,uVar18,4);
                }
                if (0 < (int)uVar22) {
                  uVar26 = (ulonglong)uVar22;
                  uVar25 = 0;
                  do {
                    FVar16.Data = local_1d0;
                    if (local_1c8.Data != (FScriptContainerElement *)0x0) {
                      FVar16.Data = local_1c8.Data;
                    }
                    uVar11 = uVar25 & (longlong)(int)uVar22 - 1U;
                    uVar25 = uVar25 + 1;
                    *(undefined4 *)(FVar16.Data + uVar11 * 4) = 0xffffffff;
                    uVar26 = uVar26 - 1;
                  } while (uVar26 != 0);
                }
              }
              if (local_1c0 != 0) {
                pTStack_330 = (TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10);
                uStack_334 = 1;
                local_338 = 0;
                uStack_324 = 0;
                iStack_320 = 0;
                if (local_1e0 != 0) {
                  FVar17 = (ForElementType<unsigned_int>)((longlong)local_208 + 0x10);
                  if (local_1e8 != (ForElementType<unsigned_int>)0x0) {
                    FVar17 = local_1e8;
                  }
                  uVar22 = *(uint *)FVar17;
                  iStack_320 = 0;
                  local_338 = 0;
                  while (uVar22 == 0) {
                    iStack_320 = iStack_320 + 0x20;
                    lVar9 = (longlong)local_338;
                    local_338 = local_338 + 1;
                    if ((int)(((int)(local_1e0 - 1) >> 0x1f & 0x1fU) + (local_1e0 - 1)) >> 5 <
                        local_338) goto LAB_143e257cd;
                    uVar22 = ((uint *)((longlong)FVar17 + 4))[lVar9];
                  }
                  uStack_334 = -uVar22 & uVar22;
                  uVar25 = (ulonglong)uStack_334 * 2 + 1;
                  lVar9 = 0x3f;
                  if (uVar25 != 0) {
                    for (; uVar25 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                    }
                  }
                  local_2fc = (int)lVar9;
                  uStack_324 = iStack_320 + -1 + local_2fc;
                  if ((int)uStack_324 <= (int)local_1e0) goto LAB_143e257d4;
LAB_143e257cd:
                  uStack_324 = local_1e0;
                }
LAB_143e257d4:
                local_328 = 0xffffffff;
                local_2d0 = (longlong *)local_208;
                local_2c8._padding_ = CONCAT44(uStack_334,local_338);
                local_2c8.CurrentBitIndex = uStack_324;
                local_2c8.UnvisitedBitMask = 0xffffffff;
                local_2c8._28_4_ = uStack_31c;
                local_2c8.BaseBitIndex = iStack_320;
                local_2c8.Array = pTStack_330;
                uVar22 = uStack_324;
                if ((int)uStack_324 < (int)local_1e0) {
                  do {
                    lVar9 = *local_2d0;
                    lVar12 = (longlong)(int)uVar22;
                    uVar18 = local_1c0 - 1 & *(uint *)(lVar9 + lVar12 * 0xc);
                    *(uint *)(lVar9 + 8 + lVar12 * 0xc) = uVar18;
                    FVar16.Data = local_1d0;
                    if (local_1c8.Data != (FScriptContainerElement *)0x0) {
                      FVar16.Data = local_1c8.Data;
                    }
                    uVar25 = (longlong)(int)local_1c0 - 1U & (longlong)(int)uVar18;
                    *(undefined4 *)(lVar9 + 4 + lVar12 * 0xc) =
                         *(undefined4 *)(FVar16.Data + uVar25 * 4);
                    *(uint *)(FVar16.Data + uVar25 * 4) = uVar22;
                    local_2c8.UnvisitedBitMask =
                         local_2c8.UnvisitedBitMask & ~local_2c8._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2c8);
                    uVar22 = local_2c8.CurrentBitIndex;
                  } while (local_2c8.CurrentBitIndex < (local_2c8.Array)->NumBits);
                }
              }
            }
LAB_143e25872:
            pFVar1 = pFVar24 + (longlong)iVar20 * 4;
            for (; pFVar24 != pFVar1; pFVar24 = pFVar24 + 4) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_208,
                         &local_2f8,(bool *)pFVar24);
            }
          }
        }
LAB_143e2589f:
        TStack_2a0.UnvisitedBitMask = TStack_2a0.UnvisitedBitMask & ~TStack_2a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2a0);
      }
      local_170 = 0;
      if (local_178 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_178);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1b8);
      local_374 = local_374 + 1;
      param_1 = local_318;
    } while (local_374 < local_370);
  }
  uVar23 = local_1e0;
  uStack_360 = 0;
  local_348 = 0;
  local_168.Elements._0_8_ = 0;
  local_168.Elements._8_8_ = 0;
  local_168.Elements._32_8_ = 0;
  local_168.Elements._40_4_ = 0;
  local_168.Elements._44_4_ = 0x80;
  local_168.Elements._48_4_ = 0xffffffff;
  local_168.Elements._52_4_ = 0;
  local_168.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_168.HashSize = 0;
  uStack_34c = local_348;
  uStack_35c = 1;
  if (local_1e0 != 0) {
    FVar17 = (ForElementType<unsigned_int>)((longlong)local_208 + 0x10);
    if (local_1e8 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_1e8;
    }
    uVar22 = *(uint *)FVar17;
    local_348 = 0;
    uStack_360 = 0;
    while (uVar22 == 0) {
      lVar9 = (longlong)(int)uStack_360;
      local_348 = local_348 + 0x20;
      uStack_360 = uStack_360 + 1;
      uStack_34c = local_1e0;
      if ((int)(((int)(local_1e0 - 1) >> 0x1f & 0x1fU) + (local_1e0 - 1)) >> 5 < (int)uStack_360)
      goto LAB_143e259c1;
      uVar22 = ((uint *)((longlong)FVar17 + 4))[lVar9];
    }
    uStack_35c = -uVar22 & uVar22;
    uVar25 = (ulonglong)uStack_35c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_2f4 = (int)lVar9;
    uStack_34c = (local_348 - 1) + local_2f4;
    if ((int)local_1e0 < (int)uStack_34c) {
      uStack_34c = local_1e0;
    }
  }
LAB_143e259c1:
  local_368 = (longlong *)local_208;
  uStack_344 = local_20c;
  local_358 = (TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10);
  uVar22 = local_1e0 & 0xffffffe0;
  iStack_340 = local_208._8_4_ - local_1d4;
  uStack_350 = 0xffffffff;
  TStack_270.CurrentBitIndex = uStack_34c;
  TStack_270.UnvisitedBitMask = 0xffffffff;
  TStack_270._padding_ = CONCAT44(uStack_35c,uStack_360);
  iVar20 = (int)local_1e0 >> 5;
  TStack_270._28_4_ = local_20c;
  TStack_270.BaseBitIndex = local_348;
  uStack_250 = CONCAT44(uStack_33c,iStack_340);
  bVar14 = (byte)local_1e0;
  local_278 = local_368;
  TStack_270.Array = local_358;
  if (((int)local_1e0 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar10;
  }
  pTVar6 = local_310;
  if (uVar23 != local_1e0) {
    FVar17 = (ForElementType<unsigned_int>)((longlong)local_208 + 0x10);
    if (local_1e8 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_1e8;
    }
    uVar23 = -1 << (bVar14 & 0x1f) & *(uint *)((longlong)FVar17 + (longlong)iVar20 * 4);
    while (uVar23 == 0) {
      lVar9 = (longlong)iVar20;
      uVar22 = uVar22 + 0x20;
      iVar20 = iVar20 + 1;
      uVar23 = local_1e0;
      if ((int)(((int)(local_1e0 - 1) >> 0x1f & 0x1fU) + (local_1e0 - 1)) >> 5 < iVar20)
      goto LAB_143e25ae5;
      uVar23 = ((uint *)((longlong)FVar17 + 4))[lVar9];
    }
    uVar25 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_2f0 = (int)lVar9;
    uVar23 = local_2f0 + -1 + uVar22;
    if ((int)local_1e0 < (int)uVar23) {
      uVar23 = local_1e0;
    }
  }
LAB_143e25ae5:
  while( true ) {
    plVar7 = local_278;
    if ((int)local_278[1] - *(int *)((longlong)local_278 + 0x34) != (int)uStack_250) {
      local_377[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_377);
    }
    lVar9 = (longlong)TStack_270.CurrentBitIndex;
    if (((TStack_270.CurrentBitIndex == uVar23) &&
        (TStack_270.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10))) &&
       (plVar7 == (longlong *)local_208)) {
      if (0 < (int)(local_168.Elements._8_4_ - local_168.Elements._52_4_)) {
        pTVar13 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Intersect
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_208,
                             &local_c8,&local_168);
        pTVar13 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Difference
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_208,
                             &local_118,pTVar13);
        if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_208 != pTVar13) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
          Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_208,pTVar13);
        }
        local_118.HashSize = 0;
        if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_118.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_118.Elements);
        local_c8.HashSize = 0;
        if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_c8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_c8.Elements);
      }
      QueryPerformanceCounter(&local_2e0);
      if (4 < (byte)LogChaosSpatialHash._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TSpatialHash<double>::GetClosestPoints(Chaos::TVector<double,3>_const&___ptr64,double)___ptr64'
                    ::__l22::LOG_Static,(FLogCategoryBase *)&LogChaosSpatialHash);
      }
      pTVar10 = local_2d8;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_208,local_2d8);
      local_168.HashSize = 0;
      if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_168.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_168.Elements);
      local_1c0 = 0;
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_208);
      return pTVar10;
    }
    iVar20 = (pTVar6->MParticles).ArrayNum;
    lVar12 = *plVar7;
    uVar22 = *(uint *)(lVar12 + lVar9 * 0xc);
    lVar21 = (longlong)(int)uVar22;
    uVar18 = 0;
    if ((int)uVar22 < iVar20) {
      uVar18 = ~uVar22 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (local_388 = lVar21, local_380 = (longlong)iVar20,
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    pFVar24 = (pTVar6->MParticles).AllocatorInstance.Data;
    dVar4 = *(double *)&param_1->field_0x8 - *(double *)(pFVar24 + lVar21 * 0x18 + 8);
    dVar5 = *(double *)&param_1->field_0x10 - *(double *)(pFVar24 + lVar21 * 0x18 + 0x10);
    if (param_2 * param_2 <
        (*(double *)param_1 - *(double *)(pFVar24 + lVar21 * 0x18)) *
        (*(double *)param_1 - *(double *)(pFVar24 + lVar21 * 0x18)) + dVar4 * dVar4 + dVar5 * dVar5)
    {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_168,&local_2ec,(bool *)(lVar12 + lVar9 * 0xc));
    }
    TStack_270.UnvisitedBitMask = TStack_270.UnvisitedBitMask & ~TStack_270._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_270);
  }
  pcVar3 = (code *)swi(3);
  pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
  return pTVar10;
code_r0x000143e255ac:
  iVar20 = *(int *)((longlong)iVar20 * 0x20 + 0x18 + *(longlong *)&this->MHashTable);
  if (iVar20 == -1) goto LAB_143e2589f;
  goto LAB_143e255a0;
}

// GetClosestPoints @ 143e25d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TSpatialHash<double>::GetClosestPoints
          (TSpatialHash<double> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,TVector<double,3> *param_1
          ,double param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  TVector<double,3> *pTVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar15;
  byte bVar16;
  ForAnyElementType FVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auStack_4a8 [32];
  longlong local_488;
  longlong local_480;
  undefined1 local_478;
  undefined1 local_477;
  undefined1 local_476;
  FIdentityFunctor local_475;
  int local_474;
  longlong *local_470;
  undefined8 uStack_468;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  int local_448;
  undefined4 uStack_444;
  int local_440;
  TVector<double,3> *local_438;
  int local_430;
  uint uStack_42c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_428;
  undefined4 local_420;
  uint uStack_41c;
  int iStack_418;
  undefined4 uStack_414;
  TBitArray<FDefaultBitArrayAllocator> *local_410;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_408;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3c8;
  int local_3a8;
  int local_3a4;
  TPairInitializer<int_const_&,double_&&> local_3a0;
  undefined8 local_390;
  double local_388;
  FIdentityFunctor *local_380;
  FIdentityFunctor **local_378;
  TArray<int,TSizedDefaultAllocator<32>_> *local_370;
  LARGE_INTEGER local_368;
  undefined4 local_360;
  int local_35c;
  int local_358;
  int local_354;
  longlong *local_350;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_348;
  int local_328 [2];
  longlong *local_320;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_318;
  undefined8 uStack_2f8;
  longlong *local_2f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e8;
  undefined8 uStack_2c8;
  longlong *local_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b8;
  undefined8 uStack_298;
  longlong local_290;
  double *local_288;
  undefined4 local_264;
  undefined1 local_258 [32];
  ForElementType<unsigned_int> local_238;
  uint local_230;
  int local_22c;
  int local_228;
  int local_224;
  FScriptContainerElement local_220 [8];
  ForAnyElementType local_218;
  uint local_210;
  undefined1 local_208 [40];
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  ForElementType<FSetElementId> local_1c8;
  int local_1c0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_1b8;
  undefined1 local_168 [40];
  uint local_140;
  int local_134;
  ForElementType<FSetElementId> local_128;
  int local_120;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_118;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_4a8;
  local_438 = param_1;
  local_370 = __return_storage_ptr__;
  QueryPerformanceCounter((LARGE_INTEGER *)&local_3a0.Value);
  local_22c = 0x80;
  local_258._0_8_ = (FScriptContainerElement *)0x0;
  local_258._8_8_ = 0;
  local_238 = (ForElementType<unsigned_int>)0x0;
  local_230 = 0;
  local_228 = -1;
  local_224 = 0;
  local_218.Data = (FScriptContainerElement *)0x0;
  local_210 = 0;
  local_440 = ComputeMaxN(this,param_1,param_2);
  local_390 = 1;
  local_474 = 0;
  if (0 < local_440) {
    do {
      GetNRing(this,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_168,param_1,
               local_474);
      local_3e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10);
      local_3e8._padding_._0_4_ = 0;
      local_3e8._padding_._4_4_ = 1;
      local_3e8.UnvisitedBitMask = 0xffffffff;
      local_3e8.CurrentBitIndex = 0;
      local_3e8.BaseBitIndex = 0;
      if (local_140 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3e8);
      }
      uVar21 = local_140;
      uStack_468 = CONCAT44(local_3e8._padding_._4_4_,(undefined4)local_3e8._padding_);
      local_470 = (longlong *)local_168;
      uStack_458._4_4_ = local_3e8.CurrentBitIndex;
      uStack_458._0_4_ = local_3e8.UnvisitedBitMask;
      uStack_450._4_4_ = local_3e8._28_4_;
      uStack_450._0_4_ = local_3e8.BaseBitIndex;
      local_408.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10);
      bVar16 = (byte)local_140 & 0x1f;
      local_448 = local_168._8_4_ - local_134;
      local_408._padding_._0_4_ = (int)local_140 >> 5;
      local_408._padding_._4_4_ = 1 << bVar16;
      local_408.UnvisitedBitMask = -1 << bVar16;
      pTStack_460 = local_3e8.Array;
      local_408.BaseBitIndex = local_140 & 0xffffffe0;
      local_408.CurrentBitIndex = local_140;
      uStack_2f8 = CONCAT44(uStack_444,local_448);
      TStack_318.Array = local_3e8.Array;
      local_320 = local_470;
      TStack_318._padding_ = uStack_468;
      TStack_318._16_8_ = uStack_458;
      TStack_318._24_8_ = uStack_450;
      if (((int)local_140 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar11;
      }
      if (uVar21 != local_140) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_408);
      }
      iVar22 = local_408.CurrentBitIndex;
      uStack_468 = CONCAT44(local_408._padding_._4_4_,(int)local_408._padding_);
      uStack_458 = CONCAT44(local_408.CurrentBitIndex,local_408.UnvisitedBitMask);
      uStack_450 = CONCAT44(local_408._28_4_,local_408.BaseBitIndex);
      pTStack_460 = local_408.Array;
      local_410 = local_408.Array;
      while( true ) {
        plVar7 = local_320;
        if ((int)local_320[1] - *(int *)((longlong)local_320 + 0x34) != (int)uStack_2f8) {
          local_478 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_478);
        }
        if (((TStack_318.CurrentBitIndex == iVar22) && (TStack_318.Array == local_410)) &&
           (plVar7 == (longlong *)local_168)) break;
        uVar21 = *(uint *)(*plVar7 + (longlong)TStack_318.CurrentBitIndex * 0xc);
        if (*(int *)&(this->MHashTable).field_0x8 != *(int *)&(this->MHashTable).field_0x34) {
          puVar2 = *(undefined1 **)&(this->MHashTable).field_0x40;
          puVar20 = &(this->MHashTable).field_0x38;
          if (puVar2 != (undefined1 *)0x0) {
            puVar20 = puVar2;
          }
          iVar10 = *(int *)(puVar20 +
                           (ulonglong)(*(int *)&(this->MHashTable).field_0x48 - 1U & uVar21) * 4);
          if (iVar10 != -1) {
LAB_143e26040:
            if (*(uint *)((longlong)iVar10 * 0x20 + *(longlong *)&this->MHashTable) != uVar21)
            goto code_r0x000143e2604c;
            pTVar11 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindChecked((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                     *)&this->MHashTable,uVar21);
            iVar10 = pTVar11->ArrayNum;
            pFVar26 = (pTVar11->AllocatorInstance).Data;
            if ((iVar10 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar9)) {
              pcVar3 = (code *)swi(3);
              pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar11;
            }
            uVar21 = iVar10 + (local_258._8_4_ - local_224);
            if (uVar21 <= (uint)(local_258._8_4_ - local_224)) goto LAB_143e26302;
            if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
            }
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_258,uVar21);
            uVar19 = 1;
            if (3 < uVar21) {
              uVar27 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
              lVar13 = 0x3f;
              if (uVar27 != 0) {
                for (; uVar27 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              local_360 = (undefined4)lVar13;
              uVar19 = 1 << ((byte)lVar13 & 0x1f);
            }
            if ((local_210 == 0) || ((int)local_210 < (int)uVar19)) {
              local_210 = uVar19;
              if (local_218.Data != (FScriptContainerElement *)0x0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_218,0,0,4);
              }
              if (uVar19 != 0) {
                uVar21 = uVar19;
                if (uVar19 < 2) {
                  if (local_218.Data != (FScriptContainerElement *)0x0) {
                    uVar21 = 0;
                    goto LAB_143e2613f;
                  }
                }
                else {
LAB_143e2613f:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_218,0,uVar21,4);
                }
                if (0 < (int)uVar19) {
                  uVar28 = (ulonglong)uVar19;
                  uVar27 = 0;
                  do {
                    FVar17.Data = local_220;
                    if (local_218.Data != (FScriptContainerElement *)0x0) {
                      FVar17.Data = local_218.Data;
                    }
                    uVar12 = uVar27 & (longlong)(int)uVar19 - 1U;
                    uVar27 = uVar27 + 1;
                    *(undefined4 *)(FVar17.Data + uVar12 * 4) = 0xffffffff;
                    uVar28 = uVar28 - 1;
                  } while (uVar28 != 0);
                }
              }
              if (local_210 != 0) {
                pTStack_428 = (TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10);
                uStack_42c = 1;
                local_430 = 0;
                uStack_41c = 0;
                iStack_418 = 0;
                if (local_230 != 0) {
                  FVar18 = (ForElementType<unsigned_int>)((longlong)local_258 + 0x10);
                  if (local_238 != (ForElementType<unsigned_int>)0x0) {
                    FVar18 = local_238;
                  }
                  uVar21 = *(uint *)FVar18;
                  iStack_418 = 0;
                  local_430 = 0;
                  while (uVar21 == 0) {
                    iStack_418 = iStack_418 + 0x20;
                    lVar13 = (longlong)local_430;
                    local_430 = local_430 + 1;
                    if ((int)(((int)(local_230 - 1) >> 0x1f & 0x1fU) + (local_230 - 1)) >> 5 <
                        local_430) goto LAB_143e2625d;
                    uVar21 = ((uint *)((longlong)FVar18 + 4))[lVar13];
                  }
                  uStack_42c = -uVar21 & uVar21;
                  uVar27 = (ulonglong)uStack_42c * 2 + 1;
                  lVar13 = 0x3f;
                  if (uVar27 != 0) {
                    for (; uVar27 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                    }
                  }
                  local_35c = (int)lVar13;
                  uStack_41c = local_35c + -1 + iStack_418;
                  if ((int)uStack_41c <= (int)local_230) goto LAB_143e26264;
LAB_143e2625d:
                  uStack_41c = local_230;
                }
LAB_143e26264:
                local_420 = 0xffffffff;
                local_350 = (longlong *)local_258;
                local_348._padding_ = CONCAT44(uStack_42c,local_430);
                local_348.CurrentBitIndex = uStack_41c;
                local_348.UnvisitedBitMask = 0xffffffff;
                local_348._28_4_ = uStack_414;
                local_348.BaseBitIndex = iStack_418;
                local_348.Array = pTStack_428;
                uVar21 = uStack_41c;
                if ((int)uStack_41c < (int)local_230) {
                  do {
                    lVar13 = *local_350;
                    lVar14 = (longlong)(int)uVar21;
                    uVar19 = local_210 - 1 & *(uint *)(lVar13 + lVar14 * 0xc);
                    *(uint *)(lVar13 + 8 + lVar14 * 0xc) = uVar19;
                    FVar17.Data = local_220;
                    if (local_218.Data != (FScriptContainerElement *)0x0) {
                      FVar17.Data = local_218.Data;
                    }
                    uVar27 = (longlong)(int)local_210 - 1U & (longlong)(int)uVar19;
                    *(undefined4 *)(lVar13 + 4 + lVar14 * 0xc) =
                         *(undefined4 *)(FVar17.Data + uVar27 * 4);
                    *(uint *)(FVar17.Data + uVar27 * 4) = uVar21;
                    local_348.UnvisitedBitMask =
                         local_348.UnvisitedBitMask & ~local_348._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_348);
                    uVar21 = local_348.CurrentBitIndex;
                  } while (local_348.CurrentBitIndex < (local_348.Array)->NumBits);
                }
              }
            }
LAB_143e26302:
            pFVar1 = pFVar26 + (longlong)iVar10 * 4;
            for (; pFVar26 != pFVar1; pFVar26 = pFVar26 + 4) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_258,
                         &local_358,(bool *)pFVar26);
            }
          }
        }
LAB_143e2632f:
        TStack_318.UnvisitedBitMask = TStack_318.UnvisitedBitMask & ~TStack_318._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_318);
      }
      local_120 = 0;
      if (local_128 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_128);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_168);
      local_474 = local_474 + 1;
      param_1 = local_438;
    } while (local_474 < local_440);
  }
  local_3c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10);
  local_1b8.Elements._0_8_ = 0;
  local_1b8.Elements._8_8_ = 0;
  local_1b8.Elements._32_8_ = 0;
  local_1b8.Elements._40_4_ = 0;
  local_1b8.Elements._44_4_ = 0x80;
  local_1b8.Elements._48_4_ = 0xffffffff;
  local_1b8.Elements._52_4_ = 0;
  local_1b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1b8.HashSize = 0;
  local_3c8._padding_._0_4_ = 0;
  local_3c8._padding_._4_4_ = 1;
  local_3c8.UnvisitedBitMask = 0xffffffff;
  local_3c8.CurrentBitIndex = 0;
  local_3c8.BaseBitIndex = 0;
  if (local_230 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3c8);
  }
  uVar19 = local_230;
  uStack_468 = CONCAT44(local_3c8._padding_._4_4_,(undefined4)local_3c8._padding_);
  local_470 = (longlong *)local_258;
  uStack_458._4_4_ = local_3c8.CurrentBitIndex;
  uStack_458._0_4_ = local_3c8.UnvisitedBitMask;
  uStack_450._4_4_ = local_3c8._28_4_;
  uStack_450._0_4_ = local_3c8.BaseBitIndex;
  local_448 = local_258._8_4_ - local_224;
  pTStack_460 = local_3c8.Array;
  uVar21 = local_230 & 0xffffffe0;
  iVar22 = (int)local_230 >> 5;
  bVar16 = (byte)local_230;
  uStack_2c8 = CONCAT44(uStack_444,local_448);
  TStack_2e8.Array = local_3c8.Array;
  local_2f0 = local_470;
  TStack_2e8._padding_ = uStack_468;
  TStack_2e8._16_8_ = uStack_458;
  TStack_2e8._24_8_ = uStack_450;
  if (((int)local_230 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar11;
  }
  pTVar6 = local_438;
  if (uVar19 != local_230) {
    FVar18 = (ForElementType<unsigned_int>)((longlong)local_258 + 0x10);
    if (local_238 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = local_238;
    }
    uVar19 = -1 << (bVar16 & 0x1f) & *(uint *)((longlong)FVar18 + (longlong)iVar22 * 4);
    while (uVar19 == 0) {
      lVar13 = (longlong)iVar22;
      uVar21 = uVar21 + 0x20;
      iVar22 = iVar22 + 1;
      uVar19 = local_230;
      if ((int)(((int)(local_230 - 1) >> 0x1f & 0x1fU) + (local_230 - 1)) >> 5 < iVar22)
      goto LAB_143e2651f;
      uVar19 = ((uint *)((longlong)FVar18 + 4))[lVar13];
    }
    uVar27 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_354 = (int)lVar13;
    uVar19 = local_354 + -1 + uVar21;
    if ((int)local_230 < (int)uVar19) {
      uVar19 = local_230;
    }
  }
LAB_143e2651f:
  while( true ) {
    plVar7 = local_2f0;
    if ((int)local_2f0[1] - *(int *)((longlong)local_2f0 + 0x34) != (int)uStack_2c8) {
      local_477 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_477);
    }
    lVar13 = (longlong)TStack_2e8.CurrentBitIndex;
    if (((TStack_2e8.CurrentBitIndex == uVar19) &&
        (TStack_2e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10))) &&
       (plVar7 == (longlong *)local_258)) break;
    iVar22 = (this->MParticles).ArrayNum;
    lVar14 = *plVar7;
    uVar21 = *(uint *)(lVar14 + lVar13 * 0xc);
    lVar23 = (longlong)(int)uVar21;
    uVar24 = 0;
    if ((int)uVar21 < iVar22) {
      uVar24 = ~uVar21 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (local_488 = lVar23, local_480 = (longlong)iVar22,
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar11;
    }
    pFVar26 = (this->MParticles).AllocatorInstance.Data;
    dVar4 = *(double *)&pTVar6->field_0x8 - *(double *)(pFVar26 + lVar23 * 0x18 + 8);
    dVar5 = *(double *)&pTVar6->field_0x10 - *(double *)(pFVar26 + lVar23 * 0x18 + 0x10);
    if (param_2 * param_2 <
        (*(double *)pTVar6 - *(double *)(pFVar26 + lVar23 * 0x18)) *
        (*(double *)pTVar6 - *(double *)(pFVar26 + lVar23 * 0x18)) + dVar4 * dVar4 + dVar5 * dVar5)
    {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1b8,local_328,(bool *)(lVar14 + lVar13 * 0xc));
    }
    TStack_2e8.UnvisitedBitMask = TStack_2e8.UnvisitedBitMask & ~TStack_2e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e8);
  }
  uVar21 = (uint)local_390;
  if (0 < (int)(local_1b8.Elements._8_4_ - local_1b8.Elements._52_4_)) {
    pTVar15 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Intersect
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_258,
                         &local_c8,&local_1b8);
    pTVar15 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Difference
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_258,
                         &local_118,pTVar15);
    if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_258 != pTVar15) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
      Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_258,pTVar15);
    }
    local_118.HashSize = 0;
    if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_118.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_118.Elements);
    local_c8.HashSize = 0;
    if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_c8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_c8.Elements);
  }
  uVar24 = local_230;
  uVar19 = 0;
  uStack_450._0_4_ = 0;
  local_208._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0;
  local_208._8_8_ = 0;
  local_208._32_8_ = (ForElementType<unsigned_int>)0x0;
  local_1e0 = 0;
  local_1dc = 0x80;
  local_1d8 = -1;
  local_1d4 = 0;
  local_1c8 = (ForElementType<FSetElementId>)0x0;
  local_1c0 = 0;
  uStack_458._4_4_ = (uint)uStack_450;
  if (local_230 != 0) {
    FVar18 = (ForElementType<unsigned_int>)((longlong)local_258 + 0x10);
    if (local_238 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = local_238;
    }
    uVar25 = *(uint *)FVar18;
    uStack_450._0_4_ = 0;
    uVar19 = 0;
    while (uVar25 == 0) {
      lVar13 = (longlong)(int)uVar19;
      uStack_450._0_4_ = (uint)uStack_450 + 0x20;
      uVar19 = uVar19 + 1;
      uStack_458._4_4_ = local_230;
      if ((int)(((int)(local_230 - 1) >> 0x1f & 0x1fU) + (local_230 - 1)) >> 5 < (int)uVar19)
      goto LAB_143e267d1;
      uVar25 = ((uint *)((longlong)FVar18 + 4))[lVar13];
    }
    uVar21 = -uVar25 & uVar25;
    uVar27 = (ulonglong)uVar21 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_3a8 = (int)lVar13;
    uStack_458._4_4_ = ((uint)uStack_450 - 1) + local_3a8;
    if ((int)local_230 < (int)uStack_458._4_4_) {
      uStack_458._4_4_ = local_230;
    }
  }
LAB_143e267d1:
  local_470 = (longlong *)local_258;
  pTStack_460 = (TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10);
  uVar25 = local_230 & 0xffffffe0;
  local_448 = local_258._8_4_ - local_224;
  uStack_458._0_4_ = 0xffffffff;
  uStack_468 = CONCAT44(uVar21,uVar19);
  uStack_450._4_4_ = local_264;
  TStack_2b8._padding_ = uStack_468;
  iVar22 = (int)local_230 >> 5;
  uStack_298 = CONCAT44(uStack_444,local_448);
  bVar16 = (byte)local_230;
  TStack_2b8.UnvisitedBitMask = 0xffffffff;
  TStack_2b8.CurrentBitIndex = uStack_458._4_4_;
  TStack_2b8.BaseBitIndex = (uint)uStack_450;
  TStack_2b8._28_4_ = local_264;
  local_2c0 = local_470;
  TStack_2b8.Array = pTStack_460;
  if (((int)local_230 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar11;
  }
  if (uVar24 != local_230) {
    FVar18 = (ForElementType<unsigned_int>)((longlong)local_258 + 0x10);
    if (local_238 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = local_238;
    }
    uVar21 = -1 << (bVar16 & 0x1f) & *(uint *)((longlong)FVar18 + (longlong)iVar22 * 4);
    while (uVar21 == 0) {
      lVar13 = (longlong)iVar22;
      uVar25 = uVar25 + 0x20;
      iVar22 = iVar22 + 1;
      uVar24 = local_230;
      if ((int)(((int)(local_230 - 1) >> 0x1f & 0x1fU) + (local_230 - 1)) >> 5 < iVar22)
      goto LAB_143e26910;
      uVar21 = ((uint *)((longlong)FVar18 + 4))[lVar13];
    }
    uVar27 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_3a4 = (int)lVar13;
    uVar24 = (uVar25 - 1) + local_3a4;
    if ((int)local_230 < (int)uVar24) {
      uVar24 = local_230;
    }
  }
LAB_143e26910:
  while( true ) {
    plVar7 = local_2c0;
    if ((int)local_2c0[1] - *(int *)((longlong)local_2c0 + 0x34) != (int)uStack_298) {
      local_476 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_476);
    }
    lVar13 = (longlong)TStack_2b8.CurrentBitIndex;
    if (((TStack_2b8.CurrentBitIndex == uVar24) &&
        (TStack_2b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10))) &&
       (plVar7 == (longlong *)local_258)) break;
    iVar22 = (this->MParticles).ArrayNum;
    lVar14 = *plVar7;
    uVar21 = *(uint *)(lVar14 + lVar13 * 0xc);
    lVar23 = (longlong)(int)uVar21;
    uVar19 = 0;
    if ((int)uVar21 < iVar22) {
      uVar19 = ~uVar21 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (local_488 = lVar23, local_480 = (longlong)iVar22,
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar11;
    }
    pFVar26 = (this->MParticles).AllocatorInstance.Data;
    dVar4 = *(double *)&local_438->field_0x8 - *(double *)(pFVar26 + lVar23 * 0x18 + 8);
    dVar5 = *(double *)&local_438->field_0x10 - *(double *)(pFVar26 + lVar23 * 0x18 + 0x10);
    local_288 = &local_388;
    local_388 = (*(double *)local_438 - *(double *)(pFVar26 + lVar23 * 0x18)) *
                (*(double *)local_438 - *(double *)(pFVar26 + lVar23 * 0x18)) + dVar4 * dVar4 +
                dVar5 * dVar5;
    local_290 = lVar14 + lVar13 * 0xc;
    TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,double_&&>_>
              ((TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>
                *)local_208,&local_3a0,(bool *)&local_290);
    TStack_2b8.UnvisitedBitMask = TStack_2b8.UnvisitedBitMask & ~TStack_2b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b8);
  }
  local_380 = &local_475;
  local_378 = &local_380;
  if (0 < local_208._8_4_ - local_1d4) {
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_208);
    uVar8 = local_208._0_8_;
    iVar22 = local_208._8_4_ - local_1d4;
    if ((iVar22 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar11;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_>::FValueComparisonClass<_Chaos::TSpatialHash<double>::GetClosestPoints_::__l2::<lambda_1>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)uVar8,iVar22,local_475,
               (FElementCompareClass<TSortableMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_>::FValueComparisonClass<_public:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TSpatialHash<double>::GetClosestPoints(Chaos::TVector<double,3>_const_&,double,int)_::_2_::<lambda_1>_>_>
                *)&local_378);
  }
  TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>::Rehash
            ((TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>
              *)local_208);
  pTVar11 = local_370;
  (local_370->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_370->ArrayNum = 0;
  local_370->ArrayMax = 0;
  TMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_>::
  GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_> *
             )local_208,local_370);
  if (param_3 < pTVar11->ArrayNum) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(pTVar11,param_3,Default);
  }
  QueryPerformanceCounter(&local_368);
  if (4 < (byte)LogChaosSpatialHash._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_class_TArray<int,TSizedDefaultAllocator<32>_>___cdecl_Chaos::TSpatialHash<double>::GetClosestPoints(Chaos::TVector<double,3>_const&___ptr64,double,int)___ptr64'
                ::__l29::LOG_Static,(FLogCategoryBase *)&LogChaosSpatialHash);
  }
  local_1c0 = 0;
  if (local_1c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_208);
  local_1b8.HashSize = 0;
  if (local_1b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1b8.Elements);
  local_210 = 0;
  if (local_218.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_258);
  return pTVar11;
code_r0x000143e2604c:
  iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *(longlong *)&this->MHashTable);
  if (iVar10 == -1) goto LAB_143e2632f;
  goto LAB_143e26040;
}

// GetNRing @ 143e2a0d0

/* WARNING: Type propagation algorithm not settling */

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
Chaos::TSpatialHash<double>::GetNRing
          (TSpatialHash<double> *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          TVector<double,3> *param_1,int param_2)

{
  undefined1 *this_00;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  ForElementType<FSetElementId> FVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 *puVar15;
  ForElementType<FSetElementId> FVar16;
  TSparseSetElement<int> *pTVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  TSparseSetElement<int> *pTVar23;
  uint *puVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  double dVar28;
  double dVar29;
  FSparseArrayAllocationInfo local_98;
  undefined4 local_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  int local_78;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_68;
  
  dVar29 = __real_3ff0000000000000;
  this_00 = &(__return_storage_ptr__->Elements).field_0x10;
  pTVar23 = (TSparseSetElement<int> *)0x0;
  puVar15 = &(__return_storage_ptr__->Elements).field_0x8;
  *(undefined4 *)puVar15 = 0;
  puVar13 = &(__return_storage_ptr__->Elements).field_0xc;
  *(undefined4 *)puVar13 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  dVar29 = dVar29 / this->MCellSize;
  dVar28 = this->MCellSize * __real_3fe0000000000000;
  iVar25 = (int)(((*(double *)param_1 - *(double *)&(this->MBoundingBox).MMin) + dVar28) * dVar29);
  iVar19 = (int)(((*(double *)&param_1->field_0x8 - *(double *)&(this->MBoundingBox).MMin.field_0x8)
                 + dVar28) * dVar29);
  iVar20 = (int)(((*(double *)&param_1->field_0x10 -
                  *(double *)&(this->MBoundingBox).MMin.field_0x10) + dVar28) * dVar29);
  if (param_2 != 0) {
    iVar2 = -param_2;
    iVar26 = iVar2;
    iVar6 = iVar2;
    iVar11 = iVar2;
    if (iVar2 != param_2 && SBORROW4(iVar2,param_2) == param_2 * -2 < 0) {
      return __return_storage_ptr__;
    }
    do {
      if ((((((iVar6 == param_2) || (iVar6 == iVar2)) || (iVar11 == param_2)) ||
           ((iVar11 == iVar2 || (iVar26 == param_2)))) || (iVar26 == iVar2)) &&
         (((-1 < iVar6 + iVar25 && (local_78 = this->MNumberOfCellsX, iVar6 + iVar25 < local_78)) &&
          ((-1 < iVar11 + iVar19 &&
           (((iVar27 = this->MNumberOfCellsY, iVar11 + iVar19 < iVar27 && (-1 < iVar20 + iVar26)) &&
            (iVar20 + iVar26 < this->MNumberOfCellsZ)))))))) {
        iVar3 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        if (iVar3 == 0) {
          iVar4 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,1,(ForAnyElementType *)__return_storage_ptr__,
                             (int *)&(__return_storage_ptr__->Elements).field_0x8,
                             (int *)&(__return_storage_ptr__->Elements).field_0xc);
          iVar3 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
          if ((iVar3 == 0) ||
             ((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5 !=
              (int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5)) {
            iVar5 = *(int *)&(__return_storage_ptr__->Elements).field_0x2c;
            if (iVar5 < iVar3 + 1) {
              uVar21 = iVar5 + 0x1fU >> 5;
              uVar14 = iVar3 + 0x20U >> 5;
              if (uVar14 < 5) {
                iVar5 = 4;
              }
              else {
                uVar22 = (ulonglong)uVar14;
                if (uVar21 < 5) {
                  uVar21 = 0;
                }
                if (uVar21 == 0) {
                  uVar8 = 4;
                  if (4 < uVar22) {
                    uVar8 = uVar22;
                  }
                }
                else {
                  uVar8 = ((ulonglong)uVar14 * 3 >> 3) + 0x10 + uVar22;
                }
                uVar7 = FMemory::QuantizeSize(uVar8 * 4,0);
                iVar5 = (int)(uVar7 >> 2);
                if (iVar5 < (int)uVar14) {
                  iVar5 = 0x7fffffff;
                }
              }
              *(int *)&(__return_storage_ptr__->Elements).field_0x2c = iVar5 << 5;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                         *(int *)&(__return_storage_ptr__->Elements).field_0x28);
            }
            iVar5 = *(int *)&(__return_storage_ptr__->Elements).field_0x28 + 1;
            *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar5;
            uVar14 = iVar5 >> 0x1f & 0x1f;
            uVar21 = iVar5 + uVar14;
            iVar5 = (uVar21 & 0x1f) - uVar14;
            if (iVar5 != 0) {
              puVar15 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
              puVar13 = this_00;
              if (puVar15 != (undefined1 *)0x0) {
                puVar13 = puVar15;
              }
              *(uint *)(puVar13 + (longlong)((int)uVar21 >> 5) * 4) =
                   *(uint *)(puVar13 + (longlong)((int)uVar21 >> 5) * 4) &
                   0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
            }
          }
          else {
            *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar3 + 1;
          }
          puVar15 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
          puVar13 = this_00;
          if (puVar15 != (undefined1 *)0x0) {
            puVar13 = puVar15;
          }
          bVar10 = (byte)iVar3 & 0x1f;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0x1f;
            bVar10 = bVar10 - 0x20;
          }
          *(uint *)(puVar13 + (longlong)(iVar3 >> 5) * 4) =
               *(uint *)(puVar13 + (longlong)(iVar3 >> 5) * 4) & ~(1 << (bVar10 & 0x1f));
        }
        else {
          iVar4 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
          iVar3 = iVar3 + -1;
          lVar1 = *(longlong *)&__return_storage_ptr__->Elements;
          iVar5 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0xc);
          *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar5;
          *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar3;
          if (iVar3 != 0) {
            *(undefined4 *)(lVar1 + (longlong)iVar5 * 0xc) = 0xffffffff;
          }
        }
        iVar3 = local_78;
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)__return_storage_ptr__,&local_98,iVar4);
        if (local_98.Pointer != (TSparseSetElement<int> *)0x0) {
          *(undefined4 *)((longlong)local_98.Pointer + 4) = 0xffffffff;
          *(int *)local_98.Pointer =
               ((iVar20 + iVar26) * iVar27 + iVar11 + iVar19) * iVar3 + iVar6 + iVar25;
        }
        iVar27 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
        iVar3 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        uVar21 = *(uint *)local_98.Pointer;
        if ((iVar27 - iVar3 != 1) && (iVar27 != iVar3)) {
          FVar16 = (__return_storage_ptr__->Hash).SecondaryData;
          FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
          if (FVar16 != (ForElementType<FSetElementId>)0x0) {
            FVar12 = FVar16;
          }
          iVar27 = *(int *)((longlong)FVar12 +
                           (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar21) * 4);
          if (iVar27 != -1) {
            lVar1 = *(longlong *)&__return_storage_ptr__->Elements;
            do {
              if (*(uint *)(lVar1 + (longlong)iVar27 * 0xc) == uVar21) {
                if (iVar27 != -1) {
                  *(uint *)(lVar1 + (longlong)iVar27 * 0xc) = uVar21;
                  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)__return_storage_ptr__,local_98.Index,1);
                  goto LAB_143e2a8e6;
                }
                break;
              }
              iVar27 = *(int *)(lVar1 + 4 + (longlong)iVar27 * 0xc);
            } while (iVar27 != -1);
          }
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RehashOrLink
                  (__return_storage_ptr__,uVar21,local_98.Pointer,local_98.Index);
      }
LAB_143e2a8e6:
      iVar26 = iVar26 + 1;
      if (((param_2 < iVar26) && (iVar11 = iVar11 + 1, iVar26 = iVar2, param_2 < iVar11)) &&
         (iVar6 = iVar6 + 1, iVar11 = iVar2, param_2 < iVar6)) {
        return __return_storage_ptr__;
      }
    } while( true );
  }
  iVar26 = this->MNumberOfCellsY;
  iVar6 = this->MNumberOfCellsX;
  iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar15,
                     (int *)puVar13);
  iVar11 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
  iVar27 = (int)((iVar11 >> 0x1f & 0x1fU) + iVar11) >> 5;
  if ((iVar11 == 0) || (iVar27 != (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5)) {
    iVar3 = *(int *)&(__return_storage_ptr__->Elements).field_0x2c;
    if (iVar3 < iVar11 + 1) {
      uVar21 = iVar3 + 0x1fU >> 5;
      uVar14 = iVar11 + 0x20U >> 5;
      if (uVar14 < 5) {
        iVar3 = 4;
      }
      else {
        uVar22 = (ulonglong)uVar14;
        if (uVar21 < 5) {
          uVar21 = 0;
        }
        if (uVar21 == 0) {
          uVar8 = 4;
          if (4 < uVar22) {
            uVar8 = uVar22;
          }
        }
        else {
          uVar8 = ((ulonglong)uVar14 * 3 >> 3) + 0x10 + uVar22;
        }
        uVar7 = FMemory::QuantizeSize(uVar8 * 4,0);
        iVar3 = (int)(uVar7 >> 2);
        if (iVar3 < (int)uVar14) {
          iVar3 = 0x7fffffff;
        }
      }
      *(int *)&(__return_storage_ptr__->Elements).field_0x2c = iVar3 << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 *(int *)&(__return_storage_ptr__->Elements).field_0x28);
    }
    puVar15 = &(__return_storage_ptr__->Elements).field_0x28;
    *(int *)puVar15 = *(int *)puVar15 + 1;
    iVar3 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
    uVar14 = iVar3 >> 0x1f & 0x1f;
    uVar21 = iVar3 + uVar14;
    iVar3 = (uVar21 & 0x1f) - uVar14;
    if (iVar3 != 0) {
      puVar15 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = this_00;
      }
      *(uint *)(puVar15 + (longlong)((int)uVar21 >> 5) * 4) =
           *(uint *)(puVar15 + (longlong)((int)uVar21 >> 5) * 4) &
           0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
    }
  }
  else {
    *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar11 + 1;
  }
  puVar15 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
  if (puVar15 == (undefined1 *)0x0) {
    puVar15 = this_00;
  }
  *(uint *)(puVar15 + (longlong)iVar27 * 4) =
       *(uint *)(puVar15 + (longlong)iVar27 * 4) & ~(1 << ((byte)iVar11 & 0x1f));
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,&local_98,iVar2);
  pTVar17 = pTVar23;
  if (local_98.Pointer != (TSparseSetElement<int> *)0x0) {
    *(int *)local_98.Pointer = (iVar20 * iVar26 + iVar19) * iVar6 + iVar25;
    *(undefined4 *)((longlong)local_98.Pointer + 4) = 0xffffffff;
    pTVar17 = local_98.Pointer;
  }
  iVar19 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
  iVar20 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
  uVar21 = *(uint *)pTVar17;
  if ((iVar19 - iVar20 != 1) && (iVar19 != iVar20)) {
    FVar16 = (__return_storage_ptr__->Hash).SecondaryData;
    if (FVar16 == (ForElementType<FSetElementId>)0x0) {
      FVar16 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
    }
    iVar19 = *(int *)((longlong)FVar16 +
                     (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar21) * 4);
    if (iVar19 != -1) {
      lVar1 = *(longlong *)&__return_storage_ptr__->Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar19 * 0xc) == uVar21) {
          if (iVar19 != -1) {
            *(uint *)(lVar1 + (longlong)iVar19 * 0xc) = uVar21;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)__return_storage_ptr__,local_98.Index,1);
            return __return_storage_ptr__;
          }
          break;
        }
        iVar19 = *(int *)(lVar1 + 4 + (longlong)iVar19 * 0xc);
      } while (iVar19 != -1);
    }
  }
  uVar18 = 1;
  uVar14 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
           *(int *)&(__return_storage_ptr__->Elements).field_0x34;
  if (3 < uVar14) {
    uVar22 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar18 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)uVar14 < 1) || ((int)uVar18 <= __return_storage_ptr__->HashSize)) {
    uVar21 = __return_storage_ptr__->HashSize - 1U & uVar21;
    *(uint *)&pTVar17->field_0x8 = uVar21;
    FVar16 = (__return_storage_ptr__->Hash).SecondaryData;
    if (FVar16 == (ForElementType<FSetElementId>)0x0) {
      FVar16 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
    }
    uVar22 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar21;
    *(undefined4 *)&pTVar17->field_0x4 = *(undefined4 *)((longlong)FVar16 + uVar22 * 4);
    *(int *)((longlong)FVar16 + uVar22 * 4) = local_98.Index;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->HashSize = uVar18;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar18 == 0) goto LAB_143e2a465;
  uVar21 = uVar18;
  if (uVar18 < 2) {
    if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
      uVar21 = 0;
      goto LAB_143e2a413;
    }
  }
  else {
LAB_143e2a413:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar21,4);
  }
  if (0 < (int)uVar18) {
    uVar22 = (ulonglong)uVar18;
    pTVar17 = pTVar23;
    do {
      FVar16 = (__return_storage_ptr__->Hash).SecondaryData;
      FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
      if (FVar16 != (ForElementType<FSetElementId>)0x0) {
        FVar12 = FVar16;
      }
      uVar8 = (ulonglong)pTVar17 & (longlong)(int)uVar18 - 1U;
      pTVar17 = (TSparseSetElement<int> *)&pTVar17->field_0x1;
      *(undefined4 *)((longlong)FVar12 + uVar8 * 4) = 0xffffffff;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
LAB_143e2a465:
  if (__return_storage_ptr__->HashSize != 0) {
    uVar21 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    local_98.Pointer = &(__return_storage_ptr__->Elements).field_0x10;
    local_98.Index = 0;
    local_98._4_4_ = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    if (uVar21 != 0) {
      puVar24 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar24 == (uint *)0x0) {
        puVar24 = local_98.Pointer;
      }
      uVar14 = *puVar24;
      pTVar17 = pTVar23;
      while (uVar14 == 0) {
        iVar19 = (int)pTVar17;
        uStack_80 = (int)pTVar23 + 0x20;
        pTVar23 = (TSparseSetElement<int> *)(ulonglong)uStack_80;
        local_98.Index = iVar19 + 1;
        pTVar17 = (TSparseSetElement<int> *)(ulonglong)(uint)local_98.Index;
        if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < local_98.Index)
        goto LAB_143e2a50d;
        uVar14 = puVar24[(longlong)iVar19 + 1];
      }
      local_98._4_4_ = -uVar14 & uVar14;
      uVar22 = (ulonglong)(uint)local_98._4_4_ * 2 + 1;
      lVar1 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uStack_84 = (int)lVar1 + -1 + uStack_80;
      pTVar23 = (TSparseSetElement<int> *)(ulonglong)uStack_84;
      if ((int)uVar21 < (int)uStack_84) {
LAB_143e2a50d:
        pTVar23 = (TSparseSetElement<int> *)(ulonglong)uVar21;
        uStack_84 = uVar21;
      }
    }
    local_88 = 0xffffffff;
    local_68._padding_._0_4_ = local_98.Index;
    local_68._padding_._4_4_ = local_98._4_4_;
    local_68.UnvisitedBitMask = 0xffffffff;
    local_68.CurrentBitIndex = uStack_84;
    local_68._28_4_ = uStack_7c;
    local_68.BaseBitIndex = uStack_80;
    local_70 = __return_storage_ptr__;
    local_68.Array = local_98.Pointer;
    if ((int)pTVar23 < *(int *)&(__return_storage_ptr__->Elements).field_0x28) {
      do {
        lVar1 = *(longlong *)&local_70->Elements;
        lVar9 = (longlong)(int)pTVar23;
        uVar21 = __return_storage_ptr__->HashSize - 1U & *(uint *)(lVar1 + lVar9 * 0xc);
        *(uint *)(lVar1 + 8 + lVar9 * 0xc) = uVar21;
        FVar16 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar16 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar16;
        }
        uVar22 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar21;
        *(undefined4 *)(lVar1 + 4 + lVar9 * 0xc) = *(undefined4 *)((longlong)FVar12 + uVar22 * 4);
        *(int *)((longlong)FVar12 + uVar22 * 4) = (int)pTVar23;
        local_68.UnvisitedBitMask = local_68.UnvisitedBitMask & ~local_68._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_68);
        pTVar23 = (TSparseSetElement<int> *)(ulonglong)(uint)local_68.CurrentBitIndex;
      } while (local_68.CurrentBitIndex < (local_68.Array)->NumBits);
    }
  }
  return __return_storage_ptr__;
}

// HashFunction @ 143e31160

int __thiscall
Chaos::TSpatialHash<double>::HashFunction(TSpatialHash<double> *this,TVector<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = __real_3ff0000000000000 / this->MCellSize;
  dVar1 = this->MCellSize * __real_3fe0000000000000;
  return ((int)(((*(double *)&param_1->field_0x10 - *(double *)&(this->MBoundingBox).MMin.field_0x10
                 ) + dVar1) * dVar2) * this->MNumberOfCellsY +
         (int)(((*(double *)&param_1->field_0x8 - *(double *)&(this->MBoundingBox).MMin.field_0x8) +
               dVar1) * dVar2)) * this->MNumberOfCellsX +
         (int)(((*(double *)param_1 - *(double *)&(this->MBoundingBox).MMin) + dVar1) * dVar2);
}

// HashFunction @ 143e311e0

int __thiscall
Chaos::TSpatialHash<double>::HashFunction
          (TSpatialHash<double> *this,int param_1,int param_2,int param_3)

{
  return (param_2 + param_3 * this->MNumberOfCellsY) * this->MNumberOfCellsX + param_1;
}

// Init @ 143e31300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::TSpatialHash<double>::Init(TSpatialHash<double> *this,double param_1)

{
  FScriptContainerElement *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  uint local_res8 [2];
  TKeyInitializer<int_const_&> local_res10;
  LARGE_INTEGER local_res18;
  uint *local_res20;
  uint local_e8 [2];
  LARGE_INTEGER local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  
  QueryPerformanceCounter(&local_res18);
  uVar13 = 0;
  local_98 = 0;
  this->MCellSize = param_1 + param_1;
  local_a8 = 0;
  uStack_a0 = 0;
  *(undefined8 *)&(this->MBoundingBox).MMin = 0;
  *(undefined8 *)&(this->MBoundingBox).MMin.field_0x8 = 0;
  *(undefined8 *)&(this->MBoundingBox).MMin.field_0x10 = 0;
  *(undefined8 *)&(this->MBoundingBox).MMax = 0;
  *(undefined8 *)&(this->MBoundingBox).MMax.field_0x8 = 0;
  *(undefined8 *)&(this->MBoundingBox).MMax.field_0x10 = 0;
  iVar8 = (this->MParticles).ArrayNum;
  uVar14 = uVar13;
  uVar15 = uVar13;
  if (0 < iVar8) {
    do {
      uVar12 = (uint)uVar14;
      uVar7 = 0;
      if ((int)uVar12 < iVar8) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->MParticles).AllocatorInstance.Data;
      dVar17 = *(double *)&(this->MBoundingBox).MMin.field_0x8;
      dVar18 = *(double *)&(this->MBoundingBox).MMin.field_0x10;
      uVar21 = SUB84(dVar18,0);
      uVar22 = (undefined4)((ulonglong)dVar18 >> 0x20);
      if (*(double *)(pFVar1 + uVar15 + 8) <= dVar17) {
        dVar17 = *(double *)(pFVar1 + uVar15 + 8);
      }
      dVar19 = *(double *)(pFVar1 + uVar15 + 0x10);
      if (dVar19 <= dVar18) {
        uVar21 = SUB84(dVar19,0);
        uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
      }
      dVar18 = *(double *)&(this->MBoundingBox).MMin;
      dVar19 = *(double *)(pFVar1 + uVar15);
      if (dVar18 <= *(double *)(pFVar1 + uVar15)) {
        dVar19 = dVar18;
      }
      *(double *)&(this->MBoundingBox).MMin = dVar19;
      *(double *)&(this->MBoundingBox).MMin.field_0x8 = dVar17;
      *(ulonglong *)&(this->MBoundingBox).MMin.field_0x10 = CONCAT44(uVar22,uVar21);
      dVar17 = *(double *)(pFVar1 + uVar15 + 0x10);
      uVar21 = SUB84(dVar17,0);
      uVar22 = (undefined4)((ulonglong)dVar17 >> 0x20);
      dVar18 = *(double *)&(this->MBoundingBox).MMax.field_0x8;
      if (dVar18 <= *(double *)(pFVar1 + uVar15 + 8)) {
        dVar18 = *(double *)(pFVar1 + uVar15 + 8);
      }
      dVar19 = *(double *)&(this->MBoundingBox).MMax;
      dVar16 = *(double *)(pFVar1 + uVar15);
      if (*(double *)(pFVar1 + uVar15) <= dVar19) {
        dVar16 = dVar19;
      }
      dVar19 = *(double *)&(this->MBoundingBox).MMax.field_0x10;
      if (dVar17 <= dVar19) {
        uVar21 = SUB84(dVar19,0);
        uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
      }
      *(double *)&(this->MBoundingBox).MMax = dVar16;
      *(double *)&(this->MBoundingBox).MMax.field_0x8 = dVar18;
      *(ulonglong *)&(this->MBoundingBox).MMax.field_0x10 = CONCAT44(uVar22,uVar21);
      iVar8 = (this->MParticles).ArrayNum;
      uVar14 = (ulonglong)(uVar12 + 1);
      uVar15 = uVar15 + 0x18;
    } while ((int)(uVar12 + 1) < iVar8);
  }
  dVar18 = __real_3fe0000000000000;
  local_d0 = *(double *)&(this->MBoundingBox).MMax.field_0x8 -
             *(double *)&(this->MBoundingBox).MMin.field_0x8;
  dVar17 = *(double *)&(this->MBoundingBox).MMin;
  local_d8 = *(double *)&(this->MBoundingBox).MMax - dVar17;
  local_c8 = *(double *)&(this->MBoundingBox).MMax.field_0x10 -
             *(double *)&(this->MBoundingBox).MMin.field_0x10;
  if (((local_d0 <= local_d8) || (dVar19 = local_d8, local_c8 <= local_d8)) &&
     (dVar19 = local_c8, local_d0 < local_c8)) {
    dVar19 = local_d0;
  }
  dVar16 = this->MCellSize;
  if (dVar19 < dVar16) {
    iVar8 = (this->MParticles).ArrayNum;
    dVar16 = dVar19 * __real_3fe0000000000000;
    this->MCellSize = dVar16;
  }
  dVar5 = __real_bfe0000000000000;
  dVar19 = __real_3ff0000000000000;
  dVar23 = *(double *)&(this->MBoundingBox).MMax.field_0x8 -
           *(double *)&(this->MBoundingBox).MMin.field_0x8;
  dVar17 = *(double *)&(this->MBoundingBox).MMax - dVar17;
  dVar20 = *(double *)&(this->MBoundingBox).MMax.field_0x10 -
           *(double *)&(this->MBoundingBox).MMin.field_0x10;
  if (((dVar17 <= dVar23) || (dVar4 = local_d8, dVar17 <= dVar20)) &&
     (dVar4 = local_c8, dVar20 < dVar23)) {
    dVar4 = local_d0;
  }
  local_e8[0] = 0;
  dVar4 = dVar4 / (double)-((int)ROUND(__real_bfe0000000000000 - (dVar4 + dVar4) / dVar16) >> 1);
  dVar17 = __real_3ff0000000000000 / dVar4;
  this->MCellSize = dVar4;
  this->MNumberOfCellsX = 1 - ((int)ROUND(dVar5 - (dVar17 + dVar17) * local_d8) >> 1);
  this->MNumberOfCellsY = 1 - ((int)ROUND(dVar5 - (dVar17 + dVar17) * local_d0) >> 1);
  this->MNumberOfCellsZ = 1 - ((int)ROUND(dVar5 - (dVar17 + dVar17) * local_c8) >> 1);
  if (0 < iVar8) {
    do {
      uVar12 = (uint)uVar13;
      uVar7 = 0;
      if ((int)uVar12 < iVar8) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->MParticles).AllocatorInstance.Data;
      dVar16 = dVar19 / this->MCellSize;
      lVar9 = (longlong)(int)uVar12;
      dVar17 = this->MCellSize * dVar18;
      local_res8[0] =
           (int)(((*(double *)(pFVar1 + lVar9 * 0x18) - *(double *)&(this->MBoundingBox).MMin) +
                 dVar17) * dVar16) +
           ((int)(((*(double *)(pFVar1 + lVar9 * 0x18 + 0x10) -
                   *(double *)&(this->MBoundingBox).MMin.field_0x10) + dVar17) * dVar16) *
            this->MNumberOfCellsY +
           (int)(((*(double *)(pFVar1 + lVar9 * 0x18 + 8) -
                  *(double *)&(this->MBoundingBox).MMin.field_0x8) + dVar17) * dVar16)) *
           this->MNumberOfCellsX;
      if ((this->MNumberOfCellsY * this->MNumberOfCellsX * this->MNumberOfCellsZ <=
           (int)local_res8[0]) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8884104697468682196>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SpatialHash.cpp"
                             ,0x2c,
                             "HashTableIdx < MNumberOfCellsX * MNumberOfCellsY * MNumberOfCellsZ"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)&(this->MHashTable).field_0x8 != *(int *)&(this->MHashTable).field_0x34) {
        puVar2 = *(undefined1 **)&(this->MHashTable).field_0x40;
        puVar11 = &(this->MHashTable).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar11 = puVar2;
        }
        iVar8 = *(int *)(puVar11 +
                        (ulonglong)(*(int *)&(this->MHashTable).field_0x48 - 1U & local_res8[0]) * 4
                        );
        if (iVar8 != -1) {
          do {
            if (*(uint *)((longlong)iVar8 * 0x20 + *(longlong *)&this->MHashTable) == local_res8[0])
            {
              if (iVar8 != -1) goto LAB_143e3178b;
              break;
            }
            iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *(longlong *)&this->MHashTable);
          } while (iVar8 != -1);
        }
      }
      local_res20 = local_res8;
      TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&this->MHashTable,&local_res10,(bool *)&local_res20);
LAB_143e3178b:
      pTVar10 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                ::FindChecked((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                               *)&this->MHashTable,local_res8[0]);
      pFVar1 = (pTVar10->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)local_e8) &&
          ((FScriptContainerElement *)local_e8 < pFVar1 + (longlong)pTVar10->ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = pTVar10->ArrayNum;
      if (iVar8 == pTVar10->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
      }
      pTVar10->ArrayNum = iVar8 + 1;
      *(uint *)((pTVar10->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_e8[0];
      iVar8 = (this->MParticles).ArrayNum;
      local_e8[0] = local_e8[0] + 1;
      uVar13 = (ulonglong)local_e8[0];
    } while ((int)local_e8[0] < iVar8);
  }
  QueryPerformanceCounter(&local_e0);
  if (4 < (byte)LogChaosSpatialHash._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`private:_void___cdecl_Chaos::TSpatialHash<double>::Init(double)___ptr64'::__l15::
                LOG_Static,(FLogCategoryBase *)&LogChaosSpatialHash);
  }
  return;
}

// Init @ 143e318f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::TSpatialHash<double>::Init(TSpatialHash<double> *this)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  undefined1 *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  uint local_res8 [2];
  TKeyInitializer<int_const_&> local_res10;
  LARGE_INTEGER local_res18;
  uint *local_res20;
  uint local_118 [2];
  LARGE_INTEGER local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  
  QueryPerformanceCounter(&local_res18);
  uVar15 = 0;
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  *(undefined8 *)&(this->MBoundingBox).MMin = 0;
  *(undefined8 *)&(this->MBoundingBox).MMin.field_0x8 = 0;
  *(undefined8 *)&(this->MBoundingBox).MMin.field_0x10 = 0;
  *(undefined8 *)&(this->MBoundingBox).MMax = 0;
  *(undefined8 *)&(this->MBoundingBox).MMax.field_0x8 = 0;
  *(undefined8 *)&(this->MBoundingBox).MMax.field_0x10 = 0;
  iVar10 = (this->MParticles).ArrayNum;
  uVar16 = uVar15;
  uVar17 = uVar15;
  if (0 < iVar10) {
    do {
      uVar14 = (uint)uVar16;
      uVar9 = 0;
      if ((int)uVar14 < iVar10) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->MParticles).AllocatorInstance.Data;
      dVar1 = *(double *)(pFVar3 + uVar17 + 0x10);
      uVar19 = SUB84(dVar1,0);
      uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)&(this->MBoundingBox).MMin;
      dVar22 = *(double *)(pFVar3 + uVar17);
      if (dVar2 <= *(double *)(pFVar3 + uVar17)) {
        dVar22 = dVar2;
      }
      dVar2 = *(double *)&(this->MBoundingBox).MMin.field_0x8;
      dVar18 = *(double *)(pFVar3 + uVar17 + 8);
      if (dVar2 <= *(double *)(pFVar3 + uVar17 + 8)) {
        dVar18 = dVar2;
      }
      dVar2 = *(double *)&(this->MBoundingBox).MMin.field_0x10;
      if (dVar2 <= dVar1) {
        uVar19 = SUB84(dVar2,0);
        uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      *(double *)&(this->MBoundingBox).MMin = dVar22;
      *(double *)&(this->MBoundingBox).MMin.field_0x8 = dVar18;
      *(ulonglong *)&(this->MBoundingBox).MMin.field_0x10 = CONCAT44(uVar20,uVar19);
      dVar1 = *(double *)(pFVar3 + uVar17 + 0x10);
      uVar19 = SUB84(dVar1,0);
      uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)&(this->MBoundingBox).MMax;
      dVar22 = *(double *)(pFVar3 + uVar17);
      if (*(double *)(pFVar3 + uVar17) <= dVar2) {
        dVar22 = dVar2;
      }
      dVar2 = *(double *)&(this->MBoundingBox).MMax.field_0x8;
      dVar18 = *(double *)(pFVar3 + uVar17 + 8);
      if (*(double *)(pFVar3 + uVar17 + 8) <= dVar2) {
        dVar18 = dVar2;
      }
      dVar2 = *(double *)&(this->MBoundingBox).MMax.field_0x10;
      if (dVar1 <= dVar2) {
        uVar19 = SUB84(dVar2,0);
        uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      *(double *)&(this->MBoundingBox).MMax = dVar22;
      *(double *)&(this->MBoundingBox).MMax.field_0x8 = dVar18;
      *(ulonglong *)&(this->MBoundingBox).MMax.field_0x10 = CONCAT44(uVar20,uVar19);
      iVar10 = (this->MParticles).ArrayNum;
      uVar16 = (ulonglong)(uVar14 + 1);
      uVar17 = uVar17 + 0x18;
    } while ((int)(uVar14 + 1) < iVar10);
  }
  local_100 = *(double *)&(this->MBoundingBox).MMax.field_0x8 -
              *(double *)&(this->MBoundingBox).MMin.field_0x8;
  dVar1 = *(double *)&(this->MBoundingBox).MMin;
  local_108 = *(double *)&(this->MBoundingBox).MMax - dVar1;
  local_f8 = *(double *)&(this->MBoundingBox).MMax.field_0x10 -
             *(double *)&(this->MBoundingBox).MMin.field_0x10;
  if (((local_100 <= local_108) || (dVar2 = local_108, local_f8 <= local_108)) &&
     (dVar2 = local_f8, local_100 < local_f8)) {
    dVar2 = local_100;
  }
  dVar2 = dVar2 * __real_3fb999999999999a;
  this->MCellSize = dVar2;
  dVar7 = __real_bfe0000000000000;
  dVar18 = __real_3ff0000000000000;
  dVar22 = *(double *)&(this->MBoundingBox).MMax.field_0x8 -
           *(double *)&(this->MBoundingBox).MMin.field_0x8;
  dVar1 = *(double *)&(this->MBoundingBox).MMax - dVar1;
  dVar21 = *(double *)&(this->MBoundingBox).MMax.field_0x10 -
           *(double *)&(this->MBoundingBox).MMin.field_0x10;
  if (((dVar1 <= dVar22) || (dVar6 = local_108, dVar1 <= dVar21)) &&
     (dVar6 = local_100, dVar22 <= dVar21)) {
    dVar6 = local_f8;
  }
  local_118[0] = 0;
  dVar6 = dVar6 / (double)-((int)ROUND(__real_bfe0000000000000 - (dVar6 + dVar6) / dVar2) >> 1);
  dVar1 = __real_3ff0000000000000 / dVar6;
  this->MCellSize = dVar6;
  this->MNumberOfCellsX = 1 - ((int)ROUND(dVar7 - (dVar1 + dVar1) * local_108) >> 1);
  this->MNumberOfCellsY = 1 - ((int)ROUND(dVar7 - (dVar1 + dVar1) * local_100) >> 1);
  this->MNumberOfCellsZ = 1 - ((int)ROUND(dVar7 - (dVar1 + dVar1) * local_f8) >> 1);
  dVar1 = __real_3fe0000000000000;
  if (0 < iVar10) {
    do {
      uVar14 = (uint)uVar15;
      uVar9 = 0;
      if ((int)uVar14 < iVar10) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->MParticles).AllocatorInstance.Data;
      dVar22 = dVar18 / this->MCellSize;
      lVar11 = (longlong)(int)uVar14;
      dVar2 = this->MCellSize * dVar1;
      local_res8[0] =
           (int)(((*(double *)(pFVar3 + lVar11 * 0x18) - *(double *)&(this->MBoundingBox).MMin) +
                 dVar2) * dVar22) +
           ((int)(((*(double *)(pFVar3 + lVar11 * 0x18 + 0x10) -
                   *(double *)&(this->MBoundingBox).MMin.field_0x10) + dVar2) * dVar22) *
            this->MNumberOfCellsY +
           (int)(((*(double *)(pFVar3 + lVar11 * 0x18 + 8) -
                  *(double *)&(this->MBoundingBox).MMin.field_0x8) + dVar2) * dVar22)) *
           this->MNumberOfCellsX;
      if ((this->MNumberOfCellsY * this->MNumberOfCellsX * this->MNumberOfCellsZ <=
           (int)local_res8[0]) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8884104697468682151>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SpatialHash.cpp"
                             ,0x59,
                             "HashTableIdx < MNumberOfCellsX * MNumberOfCellsY * MNumberOfCellsZ"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)&(this->MHashTable).field_0x8 != *(int *)&(this->MHashTable).field_0x34) {
        puVar4 = *(undefined1 **)&(this->MHashTable).field_0x40;
        puVar13 = &(this->MHashTable).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar13 = puVar4;
        }
        iVar10 = *(int *)(puVar13 +
                         (ulonglong)(*(int *)&(this->MHashTable).field_0x48 - 1U & local_res8[0]) *
                         4);
        if (iVar10 != -1) {
          do {
            if (*(uint *)((longlong)iVar10 * 0x20 + *(longlong *)&this->MHashTable) == local_res8[0]
               ) {
              if (iVar10 != -1) goto LAB_143e31db1;
              break;
            }
            iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *(longlong *)&this->MHashTable);
          } while (iVar10 != -1);
        }
      }
      local_res20 = local_res8;
      TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&this->MHashTable,&local_res10,(bool *)&local_res20);
LAB_143e31db1:
      pTVar12 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                ::FindChecked((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                               *)&this->MHashTable,local_res8[0]);
      pFVar3 = (pTVar12->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_118) &&
          ((FScriptContainerElement *)local_118 < pFVar3 + (longlong)pTVar12->ArrayMax * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = pTVar12->ArrayNum;
      if (iVar10 == pTVar12->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
      }
      pTVar12->ArrayNum = iVar10 + 1;
      *(uint *)((pTVar12->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_118[0];
      iVar10 = (this->MParticles).ArrayNum;
      local_118[0] = local_118[0] + 1;
      uVar15 = (ulonglong)local_118[0];
    } while ((int)local_118[0] < iVar10);
  }
  QueryPerformanceCounter(&local_110);
  if (4 < (byte)LogChaosSpatialHash._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`private:_void___cdecl_Chaos::TSpatialHash<double>::Init(void)___ptr64'::__l12::
                LOG_Static,(FLogCategoryBase *)&LogChaosSpatialHash);
  }
  return;
}

// SmallestAxis @ 143e50510

int __thiscall Chaos::TSpatialHash<double>::SmallestAxis(TSpatialHash<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)&(this->MBoundingBox).MMax.field_0x8 -
          *(double *)&(this->MBoundingBox).MMin.field_0x8;
  dVar3 = *(double *)&(this->MBoundingBox).MMax - *(double *)&(this->MBoundingBox).MMin;
  dVar1 = *(double *)&(this->MBoundingBox).MMax.field_0x10 -
          *(double *)&(this->MBoundingBox).MMin.field_0x10;
  if ((dVar3 < dVar2) && (dVar3 < dVar1)) {
    return 0;
  }
  return (dVar1 <= dVar2) + 1;
}

// Update @ 143e57be0

void __thiscall
Chaos::TSpatialHash<double>::Update
          (TSpatialHash<double> *this,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::operator=(&this->MParticles,param_1)
  ;
  bVar3 = 1 < *(int *)&(this->MHashTable).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->MHashTable);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->MHashTable,0,*(int *)&(this->MHashTable).field_0x8);
  puVar1 = &(this->MHashTable).field_0xc;
  *(undefined4 *)&(this->MHashTable).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->MHashTable,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MHashTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MHashTable).field_0x34 = 0;
  iVar2 = *(int *)&(this->MHashTable).field_0x2c;
  *(undefined4 *)&(this->MHashTable).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->MHashTable).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MHashTable).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->MHashTable).field_0x48 = 1;
    TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->MHashTable);
  }
  Init(this);
  return;
}

// Update @ 143e57cc0

void __thiscall
Chaos::TSpatialHash<double>::Update
          (TSpatialHash<double> *this,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_1,double param_2)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::operator=(&this->MParticles,param_1)
  ;
  bVar3 = 1 < *(int *)&(this->MHashTable).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->MHashTable);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->MHashTable,0,*(int *)&(this->MHashTable).field_0x8);
  puVar1 = &(this->MHashTable).field_0xc;
  *(undefined4 *)&(this->MHashTable).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->MHashTable,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MHashTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MHashTable).field_0x34 = 0;
  iVar2 = *(int *)&(this->MHashTable).field_0x2c;
  *(undefined4 *)&(this->MHashTable).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->MHashTable).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MHashTable).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->MHashTable).field_0x48 = 1;
    TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->MHashTable);
  }
  Init(this,param_2);
  return;
}

// Update @ 143e57db0

void __thiscall Chaos::TSpatialHash<double>::Update(TSpatialHash<double> *this,double param_1)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->MHashTable).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->MHashTable);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->MHashTable,0,*(int *)&(this->MHashTable).field_0x8);
  puVar1 = &(this->MHashTable).field_0xc;
  *(undefined4 *)&(this->MHashTable).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->MHashTable,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MHashTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MHashTable).field_0x34 = 0;
  iVar2 = *(int *)&(this->MHashTable).field_0x2c;
  *(undefined4 *)&(this->MHashTable).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->MHashTable).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MHashTable).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->MHashTable).field_0x48 = 1;
    TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->MHashTable);
  }
  Init(this,param_1);
  return;
}

