// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 24

// BuildDataWrapperFromAABBStructure<Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>_> @ 1436f1d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FChaosVDDataWrapperUtils::
BuildDataWrapperFromAABBStructure<Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>_>
          (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
           *param_1,FChaosVDAABBTreeDataWrapper *param_2)

{
  TArray<FChaosVDAABBTreeNodeDataWrapper,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement FVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FChaosVDAABBTreeDataWrapper *pFVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  byte bVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_188 [32];
  undefined1 local_158;
  byte local_157;
  undefined4 local_154;
  TArrayView<Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>_const_,int>
  local_150;
  FChaosVDAABBTreeDataWrapper *local_140;
  undefined **local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *local_b8;
  undefined4 local_b0;
  byte local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_48;
  undefined7 uStack_47;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = &param_2->Nodes;
  param_2->MaxTreeDepth = param_1->MaxTreeDepth;
  param_2->MaxChildrenInLeaf = param_1->MaxTreeDepth;
  param_2->MaxPayloadBounds = param_1->MaxPayloadBounds;
  param_2->RootNodeIndex = param_1->RootNode;
  param_2->bDynamicTree = param_1->bDynamicTree;
  uVar4 = (param_1->Nodes).ArrayNum;
  local_140 = param_2;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar2 = &(param_2->Nodes).ArrayMax;
  if (*piVar2 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,uVar4,&pTVar1->AllocatorInstance,(param_2->Nodes).ArrayNum,piVar2);
  }
  param_2->NodesNum = uVar4;
  *(undefined4 *)((longlong)&param_2->_padding_ + 4) = 1;
  pFVar15 = (param_1->Nodes).AllocatorInstance.Data;
  iVar5 = (param_1->Nodes).ArrayNum;
  pFVar17 = pFVar15 + 0x18;
  pFVar16 = pFVar15 + (longlong)iVar5 * 0x70;
  while( true ) {
    if ((param_1->Nodes).ArrayNum != iVar5) {
      local_158 = 0;
      `TCheckedPointerIterator<Chaos::TAABBTreeNode<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_158);
    }
    pFVar10 = local_140;
    if (pFVar15 == pFVar16) break;
    local_128 = *(undefined8 *)pFVar15;
    uStack_120 = *(undefined8 *)(pFVar15 + 8);
    local_138 = &___7FChaosVDAABBTreeNodeDataWrapper__6B_;
    local_118 = *(undefined4 *)(pFVar15 + 0x10);
    uStack_114 = *(undefined4 *)(pFVar15 + 0x14);
    local_157 = (byte)pFVar17[0x54] & 3 | local_ac & 0xfc;
    local_150.DataPtr =
         *(TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> **)(pFVar17 + 0x48);
    local_60._0_4_ = (undefined4)*(undefined8 *)pFVar17;
    local_60._4_4_ = (undefined4)((ulonglong)*(undefined8 *)pFVar17 >> 0x20);
    local_154 = *(undefined4 *)(pFVar17 + 0x50);
    uStack_f0 = *(undefined8 *)(pFVar17 + 0x18);
    uStack_e8 = *(undefined8 *)(pFVar17 + 0x20);
    uStack_90 = (undefined4)local_60;
    uStack_8c = local_60._4_4_;
    iVar12 = (param_2->Nodes).ArrayNum;
    uStack_110 = (undefined4)local_60;
    uStack_10c = local_60._4_4_;
    uStack_58._0_4_ = (undefined4)*(undefined8 *)(pFVar17 + 8);
    uStack_58._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(pFVar17 + 8) >> 0x20);
    uStack_100 = (undefined4)*(undefined8 *)(pFVar17 + 0x10);
    uStack_fc = (undefined4)((ulonglong)*(undefined8 *)(pFVar17 + 0x10) >> 0x20);
    uStack_e0 = *(undefined4 *)(pFVar17 + 0x28);
    uStack_dc = *(undefined4 *)(pFVar17 + 0x2c);
    local_88 = (undefined4)uStack_58;
    uStack_84 = uStack_58._4_4_;
    local_130 = 1;
    local_108 = (undefined4)uStack_58;
    uStack_104 = uStack_58._4_4_;
    local_f8 = CONCAT71(uStack_47,1);
    uVar8 = *(undefined8 *)(pFVar17 + 0x30);
    uVar9 = *(undefined8 *)(pFVar17 + 0x38);
    local_48 = 1;
    local_60._0_4_ = (undefined4)uVar8;
    local_60._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
    uStack_58._0_4_ = (undefined4)uVar9;
    uStack_58._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_c8 = (undefined4)*(undefined8 *)(pFVar17 + 0x40);
    uStack_c4 = (undefined4)((ulonglong)*(undefined8 *)(pFVar17 + 0x40) >> 0x20);
    uStack_d8 = (undefined4)local_60;
    uStack_d4 = local_60._4_4_;
    local_c0 = CONCAT71(uStack_47,1);
    local_d0 = (undefined4)uStack_58;
    uStack_cc = uStack_58._4_4_;
    local_b8 = local_150.DataPtr;
    local_b0 = local_154;
    local_ac = local_157;
    local_a8 = local_128;
    uStack_a0 = uStack_120;
    local_98 = local_118;
    uStack_94 = uStack_114;
    uStack_80 = uStack_100;
    uStack_7c = uStack_fc;
    local_60 = uVar8;
    uStack_58 = uVar9;
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x890,&pTVar1->AllocatorInstance,piVar2);
    }
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    (param_2->Nodes).ArrayNum = iVar12 + 1;
    pFVar15 = pFVar15 + 0x70;
    lVar13 = (longlong)iVar12;
    *(undefined8 *)(pFVar6 + lVar13 * 0x90 + 0x10) = local_a8;
    *(undefined8 *)(pFVar6 + lVar13 * 0x90 + 0x10 + 8) = uStack_a0;
    *(undefined ***)(pFVar6 + lVar13 * 0x90) = &___7FChaosVDAABBTreeNodeDataWrapper__6B_;
    *(TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> **)
     (pFVar6 + lVar13 * 0x90 + 0x80) = local_150.DataPtr;
    *(ulonglong *)(pFVar6 + lVar13 * 0x90 + 0x20) = CONCAT44(uStack_94,local_98);
    *(ulonglong *)(pFVar6 + lVar13 * 0x90 + 0x20 + 8) = CONCAT44(uStack_8c,uStack_90);
    *(undefined4 *)(pFVar6 + lVar13 * 0x90 + 0x88) = local_154;
    FVar3 = pFVar6[lVar13 * 0x90 + 0x8c];
    *(ulonglong *)(pFVar6 + lVar13 * 0x90 + 0x30) = CONCAT44(uStack_84,local_88);
    *(ulonglong *)(pFVar6 + lVar13 * 0x90 + 0x30 + 8) = CONCAT44(uStack_7c,uStack_80);
    pFVar6[lVar13 * 0x90 + 8] = (FScriptContainerElement)0x1;
    bVar14 = ((byte)FVar3 ^ local_157) & 1 ^ (byte)FVar3;
    *(undefined8 *)(pFVar6 + lVar13 * 0x90 + 0x40) = local_f8;
    *(undefined8 *)(pFVar6 + lVar13 * 0x90 + 0x40 + 8) = uStack_f0;
    *(undefined8 *)(pFVar6 + lVar13 * 0x90 + 0x50) = uStack_e8;
    *(ulonglong *)(pFVar6 + lVar13 * 0x90 + 0x50 + 8) = CONCAT44(uStack_dc,uStack_e0);
    *(ulonglong *)(pFVar6 + lVar13 * 0x90 + 0x60) = CONCAT44(uStack_d4,uStack_d8);
    *(ulonglong *)(pFVar6 + lVar13 * 0x90 + 0x60 + 8) = CONCAT44(uStack_cc,local_d0);
    pFVar6[lVar13 * 0x90 + 0x8c] = (FScriptContainerElement)((bVar14 ^ local_157) & 2 ^ bVar14);
    pFVar17 = pFVar17 + 0x70;
    *(ulonglong *)(pFVar6 + lVar13 * 0x90 + 0x70) = CONCAT44(uStack_c4,uStack_c8);
    *(undefined8 *)(pFVar6 + lVar13 * 0x90 + 0x70 + 8) = local_c0;
  }
  local_150.DataPtr =
       (TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *)
       (param_1->Leaves)._padding_;
  local_150.ArrayNum = (param_1->Leaves).NumOfValidElements;
  if (local_150.ArrayNum < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  AddTreeLeaves(&local_150,pFVar10);
  *(undefined1 *)&pFVar10->_padding_ = 1;
  return;
}

// BuildDataWrapperFromAABBStructure<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_> @ 1436f2040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FChaosVDDataWrapperUtils::
BuildDataWrapperFromAABBStructure<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
          (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
           *param_1,FChaosVDAABBTreeDataWrapper *param_2)

{
  TArray<FChaosVDAABBTreeNodeDataWrapper,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement FVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FChaosVDAABBTreeDataWrapper *pFVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  byte bVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_188 [32];
  undefined1 local_158;
  byte local_157;
  undefined4 local_154;
  TArrayView<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_const_,int>
  local_150;
  FChaosVDAABBTreeDataWrapper *local_140;
  undefined **local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *local_b8;
  undefined4 local_b0;
  byte local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_48;
  undefined7 uStack_47;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = &param_2->Nodes;
  param_2->MaxTreeDepth = param_1->MaxTreeDepth;
  param_2->MaxChildrenInLeaf = param_1->MaxTreeDepth;
  param_2->MaxPayloadBounds = param_1->MaxPayloadBounds;
  param_2->RootNodeIndex = param_1->RootNode;
  param_2->bDynamicTree = param_1->bDynamicTree;
  uVar4 = (param_1->Nodes).ArrayNum;
  local_140 = param_2;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar2 = &(param_2->Nodes).ArrayMax;
  if (*piVar2 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,uVar4,&pTVar1->AllocatorInstance,(param_2->Nodes).ArrayNum,piVar2);
  }
  param_2->NodesNum = uVar4;
  *(undefined4 *)((longlong)&param_2->_padding_ + 4) = 2;
  pFVar15 = (param_1->Nodes).AllocatorInstance.Data;
  iVar5 = (param_1->Nodes).ArrayNum;
  pFVar17 = pFVar15 + 0x18;
  pFVar16 = pFVar15 + (longlong)iVar5 * 0x70;
  while( true ) {
    if ((param_1->Nodes).ArrayNum != iVar5) {
      local_158 = 0;
      `TCheckedPointerIterator<Chaos::TAABBTreeNode<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_158);
    }
    pFVar10 = local_140;
    if (pFVar15 == pFVar16) break;
    local_128 = *(undefined8 *)pFVar15;
    uStack_120 = *(undefined8 *)(pFVar15 + 8);
    local_138 = &___7FChaosVDAABBTreeNodeDataWrapper__6B_;
    local_118 = *(undefined4 *)(pFVar15 + 0x10);
    uStack_114 = *(undefined4 *)(pFVar15 + 0x14);
    local_157 = (byte)pFVar17[0x54] & 3 | local_ac & 0xfc;
    local_150.DataPtr =
         *(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)(pFVar17 + 0x48);
    local_60._0_4_ = (undefined4)*(undefined8 *)pFVar17;
    local_60._4_4_ = (undefined4)((ulonglong)*(undefined8 *)pFVar17 >> 0x20);
    local_154 = *(undefined4 *)(pFVar17 + 0x50);
    uStack_f0 = *(undefined8 *)(pFVar17 + 0x18);
    uStack_e8 = *(undefined8 *)(pFVar17 + 0x20);
    uStack_90 = (undefined4)local_60;
    uStack_8c = local_60._4_4_;
    iVar12 = (param_2->Nodes).ArrayNum;
    uStack_110 = (undefined4)local_60;
    uStack_10c = local_60._4_4_;
    uStack_58._0_4_ = (undefined4)*(undefined8 *)(pFVar17 + 8);
    uStack_58._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(pFVar17 + 8) >> 0x20);
    uStack_100 = (undefined4)*(undefined8 *)(pFVar17 + 0x10);
    uStack_fc = (undefined4)((ulonglong)*(undefined8 *)(pFVar17 + 0x10) >> 0x20);
    uStack_e0 = *(undefined4 *)(pFVar17 + 0x28);
    uStack_dc = *(undefined4 *)(pFVar17 + 0x2c);
    local_88 = (undefined4)uStack_58;
    uStack_84 = uStack_58._4_4_;
    local_130 = 1;
    local_108 = (undefined4)uStack_58;
    uStack_104 = uStack_58._4_4_;
    local_f8 = CONCAT71(uStack_47,1);
    uVar8 = *(undefined8 *)(pFVar17 + 0x30);
    uVar9 = *(undefined8 *)(pFVar17 + 0x38);
    local_48 = 1;
    local_60._0_4_ = (undefined4)uVar8;
    local_60._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
    uStack_58._0_4_ = (undefined4)uVar9;
    uStack_58._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_c8 = (undefined4)*(undefined8 *)(pFVar17 + 0x40);
    uStack_c4 = (undefined4)((ulonglong)*(undefined8 *)(pFVar17 + 0x40) >> 0x20);
    uStack_d8 = (undefined4)local_60;
    uStack_d4 = local_60._4_4_;
    local_c0 = CONCAT71(uStack_47,1);
    local_d0 = (undefined4)uStack_58;
    uStack_cc = uStack_58._4_4_;
    local_b8 = local_150.DataPtr;
    local_b0 = local_154;
    local_ac = local_157;
    local_a8 = local_128;
    uStack_a0 = uStack_120;
    local_98 = local_118;
    uStack_94 = uStack_114;
    uStack_80 = uStack_100;
    uStack_7c = uStack_fc;
    local_60 = uVar8;
    uStack_58 = uVar9;
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x890,&pTVar1->AllocatorInstance,piVar2);
    }
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    (param_2->Nodes).ArrayNum = iVar12 + 1;
    pFVar15 = pFVar15 + 0x70;
    lVar13 = (longlong)iVar12;
    *(undefined8 *)(pFVar6 + lVar13 * 0x90 + 0x10) = local_a8;
    *(undefined8 *)(pFVar6 + lVar13 * 0x90 + 0x10 + 8) = uStack_a0;
    *(undefined ***)(pFVar6 + lVar13 * 0x90) = &___7FChaosVDAABBTreeNodeDataWrapper__6B_;
    *(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)
     (pFVar6 + lVar13 * 0x90 + 0x80) = local_150.DataPtr;
    *(ulonglong *)(pFVar6 + lVar13 * 0x90 + 0x20) = CONCAT44(uStack_94,local_98);
    *(ulonglong *)(pFVar6 + lVar13 * 0x90 + 0x20 + 8) = CONCAT44(uStack_8c,uStack_90);
    *(undefined4 *)(pFVar6 + lVar13 * 0x90 + 0x88) = local_154;
    FVar3 = pFVar6[lVar13 * 0x90 + 0x8c];
    *(ulonglong *)(pFVar6 + lVar13 * 0x90 + 0x30) = CONCAT44(uStack_84,local_88);
    *(ulonglong *)(pFVar6 + lVar13 * 0x90 + 0x30 + 8) = CONCAT44(uStack_7c,uStack_80);
    pFVar6[lVar13 * 0x90 + 8] = (FScriptContainerElement)0x1;
    bVar14 = ((byte)FVar3 ^ local_157) & 1 ^ (byte)FVar3;
    *(undefined8 *)(pFVar6 + lVar13 * 0x90 + 0x40) = local_f8;
    *(undefined8 *)(pFVar6 + lVar13 * 0x90 + 0x40 + 8) = uStack_f0;
    *(undefined8 *)(pFVar6 + lVar13 * 0x90 + 0x50) = uStack_e8;
    *(ulonglong *)(pFVar6 + lVar13 * 0x90 + 0x50 + 8) = CONCAT44(uStack_dc,uStack_e0);
    *(ulonglong *)(pFVar6 + lVar13 * 0x90 + 0x60) = CONCAT44(uStack_d4,uStack_d8);
    *(ulonglong *)(pFVar6 + lVar13 * 0x90 + 0x60 + 8) = CONCAT44(uStack_cc,local_d0);
    pFVar6[lVar13 * 0x90 + 0x8c] = (FScriptContainerElement)((bVar14 ^ local_157) & 2 ^ bVar14);
    pFVar17 = pFVar17 + 0x70;
    *(ulonglong *)(pFVar6 + lVar13 * 0x90 + 0x70) = CONCAT44(uStack_c4,uStack_c8);
    *(undefined8 *)(pFVar6 + lVar13 * 0x90 + 0x70 + 8) = local_c0;
  }
  local_150.DataPtr =
       *(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)&param_1->Leaves;
  local_150.ArrayNum = *(int *)&(param_1->Leaves).field_0x8;
  if (local_150.ArrayNum < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  AddTreeLeaves(&local_150,pFVar10);
  *(undefined1 *)&pFVar10->_padding_ = 1;
  return;
}

// operator() @ 1436f75e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ECollisionVisitorResult __thiscall
`FChaosVDDataWrapperUtils::BuildMidPhaseDataWrapperFromMidPhase'::__l2::<lambda_1>::operator()
          (void *this,FPBDCollisionConstraint *param_1)

{
  longlong lVar1;
  FChaosVDConstraint *pFVar2;
  code *pcVar3;
  bool bVar4;
  ECollisionVisitorResult EVar5;
  int iVar6;
  undefined1 auStack_2e8 [32];
  FChaosVDConstraint *local_2c8;
  FChaosVDConstraint *local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  FChaosVDConstraint local_298;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  FChaosVDDataWrapperUtils::BuildConstraintDataWrapperFromConstraint(&local_298,param_1);
  lVar1 = *(longlong *)this;
  pFVar2 = *(FChaosVDConstraint **)(lVar1 + 0x18);
  if ((pFVar2 <= &local_298) && (&local_298 < pFVar2 + *(int *)(lVar1 + 0x24))) {
    local_2b0 = (longlong)*(int *)(lVar1 + 0x20);
    local_2a8 = 0x280;
    local_2c8 = &local_298;
    local_2c0 = pFVar2;
    local_2b8 = (longlong)*(int *)(lVar1 + 0x24);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  iVar6 = *(int *)(lVar1 + 0x20);
  if (iVar6 == *(int *)(lVar1 + 0x24)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x280,0x10,(ForAnyElementType *)(lVar1 + 0x18),(int *)(lVar1 + 0x24));
  }
  *(int *)(lVar1 + 0x20) = iVar6 + 1;
  FChaosVDConstraint::FChaosVDConstraint
            ((FChaosVDConstraint *)((longlong)iVar6 * 0x280 + *(longlong *)(lVar1 + 0x18)),
             &local_298);
  if (local_298.ManifoldPoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.ManifoldPoints.AllocatorInstance.Data);
  }
  if (local_298.CollisionMargins.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.CollisionMargins.AllocatorInstance.Data);
  }
  return Continue;
}

// operator() @ 1436f7790

FChaosVDBVCellElementDataWrapper * __thiscall
`FChaosVDDataWrapperUtils::AddTreeLeaves'::__l10::<lambda_1>::operator()
          (void *this,FChaosVDBVCellElementDataWrapper *__return_storage_ptr__,
          TBVCellElement<Chaos::FAccelerationStructureHandle,double,3> *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  bool bVar10;
  FChaosVDBVCellElementDataWrapper *pFVar11;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined7 uStack_17;
  
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FChaosVDBVCellElementDataWrapper__6B_;
  (__return_storage_ptr__->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Bounds).IsValid = '\0';
  (__return_storage_ptr__->Bounds).Pad[0] = '\0';
  (__return_storage_ptr__->Bounds).Pad[1] = '\0';
  (__return_storage_ptr__->Bounds).Pad[2] = '\0';
  (__return_storage_ptr__->Bounds).Pad[3] = '\0';
  (__return_storage_ptr__->Bounds).Pad[4] = '\0';
  (__return_storage_ptr__->Bounds).Pad[5] = '\0';
  (__return_storage_ptr__->Bounds).Pad[6] = '\0';
  __return_storage_ptr__->ParticleIndex = -1;
  *(undefined8 *)&(__return_storage_ptr__->StartIdx).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (__return_storage_ptr__->StartIdx).field0_0x0._s_0.Z =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)&(__return_storage_ptr__->EndIdx).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (__return_storage_ptr__->EndIdx).field0_0x0._s_0.Z =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  uVar7 = *(undefined8 *)&(param_1->Bounds).MMax;
  uVar8 = *(undefined8 *)&(param_1->Bounds).MMax.field_0x8;
  dVar9 = *(double *)&(param_1->Bounds).MMin.field_0x8;
  uVar5 = *(undefined4 *)&(param_1->Bounds).MMin.field_0x10;
  uVar6 = *(undefined4 *)&(param_1->Bounds).MMin.field_0x14;
  uVar1 = *(undefined8 *)&(param_1->Bounds).MMax.field_0x10;
  local_30 = (undefined4)uVar7;
  uStack_2c = (undefined4)((ulonglong)uVar7 >> 0x20);
  (__return_storage_ptr__->Bounds).Min.field0_0x0._s_0.X = *(double *)&(param_1->Bounds).MMin;
  (__return_storage_ptr__->Bounds).Min.field0_0x0._s_0.Y = dVar9;
  uStack_28 = (undefined4)uVar8;
  uStack_24 = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Bounds).Min.field0_0x0 + 0x10) = uVar5;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Bounds).Min.field0_0x0 + 0x14) = uVar6;
  *(undefined4 *)&(__return_storage_ptr__->Bounds).Max.field0_0x0 = local_30;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Bounds).Max.field0_0x0 + 4) = uStack_2c;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Bounds).Max.field0_0x0 + 8) = uStack_28;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Bounds).Max.field0_0x0 + 0xc) = uStack_24;
  *(int *)((longlong)&(__return_storage_ptr__->Bounds).Max.field0_0x0 + 0x10) = (int)uVar1;
  *(int *)((longlong)&(__return_storage_ptr__->Bounds).Max.field0_0x0 + 0x14) =
       (int)((ulonglong)uVar1 >> 0x20);
  (__return_storage_ptr__->Bounds).IsValid = 1;
  (__return_storage_ptr__->Bounds).Pad[0] = (char)uStack_17;
  (__return_storage_ptr__->Bounds).Pad[1] = (char)((uint7)uStack_17 >> 8);
  (__return_storage_ptr__->Bounds).Pad[2] = (char)((uint7)uStack_17 >> 0x10);
  (__return_storage_ptr__->Bounds).Pad[3] = (char)((uint7)uStack_17 >> 0x18);
  (__return_storage_ptr__->Bounds).Pad[4] = (char)((uint7)uStack_17 >> 0x20);
  (__return_storage_ptr__->Bounds).Pad[5] = (char)((uint7)uStack_17 >> 0x28);
  (__return_storage_ptr__->Bounds).Pad[6] = (char)((uint7)uStack_17 >> 0x30);
  iVar2 = (param_1->Payload).CachedUniqueIdx.Idx;
  if (iVar2 == -1) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<7431867033672745159>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                        ,199,"Idx.IsValid()");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FChaosVDBVCellElementDataWrapper *)(*pcVar4)();
      return pFVar11;
    }
  }
  __return_storage_ptr__->ParticleIndex = iVar2;
  iVar2 = (param_1->StartIdx).field0_0x0._s_0.Y;
  iVar3 = (param_1->StartIdx).field0_0x0._s_0.Z;
  (__return_storage_ptr__->StartIdx).field0_0x0._s_0.X = (param_1->StartIdx).field0_0x0._s_0.X;
  (__return_storage_ptr__->StartIdx).field0_0x0._s_0.Y = iVar2;
  (__return_storage_ptr__->StartIdx).field0_0x0._s_0.Z = iVar3;
  iVar2 = (param_1->EndIdx).field0_0x0._s_0.Y;
  iVar3 = (param_1->EndIdx).field0_0x0._s_0.Z;
  (__return_storage_ptr__->EndIdx).field0_0x0._s_0.X = (param_1->EndIdx).field0_0x0._s_0.X;
  (__return_storage_ptr__->EndIdx).field0_0x0._s_0.Y = iVar2;
  (__return_storage_ptr__->EndIdx).field0_0x0._s_0.Z = iVar3;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
  return __return_storage_ptr__;
}

