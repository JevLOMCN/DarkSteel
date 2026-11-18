// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 6

// operator() @ 1464a2360

bool __thiscall
`UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes'::__l35::<lambda_3>::operator()
          (void *this,FConstraintNode *param_1,FConstraintNode *param_2)

{
  FConstraintTickFunction *pFVar1;
  FConstraintTickFunction *pFVar2;
  longlong lVar3;
  longlong lVar4;
  
  pFVar1 = param_1->ConstraintTick;
  if ((pFVar1 != (FConstraintTickFunction *)0x0) &&
     (pFVar2 = param_2->ConstraintTick, pFVar2 != (FConstraintTickFunction *)0x0)) {
    lVar3 = pFVar2->_padding_;
    lVar4 = (longlong)(int)pFVar2->_padding_ * 0x10 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x10) {
      if (*(FConstraintTickFunction **)(lVar3 + 8) == pFVar1) {
        return true;
      }
    }
    lVar3 = pFVar1->_padding_;
    lVar4 = (longlong)(int)pFVar1->_padding_ * 0x10 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x10) {
      if (*(FConstraintTickFunction **)(lVar3 + 8) == pFVar2) {
        return false;
      }
    }
  }
  return param_1->ConstraintIndex < param_2->ConstraintIndex;
}

// Build @ 1464a4fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Constraints::Graph::Private::FGraphBuildHelper::Build(FGraphBuildHelper *this)

{
  int iVar1;
  TArray<FConstraintNode,TSizedDefaultAllocator<32>_> *pTVar2;
  TArrayView<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_const_,int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FConstraintNode *pFVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  
  pTVar2 = this->Nodes;
  pFVar7 = (FConstraintNode *)(pTVar2->AllocatorInstance).Data;
  if (pTVar2->ArrayMax < 0) {
    DestructItems<FConstraintNode,int>(pFVar7,pTVar2->ArrayNum);
    pTVar2->ArrayNum = 0;
    if (pTVar2->ArrayMax != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (200,8,0,&pTVar2->AllocatorInstance,0,&pTVar2->ArrayMax);
    }
  }
  else {
    DestructItems<FConstraintNode,int>(pFVar7,pTVar2->ArrayNum);
    pTVar2->ArrayNum = 0;
  }
  if ((this->World != (UWorld *)0x0) && (iVar1 = this->Constraints->ArrayNum, iVar1 != 0)) {
    uVar8 = 0;
    iVar10 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      do {
        pTVar3 = this->Constraints;
        uVar6 = 0;
        if ((int)uVar8 < pTVar3->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar5 = FWeakObjectPtr::IsValid(&pTVar3->DataPtr[lVar9].WeakPtr);
        if (bVar5) {
          pTVar3 = this->Constraints;
          uVar6 = 0;
          if ((int)uVar8 < pTVar3->ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar7 = GetNode(this,pTVar3->DataPtr + lVar9);
          pFVar7->NodeIndex = iVar10;
          pFVar7->ConstraintIndex = uVar8;
          iVar10 = iVar10 + 1;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while ((int)uVar8 < iVar1);
    }
    BuildNodeDependencies(this);
    SortNodes(this);
  }
  return;
}

// BuildNodeDependencies @ 1464a7aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Constraints::Graph::Private::FGraphBuildHelper::BuildNodeDependencies(FGraphBuildHelper *this)

{
  longlong lVar1;
  TArray<FConstraintNode,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  FConstraintNode *pFVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  int *piVar9;
  FScriptContainerElement *pFVar10;
  int *piVar11;
  FConstraintNode *pFVar12;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr *pFVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  int local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138 [2];
  TArray<FConstraintNode,TSizedDefaultAllocator<32>_> *local_130;
  FConstraintNode *local_128;
  FWeakObjectPtr local_120;
  FConstraintNode local_118;
  
  local_130 = this->Nodes;
  local_140 = local_130->ArrayNum;
  uVar8 = (ulonglong)(int)local_140;
  pFVar12 = (FConstraintNode *)(local_130->AllocatorInstance).Data;
  piVar11 = (int *)&(pFVar12->Children).Elements.field_0x34;
  local_128 = pFVar12 + uVar8;
  do {
    pFVar4 = local_128;
    if (local_130->ArrayNum != (int)uVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FConstraintNode,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar12 == pFVar4) {
      return;
    }
    lVar1 = *(longlong *)(piVar11 + -0x25);
    local_144 = *(uint *)(lVar1 + 0x18);
    uVar8 = (ulonglong)(int)local_144;
    this_00 = *(FWeakObjectPtr **)(lVar1 + 0x10);
    pFVar13 = this_00 + uVar8 * 2;
LAB_1464a7b30:
    while( true ) {
      if (*(int *)(lVar1 + 0x18) != (int)uVar8) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FTickPrerequisite_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (this_00 == pFVar13) break;
      bVar5 = FWeakObjectPtr::IsValid(this_00,true,false);
      if ((bVar5) && (this_00[1] != (FWeakObjectPtr)0x0)) {
        pTVar2 = this->Nodes;
        local_120 = this_00[1];
        FConstraintNode::FConstraintNode(&local_118,pFVar12);
        pFVar10 = (pTVar2->AllocatorInstance).Data;
        pFVar7 = pFVar10 + (longlong)pTVar2->ArrayNum * 200;
        for (; pFVar10 != pFVar7; pFVar10 = pFVar10 + 200) {
          if ((*(int *)(pFVar10 + 0x18) != local_118.NodeIndex) &&
             (*(FWeakObjectPtr *)(pFVar10 + 0x10) == local_120)) {
            local_118.Children.HashSize = 0;
            if (local_118.Children.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_118.Children.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_118.Children.Elements);
            local_118.Parents.HashSize = 0;
            if (local_118.Parents.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_118.Parents.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_118.Parents.Elements);
            if (pFVar10 == (FScriptContainerElement *)0x0) goto LAB_1464a7c04;
            if (*(int *)(pFVar10 + 0x28) == *(int *)(pFVar10 + 0x54)) goto LAB_1464a7ca9;
            pFVar7 = pFVar10 + 0x58;
            if (*(FScriptContainerElement **)(pFVar10 + 0x60) != (FScriptContainerElement *)0x0) {
              pFVar7 = *(FScriptContainerElement **)(pFVar10 + 0x60);
            }
            iVar6 = *(int *)(pFVar7 + (ulonglong)(*(int *)(pFVar10 + 0x68) - 1U & piVar11[-0x23]) *
                                      4);
            if (iVar6 == -1) goto LAB_1464a7ca9;
            goto LAB_1464a7c90;
          }
        }
        local_118.Children.HashSize = 0;
        if (local_118.Children.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_118.Children.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_118.Children.Elements);
        local_118.Parents.HashSize = 0;
        if (local_118.Parents.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_118.Parents.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_118.Parents.Elements);
      }
LAB_1464a7c04:
      uVar8 = (ulonglong)local_144;
      this_00 = this_00 + 2;
    }
    pFVar12 = pFVar12 + 1;
    piVar11 = piVar11 + 0x32;
    uVar8 = (ulonglong)local_140;
  } while( true );
  while (iVar6 = *(int *)(*(longlong *)(pFVar10 + 0x20) + 4 + (longlong)iVar6 * 0xc), iVar6 != -1) {
LAB_1464a7c90:
    if (*(uint *)(*(longlong *)(pFVar10 + 0x20) + (longlong)iVar6 * 0xc) == piVar11[-0x23]) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7515207077300535698>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintsEvaluationGraph.cpp"
                         ,0x192,"false");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_1464a7cd4;
    }
  }
LAB_1464a7ca9:
  local_res20[0] = *(undefined4 *)(pFVar10 + 0x18);
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
            ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
             (piVar11 + -0x21),&local_13c,(bool *)local_res20);
LAB_1464a7cd4:
  if (piVar11[-0xb] != *piVar11) {
    piVar9 = *(int **)(piVar11 + 3);
    if (piVar9 == (int *)0x0) {
      piVar9 = piVar11 + 1;
    }
    iVar6 = piVar9[piVar11[5] - 1U & *(uint *)(pFVar10 + 0x18)];
    if (iVar6 != -1) {
      do {
        if (*(uint *)(*(longlong *)(piVar11 + -0xd) + (longlong)iVar6 * 0xc) ==
            *(uint *)(pFVar10 + 0x18)) {
          bVar5 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7515207077300535708>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintsEvaluationGraph.cpp"
                             ,0x19c,"false");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          goto LAB_1464a7c04;
        }
        iVar6 = *(int *)(*(longlong *)(piVar11 + -0xd) + 4 + (longlong)iVar6 * 0xc);
      } while (iVar6 != -1);
    }
  }
  local_148 = piVar11[-0x23];
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
            ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
             (pFVar10 + 0x70),local_138,(bool *)&local_148);
  uVar8 = (ulonglong)local_144;
  this_00 = this_00 + 2;
  goto LAB_1464a7b30;
}

// GetNode @ 1464b4a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FConstraintNode * __thiscall
UE::Constraints::Graph::Private::FGraphBuildHelper::GetNode
          (FGraphBuildHelper *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  TArray<FConstraintNode,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  UTickableConstraint *this_00;
  FConstraintNode *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  undefined1 auStackY_148 [32];
  FWeakObjectPtr local_118 [2];
  undefined1 local_108 [32];
  ForAnyElementType local_e8;
  undefined8 local_e0;
  TBitArray<FDefaultBitArrayAllocator> local_d8;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  undefined2 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_118[0] = param_1->WeakPtr;
  pFVar2 = (this->Nodes->AllocatorInstance).Data;
  iVar7 = this->Nodes->ArrayNum;
  pFVar11 = pFVar2;
  do {
    if (pFVar11 == pFVar2 + (longlong)iVar7 * 200) {
LAB_1464b4ac7:
      local_108._24_4_ = -1;
      local_108._28_4_ = -1;
      local_108._0_4_ = 0;
      local_108._4_4_ = 0;
      local_108._8_4_ = 0;
      local_108._12_4_ = 0;
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0 = 0;
      local_d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_d8.NumBits = 0;
      local_b4 = 0;
      local_a8 = (ForElementType<FSetElementId>)0x0;
      local_a0 = 0;
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90 = 0;
      local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_88.NumBits = 0;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      local_48._0_1_ = false;
      local_48._1_1_ = false;
      local_d8.MaxBits = 0x80;
      local_b8 = 0xffffffff;
      local_88.MaxBits = 0x80;
      local_68 = 0xffffffff;
      pUVar8 = FWeakObjectPtr::Get(&param_1->WeakPtr);
      local_108._0_4_ = *(undefined4 *)&pUVar8[1].field_0x4;
      local_108._4_4_ = *(undefined4 *)&pUVar8[1].field_0x8;
      local_108._8_4_ = *(undefined4 *)&pUVar8[1].field_0xc;
      local_108._12_4_ = *(undefined4 *)&pUVar8[1].field_0x10;
      this_00 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1->WeakPtr);
      local_108._16_8_ = UTickableConstraint::GetTickFunction(this_00,this->World);
      pTVar3 = this->Nodes;
      iVar7 = pTVar3->ArrayNum;
      if (iVar7 == pTVar3->ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8c8,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
      }
      pTVar3->ArrayNum = iVar7 + 1;
      pFVar9 = FConstraintNode::FConstraintNode
                         ((FConstraintNode *)
                          ((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 200),
                          (FConstraintNode *)local_108);
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      uVar5 = local_90 >> 0x20;
      local_90 = local_90 & 0xffffffff00000000;
      if ((int)uVar5 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&local_98,0,(int *)((longlong)&local_90 + 4));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_88.NumBits = 0;
      if (0x80 < (uint)local_88.MaxBits) {
        local_88.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
      }
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      uVar5 = local_e0 >> 0x20;
      local_e0 = local_e0 & 0xffffffff00000000;
      if ((int)uVar5 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&local_e8,0,(int *)((longlong)&local_e0 + 4));
      }
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_d8.NumBits = 0;
      if (0x80 < (uint)local_d8.MaxBits) {
        local_d8.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_d8,0);
      }
      if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
      }
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      return pFVar9;
    }
    bVar6 = FWeakObjectPtr::IsValid(local_118);
    if ((bVar6) &&
       (pUVar8 = FWeakObjectPtr::Get(local_118),
       ((*(int *)(pFVar11 + 0xc) == *(int *)&pUVar8[1].field_0x10 &&
        *(int *)(pFVar11 + 8) == *(int *)&pUVar8[1].field_0xc) &&
       *(int *)(pFVar11 + 4) == *(int *)&pUVar8[1].field_0x8) &&
       *(int *)&pUVar8[1].field_0x4 == *(int *)pFVar11)) {
      lVar1 = ((longlong)pFVar11 - (longlong)pFVar2) +
              SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)pFVar11 - (longlong)pFVar2),8)
      ;
      uVar12 = (int)(lVar1 >> 7) - (int)(lVar1 >> 0x3f);
      if (uVar12 != 0xffffffff) {
        pTVar3 = this->Nodes;
        uVar10 = 0;
        if ((int)uVar12 < pTVar3->ArrayNum) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FConstraintNode *)(*pcVar4)();
          return pFVar9;
        }
        return (FConstraintNode *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar12 * 200);
      }
      goto LAB_1464b4ac7;
    }
    pFVar11 = pFVar11 + 200;
  } while( true );
}

// ReIndexNode @ 1464bbb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Constraints::Graph::Private::FGraphBuildHelper::ReIndexNode
          (FConstraintNode *param_1,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_2)

{
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar1;
  undefined1 *puVar2;
  code *pcVar3;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar4;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this;
  bool bVar5;
  int *piVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  uint uVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  uint *puVar22;
  ForElementType<unsigned_int> FVar23;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8;
  undefined1 local_2a7 [3];
  int local_2a4;
  int local_2a0 [2];
  uint local_298;
  uint uStack_294;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_290;
  undefined4 local_288;
  uint uStack_284;
  uint uStack_280;
  undefined4 uStack_27c;
  uint local_278;
  uint uStack_274;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_270;
  undefined4 local_268;
  uint uStack_264;
  uint uStack_260;
  undefined4 uStack_25c;
  uint local_258;
  uint uStack_254;
  undefined1 *puStack_250;
  undefined4 local_248;
  int iStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_230;
  undefined8 local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_208;
  undefined4 local_1e8;
  int local_1e4;
  int local_1e0;
  uint local_1dc;
  undefined4 local_1d8;
  int local_1d4;
  int local_1d0;
  uint local_1cc;
  FConstraintNode *local_1c8;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_1c0;
  longlong *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b0;
  longlong *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_188;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_168;
  uint uStack_160;
  uint uStack_15c;
  undefined1 *local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  uint local_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  undefined4 local_ec;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  FScriptContainerElement local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_1c8 = param_1;
  local_1c0 = param_2;
  piVar6 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
           FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        *)param_2,param_1->NodeIndex);
  pTVar1 = &param_1->Parents;
  uVar10 = 0;
  param_1->NodeIndex = *piVar6;
  iVar17 = *(int *)&(param_1->Parents).Elements.field_0x34;
  iVar9 = *(int *)&(param_1->Parents).Elements.field_0x8;
  uVar16 = 1;
  if (iVar9 != iVar17) {
    local_e8._0_8_ = (FScriptContainerElement *)0x0;
    local_e8._8_8_ = 0;
    local_c8 = (ForElementType<unsigned_int>)0x0;
    local_c0 = 0;
    local_bc = 0x80;
    local_b8 = -1;
    local_b4 = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    uVar15 = iVar9 - iVar17;
    if (uVar15 != 0) {
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_e8,uVar15);
      uVar18 = uVar16;
      if (3 < uVar15) {
        uVar19 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_1e8 = (undefined4)lVar12;
        uVar18 = 1 << ((byte)lVar12 & 0x1f);
      }
      if ((local_a0 == 0) || ((int)local_a0 < (int)uVar18)) {
        local_a0 = uVar18;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
        }
        if (uVar18 != 0) {
          uVar15 = uVar18;
          if (uVar18 < 2) {
            if (local_a8.Data != (FScriptContainerElement *)0x0) {
              uVar15 = 0;
              goto LAB_1464bbc7c;
            }
          }
          else {
LAB_1464bbc7c:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_a8,0,uVar15,4);
          }
          if (0 < (int)uVar18) {
            uVar21 = (ulonglong)uVar18;
            uVar19 = uVar10;
            do {
              FVar11.Data = local_b0;
              if (local_a8.Data != (FScriptContainerElement *)0x0) {
                FVar11.Data = local_a8.Data;
              }
              uVar7 = uVar19 & (longlong)(int)uVar18 - 1U;
              uVar19 = uVar19 + 1;
              *(undefined4 *)(FVar11.Data + uVar7 * 4) = 0xffffffff;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
        }
        if (local_a0 != 0) {
          pTStack_290 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
          local_298 = 0;
          uStack_294 = 1;
          uStack_284 = 0;
          uStack_280 = 0;
          uVar19 = uVar10;
          if (local_c0 != 0) {
            FVar23 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
            if (local_c8 != (ForElementType<unsigned_int>)0x0) {
              FVar23 = local_c8;
            }
            uVar15 = *(uint *)FVar23;
            uVar21 = uVar10;
            while (uVar15 == 0) {
              uStack_280 = (int)uVar21 + 0x20;
              uVar21 = (ulonglong)uStack_280;
              iVar17 = (int)uVar19;
              local_298 = iVar17 + 1;
              uVar19 = (ulonglong)local_298;
              if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_298) goto LAB_1464bbd9e;
              uVar15 = ((uint *)((longlong)FVar23 + 4))[iVar17];
            }
            uStack_294 = -uVar15 & uVar15;
            uVar19 = (ulonglong)uStack_294 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            local_1e4 = (int)lVar12;
            uStack_284 = (uStack_280 - 1) + local_1e4;
            uVar19 = (ulonglong)uStack_284;
            if ((int)local_c0 < (int)uStack_284) {
LAB_1464bbd9e:
              uVar19 = (ulonglong)local_c0;
              uStack_284 = local_c0;
            }
          }
          local_288 = 0xffffffff;
          local_1b8 = (longlong *)local_e8;
          local_1b0._padding_ = CONCAT44(uStack_294,local_298);
          local_1b0.CurrentBitIndex = uStack_284;
          local_1b0.UnvisitedBitMask = 0xffffffff;
          local_1b0._28_4_ = uStack_27c;
          local_1b0.BaseBitIndex = uStack_280;
          local_1b0.Array = pTStack_290;
          if ((int)uVar19 < (int)local_c0) {
            do {
              iVar17 = (int)uVar19;
              uVar15 = local_a0 - 1 & *(uint *)(*local_1b8 + (longlong)iVar17 * 0xc);
              lVar12 = *local_1b8 + (longlong)iVar17 * 0xc;
              *(uint *)(lVar12 + 8) = uVar15;
              FVar11.Data = local_b0;
              if (local_a8.Data != (FScriptContainerElement *)0x0) {
                FVar11.Data = local_a8.Data;
              }
              uVar19 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar15;
              *(undefined4 *)(lVar12 + 4) = *(undefined4 *)(FVar11.Data + uVar19 * 4);
              *(int *)(FVar11.Data + uVar19 * 4) = iVar17;
              local_1b0.UnvisitedBitMask = local_1b0.UnvisitedBitMask & ~local_1b0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1b0);
              uVar19 = (ulonglong)(uint)local_1b0.CurrentBitIndex;
            } while (local_1b0.CurrentBitIndex < (local_1b0.Array)->NumBits);
          }
        }
      }
    }
    iVar17 = *(int *)&(param_1->Parents).Elements.field_0x28;
    pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Parents).Elements.field_0x10;
    local_258 = 0;
    uStack_254 = 1;
    iStack_244 = 0;
    iStack_240 = 0;
    if (iVar17 != 0) {
      puVar22 = *(uint **)&(param_1->Parents).Elements.field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)pTVar14;
      }
      uVar15 = *puVar22;
      iStack_240 = 0;
      while (uVar15 == 0) {
        iStack_240 = iStack_240 + 0x20;
        iVar9 = (int)uVar10;
        local_258 = iVar9 + 1;
        uVar10 = (ulonglong)local_258;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_258)
        goto LAB_1464bbed9;
        uVar15 = puVar22[(longlong)iVar9 + 1];
      }
      uStack_254 = -uVar15 & uVar15;
      uVar10 = (ulonglong)uStack_254 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_1e0 = (int)lVar12;
      iStack_244 = local_1e0 + -1 + iStack_240;
      if (iVar17 < iStack_244) {
LAB_1464bbed9:
        iStack_244 = iVar17;
      }
    }
    local_248 = 0xffffffff;
    uVar15 = *(uint *)&(param_1->Parents).Elements.field_0x28;
    bVar8 = (byte)uVar15 & 0x1f;
    TStack_230._padding_ = CONCAT44(uStack_254,local_258);
    local_210 = CONCAT44(local_210._4_4_,
                         *(int *)&(param_1->Parents).Elements.field_0x8 -
                         *(int *)&(param_1->Parents).Elements.field_0x34);
    TStack_230.CurrentBitIndex = iStack_244;
    TStack_230.UnvisitedBitMask = 0xffffffff;
    TStack_230._28_4_ = uStack_23c;
    TStack_230.BaseBitIndex = iStack_240;
    local_208._padding_._0_4_ = (int)uVar15 >> 5;
    local_208._padding_._4_4_ = 1 << bVar8;
    local_208.UnvisitedBitMask = -1 << bVar8;
    local_208.BaseBitIndex = uVar15 & 0xffffffe0;
    uStack_110 = local_210;
    puStack_250 = (undefined1 *)pTVar14;
    local_238 = pTVar1;
    TStack_230.Array = pTVar14;
    local_208.Array = pTVar14;
    local_208.CurrentBitIndex = uVar15;
    local_138 = pTVar1;
    TStack_130._padding_ = TStack_230._padding_;
    TStack_130.Array = pTVar14;
    TStack_130._16_8_ = TStack_230._16_8_;
    TStack_130._24_8_ = TStack_230._24_8_;
    if ((((int)uVar15 < 0) || (iVar17 < (int)uVar15)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar15 != *(uint *)&(param_1->Parents).Elements.field_0x28) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_208);
      pTVar14 = local_208.Array;
      uVar15 = local_208.CurrentBitIndex;
    }
    while( true ) {
      pTVar4 = local_138;
      if (*(int *)&(local_138->Elements).field_0x8 - *(int *)&(local_138->Elements).field_0x34 !=
          (int)uStack_110) {
        local_2a8 = 0;
        `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2a8);
      }
      if (((TStack_130.CurrentBitIndex == uVar15) && (TStack_130.Array == pTVar14)) &&
         (pTVar4 == pTVar1)) break;
      piVar6 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
               FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            *)param_2,
                           *(int *)(*(longlong *)&pTVar4->Elements +
                                   (longlong)TStack_130.CurrentBitIndex * 0xc));
      local_2a4 = *piVar6;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
                ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)local_e8
                 ,&local_1dc,(bool *)&local_2a4);
      TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
    }
    if (pTVar1 != (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                  local_e8) {
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
      Move<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>_>
                (pTVar1,(TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                        local_e8);
    }
    local_a0 = 0;
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_e8);
    param_1 = local_1c8;
  }
  uVar10 = 0;
  iVar17 = *(int *)&(param_1->Children).Elements.field_0x8;
  pTVar1 = &param_1->Children;
  iVar9 = *(int *)&(param_1->Children).Elements.field_0x34;
  if (iVar17 == iVar9) {
    return;
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar15 = iVar17 - iVar9;
  uVar18 = 0;
  if (uVar15 == 0) goto LAB_1464bc325;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar15);
  if (3 < uVar15) {
    uVar19 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_1d8 = (undefined4)lVar12;
    uVar16 = 1 << ((byte)lVar12 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar16 <= (int)local_50)) goto LAB_1464bc325;
  local_50 = uVar16;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar16 != 0) {
    uVar15 = uVar16;
    if (uVar16 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar15 = 0;
        goto LAB_1464bc164;
      }
    }
    else {
LAB_1464bc164:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar15,4);
    }
    if (0 < (int)uVar16) {
      uVar21 = (ulonglong)uVar16;
      uVar19 = uVar10;
      do {
        FVar11.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_58.Data;
        }
        uVar7 = uVar19 & (longlong)(int)uVar16 - 1U;
        uVar19 = uVar19 + 1;
        *(undefined4 *)(FVar11.Data + uVar7 * 4) = 0xffffffff;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_270 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_278 = 0;
    uStack_274 = 1;
    uStack_264 = 0;
    uStack_260 = 0;
    uVar19 = uVar10;
    if (local_70 != 0) {
      FVar23 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_78;
      }
      uVar16 = *(uint *)FVar23;
      uVar21 = uVar10;
      while (uVar16 == 0) {
        uStack_260 = (int)uVar21 + 0x20;
        uVar21 = (ulonglong)uStack_260;
        iVar17 = (int)uVar19;
        local_278 = iVar17 + 1;
        uVar19 = (ulonglong)local_278;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_278)
        goto LAB_1464bc27e;
        uVar16 = ((uint *)((longlong)FVar23 + 4))[iVar17];
      }
      uStack_274 = -uVar16 & uVar16;
      uVar19 = (ulonglong)uStack_274 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_1d4 = (int)lVar12;
      uStack_264 = (uStack_260 - 1) + local_1d4;
      uVar19 = (ulonglong)uStack_264;
      if ((int)local_70 < (int)uStack_264) {
LAB_1464bc27e:
        uVar19 = (ulonglong)local_70;
        uStack_264 = local_70;
      }
    }
    local_268 = 0xffffffff;
    local_190 = (longlong *)local_98;
    local_188._padding_ = CONCAT44(uStack_274,local_278);
    local_188.CurrentBitIndex = uStack_264;
    local_188.UnvisitedBitMask = 0xffffffff;
    local_188._28_4_ = uStack_25c;
    local_188.BaseBitIndex = uStack_260;
    local_188.Array = pTStack_270;
    if ((int)uVar19 < (int)local_70) {
      do {
        iVar17 = (int)uVar19;
        uVar16 = local_50 - 1 & *(uint *)(*local_190 + (longlong)iVar17 * 0xc);
        lVar12 = *local_190 + (longlong)iVar17 * 0xc;
        *(uint *)(lVar12 + 8) = uVar16;
        FVar11.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_58.Data;
        }
        uVar19 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(lVar12 + 4) = *(undefined4 *)(FVar11.Data + uVar19 * 4);
        *(int *)(FVar11.Data + uVar19 * 4) = iVar17;
        local_188.UnvisitedBitMask = local_188.UnvisitedBitMask & ~local_188._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_188);
        uVar19 = (ulonglong)(uint)local_188.CurrentBitIndex;
      } while (local_188.CurrentBitIndex < (local_188.Array)->NumBits);
    }
  }
