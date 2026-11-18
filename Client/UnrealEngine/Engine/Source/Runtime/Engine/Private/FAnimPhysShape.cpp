// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FAnimPhysShape @ 1474b2380

FAnimPhysShape * __thiscall
FAnimPhysShape::FAnimPhysShape
          (FAnimPhysShape *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  TVector<double> *pTVar6;
  float fVar7;
  TVector<double> local_38;
  
  piVar1 = &(this->Vertices).ArrayMax;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  (this->Vertices).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->Vertices).AllocatorInstance.Data,pFVar4,(longlong)iVar3 * 0x18);
  }
  pTVar2 = &this->Triangles;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Triangles).ArrayMax;
  iVar3 = param_2->ArrayNum;
  pFVar4 = (param_2->AllocatorInstance).Data;
  (this->Triangles).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0xc);
  }
  fVar7 = FAnimPhys::CalculateVolume(&this->Vertices,pTVar2);
  this->Volume = fVar7;
  pTVar6 = FAnimPhys::CalculateCenterOfMass(&local_38,&this->Vertices,pTVar2);
  dVar5 = (pTVar6->field0_0x0)._s_0.Y;
  (this->CenterOfMass).field0_0x0._s_0.X = (pTVar6->field0_0x0)._s_0.X;
  (this->CenterOfMass).field0_0x0._s_0.Y = dVar5;
  (this->CenterOfMass).field0_0x0._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
  return this;
}

// FAnimPhysShape @ 1474b24a0

FAnimPhysShape * __thiscall FAnimPhysShape::FAnimPhysShape(FAnimPhysShape *this)

{
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).ArrayNum = 0;
  (this->Triangles).ArrayMax = 0;
  this->Volume = 0.0;
  (this->CenterOfMass).field0_0x0._s_0.X = 0.0;
  (this->CenterOfMass).field0_0x0._s_0.Y = 0.0;
  (this->CenterOfMass).field0_0x0._s_0.Z = 0.0;
  return this;
}

// MakeBox @ 1474eb8a0

FAnimPhysShape * __cdecl
FAnimPhysShape::MakeBox(FAnimPhysShape *__return_storage_ptr__,TVector<double> *param_1)