// AddTreeLeaves @ 1436f7f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001436f85b3) */

void __cdecl
FChaosVDDataWrapperUtils::AddTreeLeaves
          (TArrayView<Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>_const_,int>
           *param_1,FChaosVDAABBTreeDataWrapper *param_2)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  TArray<FChaosVDAABBTreeLeafDataWrapper,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  int *piVar15;
  TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *pTVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStackY_2e8 [32];
  undefined1 local_2b8;
  undefined1 local_2b7 [3];
  uint local_2b4;
  TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *local_2b0;
  int *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  FScriptContainerElement *local_268;
  TArray<FChaosVDAABBTreeLeafDataWrapper,TSizedDefaultAllocator<32>_> *local_260;
  TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *local_258;
  longlong local_240;
  longlong lStack_238;
  longlong lStack_230;
  longlong lStack_228;
  undefined1 local_220;
  undefined7 uStack_21f;
  undefined1 local_218 [16];
  double local_208;
  undefined1 auStack_200 [16];
  double dStack_1f0;
  undefined1 local_1e8;
  undefined7 uStack_1e7;
  undefined **local_1d8;
  undefined1 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined4 local_18f;
  undefined2 local_18b;
  undefined1 local_189;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  undefined4 local_157;
  undefined2 local_153;
  undefined1 local_151;
  undefined **local_148;
  FScriptContainerElement local_140;
  ForAnyElementType local_138;
  int local_130;
  int iStack_12c;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  undefined8 local_f8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  uVar3 = param_1->ArrayNum;
  local_260 = &param_2->TreeArrayLeafs;
  param_2->LeavesNum = uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar15 = &(param_2->TreeArrayLeafs).ArrayMax;
  if (*piVar15 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,uVar3,&local_260->AllocatorInstance,(param_2->TreeArrayLeafs).ArrayNum,piVar15
              );
  }
  pTVar16 = param_1->DataPtr;
  local_258 = pTVar16 + param_1->ArrayNum;
  if (pTVar16 != local_258) {
    piVar15 = &(pTVar16->Elems).ArrayNum;
    do {
      local_148 = &___7FChaosVDAABBTreeLeafDataWrapper__6B_;
      local_140 = (FScriptContainerElement)0x0;
      uVar3 = *piVar15;
      local_138.Data = (FScriptContainerElement *)0x0;
      local_130 = 0;
      iStack_12c = 0;
      local_128 = 0;
      lStack_120 = 0;
      local_118 = 0;
      lStack_110 = 0;
      local_108 = 0;
      lStack_100 = 0;
      local_f8 = 0;
      local_2b0 = pTVar16;
      local_2a8 = piVar15;
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      if (0 < (int)uVar3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,uVar3,&local_138,0,&iStack_12c);
      }
      local_2b4 = *piVar15;
      uVar12 = (ulonglong)(int)local_2b4;
      lStack_238 = *(longlong *)(piVar15 + -8);
      lStack_230 = *(longlong *)(piVar15 + -6);
      pFVar18 = (((TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
                   *)(piVar15 + -2))->AllocatorInstance).Data;
      local_128 = pTVar16->_padding_;
      lStack_120 = pTVar16->_padding_;
      local_220 = 1;
      local_118 = pTVar16->_padding_;
      local_240 = pTVar16->_padding_;
      lStack_228 = *(longlong *)(piVar15 + -4);
      local_f8 = CONCAT71(uStack_21f,1);
      pFVar17 = pFVar18 + uVar12 * 0x68;
      local_268 = pFVar17;
      lStack_110 = lStack_238;
      local_108 = lStack_230;
      lStack_100 = lStack_228;
      while( true ) {
        if (*piVar15 != (uint)uVar12) {
          local_2b8 = 0;
          `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_2b8);
        }
        pTVar9 = local_260;
        if (pFVar18 == pFVar17) break;
        iVar11 = *(int *)(pFVar18 + 0x10);
        local_1c0 = 0;
        local_198 = 0;
        local_1d0 = 0;
        local_1d8 = &___7FChaosVDAABBTreePayloadBoundsElement__6B_;
        local_1c8 = 0xffffffff;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_190 = 0;
        local_18f = 0;
        local_18b = 0;
        local_189 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        local_157 = 0;
        local_153 = 0;
        local_151 = 0;
        if (iVar11 == -1) {
          bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7431867033672745159>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                              ,199,"Idx.IsValid()");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7431867033672745159>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                              ,199,"Idx.IsValid()");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        local_240 = *(longlong *)(pFVar18 + 0x48);
        lStack_238 = *(longlong *)(pFVar18 + 0x50);
        lStack_230 = *(longlong *)(pFVar18 + 0x58);
        lVar13 = *(longlong *)pFVar18;
        bVar10 = false;
        uVar27 = 0;
        uVar29 = 0;
        uVar31 = 0;
        uVar32 = 0;
        lStack_228 = *(longlong *)(pFVar18 + 0x60);
        uVar33 = 0;
        uVar34 = 0;
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
        uVar38 = 0;
        uVar39 = 0;
        uVar40 = 0;
        local_220 = 1;
        local_270 = 0;
        lVar7 = *(longlong *)(pFVar18 + 0x38);
        lVar8 = *(longlong *)(pFVar18 + 0x40);
        local_2a0 = 0;
        uStack_298 = 0;
        local_290 = 0;
        uStack_288 = 0;
        local_280 = 0;
        uStack_278 = 0;
        if (lVar13 != 0) {
          plVar14 = (longlong *)(lVar13 + 0x80);
          iVar4 = *(int *)(lVar13 + 0x90);
          if (*(longlong **)(lVar13 + 0x88) != (longlong *)0x0) {
            plVar14 = *(longlong **)(lVar13 + 0x88);
          }
          plVar1 = plVar14 + iVar4;
          uVar39 = 0;
          uVar40 = 0;
          uVar35 = 0;
          uVar36 = 0;
          uVar31 = 0;
          uVar32 = 0;
          uVar37 = 0;
          uVar38 = 0;
          uVar33 = 0;
          uVar34 = 0;
          uVar27 = 0;
          uVar29 = 0;
          while( true ) {
            if (*(int *)(lVar13 + 0x90) != iVar4) {
              local_2b7[0] = 0;
              `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_2b7);
            }
            piVar15 = local_2a8;
            pFVar17 = local_268;
            if (plVar14 == plVar1) break;
            lVar5 = *plVar14;
            local_1e8 = 1;
            local_208 = *(double *)(lVar5 + 0x28);
            dStack_1f0 = *(double *)(lVar5 + 0x40);
            local_218 = *(undefined1 (*) [16])(lVar5 + 0x18);
            uVar19 = local_218._0_4_;
            uVar22 = local_218._4_4_;
            uVar28 = local_218._8_4_;
            uVar30 = local_218._12_4_;
            auStack_200 = *(undefined1 (*) [16])(lVar5 + 0x30);
            uVar21 = auStack_200._0_4_;
            uVar24 = auStack_200._4_4_;
            uVar25 = auStack_200._8_4_;
            uVar26 = auStack_200._12_4_;
            uVar20 = SUB84(local_208,0);
            uVar23 = (undefined4)((ulonglong)local_208 >> 0x20);
            uVar42 = (undefined4)((ulonglong)dStack_1f0 >> 0x20);
            uVar41 = SUB84(dStack_1f0,0);
            if (bVar10) {
              if ((double)CONCAT44(uVar29,uVar27) <= local_218._0_8_) {
                uVar19 = uVar27;
                uVar22 = uVar29;
              }
              if ((double)CONCAT44(uVar32,uVar31) <= local_218._8_8_) {
                uVar28 = uVar31;
                uVar30 = uVar32;
              }
              if ((double)CONCAT44(uVar34,uVar33) <= local_208) {
                uVar20 = uVar33;
                uVar23 = uVar34;
              }
              if (auStack_200._0_8_ <= (double)CONCAT44(uVar36,uVar35)) {
                uVar21 = uVar35;
                uVar24 = uVar36;
              }
              if (auStack_200._8_8_ <= (double)CONCAT44(uVar38,uVar37)) {
                uVar25 = uVar37;
                uVar26 = uVar38;
              }
              if (dStack_1f0 <= (double)CONCAT44(uVar40,uVar39)) {
                uVar41 = uVar39;
                uVar42 = uVar40;
              }
            }
            else {
              local_270 = CONCAT71(uStack_1e7,1);
              bVar10 = true;
            }
            local_280 = CONCAT44(uVar26,uVar25);
            uStack_278 = CONCAT44(uVar42,uVar41);
            plVar14 = plVar14 + 1;
            local_290 = CONCAT44(uVar23,uVar20);
            uStack_288 = CONCAT44(uVar24,uVar21);
            local_2a0 = CONCAT44(uVar22,uVar19);
            uStack_298 = CONCAT44(uVar30,uVar28);
            uVar39 = uVar41;
            uVar40 = uVar42;
            uVar35 = uVar21;
            uVar36 = uVar24;
            uVar31 = uVar28;
            uVar32 = uVar30;
            uVar37 = uVar25;
            uVar38 = uVar26;
            uVar33 = uVar20;
            uVar34 = uVar23;
            uVar27 = uVar19;
            uVar29 = uVar22;
          }
        }
        if (local_130 == iStack_12c) {
          local_130 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x888,&local_138,&iStack_12c);
        }
        lVar13 = (longlong)local_130;
        local_130 = local_130 + 1;
        lVar13 = lVar13 * 0x88;
        pFVar18 = pFVar18 + 0x68;
        pFVar2 = local_138.Data + lVar13 + 0x50;
        *(undefined4 *)pFVar2 = uVar27;
        *(undefined4 *)(pFVar2 + 4) = uVar29;
        *(undefined4 *)(pFVar2 + 8) = uVar31;
        *(undefined4 *)(pFVar2 + 0xc) = uVar32;
        local_138.Data[lVar13 + 8] = (FScriptContainerElement)0x1;
        *(longlong *)(local_138.Data + lVar13 + 0x18) = lVar7;
        *(longlong *)(local_138.Data + lVar13 + 0x18 + 8) = lVar8;
        *(undefined ***)(local_138.Data + lVar13) = &___7FChaosVDAABBTreePayloadBoundsElement__6B_;
        *(longlong *)(local_138.Data + lVar13 + 0x28) = local_240;
        *(longlong *)(local_138.Data + lVar13 + 0x28 + 8) = lStack_238;
        *(int *)(local_138.Data + lVar13 + 0x10) = iVar11;
        pFVar2 = local_138.Data + lVar13 + 0x60;
        *(undefined4 *)pFVar2 = uVar33;
        *(undefined4 *)(pFVar2 + 4) = uVar34;
        *(undefined4 *)(pFVar2 + 8) = uVar35;
        *(undefined4 *)(pFVar2 + 0xc) = uVar36;
        *(longlong *)(local_138.Data + lVar13 + 0x38) = lStack_230;
        *(longlong *)(local_138.Data + lVar13 + 0x38 + 8) = lStack_228;
        *(ulonglong *)(local_138.Data + lVar13 + 0x48) = CONCAT71(uStack_21f,local_220);
        pFVar2 = local_138.Data + lVar13 + 0x70;
        *(undefined4 *)pFVar2 = uVar37;
        *(undefined4 *)(pFVar2 + 4) = uVar38;
        *(undefined4 *)(pFVar2 + 8) = uVar39;
        *(undefined4 *)(pFVar2 + 0xc) = uVar40;
        *(undefined8 *)(local_138.Data + lVar13 + 0x80) = local_270;
        uVar12 = (ulonglong)local_2b4;
      }
      local_140 = (FScriptContainerElement)0x1;
      iVar11 = local_260->ArrayNum;
      if (iVar11 == local_260->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,&local_260->AllocatorInstance,&local_260->ArrayMax);
      }
      pTVar9->ArrayNum = iVar11 + 1;
      pFVar18 = (pTVar9->AllocatorInstance).Data;
      lVar13 = (longlong)iVar11 * 0x58;
      *(undefined ***)(pFVar18 + lVar13) = &___7FChaosVDWrapperDataBase__6B_;
      pFVar18[lVar13 + 8] = local_140;
      *(undefined ***)(pFVar18 + lVar13) = &___7FChaosVDAABBTreeLeafDataWrapper__6B_;
      *(undefined8 *)(pFVar18 + lVar13 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar18 + lVar13 + 0x10) = local_138.Data;
      *(int *)(pFVar18 + lVar13 + 0x18) = local_130;
      *(int *)(pFVar18 + lVar13 + 0x1c) = iStack_12c;
      *(longlong *)(pFVar18 + lVar13 + 0x20) = local_128;
      *(longlong *)(pFVar18 + lVar13 + 0x20 + 8) = lStack_120;
      *(longlong *)(pFVar18 + lVar13 + 0x30) = local_118;
      *(longlong *)(pFVar18 + lVar13 + 0x30 + 8) = lStack_110;
      *(longlong *)(pFVar18 + lVar13 + 0x40) = local_108;
      *(longlong *)(pFVar18 + lVar13 + 0x40 + 8) = lStack_100;
      *(undefined8 *)(pFVar18 + lVar13 + 0x50) = local_f8;
      pTVar16 = local_2b0 + 1;
      piVar15 = piVar15 + 0x12;
    } while (pTVar16 != local_258);
  }
  return;
}

// AddTreeLeaves @ 1436f86b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FChaosVDDataWrapperUtils::AddTreeLeaves
          (TArrayView<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_const_,int>
           *param_1,FChaosVDAABBTreeDataWrapper *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  TBVCellElement<Chaos::FAccelerationStructureHandle,double,3> *pTVar11;
  TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *pTVar12;
  TBVCellElement<Chaos::FAccelerationStructureHandle,double,3> *pTVar13;
  int *piVar14;
  TArray<FChaosVDBoundingVolumeDataWrapper,TSizedDefaultAllocator<32>_> *pTVar15;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  ForAnyElementType local_138;
  undefined8 local_130;
  int *local_128;
  longlong *local_120;
  TArray<FChaosVDBoundingVolumeDataWrapper,TSizedDefaultAllocator<32>_> *local_118;
  TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *local_110;
  undefined8 local_108;
  int local_e0;
  int iStack_dc;
  int local_d8;
  double local_c0;
  undefined1 local_b8 [16];
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 TStack_90;
  undefined8 local_78;
  int local_70;
  TIntVector3<int>_u_0 local_6c;
  TIntVector3<int>_u_0 local_60 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar2 = param_1->ArrayNum;
  pTVar15 = &param_2->BoundingVolumeLeafs;
  param_2->LeavesNum = uVar2;
  local_118 = pTVar15;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = &(param_2->BoundingVolumeLeafs).ArrayMax;
  piVar14 = &(param_2->BoundingVolumeLeafs).ArrayNum;
  local_128 = piVar14;
  if (*piVar1 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar2,&pTVar15->AllocatorInstance,*piVar14,piVar1);
  }
  pTVar12 = param_1->DataPtr;
  local_110 = pTVar12 + param_1->ArrayNum;
  if (pTVar12 != local_110) {
    do {
      local_108 = *(undefined8 *)&pTVar12->MElements;
      local_d8 = *(int *)&(pTVar12->MElements).field_0x8;
      plVar9 = *(longlong **)&(pTVar12->MElements).field_0x10;
      local_c0 = pTVar12->MaxPayloadBounds;
      iStack_dc = (int)((ulonglong)local_108 >> 0x20);
      local_e0 = (int)local_108;
      iVar10 = iStack_dc * (int)local_108 * local_d8;
      if ((iVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_120 = plVar9 + (longlong)iVar10 * 2;
      if (plVar9 != local_120) {
        do {
          lVar8 = plVar9[1];
          pTVar11 = (TBVCellElement<Chaos::FAccelerationStructureHandle,double,3> *)*plVar9;
          pTVar13 = pTVar11 + (int)lVar8;
          local_138.Data = (FScriptContainerElement *)0x0;
          local_130 = 0;
          while( true ) {
            if ((int)plVar9[1] != (int)lVar8) {
              local_140[0] = 0;
              `TCheckedPointerIterator<Chaos::TBVCellElement<Chaos::FAccelerationStructureHandle,double,3>_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_140);
            }
            plVar5 = local_120;
            if (pTVar11 == pTVar13) break;
            `FChaosVDDataWrapperUtils::AddTreeLeaves'::__l10::<lambda_1>::operator()
                      (local_148,(FChaosVDBVCellElementDataWrapper *)local_b8,pTVar11);
            if (((local_138.Data <= (FScriptContainerElement *)local_b8) &&
                ((FScriptContainerElement *)local_b8 <
                 local_138.Data + (longlong)local_130._4_4_ * 0x68)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = (int)local_130;
            if ((int)local_130 == local_130._4_4_) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x868,&local_138,(int *)((longlong)&local_130 + 4));
            }
            local_130 = CONCAT44(local_130._4_4_,iVar10 + 1);
            lVar7 = (longlong)iVar10 * 0x68;
            pTVar11 = pTVar11 + 1;
            *(undefined ***)(local_138.Data + lVar7) = &___7FChaosVDWrapperDataBase__6B_;
            local_138.Data[lVar7 + 8] = local_b8[8];
            *(undefined ***)(local_138.Data + lVar7) = &___7FChaosVDBVCellElementDataWrapper__6B_;
            *(double *)(local_138.Data + lVar7 + 0x10) = local_a8._s_0.X;
            *(double *)(local_138.Data + lVar7 + 0x10 + 8) = local_a8._s_0.Y;
            *(double *)(local_138.Data + lVar7 + 0x20) = local_a8._s_0.Z;
            *(double *)(local_138.Data + lVar7 + 0x20 + 8) = TStack_90._s_0.X;
            *(double *)(local_138.Data + lVar7 + 0x30) = TStack_90._s_0.Y;
            *(double *)(local_138.Data + lVar7 + 0x30 + 8) = TStack_90._s_0.Z;
            *(undefined8 *)(local_138.Data + lVar7 + 0x40) = local_78;
            *(int *)(local_138.Data + lVar7 + 0x48) = local_70;
            *(undefined8 *)(local_138.Data + lVar7 + 0x4c) = local_6c._0_8_;
            *(int *)(local_138.Data + lVar7 + 0x54) = local_6c._s_0.Z;
            *(undefined8 *)(local_138.Data + lVar7 + 0x58) = local_60[0]._0_8_;
            *(undefined4 *)(local_138.Data + lVar7 + 0x60) = local_60[0]._s_0.Z;
          }
          if (local_138.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data);
          }
          plVar9 = plVar9 + 2;
          piVar14 = local_128;
          pTVar15 = local_118;
        } while (plVar9 != plVar5);
      }
      iVar10 = *piVar14;
      if (iVar10 == pTVar15->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
        *piVar14 = iVar10;
      }
      *piVar14 = iVar10 + 1;
      pFVar3 = (pTVar15->AllocatorInstance).Data;
      lVar8 = (longlong)iVar10 * 0x40;
      *(undefined ***)(pFVar3 + lVar8) = &___7FChaosVDBoundingVolumeDataWrapper__6B_;
      *(ulonglong *)(pFVar3 + lVar8 + 0x18) = CONCAT44(iStack_dc,local_e0);
      *(int *)(pFVar3 + lVar8 + 0x20) = local_d8;
      pFVar3[lVar8 + 8] = (FScriptContainerElement)0x1;
      *(undefined4 *)(pFVar3 + lVar8 + 0x10) = 0xffffffff;
      *(undefined4 *)(pFVar3 + lVar8 + 0x14) = 4;
      *(undefined8 *)(pFVar3 + lVar8 + 0x28) = 0;
      *(undefined8 *)(pFVar3 + lVar8 + 0x30) = 0;
      *(double *)(pFVar3 + lVar8 + 0x38) = local_c0;
      DestructItems<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_> *)0x0,0);
      pTVar12 = pTVar12 + 1;
    } while (pTVar12 != local_110);
  }
  return;
}

