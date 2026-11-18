// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// FPBDJointCombinedConstraints @ 143c44470

FPBDJointCombinedConstraints * __thiscall
Chaos::FPBDJointCombinedConstraints::FPBDJointCombinedConstraints
          (FPBDJointCombinedConstraints *this)

{
  FPBDJointConstraints::FPBDJointConstraints(&this->LinearConstraints);
  FPBDJointConstraints::FPBDJointConstraints(&this->NonLinearConstraints);
  (this->LinearConstraints).bUseLinearSolver = true;
  (this->NonLinearConstraints).bUseLinearSolver = false;
  return this;
}

// ConvertLinearConstraintToNonLinear @ 143c61fc0

void __thiscall
Chaos::FPBDJointCombinedConstraints::ConvertLinearConstraintToNonLinear
          (FPBDJointCombinedConstraints *this,int param_1)

{
  int *piVar1;
  TArray<Chaos::FPBDJointConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Chaos::TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<Chaos::FPBDJointState,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<Chaos::FPBDJointState,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<Chaos::FPBDJointSettings,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Chaos::FPBDJointSettings,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<Chaos::FPBDJointConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  
  lVar20 = (longlong)param_1;
  if ((param_1 < 0) || ((this->LinearConstraints).ConstraintParticles.ArrayNum <= param_1)) {
    local_res10[0] = 0;
    bVar12 = `Chaos::FPBDJointCombinedConstraints::ConvertLinearConstraintToNonLinear'::__l3::
             <lambda_1>::operator()(local_res10);
    if (!bVar12) {
      return;
    }
  }
  local_res18 = (this->NonLinearConstraints).Handles.ArrayNum;
  uVar13 = ~param_1;
  uVar21 = uVar13 >> 0x1f;
  pTVar2 = &(this->NonLinearConstraints).Handles;
  (this->NonLinearConstraints).bJointsDirty = true;
  uVar14 = 0;
  if (param_1 < (this->LinearConstraints).Handles.ArrayNum) {
    uVar14 = uVar21;
  }
  local_res20 = uVar21;
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar22 = (pTVar2->AllocatorInstance).Data;
  pFVar9 = (this->LinearConstraints).Handles.AllocatorInstance.Data + lVar20 * 8;
  if (((pFVar22 <= pFVar9) &&
      (pFVar9 < pFVar22 + (longlong)(this->NonLinearConstraints).Handles.ArrayMax * 8)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar15 = (this->NonLinearConstraints).Handles.ArrayNum;
  piVar1 = &(this->NonLinearConstraints).Handles.ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->NonLinearConstraints).Handles.ArrayNum = iVar15 + 1;
  pTVar3 = &(this->NonLinearConstraints).ConstraintParticles;
  *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 8) = *(undefined8 *)pFVar9;
  uVar14 = 0;
  if (param_1 < (this->LinearConstraints).ConstraintParticles.ArrayNum) {
    uVar14 = uVar21;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar22 = (this->LinearConstraints).ConstraintParticles.AllocatorInstance.Data + lVar20 * 0x10;
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar9 <= pFVar22) &&
      (pFVar22 < pFVar9 + (longlong)(this->NonLinearConstraints).ConstraintParticles.ArrayMax * 0x10
      )) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar15 = (this->NonLinearConstraints).ConstraintParticles.ArrayNum;
  piVar1 = &(this->NonLinearConstraints).ConstraintParticles.ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->NonLinearConstraints).ConstraintParticles.ArrayNum = iVar15 + 1;
  pTVar4 = &(this->LinearConstraints).ConstraintStates;
  uVar11 = *(undefined8 *)(pFVar22 + 8);
  pTVar5 = &(this->NonLinearConstraints).ConstraintStates;
  pFVar9 = (pTVar3->AllocatorInstance).Data + (longlong)iVar15 * 0x10;
  *(undefined8 *)pFVar9 = *(undefined8 *)pFVar22;
  *(undefined8 *)(pFVar9 + 8) = uVar11;
  uVar14 = 0;
  if (param_1 < (this->LinearConstraints).ConstraintStates.ArrayNum) {
    uVar14 = local_res20;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar22 = (pTVar4->AllocatorInstance).Data + lVar20 * 0x58;
  pFVar9 = (pTVar5->AllocatorInstance).Data;
  if (((pFVar9 <= pFVar22) &&
      (pFVar22 < pFVar9 + (longlong)(this->NonLinearConstraints).ConstraintStates.ArrayMax * 0x58))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar15 = (this->NonLinearConstraints).ConstraintStates.ArrayNum;
  piVar1 = &(this->NonLinearConstraints).ConstraintStates.ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x858,&pTVar5->AllocatorInstance,piVar1);
  }
  (this->NonLinearConstraints).ConstraintStates.ArrayNum = iVar15 + 1;
  pTVar6 = &(this->NonLinearConstraints).ConstraintSettings;
  uVar11 = *(undefined8 *)(pFVar22 + 8);
  lVar17 = (longlong)iVar15 * 0x58;
  pFVar9 = (pTVar5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + lVar17) = *(undefined8 *)pFVar22;
  *(undefined8 *)(pFVar9 + lVar17 + 8) = uVar11;
  uVar11 = *(undefined8 *)(pFVar22 + 0x18);
  *(undefined8 *)(pFVar9 + lVar17 + 0x10) = *(undefined8 *)(pFVar22 + 0x10);
  *(undefined8 *)(pFVar9 + lVar17 + 0x10 + 8) = uVar11;
  uVar11 = *(undefined8 *)(pFVar22 + 0x28);
  *(undefined8 *)(pFVar9 + lVar17 + 0x20) = *(undefined8 *)(pFVar22 + 0x20);
  *(undefined8 *)(pFVar9 + lVar17 + 0x20 + 8) = uVar11;
  uVar11 = *(undefined8 *)(pFVar22 + 0x38);
  *(undefined8 *)(pFVar9 + lVar17 + 0x30) = *(undefined8 *)(pFVar22 + 0x30);
  *(undefined8 *)(pFVar9 + lVar17 + 0x30 + 8) = uVar11;
  uVar11 = *(undefined8 *)(pFVar22 + 0x48);
  *(undefined8 *)(pFVar9 + lVar17 + 0x40) = *(undefined8 *)(pFVar22 + 0x40);
  *(undefined8 *)(pFVar9 + lVar17 + 0x40 + 8) = uVar11;
  pTVar7 = &(this->LinearConstraints).ConstraintSettings;
  *(undefined8 *)(pFVar9 + lVar17 + 0x50) = *(undefined8 *)(pFVar22 + 0x50);
  uVar14 = 0;
  if (param_1 < (this->LinearConstraints).ConstraintSettings.ArrayNum) {
    uVar14 = local_res20;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (pTVar6->AllocatorInstance).Data;
  pFVar22 = (pTVar7->AllocatorInstance).Data + lVar20 * 800;
  if (((pFVar9 <= pFVar22) &&
      (pFVar22 < pFVar9 + (longlong)(this->NonLinearConstraints).ConstraintSettings.ArrayMax * 800))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar15 = (this->NonLinearConstraints).ConstraintSettings.ArrayNum;
  piVar1 = &(this->NonLinearConstraints).ConstraintSettings.ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (800,0x10,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->NonLinearConstraints).ConstraintSettings.ArrayNum = iVar15 + 1;
  lVar17 = 6;
  pFVar9 = (pTVar6->AllocatorInstance).Data + (longlong)iVar15 * 800;
  do {
    pFVar19 = pFVar22;
    pFVar18 = pFVar9;
    uVar11 = *(undefined8 *)(pFVar19 + 8);
    *(undefined8 *)pFVar18 = *(undefined8 *)pFVar19;
    *(undefined8 *)(pFVar18 + 8) = uVar11;
    uVar11 = *(undefined8 *)(pFVar19 + 0x18);
    *(undefined8 *)(pFVar18 + 0x10) = *(undefined8 *)(pFVar19 + 0x10);
    *(undefined8 *)(pFVar18 + 0x18) = uVar11;
    uVar11 = *(undefined8 *)(pFVar19 + 0x28);
    *(undefined8 *)(pFVar18 + 0x20) = *(undefined8 *)(pFVar19 + 0x20);
    *(undefined8 *)(pFVar18 + 0x28) = uVar11;
    uVar11 = *(undefined8 *)(pFVar19 + 0x38);
    *(undefined8 *)(pFVar18 + 0x30) = *(undefined8 *)(pFVar19 + 0x30);
    *(undefined8 *)(pFVar18 + 0x38) = uVar11;
    uVar11 = *(undefined8 *)(pFVar19 + 0x48);
    *(undefined8 *)(pFVar18 + 0x40) = *(undefined8 *)(pFVar19 + 0x40);
    *(undefined8 *)(pFVar18 + 0x48) = uVar11;
    uVar11 = *(undefined8 *)(pFVar19 + 0x58);
    *(undefined8 *)(pFVar18 + 0x50) = *(undefined8 *)(pFVar19 + 0x50);
    *(undefined8 *)(pFVar18 + 0x58) = uVar11;
    uVar11 = *(undefined8 *)(pFVar19 + 0x68);
    *(undefined8 *)(pFVar18 + 0x60) = *(undefined8 *)(pFVar19 + 0x60);
    *(undefined8 *)(pFVar18 + 0x68) = uVar11;
    uVar11 = *(undefined8 *)(pFVar19 + 0x78);
    *(undefined8 *)(pFVar18 + 0x70) = *(undefined8 *)(pFVar19 + 0x70);
    *(undefined8 *)(pFVar18 + 0x78) = uVar11;
    lVar17 = lVar17 + -1;
    pFVar9 = pFVar18 + 0x80;
    pFVar22 = pFVar19 + 0x80;
  } while (lVar17 != 0);
  uVar11 = *(undefined8 *)(pFVar19 + 0x88);
  *(undefined8 *)(pFVar18 + 0x80) = *(undefined8 *)(pFVar19 + 0x80);
  *(undefined8 *)(pFVar18 + 0x88) = uVar11;
  uVar11 = *(undefined8 *)(pFVar19 + 0x98);
  *(undefined8 *)(pFVar18 + 0x90) = *(undefined8 *)(pFVar19 + 0x90);
  *(undefined8 *)(pFVar18 + 0x98) = uVar11;
  uVar21 = ~local_res18 >> 0x1f;
  uVar14 = 0;
  if ((int)local_res18 < (this->NonLinearConstraints).ConstraintSettings.ArrayNum) {
    uVar14 = uVar21;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar17 = (longlong)(int)local_res18;
  (pTVar6->AllocatorInstance).Data[lVar17 * 800 + 0xfc] = (FScriptContainerElement)0x0;
  uVar14 = 0;
  if ((int)local_res18 < (this->NonLinearConstraints).Handles.ArrayNum) {
    uVar14 = uVar21;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(uint *)(*(longlong *)((pTVar2->AllocatorInstance).Data + lVar17 * 8) + 0x18) = local_res18;
  uVar14 = 0;
  if ((int)local_res18 < (this->NonLinearConstraints).Handles.ArrayNum) {
    uVar14 = uVar21;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar14 = local_res20;
  pTVar8 = &(this->LinearConstraints).Handles;
  *(FPBDJointConstraints **)(*(longlong *)((pTVar2->AllocatorInstance).Data + lVar17 * 8) + 8) =
       &this->NonLinearConstraints;
  uVar21 = 0;
  if (param_1 < (this->LinearConstraints).Handles.ArrayNum) {
    uVar21 = local_res20;
  }
  if ((uVar21 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar15 = (this->LinearConstraints).Handles.ArrayNum;
  iVar16 = uVar13 + iVar15;
  pFVar9 = (pTVar8->AllocatorInstance).Data;
  if (1 < iVar16) {
    iVar16 = 1;
  }
  if (iVar16 != 0) {
    memmove(pFVar9 + lVar20 * 8,pFVar9 + (longlong)(iVar15 - iVar16) * 8,(longlong)iVar16 << 3);
  }
  piVar1 = &(this->LinearConstraints).Handles.ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&pTVar8->AllocatorInstance,(this->LinearConstraints).Handles.ArrayNum,
             &(this->LinearConstraints).Handles.ArrayMax);
  pTVar3 = &(this->LinearConstraints).ConstraintParticles;
  uVar21 = 0;
  if (param_1 < (this->LinearConstraints).ConstraintParticles.ArrayNum) {
    uVar21 = uVar14;
  }
  if ((uVar21 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar15 = (this->LinearConstraints).ConstraintParticles.ArrayNum;
  iVar16 = uVar13 + iVar15;
  pFVar9 = (pTVar3->AllocatorInstance).Data;
  if (1 < iVar16) {
    iVar16 = 1;
  }
  if (iVar16 != 0) {
    memmove(pFVar9 + lVar20 * 0x10,pFVar9 + (longlong)(iVar15 - iVar16) * 0x10,(longlong)iVar16 << 4
           );
  }
  piVar1 = &(this->LinearConstraints).ConstraintParticles.ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&pTVar3->AllocatorInstance,
             (this->LinearConstraints).ConstraintParticles.ArrayNum,
             &(this->LinearConstraints).ConstraintParticles.ArrayMax);
  uVar21 = 0;
  if (param_1 < (this->LinearConstraints).ConstraintStates.ArrayNum) {
    uVar21 = uVar14;
  }
  if ((uVar21 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar16 = (this->LinearConstraints).ConstraintStates.ArrayNum;
  pFVar9 = (pTVar4->AllocatorInstance).Data;
  iVar15 = uVar13 + iVar16;
  if (1 < iVar15) {
    iVar15 = 1;
  }
  if (iVar15 != 0) {
    memmove(pFVar9 + lVar20 * 0x58,pFVar9 + (longlong)(iVar16 - iVar15) * 0x58,
            (longlong)iVar15 * 0x58);
  }
  piVar1 = &(this->LinearConstraints).ConstraintStates.ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x58,8,&pTVar4->AllocatorInstance,(this->LinearConstraints).ConstraintStates.ArrayNum,
             &(this->LinearConstraints).ConstraintStates.ArrayMax);
  uVar21 = 0;
  if (param_1 < (this->LinearConstraints).ConstraintSettings.ArrayNum) {
    uVar21 = uVar14;
  }
  if ((uVar21 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar16 = (this->LinearConstraints).ConstraintSettings.ArrayNum;
  pFVar9 = (pTVar7->AllocatorInstance).Data;
  iVar15 = uVar13 + iVar16;
  if (1 < iVar15) {
    iVar15 = 1;
  }
  if (iVar15 != 0) {
    memmove(pFVar9 + lVar20 * 800,pFVar9 + (longlong)(iVar16 - iVar15) * 800,(longlong)iVar15 * 800)
    ;
  }
  piVar1 = &(this->LinearConstraints).ConstraintSettings.ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (800,0x10,&pTVar7->AllocatorInstance,
             (this->LinearConstraints).ConstraintSettings.ArrayNum,
             &(this->LinearConstraints).ConstraintSettings.ArrayMax);
  (this->LinearConstraints).bJointsDirty = true;
  return;
}

// ConvertNonLinearConstraintToLinear @ 143c62890

void __thiscall
Chaos::FPBDJointCombinedConstraints::ConvertNonLinearConstraintToLinear
          (FPBDJointCombinedConstraints *this,int param_1)

{
  int *piVar1;
  TArray<Chaos::FPBDJointConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Chaos::TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<Chaos::FPBDJointState,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<Chaos::FPBDJointSettings,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<Chaos::FPBDJointSettings,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Chaos::FPBDJointConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  
  lVar20 = (longlong)param_1;
  if ((param_1 < 0) || ((this->NonLinearConstraints).ConstraintParticles.ArrayNum <= param_1)) {
    local_res10[0] = 0;
    bVar12 = `Chaos::FPBDJointCombinedConstraints::ConvertNonLinearConstraintToLinear'::__l3::
             <lambda_1>::operator()(local_res10);
    if (!bVar12) {
      return;
    }
  }
  uVar13 = ~param_1;
  pTVar2 = &(this->LinearConstraints).Handles;
  local_res18 = (this->LinearConstraints).Handles.ArrayNum;
  uVar22 = uVar13 >> 0x1f;
  (this->LinearConstraints).bJointsDirty = true;
  uVar14 = 0;
  if (param_1 < (this->NonLinearConstraints).Handles.ArrayNum) {
    uVar14 = uVar22;
  }
  local_res20 = uVar22;
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar21 = (pTVar2->AllocatorInstance).Data;
  pFVar8 = (this->NonLinearConstraints).Handles.AllocatorInstance.Data + lVar20 * 8;
  if (((pFVar21 <= pFVar8) &&
      (pFVar8 < pFVar21 + (longlong)(this->LinearConstraints).Handles.ArrayMax * 8)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar15 = (this->LinearConstraints).Handles.ArrayNum;
  piVar1 = &(this->LinearConstraints).Handles.ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->LinearConstraints).Handles.ArrayNum = iVar15 + 1;
  pTVar3 = &(this->LinearConstraints).ConstraintParticles;
  *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 8) = *(undefined8 *)pFVar8;
  uVar14 = 0;
  if (param_1 < (this->NonLinearConstraints).ConstraintParticles.ArrayNum) {
    uVar14 = uVar22;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar21 = (this->NonLinearConstraints).ConstraintParticles.AllocatorInstance.Data + lVar20 * 0x10;
  pFVar8 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar8 <= pFVar21) &&
      (pFVar21 < pFVar8 + (longlong)(this->LinearConstraints).ConstraintParticles.ArrayMax * 0x10))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar15 = (this->LinearConstraints).ConstraintParticles.ArrayNum;
  piVar1 = &(this->LinearConstraints).ConstraintParticles.ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->LinearConstraints).ConstraintParticles.ArrayNum = iVar15 + 1;
  uVar11 = *(undefined8 *)(pFVar21 + 8);
  pTVar4 = &(this->LinearConstraints).ConstraintStates;
  pFVar8 = (pTVar3->AllocatorInstance).Data + (longlong)iVar15 * 0x10;
  *(undefined8 *)pFVar8 = *(undefined8 *)pFVar21;
  *(undefined8 *)(pFVar8 + 8) = uVar11;
  uVar14 = 0;
  if (param_1 < (this->NonLinearConstraints).ConstraintStates.ArrayNum) {
    uVar14 = uVar22;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar21 = (this->NonLinearConstraints).ConstraintStates.AllocatorInstance.Data + lVar20 * 0x58;
  pFVar8 = (pTVar4->AllocatorInstance).Data;
  if (((pFVar8 <= pFVar21) &&
      (pFVar21 < pFVar8 + (longlong)(this->LinearConstraints).ConstraintStates.ArrayMax * 0x58)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar15 = (this->LinearConstraints).ConstraintStates.ArrayNum;
  piVar1 = &(this->LinearConstraints).ConstraintStates.ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x858,&pTVar4->AllocatorInstance,piVar1);
  }
  (this->LinearConstraints).ConstraintStates.ArrayNum = iVar15 + 1;
  pTVar5 = &(this->LinearConstraints).ConstraintSettings;
  uVar11 = *(undefined8 *)(pFVar21 + 8);
  lVar17 = (longlong)iVar15 * 0x58;
  pFVar8 = (pTVar4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar8 + lVar17) = *(undefined8 *)pFVar21;
  *(undefined8 *)(pFVar8 + lVar17 + 8) = uVar11;
  uVar11 = *(undefined8 *)(pFVar21 + 0x18);
  *(undefined8 *)(pFVar8 + lVar17 + 0x10) = *(undefined8 *)(pFVar21 + 0x10);
  *(undefined8 *)(pFVar8 + lVar17 + 0x10 + 8) = uVar11;
  uVar11 = *(undefined8 *)(pFVar21 + 0x28);
  *(undefined8 *)(pFVar8 + lVar17 + 0x20) = *(undefined8 *)(pFVar21 + 0x20);
  *(undefined8 *)(pFVar8 + lVar17 + 0x20 + 8) = uVar11;
  uVar11 = *(undefined8 *)(pFVar21 + 0x38);
  *(undefined8 *)(pFVar8 + lVar17 + 0x30) = *(undefined8 *)(pFVar21 + 0x30);
  *(undefined8 *)(pFVar8 + lVar17 + 0x30 + 8) = uVar11;
  uVar11 = *(undefined8 *)(pFVar21 + 0x48);
  *(undefined8 *)(pFVar8 + lVar17 + 0x40) = *(undefined8 *)(pFVar21 + 0x40);
  *(undefined8 *)(pFVar8 + lVar17 + 0x40 + 8) = uVar11;
  pTVar6 = &(this->NonLinearConstraints).ConstraintSettings;
  *(undefined8 *)(pFVar8 + lVar17 + 0x50) = *(undefined8 *)(pFVar21 + 0x50);
  uVar14 = 0;
  if (param_1 < (this->NonLinearConstraints).ConstraintSettings.ArrayNum) {
    uVar14 = local_res20;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar8 = (pTVar5->AllocatorInstance).Data;
  pFVar21 = (pTVar6->AllocatorInstance).Data + lVar20 * 800;
  if (((pFVar8 <= pFVar21) &&
      (pFVar21 < pFVar8 + (longlong)(this->LinearConstraints).ConstraintSettings.ArrayMax * 800)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar15 = (this->LinearConstraints).ConstraintSettings.ArrayNum;
  piVar1 = &(this->LinearConstraints).ConstraintSettings.ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (800,0x10,&pTVar5->AllocatorInstance,piVar1);
  }
  (this->LinearConstraints).ConstraintSettings.ArrayNum = iVar15 + 1;
  lVar17 = 6;
  pFVar8 = (pTVar5->AllocatorInstance).Data + (longlong)iVar15 * 800;
  do {
    pFVar19 = pFVar21;
    pFVar18 = pFVar8;
    uVar11 = *(undefined8 *)(pFVar19 + 8);
    *(undefined8 *)pFVar18 = *(undefined8 *)pFVar19;
    *(undefined8 *)(pFVar18 + 8) = uVar11;
    uVar11 = *(undefined8 *)(pFVar19 + 0x18);
    *(undefined8 *)(pFVar18 + 0x10) = *(undefined8 *)(pFVar19 + 0x10);
    *(undefined8 *)(pFVar18 + 0x18) = uVar11;
    uVar11 = *(undefined8 *)(pFVar19 + 0x28);
    *(undefined8 *)(pFVar18 + 0x20) = *(undefined8 *)(pFVar19 + 0x20);
    *(undefined8 *)(pFVar18 + 0x28) = uVar11;
    uVar11 = *(undefined8 *)(pFVar19 + 0x38);
    *(undefined8 *)(pFVar18 + 0x30) = *(undefined8 *)(pFVar19 + 0x30);
    *(undefined8 *)(pFVar18 + 0x38) = uVar11;
    uVar11 = *(undefined8 *)(pFVar19 + 0x48);
    *(undefined8 *)(pFVar18 + 0x40) = *(undefined8 *)(pFVar19 + 0x40);
    *(undefined8 *)(pFVar18 + 0x48) = uVar11;
    uVar11 = *(undefined8 *)(pFVar19 + 0x58);
    *(undefined8 *)(pFVar18 + 0x50) = *(undefined8 *)(pFVar19 + 0x50);
    *(undefined8 *)(pFVar18 + 0x58) = uVar11;
    uVar11 = *(undefined8 *)(pFVar19 + 0x68);
    *(undefined8 *)(pFVar18 + 0x60) = *(undefined8 *)(pFVar19 + 0x60);
    *(undefined8 *)(pFVar18 + 0x68) = uVar11;
    uVar11 = *(undefined8 *)(pFVar19 + 0x78);
    *(undefined8 *)(pFVar18 + 0x70) = *(undefined8 *)(pFVar19 + 0x70);
    *(undefined8 *)(pFVar18 + 0x78) = uVar11;
    lVar17 = lVar17 + -1;
    pFVar8 = pFVar18 + 0x80;
    pFVar21 = pFVar19 + 0x80;
  } while (lVar17 != 0);
  uVar11 = *(undefined8 *)(pFVar19 + 0x88);
  lVar17 = (longlong)(int)local_res18;
  *(undefined8 *)(pFVar18 + 0x80) = *(undefined8 *)(pFVar19 + 0x80);
  *(undefined8 *)(pFVar18 + 0x88) = uVar11;
  uVar11 = *(undefined8 *)(pFVar19 + 0x98);
  uVar22 = ~local_res18 >> 0x1f;
  *(undefined8 *)(pFVar18 + 0x90) = *(undefined8 *)(pFVar19 + 0x90);
  *(undefined8 *)(pFVar18 + 0x98) = uVar11;
  uVar14 = 0;
  if ((int)local_res18 < (this->LinearConstraints).ConstraintSettings.ArrayNum) {
    uVar14 = uVar22;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar14 = local_res18;
  (pTVar5->AllocatorInstance).Data[lVar17 * 800 + 0xfc] = (FScriptContainerElement)0x1;
  uVar16 = 0;
  if ((int)local_res18 < (this->LinearConstraints).Handles.ArrayNum) {
    uVar16 = uVar22;
  }
  if ((uVar16 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(uint *)(*(longlong *)((pTVar2->AllocatorInstance).Data + lVar17 * 8) + 0x18) = uVar14;
  uVar16 = 0;
  if ((int)uVar14 < (this->LinearConstraints).Handles.ArrayNum) {
    uVar16 = uVar22;
  }
  if ((uVar16 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar14 = local_res20;
  pTVar7 = &(this->NonLinearConstraints).Handles;
  *(FPBDJointCombinedConstraints **)
   (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar17 * 8) + 8) = this;
  uVar22 = 0;
  if (param_1 < (this->NonLinearConstraints).Handles.ArrayNum) {
    uVar22 = local_res20;
  }
  if ((uVar22 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar9 = (this->NonLinearConstraints).Handles.ArrayNum;
  pFVar8 = (pTVar7->AllocatorInstance).Data;
  iVar15 = iVar9 + uVar13;
  if (1 < iVar15) {
    iVar15 = 1;
  }
  if (iVar15 != 0) {
    memmove(pFVar8 + lVar20 * 8,pFVar8 + (longlong)(iVar9 - iVar15) * 8,(longlong)iVar15 << 3);
  }
  piVar1 = &(this->NonLinearConstraints).Handles.ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&pTVar7->AllocatorInstance,(this->NonLinearConstraints).Handles.ArrayNum,
             &(this->NonLinearConstraints).Handles.ArrayMax);
  pTVar3 = &(this->NonLinearConstraints).ConstraintParticles;
  uVar22 = 0;
  if (param_1 < (this->NonLinearConstraints).ConstraintParticles.ArrayNum) {
    uVar22 = uVar14;
  }
  if ((uVar22 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar9 = (this->NonLinearConstraints).ConstraintParticles.ArrayNum;
  pFVar8 = (pTVar3->AllocatorInstance).Data;
  iVar15 = iVar9 + uVar13;
  if (1 < iVar15) {
    iVar15 = 1;
  }
  if (iVar15 != 0) {
    memmove(pFVar8 + lVar20 * 0x10,pFVar8 + (longlong)(iVar9 - iVar15) * 0x10,(longlong)iVar15 << 4)
    ;
  }
  piVar1 = &(this->NonLinearConstraints).ConstraintParticles.ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&pTVar3->AllocatorInstance,
             (this->NonLinearConstraints).ConstraintParticles.ArrayNum,
             &(this->NonLinearConstraints).ConstraintParticles.ArrayMax);
  pTVar4 = &(this->NonLinearConstraints).ConstraintStates;
  uVar22 = 0;
  if (param_1 < (this->NonLinearConstraints).ConstraintStates.ArrayNum) {
    uVar22 = uVar14;
  }
  if ((uVar22 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar9 = (this->NonLinearConstraints).ConstraintStates.ArrayNum;
  pFVar8 = (pTVar4->AllocatorInstance).Data;
  iVar15 = iVar9 + uVar13;
  if (1 < iVar15) {
    iVar15 = 1;
  }
  if (iVar15 != 0) {
    memmove(pFVar8 + lVar20 * 0x58,pFVar8 + (longlong)(iVar9 - iVar15) * 0x58,
            (longlong)iVar15 * 0x58);
  }
  piVar1 = &(this->NonLinearConstraints).ConstraintStates.ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x58,8,&pTVar4->AllocatorInstance,
             (this->NonLinearConstraints).ConstraintStates.ArrayNum,
             &(this->NonLinearConstraints).ConstraintStates.ArrayMax);
  uVar22 = 0;
  if (param_1 < (this->NonLinearConstraints).ConstraintSettings.ArrayNum) {
    uVar22 = uVar14;
  }
  if ((uVar22 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar9 = (this->NonLinearConstraints).ConstraintSettings.ArrayNum;
  pFVar8 = (pTVar6->AllocatorInstance).Data;
  iVar15 = iVar9 + uVar13;
  if (1 < iVar15) {
    iVar15 = 1;
  }
  if (iVar15 != 0) {
    memmove(pFVar8 + lVar20 * 800,pFVar8 + (longlong)(iVar9 - iVar15) * 800,(longlong)iVar15 * 800);
  }
  piVar1 = &(this->NonLinearConstraints).ConstraintSettings.ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (800,0x10,&pTVar6->AllocatorInstance,
             (this->NonLinearConstraints).ConstraintSettings.ArrayNum,
             &(this->NonLinearConstraints).ConstraintSettings.ArrayMax);
  (this->NonLinearConstraints).bJointsDirty = true;
  return;
}

// MergeLinearConstraintsIntoNonLinearConstraints @ 143c6b900

void __thiscall
Chaos::FPBDJointCombinedConstraints::MergeLinearConstraintsIntoNonLinearConstraints
          (FPBDJointCombinedConstraints *this)

{
  int iVar1;
  
  iVar1 = (this->LinearConstraints).ConstraintParticles.ArrayNum;
  while (0 < iVar1) {
    ConvertLinearConstraintToNonLinear(this,0);
    iVar1 = (this->LinearConstraints).ConstraintParticles.ArrayNum;
  }
  return;
}

// MergeNonLinearConstraintsIntoLinearConstraints @ 143c6b940

void __thiscall
Chaos::FPBDJointCombinedConstraints::MergeNonLinearConstraintsIntoLinearConstraints
          (FPBDJointCombinedConstraints *this)

{
  int iVar1;
  
  iVar1 = (this->NonLinearConstraints).ConstraintParticles.ArrayNum;
  while (0 < iVar1) {
    ConvertNonLinearConstraintToLinear(this,0);
    iVar1 = (this->NonLinearConstraints).ConstraintParticles.ArrayNum;
  }
  return;
}

// operator() @ 1504a6560

bool __thiscall
`Chaos::FPBDJointCombinedConstraints::ConvertLinearConstraintToNonLinear'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2676959549734255264>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2676959549734255264>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a65a0

bool __thiscall
`Chaos::FPBDJointCombinedConstraints::ConvertNonLinearConstraintToLinear'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2676959549734255239>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2676959549734255239>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