{
  int iVar1;
  int *piVar2;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  int iVar13;
  FAnimPhysShape *pFVar14;
  longlong lVar15;
  TVector<double> *pTVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ForAnyElementType local_218;
  undefined8 local_210;
  ForAnyElementType local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double local_138;
  double dStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 local_f0;
  double dStack_e8;
  double local_e0;
  undefined8 local_d8;
  double dStack_d0;
  undefined8 local_c8;
  double local_c0;
  double dStack_b8;
  undefined8 local_b0;
  TVector<double> local_a8 [6];
  
  dVar4 = (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  dVar6 = (param_1->field0_0x0)._s_0.Z;
  dVar8 = dVar4 * __real_3fe0000000000000;
  dVar9 = dVar5 * __real_3fe0000000000000;
  dVar10 = dVar6 * __real_3fe0000000000000;
  if (dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar6 <= __real_3e45798ee0000000) {
    dVar8 = __real_3fe0000000000000;
    dVar9 = __real_3fe0000000000000;
    dVar10 = __real_3fe0000000000000;
  }
  local_208.Data = (FScriptContainerElement *)0x0;
  local_200 = 0;
  local_218.Data = (FScriptContainerElement *)0x0;
  local_210 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,8,&local_208,0,(int *)((longlong)&local_200 + 4));
  if (local_210._4_4_ < 0xc) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0xc,&local_218,(int)local_210,(int *)((longlong)&local_210 + 4));
  }
  uVar22 = (uint)__xmm_80000000000000008000000000000000;
  uVar23 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar20 = SUB84(dVar8,0) ^ uVar22;
  uVar21 = (uint)((ulonglong)dVar8 >> 0x20) ^ uVar23;
  uVar18 = SUB84(dVar9,0) ^ uVar22;
  uVar19 = (uint)((ulonglong)dVar9 >> 0x20) ^ uVar23;
  local_168 = (double)CONCAT44(uVar21,uVar20);
  dStack_160 = (double)CONCAT44(uVar19,uVar18);
  local_158 = dVar10;
  if (((local_208.Data <= (FScriptContainerElement *)&local_168) &&
      ((FScriptContainerElement *)&local_168 < local_208.Data + (longlong)local_200._4_4_ * 0x18))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  iVar13 = (int)local_200;
  if ((int)local_200 == local_200._4_4_) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_208,(int *)((longlong)&local_200 + 4));
  }
  iVar1 = iVar13 + 1;
  dStack_148 = (double)CONCAT44(uVar19,uVar18);
  *(double *)(local_208.Data + (longlong)iVar13 * 0x18) = local_168;
  *(double *)(local_208.Data + (longlong)iVar13 * 0x18 + 8) = dStack_160;
  *(double *)(local_208.Data + (longlong)iVar13 * 0x18 + 0x10) = local_158;
  local_150 = dVar8;
  local_140 = dVar10;
  local_200._0_4_ = iVar1;
  if (((local_208.Data <= (FScriptContainerElement *)&local_150) &&
      ((FScriptContainerElement *)&local_150 < local_208.Data + (longlong)local_200._4_4_ * 0x18))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_200 == local_200._4_4_) {
    local_200._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_208,(int *)((longlong)&local_200 + 4));
  }
  iVar13 = (int)local_200 + 1;
  uVar22 = SUB84(dVar10,0) ^ uVar22;
  uVar23 = (uint)((ulonglong)dVar10 >> 0x20) ^ uVar23;
  dStack_130 = (double)CONCAT44(uVar19,uVar18);
  local_128 = CONCAT44(uVar23,uVar22);
  *(double *)(local_208.Data + (longlong)(int)local_200 * 0x18) = local_150;
  *(double *)(local_208.Data + (longlong)(int)local_200 * 0x18 + 8) = dStack_148;
  *(double *)(local_208.Data + (longlong)(int)local_200 * 0x18 + 0x10) = local_140;
  local_138 = dVar8;
  local_200._0_4_ = iVar13;
  if (((local_208.Data <= (FScriptContainerElement *)&local_138) &&
      ((FScriptContainerElement *)&local_138 < local_208.Data + (longlong)local_200._4_4_ * 0x18))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_200 == local_200._4_4_) {
    local_200._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_208,(int *)((longlong)&local_200 + 4));
  }
  iVar13 = (int)local_200 + 1;
  local_120 = CONCAT44(uVar21,uVar20);
  uStack_118 = CONCAT44(uVar19,uVar18);
  local_110 = CONCAT44(uVar23,uVar22);
  *(double *)(local_208.Data + (longlong)(int)local_200 * 0x18) = local_138;
  *(double *)(local_208.Data + (longlong)(int)local_200 * 0x18 + 8) = dStack_130;
  *(undefined8 *)(local_208.Data + (longlong)(int)local_200 * 0x18 + 0x10) = local_128;
  local_200._0_4_ = iVar13;
  if (((local_208.Data <= (FScriptContainerElement *)&local_120) &&
      ((FScriptContainerElement *)&local_120 < local_208.Data + (longlong)local_200._4_4_ * 0x18))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_200 == local_200._4_4_) {
    local_200._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_208,(int *)((longlong)&local_200 + 4));
  }
  iVar13 = (int)local_200 + 1;
  *(undefined8 *)(local_208.Data + (longlong)(int)local_200 * 0x18) = local_120;
  *(undefined8 *)(local_208.Data + (longlong)(int)local_200 * 0x18 + 8) = uStack_118;
  *(undefined8 *)(local_208.Data + (longlong)(int)local_200 * 0x18 + 0x10) = local_110;
  local_108 = dVar8;
  dStack_100 = dVar9;
  local_f8 = dVar10;
  local_200._0_4_ = iVar13;
  if (((local_208.Data <= (FScriptContainerElement *)&local_108) &&
      ((FScriptContainerElement *)&local_108 < local_208.Data + (longlong)local_200._4_4_ * 0x18))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_200 == local_200._4_4_) {
    local_200._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_208,(int *)((longlong)&local_200 + 4));
  }
  iVar13 = (int)local_200 + 1;
  local_f0 = CONCAT44(uVar21,uVar20);
  *(double *)(local_208.Data + (longlong)(int)local_200 * 0x18) = local_108;
  *(double *)(local_208.Data + (longlong)(int)local_200 * 0x18 + 8) = dStack_100;
  *(double *)(local_208.Data + (longlong)(int)local_200 * 0x18 + 0x10) = local_f8;
  dStack_e8 = dVar9;
  local_e0 = dVar10;
  local_200._0_4_ = iVar13;
  if (((local_208.Data <= (FScriptContainerElement *)&local_f0) &&
      ((FScriptContainerElement *)&local_f0 < local_208.Data + (longlong)local_200._4_4_ * 0x18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_200 == local_200._4_4_) {
    local_200._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_208,(int *)((longlong)&local_200 + 4));
  }
  iVar13 = (int)local_200 + 1;
  local_d8 = CONCAT44(uVar21,uVar20);
  local_c8 = CONCAT44(uVar23,uVar22);
  *(undefined8 *)(local_208.Data + (longlong)(int)local_200 * 0x18) = local_f0;
  *(double *)(local_208.Data + (longlong)(int)local_200 * 0x18 + 8) = dStack_e8;
  *(double *)(local_208.Data + (longlong)(int)local_200 * 0x18 + 0x10) = local_e0;
  dStack_d0 = dVar9;
  local_200._0_4_ = iVar13;
  if (((local_208.Data <= (FScriptContainerElement *)&local_d8) &&
      ((FScriptContainerElement *)&local_d8 < local_208.Data + (longlong)local_200._4_4_ * 0x18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_200 == local_200._4_4_) {
    local_200._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_208,(int *)((longlong)&local_200 + 4));
  }
  iVar13 = (int)local_200 + 1;
  local_b0 = CONCAT44(uVar23,uVar22);
  *(undefined8 *)(local_208.Data + (longlong)(int)local_200 * 0x18) = local_d8;
  *(double *)(local_208.Data + (longlong)(int)local_200 * 0x18 + 8) = dStack_d0;
  *(undefined8 *)(local_208.Data + (longlong)(int)local_200 * 0x18 + 0x10) = local_c8;
  local_c0 = dVar8;
  dStack_b8 = dVar9;
  local_200._0_4_ = iVar13;
  if (((local_208.Data <= (FScriptContainerElement *)&local_c0) &&
      ((FScriptContainerElement *)&local_c0 < local_208.Data + (longlong)local_200._4_4_ * 0x18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  iVar13 = (int)local_200;
  if ((int)local_200 == local_200._4_4_) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_208,(int *)((longlong)&local_200 + 4));
  }
  local_1f8 = 0;
  local_200 = CONCAT44(local_200._4_4_,iVar13 + 1);
  uStack_1f4 = 1;
  local_1f0 = 3;
  *(double *)(local_208.Data + (longlong)iVar13 * 0x18) = local_c0;
  *(double *)(local_208.Data + (longlong)iVar13 * 0x18 + 8) = dStack_b8;
  *(undefined8 *)(local_208.Data + (longlong)iVar13 * 0x18 + 0x10) = local_b0;
  if (((local_218.Data <= (FScriptContainerElement *)&local_1f8) &&
      ((FScriptContainerElement *)&local_1f8 < local_218.Data + (longlong)local_210._4_4_ * 0xc)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  iVar13 = (int)local_210;
  if ((int)local_210 == local_210._4_4_) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_218,(int *)((longlong)&local_210 + 4));
  }
  iVar1 = iVar13 + 1;
  local_1ec = 1;
  uStack_1e8 = 2;
  local_1e4 = 3;
  *(ulonglong *)(local_218.Data + (longlong)iVar13 * 0xc) = CONCAT44(uStack_1f4,local_1f8);
  *(undefined4 *)(local_218.Data + (longlong)iVar13 * 0xc + 8) = local_1f0;
  local_210._0_4_ = iVar1;
  if (((local_218.Data <= (FScriptContainerElement *)&local_1ec) &&
      ((FScriptContainerElement *)&local_1ec < local_218.Data + (longlong)local_210._4_4_ * 0xc)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_210 == local_210._4_4_) {
    local_210._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_218,(int *)((longlong)&local_210 + 4));
  }
  iVar13 = (int)local_210 + 1;
  local_1e0 = 4;
  uStack_1dc = 5;
  local_1d8 = 7;
  *(ulonglong *)(local_218.Data + (longlong)(int)local_210 * 0xc) = CONCAT44(uStack_1e8,local_1ec);
  *(undefined4 *)(local_218.Data + (longlong)(int)local_210 * 0xc + 8) = local_1e4;
  local_210._0_4_ = iVar13;
  if (((local_218.Data <= (FScriptContainerElement *)&local_1e0) &&
      ((FScriptContainerElement *)&local_1e0 < local_218.Data + (longlong)local_210._4_4_ * 0xc)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_210 == local_210._4_4_) {
    local_210._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_218,(int *)((longlong)&local_210 + 4));
  }
  iVar13 = (int)local_210 + 1;
  local_1d4 = 5;
  uStack_1d0 = 6;
  local_1cc = 7;
  *(ulonglong *)(local_218.Data + (longlong)(int)local_210 * 0xc) = CONCAT44(uStack_1dc,local_1e0);
  *(undefined4 *)(local_218.Data + (longlong)(int)local_210 * 0xc + 8) = local_1d8;
  local_210._0_4_ = iVar13;
  if (((local_218.Data <= (FScriptContainerElement *)&local_1d4) &&
      ((FScriptContainerElement *)&local_1d4 < local_218.Data + (longlong)local_210._4_4_ * 0xc)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_210 == local_210._4_4_) {
    local_210._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_218,(int *)((longlong)&local_210 + 4));
  }
  iVar13 = (int)local_210 + 1;
  local_1c8 = 0;
  uStack_1c4 = 5;
  local_1c0 = 1;
  *(ulonglong *)(local_218.Data + (longlong)(int)local_210 * 0xc) = CONCAT44(uStack_1d0,local_1d4);
  *(undefined4 *)(local_218.Data + (longlong)(int)local_210 * 0xc + 8) = local_1cc;
  local_210._0_4_ = iVar13;
  if (((local_218.Data <= (FScriptContainerElement *)&local_1c8) &&
      ((FScriptContainerElement *)&local_1c8 < local_218.Data + (longlong)local_210._4_4_ * 0xc)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_210 == local_210._4_4_) {
    local_210._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_218,(int *)((longlong)&local_210 + 4));
  }
  iVar13 = (int)local_210 + 1;
  local_1bc = 5;
  uStack_1b8 = 4;
  local_1b4 = 1;
  *(ulonglong *)(local_218.Data + (longlong)(int)local_210 * 0xc) = CONCAT44(uStack_1c4,local_1c8);
  *(undefined4 *)(local_218.Data + (longlong)(int)local_210 * 0xc + 8) = local_1c0;
  local_210._0_4_ = iVar13;
  if (((local_218.Data <= (FScriptContainerElement *)&local_1bc) &&
      ((FScriptContainerElement *)&local_1bc < local_218.Data + (longlong)local_210._4_4_ * 0xc)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_210 == local_210._4_4_) {
    local_210._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_218,(int *)((longlong)&local_210 + 4));
  }
  iVar13 = (int)local_210 + 1;
  local_1b0 = 1;
  uStack_1ac = 4;
  local_1a8 = 2;
  *(ulonglong *)(local_218.Data + (longlong)(int)local_210 * 0xc) = CONCAT44(uStack_1b8,local_1bc);
  *(undefined4 *)(local_218.Data + (longlong)(int)local_210 * 0xc + 8) = local_1b4;
  local_210._0_4_ = iVar13;
  if (((local_218.Data <= (FScriptContainerElement *)&local_1b0) &&
      ((FScriptContainerElement *)&local_1b0 < local_218.Data + (longlong)local_210._4_4_ * 0xc)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_210 == local_210._4_4_) {
    local_210._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_218,(int *)((longlong)&local_210 + 4));
  }
  iVar13 = (int)local_210 + 1;
  local_1a4 = 2;
  uStack_1a0 = 4;
  local_19c = 7;
  *(ulonglong *)(local_218.Data + (longlong)(int)local_210 * 0xc) = CONCAT44(uStack_1ac,local_1b0);
  *(undefined4 *)(local_218.Data + (longlong)(int)local_210 * 0xc + 8) = local_1a8;
  local_210._0_4_ = iVar13;
  if (((local_218.Data <= (FScriptContainerElement *)&local_1a4) &&
      ((FScriptContainerElement *)&local_1a4 < local_218.Data + (longlong)local_210._4_4_ * 0xc)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_210 == local_210._4_4_) {
    local_210._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_218,(int *)((longlong)&local_210 + 4));
  }
  iVar13 = (int)local_210 + 1;
  local_198 = 0;
  uStack_194 = 3;
  local_190 = 5;
  *(ulonglong *)(local_218.Data + (longlong)(int)local_210 * 0xc) = CONCAT44(uStack_1a0,local_1a4);
  *(undefined4 *)(local_218.Data + (longlong)(int)local_210 * 0xc + 8) = local_19c;
  local_210._0_4_ = iVar13;
  if (((local_218.Data <= (FScriptContainerElement *)&local_198) &&
      ((FScriptContainerElement *)&local_198 < local_218.Data + (longlong)local_210._4_4_ * 0xc)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_210 == local_210._4_4_) {
    local_210._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_218,(int *)((longlong)&local_210 + 4));
  }
  iVar13 = (int)local_210 + 1;
  local_18c = 5;
  uStack_188 = 3;
  local_184 = 6;
  *(ulonglong *)(local_218.Data + (longlong)(int)local_210 * 0xc) = CONCAT44(uStack_194,local_198);
  *(undefined4 *)(local_218.Data + (longlong)(int)local_210 * 0xc + 8) = local_190;
  local_210._0_4_ = iVar13;
  if (((local_218.Data <= (FScriptContainerElement *)&local_18c) &&
      ((FScriptContainerElement *)&local_18c < local_218.Data + (longlong)local_210._4_4_ * 0xc)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_210 == local_210._4_4_) {
    local_210._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_218,(int *)((longlong)&local_210 + 4));
  }
  iVar13 = (int)local_210 + 1;
  local_180 = 3;
  uStack_17c = 2;
  local_178 = 6;
  *(ulonglong *)(local_218.Data + (longlong)(int)local_210 * 0xc) = CONCAT44(uStack_188,local_18c);
  *(undefined4 *)(local_218.Data + (longlong)(int)local_210 * 0xc + 8) = local_184;
  local_210._0_4_ = iVar13;
  if (((local_218.Data <= (FScriptContainerElement *)&local_180) &&
      ((FScriptContainerElement *)&local_180 < local_218.Data + (longlong)local_210._4_4_ * 0xc)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_210 == local_210._4_4_) {
    local_210._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_218,(int *)((longlong)&local_210 + 4));
  }
  iVar13 = (int)local_210 + 1;
  local_174 = 2;
  uStack_170 = 7;
  local_16c = 6;
  *(ulonglong *)(local_218.Data + (longlong)(int)local_210 * 0xc) = CONCAT44(uStack_17c,local_180);
  *(undefined4 *)(local_218.Data + (longlong)(int)local_210 * 0xc + 8) = local_178;
  local_210._0_4_ = iVar13;
  if (((local_218.Data <= (FScriptContainerElement *)&local_174) &&
      ((FScriptContainerElement *)&local_174 < local_218.Data + (longlong)local_210._4_4_ * 0xc)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FAnimPhysShape *)(*pcVar7)();
    return pFVar14;
  }
  if ((int)local_210 == local_210._4_4_) {
    local_210._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_218,(int *)((longlong)&local_210 + 4));
  }
  FVar11.Data = local_208.Data;
  lVar15 = (longlong)(int)local_210;
  local_210 = CONCAT44(local_210._4_4_,(int)local_210 + 1);
  *(ulonglong *)(local_218.Data + lVar15 * 0xc) = CONCAT44(uStack_170,local_174);
  *(undefined4 *)(local_218.Data + lVar15 * 0xc + 8) = local_16c;
  piVar2 = &(__return_storage_ptr__->Vertices).ArrayMax;
  lVar15 = (longlong)(int)local_200;
  (__return_storage_ptr__->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Vertices).ArrayNum = (int)local_200;
  if ((int)local_200 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_200,0,(ForAnyElementType *)__return_storage_ptr__,(int)local_200,
               piVar2);
    memcpy((__return_storage_ptr__->Vertices).AllocatorInstance.Data,FVar11.Data,lVar15 * 0x18);
  }
  FVar11.Data = local_218.Data;
  lVar15 = (longlong)(int)local_210;
  pTVar3 = &__return_storage_ptr__->Triangles;
  piVar2 = &(__return_storage_ptr__->Triangles).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Triangles).ArrayNum = (int)local_210;
  if ((int)local_210 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,(int)local_210,0,&pTVar3->AllocatorInstance,(int)local_210,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,FVar11.Data,lVar15 * 0xc);
  }
  fVar17 = FAnimPhys::CalculateVolume(&__return_storage_ptr__->Vertices,pTVar3);
  __return_storage_ptr__->Volume = fVar17;
  pTVar16 = FAnimPhys::CalculateCenterOfMass(local_a8,&__return_storage_ptr__->Vertices,pTVar3);
  dVar4 = (pTVar16->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->CenterOfMass).field0_0x0._s_0.X = (pTVar16->field0_0x0)._s_0.X;
  (__return_storage_ptr__->CenterOfMass).field0_0x0._s_0.Y = dVar4;
  (__return_storage_ptr__->CenterOfMass).field0_0x0._s_0.Z = (pTVar16->field0_0x0)._s_0.Z;
  if (local_218.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data);
  }
  if (local_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data);
  }
  return __return_storage_ptr__;
}