// ApplyJointDataWrapperGTConstraint @ 1436f8b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FChaosVDDataWrapperUtils::ApplyJointDataWrapperGTConstraint
          (FJointConstraint *param_1,FChaosVDJointConstraint *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 auStackY_368 [32];
  FPBDJointSettings local_338;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_368;
  if (param_1 == (FJointConstraint *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_805950046158716362>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosVisualDebugger\\ChaosVDDataWrapperUtils.cpp"
                       ,0x236,"ConstraintPtr");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    dVar2 = (param_2->GameThreadJointState).Torque.field0_0x0._s_0.Y;
    (param_1->Output).Torque.field0_0x0._s_0.X =
         (param_2->GameThreadJointState).Torque.field0_0x0._s_0.X;
    (param_1->Output).Torque.field0_0x0._s_0.Y = dVar2;
    (param_1->Output).Torque.field0_0x0._s_0.Z =
         (param_2->GameThreadJointState).Torque.field0_0x0._s_0.Z;
    (param_1->Output).AngularViolation = (param_2->GameThreadJointState).AngularViolation;
    (param_1->Output).bDriveTargetChanged = (param_2->GameThreadJointState).bDriveTargetChanged;
    (param_1->Output).bIsBreaking = (param_2->GameThreadJointState).bIsBreaking;
    (param_1->Output).bIsBroken = (param_2->GameThreadJointState).bIsBroken;
    (param_1->Output).bIsViolating = (param_2->GameThreadJointState).bIsViolating;
    dVar2 = (param_2->GameThreadJointState).Force.field0_0x0._s_0.Y;
    (param_1->Output).Force.field0_0x0._s_0.X =
         (param_2->GameThreadJointState).Force.field0_0x0._s_0.X;
    (param_1->Output).Force.field0_0x0._s_0.Y = dVar2;
    (param_1->Output).Force.field0_0x0._s_0.Z =
         (param_2->GameThreadJointState).Force.field0_0x0._s_0.Z;
    (param_1->Output).LinearViolation = (param_2->GameThreadJointState).LinearViolation;
    Chaos::FPBDJointSettings::FPBDJointSettings(&local_338);
    CopyJointSettingsFromWrapper(&param_2->JointSettings,&local_338);
    Chaos::FJointConstraint::SetJointSettings(param_1,&local_338);
  }
  return;
}

// ApplyJointDataWrapperToHandle @ 1436f8ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FChaosVDDataWrapperUtils::ApplyJointDataWrapperToHandle
          (FPBDJointConstraintHandle *param_1,FChaosVDJointConstraint *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_3c8 [32];
  undefined1 local_398 [32];
  double dStack_378;
  double local_370;
  double local_368;
  double dStack_360;
  double local_358;
  EResimType local_348;
  ESyncState local_347;
  bool local_346;
  FPBDJointSettings local_338;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  if (param_1 == (FPBDJointConstraintHandle *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_805950046158716392>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosVisualDebugger\\ChaosVDDataWrapperUtils.cpp"
                       ,0x218,"ConstaintHanlde");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    Chaos::FPBDJointState::FPBDJointState((FPBDJointState *)local_398);
    Chaos::FPBDJointSettings::FPBDJointSettings(&local_338);
    local_368 = (param_2->PhysicsThreadJointState).AngularImpulse.field0_0x0._s_0.X;
    dStack_360 = (param_2->PhysicsThreadJointState).AngularImpulse.field0_0x0._s_0.Y;
    local_358 = (param_2->PhysicsThreadJointState).AngularImpulse.field0_0x0._s_0.Z;
    local_398[0x11] = (param_2->PhysicsThreadJointState).bBroken;
    local_398._24_8_ = (param_2->PhysicsThreadJointState).LinearImpulse.field0_0x0._s_0.X;
    dStack_378 = (param_2->PhysicsThreadJointState).LinearImpulse.field0_0x0._s_0.Y;
    local_398[0x12] = (param_2->PhysicsThreadJointState).bBreaking;
    local_370 = (param_2->PhysicsThreadJointState).LinearImpulse.field0_0x0._s_0.Z;
    local_398[0x10] = (param_2->PhysicsThreadJointState).bDisabled;
    local_398[0x14] = (param_2->PhysicsThreadJointState).bDriveTargetChanged;
    local_346 = (param_2->PhysicsThreadJointState).bEnabledDuringResim;
    local_348 = (EResimType)(param_2->PhysicsThreadJointState).ResimType;
    local_347 = (ESyncState)(param_2->PhysicsThreadJointState).SyncState;
    CopyJointSettingsFromWrapper(&param_2->JointSettings,&local_338);
    Chaos::FPBDJointConstraintHandle::SetSettings(param_1,&local_338);
    Chaos::FPBDJointConstraintHandle::SetJointState(param_1,(FPBDJointState *)local_398);
  }
  return;
}

// BuildCharacterGroundConstraintDataWrapper @ 1436f9530

FChaosVDCharacterGroundConstraint * __cdecl
FChaosVDDataWrapperUtils::BuildCharacterGroundConstraintDataWrapper
          (FChaosVDCharacterGroundConstraint *__return_storage_ptr__,
          FCharacterGroundConstraintHandle *param_1)

{
  undefined8 uVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  FUniqueIdx *pFVar13;
  int iVar14;
  int iVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  double local_res8;
  double local_res10;
  double local_res18;
  double local_res20;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double local_250;
  double local_248;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  
  uVar16 = 0;
  uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar20 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  bVar18 = false;
  iVar14 = -1;
  iVar15 = -1;
  uVar40 = 0;
  uVar41 = 0;
  local_268 = 0;
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uVar32 = 0;
  uVar33 = 0;
  uVar34 = 0;
  uVar35 = 0;
  uVar36 = 0;
  uVar37 = 0;
  uVar17 = 0;
  local_res8 = 0.0;
  local_res10 = 0.0;
  uVar38 = 0;
  uVar39 = 0;
  local_res18 = 0.0;
  local_res20 = 0.0;
  local_250 = 0.0;
  local_248 = 0.0;
  if (param_1 == (FCharacterGroundConstraintHandle *)0x0) {
    dVar27 = 0.0;
    uStack_110 = 0;
    uStack_10c = 0;
    local_108 = 0;
    uStack_104 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar42 = 0;
    uVar43 = 0;
    local_190 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar44 = uVar19;
    uVar45 = uVar20;
  }
  else {
    pTVar2 = param_1->CharacterParticle;
    iVar15 = -1;
    if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar13 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                          ((TGeometryParticlesImp<double,3,0> *)pTVar2->_padding_,
                           (int)pTVar2->_padding_);
      iVar15 = pFVar13->Idx;
    }
    pTVar2 = param_1->GroundParticle;
    if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar13 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                          ((TGeometryParticlesImp<double,3,0> *)pTVar2->_padding_,
                           (int)pTVar2->_padding_);
      iVar14 = pFVar13->Idx;
    }
    bVar18 = param_1->bDisabled != false;
    dVar3 = FUnitConversion::Convert<double>
                      (*(double *)&param_1->SolverAppliedForce,KilogramCentimetersPerSecondSquared,
                       Newtons);
    dVar4 = FUnitConversion::Convert<double>
                      (*(double *)&(param_1->SolverAppliedForce).field_0x8,
                       KilogramCentimetersPerSecondSquared,Newtons);
    dVar27 = FUnitConversion::Convert<double>
                       (*(double *)&(param_1->SolverAppliedForce).field_0x10,
                        KilogramCentimetersPerSecondSquared,Newtons);
    uVar19 = SUB84(dVar27,0);
    uVar20 = (undefined4)((ulonglong)dVar27 >> 0x20);
    dVar5 = FUnitConversion::Convert<double>
                      (*(double *)&param_1->SolverAppliedTorque,
                       KilogramCentimetersSquaredPerSecondSquared,NewtonMeters);
    dVar6 = FUnitConversion::Convert<double>
                      (*(double *)&(param_1->SolverAppliedTorque).field_0x8,
                       KilogramCentimetersSquaredPerSecondSquared,NewtonMeters);
    dVar7 = FUnitConversion::Convert<double>
                      (*(double *)&(param_1->SolverAppliedTorque).field_0x10,
                       KilogramCentimetersSquaredPerSecondSquared,NewtonMeters);
    local_190 = *(undefined4 *)&(param_1->Settings).VerticalAxis;
    uStack_18c = *(undefined4 *)&(param_1->Settings).VerticalAxis.field_0x4;
    uStack_188 = *(undefined4 *)&(param_1->Settings).VerticalAxis.field_0x8;
    uStack_184 = *(undefined4 *)&(param_1->Settings).VerticalAxis.field_0xc;
    uVar1 = *(undefined8 *)&(param_1->Settings).VerticalAxis.field_0x10;
    uVar42 = (undefined4)uVar1;
    uVar43 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar16 = 1;
    dVar27 = (param_1->Settings).TargetHeight;
    uVar40 = SUB84(dVar27,0);
    uVar41 = (undefined4)((ulonglong)dVar27 >> 0x20);
    dVar8 = FUnitConversion::Convert<double>
                      ((param_1->Settings).RadialForceLimit,KilogramCentimetersPerSecondSquared,
                       Newtons);
    dVar9 = FUnitConversion::Convert<double>
                      ((param_1->Settings).FrictionForceLimit,KilogramCentimetersPerSecondSquared,
                       Newtons);
    dVar10 = FUnitConversion::Convert<double>
                       ((param_1->Settings).SwingTorqueLimit,
                        KilogramCentimetersSquaredPerSecondSquared,NewtonMeters);
    dVar11 = FUnitConversion::Convert<double>
                       ((param_1->Settings).TwistTorqueLimit,
                        KilogramCentimetersSquaredPerSecondSquared,NewtonMeters);
    uVar1 = *(undefined8 *)&(param_1->Data).GroundNormal.field_0x10;
    uVar21 = (undefined4)uVar1;
    uVar22 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uStack_110 = *(undefined4 *)&(param_1->Data).TargetDeltaPosition;
    uStack_10c = *(undefined4 *)&(param_1->Data).TargetDeltaPosition.field_0x4;
    local_108 = *(undefined4 *)&(param_1->Data).TargetDeltaPosition.field_0x8;
    uStack_104 = *(undefined4 *)&(param_1->Data).TargetDeltaPosition.field_0xc;
    uVar17 = 1;
    dVar27 = *(double *)&(param_1->Data).TargetDeltaPosition.field_0x10;
    uVar1 = *(undefined8 *)&(param_1->Data).GroundNormal;
    uVar12 = *(undefined8 *)&(param_1->Data).GroundNormal.field_0x8;
    local_res8 = (param_1->Settings).CosMaxWalkableSlopeAngle;
    local_res10 = (param_1->Settings).DampingFactor;
    local_res18 = (param_1->Settings).AssumedOnGroundHeight;
    local_res20 = (param_1->Data).TargetDeltaFacing;
    local_250 = (param_1->Data).GroundDistance;
    local_248 = (param_1->Data).CosMaxWalkableSlopeAngle;
    local_268 = (undefined4)uVar1;
    uStack_264 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uStack_260 = (undefined4)uVar12;
    uStack_25c = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar32 = SUB84(dVar8,0);
    uVar33 = (undefined4)((ulonglong)dVar8 >> 0x20);
    uVar34 = SUB84(dVar9,0);
    uVar35 = (undefined4)((ulonglong)dVar9 >> 0x20);
    uVar38 = SUB84(dVar10,0);
    uVar39 = (undefined4)((ulonglong)dVar10 >> 0x20);
    uVar36 = SUB84(dVar11,0);
    uVar37 = (undefined4)((ulonglong)dVar11 >> 0x20);
    uVar23 = SUB84(dVar3,0);
    uVar24 = (int)((ulonglong)dVar3 >> 0x20);
    uVar25 = SUB84(dVar4,0);
    uVar26 = (int)((ulonglong)dVar4 >> 0x20);
    uVar28 = SUB84(dVar5,0);
    uVar29 = (int)((ulonglong)dVar5 >> 0x20);
    uVar30 = SUB84(dVar6,0);
    uVar31 = (int)((ulonglong)dVar6 >> 0x20);
    uVar44 = SUB84(dVar7,0);
    uVar45 = (int)((ulonglong)dVar7 >> 0x20);
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
  __return_storage_ptr__->_padding_ = (longlong)&___7FChaosVDCharacterGroundConstraint__6B_;
  __return_storage_ptr__->SolverID = -1;
  __return_storage_ptr__->ConstraintIndex = iVar15;
  __return_storage_ptr__->CharacterParticleIndex = iVar15;
  __return_storage_ptr__->GroundParticleIndex = iVar14;
  *(undefined4 *)&(__return_storage_ptr__->State).SolverAppliedForce.field0_0x0 = uVar23;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->State).SolverAppliedForce.field0_0x0 + 4) =
       uVar24;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->State).SolverAppliedForce.field0_0x0 + 8) =
       uVar25;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->State).SolverAppliedForce.field0_0x0 + 0xc) =
       uVar26;
  (__return_storage_ptr__->State)._padding_ =
       (longlong)&___7FChaosVDCharacterGroundConstraintStateDataWrapper__6B_;
  *(undefined4 *)&(__return_storage_ptr__->State).SolverAppliedTorque.field0_0x0 = uVar28;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->State).SolverAppliedTorque.field0_0x0 + 4) =
       uVar29;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->State).SolverAppliedTorque.field0_0x0 + 8) =
       uVar30;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->State).SolverAppliedTorque.field0_0x0 + 0xc) =
       uVar31;
  *(undefined1 *)&(__return_storage_ptr__->State)._padding_ = uVar16;
  (__return_storage_ptr__->State).SolverAppliedForce.field0_0x0._s_0.Z =
       (double)CONCAT44(uVar20,uVar19);
  (__return_storage_ptr__->State).SolverAppliedTorque.field0_0x0._s_0.Z =
       (double)CONCAT44(uVar45,uVar44);
  (__return_storage_ptr__->State).Island = -1;
  (__return_storage_ptr__->State).Level = -1;
  (__return_storage_ptr__->State).Color = -1;
  (__return_storage_ptr__->State).IslandSize = -1;
  (__return_storage_ptr__->State).bDisabled = bVar18;
  *(undefined4 *)&(__return_storage_ptr__->Settings).VerticalAxis.field0_0x0 = local_190;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Settings).VerticalAxis.field0_0x0 + 4) =
       uStack_18c;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Settings).VerticalAxis.field0_0x0 + 8) =
       uStack_188;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Settings).VerticalAxis.field0_0x0 + 0xc) =
       uStack_184;
  *(undefined1 *)&(__return_storage_ptr__->Settings)._padding_ = uVar17;
  (__return_storage_ptr__->Settings).TargetHeight = (double)CONCAT44(uVar41,uVar40);
  (__return_storage_ptr__->Settings).RadialForceLimit = (double)CONCAT44(uVar33,uVar32);
  (__return_storage_ptr__->Settings).FrictionForceLimit = (double)CONCAT44(uVar35,uVar34);
  (__return_storage_ptr__->Settings).TwistTorqueLimit = (double)CONCAT44(uVar37,uVar36);
  (__return_storage_ptr__->Settings).SwingTorqueLimit = (double)CONCAT44(uVar39,uVar38);
  (__return_storage_ptr__->Settings).CosMaxWalkableSlopeAngle = local_res8;
  (__return_storage_ptr__->Settings).DampingFactor = local_res10;
  (__return_storage_ptr__->Settings).VerticalAxis.field0_0x0._s_0.Z =
       (double)CONCAT44(uVar43,uVar42);
  (__return_storage_ptr__->Settings)._padding_ =
       (longlong)&___7FChaosVDCharacterGroundConstraintSettingsDataWrapper__6B_;
  (__return_storage_ptr__->Settings).AssumedOnGroundHeight = local_res18;
  *(undefined1 *)&(__return_storage_ptr__->Data)._padding_ = uVar17;
  *(undefined4 *)&(__return_storage_ptr__->Data).GroundNormal.field0_0x0 = local_268;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Data).GroundNormal.field0_0x0 + 4) =
       uStack_264;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Data).GroundNormal.field0_0x0 + 8) =
       uStack_260;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Data).GroundNormal.field0_0x0 + 0xc) =
       uStack_25c;
  (__return_storage_ptr__->Data)._padding_ =
       (longlong)&___7FChaosVDCharacterGroundConstraintDataDataWrapper__6B_;
  (__return_storage_ptr__->Data).GroundNormal.field0_0x0._s_0.Z = (double)CONCAT44(uVar22,uVar21);
  *(undefined4 *)&(__return_storage_ptr__->Data).TargetDeltaPosition.field0_0x0 = uStack_110;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Data).TargetDeltaPosition.field0_0x0 + 4) =
       uStack_10c;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Data).TargetDeltaPosition.field0_0x0 + 8) =
       local_108;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Data).TargetDeltaPosition.field0_0x0 + 0xc) =
       uStack_104;
  (__return_storage_ptr__->Data).TargetDeltaFacing = local_res20;
  (__return_storage_ptr__->Data).GroundDistance = local_250;
  (__return_storage_ptr__->Data).CosMaxWalkableSlopeAngle = local_248;
  (__return_storage_ptr__->Data).TargetDeltaPosition.field0_0x0._s_0.Z = dVar27;
  return __return_storage_ptr__;
}

