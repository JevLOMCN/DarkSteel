// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 77

// Release @ 143b30510

void __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FProxyBasePairProperty,8,1>::Release
          (TParticlePropertyBuffer<Chaos::FProxyBasePairProperty,8,1> *this,
          FDirtyPropertiesPool *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  uint local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pFVar11 = (this->Buffer).AllocatorInstance.Data;
  iVar5 = (this->Buffer).ArrayNum;
  pFVar3 = pFVar11 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->Buffer).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPropertyInterval,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar3) break;
    local_68[0] = *(uint *)pFVar11;
    lVar10 = (longlong)(int)local_68[0];
    local_60 = 0;
    uStack_58 = 0;
    uVar8 = 0;
    if ((int)local_68[0] < (param_1->JointParticleProxiesPool).Elements.ArrayNum) {
      uVar8 = ~local_68[0] >> 0x1f;
    }
    local_50 = 0;
    uStack_48 = 0;
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar2 = &(param_1->JointParticleProxiesPool).FreeList;
    pFVar4 = (param_1->JointParticleProxiesPool).Elements.AllocatorInstance.Data + lVar10 * 0x10;
    *(undefined8 *)pFVar4 = 0;
    *(undefined8 *)(pFVar4 + 8) = 0;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_68) &&
       ((FScriptContainerElement *)local_68 <
        pFVar4 + (longlong)(param_1->JointParticleProxiesPool).FreeList.ArrayMax * 4)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (param_1->JointParticleProxiesPool).FreeList.ArrayNum;
    piVar1 = &(param_1->JointParticleProxiesPool).FreeList.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar11 = pFVar11 + 8;
    (param_1->JointParticleProxiesPool).FreeList.ArrayNum = iVar9 + 1;
    *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_68[0];
  }
  piVar1 = &(this->Buffer).ArrayMax;
  (this->Buffer).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->Buffer).AllocatorInstance,0,piVar1);
  }
  this->NumValid = 0;
  return;
}

// Release @ 143b30700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::Release
          (TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0> *this,FDirtyPropertiesPool *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  uint local_a8 [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  uVar8 = _UNK_150689648;
  uVar7 = ___xmm_3f800000000000000000000000000000;
  iVar4 = (this->Buffer).ArrayNum;
  pFVar13 = (this->Buffer).AllocatorInstance.Data;
  pFVar3 = pFVar13 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->Buffer).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPropertyInterval,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar13 == pFVar3) break;
    local_a8[0] = *(uint *)pFVar13;
    lVar12 = (longlong)(int)local_a8[0];
    local_78 = 0;
    local_98 = uVar7;
    uStack_90 = uVar8;
    uVar10 = 0;
    if ((int)local_a8[0] < (param_1->KinematicTargetPool).Elements.ArrayNum) {
      uVar10 = ~local_a8[0] >> 0x1f;
    }
    local_88 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar5 = (param_1->KinematicTargetPool).Elements.AllocatorInstance.Data;
    pTVar2 = &(param_1->KinematicTargetPool).FreeList;
    *(undefined8 *)(pFVar5 + lVar12 * 0x30) = uVar7;
    *(undefined8 *)(pFVar5 + lVar12 * 0x30 + 8) = uVar8;
    *(undefined8 *)(pFVar5 + lVar12 * 0x30 + 0x10) = 0;
    *(undefined8 *)(pFVar5 + lVar12 * 0x30 + 0x10 + 8) = 0;
    *(undefined8 *)(pFVar5 + lVar12 * 0x30 + 0x20) = local_78;
    *(ulonglong *)(pFVar5 + lVar12 * 0x30 + 0x20 + 8) = CONCAT44(uStack_6c,uStack_70);
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)local_a8) &&
       ((FScriptContainerElement *)local_a8 <
        pFVar5 + (longlong)(param_1->KinematicTargetPool).FreeList.ArrayMax * 4)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar11 = (param_1->KinematicTargetPool).FreeList.ArrayNum;
    piVar1 = &(param_1->KinematicTargetPool).FreeList.ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar13 = pFVar13 + 8;
    (param_1->KinematicTargetPool).FreeList.ArrayNum = iVar11 + 1;
    *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_a8[0];
  }
  piVar1 = &(this->Buffer).ArrayMax;
  (this->Buffer).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->Buffer).AllocatorInstance,0,piVar1);
  }
  this->NumValid = 0;
  return;
}