LAB_1464bc325:
  puVar2 = &(param_1->Children).Elements.field_0x10;
  uVar16 = *(uint *)&(param_1->Children).Elements.field_0x28;
  uStack_14c = uVar18;
  local_148 = uVar18;
  uStack_15c = 1;
  if (uVar16 != 0) {
    puVar22 = *(uint **)&(param_1->Children).Elements.field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar2;
    }
    uVar15 = *puVar22;
    uVar19 = uVar10;
    while( true ) {
      uVar18 = (uint)uVar10;
      local_148 = (uint)uVar19;
      if (uVar15 != 0) break;
      lVar12 = (longlong)(int)uVar18;
      local_148 = local_148 + 0x20;
      uVar19 = (ulonglong)local_148;
      uVar18 = uVar18 + 1;
      uVar10 = (ulonglong)uVar18;
      uStack_14c = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_1464bc39f;
      uVar15 = puVar22[lVar12 + 1];
    }
    uStack_15c = -uVar15 & uVar15;
    uVar10 = (ulonglong)uStack_15c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_1d0 = (int)lVar12;
    uStack_14c = (local_148 - 1) + local_1d0;
    if ((int)uVar16 < (int)uStack_14c) {
      uStack_14c = uVar16;
    }
  }
LAB_1464bc39f:
  uStack_144 = local_ec;
  iStack_140 = *(int *)&(param_1->Children).Elements.field_0x8 -
               *(int *)&(param_1->Children).Elements.field_0x34;
  uVar15 = *(uint *)&(param_1->Children).Elements.field_0x28;
  uStack_150 = 0xffffffff;
  uVar13 = uVar15 & 0xffffffe0;
  TStack_230._padding_ = CONCAT44(uStack_15c,uVar18);
  TStack_230.CurrentBitIndex = uStack_14c;
  TStack_230.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar15 >> 5;
  TStack_230._28_4_ = local_ec;
  TStack_230.BaseBitIndex = local_148;
  local_210 = CONCAT44(uStack_13c,iStack_140);
  local_238 = pTVar1;
  TStack_230.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  local_168 = pTVar1;
  uStack_160 = uVar18;
  local_158 = puVar2;
  if ((((int)uVar15 < 0) || ((int)uVar16 < (int)uVar15)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this = local_1c0;
  uVar16 = *(uint *)&(param_1->Children).Elements.field_0x28;
  if (uVar15 != uVar16) {
    puVar20 = *(undefined1 **)&(param_1->Children).Elements.field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar17 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar17;
      uVar13 = uVar13 + 0x20;
      iVar17 = iVar17 + 1;
      uVar15 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_1464bc4b0;
      uVar15 = *(uint *)(puVar20 + lVar12 * 4 + 4);
    }
    uVar10 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (uVar13 - 1) + (int)lVar12;
    if ((int)uVar16 < (int)uVar15) {
      uVar15 = uVar16;
    }
  }
LAB_1464bc4b0:
  while( true ) {
    pTVar4 = local_238;
    if (*(int *)&(local_238->Elements).field_0x8 - *(int *)&(local_238->Elements).field_0x34 !=
        (int)local_210) {
      `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2a7);
    }
    if (((TStack_230.CurrentBitIndex == uVar15) &&
        (TStack_230.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar4 == pTVar1))
    break;
    piVar6 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
             FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                          *)this,*(int *)(*(longlong *)&pTVar4->Elements +
                                         (longlong)TStack_230.CurrentBitIndex * 0xc));
    local_2a0[0] = *piVar6;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
              ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)local_98,
               &local_1cc,(bool *)local_2a0);
    TStack_230.UnvisitedBitMask = TStack_230.UnvisitedBitMask & ~TStack_230._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_230);
  }
  if (pTVar1 != (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)local_98)
  {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Move<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>_>
              (pTVar1,(TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                      local_98);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// SortNodes @ 1464c13a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes(FGraphBuildHelper *this)

{
  uint uVar1;
  int iVar2;
  TArray<FConstraintNode,TSizedDefaultAllocator<32>_> *pTVar3;
  FConstraintNode *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FStaticBasicLogRecord *pFVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  <lambda_2> <Var20;
  longlong lVar21;
  undefined1 auStackY_168 [32];
  FIdentityFunctor local_118 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_110;
  undefined4 local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0 [2];
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  <lambda_2> local_c8;
  undefined1 local_bc [12];
  uint *local_b0;
  uint *local_a8;
  uint *local_a0;
  uint *local_98;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar15 = 0;
  uVar1 = this->Nodes->ArrayNum;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  local_c8.__this = this;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar1,&local_110.AllocatorInstance,0,&local_110.ArrayMax);
  }
  pTVar3 = this->Nodes;
  iVar2 = pTVar3->ArrayNum;
  pFVar16 = (pTVar3->AllocatorInstance).Data;
  pFVar19 = pFVar16 + (longlong)iVar2 * 200;
  while( true ) {
    if (pTVar3->ArrayNum != iVar2) {
      local_118[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FConstraintNode_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_118);
    }
    iVar7 = local_110.ArrayNum;
    FVar12.Data = local_110.AllocatorInstance.Data;
    if (pFVar16 == pFVar19) break;
    local_100 = *(undefined4 *)(pFVar16 + 0x18);
    if (((local_110.AllocatorInstance.Data <= (FScriptContainerElement *)&local_100) &&
        ((FScriptContainerElement *)&local_100 <
         local_110.AllocatorInstance.Data + (longlong)local_110.ArrayMax * 4)) &&
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
    if (local_110.ArrayNum == local_110.ArrayMax) {
      local_110.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_110.AllocatorInstance,&local_110.ArrayMax);
    }
    pFVar16 = pFVar16 + 200;
    *(undefined4 *)(local_110.AllocatorInstance.Data + (longlong)local_110.ArrayNum * 4) = local_100
    ;
    local_110.ArrayNum = local_110.ArrayNum + 1;
  }
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = local_110.ArrayNum;
  if (local_110.ArrayNum == 0) {
    local_cc = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_110.ArrayNum,0,&local_d8,local_110.ArrayNum,&local_cc);
    memcpy(local_d8.Data,FVar12.Data,(longlong)iVar7 << 2);
  }
  <Var20.__this = local_c8.__this;
  local_e8.Data = (FScriptContainerElement *)0x0;
  iVar2 = (local_c8.__this)->Nodes->ArrayNum;
  pFVar4 = (FConstraintNode *)((local_c8.__this)->Nodes->AllocatorInstance).Data;
  local_e0 = iVar2;
  if (iVar2 == 0) {
    local_dc = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,iVar2,0,&local_e8,iVar2,&local_dc);
    ConstructItems<FConstraintNode,FConstraintNode,int>(local_e8.Data,pFVar4,iVar2);
  }
  bVar8 = Algo::
          KahnTopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>_&,_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes_::__l2::<lambda_2>_>
                    (&local_110,<Var20,None);
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  if (bVar8) {
    bVar8 = false;
    local_f8 = 0;
    if (0 < (int)uVar1) {
      do {
        uVar13 = local_f8;
        uVar10 = 0;
        if ((int)local_f8 < local_110.ArrayNum) {
          uVar10 = ~local_f8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_d8.Data != local_d8.Data + (longlong)local_d0 * 4) {
          FVar12.Data = local_d8.Data;
          do {
            if (*(int *)FVar12.Data ==
                *(int *)(local_110.AllocatorInstance.Data + (longlong)(int)uVar13 * 4)) {
              local_f0[0] = (uint)((longlong)FVar12.Data - (longlong)local_d8.Data >> 2);
              goto LAB_1464c1817;
            }
            FVar12.Data = FVar12.Data + 4;
          } while (FVar12.Data != local_d8.Data + (longlong)local_d0 * 4);
        }
        local_f0[0] = 0xffffffff;
LAB_1464c1817:
        local_a0 = local_f0;
        local_98 = &local_f8;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_&>_>
                  (&local_88,(TPairInitializer<int_const_&,int_&> *)(local_bc + 4),(bool *)&local_a0
                  );
        bVar9 = local_f0[0] != local_f8;
        local_f8 = local_f8 + 1;
        bVar8 = (bool)(bVar8 | bVar9);
      } while ((int)local_f8 < (int)uVar1);
      if (bVar8) {
        if (0 < (int)uVar1) {
          lVar21 = 0;
          lVar18 = 0;
          do {
            uVar13 = 0;
            if ((int)uVar15 < local_110.ArrayNum) {
              uVar13 = ~uVar15 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar13 = *(uint *)(local_110.AllocatorInstance.Data + lVar21 * 4);
            uVar10 = 0;
            if ((int)uVar13 < local_e0) {
              uVar10 = ~uVar13 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar3 = (<Var20.__this)->Nodes;
            pFVar16 = local_e8.Data + (longlong)(int)uVar13 * 200;
            uVar13 = 0;
            if ((int)uVar15 < pTVar3->ArrayNum) {
              uVar13 = ~uVar15 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar6 = *(undefined8 *)(pFVar16 + 8);
            pFVar19 = (pTVar3->AllocatorInstance).Data + lVar18;
            *(undefined8 *)pFVar19 = *(undefined8 *)&pFVar16->field_0x0;
            *(undefined8 *)(pFVar19 + 8) = uVar6;
            *(undefined8 *)(pFVar19 + 0x10) = *(undefined8 *)(pFVar16 + 0x10);
            *(undefined4 *)(pFVar19 + 0x18) = *(undefined4 *)(pFVar16 + 0x18);
            *(undefined4 *)(pFVar19 + 0x1c) = *(undefined4 *)(pFVar16 + 0x1c);
            TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::operator=
                      ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                       (pFVar19 + 0x20),
                       (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                       (pFVar16 + 0x20));
            TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::operator=
                      ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                       (pFVar19 + 0x70),
                       (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                       (pFVar16 + 0x70));
            uVar15 = uVar15 + 1;
            lVar21 = lVar21 + 1;
            pFVar19[0xc0] = pFVar16[0xc0];
            lVar18 = lVar18 + 200;
            pFVar19[0xc1] = pFVar16[0xc1];
            <Var20.__this = local_c8.__this;
          } while (lVar21 < (int)uVar1);
        }
        goto LAB_1464c19e3;
      }
    }
    if ((ConstraintsEvaluationGraph::bDebugGraph == false) || ((byte)LogTemp._0_1_ < 3))
    goto LAB_1464c1ad6;
    pFVar11 = &`private:_void___cdecl_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes(void)const___ptr64'
               ::__l14::LOG_Static;
  }
  else {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7515207077300535739>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintsEvaluationGraph.cpp"
                       ,0x1bb,"bSucceeded");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<FConstraintNode,int,FIdentityFunctor,_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes_::__l35::<lambda_3>_>
              ((FConstraintNode *)((<Var20.__this)->Nodes->AllocatorInstance).Data,
               (<Var20.__this)->Nodes->ArrayNum,local_118[0],(<lambda_3>)local_118[0]);
    bVar8 = false;
    local_fc = 0;
    if (0 < (int)uVar1) {
      do {
        uVar15 = local_fc;
        pTVar3 = (<Var20.__this)->Nodes;
        uVar13 = 0;
        if ((int)local_fc < pTVar3->ArrayNum) {
          uVar13 = ~local_fc >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_d8.Data != local_d8.Data + (longlong)local_d0 * 4) {
          FVar12.Data = local_d8.Data;
          do {
            if (*(int *)FVar12.Data ==
                *(int *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar15 * 200 + 0x18)) {
              local_f4 = (uint)((longlong)FVar12.Data - (longlong)local_d8.Data >> 2);
              goto LAB_1464c16fb;
            }
            FVar12.Data = FVar12.Data + 4;
          } while (FVar12.Data != local_d8.Data + (longlong)local_d0 * 4);
        }
        local_f4 = 0xffffffff;
LAB_1464c16fb:
        local_b0 = &local_f4;
        local_a8 = &local_fc;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_&>_>
                  (&local_88,(TPairInitializer<int_const_&,int_&> *)local_bc,(bool *)&local_b0);
        bVar9 = local_f4 != local_fc;
        local_fc = local_fc + 1;
        bVar8 = (bool)(bVar8 | bVar9);
      } while ((int)local_fc < (int)uVar1);
      if (bVar8) {
LAB_1464c19e3:
        uVar14 = 0;
        uVar17 = uVar14;
        if (local_88.Elements._8_4_ - local_88.Elements._52_4_ == uVar1) {
          do {
            pTVar3 = (<Var20.__this)->Nodes;
            uVar13 = (uint)uVar14;
            uVar15 = 0;
            if ((int)uVar13 < pTVar3->ArrayNum) {
              uVar15 = ~uVar13 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            ReIndexNode((FConstraintNode *)((pTVar3->AllocatorInstance).Data + uVar17),
                        (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)&local_88);
            uVar14 = (ulonglong)(uVar13 + 1);
            uVar17 = uVar17 + 200;
            <Var20.__this = local_c8.__this;
          } while ((int)(uVar13 + 1) < (int)uVar1);
        }
        else {
          bVar8 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7515207077300535829>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintsEvaluationGraph.cpp"
                             ,0x215,"OldToNewIndex.Num() == NumNodes");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        goto LAB_1464c1ad6;
      }
    }
    if ((ConstraintsEvaluationGraph::bDebugGraph == false) || ((byte)LogTemp._0_1_ < 3))
    goto LAB_1464c1ad6;
    pFVar11 = &`private:_void___cdecl_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes(void)const___ptr64'
               ::__l44::LOG_Static;
  }
  Logging::Private::BasicLog<3>(pFVar11,(FLogCategoryBase *)&LogTemp);
LAB_1464c1ad6:
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  DestructItems<FConstraintNode,int>((FConstraintNode *)local_e8.Data,local_e0);
  if ((FConstraintNode *)local_e8.Data != (FConstraintNode *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  return;
}