// BuildConstraintDataWrapperFromConstraint @ 1436f99e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FChaosVDConstraint * __cdecl
FChaosVDDataWrapperUtils::BuildConstraintDataWrapperFromConstraint
          (FChaosVDConstraint *__return_storage_ptr__,FPBDCollisionConstraint *param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  ForElementType<Chaos::FSavedManifoldPoint> FVar4;
  ForElementType<Chaos::FManifoldPointResult> FVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte bVar15;
  undefined1 auVar16 [16];
  ForAnyElementType FVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  FUniqueIdx *pFVar21;
  FChaosVDConstraint *pFVar22;
  FScriptContainerElement FVar23;
  ForElementType<Chaos::FManifoldPoint> FVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ForElementType<Chaos::FSavedManifoldPoint> FVar31;
  ForElementType<Chaos::FManifoldPointResult> FVar32;
  double dVar33;
  undefined1 auStackY_3a8 [32];
  longlong local_368;
  ForAnyElementType local_360;
  undefined8 local_358;
  longlong local_350;
  ForElementType<Chaos::FManifoldPoint> local_348;
  longlong local_340;
  FChaosVDConstraint *local_338;
  undefined1 local_2c8 [568];
  double dStack_90;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  ForAnyElementType local_70;
  int local_68 [3];
  int local_5c;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  uVar27 = 0;
  local_2c8._160_16_ = (undefined1  [16])UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  bVar15 = (byte)((param_1->Flags).Bits >> 8);
  local_2c8._256_16_ = (undefined1  [16])UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  local_2c8._352_16_ = (undefined1  [16])UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  local_2c8._448_16_ = (undefined1  [16])UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  local_2c8[0] = (undefined1)(param_1->Flags).Bits;
  local_2c8._176_16_ = (undefined1  [16])UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
  ;
  local_2c8._272_16_ = (undefined1  [16])UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
  ;
  local_2c8._368_16_ = (undefined1  [16])UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
  ;
  local_2c8._464_16_ = (undefined1  [16])UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
  ;
  local_2c8._528_8_ = 0.0;
  local_2c8._536_8_ = 0.0;
  local_2c8._520_8_ = 0.0;
  local_2c8._544_8_ = 0.0;
  local_2c8._480_4_ = param_1->CullDistance;
  local_2c8[1] = ((((bVar15 >> 4 & 1) * '\x02' | bVar15 >> 3 & 1) * '\x02' | bVar15 >> 2 & 1) *
                  '\x02' | bVar15 >> 1 & 1) * '\x02' | bVar15 & 1 | local_2c8[1] & 0xe0;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = ___xmm_3ff00000000000000000000000000000;
  local_2c8._552_16_ = auVar16 << 0x40;
  dStack_90 = _UNK_15061cbc8;
  local_2c8._80_4_ = SEXT14((char)param_1->ShapesType);
  local_2c8._504_4_ = param_1->CollisionTolerance;
  local_2c8._8_4_ = 0.0;
  local_2c8._12_4_ = 0.0;
  local_2c8._16_4_ = 0.0;
  local_2c8._96_16_ = (undefined1  [16])UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
  ;
  local_2c8._112_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_2c8._128_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_2c8._144_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_2c8._192_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_2c8._208_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_2c8._224_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_2c8._240_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_2c8._288_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_2c8._304_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_2c8._320_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_2c8._336_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_2c8._384_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_2c8._400_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_2c8._416_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_2c8._432_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_2c8._488_8_ = (FScriptContainerElement *)0x0;
  local_2c8._496_4_ = 0;
  local_2c8._500_4_ = 0;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = -1;
  local_88 = param_1->Stiffness;
  local_2c8._508_4_ = param_1->ClosestManifoldPointIndex;
  local_80 = param_1->InitialOverlapDepenetrationVelocity;
  local_78 = param_1->CCDEnablePenetration;
  local_2c8._20_4_ = (param_1->Material).DynamicFriction;
  local_2c8._24_4_ = (param_1->Material).StaticFriction;
  local_2c8._28_4_ = (param_1->Material).Restitution;
  local_2c8._32_4_ = (param_1->Material).RestitutionThreshold;
  local_2c8._512_4_ = param_1->ExpectedNumManifoldPoints;
  local_2c8._36_4_ = (param_1->Material).InvMassScale0;
  local_2c8._40_4_ = (param_1->Material).InvMassScale1;
  local_2c8._44_4_ = (param_1->Material).InvInertiaScale0;
  local_2c8._48_4_ = (param_1->Material).InvInertiaScale1;
  local_2c8._4_4_ = (param_1->Material).FaceIndex;
  local_84 = param_1->MinInitialPhi;
  local_7c = param_1->CCDTimeOfImpact;
  local_74 = param_1->CCDTargetPenetration;
  local_2c8._56_8_ = (undefined8)*(float *)&param_1->AccumulatedImpulse;
  local_2c8._64_8_ = (undefined8)*(float *)&(param_1->AccumulatedImpulse).field_0x4;
  local_2c8._72_8_ = (undefined8)*(float *)&(param_1->AccumulatedImpulse).field_0x8;
  local_338 = __return_storage_ptr__;
  pFVar21 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                      ((TGeometryParticlesImp<double,3,0> *)param_1->Particle[0]->_padding_,
                       (int)param_1->Particle[0]->_padding_);
  local_68[2] = pFVar21->Idx;
  pFVar21 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                      ((TGeometryParticlesImp<double,3,0> *)param_1->Particle[1]->_padding_,
                       (int)param_1->Particle[1]->_padding_);
  local_5c = pFVar21->Idx;
  Chaos::VisualDebugger::Utils::
  TransformStaticArray<Chaos::TRigidTransform<double,3>,UE::Math::TTransform<double>,2,UE::Math::TTransform<double>_(__cdecl*)(Chaos::TRigidTransform<double,3>_const_&)>
            (&param_1->ShapeWorldTransforms,(TTransform<double> (*) [2])(local_2c8 + 0x60),
             Chaos::VisualDebugger::Utils::ConvertToFTransform);
  Chaos::VisualDebugger::Utils::
  TransformStaticArray<Chaos::TRigidTransform<double,3>,UE::Math::TTransform<double>,2,UE::Math::TTransform<double>_(__cdecl*)(Chaos::TRigidTransform<double,3>_const_&)>
            (&param_1->ImplicitTransform,(TTransform<double> (*) [2])(local_2c8 + 0x120),
             Chaos::VisualDebugger::Utils::ConvertToFTransform);
  local_360.Data = (FScriptContainerElement *)0x0;
  if ((param_1->CollisionMargins == (float *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ptr != nullptr || Count == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x2d3,L""), bVar18)) {
    pcVar6 = (code *)swi(3);
    pFVar22 = (FChaosVDConstraint *)(*pcVar6)();
    return pFVar22;
  }
  local_358._0_4_ = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_360,2,(int *)((longlong)&local_358 + 4));
  *(undefined8 *)local_360.Data = *(undefined8 *)param_1->CollisionMargins;
  if ((FScriptContainerElement *)local_2c8._488_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2c8._488_8_);
  }
  uVar20 = (param_1->ManifoldPoints).ArrayNum;
  lVar28 = (longlong)(int)uVar20;
  local_2c8._488_8_ = local_360.Data;
  local_360.Data = (FScriptContainerElement *)0x0;
  local_2c8._496_4_ = (int)local_358;
  local_2c8._500_4_ = local_358._4_4_;
  local_358 = 0;
  local_2c8._520_8_ = (undefined8)*(float *)&param_1->LastShapeWorldPositionDelta;
  local_2c8._528_8_ = (undefined8)*(float *)&(param_1->LastShapeWorldPositionDelta).field_0x4;
  local_2c8._536_8_ = (undefined8)*(float *)&(param_1->LastShapeWorldPositionDelta).field_0x8;
  local_2c8._544_8_ = (undefined8)*(float *)&param_1->LastShapeWorldRotationDelta;
  uVar3 = *(undefined8 *)&(param_1->LastShapeWorldRotationDelta).field_0x4;
  dVar33 = (double)(float)((ulonglong)uVar3 >> 0x20);
  local_2c8._560_4_ = SUB84(dVar33,0);
  local_2c8._552_8_ = (double)(float)uVar3;
  local_2c8._564_4_ = (int)((ulonglong)dVar33 >> 0x20);
  dStack_90 = (double)*(float *)&(param_1->LastShapeWorldRotationDelta).field_0xc;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if (local_68[1] < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x130,8,uVar20,&local_70,local_68[0],local_68 + 1);
  }
  if (local_68[0] < (int)uVar20) {
    iVar25 = uVar20 - local_68[0];
    iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x130,8,iVar25,&local_70,local_68,local_68 + 1);
    DefaultConstructItems<FChaosVDManifoldPoint,int>
              (local_70.Data + (longlong)iVar19 * 0x130,iVar25);
  }
  else if ((int)uVar20 < local_68[0]) {
    uVar26 = local_68[0] - uVar20;
    if (((int)(uVar20 | uVar26) < 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar18)) {
      pcVar6 = (code *)swi(3);
      pFVar22 = (FChaosVDConstraint *)(*pcVar6)();
      return pFVar22;
    }
    if (uVar26 != 0) {
      iVar19 = (local_68[0] - uVar26) - uVar20;
      if (iVar19 != 0) {
        memmove(local_70.Data + lVar28 * 0x130,
                local_70.Data + lVar28 * 0x130 + (longlong)(int)uVar26 * 0x130,
                (longlong)iVar19 * 0x130);
      }
      iVar19 = local_68[0] - uVar26;
      local_68[0] = iVar19;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x130,8,&local_70,iVar19,local_68 + 1);
    }
  }
  local_340 = lVar28;
  if (0 < (int)uVar20) {
    local_368 = 0;
    local_350 = 0;
    uVar29 = uVar27;
    uVar30 = uVar27;
    do {
      lVar28 = local_350;
      uVar26 = (uint)uVar30;
      uVar20 = 0;
      if ((int)uVar26 < local_68[0]) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        pFVar22 = (FChaosVDConstraint *)(*pcVar6)();
        return pFVar22;
      }
      FVar17.Data = local_70.Data;
      if ((int)uVar26 < (param_1->SavedManifoldPoints).ArrayNum) {
        if (((int)uVar26 < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          pFVar22 = (FChaosVDConstraint *)(*pcVar6)();
          return pFVar22;
        }
        FVar4 = (param_1->SavedManifoldPoints).AllocatorInstance.SecondaryData;
        FVar31 = (ForElementType<Chaos::FSavedManifoldPoint>)&param_1->SavedManifoldPoints;
        if (FVar4 != (ForElementType<Chaos::FSavedManifoldPoint>)0x0) {
          FVar31 = FVar4;
        }
        fVar1 = *(float *)(uVar29 + 8 + (longlong)FVar31);
        dVar33 = (double)*(float *)(uVar29 + 4 + (longlong)FVar31);
        auVar7._8_4_ = SUB84(dVar33,0);
        auVar7._0_8_ = (double)*(float *)(uVar29 + (longlong)FVar31);
        auVar7._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        *(undefined1 (*) [16])(FVar17.Data + uVar27 + 0xf8) = auVar7;
        *(double *)(FVar17.Data + uVar27 + 0x108) = (double)fVar1;
        fVar1 = *(float *)(uVar29 + 0x14 + (longlong)FVar31);
        dVar33 = (double)*(float *)(uVar29 + 0x10 + (longlong)FVar31);
        auVar8._8_4_ = SUB84(dVar33,0);
        auVar8._0_8_ = (double)*(float *)(uVar29 + 0xc + (longlong)FVar31);
        auVar8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        *(undefined1 (*) [16])(FVar17.Data + uVar27 + 0x110) = auVar8;
        *(double *)(FVar17.Data + uVar27 + 0x120) = (double)fVar1;
        lVar28 = local_350;
      }
      if ((int)uVar26 < (param_1->ManifoldPoints).ArrayNum) {
        local_348 = (ForElementType<Chaos::FManifoldPoint>)&param_1->ManifoldPoints;
        if (((int)uVar26 < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          pFVar22 = (FChaosVDConstraint *)(*pcVar6)();
          return pFVar22;
        }
        FVar24 = local_348;
        if (*(ForElementType<Chaos::FManifoldPoint> *)((longlong)local_348 + 0x1b0) !=
            (ForElementType<Chaos::FManifoldPoint>)0x0) {
          FVar24 = *(ForElementType<Chaos::FManifoldPoint> *)((longlong)local_348 + 0x1b0);
        }
        FVar23 = (FScriptContainerElement)
                 (((byte)FVar17.Data[uVar27] ^ *(byte *)(lVar28 + 0x30 + (longlong)FVar24)) & 1 ^
                 (byte)FVar17.Data[uVar27]);
        FVar17.Data[uVar27] = FVar23;
        FVar23 = (FScriptContainerElement)
                 (((byte)FVar23 ^ *(byte *)(lVar28 + 0x30 + (longlong)FVar24)) & 2 ^ (byte)FVar23);
        FVar17.Data[uVar27] = FVar23;
        FVar23 = (FScriptContainerElement)
                 (((byte)FVar23 ^ *(byte *)(lVar28 + 0x30 + (longlong)FVar24)) & 4 ^ (byte)FVar23);
        FVar17.Data[uVar27] = FVar23;
        FVar17.Data[uVar27] =
             (FScriptContainerElement)
             (((byte)FVar23 ^ *(byte *)(lVar28 + 0x30 + (longlong)FVar24)) & 8 ^ (byte)FVar23);
        *(undefined4 *)(FVar17.Data + uVar27 + 0x38) =
             *(undefined4 *)(lVar28 + 0x34 + (longlong)FVar24);
        *(undefined4 *)(FVar17.Data + uVar27 + 0x3c) =
             *(undefined4 *)(lVar28 + 0x38 + (longlong)FVar24);
        fVar1 = *(float *)(lVar28 + 0x44 + (longlong)FVar24);
        dVar33 = (double)*(float *)(lVar28 + 0x40 + (longlong)FVar24);
        auVar9._8_4_ = SUB84(dVar33,0);
        auVar9._0_8_ = (double)*(float *)(lVar28 + 0x3c + (longlong)FVar24);
        auVar9._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        *(undefined1 (*) [16])(FVar17.Data + uVar27 + 0x40) = auVar9;
        *(double *)(FVar17.Data + uVar27 + 0x50) = (double)fVar1;
        fVar1 = *(float *)(lVar28 + 0x50 + (longlong)FVar24);
        dVar33 = (double)*(float *)(lVar28 + 0x4c + (longlong)FVar24);
        auVar10._8_4_ = SUB84(dVar33,0);
        auVar10._0_8_ = (double)*(float *)(lVar28 + 0x48 + (longlong)FVar24);
        auVar10._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        *(undefined1 (*) [16])(FVar17.Data + uVar27 + 0x58) = auVar10;
        *(double *)(FVar17.Data + uVar27 + 0x68) = (double)fVar1;
        fVar1 = *(float *)(lVar28 + 0x5c + (longlong)FVar24);
        dVar33 = (double)*(float *)(lVar28 + 0x58 + (longlong)FVar24);
        auVar11._8_4_ = SUB84(dVar33,0);
        auVar11._0_8_ = (double)*(float *)(lVar28 + 0x54 + (longlong)FVar24);
        auVar11._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        *(undefined1 (*) [16])(FVar17.Data + uVar27 + 0x70) = auVar11;
        *(double *)(FVar17.Data + uVar27 + 0x80) = (double)fVar1;
        fVar1 = *(float *)(lVar28 + 0x68 + (longlong)FVar24);
        dVar33 = (double)*(float *)(lVar28 + 100 + (longlong)FVar24);
        auVar12._8_4_ = SUB84(dVar33,0);
        auVar12._0_8_ = (double)*(float *)(lVar28 + 0x60 + (longlong)FVar24);
        auVar12._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        *(undefined1 (*) [16])(FVar17.Data + uVar27 + 0x88) = auVar12;
        *(double *)(FVar17.Data + uVar27 + 0x98) = (double)fVar1;
        fVar1 = *(float *)(lVar28 + 8 + (longlong)FVar24);
        dVar33 = (double)*(float *)(lVar28 + 4 + (longlong)FVar24);
        auVar13._8_4_ = SUB84(dVar33,0);
        auVar13._0_8_ = (double)*(float *)(lVar28 + (longlong)FVar24);
        auVar13._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        *(undefined1 (*) [16])(FVar17.Data + uVar27 + 0xa0) = auVar13;
        *(double *)(FVar17.Data + uVar27 + 0xb0) = (double)fVar1;
        fVar1 = *(float *)(lVar28 + 0x14 + (longlong)FVar24);
        dVar33 = (double)*(float *)(lVar28 + 0x10 + (longlong)FVar24);
        auVar14._8_4_ = SUB84(dVar33,0);
        auVar14._0_8_ = (double)*(float *)(lVar28 + 0xc + (longlong)FVar24);
        auVar14._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        *(undefined1 (*) [16])(FVar17.Data + uVar27 + 0xb8) = auVar14;
        *(double *)(FVar17.Data + uVar27 + 200) = (double)fVar1;
        uVar3 = *(undefined8 *)(lVar28 + 0x1c + (longlong)FVar24);
        *(double *)(FVar17.Data + uVar27 + 0xd0) =
             (double)*(float *)(lVar28 + 0x18 + (longlong)FVar24);
        *(double *)(FVar17.Data + uVar27 + 0xd8) = (double)(float)uVar3;
        *(double *)(FVar17.Data + uVar27 + 0xd8 + 8) = (double)(float)((ulonglong)uVar3 >> 0x20);
        *(undefined4 *)(FVar17.Data + uVar27 + 0xe8) =
             *(undefined4 *)(lVar28 + 0x24 + (longlong)FVar24);
        *(undefined4 *)(FVar17.Data + uVar27 + 0xec) =
             *(undefined4 *)(lVar28 + 0x28 + (longlong)FVar24);
        FVar17.Data[uVar27 + 0xf0] = *(FScriptContainerElement *)(lVar28 + 0x2c + (longlong)FVar24);
      }
      if ((int)uVar26 < (param_1->ManifoldPointResults).ArrayNum) {
        if (((int)uVar26 < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          pFVar22 = (FChaosVDConstraint *)(*pcVar6)();
          return pFVar22;
        }
        FVar5 = (param_1->ManifoldPointResults).AllocatorInstance.SecondaryData;
        FVar32 = (ForElementType<Chaos::FManifoldPointResult>)&param_1->ManifoldPointResults;
        if (FVar5 != (ForElementType<Chaos::FManifoldPointResult>)0x0) {
          FVar32 = FVar5;
        }
        fVar1 = *(float *)((uchar *)((longlong)FVar32 + 4) + uVar29);
        fVar2 = *(float *)((uchar *)((longlong)FVar32 + 8) + uVar29);
        *(double *)(FVar17.Data + uVar27 + 8) = (double)*(float *)((longlong)FVar32 + uVar29);
        *(double *)(FVar17.Data + uVar27 + 0x10) = (double)fVar1;
        *(double *)(FVar17.Data + uVar27 + 0x18) = (double)fVar2;
        fVar1 = *(float *)((uchar *)((longlong)FVar32 + 0x10) + uVar29);
        fVar2 = *(float *)((uchar *)((longlong)FVar32 + 0x14) + uVar29);
        *(double *)(FVar17.Data + uVar27 + 0x20) =
             (double)*(float *)((uchar *)((longlong)FVar32 + 0xc) + uVar29);
        *(double *)(FVar17.Data + uVar27 + 0x28) = (double)fVar1;
        *(double *)(FVar17.Data + uVar27 + 0x30) = (double)fVar2;
        FVar23 = (FScriptContainerElement)
                 ((((uchar *)((longlong)FVar32 + 0x18))[uVar29] << 4 ^ (byte)FVar17.Data[uVar27]) &
                  0x10 ^ (byte)FVar17.Data[uVar27]);
        FVar17.Data[uVar27] = FVar23;
        FVar17.Data[uVar27] =
             (FScriptContainerElement)
             ((((uchar *)((longlong)FVar32 + 0x18))[uVar29] << 4 ^ (byte)FVar23) & 0x20 ^
             (byte)FVar23);
        lVar28 = local_350;
      }
      local_350 = lVar28 + 0x6c;
      local_368 = local_368 + 1;
      uVar30 = (ulonglong)(uVar26 + 1);
      uVar27 = uVar27 + 0x130;
      uVar29 = uVar29 + 0x1c;
      __return_storage_ptr__ = local_338;
    } while (local_368 < local_340);
  }
  FChaosVDConstraint::FChaosVDConstraint(__return_storage_ptr__,(FChaosVDConstraint *)local_2c8);
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if ((FScriptContainerElement *)local_2c8._488_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2c8._488_8_);
  }
  return __return_storage_ptr__;
}

// BuildDataWrapperFromAABBStructure @ 1436fa4a0