// TransformVerts @ 1474fc600

void __thiscall FAnimPhysShape::TransformVerts(FAnimPhysShape *this,TTransform<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined1 auVar2 [16];
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 local_res8 [8];
  
  iVar3 = (this->Vertices).ArrayNum;
  pFVar10 = (this->Vertices).AllocatorInstance.Data;
  pFVar1 = pFVar10 + (longlong)iVar3 * 0x18;
  while( true ) {
    if ((this->Vertices).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    auVar2 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
    dVar14 = auVar2._0_8_;
    auVar11 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    dVar5 = *(double *)&pFVar10->field_0x0 * (param_1->Scale3D).XY.m128d_f64[0];
    dVar6 = *(double *)(pFVar10 + 8) * (param_1->Scale3D).XY.m128d_f64[1];
    uVar20 = (undefined4)((ulonglong)dVar6 >> 0x20);
    dVar7 = *(double *)&pFVar10[0x10].field_0x0 * (param_1->Scale3D).ZW.m128d_f64[0];
    dVar8 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
    auVar13 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    auVar21._8_4_ = SUB84(dVar6,0);
    auVar21._0_8_ = dVar5;
    auVar21._12_4_ = uVar20;
    dVar9 = (param_1->Rotation).ZW.m128d_f64[1];
    auVar16 = blendpd(auVar11,auVar2,2);
    auVar22._0_8_ = auVar21._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar5;
    auVar22._8_8_ = dVar7 * auVar11._8_8_ - dVar14 * dVar6;
    auVar17._8_4_ = SUB84(dVar6,0);
    auVar17._0_8_ = dVar5;
    auVar17._12_4_ = uVar20;
    auVar11._8_4_ = SUB84(dVar8,0);
    auVar11._0_8_ = dVar7;
    auVar11._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    auVar11 = blendpd(auVar17,auVar11,2);
    auVar12._0_8_ = auVar11._0_8_ * dVar14 - auVar16._0_8_ * dVar7;
    auVar12._8_8_ = auVar11._8_8_ * auVar2._8_8_ - auVar16._8_8_ * dVar8;
    auVar11 = blendpd(auVar22,auVar12,2);
    dVar8 = auVar22._8_8_ + auVar22._8_8_;
    dVar4 = auVar12._0_8_ + auVar12._0_8_;
    uVar20 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar23._0_8_ = auVar11._0_8_ + auVar11._0_8_;
    auVar23._8_8_ = auVar11._8_8_ + auVar11._8_8_;
    auVar18._8_4_ = SUB84(dVar4,0);
    auVar18._0_8_ = dVar8;
    auVar18._12_4_ = uVar20;
    auVar16._8_4_ = SUB84(dVar4,0);
    auVar16._0_8_ = dVar8;
    auVar16._12_4_ = uVar20;
    auVar11 = blendpd(auVar16,auVar23,2);
    auVar19._0_8_ = auVar18._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar8;
    auVar19._8_8_ = auVar23._0_8_ * auVar13._8_8_ - dVar14 * dVar4;
    auVar17 = blendpd(auVar13,auVar2,2);
    auVar13._8_4_ = SUB84(auVar19._8_8_,0);
    auVar13._0_8_ = auVar19._0_8_;
    auVar13._12_4_ = (int)((ulonglong)auVar19._8_8_ >> 0x20);
    auVar15._0_8_ = auVar11._0_8_ * dVar14 - auVar17._0_8_ * auVar23._0_8_;
    auVar15._8_8_ = auVar11._8_8_ * auVar2._8_8_ - auVar17._8_8_ * auVar23._8_8_;
    auVar11 = blendpd(auVar19,auVar15,2);
    dVar4 = dVar4 * dVar9 + dVar6 + auVar15._0_8_;
    auVar2._8_4_ = SUB84(dVar4,0);
    auVar2._0_8_ = dVar8 * dVar9 + dVar5 + auVar13._8_8_;
    auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])pFVar10 = auVar2;
    *(double *)&pFVar10[0x10].field_0x0 = auVar23._0_8_ * dVar9 + dVar7 + auVar11._0_8_;
    pFVar10 = pFVar10 + 0x18;
  }
  return;
}