// Release @ 143b30960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Release
          (TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1> *this,FDirtyPropertiesPool *param_1
          )

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FPBDJointSettings *pFVar15;
  FPBDJointSettings *pFVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStackY_6e8 [32];
  undefined1 local_698 [8];
  uint local_690 [2];
  undefined8 local_688 [100];
  FPBDJointSettings local_368;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  pFVar21 = (this->Buffer).AllocatorInstance.Data;
  iVar4 = (this->Buffer).ArrayNum;
  pFVar3 = pFVar21 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->Buffer).ArrayNum != iVar4) {
      local_698[0] = 0;
      `TCheckedPointerIterator<Chaos::FPropertyInterval,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_698);
    }
    if (pFVar21 == pFVar3) break;
    local_690[0] = *(uint *)pFVar21;
    pFVar15 = FPBDJointSettings::FPBDJointSettings(&local_368);
    lVar19 = 6;
    puVar11 = local_688;
    do {
      puVar17 = puVar11;
      pFVar16 = pFVar15;
      uVar7 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[0].field_0x8;
      uVar8 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[0].field_0x10;
      uVar9 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[0].field_0x18;
      pFVar15 = (FPBDJointSettings *)&(pFVar16->ConnectorTransforms).V[1].field_0x20;
      *puVar17 = *(undefined8 *)(pFVar16->ConnectorTransforms).V;
      puVar17[1] = uVar7;
      uVar7 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[0].field_0x20;
      uVar10 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[0].field_0x28;
      puVar17[2] = uVar8;
      puVar17[3] = uVar9;
      uVar8 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[0].field_0x30;
      uVar9 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[0].field_0x38;
      puVar17[4] = uVar7;
      puVar17[5] = uVar10;
      uVar7 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[0].field_0x40;
      uVar10 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[0].field_0x48;
      puVar17[6] = uVar8;
      puVar17[7] = uVar9;
      uVar8 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[0].field_0x50;
      uVar9 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[0].field_0x58;
      puVar17[8] = uVar7;
      puVar17[9] = uVar10;
      uVar7 = *(undefined8 *)((pFVar16->ConnectorTransforms).V + 1);
      uVar10 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[1].field_0x8;
      puVar17[10] = uVar8;
      puVar17[0xb] = uVar9;
      uVar8 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[1].field_0x10;
      uVar9 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[1].field_0x18;
      puVar17[0xc] = uVar7;
      puVar17[0xd] = uVar10;
      puVar17[0xe] = uVar8;
      puVar17[0xf] = uVar9;
      lVar19 = lVar19 + -1;
      puVar11 = puVar17 + 0x10;
    } while (lVar19 != 0);
    uVar7 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[1].field_0x28;
    lVar19 = (longlong)(int)local_690[0];
    uVar8 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[1].field_0x30;
    uVar9 = *(undefined8 *)&(pFVar16->ConnectorTransforms).V[1].field_0x38;
    iVar14 = (param_1->JointSettingsPool).Elements.ArrayNum;
    puVar17[0x10] = *(undefined8 *)pFVar15;
    puVar17[0x11] = uVar7;
    puVar17[0x12] = uVar8;
    puVar17[0x13] = uVar9;
    uVar13 = 0;
    if ((int)local_690[0] < iVar14) {
      uVar13 = ~local_690[0] >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar18 = 6;
    puVar11 = local_688;
    pFVar5 = (param_1->JointSettingsPool).Elements.AllocatorInstance.Data + lVar19 * 800;
    do {
      pFVar20 = pFVar5;
      puVar17 = puVar11;
      uVar7 = puVar17[1];
      uVar8 = puVar17[2];
      uVar9 = puVar17[3];
      *(undefined8 *)pFVar20 = *puVar17;
      *(undefined8 *)(pFVar20 + 8) = uVar7;
      uVar7 = puVar17[4];
      uVar10 = puVar17[5];
      *(undefined8 *)(pFVar20 + 0x10) = uVar8;
      *(undefined8 *)(pFVar20 + 0x18) = uVar9;
      uVar8 = puVar17[6];
      uVar9 = puVar17[7];
      *(undefined8 *)(pFVar20 + 0x20) = uVar7;
      *(undefined8 *)(pFVar20 + 0x28) = uVar10;
      uVar7 = puVar17[8];
      uVar10 = puVar17[9];
      *(undefined8 *)(pFVar20 + 0x30) = uVar8;
      *(undefined8 *)(pFVar20 + 0x38) = uVar9;
      uVar8 = puVar17[10];
      uVar9 = puVar17[0xb];
      *(undefined8 *)(pFVar20 + 0x40) = uVar7;
      *(undefined8 *)(pFVar20 + 0x48) = uVar10;
      uVar7 = puVar17[0xc];
      uVar10 = puVar17[0xd];
      *(undefined8 *)(pFVar20 + 0x50) = uVar8;
      *(undefined8 *)(pFVar20 + 0x58) = uVar9;
      uVar8 = puVar17[0xe];
      uVar9 = puVar17[0xf];
      *(undefined8 *)(pFVar20 + 0x60) = uVar7;
      *(undefined8 *)(pFVar20 + 0x68) = uVar10;
      *(undefined8 *)(pFVar20 + 0x70) = uVar8;
      *(undefined8 *)(pFVar20 + 0x78) = uVar9;
      lVar18 = lVar18 + -1;
      puVar11 = puVar17 + 0x10;
      pFVar5 = pFVar20 + 0x80;
    } while (lVar18 != 0);
    uVar7 = puVar17[0x11];
    pTVar2 = &(param_1->JointSettingsPool).FreeList;
    uVar8 = puVar17[0x12];
    uVar9 = puVar17[0x13];
    *(undefined8 *)(pFVar20 + 0x80) = puVar17[0x10];
    *(undefined8 *)(pFVar20 + 0x88) = uVar7;
    *(undefined8 *)(pFVar20 + 0x90) = uVar8;
    *(undefined8 *)(pFVar20 + 0x98) = uVar9;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)local_690) &&
       ((FScriptContainerElement *)local_690 <
        pFVar5 + (longlong)(param_1->JointSettingsPool).FreeList.ArrayMax * 4)) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar14 = (param_1->JointSettingsPool).FreeList.ArrayNum;
    piVar1 = &(param_1->JointSettingsPool).FreeList.ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar21 = pFVar21 + 8;
    (param_1->JointSettingsPool).FreeList.ArrayNum = iVar14 + 1;
    *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_690[0];
  }
  piVar1 = &(this->Buffer).ArrayMax;
  (this->Buffer).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->Buffer).AllocatorInstance,0,piVar1);
  }
  this->NumValid = 0;
  return;
}

// Release @ 143b30c50

void __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Release
          (TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1> *this,
          FDirtyPropertiesPool *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  uint local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  
  pFVar10 = (this->Buffer).AllocatorInstance.Data;
  iVar3 = (this->Buffer).ArrayNum;
  pFVar2 = pFVar10 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Buffer).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::FPropertyInterval,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar10 == pFVar2) {
      (this->Buffer).ArrayNum = 0;
      if ((this->Buffer).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->Buffer).AllocatorInstance,0,&(this->Buffer).ArrayMax);
      }
      this->NumValid = 0;
      return;
    }
    local_a8[0] = *(uint *)pFVar10;
    lVar9 = (longlong)(int)local_a8[0];
    local_a0 = 0;
    uStack_98 = 0;
    uVar7 = 0;
    if ((int)local_a8[0] < (param_1->DynamicMiscPool).Elements.ArrayNum) {
      uVar7 = ~local_a8[0] >> 0x1f;
    }
    uStack_88 = 0;
    local_90 = 0;
    uStack_8c = 0x3f800000;
    local_80 = 0;
    uStack_7c = 0xffff0000;
    local_78 = 0xff;
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pFVar4 = (param_1->DynamicMiscPool).Elements.AllocatorInstance.Data;
    lVar9 = lVar9 * 0x2c;
    *(undefined8 *)(pFVar4 + lVar9) = 0;
    *(undefined8 *)(pFVar4 + lVar9 + 8) = 0;
    *(undefined8 *)(pFVar4 + lVar9 + 0x10) = 0x3f80000000000000;
    *(undefined8 *)(pFVar4 + lVar9 + 0x10 + 8) = 0;
    *(undefined8 *)(pFVar4 + lVar9 + 0x20) = 0xffff000000000000;
    *(undefined4 *)(pFVar4 + lVar9 + 0x28) = 0xff;
    pFVar4 = (param_1->DynamicMiscPool).FreeList.AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_a8) &&
        ((FScriptContainerElement *)local_a8 <
         pFVar4 + (longlong)(param_1->DynamicMiscPool).FreeList.ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (param_1->DynamicMiscPool).FreeList.ArrayNum;
    piVar1 = &(param_1->DynamicMiscPool).FreeList.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(param_1->DynamicMiscPool).FreeList.AllocatorInstance,piVar1);
    }
    pFVar10 = pFVar10 + 8;
    (param_1->DynamicMiscPool).FreeList.ArrayNum = iVar8 + 1;
    *(uint *)((param_1->DynamicMiscPool).FreeList.AllocatorInstance.Data + (longlong)iVar8 * 4) =
         local_a8[0];
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Release @ 143b30ed0

void __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0>::Release
          (TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0> *this,
          FDirtyPropertiesPool *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  uint local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  
  pFVar10 = (this->Buffer).AllocatorInstance.Data;
  iVar3 = (this->Buffer).ArrayNum;
  pFVar2 = pFVar10 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Buffer).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::FPropertyInterval,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar10 == pFVar2) {
      (this->Buffer).ArrayNum = 0;
      if ((this->Buffer).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->Buffer).AllocatorInstance,0,&(this->Buffer).ArrayMax);
      }
      this->NumValid = 0;
      return;
    }
    local_a8[0] = *(uint *)pFVar10;
    lVar9 = (longlong)(int)local_a8[0];
    local_a0 = 0;
    uStack_98 = 0;
    uVar7 = 0;
    if ((int)local_a8[0] < (param_1->DynamicMiscPool).Elements.ArrayNum) {
      uVar7 = ~local_a8[0] >> 0x1f;
    }
    uStack_88 = 0;
    local_90 = 0;
    uStack_8c = 0x3f800000;
    local_80 = 0;
    uStack_7c = 0xffff0000;
    local_78 = 0xff;
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pFVar4 = (param_1->DynamicMiscPool).Elements.AllocatorInstance.Data;
    lVar9 = lVar9 * 0x2c;
    *(undefined8 *)(pFVar4 + lVar9) = 0;
    *(undefined8 *)(pFVar4 + lVar9 + 8) = 0;
    *(undefined8 *)(pFVar4 + lVar9 + 0x10) = 0x3f80000000000000;
    *(undefined8 *)(pFVar4 + lVar9 + 0x10 + 8) = 0;
    *(undefined8 *)(pFVar4 + lVar9 + 0x20) = 0xffff000000000000;
    *(undefined4 *)(pFVar4 + lVar9 + 0x28) = 0xff;
    pFVar4 = (param_1->DynamicMiscPool).FreeList.AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_a8) &&
        ((FScriptContainerElement *)local_a8 <
         pFVar4 + (longlong)(param_1->DynamicMiscPool).FreeList.ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (param_1->DynamicMiscPool).FreeList.ArrayNum;
    piVar1 = &(param_1->DynamicMiscPool).FreeList.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(param_1->DynamicMiscPool).FreeList.AllocatorInstance,piVar1);
    }
    pFVar10 = pFVar10 + 8;
    (param_1->DynamicMiscPool).FreeList.ArrayNum = iVar8 + 1;
    *(uint *)((param_1->DynamicMiscPool).FreeList.AllocatorInstance.Data + (longlong)iVar8 * 4) =
         local_a8[0];
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Release @ 143b31150

void __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::Release
          (TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0> *this,FDirtyPropertiesPool *param_1
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  uint local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar3 = (this->Buffer).ArrayNum;
  pFVar10 = (this->Buffer).AllocatorInstance.Data;
  pFVar2 = pFVar10 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Buffer).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPropertyInterval,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar2) {
      piVar1 = &(this->Buffer).ArrayMax;
      (this->Buffer).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->Buffer).AllocatorInstance,0,piVar1);
      }
      this->NumValid = 0;
      return;
    }
    local_68[0] = *(uint *)pFVar10;
    lVar9 = (longlong)(int)local_68[0];
    local_60 = 0;
    uStack_58 = 0;
    uVar7 = 0;
    if ((int)local_68[0] < (param_1->DynamicsPool).Elements.ArrayNum) {
      uVar7 = ~local_68[0] >> 0x1f;
    }
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pFVar4 = (param_1->DynamicsPool).Elements.AllocatorInstance.Data;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30) = 0;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 8) = 0;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 0x10) = 0;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 0x10 + 8) = 0;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 0x20) = 0;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 0x20 + 8) = 0;
    pFVar4 = (param_1->DynamicsPool).FreeList.AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 <
         pFVar4 + (longlong)(param_1->DynamicsPool).FreeList.ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (param_1->DynamicsPool).FreeList.ArrayNum;
    piVar1 = &(param_1->DynamicsPool).FreeList.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(param_1->DynamicsPool).FreeList.AllocatorInstance,piVar1);
    }
    pFVar10 = pFVar10 + 8;
    (param_1->DynamicsPool).FreeList.ArrayNum = iVar8 + 1;
    *(uint *)((param_1->DynamicsPool).FreeList.AllocatorInstance.Data + (longlong)iVar8 * 4) =
         local_68[0];
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Release @ 143b31340

void __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::Release
          (TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1> *this,
          FDirtyPropertiesPool *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  uint local_98 [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar4 = (this->Buffer).ArrayNum;
  pFVar11 = (this->Buffer).AllocatorInstance.Data;
  pFVar3 = pFVar11 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->Buffer).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPropertyInterval,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar3) {
      piVar1 = &(this->Buffer).ArrayMax;
      (this->Buffer).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->Buffer).AllocatorInstance,0,piVar1);
      }
      this->NumValid = 0;
      return;
    }
    local_98[0] = *(uint *)pFVar11;
    lVar10 = (longlong)(int)local_98[0];
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_48 = 0;
    uStack_40 = 0;
    uVar8 = 0;
    if ((int)local_98[0] < (param_1->MassPropsPool).Elements.ArrayNum) {
      uVar8 = ~local_98[0] >> 0x1f;
    }
    local_38 = 0;
    uStack_30 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    pFVar5 = (param_1->MassPropsPool).Elements.AllocatorInstance.Data;
    lVar10 = lVar10 * 0x60;
    pTVar2 = &(param_1->MassPropsPool).FreeList;
    *(undefined8 *)(pFVar5 + lVar10) = 0;
    *(undefined8 *)(pFVar5 + lVar10 + 8) = 0;
    *(undefined8 *)(pFVar5 + lVar10 + 0x10) = 0;
    *(undefined8 *)(pFVar5 + lVar10 + 0x10 + 8) = 0;
    *(undefined8 *)(pFVar5 + lVar10 + 0x20) = 0;
    *(undefined8 *)(pFVar5 + lVar10 + 0x20 + 8) = 0;
    *(undefined8 *)(pFVar5 + lVar10 + 0x30) = 0;
    *(undefined8 *)(pFVar5 + lVar10 + 0x30 + 8) = 0;
    *(undefined8 *)(pFVar5 + lVar10 + 0x40) = 0;
    *(undefined8 *)(pFVar5 + lVar10 + 0x40 + 8) = 0;
    *(undefined8 *)(pFVar5 + lVar10 + 0x50) = 0;
    *(undefined8 *)(pFVar5 + lVar10 + 0x50 + 8) = 0;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)local_98) &&
        ((FScriptContainerElement *)local_98 <
         pFVar5 + (longlong)(param_1->MassPropsPool).FreeList.ArrayMax * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = (param_1->MassPropsPool).FreeList.ArrayNum;
    piVar1 = &(param_1->MassPropsPool).FreeList.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar11 = pFVar11 + 8;
    (param_1->MassPropsPool).FreeList.ArrayNum = iVar9 + 1;
    *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_98[0];
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// Release @ 143b31570

void __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::Release
          (TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1> *this,
          FDirtyPropertiesPool *param_1)

{
  longlong *plVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [16];
  uint local_68 [2];
  FParticleNonFrequentData local_60;
  
  pFVar12 = (this->Buffer).AllocatorInstance.Data;
  iVar5 = (this->Buffer).ArrayNum;
  pFVar4 = pFVar12 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->Buffer).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPropertyInterval,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar4) break;
    local_68[0] = *(uint *)pFVar12;
    lVar11 = (longlong)(int)local_68[0];
    local_60.MGeometry.Reference = (FImplicitObject *)0x0;
    local_60.MUniqueIdx.Idx = -1;
    uVar9 = 0;
    if ((int)local_68[0] < (param_1->NonFrequentDataPool).Elements.ArrayNum) {
      uVar9 = ~local_68[0] >> 0x1f;
    }
    local_60.MSpatialIdx.InnerIdx = 0;
    local_60.MSpatialIdx.Bucket = 0;
    local_60.MParticleID.GlobalID = -1;
    local_60.MParticleID.LocalID = -1;
    local_60.MDebugName.Object = (FString *)0x0;
    local_60.MDebugName.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FParticleNonFrequentData::operator=
              ((FParticleNonFrequentData *)
               ((param_1->NonFrequentDataPool).Elements.AllocatorInstance.Data + lVar11 * 0x28),
               &local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.MDebugName.SharedReferenceCount.ReferenceController);
    if (local_60.MGeometry.Reference != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &(local_60.MGeometry.Reference)->_padding_;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar11 == 1) &&
         (*(int *)((longlong)&(local_60.MGeometry.Reference)->_padding_ + 4) == 0)) {
        (**(code **)(local_60.MGeometry.Reference)->_padding_)(local_60.MGeometry.Reference,1);
      }
    }
    pTVar3 = &(param_1->NonFrequentDataPool).FreeList;
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)local_68) &&
       ((FScriptContainerElement *)local_68 <
        pFVar6 + (longlong)(param_1->NonFrequentDataPool).FreeList.ArrayMax * 4)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar10 = (param_1->NonFrequentDataPool).FreeList.ArrayNum;
    piVar2 = &(param_1->NonFrequentDataPool).FreeList.ArrayMax;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar3->AllocatorInstance,piVar2);
    }
    pFVar12 = pFVar12 + 8;
    (param_1->NonFrequentDataPool).FreeList.ArrayNum = iVar10 + 1;
    *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_68[0];
  }
  piVar2 = &(this->Buffer).ArrayMax;
  (this->Buffer).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->Buffer).AllocatorInstance,0,piVar2);
  }
  this->NumValid = 0;
  return;
}

// Release @ 143b317b0

void __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Release
          (TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *this,
          FDirtyPropertiesPool *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  uint local_68 [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar3 = (this->Buffer).ArrayNum;
  pFVar10 = (this->Buffer).AllocatorInstance.Data;
  pFVar2 = pFVar10 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Buffer).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPropertyInterval,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar2) {
      piVar1 = &(this->Buffer).ArrayMax;
      (this->Buffer).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->Buffer).AllocatorInstance,0,piVar1);
      }
      this->NumValid = 0;
      return;
    }
    local_68[0] = *(uint *)pFVar10;
    lVar9 = (longlong)(int)local_68[0];
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    uVar7 = 0;
    if ((int)local_68[0] < (param_1->XRPool).Elements.ArrayNum) {
      uVar7 = ~local_68[0] >> 0x1f;
    }
    local_38 = 0;
    uStack_30 = 0;
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pFVar4 = (param_1->XRPool).Elements.AllocatorInstance.Data;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30) = 0;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 8) = 0;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 0x10) = 0;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 0x10 + 8) = 0;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 0x20) = 0;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 0x20 + 8) = 0;
    pFVar4 = (param_1->XRPool).FreeList.AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 <
         pFVar4 + (longlong)(param_1->XRPool).FreeList.ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (param_1->XRPool).FreeList.ArrayNum;
    piVar1 = &(param_1->XRPool).FreeList.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(param_1->XRPool).FreeList.AllocatorInstance,piVar1);
    }
    pFVar10 = pFVar10 + 8;
    (param_1->XRPool).FreeList.ArrayNum = iVar8 + 1;
    *(uint *)((param_1->XRPool).FreeList.AllocatorInstance.Data + (longlong)iVar8 * 4) = local_68[0]
    ;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Release @ 143b319b0

void __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0>::Release
          (TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0> *this,
          FDirtyPropertiesPool *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  uint local_68 [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar3 = (this->Buffer).ArrayNum;
  pFVar10 = (this->Buffer).AllocatorInstance.Data;
  pFVar2 = pFVar10 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Buffer).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPropertyInterval,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar2) {
      piVar1 = &(this->Buffer).ArrayMax;
      (this->Buffer).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->Buffer).AllocatorInstance,0,piVar1);
      }
      this->NumValid = 0;
      return;
    }
    local_68[0] = *(uint *)pFVar10;
    lVar9 = (longlong)(int)local_68[0];
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    uVar7 = 0;
    if ((int)local_68[0] < (param_1->XRPool).Elements.ArrayNum) {
      uVar7 = ~local_68[0] >> 0x1f;
    }
    local_38 = 0;
    uStack_30 = 0;
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pFVar4 = (param_1->XRPool).Elements.AllocatorInstance.Data;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30) = 0;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 8) = 0;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 0x10) = 0;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 0x10 + 8) = 0;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 0x20) = 0;
    *(undefined8 *)(pFVar4 + lVar9 * 0x30 + 0x20 + 8) = 0;
    pFVar4 = (param_1->XRPool).FreeList.AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 <
         pFVar4 + (longlong)(param_1->XRPool).FreeList.ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (param_1->XRPool).FreeList.ArrayNum;
    piVar1 = &(param_1->XRPool).FreeList.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(param_1->XRPool).FreeList.AllocatorInstance,piVar1);
    }
    pFVar10 = pFVar10 + 8;
    (param_1->XRPool).FreeList.ArrayNum = iVar8 + 1;
    *(uint *)((param_1->XRPool).FreeList.AllocatorInstance.Data + (longlong)iVar8 * 4) = local_68[0]
    ;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Release @ 143b31bb0

void __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::Release
          (TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1> *this,
          FDirtyPropertiesPool *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  uint local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  iVar4 = (this->Buffer).ArrayNum;
  pFVar11 = (this->Buffer).AllocatorInstance.Data;
  pFVar2 = pFVar11 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->Buffer).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPropertyInterval,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar2) {
      piVar1 = &(this->Buffer).ArrayMax;
      (this->Buffer).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->Buffer).AllocatorInstance,0,piVar1);
      }
      this->NumValid = 0;
      return;
    }
    local_58[0] = *(uint *)pFVar11;
    lVar10 = (longlong)(int)local_58[0];
    local_40 = 0;
    local_50 = 0;
    uStack_48 = 0;
    uVar8 = 0;
    if ((int)local_58[0] < (param_1->VelocitiesPool).Elements.ArrayNum) {
      uVar8 = ~local_58[0] >> 0x1f;
    }
    local_res10 = 0;
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    pFVar5 = (param_1->VelocitiesPool).Elements.AllocatorInstance.Data;
    pFVar3 = pFVar5 + lVar10 * 0x18;
    *(undefined8 *)pFVar3 = 0;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar5 + lVar10 * 0x18 + 0x10) = local_res10;
    pFVar3 = (param_1->VelocitiesPool).FreeList.AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_58) &&
        ((FScriptContainerElement *)local_58 <
         pFVar3 + (longlong)(param_1->VelocitiesPool).FreeList.ArrayMax * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = (param_1->VelocitiesPool).FreeList.ArrayNum;
    piVar1 = &(param_1->VelocitiesPool).FreeList.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(param_1->VelocitiesPool).FreeList.AllocatorInstance,piVar1);
    }
    pFVar11 = pFVar11 + 8;
    (param_1->VelocitiesPool).FreeList.ArrayNum = iVar9 + 1;
    *(uint *)((param_1->VelocitiesPool).FreeList.AllocatorInstance.Data + (longlong)iVar9 * 4) =
         local_58[0];
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// Release @ 143b31da0

void __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0>::Release
          (TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0> *this,
          FDirtyPropertiesPool *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  uint local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  iVar4 = (this->Buffer).ArrayNum;
  pFVar11 = (this->Buffer).AllocatorInstance.Data;
  pFVar2 = pFVar11 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->Buffer).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPropertyInterval,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar2) {
      piVar1 = &(this->Buffer).ArrayMax;
      (this->Buffer).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->Buffer).AllocatorInstance,0,piVar1);
      }
      this->NumValid = 0;
      return;
    }
    local_58[0] = *(uint *)pFVar11;
    lVar10 = (longlong)(int)local_58[0];
    local_40 = 0;
    local_50 = 0;
    uStack_48 = 0;
    uVar8 = 0;
    if ((int)local_58[0] < (param_1->VelocitiesPool).Elements.ArrayNum) {
      uVar8 = ~local_58[0] >> 0x1f;
    }
    local_res10 = 0;
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    pFVar5 = (param_1->VelocitiesPool).Elements.AllocatorInstance.Data;
    pFVar3 = pFVar5 + lVar10 * 0x18;
    *(undefined8 *)pFVar3 = 0;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar5 + lVar10 * 0x18 + 0x10) = local_res10;
    pFVar3 = (param_1->VelocitiesPool).FreeList.AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_58) &&
        ((FScriptContainerElement *)local_58 <
         pFVar3 + (longlong)(param_1->VelocitiesPool).FreeList.ArrayMax * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = (param_1->VelocitiesPool).FreeList.ArrayNum;
    piVar1 = &(param_1->VelocitiesPool).FreeList.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(param_1->VelocitiesPool).FreeList.AllocatorInstance,piVar1);
    }
    pFVar11 = pFVar11 + 8;
    (param_1->VelocitiesPool).FreeList.ArrayNum = iVar9 + 1;
    *(uint *)((param_1->VelocitiesPool).FreeList.AllocatorInstance.Data + (longlong)iVar9 * 4) =
         local_58[0];
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// IsInSync<Chaos::TGeometryParticleHandleImp<double,3,1>_> @ 1440c2f00

bool __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::
IsInSync<Chaos::TGeometryParticleHandleImp<double,3,1>_>
          (TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1> *this,
          TGeometryParticleHandleImp<double,3,1> *param_1,FFrameAndPhase param_2,
          FDirtyPropertiesPool *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  TRefCountPtr<Chaos::FImplicitObject> TVar3;
  FParticleNonFrequentData *pFVar4;
  bool bVar5;
  FParticleNonFrequentData local_30;
  
  pFVar4 = Read(this,param_2,param_3);
  if (pFVar4 != (FParticleNonFrequentData *)0x0) {
    local_30.MGeometry.Reference = (FImplicitObject *)0x0;
    local_30.MSpatialIdx.InnerIdx = 0;
    local_30.MSpatialIdx.Bucket = 0;
    local_30.MUniqueIdx.Idx = -1;
    local_30.MParticleID.GlobalID = -1;
    local_30.MParticleID.LocalID = -1;
    local_30.MDebugName.Object = (FString *)0x0;
    local_30.MDebugName.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FParticleNonFrequentData::CopyFrom<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (&local_30,param_1);
    TVar3.Reference = local_30.MGeometry.Reference;
    if ((((pFVar4->MGeometry).Reference == local_30.MGeometry.Reference) &&
        ((pFVar4->MUniqueIdx).Idx == local_30.MUniqueIdx.Idx)) &&
       (pFVar4->MSpatialIdx == local_30.MSpatialIdx)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.MDebugName.SharedReferenceCount.ReferenceController);
    if (TVar3.Reference != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &(TVar3.Reference)->_padding_;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (*(int *)((longlong)&(TVar3.Reference)->_padding_ + 4) == 0)) {
        (**(code **)(TVar3.Reference)->_padding_)(TVar3.Reference,1);
      }
    }
    return bVar5;
  }
  return true;
}

// IsInSync<Chaos::TGeometryParticleHandleImp<double,3,1>_> @ 1440c2fe0

bool __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::
IsInSync<Chaos::TGeometryParticleHandleImp<double,3,1>_>
          (TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *this,
          TGeometryParticleHandleImp<double,3,1> *param_1,FFrameAndPhase param_2,
          FDirtyPropertiesPool *param_3)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  FParticlePositionRotation *pFVar12;
  TVector<double,3> *pTVar13;
  longlong lVar14;
  
  pFVar12 = Read(this,param_2,param_3);
  if (pFVar12 != (FParticlePositionRotation *)0x0) {
    pTVar13 = TParticles<double,3>::GetX
                        ((TParticles<double,3> *)param_1->_padding_,(int)param_1->_padding_);
    uVar2 = (uint)param_1->_padding_;
    lVar14 = (longlong)(int)uVar2;
    lVar3 = param_1->_padding_;
    dVar6 = *(double *)pTVar13;
    dVar7 = *(double *)&pTVar13->field_0x8;
    dVar1 = *(double *)&pTVar13->field_0x10;
    uVar10 = 0;
    if ((int)uVar2 < *(int *)(lVar3 + 0x50)) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
    }
    lVar3 = *(longlong *)(lVar3 + 0x48);
    if ((((dVar6 != *(double *)&pFVar12->MX) || (dVar7 != *(double *)&(pFVar12->MX).field_0x8)) ||
        (dVar1 != *(double *)&(pFVar12->MX).field_0x10)) ||
       (auVar5._4_4_ = -(uint)(*(float *)&(pFVar12->MR).field_0x4 ==
                              *(float *)(lVar3 + 4 + lVar14 * 0x10)),
       auVar5._0_4_ = -(uint)(*(float *)&pFVar12->MR == *(float *)(lVar3 + lVar14 * 0x10)),
       auVar5._8_4_ = -(uint)(*(float *)&(pFVar12->MR).field_0x8 ==
                             *(float *)(lVar3 + 8 + lVar14 * 0x10)),
       auVar5._12_4_ =
            -(uint)(*(float *)&(pFVar12->MR).field_0xc == *(float *)(lVar3 + 0xc + lVar14 * 0x10)),
       iVar11 = movmskps((int)lVar3,auVar5), iVar11 != 0xf)) {
      return false;
    }
  }
  return true;
}

// IsInSync<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> @ 1440c3130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::
IsInSync<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
          (TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0> *this,
          TKinematicGeometryParticleHandleImp<double,3,1> *param_1,FFrameAndPhase param_2,
          FDirtyPropertiesPool *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FKinematicTarget *pFVar11;
  FKinematicTarget *pFVar12;
  
  pFVar11 = Read(this,param_2,param_3);
  if (pFVar11 == (FKinematicTarget *)0x0) {
    pFVar11 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                        (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                         *(int *)&param_1->field_0x8);
    dVar1 = *(double *)&(pFVar11->Position).field_0x10;
    dVar4 = *(double *)&pFVar11->Position;
    dVar5 = *(double *)&(pFVar11->Position).field_0x8;
    pFVar11 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                        (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                         *(int *)&param_1->field_0x8);
    fVar6 = *(float *)&pFVar11->Rotation;
    fVar7 = *(float *)&(pFVar11->Rotation).field_0x4;
    fVar8 = *(float *)&(pFVar11->Rotation).field_0x8;
    fVar9 = *(float *)&(pFVar11->Rotation).field_0xc;
    pFVar11 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                        (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                         *(int *)&param_1->field_0x8);
    if (pFVar11->Mode != None) {
      return false;
    }
    if (dVar4 != 0.0) {
      return false;
    }
    if (dVar5 != 0.0) {
      return false;
    }
    if (dVar1 != 0.0) {
      return false;
    }
    auVar3._4_4_ = -(uint)(fVar7 == _UNK_150689644);
    auVar3._0_4_ = -(uint)(fVar6 == ___xmm_3f800000000000000000000000000000);
    auVar3._8_4_ = -(uint)(fVar8 == _UNK_150689648);
    auVar3._12_4_ = -(uint)(fVar9 == _UNK_15068964c);
    iVar10 = movmskps((int)pFVar11,auVar3);
  }
  else {
    pFVar12 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                        (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                         *(int *)&param_1->field_0x8);
    dVar1 = *(double *)&(pFVar12->Position).field_0x10;
    dVar4 = *(double *)&pFVar12->Position;
    dVar5 = *(double *)&(pFVar12->Position).field_0x8;
    pFVar12 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                        (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                         *(int *)&param_1->field_0x8);
    fVar6 = *(float *)&pFVar12->Rotation;
    fVar7 = *(float *)&(pFVar12->Rotation).field_0x4;
    fVar8 = *(float *)&(pFVar12->Rotation).field_0x8;
    fVar9 = *(float *)&(pFVar12->Rotation).field_0xc;
    pFVar12 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                        (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                         *(int *)&param_1->field_0x8);
    if (pFVar11->Mode != pFVar12->Mode) {
      return false;
    }
    if (dVar4 != *(double *)&pFVar11->Position) {
      return false;
    }
    if (dVar5 != *(double *)&(pFVar11->Position).field_0x8) {
      return false;
    }
    if (dVar1 != *(double *)&(pFVar11->Position).field_0x10) {
      return false;
    }
    auVar2._4_4_ = -(uint)(*(float *)&(pFVar11->Rotation).field_0x4 == fVar7);
    auVar2._0_4_ = -(uint)(*(float *)&pFVar11->Rotation == fVar6);
    auVar2._8_4_ = -(uint)(*(float *)&(pFVar11->Rotation).field_0x8 == fVar8);
    auVar2._12_4_ = -(uint)(*(float *)&(pFVar11->Rotation).field_0xc == fVar9);
    iVar10 = movmskps((int)pFVar12,auVar2);
  }
  if (iVar10 != 0xf) {
    return false;
  }
  return true;
}

// IsInSync<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> @ 1440c3250

bool __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::
IsInSync<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
          (TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1> *this,
          TKinematicGeometryParticleHandleImp<double,3,1> *param_1,FFrameAndPhase param_2,
          FDirtyPropertiesPool *param_3)

{
  FParticleVelocities *pFVar1;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  pFVar1 = Read(this,param_2,param_3);
  if (pFVar1 != (FParticleVelocities *)0x0) {
    TKinematicGeometryParticlesImp<double,3,0>::GetV
              (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
               (TVector<double,3> *)&local_20,*(int *)&param_1->field_0x8);
    TKinematicGeometryParticlesImp<double,3,0>::GetW
              (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
               (TVector<double,3> *)&local_38,*(int *)&param_1->field_0x8);
    if (((((float)local_20 != *(float *)&pFVar1->MV) ||
         ((float)local_18 != *(float *)&(pFVar1->MV).field_0x4)) ||
        ((float)local_10 != *(float *)&(pFVar1->MV).field_0x8)) ||
       ((((float)local_38 != *(float *)&pFVar1->MW ||
         ((float)local_30 != *(float *)&(pFVar1->MW).field_0x4)) ||
        ((float)local_28 != *(float *)&(pFVar1->MW).field_0x8)))) {
      return false;
    }
  }
  return true;
}

// IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 1440c3320

bool __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::
IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1> *this,
          TPBDRigidParticleHandleImp<double,3,1> *param_1,FFrameAndPhase param_2,
          FDirtyPropertiesPool *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  FParticleDynamicMisc *pFVar3;
  char cStack_47;
  FParticleDynamicMisc local_40;
  
  pFVar3 = Read(this,param_2,param_3);
  if (pFVar3 == (FParticleDynamicMisc *)0x0) {
    return true;
  }
  local_40.MInitialOverlapDepenetrationVelocity = 0.0;
  local_40.MCollisionConstraintFlag = 0;
  local_40.MSleepThresholdMultiplier = 1.0;
  local_40.MControlFlags.field0_0x0 = (FRigidParticleControlFlags_u_0)0x0;
  local_40.MIterationSettings.NumPositionIterations = -1;
  local_40.MIterationSettings.NumVelocityIterations = -1;
  local_40.MIterationSettings.NumProjectionIterations = -1;
  FParticleDynamicMisc::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>(&local_40,param_1);
  if ((((((pFVar3->MObjectState == local_40.MObjectState) &&
         (local_40.MLinearEtherDrag == pFVar3->MLinearEtherDrag)) &&
        (local_40.MAngularEtherDrag == pFVar3->MAngularEtherDrag)) &&
       (((local_40.MMaxLinearSpeedSq == pFVar3->MMaxLinearSpeedSq &&
         (local_40.MMaxAngularSpeedSq == pFVar3->MMaxAngularSpeedSq)) &&
        ((local_40.MInitialOverlapDepenetrationVelocity ==
          pFVar3->MInitialOverlapDepenetrationVelocity &&
         ((local_40.MSleepThresholdMultiplier == pFVar3->MSleepThresholdMultiplier &&
          (pFVar3->MCollisionGroup == local_40.MCollisionGroup)))))))) &&
      (pFVar3->MSleepType == local_40.MSleepType)) &&
     ((pFVar3->MCollisionConstraintFlag == local_40.MCollisionConstraintFlag &&
      ((FRigidParticleControlFlags_u_0)(pFVar3->MControlFlags).field0_0x0.Bits ==
       local_40.MControlFlags.field0_0x0.Bits)))) {
    uVar1 = (pFVar3->MIterationSettings).NumPositionIterations;
    uVar2 = (pFVar3->MIterationSettings).NumVelocityIterations;
    if (uVar1 == local_40.MIterationSettings.NumPositionIterations) {
      if (((uVar2 == local_40.MIterationSettings.NumVelocityIterations) &&
          ((pFVar3->MIterationSettings).NumProjectionIterations ==
           local_40.MIterationSettings.NumProjectionIterations)) &&
         (pFVar3->bDisabled == local_40.bDisabled)) {
        return true;
      }
    }
  }
  return false;
}

// IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 1440c3440

bool __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::
IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0> *this,
          TPBDRigidParticleHandleImp<double,3,1> *param_1,FFrameAndPhase param_2,
          FDirtyPropertiesPool *param_3)

{
  FParticleDynamics *pFVar1;
  bool bVar2;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pFVar1 = Read(this,param_2,param_3);
  if (pFVar1 == (FParticleDynamics *)0x0) {
    FParticleDynamics::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
              ((FParticleDynamics *)&local_38,param_1);
    if (local_38 != 0.0) {
      return false;
    }
    if (local_34 != 0.0) {
      return false;
    }
    if (local_30 != 0.0) {
      return false;
    }
    if (local_2c != 0.0) {
      return false;
    }
    if (local_28 != 0.0) {
      return false;
    }
    if (local_24 != 0.0) {
      return false;
    }
    if (local_20 != 0.0) {
      return false;
    }
    if (local_1c != 0.0) {
      return false;
    }
    if (local_18 != 0.0) {
      return false;
    }
    if (local_14 != 0.0) {
      return false;
    }
    if (local_10 != 0.0) {
      return false;
    }
    bVar2 = local_c == 0.0;
  }
  else {
    FParticleDynamics::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
              ((FParticleDynamics *)&local_38,param_1);
    if (local_38 != *(float *)&pFVar1->MAcceleration) {
      return false;
    }
    if (*(float *)&(pFVar1->MAcceleration).field_0x4 != local_34) {
      return false;
    }
    if (*(float *)&(pFVar1->MAcceleration).field_0x8 != local_30) {
      return false;
    }
    if (local_2c != *(float *)&pFVar1->MAngularAcceleration) {
      return false;
    }
    if (*(float *)&(pFVar1->MAngularAcceleration).field_0x4 != local_28) {
      return false;
    }
    if (*(float *)&(pFVar1->MAngularAcceleration).field_0x8 != local_24) {
      return false;
    }
    if (local_20 != *(float *)&pFVar1->MLinearImpulseVelocity) {
      return false;
    }
    if (*(float *)&(pFVar1->MLinearImpulseVelocity).field_0x4 != local_1c) {
      return false;
    }
    if (*(float *)&(pFVar1->MLinearImpulseVelocity).field_0x8 != local_18) {
      return false;
    }
    if (local_14 != *(float *)&pFVar1->MAngularImpulseVelocity) {
      return false;
    }
    if (*(float *)&(pFVar1->MAngularImpulseVelocity).field_0x4 != local_10) {
      return false;
    }
    bVar2 = *(float *)&(pFVar1->MAngularImpulseVelocity).field_0x8 == local_c;
  }
  if (!bVar2) {
    return false;
  }
  return true;
}

// IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 1440c3660

bool __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::
IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1> *this,
          TPBDRigidParticleHandleImp<double,3,1> *param_1,FFrameAndPhase param_2,
          FDirtyPropertiesPool *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 extraout_EAX;
  uint uVar13;
  FParticleMassProps *pFVar14;
  TVector<double,3> *pTVar15;
  TRotation<double,3> *pTVar16;
  TVector<float,3> *pTVar17;
  int iVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  float local_68;
  float fStack_64;
  float local_5c;
  float fStack_58;
  
  pFVar14 = Read(this,param_2,param_3);
  if (pFVar14 == (FParticleMassProps *)0x0) {
    return true;
  }
  pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass(param_1);
  dVar1 = *(double *)&pTVar15->field_0x10;
  dVar7 = *(double *)pTVar15;
  dVar8 = *(double *)&pTVar15->field_0x8;
  pTVar16 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass(param_1);
  dVar9 = *(double *)pTVar16;
  dVar10 = *(double *)&pTVar16->field_0x8;
  dVar11 = *(double *)&pTVar16->field_0x10;
  dVar12 = *(double *)&pTVar16->field_0x18;
  pTVar17 = TPBDRigidParticleHandleImp<double,3,1>::I(param_1);
  uVar2 = *(undefined8 *)pTVar17;
  fVar4 = *(float *)&pTVar17->field_0x8;
  pTVar17 = TPBDRigidParticleHandleImp<double,3,1>::InvI(param_1);
  uVar3 = *(undefined8 *)pTVar17;
  fVar5 = *(float *)&pTVar17->field_0x8;
  dVar20 = TPBDRigidParticleHandleImp<double,3,1>::M(param_1);
  dVar21 = TPBDRigidParticleHandleImp<double,3,1>::InvM(param_1);
  if (((dVar7 == *(double *)&pFVar14->MCenterOfMass) &&
      (dVar8 == *(double *)&(pFVar14->MCenterOfMass).field_0x8)) &&
     (dVar1 == *(double *)&(pFVar14->MCenterOfMass).field_0x10)) {
    auVar22._8_8_ = -(ulonglong)(*(double *)&(pFVar14->MRotationOfMass).field_0x18 == dVar12);
    auVar22._0_8_ = -(ulonglong)(*(double *)&(pFVar14->MRotationOfMass).field_0x10 == dVar11);
    iVar18 = movmskpd((int)param_1,auVar22);
    lVar19 = -(ulonglong)(*(double *)&(pFVar14->MRotationOfMass).field_0x8 == dVar10);
    auVar6._8_4_ = (int)lVar19;
    auVar6._0_8_ = -(ulonglong)(*(double *)&pFVar14->MRotationOfMass == dVar9);
    auVar6._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    uVar13 = movmskpd(extraout_EAX,auVar6);
    if ((((((iVar18 << 2 | uVar13) == 0xf) &&
          (local_68 = (float)uVar2, local_68 == *(float *)&pFVar14->MI)) &&
         ((fStack_64 = (float)((ulonglong)uVar2 >> 0x20),
          fStack_64 == *(float *)&(pFVar14->MI).field_0x4 &&
          ((fVar4 == *(float *)&(pFVar14->MI).field_0x8 &&
           (local_5c = (float)uVar3, local_5c == *(float *)&pFVar14->MInvI)))))) &&
        (fStack_58 = (float)((ulonglong)uVar3 >> 0x20),
        fStack_58 == *(float *)&(pFVar14->MInvI).field_0x4)) &&
       (((fVar5 == *(float *)&(pFVar14->MInvI).field_0x8 && (dVar20 == pFVar14->MM)) &&
        (dVar21 == pFVar14->MInvM)))) {
      return true;
    }
  }
  return false;
}

// IsInSync<Chaos::FPBDJointConstraintHandle> @ 1440c3830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::
IsInSync<Chaos::FPBDJointConstraintHandle>
          (TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1> *this,
          FPBDJointConstraintHandle *param_1,FFrameAndPhase param_2,FDirtyPropertiesPool *param_3)

{
  undefined8 uVar1;
  FPBDJointSettings *pFVar2;
  int iVar3;
  FPBDJointSettings *_Buf1;
  FPBDJointSettings *pFVar4;
  FPBDJointSettings *pFVar5;
  FPBDJointSettings *pFVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_368 [32];
  FPBDJointSettings local_348;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
  _Buf1 = Read(this,param_2,param_3);
  if (_Buf1 == (FPBDJointSettings *)0x0) {
    bVar8 = true;
  }
  else {
    FPBDJointSettings::FPBDJointSettings(&local_348);
    pFVar4 = FPBDJointConstraintHandle::GetSettings(param_1);
    lVar7 = 6;
    pFVar2 = &local_348;
    do {
      pFVar6 = pFVar2;
      pFVar5 = pFVar4;
      pFVar2 = (FPBDJointSettings *)&(pFVar6->ConnectorTransforms).V[1].field_0x20;
      uVar1 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x8;
      pFVar4 = (FPBDJointSettings *)&(pFVar5->ConnectorTransforms).V[1].field_0x20;
      *(undefined8 *)(pFVar6->ConnectorTransforms).V =
           *(undefined8 *)(pFVar5->ConnectorTransforms).V;
      *(undefined8 *)&(pFVar6->ConnectorTransforms).V[0].field_0x8 = uVar1;
      uVar1 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x18;
      *(undefined8 *)&(pFVar6->ConnectorTransforms).V[0].field_0x10 =
           *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x10;
      *(undefined8 *)&(pFVar6->ConnectorTransforms).V[0].field_0x18 = uVar1;
      uVar1 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x28;
      *(undefined8 *)&(pFVar6->ConnectorTransforms).V[0].field_0x20 =
           *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x20;
      *(undefined8 *)&(pFVar6->ConnectorTransforms).V[0].field_0x28 = uVar1;
      uVar1 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x38;
      *(undefined8 *)&(pFVar6->ConnectorTransforms).V[0].field_0x30 =
           *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x30;
      *(undefined8 *)&(pFVar6->ConnectorTransforms).V[0].field_0x38 = uVar1;
      uVar1 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x48;
      *(undefined8 *)&(pFVar6->ConnectorTransforms).V[0].field_0x40 =
           *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x40;
      *(undefined8 *)&(pFVar6->ConnectorTransforms).V[0].field_0x48 = uVar1;
      uVar1 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x58;
      *(undefined8 *)&(pFVar6->ConnectorTransforms).V[0].field_0x50 =
           *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x50;
      *(undefined8 *)&(pFVar6->ConnectorTransforms).V[0].field_0x58 = uVar1;
      uVar1 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x8;
      *(undefined8 *)((pFVar6->ConnectorTransforms).V + 1) =
           *(undefined8 *)((pFVar5->ConnectorTransforms).V + 1);
      *(undefined8 *)&(pFVar6->ConnectorTransforms).V[1].field_0x8 = uVar1;
      uVar1 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x18;
      *(undefined8 *)&(pFVar6->ConnectorTransforms).V[1].field_0x10 =
           *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x10;
      *(undefined8 *)&(pFVar6->ConnectorTransforms).V[1].field_0x18 = uVar1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uVar1 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x28;
    *(undefined8 *)pFVar2 = *(undefined8 *)pFVar4;
    *(undefined8 *)&(pFVar6->ConnectorTransforms).V[1].field_0x28 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x38;
    *(undefined8 *)&(pFVar6->ConnectorTransforms).V[1].field_0x30 =
         *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x30;
    *(undefined8 *)&(pFVar6->ConnectorTransforms).V[1].field_0x38 = uVar1;
    iVar3 = memcmp(_Buf1,&local_348,800);
    bVar8 = iVar3 == 0;
  }
  return bVar8;
}

// WriteAccessImp<1> @ 1440c8110

FKinematicTarget * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::WriteAccessImp<1>
          (TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FKinematicTarget *pFVar8;
  int iVar9;
  int local_res8 [2];
  FFrameAndPhase local_res10 [2];
  int local_38;
  FFrameAndPhase FStack_34;
  FScriptContainerElement *local_30;
  FFrameAndPhase *local_28;
  
  local_res10[0] = param_1;
  if (this->NumValid != 0) {
    iVar7 = this->Next;
    if (iVar7 == 0) {
      iVar7 = (this->Buffer).ArrayNum;
    }
    uVar3 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FKinematicTarget *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8 + 4;
    iVar7 = SPULL(local_res10[0],0,0x1e);
    uVar3 = *(uint *)pFVar2;
    iVar9 = (int)(uVar3 * 4) >> 2;
    if ((iVar7 <= iVar9) &&
       ((iVar9 != iVar7 || (((uint)local_res10[0] & 0xc0000000) <= (uVar3 & 0xc0000000))))) {
      local_28 = local_res10;
      local_30 = pFVar2;
      `Chaos::TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::WriteAccessImp<1>'::__l8::
      <lambda_1>::operator()(&local_30);
    }
  }
  iVar7 = this->Next;
  if (iVar7 < (this->Buffer).ArrayNum) {
    if (iVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FKinematicTarget *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8;
    *(FFrameAndPhase *)(pFVar2 + 4) = local_res10[0];
    pFVar8 = TPropertyPool<Chaos::FKinematicTarget>::GetElement
                       (&param_2->KinematicTargetPool,*(int *)pFVar2);
  }
  else {
    pFVar8 = TPropertyPool<Chaos::FKinematicTarget>::AddElement
                       (&param_2->KinematicTargetPool,local_res8);
    pFVar2 = (this->Buffer).AllocatorInstance.Data;
    local_38 = local_res8[0];
    FStack_34 = local_res10[0];
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Buffer).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FKinematicTarget *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar7 = (this->Buffer).ArrayNum;
    piVar1 = &(this->Buffer).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->Buffer).AllocatorInstance,piVar1);
    }
    (this->Buffer).ArrayNum = iVar7 + 1;
    *(ulonglong *)((this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         CONCAT44(FStack_34,local_38);
  }
  this->Next = this->Next + 1;
  iVar7 = this->Capacity;
  if (this->Next == iVar7) {
    this->Next = 0;
  }
  iVar9 = this->NumValid + 1;
  if (iVar9 < iVar7) {
    iVar7 = iVar9;
  }
  this->NumValid = iVar7;
  return pFVar8;
}