void __cdecl
FChaosVDDataWrapperUtils::BuildDataWrapperFromAABBStructure
          (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *param_1,
          int param_2,TArray<FChaosVDAABBTreeDataWrapper,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  undefined2 *puVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  ForAnyElementType FVar6;
  int iVar7;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *pTVar8;
  ulonglong uVar9;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *pTVar10;
  undefined2 *puVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res20 [8];
  undefined1 local_d8 [8];
  FScriptContainerElement local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  FScriptContainerElement local_b0;
  undefined8 local_ac;
  double local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  uint local_68;
  undefined2 *local_60;
  ulonglong local_58;
  
  if (param_1 != (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0
     ) {
    (**(code **)(param_1->_padding_ + 0x108))(param_1,&local_60);
    iVar7 = (int)local_58;
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_58 & 0xffffffff);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < iVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,iVar7,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    dVar5 = __real_bff0000000000000;
    local_68 = (uint)local_58;
    uVar9 = (ulonglong)(int)local_68;
    puVar2 = local_60 + uVar9;
    puVar11 = local_60;
    while( true ) {
      if ((int)local_58 != (int)uVar9) {
        `TCheckedPointerIterator<Chaos::FSpatialAccelerationIdx,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (puVar11 == puVar2) break;
      pTVar8 = (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                *)(**(code **)(param_1->_padding_ + 0xf0))(param_1,*puVar11);
      local_a0 = dVar5;
      local_d8 = (undefined1  [8])&___7FChaosVDAABBTreeDataWrapper__6B_;
      local_d0 = (FScriptContainerElement)0x0;
      local_c4 = 4;
      local_c0._0_4_ = -1;
      local_c0._4_4_ = -1;
      local_b8._0_4_ = -1;
      local_b8._4_4_ = -1;
      local_b0 = (FScriptContainerElement)0x0;
      local_ac._0_4_ = -1;
      local_ac._4_4_ = -1;
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90._0_4_ = 0;
      local_90._4_4_ = 0;
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80._0_4_ = 0;
      local_80._4_4_ = 0;
      local_78.Data = (FScriptContainerElement *)0x0;
      local_70._0_4_ = 0;
      local_70._4_4_ = 0;
      cVar3 = *(char *)((longlong)&pTVar8->_padding_ + 5);
      pTVar10 = (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                 *)0x0;
      if (cVar3 == '\x01') {
        pTVar10 = pTVar8;
      }
      local_c8 = param_2;
      if (pTVar10 ==
          (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
           *)0x0) {
        pTVar10 = (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                   *)0x0;
        if (cVar3 == '\x02') {
          pTVar10 = pTVar8;
        }
        if (pTVar10 !=
            (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
             *)0x0) {
          BuildDataWrapperFromAABBStructure<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                    ((TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                      *)pTVar10,(FChaosVDAABBTreeDataWrapper *)local_d8);
          goto LAB_1436fa60d;
        }
      }
      else {
        BuildDataWrapperFromAABBStructure<Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>_>
                  (pTVar10,(FChaosVDAABBTreeDataWrapper *)local_d8);
LAB_1436fa60d:
        iVar7 = param_3->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x870,&param_3->AllocatorInstance,piVar1);
        }
        FVar6.Data = local_98.Data;
        pFVar4 = (param_3->AllocatorInstance).Data;
        lVar12 = (longlong)iVar7 * 0x70;
        param_3->ArrayNum = iVar7 + 1;
        pFVar13 = pFVar4 + lVar12 + 0x40;
        *(undefined ***)(pFVar4 + lVar12) = &___7FChaosVDWrapperDataBase__6B_;
        pFVar4[lVar12 + 8] = local_d0;
        *(undefined ***)(pFVar4 + lVar12) = &___7FChaosVDAccelerationStructureBase__6B_;
        *(int *)(pFVar4 + lVar12 + 0x10) = local_c8;
        *(undefined4 *)(pFVar4 + lVar12 + 0x14) = local_c4;
        *(undefined ***)(pFVar4 + lVar12) = &___7FChaosVDAABBTreeDataWrapper__6B_;
        *(int *)(pFVar4 + lVar12 + 0x18) = (int)local_c0;
        *(int *)(pFVar4 + lVar12 + 0x1c) = local_c0._4_4_;
        *(int *)(pFVar4 + lVar12 + 0x20) = (int)local_b8;
        *(int *)(pFVar4 + lVar12 + 0x24) = local_b8._4_4_;
        pFVar4[lVar12 + 0x28] = local_b0;
        *(int *)(pFVar4 + lVar12 + 0x2c) = (int)local_ac;
        *(int *)(pFVar4 + lVar12 + 0x30) = local_ac._4_4_;
        *(double *)(pFVar4 + lVar12 + 0x38) = local_a0;
        *(undefined8 *)&pFVar13->field_0x0 = 0;
        iVar7 = (int)local_90;
        *(int *)&pFVar13[8].field_0x0 = (int)local_90;
        if ((int)local_90 == 0) {
          *(int *)(pFVar4 + lVar12 + 0x4c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x90,8,(int)local_90,0,(ForAnyElementType *)pFVar13,(int)local_90,
                     (int *)(pFVar4 + lVar12 + 0x4c));
          ConstructItems<FChaosVDAABBTreeNodeDataWrapper,FChaosVDAABBTreeNodeDataWrapper,int>
                    (*(void **)&pFVar13->field_0x0,(FChaosVDAABBTreeNodeDataWrapper *)FVar6.Data,
                     iVar7);
        }
        FVar6.Data = local_88.Data;
        pFVar13 = pFVar4 + lVar12 + 0x50;
        *(undefined8 *)&pFVar13->field_0x0 = 0;
        iVar7 = (int)local_80;
        *(int *)&pFVar13[8].field_0x0 = (int)local_80;
        if ((int)local_80 == 0) {
          *(int *)(pFVar4 + lVar12 + 0x5c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,(int)local_80,0,(ForAnyElementType *)pFVar13,(int)local_80,
                     (int *)(pFVar4 + lVar12 + 0x5c));
          ConstructItems<FChaosVDAABBTreeLeafDataWrapper,FChaosVDAABBTreeLeafDataWrapper,int>
                    (*(void **)&pFVar13->field_0x0,(FChaosVDAABBTreeLeafDataWrapper *)FVar6.Data,
                     iVar7);
        }
        FVar6.Data = local_78.Data;
        pFVar13 = pFVar4 + lVar12 + 0x60;
        *(undefined8 *)&pFVar13->field_0x0 = 0;
        iVar7 = (int)local_70;
        *(int *)&pFVar13[8].field_0x0 = (int)local_70;
        if ((int)local_70 == 0) {
          *(int *)(pFVar4 + lVar12 + 0x6c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,(int)local_70,0,(ForAnyElementType *)pFVar13,(int)local_70,
                     (int *)(pFVar4 + lVar12 + 0x6c));
          ConstructItems<FChaosVDBoundingVolumeDataWrapper,FChaosVDBoundingVolumeDataWrapper,int>
                    (*(void **)&pFVar13->field_0x0,(FChaosVDBoundingVolumeDataWrapper *)FVar6.Data,
                     iVar7);
        }
      }
      DestructItems<FChaosVDBoundingVolumeDataWrapper,int>
                ((FChaosVDBoundingVolumeDataWrapper *)local_78.Data,(int)local_70);
      if ((FChaosVDBoundingVolumeDataWrapper *)local_78.Data !=
          (FChaosVDBoundingVolumeDataWrapper *)0x0) {
        FMemory::Free(local_78.Data);
      }
      DestructItems<FChaosVDAABBTreeLeafDataWrapper,int>
                ((FChaosVDAABBTreeLeafDataWrapper *)local_88.Data,(int)local_80);
      if ((FChaosVDAABBTreeLeafDataWrapper *)local_88.Data != (FChaosVDAABBTreeLeafDataWrapper *)0x0
         ) {
        FMemory::Free(local_88.Data);
      }
      if ((FChaosVDAABBTreeNodeDataWrapper *)local_98.Data != (FChaosVDAABBTreeNodeDataWrapper *)0x0
         ) {
        FMemory::Free(local_98.Data);
      }
      puVar11 = puVar11 + 1;
      uVar9 = (ulonglong)local_68;
    }
    if (local_60 != (undefined2 *)0x0) {
      FMemory::Free(local_60);
    }
  }
  return;
}

// BuildGTJointDataWrapper @ 1436fa8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FChaosVDJointConstraint * __cdecl
FChaosVDDataWrapperUtils::BuildGTJointDataWrapper
          (FChaosVDJointConstraint *__return_storage_ptr__,FJointConstraint *param_1)

{
  undefined1 auStack_3f8 [32];
  FChaosVDJointConstraint local_3d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  FChaosVDJointConstraint::FChaosVDJointConstraint(&local_3d8);
  if (param_1 != (FJointConstraint *)0x0) {
    local_3d8.GameThreadJointState.AngularViolation = (param_1->Output).AngularViolation;
    local_3d8.GameThreadJointState.Force.field0_0x0._s_0.X =
         (param_1->Output).Force.field0_0x0._s_0.X;
    local_3d8.GameThreadJointState.Force.field0_0x0._s_0.Y =
         (param_1->Output).Force.field0_0x0._s_0.Y;
    local_3d8.GameThreadJointState.LinearViolation = (param_1->Output).LinearViolation;
    local_3d8.GameThreadJointState.Force.field0_0x0._s_0.Z =
         (param_1->Output).Force.field0_0x0._s_0.Z;
    local_3d8.GameThreadJointState.Torque.field0_0x0._s_0.Z =
         (param_1->Output).Torque.field0_0x0._s_0.Z;
    local_3d8.GameThreadJointState.bIsViolating = (param_1->Output).bIsViolating;
    local_3d8.GameThreadJointState.bDriveTargetChanged = (param_1->Output).bDriveTargetChanged;
    local_3d8.GameThreadJointState.bIsBroken = (param_1->Output).bIsBroken;
    local_3d8.GameThreadJointState.bIsBreaking = (param_1->Output).bIsBreaking;
    local_3d8.GameThreadJointState.Torque.field0_0x0._s_0.X =
         (param_1->Output).Torque.field0_0x0._s_0.X;
    local_3d8.GameThreadJointState.Torque.field0_0x0._s_0.Y =
         (param_1->Output).Torque.field0_0x0._s_0.Y;
    CopyJointConstraintSettingsToWrapper
              (&(param_1->JointSettings).Property,&local_3d8.JointSettings);
  }
  FChaosVDJointConstraint::FChaosVDJointConstraint(__return_storage_ptr__,&local_3d8);
  return __return_storage_ptr__;
}

// BuildJointDataWrapper @ 1436fa9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FChaosVDJointConstraint * __cdecl
FChaosVDDataWrapperUtils::BuildJointDataWrapper
          (FChaosVDJointConstraint *__return_storage_ptr__,FPBDJointConstraintHandle *param_1)

{
  bool bVar1;
  EResimType EVar2;
  ESyncState EVar3;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar4;
  FUniqueIdx *pFVar5;
  TVector<double,3> *pTVar6;
  FPBDJointSettings *pFVar7;
  undefined1 auStack_418 [32];
  TVector<double,3> local_3f8;
  FChaosVDJointConstraint local_3d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_418;
  FChaosVDJointConstraint::FChaosVDJointConstraint(&local_3d8);
  if (param_1 != (FPBDJointConstraintHandle *)0x0) {
    local_3d8.ConstraintIndex = (int)param_1->_padding_;
    pTVar4 = Chaos::FPBDJointConstraintHandle::GetConstrainedParticles
                       (param_1,(TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)
                                &local_3f8);
    pFVar5 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                       ((TGeometryParticlesImp<double,3,0> *)pTVar4->V[0]->_padding_,
                        (int)pTVar4->V[0]->_padding_);
    local_3d8.ParticleParIndexes[0] = pFVar5->Idx;
    pTVar4 = Chaos::FPBDJointConstraintHandle::GetConstrainedParticles
                       (param_1,(TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)
                                &local_3f8);
    pFVar5 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                       ((TGeometryParticlesImp<double,3,0> *)pTVar4->V[1]->_padding_,
                        (int)pTVar4->V[1]->_padding_);
    local_3d8.ParticleParIndexes[1] = pFVar5->Idx;
    bVar1 = Chaos::FPBDJointConstraintHandle::IsConstraintBroken(param_1);
    local_3d8.PhysicsThreadJointState._32_1_ =
         local_3d8.PhysicsThreadJointState._32_1_ & 0xfd | bVar1 * '\x02';
    bVar1 = Chaos::FPBDJointConstraintHandle::IsConstraintBreaking(param_1);
    local_3d8.PhysicsThreadJointState._32_1_ =
         local_3d8.PhysicsThreadJointState._32_1_ & 0xfb | bVar1 << 2;
    bVar1 = Chaos::FPBDJointConstraintHandle::IsConstraintEnabled(param_1);
    local_3d8.PhysicsThreadJointState._32_1_ =
         local_3d8.PhysicsThreadJointState._32_1_ & 0xfe | !bVar1;
    bVar1 = Chaos::FPBDJointConstraintHandle::IsDriveTargetChanged(param_1);
    local_3d8.PhysicsThreadJointState._32_1_ =
         local_3d8.PhysicsThreadJointState._32_1_ & 0xf7 | bVar1 << 3;
    bVar1 = Chaos::FPBDJointConstraintHandle::IsEnabledDuringResim(param_1);
    local_3d8.PhysicsThreadJointState._32_1_ =
         local_3d8.PhysicsThreadJointState._32_1_ & 0xef | bVar1 << 4;
    pTVar6 = Chaos::FPBDJointConstraintHandle::GetAngularImpulse(param_1,&local_3f8);
    local_3d8.PhysicsThreadJointState.AngularImpulse.field0_0x0._s_0.X =
         (double)*(undefined8 *)pTVar6;
    local_3d8.PhysicsThreadJointState.AngularImpulse.field0_0x0._s_0.Y =
         (double)*(undefined8 *)&pTVar6->field_0x8;
    local_3d8.PhysicsThreadJointState.AngularImpulse.field0_0x0._s_0.Z =
         (double)*(undefined8 *)&pTVar6->field_0x10;
    pTVar6 = Chaos::FPBDJointConstraintHandle::GetLinearImpulse(param_1,&local_3f8);
    local_3d8.PhysicsThreadJointState.LinearImpulse.field0_0x0._s_0.X =
         (double)*(undefined8 *)pTVar6;
    local_3d8.PhysicsThreadJointState.LinearImpulse.field0_0x0._s_0.Y =
         (double)*(undefined8 *)&pTVar6->field_0x8;
    local_3d8.PhysicsThreadJointState.LinearImpulse.field0_0x0._s_0.Z =
         (double)*(undefined8 *)&pTVar6->field_0x10;
    EVar2 = Chaos::FPBDJointConstraintHandle::ResimType(param_1);
    if (EVar2 == FullResim) {
      local_3d8.PhysicsThreadJointState.ResimType = FullResim;
    }
    else if (EVar2 == ResimAsFollower) {
      local_3d8.PhysicsThreadJointState.ResimType = ResimAsFollower;
    }
    EVar3 = Chaos::FPBDJointConstraintHandle::SyncState(param_1);
    if (EVar3 == InSync) {
      local_3d8.PhysicsThreadJointState.SyncState = InSync;
    }
    else if (EVar3 == HardDesync) {
      local_3d8.PhysicsThreadJointState.SyncState = HardDesync;
    }
    local_3d8.PhysicsThreadJointState._padding_._0_1_ = 1;
    pFVar7 = Chaos::FPBDJointConstraintHandle::GetSettings(param_1);
    CopyJointConstraintSettingsToWrapper(pFVar7,&local_3d8.JointSettings);
  }
  local_3d8._padding_._0_1_ = 1;
  FChaosVDJointConstraint::FChaosVDJointConstraint(__return_storage_ptr__,&local_3d8);
  return __return_storage_ptr__;
}

// BuildMidPhaseDataWrapperFromMidPhase @ 1436fabb0

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

FChaosVDParticlePairMidPhase * __cdecl
FChaosVDDataWrapperUtils::BuildMidPhaseDataWrapperFromMidPhase
          (FChaosVDParticlePairMidPhase *__return_storage_ptr__,FParticlePairMidPhase *param_1)

{
  undefined1 *puVar1;
  ushort uVar2;
  FUniqueIdx *pFVar3;
  byte bVar4;
  <lambda_1> local_res8;
  FChaosVDParticlePairMidPhase local_38;
  
  uVar2 = (param_1->Flags).Bits;
  bVar4 = (byte)uVar2;
  local_38.SolverID = -1;
  local_38.MidPhaseType = Unknown;
  local_38.Constraints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Constraints.ArrayNum = 0;
  local_38.Constraints.ArrayMax = 0;
  local_38.bIsModified = uVar2 >> 8;
  local_38.bIsSleeping = bVar4 >> 7;
  local_38.bIsCCDActive = bVar4 >> 2;
  local_38.bIsCCD = bVar4 >> 1;
  local_38.bIsActive = uVar2;
  local_38.LastUsedEpoch = param_1->LastUsedEpoch;
  pFVar3 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)param_1->Particle0->_padding_,
                      (int)param_1->Particle0->_padding_);
  local_38.Particle0Idx = pFVar3->Idx;
  pFVar3 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                     ((TGeometryParticlesImp<double,3,0> *)param_1->Particle1->_padding_,
                      (int)param_1->Particle1->_padding_);
  local_38.Particle1Idx = pFVar3->Idx;
  local_res8.WrappedMidPhaseData = &local_38;
  Chaos::FParticlePairMidPhase::
  VisitConstCollisions<_FChaosVDDataWrapperUtils::BuildMidPhaseDataWrapperFromMidPhase_::__l2::<lambda_1>_>
            (param_1,&local_res8,VisitAllCurrent);
  __return_storage_ptr__->bIsActive = '\0';
  __return_storage_ptr__->bIsModified = '\0';
  __return_storage_ptr__->bIsSleeping = '\0';
  __return_storage_ptr__->bIsCCDActive = '\0';
  __return_storage_ptr__->bIsCCD = '\0';
  __return_storage_ptr__->SolverID = local_38.SolverID;
  __return_storage_ptr__->MidPhaseType = local_38.MidPhaseType;
  __return_storage_ptr__->field_0x5 = __return_storage_ptr__->field_0x5 | local_38._5_1_ & 0x1f;
  __return_storage_ptr__->LastUsedEpoch = local_38.LastUsedEpoch;
  __return_storage_ptr__->Particle0Idx = local_38.Particle0Idx;
  __return_storage_ptr__->Particle1Idx = local_38.Particle1Idx;
  (__return_storage_ptr__->Constraints).AllocatorInstance.Data =
       local_38.Constraints.AllocatorInstance.Data;
  (__return_storage_ptr__->Constraints).ArrayNum = local_38.Constraints.ArrayNum;
  (__return_storage_ptr__->Constraints).ArrayMax = local_38.Constraints.ArrayMax;
  local_38.Constraints.ArrayNum = 0;
  local_38.Constraints.ArrayMax = 0;
  local_38.Constraints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  DestructItems<FChaosVDConstraint,int>((FChaosVDConstraint *)0x0,0);
  if (local_38.Constraints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Constraints.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildParticleDataWrapperFromGTParticle @ 1436faf70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FChaosVDParticleDataWrapper * __cdecl
FChaosVDDataWrapperUtils::BuildParticleDataWrapperFromGTParticle
          (FChaosVDParticleDataWrapper *__return_storage_ptr__,TGeometryParticle<double,3> *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ushort uVar3;
  undefined2 uVar4;
  double dVar5;
  byte bVar6;
  TGeometryParticle<double,3> *pTVar7;
  undefined1 auStack_468 [32];
  undefined2 local_448;
  FKinematicTarget local_438;
  undefined1 local_408 [152];
  undefined1 local_370;
  TVector<double>_u_0 local_368;
  TVector<double>_u_0 local_350 [3];
  FChaosVDKinematicTarget local_2f8;
  undefined1 local_260;
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 local_240;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_210;
  undefined1 local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  float local_1c8;
  float local_1c4;
  int local_1c0;
  EChaosVDObjectStateType local_1bc;
  EResimType local_1bb;
  uint local_1b8;
  undefined1 local_1a8;
  bool local_1a0;
  bool local_19f;
  bool local_19e;
  bool local_19d;
  uint local_19c;
  bool local_198;
  bool local_197;
  bool local_196;
  bool local_190;
  schar local_18f;
  schar local_18e;
  schar local_18d;
  undefined1 local_180;
  TVector<double>_u_0 local_178;
  TReferenceControllerBase<1> *local_158;
  void *pvStack_150;
  double local_148;
  ForElementType<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>_>
  FStack_140;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  FString *local_108;
  double local_100;
  ForAnyElementType local_60;
  ForAnyElementType local_48;
  FSharedReferencer<1> local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_468;
  FChaosVDParticleDataWrapper::FChaosVDParticleDataWrapper((FChaosVDParticleDataWrapper *)local_408)
  ;
  local_408._80_8_ = *(undefined8 *)&(param_1->MXR).Property.MX;
  local_408._88_8_ = *(undefined8 *)&(param_1->MXR).Property.MX.field_0x8;
  local_408._40_4_ = (param_1->MNonFrequentData).Property.MUniqueIdx.Idx;
  local_408._96_8_ = *(undefined8 *)&(param_1->MXR).Property.MX.field_0x10;
  local_408._112_8_ = (undefined8)*(float *)&(param_1->MXR).Property.MR;
  local_408[0x30] = param_1->Type;
  local_408._20_4_ = GameThread;
  pTVar7 = param_1;
  if (local_408[0x30] == Static) {
    pTVar7 = (TGeometryParticle<double,3> *)0x0;
  }
  local_408[0x48] = 1;
  uVar1 = *(undefined8 *)&(param_1->MXR).Property.MR.field_0x8;
  dVar5 = (double)(float)((ulonglong)uVar1 >> 0x20);
  local_408._120_8_ = (undefined8)*(float *)&(param_1->MXR).Property.MR.field_0x4;
  local_408._136_4_ = SUB84(dVar5,0);
  local_408._128_8_ = (double)(float)uVar1;
  local_408._140_4_ = (int)((ulonglong)dVar5 >> 0x20);
  if (pTVar7 != (TGeometryParticle<double,3> *)0x0) {
    local_368._s_0.X = (double)*(float *)&pTVar7[1]._padding_;
    local_370 = 1;
    local_368._s_0.Y = (double)*(float *)((longlong)&pTVar7[1]._padding_ + 4);
    local_368._s_0.Z = (double)*(float *)&pTVar7[1]._padding_;
    dVar5 = (double)(float)((ulonglong)pTVar7[1].Proxy >> 0x20);
    local_350[0]._0_8_ = (undefined8)*(float *)((longlong)&pTVar7[1]._padding_ + 4);
    local_350[0]._16_4_ = SUB84(dVar5,0);
    local_350[0]._8_8_ = (double)SUB84(pTVar7[1].Proxy,0);
    local_350[0]._20_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_438.Rotation._0_8_ = *(undefined8 *)&pTVar7[1].MXR.Property.MX;
    local_438.Rotation._8_8_ = *(undefined8 *)&pTVar7[1].MXR.Property.MX.field_0x8;
    local_438.Position._16_8_ = *(undefined8 *)&pTVar7[1].MXR.Property.MR;
    local_438.Mode = *(EKinematicTargetMode *)&pTVar7[1].MXR.Property.MR.field_0x8;
    local_438._44_4_ = *(undefined4 *)&pTVar7[1].MXR.Property.MR.field_0xc;
    local_438.Position._0_8_ = *(undefined8 *)&pTVar7[1].MXR.Property.MX.field_0x10;
    local_438.Position._8_8_ = pTVar7[1].MXR.Property._padding_;
    FChaosVDKinematicTarget::CopyFrom<Chaos::FKinematicTarget>(&local_2f8,&local_438);
  }
  pTVar7 = param_1;
  if (param_1->Type < Rigid) {
    pTVar7 = (TGeometryParticle<double,3> *)0x0;
  }
  if (pTVar7 != (TGeometryParticle<double,3> *)0x0) {
    uVar3 = (ushort)pTVar7[2].MNonFrequentData.Property.MParticleID.LocalID;
    local_1bc = *(EChaosVDObjectStateType *)&pTVar7[2].MNonFrequentData.Property.MSpatialIdx;
    local_1c0 = pTVar7[2].MNonFrequentData.Property.MUniqueIdx.Idx;
    local_1bb = pTVar7[2].MNonFrequentData.Property.MResimType;
    local_1b8 = pTVar7[2].MNonFrequentData.Property.MParticleID.GlobalID;
    bVar6 = (byte)uVar3;
    local_1a0 = (bool)(bVar6 & 1);
    local_260 = 1;
    local_19f = (bool)(bVar6 >> 1 & 1);
    local_258._s_0.X = (double)*(float *)&pTVar7[2].Proxy;
    local_19e = (bool)(bVar6 >> 2 & 1);
    local_258._s_0.Y = (double)*(float *)((longlong)&pTVar7[2].Proxy + 4);
    local_19d = (bool)(bVar6 >> 4 & 1);
    local_19c = uVar3 >> 5 & 7;
    local_258._s_0.Z = (double)*(float *)&pTVar7[2]._padding_;
    bVar6 = (byte)(uVar3 >> 8);
    local_198 = (bool)(bVar6 >> 1 & 1);
    local_197 = (bool)(bVar6 >> 2 & 1);
    uVar1 = *(undefined8 *)&pTVar7[2].MXR.Property.MX;
    dVar5 = (double)(float)((ulonglong)uVar1 >> 0x20);
    local_240._s_0.X = (double)*(float *)((longlong)&pTVar7[2]._padding_ + 4);
    local_240._16_4_ = SUB84(dVar5,0);
    local_240._8_8_ = (double)(float)uVar1;
    local_240._20_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_228._s_0.Y = (double)*(float *)&pTVar7[2].MXR.Property.MX.field_0xc;
    local_228._s_0.X = (double)*(float *)&pTVar7[2].MXR.Property.MX.field_0x8;
    local_210._s_0.X = (double)*(float *)&pTVar7[2].MXR.Property.MX.field_0x14;
    lVar2 = pTVar7[2].MXR.Property._padding_;
    dVar5 = (double)(float)((ulonglong)lVar2 >> 0x20);
    local_228._s_0.Z = (double)*(float *)&pTVar7[2].MXR.Property.MX.field_0x10;
    local_210._16_4_ = SUB84(dVar5,0);
    local_210._8_8_ = (double)(float)lVar2;
    local_210._20_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_1e0 = (double)*(float *)&pTVar7[2].MXR.Property.MR.field_0x4;
    local_1e8 = (double)*(float *)&pTVar7[2].MXR.Property.MR;
    local_1d0 = (double)*(float *)&pTVar7[2].MXR.Property.MR.field_0xc;
    local_1d8 = (double)*(float *)&pTVar7[2].MXR.Property.MR.field_0x8;
    local_1c4 = *(float *)((longlong)&pTVar7[2].MNonFrequentData.Property.MGeometry.Reference + 4);
    local_1c8 = *(float *)&pTVar7[2].MNonFrequentData.Property.MGeometry.Reference;
    local_178._s_0.X = (double)pTVar7[1].MNonFrequentData.Property.MGeometry.Reference;
    local_178._s_0.Y = (double)*(undefined8 *)&pTVar7[1].MNonFrequentData.Property.MUniqueIdx;
    local_190 = *(bool *)((longlong)&pTVar7[2].MNonFrequentData.Property.MDebugName.Object + 1);
    local_178._s_0.Z = (double)pTVar7[1].MNonFrequentData.Property.MParticleID;
    local_158 = pTVar7[1].MNonFrequentData.Property.MDebugName.SharedReferenceCount.
                ReferenceController;
    pvStack_150 = pTVar7[1].MUserData;
    local_196 = (bool)(bVar6 >> 3 & 1);
    local_148 = *(double *)pTVar7[1].MShapesArray.AllocatorInstance.InlineData;
    FStack_140 = pTVar7[1].MShapesArray.AllocatorInstance.SecondaryData;
    local_138._s_0.X = (double)(float)pTVar7[1].MShapesArray.ArrayNum;
    uVar4 = *(undefined2 *)((longlong)&pTVar7[2].MNonFrequentData.Property.MParticleID.LocalID + 2);
    local_448._1_1_ = (schar)((ushort)uVar4 >> 8);
    local_18e = local_448._1_1_;
    local_18d = *(schar *)&pTVar7[2].MNonFrequentData.Property.MDebugName.Object;
    local_138._s_0.Y = (double)(float)pTVar7[1].MShapesArray.ArrayMax;
    local_1a8 = 1;
    local_1f0 = 1;
    local_18f = (schar)uVar4;
    local_180 = 1;
    local_138._s_0.Z = (double)*(float *)&pTVar7[1].Type;
    dVar5 = (double)(float)((ulonglong)pTVar7[2]._padding_ >> 0x20);
    local_120._s_0.X = (double)(float)pTVar7[1].MDirtyFlags.Bits;
    local_120._16_4_ = SUB84(dVar5,0);
    local_120._8_8_ = (double)(float)pTVar7[2]._padding_;
    local_120._20_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_100 = (double)pTVar7[2]._padding_;
    local_108 = pTVar7[1].MNonFrequentData.Property.MDebugName.Object;
    local_448 = uVar4;
  }
  local_408._16_4_ = (param_1->MDirtyFlags).Bits;
  local_408[8] = 1;
  FChaosVDParticleDataWrapper::FChaosVDParticleDataWrapper
            (__return_storage_ptr__,(FChaosVDParticleDataWrapper *)local_408);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return __return_storage_ptr__;
}

// BuildParticleDataWrapperFromParticle @ 1436fb3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FChaosVDParticleDataWrapper * __cdecl
FChaosVDDataWrapperUtils::BuildParticleDataWrapperFromParticle
          (FChaosVDParticleDataWrapper *__return_storage_ptr__,
          TGeometryParticleHandleImp<double,3,1> *param_1)

{
  double *pdVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  FChaosVDParticleDataWrapper *pFVar9;
  FUniqueIdx *pFVar10;
  FKinematicTarget *pFVar11;
  TVector<double,3> *pTVar12;
  TRotation<double,3> *pTVar13;
  TVector<float,3> *pTVar14;
  TAABB<double,3> *pTVar15;
  uint uVar16;
  TGeometryParticleHandleImp<double,3,1> *pTVar17;
  TGeometryParticleHandleImp<double,3,1> *pTVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStack_478 [32];
  longlong local_458;
  longlong local_450;
  double local_448;
  double dStack_440;
  double local_438;
  double local_430;
  double dStack_428;
  double local_420;
  undefined1 local_418 [152];
  undefined1 local_380;
  TVector<double>_u_0 local_378;
  TVector<double>_u_0 local_360;
  undefined1 local_340;
  TVector<double>_u_0 local_338;
  TVector<double>_u_0 local_320;
  FChaosVDKinematicTarget local_308;
  undefined1 local_2b0;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_290;
  FChaosVDParticleDynamics local_278;
  FChaosVDParticleDynamicMisc local_208;
  undefined1 local_190;
  TVector<double>_u_0 local_188;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  double local_118;
  double local_110;
  FChaosVDParticleCluster local_108;
  ForAnyElementType local_58;
  FSharedReferencer<1> local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_478;
  if (param_1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParticleHandlePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosVisualDebugger\\ChaosVDDataWrapperUtils.cpp"
                       ,0x5a,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FChaosVDParticleDataWrapper *)(*pcVar6)();
      return pFVar9;
    }
  }
  FChaosVDParticleDataWrapper::FChaosVDParticleDataWrapper((FChaosVDParticleDataWrapper *)local_418)
  ;
  local_418._20_4_ = PhysicsThread;
  pFVar10 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                      ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                       (int)param_1->_padding_);
  pTVar17 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  local_418._40_4_ = pFVar10->Idx;
  local_418[0x30] = *(EChaosVDParticleType *)((longlong)&param_1->_padding_ + 4);
  pTVar18 = pTVar17;
  if (local_418[0x30] != Static) {
    pTVar18 = param_1;
  }
  if (pTVar18 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
              ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar18->_padding_,
               (TVector<double,3> *)&local_448,(int)pTVar18->_padding_);
    local_378._s_0.X = local_448;
    local_378._s_0.Y = dStack_440;
    local_378._s_0.Z = local_438;
    Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
              ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar18->_padding_,
               (TVector<double,3> *)&local_430,(int)pTVar18->_padding_);
    local_360._s_0.X = local_430;
    local_360._s_0.Y = dStack_428;
    local_380 = 1;
    local_360._s_0.Z = local_420;
    pFVar11 = Chaos::TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                        ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar18->_padding_,
                         (int)pTVar18->_padding_);
    FChaosVDKinematicTarget::CopyFrom<Chaos::FKinematicTarget>(&local_308,pFVar11);
  }
  pTVar18 = pTVar17;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    pTVar18 = param_1;
  }
  if (pTVar18 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar12 = Chaos::TParticles<double,3>::GetX
                        ((TParticles<double,3> *)param_1->_padding_,(int)param_1->_padding_);
    uVar3 = (uint)param_1->_padding_;
    lVar19 = (longlong)(int)uVar3;
    lVar5 = param_1->_padding_;
    local_418._80_8_ = *(undefined8 *)pTVar12;
    local_418._88_8_ = *(undefined8 *)&pTVar12->field_0x8;
    local_418._96_8_ = *(undefined8 *)&pTVar12->field_0x10;
    iVar4 = *(int *)(lVar5 + 0x50);
    uVar16 = 0;
    if ((int)uVar3 < iVar4) {
      uVar16 = ~uVar3 >> 0x1f;
    }
    if (uVar16 == 0) {
      local_458 = lVar19;
      local_450 = (longlong)iVar4;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FChaosVDParticleDataWrapper *)(*pcVar6)();
        return pFVar9;
      }
    }
    lVar5 = *(longlong *)(lVar5 + 0x48);
    uVar2 = *(undefined8 *)(lVar5 + 8 + lVar19 * 0x10);
    local_418._120_8_ = (undefined8)*(float *)(lVar5 + 4 + lVar19 * 0x10);
    local_418[0x48] = 1;
    local_418._112_8_ = (undefined8)*(float *)(lVar5 + lVar19 * 0x10);
    dVar7 = (double)(float)((ulonglong)uVar2 >> 0x20);
    local_418._136_4_ = SUB84(dVar7,0);
    local_418._128_8_ = (double)(float)uVar2;
    local_418._140_4_ = (int)((ulonglong)dVar7 >> 0x20);
  }
  else {
    pTVar12 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetP
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar18);
    uVar3 = (uint)pTVar18->_padding_;
    lVar19 = (longlong)(int)uVar3;
    lVar5 = pTVar18->_padding_;
    local_418._80_8_ = *(undefined8 *)pTVar12;
    local_418._88_8_ = *(undefined8 *)&pTVar12->field_0x8;
    local_418._96_8_ = *(undefined8 *)&pTVar12->field_0x10;
    iVar4 = *(int *)(lVar5 + 0x568);
    uVar16 = 0;
    if ((int)uVar3 < iVar4) {
      uVar16 = ~uVar3 >> 0x1f;
    }
    if (uVar16 == 0) {
      local_458 = lVar19;
      local_450 = (longlong)iVar4;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FChaosVDParticleDataWrapper *)(*pcVar6)();
        return pFVar9;
      }
    }
    lVar5 = *(longlong *)(lVar5 + 0x560);
    uVar3 = (uint)pTVar18->_padding_;
    lVar20 = (longlong)(int)uVar3;
    lVar21 = pTVar18->_padding_;
    uVar2 = *(undefined8 *)(lVar5 + 8 + lVar19 * 0x10);
    local_418._120_8_ = (undefined8)*(float *)(lVar5 + 4 + lVar19 * 0x10);
    local_418[0x48] = 1;
    local_418._112_8_ = (undefined8)*(float *)(lVar5 + lVar19 * 0x10);
    dVar7 = (double)(float)((ulonglong)uVar2 >> 0x20);
    local_418._136_4_ = SUB84(dVar7,0);
    local_418._128_8_ = (double)(float)uVar2;
    local_418._140_4_ = (int)((ulonglong)dVar7 >> 0x20);
    iVar4 = *(int *)(lVar21 + 0x2f8);
    uVar16 = 0;
    if ((int)uVar3 < iVar4) {
      uVar16 = ~uVar3 >> 0x1f;
    }
    if (uVar16 == 0) {
      local_458 = lVar20;
      local_450 = (longlong)iVar4;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FChaosVDParticleDataWrapper *)(*pcVar6)();
        return pFVar9;
      }
    }
    lVar5 = *(longlong *)(lVar21 + 0x2f0);
    uVar3 = (uint)pTVar18->_padding_;
    lVar21 = (longlong)(int)uVar3;
    lVar19 = pTVar18->_padding_;
    pdVar1 = (double *)(lVar5 + lVar20 * 0x18);
    local_2a8._s_0.X = *pdVar1;
    local_2a8._s_0.Y = pdVar1[1];
    local_2a8._s_0.Z = *(double *)(lVar5 + 0x10 + lVar20 * 0x18);
    iVar4 = *(int *)(lVar19 + 0x310);
    uVar16 = 0;
    if ((int)uVar3 < iVar4) {
      uVar16 = ~uVar3 >> 0x1f;
    }
    if (uVar16 == 0) {
      local_458 = lVar21;
      local_450 = (longlong)iVar4;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FChaosVDParticleDataWrapper *)(*pcVar6)();
        return pFVar9;
      }
    }
    lVar5 = *(longlong *)(lVar19 + 0x308);
    pdVar1 = (double *)(lVar5 + lVar21 * 0x18);
    local_290._s_0.X = *pdVar1;
    local_290._s_0.Y = pdVar1[1];
    local_290._s_0.Z = *(double *)(lVar5 + 0x10 + lVar21 * 0x18);
    local_2b0 = 1;
    FChaosVDParticleDynamics::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_const_>
              (&local_278,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar18);
    FChaosVDParticleDynamicMisc::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
              (&local_208,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar18);
    pTVar12 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar18);
    local_188._s_0.X = (double)*(undefined8 *)pTVar12;
    local_188._s_0.Y = (double)*(undefined8 *)&pTVar12->field_0x8;
    local_188._s_0.Z = (double)*(undefined8 *)&pTVar12->field_0x10;
    pTVar13 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar18);
    local_168 = *(double *)pTVar13;
    dStack_160 = *(double *)&pTVar13->field_0x8;
    local_158 = *(double *)&pTVar13->field_0x10;
    dStack_150 = *(double *)&pTVar13->field_0x18;
    pTVar14 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::I
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar18);
    local_148._s_0.Y = (double)*(float *)&pTVar14->field_0x4;
    local_148._s_0.Z = (double)*(float *)&pTVar14->field_0x8;
    local_148._s_0.X = (double)*(float *)pTVar14;
    pTVar14 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvI
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar18);
    local_130._s_0.X = (double)*(float *)pTVar14;
    dVar7 = (double)(float)((ulonglong)*(undefined8 *)&pTVar14->field_0x4 >> 0x20);
    local_130._16_4_ = SUB84(dVar7,0);
    local_130._8_8_ = (double)(float)*(undefined8 *)&pTVar14->field_0x4;
    local_130._20_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_118 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::M
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar18);
    local_110 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvM
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar18);
    local_190 = 1;
  }
  pTVar15 = Chaos::TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds(param_1);
  local_338._s_0.X = (double)*(undefined8 *)&pTVar15->MMin;
  local_338._s_0.Y = (double)*(undefined8 *)&(pTVar15->MMin).field_0x8;
  local_338._s_0.Z = (double)*(undefined8 *)&(pTVar15->MMin).field_0x10;
  pTVar15 = Chaos::TGeometryParticleHandleImp<double,3,1>::WorldSpaceInflatedBounds(param_1);
  if (2 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    pTVar17 = param_1;
  }
  local_320._s_0.X = (double)*(undefined8 *)&pTVar15->MMax;
  local_320._s_0.Y = (double)*(undefined8 *)&(pTVar15->MMax).field_0x8;
  local_320._s_0.Z = (double)*(undefined8 *)&(pTVar15->MMax).field_0x10;
  local_340 = 1;
  if (pTVar17 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    FChaosVDParticleCluster::CopyFrom<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>
              (&local_108,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar17);
  }
  local_418[8] = 1;
  FChaosVDParticleDataWrapper::FChaosVDParticleDataWrapper
            (__return_storage_ptr__,(FChaosVDParticleDataWrapper *)local_418);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_108.ConnectivityEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ConnectivityEdges.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConvertToFBox @ 1436fbe60

TBox<double> * __cdecl
FChaosVDDataWrapperUtils::ConvertToFBox
          (TBox<double> *__return_storage_ptr__,TAABB<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)&param_1->MMin;
  dVar3 = *(double *)&(param_1->MMin).field_0x8;
  __return_storage_ptr__->IsValid = '\x01';
  dVar1 = *(double *)&(param_1->MMin).field_0x10;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar2;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3;
  dVar2 = *(double *)&param_1->MMax;
  dVar3 = *(double *)&(param_1->MMax).field_0x8;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1;
  dVar1 = *(double *)&(param_1->MMax).field_0x10;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// ConvertToFVector @ 1436fbed0

TVector<double> * __cdecl
FChaosVDDataWrapperUtils::ConvertToFVector
          (TVector<double> *__return_storage_ptr__,TVector<float,3> *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  
  dVar2 = (double)(float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = (double)(float)*(undefined8 *)param_1;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)*(float *)&param_1->field_0x8;
  return __return_storage_ptr__;
}

// CopyCollisionMaterialToDataWrapper @ 1436fbef0

void __cdecl
FChaosVDDataWrapperUtils::CopyCollisionMaterialToDataWrapper
          (FPBDCollisionConstraintMaterial *param_1,FChaosVDCollisionMaterial *param_2)

{
  param_2->FaceIndex = param_1->FaceIndex;
  param_2->DynamicFriction = param_1->DynamicFriction;
  param_2->StaticFriction = param_1->StaticFriction;
  param_2->Restitution = param_1->Restitution;
  param_2->RestitutionThreshold = param_1->RestitutionThreshold;
  param_2->InvMassScale0 = param_1->InvMassScale0;
  param_2->InvMassScale1 = param_1->InvMassScale1;
  param_2->InvInertiaScale0 = param_1->InvInertiaScale0;
  param_2->InvInertiaScale1 = param_1->InvInertiaScale1;
  return;
}

// CopyJointConstraintSettingsToWrapper @ 1436fc430

void __cdecl
FChaosVDDataWrapperUtils::CopyJointConstraintSettingsToWrapper
          (FPBDJointSettings *param_1,FChaosVDJointSettingsDataWrapper *param_2)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  byte bVar13;
  
  param_2->Stiffness = param_1->Stiffness;
  param_2->LinearProjection = param_1->LinearProjection;
  param_2->AngularProjection = param_1->AngularProjection;
  param_2->AngularProjection = param_1->AngularProjection;
  param_2->TeleportDistance = param_1->TeleportDistance;
  param_2->TeleportAngle = param_1->TeleportAngle;
  param_2->ParentInvMassScale = param_1->ParentInvMassScale;
  param_2->bCollisionEnabled = param_1->bCollisionEnabled;
  param_2->bMassConditioningEnabled = param_1->bMassConditioningEnabled;
  param_2->bUseLinearSolver = param_1->bUseLinearSolver;
  param_2->bSoftLinearLimitsEnabled = param_1->bSoftLinearLimitsEnabled;
  param_2->bSoftTwistLimitsEnabled = param_1->bSoftTwistLimitsEnabled;
  param_2->bAngularSLerpPositionDriveEnabled = param_1->bAngularSLerpPositionDriveEnabled;
  param_2->bAngularSLerpVelocityDriveEnabled = param_1->bAngularSLerpVelocityDriveEnabled;
  param_2->bAngularTwistPositionDriveEnabled = param_1->bAngularTwistPositionDriveEnabled;
  param_2->bAngularTwistVelocityDriveEnabled = param_1->bAngularTwistVelocityDriveEnabled;
  param_2->bAngularSwingPositionDriveEnabled = param_1->bAngularSwingPositionDriveEnabled;
  param_2->bAngularSwingVelocityDriveEnabled = param_1->bAngularSwingVelocityDriveEnabled;
  param_2->LinearMotionTypes[0] = (param_1->LinearMotionTypes).field0_0x0._s_0.X;
  param_2->LinearMotionTypes[1] = (param_1->LinearMotionTypes).field0_0x0._s_0.Y;
  param_2->LinearMotionTypes[2] = (param_1->LinearMotionTypes).field0_0x0._s_0.Z;
  param_2->LinearLimit = param_1->LinearLimit;
  param_2->AngularMotionTypes[0] = (param_1->AngularMotionTypes).field0_0x0._s_0.X;
  param_2->AngularMotionTypes[1] = (param_1->AngularMotionTypes).field0_0x0._s_0.Y;
  param_2->AngularMotionTypes[2] = (param_1->AngularMotionTypes).field0_0x0._s_0.Z;
  dVar11 = *(double *)&(param_1->AngularLimits).field_0x8;
  (param_2->AngularLimits).field0_0x0._s_0.X = *(double *)&param_1->AngularLimits;
  (param_2->AngularLimits).field0_0x0._s_0.Y = dVar11;
  (param_2->AngularLimits).field0_0x0._s_0.Z = *(double *)&(param_1->AngularLimits).field_0x10;
  param_2->LinearSoftForceMode = param_1->LinearSoftForceMode;
  param_2->AngularSoftForceMode = param_1->AngularSoftForceMode;
  param_2->SoftLinearStiffness = param_1->SoftLinearStiffness;
  param_2->SoftLinearDamping = param_1->SoftLinearDamping;
  param_2->SoftTwistStiffness = param_1->SoftTwistStiffness;
  param_2->SoftTwistDamping = param_1->SoftTwistDamping;
  param_2->SoftSwingStiffness = param_1->SoftSwingStiffness;
  param_2->SoftSwingDamping = param_1->SoftSwingDamping;
  param_2->LinearRestitution = param_1->LinearRestitution;
  param_2->TwistRestitution = param_1->TwistRestitution;
  param_2->TwistRestitution = param_1->TwistRestitution;
  param_2->SwingRestitution = param_1->SwingRestitution;
  param_2->LinearContactDistance = param_1->LinearContactDistance;
  param_2->TwistContactDistance = param_1->TwistContactDistance;
  param_2->SwingContactDistance = param_1->SwingContactDistance;
  dVar12 = *(double *)&(param_1->LinearDrivePositionTarget).field_0x8;
  dVar11 = (double)(float)*(double *)&(param_1->LinearDrivePositionTarget).field_0x10;
  (param_2->LinearDrivePositionTarget).field0_0x0._s_0.X =
       (double)(float)*(double *)&param_1->LinearDrivePositionTarget;
  auVar2._8_4_ = SUB84(dVar11,0);
  auVar2._0_8_ = (double)(float)dVar12;
  auVar2._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_2->LinearDrivePositionTarget).field0_0x0 + 8) = auVar2;
  dVar12 = *(double *)&(param_1->LinearDriveVelocityTarget).field_0x8;
  dVar11 = (double)(float)*(double *)&(param_1->LinearDriveVelocityTarget).field_0x10;
  (param_2->LinearDriveVelocityTarget).field0_0x0._s_0.X =
       (double)(float)*(double *)&param_1->LinearDriveVelocityTarget;
  auVar3._8_4_ = SUB84(dVar11,0);
  auVar3._0_8_ = (double)(float)dVar12;
  auVar3._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_2->LinearDriveVelocityTarget).field0_0x0 + 8) = auVar3;
  bVar13 = (param_2->bLinearPositionDriveEnabled0 ^
           (param_1->bLinearPositionDriveEnabled).field0_0x0._s_0.X) & 1 ^ param_2->field_0x1e0;
  param_2->field_0x1e0 = bVar13;
  bVar13 = ((param_1->bLinearPositionDriveEnabled).field0_0x0._s_0.Y * '\x02' ^ bVar13) & 2 ^ bVar13
  ;
  param_2->field_0x1e0 = bVar13;
  bVar13 = ((param_1->bLinearPositionDriveEnabled).field0_0x0._s_0.Z << 2 ^ bVar13) & 4 ^ bVar13;
  param_2->field_0x1e0 = bVar13;
  bVar13 = ((param_1->bLinearVelocityDriveEnabled).field0_0x0._s_0.X << 3 ^ bVar13) & 8 ^ bVar13;
  param_2->field_0x1e0 = bVar13;
  bVar13 = ((param_1->bLinearVelocityDriveEnabled).field0_0x0._s_0.Y << 4 ^ bVar13) & 0x10 ^ bVar13;
  param_2->field_0x1e0 = bVar13;
  param_2->field_0x1e0 =
       ((param_1->bLinearVelocityDriveEnabled).field0_0x0._s_0.Z << 5 ^ bVar13) & 0x20 ^ bVar13;
  param_2->LinearDriveForceMode = param_1->LinearDriveForceMode;
  dVar12 = *(double *)&(param_1->LinearDriveStiffness).field_0x8;
  dVar11 = (double)(float)*(double *)&(param_1->LinearDriveStiffness).field_0x10;
  (param_2->LinearDriveStiffness).field0_0x0._s_0.X =
       (double)(float)*(double *)&param_1->LinearDriveStiffness;
  auVar4._8_4_ = SUB84(dVar11,0);
  auVar4._0_8_ = (double)(float)dVar12;
  auVar4._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_2->LinearDriveStiffness).field0_0x0 + 8) = auVar4;
  dVar12 = *(double *)&(param_1->LinearDriveDamping).field_0x8;
  dVar11 = (double)(float)*(double *)&(param_1->LinearDriveDamping).field_0x10;
  (param_2->LinearDriveDamping).field0_0x0._s_0.X =
       (double)(float)*(double *)&param_1->LinearDriveDamping;
  auVar5._8_4_ = SUB84(dVar11,0);
  auVar5._0_8_ = (double)(float)dVar12;
  auVar5._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_2->LinearDriveDamping).field0_0x0 + 8) = auVar5;
  dVar12 = *(double *)&(param_1->LinearDriveMaxForce).field_0x8;
  dVar11 = (double)(float)*(double *)&(param_1->LinearDriveMaxForce).field_0x10;
  (param_2->LinearDriveMaxForce).field0_0x0._s_0.X =
       (double)(float)*(double *)&param_1->LinearDriveMaxForce;
  auVar6._8_4_ = SUB84(dVar11,0);
  auVar6._0_8_ = (double)(float)dVar12;
  auVar6._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_2->LinearDriveMaxForce).field0_0x0 + 8) = auVar6;
  dVar11 = *(double *)&(param_1->AngularDrivePositionTarget).field_0x8;
  (param_2->AngularDrivePositionTarget).X = *(double *)&param_1->AngularDrivePositionTarget;
  (param_2->AngularDrivePositionTarget).Y = dVar11;
  dVar11 = *(double *)&(param_1->AngularDrivePositionTarget).field_0x18;
  (param_2->AngularDrivePositionTarget).Z =
       *(double *)&(param_1->AngularDrivePositionTarget).field_0x10;
  (param_2->AngularDrivePositionTarget).W = dVar11;
  dVar12 = *(double *)&(param_1->AngularDriveVelocityTarget).field_0x8;
  dVar11 = (double)(float)*(double *)&(param_1->AngularDriveVelocityTarget).field_0x10;
  (param_2->AngularDriveVelocityTarget).field0_0x0._s_0.X =
       (double)(float)*(double *)&param_1->AngularDriveVelocityTarget;
  auVar7._8_4_ = SUB84(dVar11,0);
  auVar7._0_8_ = (double)(float)dVar12;
  auVar7._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_2->AngularDriveVelocityTarget).field0_0x0 + 8) = auVar7;
  param_2->AngularDriveForceMode = param_1->AngularDriveForceMode;
  dVar12 = *(double *)&(param_1->AngularDriveStiffness).field_0x8;
  dVar11 = (double)(float)*(double *)&(param_1->AngularDriveStiffness).field_0x10;
  (param_2->AngularDriveStiffness).field0_0x0._s_0.X =
       (double)(float)*(double *)&param_1->AngularDriveStiffness;
  auVar8._8_4_ = SUB84(dVar11,0);
  auVar8._0_8_ = (double)(float)dVar12;
  auVar8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_2->AngularDriveStiffness).field0_0x0 + 8) = auVar8;
  dVar12 = *(double *)&(param_1->AngularDriveDamping).field_0x8;
  dVar11 = (double)(float)*(double *)&(param_1->AngularDriveDamping).field_0x10;
  (param_2->AngularDriveDamping).field0_0x0._s_0.X =
       (double)(float)*(double *)&param_1->AngularDriveDamping;
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = (double)(float)dVar12;
  auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_2->AngularDriveDamping).field0_0x0 + 8) = auVar9;
  dVar12 = *(double *)&(param_1->AngularDriveMaxTorque).field_0x8;
  dVar11 = (double)(float)*(double *)&(param_1->AngularDriveMaxTorque).field_0x10;
  (param_2->AngularDriveMaxTorque).field0_0x0._s_0.X =
       (double)(float)*(double *)&param_1->AngularDriveMaxTorque;
  auVar10._8_4_ = SUB84(dVar11,0);
  auVar10._0_8_ = (double)(float)dVar12;
  auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_2->AngularDriveMaxTorque).field0_0x0 + 8) = auVar10;
  param_2->LinearBreakForce = param_1->LinearBreakForce;
  param_2->LinearPlasticityLimit = param_1->LinearPlasticityLimit;
  param_2->LinearPlasticityType = param_1->LinearPlasticityType;
  param_2->LinearPlasticityInitialDistanceSquared = param_1->LinearPlasticityInitialDistanceSquared;
  param_2->AngularBreakTorque = param_1->AngularBreakTorque;
  param_2->AngularPlasticityLimit = param_1->AngularPlasticityLimit;
  param_2->ContactTransferScale = param_1->ContactTransferScale;
  dVar11 = *(double *)&(param_1->ConnectorTransforms).V[0].field_0x8;
  param_2->ConnectorTransforms[0].Rotation.XY.m128d_f64[0] =
       *(double *)(param_1->ConnectorTransforms).V;
  param_2->ConnectorTransforms[0].Rotation.XY.m128d_f64[1] = dVar11;
  dVar11 = *(double *)&(param_1->ConnectorTransforms).V[0].field_0x18;
  param_2->ConnectorTransforms[0].Rotation.ZW.m128d_f64[0] =
       *(double *)&(param_1->ConnectorTransforms).V[0].field_0x10;
  param_2->ConnectorTransforms[0].Rotation.ZW.m128d_f64[1] = dVar11;
  dVar11 = *(double *)&(param_1->ConnectorTransforms).V[0].field_0x28;
  param_2->ConnectorTransforms[0].Translation.XY.m128d_f64[0] =
       *(double *)&(param_1->ConnectorTransforms).V[0].field_0x20;
  param_2->ConnectorTransforms[0].Translation.XY.m128d_f64[1] = dVar11;
  dVar11 = *(double *)&(param_1->ConnectorTransforms).V[0].field_0x38;
  param_2->ConnectorTransforms[0].Translation.ZW.m128d_f64[0] =
       *(double *)&(param_1->ConnectorTransforms).V[0].field_0x30;
  param_2->ConnectorTransforms[0].Translation.ZW.m128d_f64[1] = dVar11;
  dVar11 = *(double *)&(param_1->ConnectorTransforms).V[0].field_0x48;
  param_2->ConnectorTransforms[0].Scale3D.XY.m128d_f64[0] =
       *(double *)&(param_1->ConnectorTransforms).V[0].field_0x40;
  param_2->ConnectorTransforms[0].Scale3D.XY.m128d_f64[1] = dVar11;
  dVar11 = *(double *)&(param_1->ConnectorTransforms).V[0].field_0x58;
  param_2->ConnectorTransforms[0].Scale3D.ZW.m128d_f64[0] =
       *(double *)&(param_1->ConnectorTransforms).V[0].field_0x50;
  param_2->ConnectorTransforms[0].Scale3D.ZW.m128d_f64[1] = dVar11;
  dVar11 = *(double *)&(param_1->ConnectorTransforms).V[1].field_0x8;
  param_2->ConnectorTransforms[1].Rotation.XY.m128d_f64[0] =
       *(double *)((param_1->ConnectorTransforms).V + 1);
  param_2->ConnectorTransforms[1].Rotation.XY.m128d_f64[1] = dVar11;
  dVar11 = *(double *)&(param_1->ConnectorTransforms).V[1].field_0x18;
  param_2->ConnectorTransforms[1].Rotation.ZW.m128d_f64[0] =
       *(double *)&(param_1->ConnectorTransforms).V[1].field_0x10;
  param_2->ConnectorTransforms[1].Rotation.ZW.m128d_f64[1] = dVar11;
  dVar11 = *(double *)&(param_1->ConnectorTransforms).V[1].field_0x28;
  param_2->ConnectorTransforms[1].Translation.XY.m128d_f64[0] =
       *(double *)&(param_1->ConnectorTransforms).V[1].field_0x20;
  param_2->ConnectorTransforms[1].Translation.XY.m128d_f64[1] = dVar11;
  dVar11 = *(double *)&(param_1->ConnectorTransforms).V[1].field_0x38;
  param_2->ConnectorTransforms[1].Translation.ZW.m128d_f64[0] =
       *(double *)&(param_1->ConnectorTransforms).V[1].field_0x30;
  param_2->ConnectorTransforms[1].Translation.ZW.m128d_f64[1] = dVar11;
  dVar11 = *(double *)&(param_1->ConnectorTransforms).V[1].field_0x48;
  param_2->ConnectorTransforms[1].Scale3D.XY.m128d_f64[0] =
       *(double *)&(param_1->ConnectorTransforms).V[1].field_0x40;
  param_2->ConnectorTransforms[1].Scale3D.XY.m128d_f64[1] = dVar11;
  dVar11 = *(double *)&(param_1->ConnectorTransforms).V[1].field_0x58;
  param_2->ConnectorTransforms[1].Scale3D.ZW.m128d_f64[0] =
       *(double *)&(param_1->ConnectorTransforms).V[1].field_0x50;
  param_2->ConnectorTransforms[1].Scale3D.ZW.m128d_f64[1] = dVar11;
  *(undefined1 *)&param_2->_padding_ = 1;
  return;
}

// CopyJointSettingsFromWrapper @ 1436fcb00

void __cdecl
FChaosVDDataWrapperUtils::CopyJointSettingsFromWrapper
          (FChaosVDJointSettingsDataWrapper *param_1,FPBDJointSettings *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  param_2->Stiffness = param_1->Stiffness;
  param_2->LinearProjection = param_1->LinearProjection;
  param_2->AngularProjection = param_1->AngularProjection;
  param_2->AngularProjection = param_1->AngularProjection;
  param_2->TeleportDistance = param_1->TeleportDistance;
  param_2->TeleportAngle = param_1->TeleportAngle;
  param_2->ParentInvMassScale = param_1->ParentInvMassScale;
  param_2->bCollisionEnabled = param_1->bCollisionEnabled;
  param_2->bMassConditioningEnabled = param_1->bMassConditioningEnabled;
  param_2->bUseLinearSolver = param_1->bUseLinearSolver;
  param_2->bSoftLinearLimitsEnabled = param_1->bSoftLinearLimitsEnabled;
  param_2->bSoftTwistLimitsEnabled = param_1->bSoftTwistLimitsEnabled;
  param_2->bAngularSLerpPositionDriveEnabled = param_1->bAngularSLerpPositionDriveEnabled;
  param_2->bAngularSLerpVelocityDriveEnabled = param_1->bAngularSLerpVelocityDriveEnabled;
  param_2->bAngularTwistPositionDriveEnabled = param_1->bAngularTwistPositionDriveEnabled;
  param_2->bAngularTwistVelocityDriveEnabled = param_1->bAngularTwistVelocityDriveEnabled;
  param_2->bAngularSwingPositionDriveEnabled = param_1->bAngularSwingPositionDriveEnabled;
  param_2->bAngularSwingVelocityDriveEnabled = param_1->bAngularSwingVelocityDriveEnabled;
  (param_2->LinearMotionTypes).field0_0x0._s_0.X = param_1->LinearMotionTypes[0];
  (param_2->LinearMotionTypes).field0_0x0._s_0.Y = param_1->LinearMotionTypes[1];
  (param_2->LinearMotionTypes).field0_0x0._s_0.Z = param_1->LinearMotionTypes[2];
  param_2->LinearLimit = param_1->LinearLimit;
  (param_2->AngularMotionTypes).field0_0x0._s_0.X = param_1->AngularMotionTypes[0];
  (param_2->AngularMotionTypes).field0_0x0._s_0.Y = param_1->AngularMotionTypes[1];
  (param_2->AngularMotionTypes).field0_0x0._s_0.Z = param_1->AngularMotionTypes[2];
  dVar11 = (param_1->AngularLimits).field0_0x0._s_0.Y;
  dVar1 = (param_1->AngularLimits).field0_0x0._s_0.Z;
  *(double *)&param_2->AngularLimits = (param_1->AngularLimits).field0_0x0._s_0.X;
  *(double *)&(param_2->AngularLimits).field_0x8 = dVar11;
  *(double *)&(param_2->AngularLimits).field_0x10 = dVar1;
  param_2->LinearSoftForceMode = param_1->LinearSoftForceMode;
  param_2->AngularSoftForceMode = param_1->AngularSoftForceMode;
  param_2->SoftLinearStiffness = param_1->SoftLinearStiffness;
  param_2->SoftLinearDamping = param_1->SoftLinearDamping;
  param_2->SoftTwistStiffness = param_1->SoftTwistStiffness;
  param_2->SoftTwistDamping = param_1->SoftTwistDamping;
  param_2->SoftSwingStiffness = param_1->SoftSwingStiffness;
  param_2->SoftSwingDamping = param_1->SoftSwingDamping;
  param_2->LinearRestitution = param_1->LinearRestitution;
  param_2->TwistRestitution = param_1->TwistRestitution;
  param_2->TwistRestitution = param_1->TwistRestitution;
  param_2->SwingRestitution = param_1->SwingRestitution;
  param_2->LinearContactDistance = param_1->LinearContactDistance;
  param_2->TwistContactDistance = param_1->TwistContactDistance;
  param_2->SwingContactDistance = param_1->SwingContactDistance;
  dVar11 = (param_1->LinearDrivePositionTarget).field0_0x0._s_0.Y;
  dVar1 = (double)(float)(param_1->LinearDrivePositionTarget).field0_0x0._s_0.Z;
  *(double *)&param_2->LinearDrivePositionTarget =
       (double)(float)(param_1->LinearDrivePositionTarget).field0_0x0._s_0.X;
  auVar2._8_4_ = SUB84(dVar1,0);
  auVar2._0_8_ = (double)(float)dVar11;
  auVar2._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&(param_2->LinearDrivePositionTarget).field_0x8 = auVar2;
  dVar11 = (param_1->LinearDriveVelocityTarget).field0_0x0._s_0.Y;
  dVar1 = (double)(float)(param_1->LinearDriveVelocityTarget).field0_0x0._s_0.Z;
  *(double *)&param_2->LinearDriveVelocityTarget =
       (double)(float)(param_1->LinearDriveVelocityTarget).field0_0x0._s_0.X;
  auVar3._8_4_ = SUB84(dVar1,0);
  auVar3._0_8_ = (double)(float)dVar11;
  auVar3._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&(param_2->LinearDriveVelocityTarget).field_0x8 = auVar3;
  (param_2->bLinearPositionDriveEnabled).field0_0x0._s_0.X = param_1->bLinearPositionDriveEnabled0;
  (param_2->bLinearPositionDriveEnabled).field0_0x0._s_0.Y = param_1->bLinearPositionDriveEnabled1;
  (param_2->bLinearPositionDriveEnabled).field0_0x0._s_0.Z = param_1->bLinearPositionDriveEnabled2;
  (param_2->bLinearVelocityDriveEnabled).field0_0x0._s_0.X = param_1->bLinearVelocityDriveEnabled0;
  (param_2->bLinearVelocityDriveEnabled).field0_0x0._s_0.Y = param_1->bLinearVelocityDriveEnabled1;
  (param_2->bLinearVelocityDriveEnabled).field0_0x0._s_0.Z = param_1->bLinearVelocityDriveEnabled2;
  param_2->LinearDriveForceMode = param_1->LinearDriveForceMode;
  dVar11 = (param_1->LinearDriveStiffness).field0_0x0._s_0.Y;
  dVar1 = (double)(float)(param_1->LinearDriveStiffness).field0_0x0._s_0.Z;
  *(double *)&param_2->LinearDriveStiffness =
       (double)(float)(param_1->LinearDriveStiffness).field0_0x0._s_0.X;
  auVar4._8_4_ = SUB84(dVar1,0);
  auVar4._0_8_ = (double)(float)dVar11;
  auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&(param_2->LinearDriveStiffness).field_0x8 = auVar4;
  dVar11 = (param_1->LinearDriveDamping).field0_0x0._s_0.Y;
  dVar1 = (double)(float)(param_1->LinearDriveDamping).field0_0x0._s_0.Z;
  *(double *)&param_2->LinearDriveDamping =
       (double)(float)(param_1->LinearDriveDamping).field0_0x0._s_0.X;
  auVar5._8_4_ = SUB84(dVar1,0);
  auVar5._0_8_ = (double)(float)dVar11;
  auVar5._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&(param_2->LinearDriveDamping).field_0x8 = auVar5;
  dVar11 = (param_1->LinearDriveMaxForce).field0_0x0._s_0.Y;
  dVar1 = (double)(float)(param_1->LinearDriveMaxForce).field0_0x0._s_0.Z;
  *(double *)&param_2->LinearDriveMaxForce =
       (double)(float)(param_1->LinearDriveMaxForce).field0_0x0._s_0.X;
  auVar6._8_4_ = SUB84(dVar1,0);
  auVar6._0_8_ = (double)(float)dVar11;
  auVar6._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&(param_2->LinearDriveMaxForce).field_0x8 = auVar6;
  dVar1 = (param_1->AngularDrivePositionTarget).Y;
  dVar11 = (param_1->AngularDrivePositionTarget).Z;
  dVar12 = (param_1->AngularDrivePositionTarget).W;
  *(double *)&param_2->AngularDrivePositionTarget = (param_1->AngularDrivePositionTarget).X;
  *(double *)&(param_2->AngularDrivePositionTarget).field_0x8 = dVar1;
  *(double *)&(param_2->AngularDrivePositionTarget).field_0x10 = dVar11;
  *(double *)&(param_2->AngularDrivePositionTarget).field_0x18 = dVar12;
  dVar11 = (param_1->AngularDriveVelocityTarget).field0_0x0._s_0.Y;
  dVar1 = (double)(float)(param_1->AngularDriveVelocityTarget).field0_0x0._s_0.Z;
  *(double *)&param_2->AngularDriveVelocityTarget =
       (double)(float)(param_1->AngularDriveVelocityTarget).field0_0x0._s_0.X;
  auVar7._8_4_ = SUB84(dVar1,0);
  auVar7._0_8_ = (double)(float)dVar11;
  auVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&(param_2->AngularDriveVelocityTarget).field_0x8 = auVar7;
  param_2->AngularDriveForceMode = param_1->AngularDriveForceMode;
  dVar11 = (param_1->AngularDriveStiffness).field0_0x0._s_0.Y;
  dVar1 = (double)(float)(param_1->AngularDriveStiffness).field0_0x0._s_0.Z;
  *(double *)&param_2->AngularDriveStiffness =
       (double)(float)(param_1->AngularDriveStiffness).field0_0x0._s_0.X;
  auVar8._8_4_ = SUB84(dVar1,0);
  auVar8._0_8_ = (double)(float)dVar11;
  auVar8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&(param_2->AngularDriveStiffness).field_0x8 = auVar8;
  dVar11 = (param_1->AngularDriveDamping).field0_0x0._s_0.Y;
  dVar1 = (double)(float)(param_1->AngularDriveDamping).field0_0x0._s_0.Z;
  *(double *)&param_2->AngularDriveDamping =
       (double)(float)(param_1->AngularDriveDamping).field0_0x0._s_0.X;
  auVar9._8_4_ = SUB84(dVar1,0);
  auVar9._0_8_ = (double)(float)dVar11;
  auVar9._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&(param_2->AngularDriveDamping).field_0x8 = auVar9;
  dVar11 = (param_1->AngularDriveMaxTorque).field0_0x0._s_0.Y;
  dVar1 = (double)(float)(param_1->AngularDriveMaxTorque).field0_0x0._s_0.Z;
  *(double *)&param_2->AngularDriveMaxTorque =
       (double)(float)(param_1->AngularDriveMaxTorque).field0_0x0._s_0.X;
  auVar10._8_4_ = SUB84(dVar1,0);
  auVar10._0_8_ = (double)(float)dVar11;
  auVar10._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&(param_2->AngularDriveMaxTorque).field_0x8 = auVar10;
  param_2->LinearBreakForce = param_1->LinearBreakForce;
  param_2->LinearPlasticityLimit = param_1->LinearPlasticityLimit;
  param_2->LinearPlasticityType = param_1->LinearPlasticityType;
  param_2->LinearPlasticityInitialDistanceSquared = param_1->LinearPlasticityInitialDistanceSquared;
  param_2->AngularBreakTorque = param_1->AngularBreakTorque;
  param_2->AngularPlasticityLimit = param_1->AngularPlasticityLimit;
  param_2->ContactTransferScale = param_1->ContactTransferScale;
  dVar1 = param_1->ConnectorTransforms[0].Rotation.XY.m128d_f64[1];
  dVar11 = param_1->ConnectorTransforms[0].Rotation.ZW.m128d_f64[0];
  dVar12 = param_1->ConnectorTransforms[0].Rotation.ZW.m128d_f64[1];
  dVar13 = param_1->ConnectorTransforms[0].Translation.XY.m128d_f64[0];
  dVar14 = param_1->ConnectorTransforms[0].Translation.XY.m128d_f64[1];
  dVar15 = param_1->ConnectorTransforms[0].Translation.ZW.m128d_f64[0];
  dVar16 = param_1->ConnectorTransforms[0].Translation.ZW.m128d_f64[1];
  dVar17 = param_1->ConnectorTransforms[0].Scale3D.XY.m128d_f64[0];
  dVar18 = param_1->ConnectorTransforms[0].Scale3D.XY.m128d_f64[1];
  dVar19 = param_1->ConnectorTransforms[0].Scale3D.ZW.m128d_f64[0];
  dVar20 = param_1->ConnectorTransforms[0].Scale3D.ZW.m128d_f64[1];
  *(double *)(param_2->ConnectorTransforms).V =
       param_1->ConnectorTransforms[0].Rotation.XY.m128d_f64[0];
  *(double *)&(param_2->ConnectorTransforms).V[0].field_0x8 = dVar1;
  *(double *)&(param_2->ConnectorTransforms).V[0].field_0x10 = dVar11;
  *(double *)&(param_2->ConnectorTransforms).V[0].field_0x18 = dVar12;
  *(double *)&(param_2->ConnectorTransforms).V[0].field_0x20 = dVar13;
  *(double *)&(param_2->ConnectorTransforms).V[0].field_0x28 = dVar14;
  *(double *)&(param_2->ConnectorTransforms).V[0].field_0x30 = dVar15;
  *(double *)&(param_2->ConnectorTransforms).V[0].field_0x38 = dVar16;
  *(double *)&(param_2->ConnectorTransforms).V[0].field_0x40 = dVar17;
  *(double *)&(param_2->ConnectorTransforms).V[0].field_0x48 = dVar18;
  *(double *)&(param_2->ConnectorTransforms).V[0].field_0x50 = dVar19;
  *(double *)&(param_2->ConnectorTransforms).V[0].field_0x58 = dVar20;
  dVar1 = param_1->ConnectorTransforms[1].Rotation.XY.m128d_f64[1];
  dVar11 = param_1->ConnectorTransforms[1].Rotation.ZW.m128d_f64[0];
  dVar12 = param_1->ConnectorTransforms[1].Rotation.ZW.m128d_f64[1];
  dVar13 = param_1->ConnectorTransforms[1].Translation.XY.m128d_f64[0];
  dVar14 = param_1->ConnectorTransforms[1].Translation.XY.m128d_f64[1];
  dVar15 = param_1->ConnectorTransforms[1].Translation.ZW.m128d_f64[0];
  dVar16 = param_1->ConnectorTransforms[1].Translation.ZW.m128d_f64[1];
  dVar17 = param_1->ConnectorTransforms[1].Scale3D.XY.m128d_f64[0];
  dVar18 = param_1->ConnectorTransforms[1].Scale3D.XY.m128d_f64[1];
  dVar19 = param_1->ConnectorTransforms[1].Scale3D.ZW.m128d_f64[0];
  dVar20 = param_1->ConnectorTransforms[1].Scale3D.ZW.m128d_f64[1];
  *(double *)((param_2->ConnectorTransforms).V + 1) =
       param_1->ConnectorTransforms[1].Rotation.XY.m128d_f64[0];
  *(double *)&(param_2->ConnectorTransforms).V[1].field_0x8 = dVar1;
  *(double *)&(param_2->ConnectorTransforms).V[1].field_0x10 = dVar11;
  *(double *)&(param_2->ConnectorTransforms).V[1].field_0x18 = dVar12;
  *(double *)&(param_2->ConnectorTransforms).V[1].field_0x20 = dVar13;
  *(double *)&(param_2->ConnectorTransforms).V[1].field_0x28 = dVar14;
  *(double *)&(param_2->ConnectorTransforms).V[1].field_0x30 = dVar15;
  *(double *)&(param_2->ConnectorTransforms).V[1].field_0x38 = dVar16;
  *(double *)&(param_2->ConnectorTransforms).V[1].field_0x40 = dVar17;
  *(double *)&(param_2->ConnectorTransforms).V[1].field_0x48 = dVar18;
  *(double *)&(param_2->ConnectorTransforms).V[1].field_0x50 = dVar19;
  *(double *)&(param_2->ConnectorTransforms).V[1].field_0x58 = dVar20;
  return;
}

// CopyManifoldPointResultsToDataWrapper @ 1436fd070

void __cdecl
FChaosVDDataWrapperUtils::CopyManifoldPointResultsToDataWrapper
          (FManifoldPointResult *param_1,FChaosVDManifoldPoint *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  uVar1 = *(undefined8 *)&(param_1->NetPushOut).field_0x4;
  (param_2->NetPushOut).field0_0x0._s_0.X = (double)*(float *)&param_1->NetPushOut;
  (param_2->NetPushOut).field0_0x0._s_0.Y = (double)(float)uVar1;
  (param_2->NetPushOut).field0_0x0._s_0.Z = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)&(param_1->NetImpulse).field_0x4;
  (param_2->NetImpulse).field0_0x0._s_0.X = (double)*(float *)&param_1->NetImpulse;
  (param_2->NetImpulse).field0_0x0._s_0.Y = (double)(float)uVar1;
  (param_2->NetImpulse).field0_0x0._s_0.Z = (double)(float)((ulonglong)uVar1 >> 0x20);
  bVar2 = (param_1->field_0x18 << 4 ^ *(byte *)param_2) & 0x10 ^ *(byte *)param_2;
  *(byte *)param_2 = bVar2;
  *(byte *)param_2 = (param_1->field_0x18 << 4 ^ bVar2) & 0x20 ^ bVar2;
  return;
}

// CopyManifoldPointsToDataWrapper @ 1436fd0d0

void __cdecl
FChaosVDDataWrapperUtils::CopyManifoldPointsToDataWrapper
          (FManifoldPoint *param_1,FChaosVDManifoldPoint *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  byte bVar11;
  
  bVar11 = (param_2->bDisabled ^ (param_1->Flags).Bits) & 1 ^ *(byte *)param_2;
  *(byte *)param_2 = bVar11;
  bVar11 = (bVar11 ^ (param_1->Flags).Bits) & 2 ^ bVar11;
  *(byte *)param_2 = bVar11;
  bVar11 = (bVar11 ^ (param_1->Flags).Bits) & 4 ^ bVar11;
  *(byte *)param_2 = bVar11;
  *(byte *)param_2 = (bVar11 ^ (param_1->Flags).Bits) & 8 ^ bVar11;
  param_2->TargetPhi = param_1->TargetPhi;
  param_2->InitialPhi = param_1->InitialPhi;
  fVar1 = *(float *)&param_1->ShapeAnchorPoints[0].field_0x8;
  dVar10 = (double)*(float *)&param_1->ShapeAnchorPoints[0].field_0x4;
  auVar3._8_4_ = SUB84(dVar10,0);
  auVar3._0_8_ = (double)*(float *)param_1->ShapeAnchorPoints;
  auVar3._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])&param_2->ShapeAnchorPoints[0].field0_0x0 = auVar3;
  param_2->ShapeAnchorPoints[0].field0_0x0._s_0.Z = (double)fVar1;
  fVar1 = *(float *)&param_1->ShapeAnchorPoints[1].field_0x8;
  dVar10 = (double)*(float *)&param_1->ShapeAnchorPoints[1].field_0x4;
  auVar4._8_4_ = SUB84(dVar10,0);
  auVar4._0_8_ = (double)*(float *)(param_1->ShapeAnchorPoints + 1);
  auVar4._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])&param_2->ShapeAnchorPoints[1].field0_0x0 = auVar4;
  param_2->ShapeAnchorPoints[1].field0_0x0._s_0.Z = (double)fVar1;
  fVar1 = *(float *)&param_1->InitialShapeContactPoints[0].field_0x8;
  dVar10 = (double)*(float *)&param_1->InitialShapeContactPoints[0].field_0x4;
  auVar5._8_4_ = SUB84(dVar10,0);
  auVar5._0_8_ = (double)*(float *)param_1->InitialShapeContactPoints;
  auVar5._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])&param_2->InitialShapeContactPoints[0].field0_0x0 = auVar5;
  param_2->InitialShapeContactPoints[0].field0_0x0._s_0.Z = (double)fVar1;
  fVar1 = *(float *)&param_1->InitialShapeContactPoints[1].field_0x8;
  dVar10 = (double)*(float *)&param_1->InitialShapeContactPoints[1].field_0x4;
  auVar6._8_4_ = SUB84(dVar10,0);
  auVar6._0_8_ = (double)*(float *)(param_1->InitialShapeContactPoints + 1);
  auVar6._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])&param_2->InitialShapeContactPoints[1].field0_0x0 = auVar6;
  param_2->InitialShapeContactPoints[1].field0_0x0._s_0.Z = (double)fVar1;
  fVar1 = *(float *)&(param_1->ContactPoint).ShapeContactPoints[0].field_0x8;
  dVar10 = (double)*(float *)&(param_1->ContactPoint).ShapeContactPoints[0].field_0x4;
  auVar7._8_4_ = SUB84(dVar10,0);
  auVar7._0_8_ = (double)*(float *)(param_1->ContactPoint).ShapeContactPoints;
  auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])&(param_2->ContactPoint).ShapeContactPoints[0].field0_0x0 = auVar7;
  (param_2->ContactPoint).ShapeContactPoints[0].field0_0x0._s_0.Z = (double)fVar1;
  fVar1 = *(float *)&(param_1->ContactPoint).ShapeContactPoints[1].field_0x8;
  dVar10 = (double)*(float *)&(param_1->ContactPoint).ShapeContactPoints[1].field_0x4;
  auVar8._8_4_ = SUB84(dVar10,0);
  auVar8._0_8_ = (double)*(float *)((param_1->ContactPoint).ShapeContactPoints + 1);
  auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])&(param_2->ContactPoint).ShapeContactPoints[1].field0_0x0 = auVar8;
  (param_2->ContactPoint).ShapeContactPoints[1].field0_0x0._s_0.Z = (double)fVar1;
  uVar2 = *(undefined8 *)&(param_1->ContactPoint).ShapeContactNormal.field_0x4;
  dVar10 = (double)(float)((ulonglong)uVar2 >> 0x20);
  (param_2->ContactPoint).ShapeContactNormal.field0_0x0._s_0.X =
       (double)*(float *)&(param_1->ContactPoint).ShapeContactNormal;
  auVar9._8_4_ = SUB84(dVar10,0);
  auVar9._0_8_ = (double)(float)uVar2;
  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_2->ContactPoint).ShapeContactNormal.field0_0x0 + 8) =
       auVar9;
  (param_2->ContactPoint).Phi = (param_1->ContactPoint).Phi;
  (param_2->ContactPoint).FaceIndex = (param_1->ContactPoint).FaceIndex;
  (param_2->ContactPoint).ContactType = (param_1->ContactPoint).ContactType;
  return;
}

// CopyShapeDataToWrapper @ 1436fd270

void __cdecl
FChaosVDDataWrapperUtils::CopyShapeDataToWrapper
          (TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_> *param_1,
          FChaosVDShapeCollisionData *param_2)

{
  FShapeInstance *pFVar1;
  byte bVar2;
  FCollisionFilterData local_48;
  FCollisionFilterData local_38;
  FCombinedShapeFilterData local_28;
  
  pFVar1 = param_1->Ptr;
  bVar2 = (param_2->field_0x4 ^ (pFVar1->CollisionData).field_0x29) & 2 ^ param_2->field_0x4;
  param_2->field_0x4 = bVar2;
  bVar2 = (bVar2 ^ (pFVar1->CollisionData).field_0x29) & 4 ^ bVar2;
  param_2->field_0x4 = bVar2;
  param_2->field_0x4 = (bVar2 ^ (pFVar1->CollisionData).bSimCollision) & 1 ^ bVar2;
  param_2->CollisionTraceType = (int)(char)(pFVar1->CollisionData).CollisionTraceType;
  Chaos::FCollisionData::GetCombinedShapeFilterData(&pFVar1->CollisionData,&local_28);
  local_38.Word2 = 0;
  local_38.Word3 = 0;
  local_38.Word0 = 0;
  local_38.Word1 = 0;
  local_48.Word2 = 0;
  local_48.Word3 = 0;
  local_48.Word0 = 0;
  local_48.Word1 = 0;
  Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeFilter(&local_28,&local_38,&local_48);
  (param_2->SimData).Word0 = local_48.Word0;
  (param_2->SimData).Word1 = local_48.Word1;
  (param_2->SimData).Word2 = local_48.Word2;
  (param_2->SimData).Word3 = local_48.Word3;
  (param_2->QueryData).Word0 = local_38.Word0;
  (param_2->QueryData).Word1 = local_38.Word1;
  (param_2->QueryData).Word2 = local_38.Word2;
  (param_2->QueryData).Word3 = local_38.Word3;
  return;
}