// WriteAccessImp<1> @ 1440c8350

FPBDJointSettings * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::WriteAccessImp<1>
          (TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FPBDJointSettings *pFVar8;
  int iVar9;
  int local_res8 [2];
  FFrameAndPhase local_res10 [2];
  int local_38;
  FFrameAndPhase FStack_34;
  FScriptContainerElement *local_30;
  FFrameAndPhase *local_28;
  
  local_res10[0] = param_1;
  if (this->NumValid != 0) {
    iVar7 = this->Next;
    if (iVar7 == 0) {
      iVar7 = (this->Buffer).ArrayNum;
    }
    uVar3 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FPBDJointSettings *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8 + 4;
    iVar7 = SPULL(local_res10[0],0,0x1e);
    uVar3 = *(uint *)pFVar2;
    iVar9 = (int)(uVar3 * 4) >> 2;
    if ((iVar7 <= iVar9) &&
       ((iVar9 != iVar7 || (((uint)local_res10[0] & 0xc0000000) <= (uVar3 & 0xc0000000))))) {
      local_28 = local_res10;
      local_30 = pFVar2;
      `Chaos::TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::WriteAccessImp<1>'::__l8::
      <lambda_1>::operator()(&local_30);
    }
  }
  iVar7 = this->Next;
  if (iVar7 < (this->Buffer).ArrayNum) {
    if (iVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FPBDJointSettings *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8;
    *(FFrameAndPhase *)(pFVar2 + 4) = local_res10[0];
    pFVar8 = TPropertyPool<Chaos::FPBDJointSettings>::GetElement
                       (&param_2->JointSettingsPool,*(int *)pFVar2);
  }
  else {
    pFVar8 = TPropertyPool<Chaos::FPBDJointSettings>::AddElement
                       (&param_2->JointSettingsPool,local_res8);
    pFVar2 = (this->Buffer).AllocatorInstance.Data;
    local_38 = local_res8[0];
    FStack_34 = local_res10[0];
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Buffer).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FPBDJointSettings *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar7 = (this->Buffer).ArrayNum;
    piVar1 = &(this->Buffer).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->Buffer).AllocatorInstance,piVar1);
    }
    (this->Buffer).ArrayNum = iVar7 + 1;
    *(ulonglong *)((this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         CONCAT44(FStack_34,local_38);
  }
  this->Next = this->Next + 1;
  iVar7 = this->Capacity;
  if (this->Next == iVar7) {
    this->Next = 0;
  }
  iVar9 = this->NumValid + 1;
  if (iVar9 < iVar7) {
    iVar7 = iVar9;
  }
  this->NumValid = iVar7;
  return pFVar8;
}

// WriteAccessImp<1> @ 1440c8590

FParticleDynamicMisc * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::WriteAccessImp<1>
          (TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FParticleDynamicMisc *pFVar8;
  int iVar9;
  int local_res8 [2];
  FFrameAndPhase local_res10 [2];
  int local_38;
  FFrameAndPhase FStack_34;
  FScriptContainerElement *local_30;
  FFrameAndPhase *local_28;
  
  local_res10[0] = param_1;
  if (this->NumValid != 0) {
    iVar7 = this->Next;
    if (iVar7 == 0) {
      iVar7 = (this->Buffer).ArrayNum;
    }
    uVar3 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticleDynamicMisc *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8 + 4;
    iVar7 = SPULL(local_res10[0],0,0x1e);
    uVar3 = *(uint *)pFVar2;
    iVar9 = (int)(uVar3 * 4) >> 2;
    if ((iVar7 <= iVar9) &&
       ((iVar9 != iVar7 || (((uint)local_res10[0] & 0xc0000000) <= (uVar3 & 0xc0000000))))) {
      local_28 = local_res10;
      local_30 = pFVar2;
      `Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::WriteAccessImp<1>'::__l8::
      <lambda_1>::operator()(&local_30);
    }
  }
  iVar7 = this->Next;
  if (iVar7 < (this->Buffer).ArrayNum) {
    if (iVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticleDynamicMisc *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8;
    *(FFrameAndPhase *)(pFVar2 + 4) = local_res10[0];
    pFVar8 = TPropertyPool<Chaos::FParticleDynamicMisc>::GetElement
                       (&param_2->DynamicMiscPool,*(int *)pFVar2);
  }
  else {
    pFVar8 = TPropertyPool<Chaos::FParticleDynamicMisc>::AddElement
                       (&param_2->DynamicMiscPool,local_res8);
    pFVar2 = (this->Buffer).AllocatorInstance.Data;
    local_38 = local_res8[0];
    FStack_34 = local_res10[0];
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Buffer).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticleDynamicMisc *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar7 = (this->Buffer).ArrayNum;
    piVar1 = &(this->Buffer).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->Buffer).AllocatorInstance,piVar1);
    }
    (this->Buffer).ArrayNum = iVar7 + 1;
    *(ulonglong *)((this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         CONCAT44(FStack_34,local_38);
  }
  this->Next = this->Next + 1;
  iVar7 = this->Capacity;
  if (this->Next == iVar7) {
    this->Next = 0;
  }
  iVar9 = this->NumValid + 1;
  if (iVar9 < iVar7) {
    iVar7 = iVar9;
  }
  this->NumValid = iVar7;
  return pFVar8;
}

// WriteAccessImp<1> @ 1440c87d0

FParticleDynamics * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::WriteAccessImp<1>
          (TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FParticleDynamics *pFVar8;
  int iVar9;
  int local_res8 [2];
  FFrameAndPhase local_res10 [2];
  int local_38;
  FFrameAndPhase FStack_34;
  FScriptContainerElement *local_30;
  FFrameAndPhase *local_28;
  
  local_res10[0] = param_1;
  if (this->NumValid != 0) {
    iVar7 = this->Next;
    if (iVar7 == 0) {
      iVar7 = (this->Buffer).ArrayNum;
    }
    uVar3 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticleDynamics *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8 + 4;
    iVar7 = SPULL(local_res10[0],0,0x1e);
    uVar3 = *(uint *)pFVar2;
    iVar9 = (int)(uVar3 * 4) >> 2;
    if ((iVar7 <= iVar9) &&
       ((iVar9 != iVar7 || (((uint)local_res10[0] & 0xc0000000) <= (uVar3 & 0xc0000000))))) {
      local_28 = local_res10;
      local_30 = pFVar2;
      `Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::WriteAccessImp<1>'::__l8::
      <lambda_1>::operator()(&local_30);
    }
  }
  iVar7 = this->Next;
  if (iVar7 < (this->Buffer).ArrayNum) {
    if (iVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticleDynamics *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8;
    *(FFrameAndPhase *)(pFVar2 + 4) = local_res10[0];
    pFVar8 = TPropertyPool<Chaos::FParticleDynamics>::GetElement
                       (&param_2->DynamicsPool,*(int *)pFVar2);
  }
  else {
    pFVar8 = TPropertyPool<Chaos::FParticleDynamics>::AddElement(&param_2->DynamicsPool,local_res8);
    pFVar2 = (this->Buffer).AllocatorInstance.Data;
    local_38 = local_res8[0];
    FStack_34 = local_res10[0];
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Buffer).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticleDynamics *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar7 = (this->Buffer).ArrayNum;
    piVar1 = &(this->Buffer).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->Buffer).AllocatorInstance,piVar1);
    }
    (this->Buffer).ArrayNum = iVar7 + 1;
    *(ulonglong *)((this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         CONCAT44(FStack_34,local_38);
  }
  this->Next = this->Next + 1;
  iVar7 = this->Capacity;
  if (this->Next == iVar7) {
    this->Next = 0;
  }
  iVar9 = this->NumValid + 1;
  if (iVar9 < iVar7) {
    iVar7 = iVar9;
  }
  this->NumValid = iVar7;
  return pFVar8;
}

// WriteAccessImp<1> @ 1440c8a10

FParticleMassProps * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::WriteAccessImp<1>
          (TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FParticleMassProps *pFVar8;
  int iVar9;
  int local_res8 [2];
  FFrameAndPhase local_res10 [2];
  int local_38;
  FFrameAndPhase FStack_34;
  FScriptContainerElement *local_30;
  FFrameAndPhase *local_28;
  
  local_res10[0] = param_1;
  if (this->NumValid != 0) {
    iVar7 = this->Next;
    if (iVar7 == 0) {
      iVar7 = (this->Buffer).ArrayNum;
    }
    uVar3 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticleMassProps *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8 + 4;
    iVar7 = SPULL(local_res10[0],0,0x1e);
    uVar3 = *(uint *)pFVar2;
    iVar9 = (int)(uVar3 * 4) >> 2;
    if ((iVar7 <= iVar9) &&
       ((iVar9 != iVar7 || (((uint)local_res10[0] & 0xc0000000) <= (uVar3 & 0xc0000000))))) {
      local_28 = local_res10;
      local_30 = pFVar2;
      `Chaos::TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::WriteAccessImp<1>'::__l8::
      <lambda_1>::operator()(&local_30);
    }
  }
  iVar7 = this->Next;
  if (iVar7 < (this->Buffer).ArrayNum) {
    if (iVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticleMassProps *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8;
    *(FFrameAndPhase *)(pFVar2 + 4) = local_res10[0];
    pFVar8 = TPropertyPool<Chaos::FParticleMassProps>::GetElement
                       (&param_2->MassPropsPool,*(int *)pFVar2);
  }
  else {
    pFVar8 = TPropertyPool<Chaos::FParticleMassProps>::AddElement
                       (&param_2->MassPropsPool,local_res8);
    pFVar2 = (this->Buffer).AllocatorInstance.Data;
    local_38 = local_res8[0];
    FStack_34 = local_res10[0];
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Buffer).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticleMassProps *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar7 = (this->Buffer).ArrayNum;
    piVar1 = &(this->Buffer).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->Buffer).AllocatorInstance,piVar1);
    }
    (this->Buffer).ArrayNum = iVar7 + 1;
    *(ulonglong *)((this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         CONCAT44(FStack_34,local_38);
  }
  this->Next = this->Next + 1;
  iVar7 = this->Capacity;
  if (this->Next == iVar7) {
    this->Next = 0;
  }
  iVar9 = this->NumValid + 1;
  if (iVar9 < iVar7) {
    iVar7 = iVar9;
  }
  this->NumValid = iVar7;
  return pFVar8;
}

// WriteAccessImp<1> @ 1440c8c50

FParticleNonFrequentData * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::WriteAccessImp<1>
          (TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1> *this,FFrameAndPhase param_1
          ,FDirtyPropertiesPool *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FParticleNonFrequentData *pFVar8;
  int iVar9;
  int local_res8 [2];
  FFrameAndPhase local_res10 [2];
  int local_38;
  FFrameAndPhase FStack_34;
  FScriptContainerElement *local_30;
  FFrameAndPhase *local_28;
  
  local_res10[0] = param_1;
  if (this->NumValid != 0) {
    iVar7 = this->Next;
    if (iVar7 == 0) {
      iVar7 = (this->Buffer).ArrayNum;
    }
    uVar3 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticleNonFrequentData *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8 + 4;
    iVar7 = SPULL(local_res10[0],0,0x1e);
    uVar3 = *(uint *)pFVar2;
    iVar9 = (int)(uVar3 * 4) >> 2;
    if ((iVar7 <= iVar9) &&
       ((iVar9 != iVar7 || (((uint)local_res10[0] & 0xc0000000) <= (uVar3 & 0xc0000000))))) {
      local_28 = local_res10;
      local_30 = pFVar2;
      `Chaos::TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::WriteAccessImp<1>'::__l8
      ::<lambda_1>::operator()(&local_30);
    }
  }
  iVar7 = this->Next;
  if (iVar7 < (this->Buffer).ArrayNum) {
    if (iVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticleNonFrequentData *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8;
    *(FFrameAndPhase *)(pFVar2 + 4) = local_res10[0];
    pFVar8 = TPropertyPool<Chaos::FParticleNonFrequentData>::GetElement
                       (&param_2->NonFrequentDataPool,*(int *)pFVar2);
  }
  else {
    pFVar8 = TPropertyPool<Chaos::FParticleNonFrequentData>::AddElement
                       (&param_2->NonFrequentDataPool,local_res8);
    pFVar2 = (this->Buffer).AllocatorInstance.Data;
    local_38 = local_res8[0];
    FStack_34 = local_res10[0];
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Buffer).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticleNonFrequentData *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar7 = (this->Buffer).ArrayNum;
    piVar1 = &(this->Buffer).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->Buffer).AllocatorInstance,piVar1);
    }
    (this->Buffer).ArrayNum = iVar7 + 1;
    *(ulonglong *)((this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         CONCAT44(FStack_34,local_38);
  }
  this->Next = this->Next + 1;
  iVar7 = this->Capacity;
  if (this->Next == iVar7) {
    this->Next = 0;
  }
  iVar9 = this->NumValid + 1;
  if (iVar9 < iVar7) {
    iVar7 = iVar9;
  }
  this->NumValid = iVar7;
  return pFVar8;
}

// WriteAccessImp<1> @ 1440c8e90

FParticlePositionRotation * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::WriteAccessImp<1>
          (TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *this,
          FFrameAndPhase param_1,FDirtyPropertiesPool *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FParticlePositionRotation *pFVar8;
  int iVar9;
  int local_res8 [2];
  FFrameAndPhase local_res10 [2];
  int local_38;
  FFrameAndPhase FStack_34;
  FScriptContainerElement *local_30;
  FFrameAndPhase *local_28;
  
  local_res10[0] = param_1;
  if (this->NumValid != 0) {
    iVar7 = this->Next;
    if (iVar7 == 0) {
      iVar7 = (this->Buffer).ArrayNum;
    }
    uVar3 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticlePositionRotation *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8 + 4;
    iVar7 = SPULL(local_res10[0],0,0x1e);
    uVar3 = *(uint *)pFVar2;
    iVar9 = (int)(uVar3 * 4) >> 2;
    if ((iVar7 <= iVar9) &&
       ((iVar9 != iVar7 || (((uint)local_res10[0] & 0xc0000000) <= (uVar3 & 0xc0000000))))) {
      local_28 = local_res10;
      local_30 = pFVar2;
      `Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::WriteAccessImp<1>'::
      __l8::<lambda_1>::operator()(&local_30);
    }
  }
  iVar7 = this->Next;
  if (iVar7 < (this->Buffer).ArrayNum) {
    if (iVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticlePositionRotation *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8;
    *(FFrameAndPhase *)(pFVar2 + 4) = local_res10[0];
    pFVar8 = TPropertyPool<Chaos::FParticlePositionRotation>::GetElement
                       (&param_2->XRPool,*(int *)pFVar2);
  }
  else {
    pFVar8 = TPropertyPool<Chaos::FParticlePositionRotation>::AddElement
                       (&param_2->XRPool,local_res8);
    pFVar2 = (this->Buffer).AllocatorInstance.Data;
    local_38 = local_res8[0];
    FStack_34 = local_res10[0];
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Buffer).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticlePositionRotation *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar7 = (this->Buffer).ArrayNum;
    piVar1 = &(this->Buffer).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->Buffer).AllocatorInstance,piVar1);
    }
    (this->Buffer).ArrayNum = iVar7 + 1;
    *(ulonglong *)((this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         CONCAT44(FStack_34,local_38);
  }
  this->Next = this->Next + 1;
  iVar7 = this->Capacity;
  if (this->Next == iVar7) {
    this->Next = 0;
  }
  iVar9 = this->NumValid + 1;
  if (iVar9 < iVar7) {
    iVar7 = iVar9;
  }
  this->NumValid = iVar7;
  return pFVar8;
}

// WriteAccessImp<1> @ 1440c90d0

FParticleVelocities * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::WriteAccessImp<1>
          (TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FParticleVelocities *pFVar8;
  int iVar9;
  int local_res8 [2];
  FFrameAndPhase local_res10 [2];
  int local_38;
  FFrameAndPhase FStack_34;
  FScriptContainerElement *local_30;
  FFrameAndPhase *local_28;
  
  local_res10[0] = param_1;
  if (this->NumValid != 0) {
    iVar7 = this->Next;
    if (iVar7 == 0) {
      iVar7 = (this->Buffer).ArrayNum;
    }
    uVar3 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticleVelocities *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8 + 4;
    iVar7 = SPULL(local_res10[0],0,0x1e);
    uVar3 = *(uint *)pFVar2;
    iVar9 = (int)(uVar3 * 4) >> 2;
    if ((iVar7 <= iVar9) &&
       ((iVar9 != iVar7 || (((uint)local_res10[0] & 0xc0000000) <= (uVar3 & 0xc0000000))))) {
      local_28 = local_res10;
      local_30 = pFVar2;
      `Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::WriteAccessImp<1>'::__l8::
      <lambda_1>::operator()(&local_30);
    }
  }
  iVar7 = this->Next;
  if (iVar7 < (this->Buffer).ArrayNum) {
    if (iVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticleVelocities *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8;
    *(FFrameAndPhase *)(pFVar2 + 4) = local_res10[0];
    pFVar8 = TPropertyPool<Chaos::FParticleVelocities>::GetElement
                       (&param_2->VelocitiesPool,*(int *)pFVar2);
  }
  else {
    pFVar8 = TPropertyPool<Chaos::FParticleVelocities>::AddElement
                       (&param_2->VelocitiesPool,local_res8);
    pFVar2 = (this->Buffer).AllocatorInstance.Data;
    local_38 = local_res8[0];
    FStack_34 = local_res10[0];
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Buffer).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FParticleVelocities *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar7 = (this->Buffer).ArrayNum;
    piVar1 = &(this->Buffer).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->Buffer).AllocatorInstance,piVar1);
    }
    (this->Buffer).ArrayNum = iVar7 + 1;
    *(ulonglong *)((this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         CONCAT44(FStack_34,local_38);
  }
  this->Next = this->Next + 1;
  iVar7 = this->Capacity;
  if (this->Next == iVar7) {
    this->Next = 0;
  }
  iVar9 = this->NumValid + 1;
  if (iVar9 < iVar7) {
    iVar7 = iVar9;
  }
  this->NumValid = iVar7;
  return pFVar8;
}

// WriteAccessImp<0> @ 1440c9310

FKinematicTarget * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::WriteAccessImp<0>
          (TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FKinematicTarget *pFVar8;
  TArray<Chaos::FPropertyInterval,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  int local_res8 [2];
  FFrameAndPhase local_res10 [2];
  int local_38;
  FFrameAndPhase FStack_34;
  FScriptContainerElement *local_30;
  FFrameAndPhase *local_28;
  
  local_res10[0] = param_1;
  if (this->NumValid != 0) {
    iVar7 = this->Next;
    if (iVar7 == 0) {
      iVar7 = (this->Buffer).ArrayNum;
    }
    uVar1 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar1 < (this->Buffer).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FKinematicTarget *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = SPULL(local_res10[0],0,0x1e);
    pFVar3 = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar1 * 8 + 4;
    iVar10 = (int)(*(uint *)pFVar3 * 4) >> 2;
    if ((iVar7 <= iVar10) &&
       ((iVar10 != iVar7 || (((uint)local_res10[0] & 0xc0000000) < (*(uint *)pFVar3 & 0xc0000000))))
       ) {
      local_28 = local_res10;
      local_30 = pFVar3;
      `Chaos::TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::WriteAccessImp<0>'::__l10::
      <lambda_2>::operator()(&local_30);
    }
    if ((((*(uint *)pFVar3 ^ (uint)local_res10[0]) & 0x3fffffff) == 0) &&
       (((*(uint *)pFVar3 ^ (uint)local_res10[0]) & 0xc0000000) == 0)) {
      return (FKinematicTarget *)0x0;
    }
  }
  pTVar9 = &this->Buffer;
  iVar7 = this->Next;
  if (iVar7 < (this->Buffer).ArrayNum) {
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FKinematicTarget *)(*pcVar4)();
      return pFVar8;
    }
    pFVar3 = (pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8;
    *(FFrameAndPhase *)(pFVar3 + 4) = local_res10[0];
    pFVar8 = TPropertyPool<Chaos::FKinematicTarget>::GetElement
                       (&param_2->KinematicTargetPool,*(int *)pFVar3);
  }
  else {
    pFVar8 = TPropertyPool<Chaos::FKinematicTarget>::AddElement
                       (&param_2->KinematicTargetPool,local_res8);
    pFVar3 = (pTVar9->AllocatorInstance).Data;
    local_38 = local_res8[0];
    FStack_34 = local_res10[0];
    if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(this->Buffer).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FKinematicTarget *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = (this->Buffer).ArrayNum;
    piVar2 = &(this->Buffer).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar9->AllocatorInstance,piVar2);
      (this->Buffer).ArrayNum = iVar7;
    }
    (this->Buffer).ArrayNum = iVar7 + 1;
    *(ulonglong *)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         CONCAT44(FStack_34,local_38);
  }
  this->Next = this->Next + 1;
  iVar7 = this->Capacity;
  if (this->Next == iVar7) {
    this->Next = 0;
  }
  iVar10 = this->NumValid + 1;
  if (iVar10 < iVar7) {
    iVar7 = iVar10;
  }
  this->NumValid = iVar7;
  return pFVar8;
}

// WriteAccessImp<0> @ 1440c9590

FPBDJointSettings * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::WriteAccessImp<0>
          (TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FPBDJointSettings *pFVar8;
  TArray<Chaos::FPropertyInterval,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  int local_res8 [2];
  FFrameAndPhase local_res10 [2];
  int local_38;
  FFrameAndPhase FStack_34;
  FScriptContainerElement *local_30;
  FFrameAndPhase *local_28;
  
  local_res10[0] = param_1;
  if (this->NumValid != 0) {
    iVar7 = this->Next;
    if (iVar7 == 0) {
      iVar7 = (this->Buffer).ArrayNum;
    }
    uVar1 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar1 < (this->Buffer).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FPBDJointSettings *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = SPULL(local_res10[0],0,0x1e);
    pFVar3 = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar1 * 8 + 4;
    iVar10 = (int)(*(uint *)pFVar3 * 4) >> 2;
    if ((iVar7 <= iVar10) &&
       ((iVar10 != iVar7 || (((uint)local_res10[0] & 0xc0000000) < (*(uint *)pFVar3 & 0xc0000000))))
       ) {
      local_28 = local_res10;
      local_30 = pFVar3;
      `Chaos::TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::WriteAccessImp<0>'::__l10::
      <lambda_2>::operator()(&local_30);
    }
    if ((((*(uint *)pFVar3 ^ (uint)local_res10[0]) & 0x3fffffff) == 0) &&
       (((*(uint *)pFVar3 ^ (uint)local_res10[0]) & 0xc0000000) == 0)) {
      return (FPBDJointSettings *)0x0;
    }
  }
  pTVar9 = &this->Buffer;
  iVar7 = this->Next;
  if (iVar7 < (this->Buffer).ArrayNum) {
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FPBDJointSettings *)(*pcVar4)();
      return pFVar8;
    }
    pFVar3 = (pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8;
    *(FFrameAndPhase *)(pFVar3 + 4) = local_res10[0];
    pFVar8 = TPropertyPool<Chaos::FPBDJointSettings>::GetElement
                       (&param_2->JointSettingsPool,*(int *)pFVar3);
  }
  else {
    pFVar8 = TPropertyPool<Chaos::FPBDJointSettings>::AddElement
                       (&param_2->JointSettingsPool,local_res8);
    pFVar3 = (pTVar9->AllocatorInstance).Data;
    local_38 = local_res8[0];
    FStack_34 = local_res10[0];
    if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(this->Buffer).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FPBDJointSettings *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = (this->Buffer).ArrayNum;
    piVar2 = &(this->Buffer).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar9->AllocatorInstance,piVar2);
      (this->Buffer).ArrayNum = iVar7;
    }
    (this->Buffer).ArrayNum = iVar7 + 1;
    *(ulonglong *)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         CONCAT44(FStack_34,local_38);
  }
  this->Next = this->Next + 1;
  iVar7 = this->Capacity;
  if (this->Next == iVar7) {
    this->Next = 0;
  }
  iVar10 = this->NumValid + 1;
  if (iVar10 < iVar7) {
    iVar7 = iVar10;
  }
  this->NumValid = iVar7;
  return pFVar8;
}

// WriteAccessImp<0> @ 1440c9810

FParticleDynamicMisc * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::WriteAccessImp<0>
          (TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FParticleDynamicMisc *pFVar8;
  TArray<Chaos::FPropertyInterval,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  int local_res8 [2];
  FFrameAndPhase local_res10 [2];
  int local_38;
  FFrameAndPhase FStack_34;
  FScriptContainerElement *local_30;
  FFrameAndPhase *local_28;
  
  local_res10[0] = param_1;
  if (this->NumValid != 0) {
    iVar7 = this->Next;
    if (iVar7 == 0) {
      iVar7 = (this->Buffer).ArrayNum;
    }
    uVar1 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar1 < (this->Buffer).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticleDynamicMisc *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = SPULL(local_res10[0],0,0x1e);
    pFVar3 = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar1 * 8 + 4;
    iVar10 = (int)(*(uint *)pFVar3 * 4) >> 2;
    if ((iVar7 <= iVar10) &&
       ((iVar10 != iVar7 || (((uint)local_res10[0] & 0xc0000000) < (*(uint *)pFVar3 & 0xc0000000))))
       ) {
      local_28 = local_res10;
      local_30 = pFVar3;
      `Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::WriteAccessImp<0>'::__l10::
      <lambda_2>::operator()(&local_30);
    }
    if ((((*(uint *)pFVar3 ^ (uint)local_res10[0]) & 0x3fffffff) == 0) &&
       (((*(uint *)pFVar3 ^ (uint)local_res10[0]) & 0xc0000000) == 0)) {
      return (FParticleDynamicMisc *)0x0;
    }
  }
  pTVar9 = &this->Buffer;
  iVar7 = this->Next;
  if (iVar7 < (this->Buffer).ArrayNum) {
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticleDynamicMisc *)(*pcVar4)();
      return pFVar8;
    }
    pFVar3 = (pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8;
    *(FFrameAndPhase *)(pFVar3 + 4) = local_res10[0];
    pFVar8 = TPropertyPool<Chaos::FParticleDynamicMisc>::GetElement
                       (&param_2->DynamicMiscPool,*(int *)pFVar3);
  }
  else {
    pFVar8 = TPropertyPool<Chaos::FParticleDynamicMisc>::AddElement
                       (&param_2->DynamicMiscPool,local_res8);
    pFVar3 = (pTVar9->AllocatorInstance).Data;
    local_38 = local_res8[0];
    FStack_34 = local_res10[0];
    if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(this->Buffer).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticleDynamicMisc *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = (this->Buffer).ArrayNum;
    piVar2 = &(this->Buffer).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar9->AllocatorInstance,piVar2);
      (this->Buffer).ArrayNum = iVar7;
    }
    (this->Buffer).ArrayNum = iVar7 + 1;
    *(ulonglong *)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         CONCAT44(FStack_34,local_38);
  }
  this->Next = this->Next + 1;
  iVar7 = this->Capacity;
  if (this->Next == iVar7) {
    this->Next = 0;
  }
  iVar10 = this->NumValid + 1;
  if (iVar10 < iVar7) {
    iVar7 = iVar10;
  }
  this->NumValid = iVar7;
  return pFVar8;
}

// WriteAccessImp<0> @ 1440c9a90

FParticleDynamics * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::WriteAccessImp<0>
          (TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FParticleDynamics *pFVar8;
  TArray<Chaos::FPropertyInterval,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  int local_res8 [2];
  FFrameAndPhase local_res10 [2];
  int local_38;
  FFrameAndPhase FStack_34;
  FScriptContainerElement *local_30;
  FFrameAndPhase *local_28;
  
  local_res10[0] = param_1;
  if (this->NumValid != 0) {
    iVar7 = this->Next;
    if (iVar7 == 0) {
      iVar7 = (this->Buffer).ArrayNum;
    }
    uVar1 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar1 < (this->Buffer).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticleDynamics *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = SPULL(local_res10[0],0,0x1e);
    pFVar3 = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar1 * 8 + 4;
    iVar10 = (int)(*(uint *)pFVar3 * 4) >> 2;
    if ((iVar7 <= iVar10) &&
       ((iVar10 != iVar7 || (((uint)local_res10[0] & 0xc0000000) < (*(uint *)pFVar3 & 0xc0000000))))
       ) {
      local_28 = local_res10;
      local_30 = pFVar3;
      `Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::WriteAccessImp<0>'::__l10::
      <lambda_2>::operator()(&local_30);
    }
    if ((((*(uint *)pFVar3 ^ (uint)local_res10[0]) & 0x3fffffff) == 0) &&
       (((*(uint *)pFVar3 ^ (uint)local_res10[0]) & 0xc0000000) == 0)) {
      return (FParticleDynamics *)0x0;
    }
  }
  pTVar9 = &this->Buffer;
  iVar7 = this->Next;
  if (iVar7 < (this->Buffer).ArrayNum) {
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticleDynamics *)(*pcVar4)();
      return pFVar8;
    }
    pFVar3 = (pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8;
    *(FFrameAndPhase *)(pFVar3 + 4) = local_res10[0];
    pFVar8 = TPropertyPool<Chaos::FParticleDynamics>::GetElement
                       (&param_2->DynamicsPool,*(int *)pFVar3);
  }
  else {
    pFVar8 = TPropertyPool<Chaos::FParticleDynamics>::AddElement(&param_2->DynamicsPool,local_res8);
    pFVar3 = (pTVar9->AllocatorInstance).Data;
    local_38 = local_res8[0];
    FStack_34 = local_res10[0];
    if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(this->Buffer).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticleDynamics *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = (this->Buffer).ArrayNum;
    piVar2 = &(this->Buffer).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar9->AllocatorInstance,piVar2);
      (this->Buffer).ArrayNum = iVar7;
    }
    (this->Buffer).ArrayNum = iVar7 + 1;
    *(ulonglong *)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         CONCAT44(FStack_34,local_38);
  }
  this->Next = this->Next + 1;
  iVar7 = this->Capacity;
  if (this->Next == iVar7) {
    this->Next = 0;
  }
  iVar10 = this->NumValid + 1;
  if (iVar10 < iVar7) {
    iVar7 = iVar10;
  }
  this->NumValid = iVar7;
  return pFVar8;
}

// WriteAccessImp<0> @ 1440c9d10

FParticleMassProps * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::WriteAccessImp<0>
          (TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FParticleMassProps *pFVar8;
  TArray<Chaos::FPropertyInterval,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  int local_res8 [2];
  FFrameAndPhase local_res10 [2];
  int local_38;
  FFrameAndPhase FStack_34;
  FScriptContainerElement *local_30;
  FFrameAndPhase *local_28;
  
  local_res10[0] = param_1;
  if (this->NumValid != 0) {
    iVar7 = this->Next;
    if (iVar7 == 0) {
      iVar7 = (this->Buffer).ArrayNum;
    }
    uVar1 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar1 < (this->Buffer).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticleMassProps *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = SPULL(local_res10[0],0,0x1e);
    pFVar3 = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar1 * 8 + 4;
    iVar10 = (int)(*(uint *)pFVar3 * 4) >> 2;
    if ((iVar7 <= iVar10) &&
       ((iVar10 != iVar7 || (((uint)local_res10[0] & 0xc0000000) < (*(uint *)pFVar3 & 0xc0000000))))
       ) {
      local_28 = local_res10;
      local_30 = pFVar3;
      `Chaos::TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::WriteAccessImp<0>'::__l10::
      <lambda_2>::operator()(&local_30);
    }
    if ((((*(uint *)pFVar3 ^ (uint)local_res10[0]) & 0x3fffffff) == 0) &&
       (((*(uint *)pFVar3 ^ (uint)local_res10[0]) & 0xc0000000) == 0)) {
      return (FParticleMassProps *)0x0;
    }
  }
  pTVar9 = &this->Buffer;
  iVar7 = this->Next;
  if (iVar7 < (this->Buffer).ArrayNum) {
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticleMassProps *)(*pcVar4)();
      return pFVar8;
    }
    pFVar3 = (pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8;
    *(FFrameAndPhase *)(pFVar3 + 4) = local_res10[0];
    pFVar8 = TPropertyPool<Chaos::FParticleMassProps>::GetElement
                       (&param_2->MassPropsPool,*(int *)pFVar3);
  }
  else {
    pFVar8 = TPropertyPool<Chaos::FParticleMassProps>::AddElement
                       (&param_2->MassPropsPool,local_res8);
    pFVar3 = (pTVar9->AllocatorInstance).Data;
    local_38 = local_res8[0];
    FStack_34 = local_res10[0];
    if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(this->Buffer).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticleMassProps *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = (this->Buffer).ArrayNum;
    piVar2 = &(this->Buffer).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar9->AllocatorInstance,piVar2);
      (this->Buffer).ArrayNum = iVar7;
    }
    (this->Buffer).ArrayNum = iVar7 + 1;
    *(ulonglong *)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         CONCAT44(FStack_34,local_38);
  }
  this->Next = this->Next + 1;
  iVar7 = this->Capacity;
  if (this->Next == iVar7) {
    this->Next = 0;
  }
  iVar10 = this->NumValid + 1;
  if (iVar10 < iVar7) {
    iVar7 = iVar10;
  }
  this->NumValid = iVar7;
  return pFVar8;
}

// WriteAccessImp<0> @ 1440c9f90

FParticleNonFrequentData * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::WriteAccessImp<0>
          (TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1> *this,FFrameAndPhase param_1
          ,FDirtyPropertiesPool *param_2)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FParticleNonFrequentData *pFVar8;
  TArray<Chaos::FPropertyInterval,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  int local_res8 [2];
  FFrameAndPhase local_res10 [2];
  int local_38;
  FFrameAndPhase FStack_34;
  FScriptContainerElement *local_30;
  FFrameAndPhase *local_28;
  
  local_res10[0] = param_1;
  if (this->NumValid != 0) {
    iVar7 = this->Next;
    if (iVar7 == 0) {
      iVar7 = (this->Buffer).ArrayNum;
    }
    uVar1 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar1 < (this->Buffer).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticleNonFrequentData *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = SPULL(local_res10[0],0,0x1e);
    pFVar3 = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar1 * 8 + 4;
    iVar10 = (int)(*(uint *)pFVar3 * 4) >> 2;
    if ((iVar7 <= iVar10) &&
       ((iVar10 != iVar7 || (((uint)local_res10[0] & 0xc0000000) < (*(uint *)pFVar3 & 0xc0000000))))
       ) {
      local_28 = local_res10;
      local_30 = pFVar3;
      `Chaos::TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::WriteAccessImp<0>'::
      __l10::<lambda_2>::operator()(&local_30);
    }
    if ((((*(uint *)pFVar3 ^ (uint)local_res10[0]) & 0x3fffffff) == 0) &&
       (((*(uint *)pFVar3 ^ (uint)local_res10[0]) & 0xc0000000) == 0)) {
      return (FParticleNonFrequentData *)0x0;
    }
  }
  pTVar9 = &this->Buffer;
  iVar7 = this->Next;
  if (iVar7 < (this->Buffer).ArrayNum) {
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticleNonFrequentData *)(*pcVar4)();
      return pFVar8;
    }
    pFVar3 = (pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8;
    *(FFrameAndPhase *)(pFVar3 + 4) = local_res10[0];
    pFVar8 = TPropertyPool<Chaos::FParticleNonFrequentData>::GetElement
                       (&param_2->NonFrequentDataPool,*(int *)pFVar3);
  }
  else {
    pFVar8 = TPropertyPool<Chaos::FParticleNonFrequentData>::AddElement
                       (&param_2->NonFrequentDataPool,local_res8);
    pFVar3 = (pTVar9->AllocatorInstance).Data;
    local_38 = local_res8[0];
    FStack_34 = local_res10[0];
    if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(this->Buffer).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticleNonFrequentData *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = (this->Buffer).ArrayNum;
    piVar2 = &(this->Buffer).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar9->AllocatorInstance,piVar2);
      (this->Buffer).ArrayNum = iVar7;
    }
    (this->Buffer).ArrayNum = iVar7 + 1;
    *(ulonglong *)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         CONCAT44(FStack_34,local_38);
  }
  this->Next = this->Next + 1;
  iVar7 = this->Capacity;
  if (this->Next == iVar7) {
    this->Next = 0;
  }
  iVar10 = this->NumValid + 1;
  if (iVar10 < iVar7) {
    iVar7 = iVar10;
  }
  this->NumValid = iVar7;
  return pFVar8;
}

// WriteAccessImp<0> @ 1440ca210

FParticlePositionRotation * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::WriteAccessImp<0>
          (TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *this,
          FFrameAndPhase param_1,FDirtyPropertiesPool *param_2)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FParticlePositionRotation *pFVar8;
  TArray<Chaos::FPropertyInterval,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  int local_res8 [2];
  FFrameAndPhase local_res10 [2];
  int local_38;
  FFrameAndPhase FStack_34;
  FScriptContainerElement *local_30;
  FFrameAndPhase *local_28;
  
  local_res10[0] = param_1;
  if (this->NumValid != 0) {
    iVar7 = this->Next;
    if (iVar7 == 0) {
      iVar7 = (this->Buffer).ArrayNum;
    }
    uVar1 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar1 < (this->Buffer).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticlePositionRotation *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = SPULL(local_res10[0],0,0x1e);
    pFVar3 = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar1 * 8 + 4;
    iVar10 = (int)(*(uint *)pFVar3 * 4) >> 2;
    if ((iVar7 <= iVar10) &&
       ((iVar10 != iVar7 || (((uint)local_res10[0] & 0xc0000000) < (*(uint *)pFVar3 & 0xc0000000))))
       ) {
      local_28 = local_res10;
      local_30 = pFVar3;
      `Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::WriteAccessImp<0>'::
      __l10::<lambda_2>::operator()(&local_30);
    }
    if ((((*(uint *)pFVar3 ^ (uint)local_res10[0]) & 0x3fffffff) == 0) &&
       (((*(uint *)pFVar3 ^ (uint)local_res10[0]) & 0xc0000000) == 0)) {
      return (FParticlePositionRotation *)0x0;
    }
  }
  pTVar9 = &this->Buffer;
  iVar7 = this->Next;
  if (iVar7 < (this->Buffer).ArrayNum) {
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticlePositionRotation *)(*pcVar4)();
      return pFVar8;
    }
    pFVar3 = (pTVar9->AllocatorInstance).Data;
    *(FFrameAndPhase *)(pFVar3 + (longlong)iVar7 * 8 + 4) = local_res10[0];
    pFVar8 = TPropertyPool<Chaos::FParticlePositionRotation>::GetElement
                       (&param_2->XRPool,*(int *)(pFVar3 + (longlong)iVar7 * 8));
  }
  else {
    pFVar8 = TPropertyPool<Chaos::FParticlePositionRotation>::AddElement
                       (&param_2->XRPool,local_res8);
    pFVar3 = (pTVar9->AllocatorInstance).Data;
    local_38 = local_res8[0];
    FStack_34 = local_res10[0];
    if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(this->Buffer).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticlePositionRotation *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = (this->Buffer).ArrayNum;
    piVar2 = &(this->Buffer).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar9->AllocatorInstance,piVar2);
      (this->Buffer).ArrayNum = iVar7;
    }
    (this->Buffer).ArrayNum = iVar7 + 1;
    *(ulonglong *)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         CONCAT44(FStack_34,local_38);
  }
  this->Next = this->Next + 1;
  iVar7 = this->Capacity;
  if (this->Next == iVar7) {
    this->Next = 0;
  }
  iVar10 = this->NumValid + 1;
  if (iVar10 < iVar7) {
    iVar7 = iVar10;
  }
  this->NumValid = iVar7;
  return pFVar8;
}

// WriteAccessImp<0> @ 1440ca480

FParticleVelocities * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::WriteAccessImp<0>
          (TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FParticleVelocities *pFVar8;
  TArray<Chaos::FPropertyInterval,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  int local_res8 [2];
  FFrameAndPhase local_res10 [2];
  int local_38;
  FFrameAndPhase FStack_34;
  FScriptContainerElement *local_30;
  FFrameAndPhase *local_28;
  
  local_res10[0] = param_1;
  if (this->NumValid != 0) {
    iVar7 = this->Next;
    if (iVar7 == 0) {
      iVar7 = (this->Buffer).ArrayNum;
    }
    uVar1 = iVar7 - 1;
    uVar6 = 0;
    if ((int)uVar1 < (this->Buffer).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticleVelocities *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = SPULL(local_res10[0],0,0x1e);
    pFVar3 = (this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar1 * 8 + 4;
    iVar10 = (int)(*(uint *)pFVar3 * 4) >> 2;
    if ((iVar7 <= iVar10) &&
       ((iVar10 != iVar7 || (((uint)local_res10[0] & 0xc0000000) < (*(uint *)pFVar3 & 0xc0000000))))
       ) {
      local_28 = local_res10;
      local_30 = pFVar3;
      `Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::WriteAccessImp<0>'::__l10::
      <lambda_2>::operator()(&local_30);
    }
    if ((((*(uint *)pFVar3 ^ (uint)local_res10[0]) & 0x3fffffff) == 0) &&
       (((*(uint *)pFVar3 ^ (uint)local_res10[0]) & 0xc0000000) == 0)) {
      return (FParticleVelocities *)0x0;
    }
  }
  pTVar9 = &this->Buffer;
  iVar7 = this->Next;
  if (iVar7 < (this->Buffer).ArrayNum) {
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticleVelocities *)(*pcVar4)();
      return pFVar8;
    }
    pFVar3 = (pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8;
    *(FFrameAndPhase *)(pFVar3 + 4) = local_res10[0];
    pFVar8 = TPropertyPool<Chaos::FParticleVelocities>::GetElement
                       (&param_2->VelocitiesPool,*(int *)pFVar3);
  }
  else {
    pFVar8 = TPropertyPool<Chaos::FParticleVelocities>::AddElement
                       (&param_2->VelocitiesPool,local_res8);
    pFVar3 = (pTVar9->AllocatorInstance).Data;
    local_38 = local_res8[0];
    FStack_34 = local_res10[0];
    if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(this->Buffer).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FParticleVelocities *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = (this->Buffer).ArrayNum;
    piVar2 = &(this->Buffer).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar9->AllocatorInstance,piVar2);
      (this->Buffer).ArrayNum = iVar7;
    }
    (this->Buffer).ArrayNum = iVar7 + 1;
    *(ulonglong *)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         CONCAT44(FStack_34,local_38);
  }
  this->Next = this->Next + 1;
  iVar7 = this->Capacity;
  if (this->Next == iVar7) {
    this->Next = 0;
  }
  iVar10 = this->NumValid + 1;
  if (iVar10 < iVar7) {
    iVar7 = iVar10;
  }
  this->NumValid = iVar7;
  return pFVar8;
}

// FindIdx @ 1440e16a0

int __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::FindIdx
          (TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0> *this,FFrameAndPhase param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = this->Next;
  iVar4 = 0;
  uVar9 = 0xffffffff;
  if (0 < this->NumValid) {
    iVar7 = param_1.Frame;
    uVar8 = 0xffffffff;
    do {
      uVar6 = uVar6 - 1;
      if ((int)uVar6 < 0) {
        uVar6 = (this->Buffer).ArrayNum - 1;
      }
      uVar3 = 0;
      if ((int)uVar6 < (this->Buffer).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      uVar3 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8 + 4);
      iVar5 = (int)(uVar3 * 4) >> 2;
      if ((iVar5 < iVar7) ||
         ((iVar5 == iVar7 && ((uVar3 & 0xc0000000) < ((uint)param_1 & 0xc0000000))))) break;
      iVar4 = iVar4 + 1;
      uVar8 = uVar6;
    } while (iVar4 < this->NumValid);
    if (uVar8 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar8 < (this->Buffer).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      uVar6 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar8 * 8 + 4);
      bVar2 = false;
      if (((int)(uVar6 * 4) >> 2 == iVar7) &&
         (bVar2 = false, ((uVar6 ^ (uint)param_1) & 0xc0000000) == 0)) {
        bVar2 = true;
      }
      uVar9 = 0xffffffff;
      if (bVar2) {
        uVar9 = uVar8;
      }
    }
  }
  return uVar9;
}

// FindIdx @ 1440e1830

int __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::FindIdx
          (TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1> *this,FFrameAndPhase param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = this->Next;
  iVar4 = 0;
  if (this->NumValid < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    iVar8 = param_1.Frame;
    uVar6 = 0xffffffff;
    do {
      uVar7 = uVar7 - 1;
      if ((int)uVar7 < 0) {
        uVar7 = (this->Buffer).ArrayNum - 1;
      }
      uVar3 = 0;
      if ((int)uVar7 < (this->Buffer).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      uVar3 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar7 * 8 + 4);
      iVar5 = (int)(uVar3 * 4) >> 2;
    } while ((iVar8 <= iVar5) &&
            (((iVar5 != iVar8 || (((uint)param_1 & 0xc0000000) <= (uVar3 & 0xc0000000))) &&
             (iVar4 = iVar4 + 1, uVar6 = uVar7, iVar4 < this->NumValid))));
  }
  return uVar6;
}

// FindIdx @ 1440e1930

int __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::FindIdx
          (TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1> *this,FFrameAndPhase param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = this->Next;
  iVar4 = 0;
  if (this->NumValid < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    iVar8 = param_1.Frame;
    uVar6 = 0xffffffff;
    do {
      uVar7 = uVar7 - 1;
      if ((int)uVar7 < 0) {
        uVar7 = (this->Buffer).ArrayNum - 1;
      }
      uVar3 = 0;
      if ((int)uVar7 < (this->Buffer).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      uVar3 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar7 * 8 + 4);
      iVar5 = (int)(uVar3 * 4) >> 2;
    } while ((iVar8 <= iVar5) &&
            (((iVar5 != iVar8 || (((uint)param_1 & 0xc0000000) <= (uVar3 & 0xc0000000))) &&
             (iVar4 = iVar4 + 1, uVar6 = uVar7, iVar4 < this->NumValid))));
  }
  return uVar6;
}

// FindIdx @ 1440e1a30

int __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0>::FindIdx
          (TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0> *this,FFrameAndPhase param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = this->Next;
  iVar4 = 0;
  uVar9 = 0xffffffff;
  if (0 < this->NumValid) {
    iVar7 = param_1.Frame;
    uVar8 = 0xffffffff;
    do {
      uVar6 = uVar6 - 1;
      if ((int)uVar6 < 0) {
        uVar6 = (this->Buffer).ArrayNum - 1;
      }
      uVar3 = 0;
      if ((int)uVar6 < (this->Buffer).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      uVar3 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8 + 4);
      iVar5 = (int)(uVar3 * 4) >> 2;
      if ((iVar5 < iVar7) ||
         ((iVar5 == iVar7 && ((uVar3 & 0xc0000000) < ((uint)param_1 & 0xc0000000))))) break;
      iVar4 = iVar4 + 1;
      uVar8 = uVar6;
    } while (iVar4 < this->NumValid);
    if (uVar8 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar8 < (this->Buffer).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      uVar6 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar8 * 8 + 4);
      bVar2 = false;
      if (((int)(uVar6 * 4) >> 2 == iVar7) &&
         (bVar2 = false, ((uVar6 ^ (uint)param_1) & 0xc0000000) == 0)) {
        bVar2 = true;
      }
      uVar9 = 0xffffffff;
      if (bVar2) {
        uVar9 = uVar8;
      }
    }
  }
  return uVar9;
}

// FindIdx @ 1440e1bc0

int __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::FindIdx
          (TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0> *this,FFrameAndPhase param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = this->Next;
  iVar4 = 0;
  uVar9 = 0xffffffff;
  if (0 < this->NumValid) {
    iVar7 = param_1.Frame;
    uVar8 = 0xffffffff;
    do {
      uVar6 = uVar6 - 1;
      if ((int)uVar6 < 0) {
        uVar6 = (this->Buffer).ArrayNum - 1;
      }
      uVar3 = 0;
      if ((int)uVar6 < (this->Buffer).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      uVar3 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8 + 4);
      iVar5 = (int)(uVar3 * 4) >> 2;
      if ((iVar5 < iVar7) ||
         ((iVar5 == iVar7 && ((uVar3 & 0xc0000000) < ((uint)param_1 & 0xc0000000))))) break;
      iVar4 = iVar4 + 1;
      uVar8 = uVar6;
    } while (iVar4 < this->NumValid);
    if (uVar8 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar8 < (this->Buffer).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      uVar6 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar8 * 8 + 4);
      bVar2 = false;
      if (((int)(uVar6 * 4) >> 2 == iVar7) &&
         (bVar2 = false, ((uVar6 ^ (uint)param_1) & 0xc0000000) == 0)) {
        bVar2 = true;
      }
      uVar9 = 0xffffffff;
      if (bVar2) {
        uVar9 = uVar8;
      }
    }
  }
  return uVar9;
}

// FindIdx @ 1440e1d50

int __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::FindIdx
          (TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1> *this,FFrameAndPhase param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = this->Next;
  iVar4 = 0;
  if (this->NumValid < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    iVar8 = param_1.Frame;
    uVar6 = 0xffffffff;
    do {
      uVar7 = uVar7 - 1;
      if ((int)uVar7 < 0) {
        uVar7 = (this->Buffer).ArrayNum - 1;
      }
      uVar3 = 0;
      if ((int)uVar7 < (this->Buffer).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      uVar3 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar7 * 8 + 4);
      iVar5 = (int)(uVar3 * 4) >> 2;
    } while ((iVar8 <= iVar5) &&
            (((iVar5 != iVar8 || (((uint)param_1 & 0xc0000000) <= (uVar3 & 0xc0000000))) &&
             (iVar4 = iVar4 + 1, uVar6 = uVar7, iVar4 < this->NumValid))));
  }
  return uVar6;
}

// FindIdx @ 1440e1e50

int __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::FindIdx
          (TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1> *this,FFrameAndPhase param_1
          )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = this->Next;
  iVar4 = 0;
  if (this->NumValid < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    iVar8 = param_1.Frame;
    uVar6 = 0xffffffff;
    do {
      uVar7 = uVar7 - 1;
      if ((int)uVar7 < 0) {
        uVar7 = (this->Buffer).ArrayNum - 1;
      }
      uVar3 = 0;
      if ((int)uVar7 < (this->Buffer).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      uVar3 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar7 * 8 + 4);
      iVar5 = (int)(uVar3 * 4) >> 2;
    } while ((iVar8 <= iVar5) &&
            (((iVar5 != iVar8 || (((uint)param_1 & 0xc0000000) <= (uVar3 & 0xc0000000))) &&
             (iVar4 = iVar4 + 1, uVar6 = uVar7, iVar4 < this->NumValid))));
  }
  return uVar6;
}

// FindIdx @ 1440e1f50

int __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::FindIdx
          (TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *this,
          FFrameAndPhase param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = this->Next;
  iVar4 = 0;
  if (this->NumValid < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    iVar8 = param_1.Frame;
    uVar6 = 0xffffffff;
    do {
      uVar7 = uVar7 - 1;
      if ((int)uVar7 < 0) {
        uVar7 = (this->Buffer).ArrayNum - 1;
      }
      uVar3 = 0;
      if ((int)uVar7 < (this->Buffer).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      uVar3 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar7 * 8 + 4);
      iVar5 = (int)(uVar3 * 4) >> 2;
    } while ((iVar8 <= iVar5) &&
            (((iVar5 != iVar8 || (((uint)param_1 & 0xc0000000) <= (uVar3 & 0xc0000000))) &&
             (iVar4 = iVar4 + 1, uVar6 = uVar7, iVar4 < this->NumValid))));
  }
  return uVar6;
}

// FindIdx @ 1440e2050

int __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0>::FindIdx
          (TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0> *this,
          FFrameAndPhase param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = this->Next;
  iVar4 = 0;
  uVar9 = 0xffffffff;
  if (0 < this->NumValid) {
    iVar7 = param_1.Frame;
    uVar8 = 0xffffffff;
    do {
      uVar6 = uVar6 - 1;
      if ((int)uVar6 < 0) {
        uVar6 = (this->Buffer).ArrayNum - 1;
      }
      uVar3 = 0;
      if ((int)uVar6 < (this->Buffer).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      uVar3 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8 + 4);
      iVar5 = (int)(uVar3 * 4) >> 2;
      if ((iVar5 < iVar7) ||
         ((iVar5 == iVar7 && ((uVar3 & 0xc0000000) < ((uint)param_1 & 0xc0000000))))) break;
      iVar4 = iVar4 + 1;
      uVar8 = uVar6;
    } while (iVar4 < this->NumValid);
    if (uVar8 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar8 < (this->Buffer).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      uVar6 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar8 * 8 + 4);
      bVar2 = false;
      if (((int)(uVar6 * 4) >> 2 == iVar7) &&
         (bVar2 = false, ((uVar6 ^ (uint)param_1) & 0xc0000000) == 0)) {
        bVar2 = true;
      }
      uVar9 = 0xffffffff;
      if (bVar2) {
        uVar9 = uVar8;
      }
    }
  }
  return uVar9;
}

// FindIdx @ 1440e21e0

int __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::FindIdx
          (TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1> *this,FFrameAndPhase param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = this->Next;
  iVar4 = 0;
  if (this->NumValid < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    iVar8 = param_1.Frame;
    uVar6 = 0xffffffff;
    do {
      uVar7 = uVar7 - 1;
      if ((int)uVar7 < 0) {
        uVar7 = (this->Buffer).ArrayNum - 1;
      }
      uVar3 = 0;
      if ((int)uVar7 < (this->Buffer).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      uVar3 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar7 * 8 + 4);
      iVar5 = (int)(uVar3 * 4) >> 2;
    } while ((iVar8 <= iVar5) &&
            (((iVar5 != iVar8 || (((uint)param_1 & 0xc0000000) <= (uVar3 & 0xc0000000))) &&
             (iVar4 = iVar4 + 1, uVar6 = uVar7, iVar4 < this->NumValid))));
  }
  return uVar6;
}

// FindIdx @ 1440e22e0

int __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0>::FindIdx
          (TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0> *this,FFrameAndPhase param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = this->Next;
  iVar4 = 0;
  uVar9 = 0xffffffff;
  if (0 < this->NumValid) {
    iVar7 = param_1.Frame;
    uVar8 = 0xffffffff;
    do {
      uVar6 = uVar6 - 1;
      if ((int)uVar6 < 0) {
        uVar6 = (this->Buffer).ArrayNum - 1;
      }
      uVar3 = 0;
      if ((int)uVar6 < (this->Buffer).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      uVar3 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8 + 4);
      iVar5 = (int)(uVar3 * 4) >> 2;
      if ((iVar5 < iVar7) ||
         ((iVar5 == iVar7 && ((uVar3 & 0xc0000000) < ((uint)param_1 & 0xc0000000))))) break;
      iVar4 = iVar4 + 1;
      uVar8 = uVar6;
    } while (iVar4 < this->NumValid);
    if (uVar8 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar8 < (this->Buffer).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      uVar6 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar8 * 8 + 4);
      bVar2 = false;
      if (((int)(uVar6 * 4) >> 2 == iVar7) &&
         (bVar2 = false, ((uVar6 ^ (uint)param_1) & 0xc0000000) == 0)) {
        bVar2 = true;
      }
      uVar9 = 0xffffffff;
      if (bVar2) {
        uVar9 = uVar8;
      }
    }
  }
  return uVar9;
}

// Insert @ 1440e7350

FParticleDynamicMisc * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0>::Insert
          (TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FParticleDynamicMisc *pFVar10;
  uint uVar11;
  uint uVar12;
  int local_res20 [2];
  int local_54;
  int local_44;
  FFrameAndPhase FStack_40;
  FParticleDynamicMisc *local_38;
  
  uVar6 = FindIdx(this,param_1);
  iVar7 = (this->Buffer).ArrayNum;
  if (uVar6 == 0xffffffff) {
    iVar9 = this->Next;
    if (iVar9 < iVar7) {
      if ((iVar9 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FParticleDynamicMisc *)(*pcVar4)();
        return pFVar10;
      }
      local_res20[0] = *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)iVar9 * 8);
    }
    else {
      TPropertyPool<Chaos::FParticleDynamicMisc>::AddElement(&param_2->DynamicMiscPool,local_res20);
      pFVar2 = (this->Buffer).AllocatorInstance.Data;
      local_44 = local_res20[0];
      FStack_40 = param_1;
      if (((pFVar2 <= (FScriptContainerElement *)&local_44) &&
          ((FScriptContainerElement *)&local_44 < pFVar2 + (longlong)(this->Buffer).ArrayMax * 8))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FParticleDynamicMisc *)(*pcVar4)();
        return pFVar10;
      }
      iVar7 = (this->Buffer).ArrayNum;
      piVar1 = &(this->Buffer).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->Buffer).AllocatorInstance,piVar1);
      }
      (this->Buffer).ArrayNum = iVar7 + 1;
      *(ulonglong *)((this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8) =
           CONCAT44(FStack_40,local_44);
    }
    local_38 = TPropertyPool<Chaos::FParticleDynamicMisc>::GetElement
                         (&param_2->DynamicMiscPool,local_res20[0]);
    local_54 = 0;
    if (0 < this->NumValid) {
      iVar7 = param_1.Frame;
      uVar6 = this->Next;
      do {
        uVar12 = uVar6 - 1;
        if ((int)uVar12 < 0) {
          uVar12 = (this->Buffer).ArrayNum - 1;
        }
        uVar11 = ~uVar12 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar12 < (this->Buffer).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FParticleDynamicMisc *)(*pcVar4)();
          return pFVar10;
        }
        uVar8 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 8 + 4);
        iVar9 = (int)(uVar8 * 4) >> 2;
        if ((iVar9 < iVar7) ||
           ((iVar9 == iVar7 && ((uVar8 & 0xc0000000) < ((uint)param_1 & 0xc0000000))))) {
          uVar12 = 0;
          if ((int)uVar6 < (this->Buffer).ArrayNum) {
            uVar12 = ~uVar6 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FParticleDynamicMisc *)(*pcVar4)();
            return pFVar10;
          }
          iVar7 = local_res20[0];
          *(FFrameAndPhase *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8 + 4)
               = param_1;
          uVar12 = 0;
          if ((int)uVar6 < (this->Buffer).ArrayNum) {
            uVar12 = ~uVar6 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FParticleDynamicMisc *)(*pcVar4)();
            return pFVar10;
          }
          *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) = iVar7;
          break;
        }
        uVar8 = 0;
        if ((int)uVar12 < (this->Buffer).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FParticleDynamicMisc *)(*pcVar4)();
          return pFVar10;
        }
        uVar3 = *(undefined8 *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
        uVar8 = 0;
        if ((int)uVar6 < (this->Buffer).ArrayNum) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FParticleDynamicMisc *)(*pcVar4)();
          return pFVar10;
        }
        *(undefined8 *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) = uVar3;
        if (local_54 == this->NumValid + -1) {
          uVar6 = 0;
          if ((int)uVar12 < (this->Buffer).ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FParticleDynamicMisc *)(*pcVar4)();
            return pFVar10;
          }
          iVar9 = local_res20[0];
          *(FFrameAndPhase *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 8 + 4)
               = param_1;
          uVar6 = 0;
          if ((int)uVar12 < (this->Buffer).ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FParticleDynamicMisc *)(*pcVar4)();
            return pFVar10;
          }
          *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 8) = iVar9;
        }
        local_54 = local_54 + 1;
        uVar6 = uVar12;
      } while (local_54 < this->NumValid);
    }
    this->Next = this->Next + 1;
    iVar7 = this->Capacity;
    if (this->Next == iVar7) {
      this->Next = 0;
    }
    iVar9 = this->NumValid + 1;
    if (iVar9 < iVar7) {
      iVar7 = iVar9;
    }
    this->NumValid = iVar7;
  }
  else {
    uVar12 = 0;
    if ((int)uVar6 < iVar7) {
      uVar12 = ~uVar6 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FParticleDynamicMisc *)(*pcVar4)();
      return pFVar10;
    }
    local_38 = TPropertyPool<Chaos::FParticleDynamicMisc>::GetElement
                         (&param_2->DynamicMiscPool,
                          *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8)
                         );
  }
  return local_38;
}

// Insert @ 1440e7860

FParticlePositionRotation * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0>::Insert
          (TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0> *this,
          FFrameAndPhase param_1,FDirtyPropertiesPool *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FParticlePositionRotation *pFVar10;
  uint uVar11;
  uint uVar12;
  int local_res20 [2];
  int local_54;
  int local_44;
  FFrameAndPhase FStack_40;
  FParticlePositionRotation *local_38;
  
  uVar6 = FindIdx(this,param_1);
  iVar7 = (this->Buffer).ArrayNum;
  if (uVar6 == 0xffffffff) {
    iVar9 = this->Next;
    if (iVar9 < iVar7) {
      if ((iVar9 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FParticlePositionRotation *)(*pcVar4)();
        return pFVar10;
      }
      local_res20[0] = *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)iVar9 * 8);
    }
    else {
      TPropertyPool<Chaos::FParticlePositionRotation>::AddElement(&param_2->XRPool,local_res20);
      pFVar2 = (this->Buffer).AllocatorInstance.Data;
      local_44 = local_res20[0];
      FStack_40 = param_1;
      if (((pFVar2 <= (FScriptContainerElement *)&local_44) &&
          ((FScriptContainerElement *)&local_44 < pFVar2 + (longlong)(this->Buffer).ArrayMax * 8))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FParticlePositionRotation *)(*pcVar4)();
        return pFVar10;
      }
      iVar7 = (this->Buffer).ArrayNum;
      piVar1 = &(this->Buffer).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->Buffer).AllocatorInstance,piVar1);
      }
      (this->Buffer).ArrayNum = iVar7 + 1;
      *(ulonglong *)((this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8) =
           CONCAT44(FStack_40,local_44);
    }
    local_38 = TPropertyPool<Chaos::FParticlePositionRotation>::GetElement
                         (&param_2->XRPool,local_res20[0]);
    local_54 = 0;
    if (0 < this->NumValid) {
      iVar7 = param_1.Frame;
      uVar6 = this->Next;
      do {
        uVar12 = uVar6 - 1;
        if ((int)uVar12 < 0) {
          uVar12 = (this->Buffer).ArrayNum - 1;
        }
        uVar11 = ~uVar12 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar12 < (this->Buffer).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FParticlePositionRotation *)(*pcVar4)();
          return pFVar10;
        }
        uVar8 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 8 + 4);
        iVar9 = (int)(uVar8 * 4) >> 2;
        if ((iVar9 < iVar7) ||
           ((iVar9 == iVar7 && ((uVar8 & 0xc0000000) < ((uint)param_1 & 0xc0000000))))) {
          uVar12 = 0;
          if ((int)uVar6 < (this->Buffer).ArrayNum) {
            uVar12 = ~uVar6 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FParticlePositionRotation *)(*pcVar4)();
            return pFVar10;
          }
          iVar7 = local_res20[0];
          *(FFrameAndPhase *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8 + 4)
               = param_1;
          uVar12 = 0;
          if ((int)uVar6 < (this->Buffer).ArrayNum) {
            uVar12 = ~uVar6 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FParticlePositionRotation *)(*pcVar4)();
            return pFVar10;
          }
          *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) = iVar7;
          break;
        }
        uVar8 = 0;
        if ((int)uVar12 < (this->Buffer).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FParticlePositionRotation *)(*pcVar4)();
          return pFVar10;
        }
        uVar3 = *(undefined8 *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
        uVar8 = 0;
        if ((int)uVar6 < (this->Buffer).ArrayNum) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FParticlePositionRotation *)(*pcVar4)();
          return pFVar10;
        }
        *(undefined8 *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) = uVar3;
        if (local_54 == this->NumValid + -1) {
          uVar6 = 0;
          if ((int)uVar12 < (this->Buffer).ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FParticlePositionRotation *)(*pcVar4)();
            return pFVar10;
          }
          iVar9 = local_res20[0];
          *(FFrameAndPhase *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 8 + 4)
               = param_1;
          uVar6 = 0;
          if ((int)uVar12 < (this->Buffer).ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FParticlePositionRotation *)(*pcVar4)();
            return pFVar10;
          }
          *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 8) = iVar9;
        }
        local_54 = local_54 + 1;
        uVar6 = uVar12;
      } while (local_54 < this->NumValid);
    }
    this->Next = this->Next + 1;
    iVar7 = this->Capacity;
    if (this->Next == iVar7) {
      this->Next = 0;
    }
    iVar9 = this->NumValid + 1;
    if (iVar9 < iVar7) {
      iVar7 = iVar9;
    }
    this->NumValid = iVar7;
  }
  else {
    uVar12 = 0;
    if ((int)uVar6 < iVar7) {
      uVar12 = ~uVar6 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FParticlePositionRotation *)(*pcVar4)();
      return pFVar10;
    }
    local_38 = TPropertyPool<Chaos::FParticlePositionRotation>::GetElement
                         (&param_2->XRPool,
                          *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8)
                         );
  }
  return local_38;
}

// Insert @ 1440e7d60

FParticleVelocities * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0>::Insert
          (TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FParticleVelocities *pFVar10;
  uint uVar11;
  uint uVar12;
  int local_res20 [2];
  int local_54;
  int local_44;
  FFrameAndPhase FStack_40;
  FParticleVelocities *local_38;
  
  uVar6 = FindIdx(this,param_1);
  iVar7 = (this->Buffer).ArrayNum;
  if (uVar6 == 0xffffffff) {
    iVar9 = this->Next;
    if (iVar9 < iVar7) {
      if ((iVar9 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FParticleVelocities *)(*pcVar4)();
        return pFVar10;
      }
      local_res20[0] = *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)iVar9 * 8);
    }
    else {
      TPropertyPool<Chaos::FParticleVelocities>::AddElement(&param_2->VelocitiesPool,local_res20);
      pFVar2 = (this->Buffer).AllocatorInstance.Data;
      local_44 = local_res20[0];
      FStack_40 = param_1;
      if (((pFVar2 <= (FScriptContainerElement *)&local_44) &&
          ((FScriptContainerElement *)&local_44 < pFVar2 + (longlong)(this->Buffer).ArrayMax * 8))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FParticleVelocities *)(*pcVar4)();
        return pFVar10;
      }
      iVar7 = (this->Buffer).ArrayNum;
      piVar1 = &(this->Buffer).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->Buffer).AllocatorInstance,piVar1);
      }
      (this->Buffer).ArrayNum = iVar7 + 1;
      *(ulonglong *)((this->Buffer).AllocatorInstance.Data + (longlong)iVar7 * 8) =
           CONCAT44(FStack_40,local_44);
    }
    local_38 = TPropertyPool<Chaos::FParticleVelocities>::GetElement
                         (&param_2->VelocitiesPool,local_res20[0]);
    local_54 = 0;
    if (0 < this->NumValid) {
      iVar7 = param_1.Frame;
      uVar6 = this->Next;
      do {
        uVar12 = uVar6 - 1;
        if ((int)uVar12 < 0) {
          uVar12 = (this->Buffer).ArrayNum - 1;
        }
        uVar11 = ~uVar12 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar12 < (this->Buffer).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FParticleVelocities *)(*pcVar4)();
          return pFVar10;
        }
        uVar8 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 8 + 4);
        iVar9 = (int)(uVar8 * 4) >> 2;
        if ((iVar9 < iVar7) ||
           ((iVar9 == iVar7 && ((uVar8 & 0xc0000000) < ((uint)param_1 & 0xc0000000))))) {
          uVar12 = 0;
          if ((int)uVar6 < (this->Buffer).ArrayNum) {
            uVar12 = ~uVar6 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FParticleVelocities *)(*pcVar4)();
            return pFVar10;
          }
          iVar7 = local_res20[0];
          *(FFrameAndPhase *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8 + 4)
               = param_1;
          uVar12 = 0;
          if ((int)uVar6 < (this->Buffer).ArrayNum) {
            uVar12 = ~uVar6 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FParticleVelocities *)(*pcVar4)();
            return pFVar10;
          }
          *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) = iVar7;
          break;
        }
        uVar8 = 0;
        if ((int)uVar12 < (this->Buffer).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FParticleVelocities *)(*pcVar4)();
          return pFVar10;
        }
        uVar3 = *(undefined8 *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
        uVar8 = 0;
        if ((int)uVar6 < (this->Buffer).ArrayNum) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FParticleVelocities *)(*pcVar4)();
          return pFVar10;
        }
        *(undefined8 *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) = uVar3;
        if (local_54 == this->NumValid + -1) {
          uVar6 = 0;
          if ((int)uVar12 < (this->Buffer).ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FParticleVelocities *)(*pcVar4)();
            return pFVar10;
          }
          iVar9 = local_res20[0];
          *(FFrameAndPhase *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 8 + 4)
               = param_1;
          uVar6 = 0;
          if ((int)uVar12 < (this->Buffer).ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FParticleVelocities *)(*pcVar4)();
            return pFVar10;
          }
          *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 8) = iVar9;
        }
        local_54 = local_54 + 1;
        uVar6 = uVar12;
      } while (local_54 < this->NumValid);
    }
    this->Next = this->Next + 1;
    iVar7 = this->Capacity;
    if (this->Next == iVar7) {
      this->Next = 0;
    }
    iVar9 = this->NumValid + 1;
    if (iVar9 < iVar7) {
      iVar7 = iVar9;
    }
    this->NumValid = iVar7;
  }
  else {
    uVar12 = 0;
    if ((int)uVar6 < iVar7) {
      uVar12 = ~uVar6 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FParticleVelocities *)(*pcVar4)();
      return pFVar10;
    }
    local_38 = TPropertyPool<Chaos::FParticleVelocities>::GetElement
                         (&param_2->VelocitiesPool,
                          *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar6 * 8)
                         );
  }
  return local_38;
}

// Read @ 1440eda30

FKinematicTarget * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::Read
          (TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FKinematicTarget *pFVar5;
  
  uVar3 = FindIdx(this,param_1);
  pFVar5 = (FKinematicTarget *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FKinematicTarget *)(*pcVar1)();
      return pFVar5;
    }
    uVar3 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    uVar4 = 0;
    if ((int)uVar3 < (param_2->KinematicTargetPool).Elements.ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FKinematicTarget *)(*pcVar1)();
      return pFVar5;
    }
    pFVar5 = (FKinematicTarget *)
             ((param_2->KinematicTargetPool).Elements.AllocatorInstance.Data +
             (longlong)(int)uVar3 * 0x30);
  }
  return pFVar5;
}

// Read @ 1440edb30

FPBDJointSettings * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
          (TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FPBDJointSettings *pFVar5;
  
  uVar3 = FindIdx(this,param_1);
  pFVar5 = (FPBDJointSettings *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPBDJointSettings *)(*pcVar1)();
      return pFVar5;
    }
    uVar3 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    uVar4 = 0;
    if ((int)uVar3 < (param_2->JointSettingsPool).Elements.ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPBDJointSettings *)(*pcVar1)();
      return pFVar5;
    }
    pFVar5 = (FPBDJointSettings *)
             ((param_2->JointSettingsPool).Elements.AllocatorInstance.Data +
             (longlong)(int)uVar3 * 800);
  }
  return pFVar5;
}

// Read @ 1440edc30

FParticleDynamicMisc * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Read
          (TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FParticleDynamicMisc *pFVar5;
  
  uVar3 = FindIdx(this,param_1);
  pFVar5 = (FParticleDynamicMisc *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FParticleDynamicMisc *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar5 = TPropertyPool<Chaos::FParticleDynamicMisc>::GetElement
                       (&param_2->DynamicMiscPool,
                        *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8));
  }
  return pFVar5;
}

// Read @ 1440edcc0

FParticleDynamicMisc * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0>::Read
          (TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FParticleDynamicMisc *pFVar5;
  
  uVar3 = FindIdx(this,param_1);
  pFVar5 = (FParticleDynamicMisc *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FParticleDynamicMisc *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar5 = TPropertyPool<Chaos::FParticleDynamicMisc>::GetElement
                       (&param_2->DynamicMiscPool,
                        *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8));
  }
  return pFVar5;
}

// Read @ 1440edd50

FParticleDynamics * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::Read
          (TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FParticleDynamics *pFVar5;
  
  uVar3 = FindIdx(this,param_1);
  pFVar5 = (FParticleDynamics *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FParticleDynamics *)(*pcVar1)();
      return pFVar5;
    }
    uVar3 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    uVar4 = 0;
    if ((int)uVar3 < (param_2->DynamicsPool).Elements.ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FParticleDynamics *)(*pcVar1)();
      return pFVar5;
    }
    pFVar5 = (FParticleDynamics *)
             ((param_2->DynamicsPool).Elements.AllocatorInstance.Data + (longlong)(int)uVar3 * 0x30)
    ;
  }
  return pFVar5;
}

// Read @ 1440ede40

FParticleMassProps * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::Read
          (TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FParticleMassProps *pFVar5;
  
  uVar3 = FindIdx(this,param_1);
  pFVar5 = (FParticleMassProps *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FParticleMassProps *)(*pcVar1)();
      return pFVar5;
    }
    uVar3 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    uVar4 = 0;
    if ((int)uVar3 < (param_2->MassPropsPool).Elements.ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FParticleMassProps *)(*pcVar1)();
      return pFVar5;
    }
    pFVar5 = (FParticleMassProps *)
             ((param_2->MassPropsPool).Elements.AllocatorInstance.Data + (longlong)(int)uVar3 * 0x60
             );
  }
  return pFVar5;
}

// Read @ 1440edf40

FParticleNonFrequentData * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::Read
          (TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1> *this,FFrameAndPhase param_1
          ,FDirtyPropertiesPool *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FParticleNonFrequentData *pFVar5;
  
  uVar3 = FindIdx(this,param_1);
  pFVar5 = (FParticleNonFrequentData *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FParticleNonFrequentData *)(*pcVar1)();
      return pFVar5;
    }
    uVar3 = *(uint *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    uVar4 = 0;
    if ((int)uVar3 < (param_2->NonFrequentDataPool).Elements.ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FParticleNonFrequentData *)(*pcVar1)();
      return pFVar5;
    }
    pFVar5 = (FParticleNonFrequentData *)
             ((param_2->NonFrequentDataPool).Elements.AllocatorInstance.Data +
             (longlong)(int)uVar3 * 0x28);
  }
  return pFVar5;
}

// Read @ 1440ee040

FParticlePositionRotation * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Read
          (TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *this,
          FFrameAndPhase param_1,FDirtyPropertiesPool *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FParticlePositionRotation *pFVar5;
  
  uVar3 = FindIdx(this,param_1);
  pFVar5 = (FParticlePositionRotation *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FParticlePositionRotation *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar5 = TPropertyPool<Chaos::FParticlePositionRotation>::GetElement
                       (&param_2->XRPool,
                        *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8));
  }
  return pFVar5;
}

// Read @ 1440ee0d0

FParticlePositionRotation * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0>::Read
          (TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0> *this,
          FFrameAndPhase param_1,FDirtyPropertiesPool *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FParticlePositionRotation *pFVar5;
  
  uVar3 = FindIdx(this,param_1);
  pFVar5 = (FParticlePositionRotation *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FParticlePositionRotation *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar5 = TPropertyPool<Chaos::FParticlePositionRotation>::GetElement
                       (&param_2->XRPool,
                        *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8));
  }
  return pFVar5;
}

// Read @ 1440ee160

FParticleVelocities * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::Read
          (TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FParticleVelocities *pFVar5;
  
  uVar3 = FindIdx(this,param_1);
  pFVar5 = (FParticleVelocities *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FParticleVelocities *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar5 = TPropertyPool<Chaos::FParticleVelocities>::GetElement
                       (&param_2->VelocitiesPool,
                        *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8));
  }
  return pFVar5;
}

// Read @ 1440ee1f0

FParticleVelocities * __thiscall
Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0>::Read
          (TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0> *this,FFrameAndPhase param_1,
          FDirtyPropertiesPool *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FParticleVelocities *pFVar5;
  
  uVar3 = FindIdx(this,param_1);
  pFVar5 = (FParticleVelocities *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->Buffer).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FParticleVelocities *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar5 = TPropertyPool<Chaos::FParticleVelocities>::GetElement
                       (&param_2->VelocitiesPool,
                        *(int *)((this->Buffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8));
  }
  return pFVar5;
}

// operator() @ 1504ae240

bool __thiscall
`Chaos::TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::WriteAccessImp<1>'::__l8::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4501203830188278633>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4501203830188278633>,
                       &`public:___cdecl_`private:_class_Chaos::FKinematicTarget*___ptr64___cdecl_Chaos::TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::WriteAccessImp<1>(Chaos::FFrameAndPhase,Chaos::FDirtyPropertiesPool&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ae2c0

bool __thiscall
`Chaos::TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::WriteAccessImp<1>'::__l8::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4501203830188278633>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4501203830188278633>,
                       &`public:___cdecl_`private:_class_Chaos::FPBDJointSettings*___ptr64___cdecl_Chaos::TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::WriteAccessImp<1>(Chaos::FFrameAndPhase,Chaos::FDirtyPropertiesPool&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ae340

bool __thiscall
`Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::WriteAccessImp<1>'::__l8::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4501203830188278633>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4501203830188278633>,
                       &`public:___cdecl_`private:_class_Chaos::FParticleDynamicMisc*___ptr64___cdecl_Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::WriteAccessImp<1>(Chaos::FFrameAndPhase,Chaos::FDirtyPropertiesPool&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ae3c0

bool __thiscall
`Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::WriteAccessImp<1>'::__l8::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4501203830188278633>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4501203830188278633>,
                       &`public:___cdecl_`private:_class_Chaos::FParticleDynamics*___ptr64___cdecl_Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::WriteAccessImp<1>(Chaos::FFrameAndPhase,Chaos::FDirtyPropertiesPool&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ae440

bool __thiscall
`Chaos::TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::WriteAccessImp<1>'::__l8::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4501203830188278633>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4501203830188278633>,
                       &`public:___cdecl_`private:_class_Chaos::FParticleMassProps*___ptr64___cdecl_Chaos::TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::WriteAccessImp<1>(Chaos::FFrameAndPhase,Chaos::FDirtyPropertiesPool&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ae4c0

bool __thiscall
`Chaos::TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::WriteAccessImp<1>'::__l8::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4501203830188278633>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4501203830188278633>,
                       &`public:___cdecl_`private:_class_Chaos::FParticleNonFrequentData*___ptr64___cdecl_Chaos::TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::WriteAccessImp<1>(Chaos::FFrameAndPhase,Chaos::FDirtyPropertiesPool&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ae540

bool __thiscall
`Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::WriteAccessImp<1>'::__l8::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4501203830188278633>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4501203830188278633>,
                       &`public:___cdecl_`private:_class_Chaos::FParticlePositionRotation*___ptr64___cdecl_Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::WriteAccessImp<1>(Chaos::FFrameAndPhase,Chaos::FDirtyPropertiesPool&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ae5c0

bool __thiscall
`Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::WriteAccessImp<1>'::__l8::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4501203830188278633>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4501203830188278633>,
                       &`public:___cdecl_`private:_class_Chaos::FParticleVelocities*___ptr64___cdecl_Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::WriteAccessImp<1>(Chaos::FFrameAndPhase,Chaos::FDirtyPropertiesPool&___ptr64)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ae680

bool __thiscall
`Chaos::TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::WriteAccessImp<0>'::__l10::<lambda_2>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4501203830188278638>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4501203830188278638>,
                       &`public:___cdecl_`private:_class_Chaos::FKinematicTarget*___ptr64___cdecl_Chaos::TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::WriteAccessImp<0>(Chaos::FFrameAndPhase,Chaos::FDirtyPropertiesPool&___ptr64)___ptr64'::`10'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ae700

bool __thiscall
`Chaos::TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::WriteAccessImp<0>'::__l10::<lambda_2>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4501203830188278638>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4501203830188278638>,
                       &`public:___cdecl_`private:_class_Chaos::FPBDJointSettings*___ptr64___cdecl_Chaos::TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::WriteAccessImp<0>(Chaos::FFrameAndPhase,Chaos::FDirtyPropertiesPool&___ptr64)___ptr64'::`10'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ae780

bool __thiscall
`Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::WriteAccessImp<0>'::__l10::
<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4501203830188278638>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4501203830188278638>,
                       &`public:___cdecl_`private:_class_Chaos::FParticleDynamicMisc*___ptr64___cdecl_Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::WriteAccessImp<0>(Chaos::FFrameAndPhase,Chaos::FDirtyPropertiesPool&___ptr64)___ptr64'::`10'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ae800

bool __thiscall
`Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::WriteAccessImp<0>'::__l10::<lambda_2>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4501203830188278638>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4501203830188278638>,
                       &`public:___cdecl_`private:_class_Chaos::FParticleDynamics*___ptr64___cdecl_Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::WriteAccessImp<0>(Chaos::FFrameAndPhase,Chaos::FDirtyPropertiesPool&___ptr64)___ptr64'::`10'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ae880

bool __thiscall
`Chaos::TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::WriteAccessImp<0>'::__l10::
<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4501203830188278638>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4501203830188278638>,
                       &`public:___cdecl_`private:_class_Chaos::FParticleMassProps*___ptr64___cdecl_Chaos::TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::WriteAccessImp<0>(Chaos::FFrameAndPhase,Chaos::FDirtyPropertiesPool&___ptr64)___ptr64'::`10'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ae900

bool __thiscall
`Chaos::TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::WriteAccessImp<0>'::__l10::
<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4501203830188278638>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4501203830188278638>,
                       &`public:___cdecl_`private:_class_Chaos::FParticleNonFrequentData*___ptr64___cdecl_Chaos::TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::WriteAccessImp<0>(Chaos::FFrameAndPhase,Chaos::FDirtyPropertiesPool&___ptr64)___ptr64'::`10'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504ae980

bool __thiscall
`Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::WriteAccessImp<0>'::__l10::
<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4501203830188278638>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4501203830188278638>,
                       &`public:___cdecl_`private:_class_Chaos::FParticlePositionRotation*___ptr64___cdecl_Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::WriteAccessImp<0>(Chaos::FFrameAndPhase,Chaos::FDirtyPropertiesPool&___ptr64)___ptr64'::`10'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504aea00

bool __thiscall
`Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::WriteAccessImp<0>'::__l10::
<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4501203830188278638>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4501203830188278638>,
                       &`public:___cdecl_`private:_class_Chaos::FParticleVelocities*___ptr64___cdecl_Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::WriteAccessImp<0>(Chaos::FFrameAndPhase,Chaos::FDirtyPropertiesPool&___ptr64)___ptr64'::`10'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

