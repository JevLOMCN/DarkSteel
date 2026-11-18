// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 17

// ~FCollapsingInformation @ 149d34c40

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
PCGSubgraphHelpersExtra::FCollapsingInformation::~FCollapsingInformation
          (FCollapsingInformation *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  (this->OriginalPinsToBreakEdges).HashSize = 0;
  FVar1 = (this->OriginalPinsToBreakEdges).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UPCGPin_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UPCGPin_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OriginalPinsToBreakEdges).Elements);
  *(undefined4 *)&(this->GraphParametersDescToNodeGetters).field_0x48 = 0;
  pvVar2 = *(void **)&(this->GraphParametersDescToNodeGetters).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FPropertyBagPropertyDesc_const_*,UPCGNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPropertyBagPropertyDesc_const_*,UPCGNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPropertyBagPropertyDesc_const_*,UPCGNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GraphParametersDescToNodeGetters);
  *(undefined4 *)&(this->OriginalToNewNodesMapping).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OriginalToNewNodesMapping).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,UPCGNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,UPCGNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,UPCGNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OriginalToNewNodesMapping);
  *(undefined4 *)&(this->NameCollisionMapping).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NameCollisionMapping).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameCollisionMapping);
  *(undefined4 *)&(this->SubgraphInsidePinToInputOutputPinMapping).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SubgraphInsidePinToInputOutputPinMapping).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGPin_*,UPCGPin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPCGPin_*,UPCGPin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPCGPin_*,UPCGPin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubgraphInsidePinToInputOutputPinMapping);
  pFVar3 = (this->OutsideSubgraphPinToSubgraphPinLabel).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SuperfluousNodes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->NodesToRemove).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ValidNodesToCollapse).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddDiscoveredGraphParameters @ 149d3b490

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall
PCGSubgraphHelpersExtra::FCollapsingInformation::AddDiscoveredGraphParameters
          (FCollapsingInformation *this)

{
  code *pcVar1;
  bool bVar2;
  <lambda_1> local_res8;
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> local_18;
  
  if (((this->OriginalGraph == (UPCGGraph *)0x0) || (this->NewGraph == (UPCGGraph *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OriginalGraph && NewGraph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0xd1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  Algo::
  Transform<TMap<FPropertyBagPropertyDesc_const_*,UPCGNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPropertyBagPropertyDesc_const_*,UPCGNode_*,0>_>,TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_>_&,_PCGSubgraphHelpersExtra::FCollapsingInformation::AddDiscoveredGraphParameters_::__l2::<lambda_1>_>
            (&this->GraphParametersDescToNodeGetters,&local_18,local_res8);
  UPCGGraph::AddUserParameters(this->NewGraph,&local_18,this->OriginalGraph);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// CleanUpOriginalEdges @ 149d401e0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
PCGSubgraphHelpersExtra::FCollapsingInformation::CleanUpOriginalEdges(FCollapsingInformation *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UPCGPin *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->OriginalPinsToBreakEdges).Elements.field_0x10;
  iVar3 = *(int *)&(this->OriginalPinsToBreakEdges).Elements.field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->OriginalPinsToBreakEdges).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_149d4027e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_149d4027e:
  uVar10 = *(uint *)&(this->OriginalPinsToBreakEdges).Elements.field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OriginalPinsToBreakEdges).Elements.field_0x8 -
                       *(int *)&(this->OriginalPinsToBreakEdges).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->OriginalPinsToBreakEdges).Elements.field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->OriginalPinsToBreakEdges).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_149d40390;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uVar10 = local_res18 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_149d40390:
  while( true ) {
    if (*(int *)&(this->OriginalPinsToBreakEdges).Elements.field_0x8 -
        *(int *)&(this->OriginalPinsToBreakEdges).Elements.field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<UPCGPin_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(UPCGPin **)
               (*(longlong *)&(this->OriginalPinsToBreakEdges).Elements +
               (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (this_00 == (UPCGPin *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2608592251726593682>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x16e,"OriginalPin");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      UPCGPin::BreakAllEdges
                (this_00,(TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)0x0)
      ;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ConnectGraphParameterGetterToSubgraphInput @ 149d41b10

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
PCGSubgraphHelpersExtra::FCollapsingInformation::ConnectGraphParameterGetterToSubgraphInput
          (FCollapsingInformation *this,UPCGUserParameterGetSettings *param_1,UPCGNode *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  UPCGNode *pUVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  FScriptContainerElement *pFVar10;
  TPairInitializer<FPropertyBagPropertyDesc_const_*_&,UPCGNode_*_&> local_res8;
  UPCGNode *local_res18 [2];
  UPCGNode ***local_38;
  UPCGNode **local_30;
  FGuid local_28;
  
  local_res18[0] = param_2;
  if (((param_1 == (UPCGUserParameterGetSettings *)0x0) || (param_2 == (UPCGNode *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSettings && InNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x20a,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  local_28.A = (param_1->PropertyGuid).A;
  local_28.B = (param_1->PropertyGuid).B;
  local_28.C = (param_1->PropertyGuid).C;
  local_28.D = (param_1->PropertyGuid).D;
  local_res8.Value =
       (UPCGNode **)FInstancedPropertyBag::FindPropertyDescByID(this->GraphParameters,&local_28);
  if ((FPropertyBagPropertyDesc *)local_res8.Value == (FPropertyBagPropertyDesc *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2608592251726593523>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                       ,0x20d,"PropertyDesc");
    if (!bVar5) {
      return false;
    }
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  uVar8 = ((uint)((ulonglong)local_res8.Value >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_res8.Value >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->GraphParametersDescToNodeGetters).field_0x8 !=
      *(int *)&(this->GraphParametersDescToNodeGetters).field_0x34) {
    puVar9 = *(undefined1 **)&(this->GraphParametersDescToNodeGetters).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->GraphParametersDescToNodeGetters).field_0x38;
    }
    iVar7 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->GraphParametersDescToNodeGetters).field_0x48 - 1U &
                              (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&(this->GraphParametersDescToNodeGetters).field_0x0;
      do {
        if (*(FPropertyBagPropertyDesc **)(lVar2 + (longlong)iVar7 * 0x18) ==
            (FPropertyBagPropertyDesc *)local_res8.Value) {
          return false;
        }
        iVar7 = *(int *)(lVar2 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  local_38 = &local_res8.Value;
  local_30 = local_res18;
  TSet<TTuple<FPropertyBagPropertyDesc_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<FPropertyBagPropertyDesc_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FPropertyBagPropertyDesc_const_*_&,UPCGNode_*_&>_>
            ((TSet<TTuple<FPropertyBagPropertyDesc_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<FPropertyBagPropertyDesc_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
              *)&this->GraphParametersDescToNodeGetters,&local_res8,(bool *)&local_38);
  if (((local_res18[0]->OutputPins).ArrayNum != 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNode->GetOutputPins().Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x210,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pUVar4 = local_res18[0];
  if (((local_res18[0]->OutputPins).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  lVar2 = *(longlong *)(pUVar4->OutputPins).AllocatorInstance.Data;
  if ((lVar2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphParameterPin",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x212,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  iVar7 = (this->OutsideSubgraphPinToSubgraphPinLabel).ArrayNum;
  piVar1 = &(this->OutsideSubgraphPinToSubgraphPinLabel).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->OutsideSubgraphPinToSubgraphPinLabel).AllocatorInstance,piVar1)
    ;
  }
  (this->OutsideSubgraphPinToSubgraphPinLabel).ArrayNum = iVar7 + 1;
  pFVar10 = (this->OutsideSubgraphPinToSubgraphPinLabel).AllocatorInstance.Data +
            (longlong)iVar7 * 0x10;
  *(longlong *)pFVar10 = lVar2;
  *(longlong *)(pFVar10 + 8) = *(longlong *)(lVar2 + 0x48);
  return true;
}

// ConnectPinsBetweenSubgraphBoundaries @ 149d41d60

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
PCGSubgraphHelpersExtra::FCollapsingInformation::ConnectPinsBetweenSubgraphBoundaries
          (FCollapsingInformation *this,UPCGPin *param_1,UPCGPin *param_2,UPCGPin *param_3,
          bool param_4)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  UPCGPin **ppUVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  UPCGPin *this_00;
  undefined1 *puVar11;
  UPCGPin *pUVar12;
  FScriptContainerElement *pFVar13;
  TPairInitializer<UPCGPin_*_&,UPCGPin_*_&> local_res8;
  FName local_res20;
  UPCGPin *local_58;
  UPCGPin **local_50;
  UPCGPin ***local_48;
  
  if (((((param_1 == (UPCGPin *)0x0) || (param_2 == (UPCGPin *)0x0)) || (param_3 == (UPCGPin *)0x0))
      || (this->NewGraph == (UPCGGraph *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OriginalInsidePin && NewInsidePin && OutsidePin && NewGraph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x1da,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  bVar5 = false;
  if (param_4) {
    param_1 = param_3;
  }
  uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  local_58 = param_1;
  if (*(int *)&(this->SubgraphInsidePinToInputOutputPinMapping).field_0x8 !=
      *(int *)&(this->SubgraphInsidePinToInputOutputPinMapping).field_0x34) {
    puVar11 = *(undefined1 **)&(this->SubgraphInsidePinToInputOutputPinMapping).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->SubgraphInsidePinToInputOutputPinMapping).field_0x38;
    }
    iVar8 = *(int *)(puVar11 +
                    (ulonglong)
                    (*(int *)&(this->SubgraphInsidePinToInputOutputPinMapping).field_0x48 - 1U &
                    (uVar9 >> 0x10 ^ uVar9)) * 4);
    if (iVar8 != -1) {
      do {
        lVar2 = *(longlong *)&this->SubgraphInsidePinToInputOutputPinMapping +
                (longlong)iVar8 * 0x18;
        if (*(UPCGPin **)
             (*(longlong *)&this->SubgraphInsidePinToInputOutputPinMapping + (longlong)iVar8 * 0x18)
            == param_1) {
          puVar10 = (undefined8 *)(lVar2 + 8);
          if (lVar2 == 0) {
            puVar10 = (undefined8 *)0x0;
          }
          if (puVar10 != (undefined8 *)0x0) {
            local_res8.Value = (UPCGPin **)*puVar10;
            goto LAB_149d41f13;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x10);
      } while (iVar8 != -1);
    }
  }
  CreateNewCustomPin(this,(UPCGGraph *)&local_res20,(UPCGPin *)this->NewGraph,SUB81(param_1,0));
  if (param_4) {
    local_res8.Value =
         (UPCGPin **)
         UPCGNode::GetOutputPin((this->NewGraph->InputNode).field0_0x0.DebugPtr,&local_res20);
  }
  else {
    local_res8.Value =
         (UPCGPin **)
         UPCGNode::GetInputPin((this->NewGraph->OutputNode).field0_0x0.DebugPtr,&local_res20);
  }
  if (((UPCGPin *)local_res8.Value == (UPCGPin *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubgraphIOPin",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x1e7,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  local_50 = &local_58;
  local_48 = &local_res8.Value;
  TSet<TTuple<UPCGPin_*,UPCGPin_*>,TDefaultMapHashableKeyFuncs<UPCGPin_*,UPCGPin_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UPCGPin_*_&,UPCGPin_*_&>_>
            ((TSet<TTuple<UPCGPin_*,UPCGPin_*>,TDefaultMapHashableKeyFuncs<UPCGPin_*,UPCGPin_*,0>,FDefaultSetAllocator>
              *)&this->SubgraphInsidePinToInputOutputPinMapping,&local_res8,(bool *)&local_50);
  bVar5 = true;
LAB_149d41f13:
  if (((UPCGPin *)local_res8.Value == (UPCGPin *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubgraphIOPin",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x1f1,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  ppUVar4 = local_res8.Value;
  if ((bVar5 != false) || (!param_4)) {
    iVar8 = (this->OutsideSubgraphPinToSubgraphPinLabel).ArrayNum;
    piVar1 = &(this->OutsideSubgraphPinToSubgraphPinLabel).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->OutsideSubgraphPinToSubgraphPinLabel).AllocatorInstance,
                         piVar1);
    }
    (this->OutsideSubgraphPinToSubgraphPinLabel).ArrayNum = iVar8 + 1;
    pFVar13 = (this->OutsideSubgraphPinToSubgraphPinLabel).AllocatorInstance.Data +
              (longlong)iVar8 * 0x10;
    *(UPCGPin **)pFVar13 = param_3;
    *(FName *)(pFVar13 + 8) = ((FPCGPinProperties *)((longlong)ppUVar4 + 0x48))->Label;
    if (bVar5 == false) {
      if (!param_4) {
        return false;
      }
    }
    else {
      this_00 = param_2;
      pUVar12 = (UPCGPin *)local_res8.Value;
      if (!param_4) goto LAB_149d41fb5;
    }
  }
  this_00 = (UPCGPin *)local_res8.Value;
  pUVar12 = param_2;
LAB_149d41fb5:
  UPCGPin::AddEdgeTo(this_00,pUVar12,
                     (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)0x0);
  return bVar5;
}

// CopyNodes @ 149d44660

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
PCGSubgraphHelpersExtra::FCollapsingInformation::CopyNodes
          (FCollapsingInformation *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TObjectPtr<UPCGNode> TVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  TPairInitializer<UPCGNode_*_&,UPCGNode_*_&> local_res18;
  longlong local_38;
  undefined1 local_30 [8];
  UPCGNode ***local_28;
  longlong *local_20;
  
  if (this->NewGraph == (UPCGGraph *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewGraph",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                       ,0xd9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = (this->ValidNodesToCollapse).AllocatorInstance.Data;
  iVar2 = (this->ValidNodesToCollapse).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ValidNodesToCollapse).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UPCGNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) break;
    local_res18.Value = *(UPCGNode ***)pFVar6;
    if (local_res18.Value == (UPCGNode **)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PCGNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0xdc,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TVar5 = UPCGGraph::ReconstructNewNode(this->NewGraph,(UPCGNode *)local_30);
    local_38 = *(longlong *)TVar5.field0_0x0;
    if (local_38 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0xe0,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(UPCGNode **)(local_38 + 0x28) = local_res18.Value[5];
    local_28 = &local_res18.Value;
    local_20 = &local_38;
    TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UPCGNode_*_&,UPCGNode_*_&>_>
              ((TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
                *)&this->OriginalToNewNodesMapping,&local_res18,(bool *)(local_30 + 8));
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// CreateAndInitialize @ 149d44b70

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

FCollapsingInformation * __cdecl
PCGSubgraphHelpersExtra::FCollapsingInformation::CreateAndInitialize
          (FCollapsingInformation *__return_storage_ptr__,
          TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *param_1,FInstancedPropertyBag *param_2,
          UPCGGraph *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FCollapsingInformation *pFVar6;
  UPCGUserParameterGetSettings *pUVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  uint local_res10;
  FScriptContainerElement *local_res18;
  UPCGNode *local_48 [2];
  
  if (param_3 == (UPCGGraph *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOriginalGraph",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                       ,0x85,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FCollapsingInformation *)(*pcVar2)();
      return pFVar6;
    }
  }
  *(undefined8 *)&(__return_storage_ptr__->SubgraphInsidePinToInputOutputPinMapping).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->SubgraphInsidePinToInputOutputPinMapping).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->SubgraphInsidePinToInputOutputPinMapping).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->SubgraphInsidePinToInputOutputPinMapping).field_0x48 = 0;
  *(undefined8 *)&(__return_storage_ptr__->NameCollisionMapping).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->NameCollisionMapping).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->NameCollisionMapping).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->NameCollisionMapping).field_0x48 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OriginalToNewNodesMapping).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OriginalToNewNodesMapping).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OriginalToNewNodesMapping).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OriginalToNewNodesMapping).field_0x48 = 0;
  *(undefined8 *)&(__return_storage_ptr__->GraphParametersDescToNodeGetters).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->GraphParametersDescToNodeGetters).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->GraphParametersDescToNodeGetters).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->GraphParametersDescToNodeGetters).field_0x48 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OriginalPinsToBreakEdges).Elements.field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OriginalPinsToBreakEdges).Elements.field_0x18 = 0;
  (__return_storage_ptr__->OriginalPinsToBreakEdges).Hash.InlineData[0] = '\0';
  (__return_storage_ptr__->OriginalPinsToBreakEdges).Hash.InlineData[1] = '\0';
  (__return_storage_ptr__->OriginalPinsToBreakEdges).Hash.InlineData[2] = '\0';
  (__return_storage_ptr__->OriginalPinsToBreakEdges).Hash.InlineData[3] = '\0';
  (__return_storage_ptr__->OriginalPinsToBreakEdges).Hash._padding_ = 0;
  *(undefined8 *)&(__return_storage_ptr__->OriginalPinsToBreakEdges).HashSize = 0;
  (__return_storage_ptr__->ValidNodesToCollapse).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ValidNodesToCollapse).ArrayNum = 0;
  (__return_storage_ptr__->ValidNodesToCollapse).ArrayMax = 0;
  (__return_storage_ptr__->NodesToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NodesToRemove).ArrayNum = 0;
  (__return_storage_ptr__->NodesToRemove).ArrayMax = 0;
  (__return_storage_ptr__->SuperfluousNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->SuperfluousNodes).ArrayNum = 0;
  (__return_storage_ptr__->SuperfluousNodes).ArrayMax = 0;
  (__return_storage_ptr__->OutsideSubgraphPinToSubgraphPinLabel).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OutsideSubgraphPinToSubgraphPinLabel).ArrayNum = 0;
  (__return_storage_ptr__->OutsideSubgraphPinToSubgraphPinLabel).ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->SubgraphInsidePinToInputOutputPinMapping = 0;
  *(undefined8 *)&(__return_storage_ptr__->SubgraphInsidePinToInputOutputPinMapping).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->SubgraphInsidePinToInputOutputPinMapping).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->SubgraphInsidePinToInputOutputPinMapping).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->SubgraphInsidePinToInputOutputPinMapping).field_0x2c =
       0x80;
  *(undefined4 *)&(__return_storage_ptr__->SubgraphInsidePinToInputOutputPinMapping).field_0x30 =
       0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->SubgraphInsidePinToInputOutputPinMapping).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->SubgraphInsidePinToInputOutputPinMapping).field_0x40 = 0;
  *(undefined8 *)&__return_storage_ptr__->NameCollisionMapping = 0;
  *(undefined8 *)&(__return_storage_ptr__->NameCollisionMapping).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->NameCollisionMapping).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->NameCollisionMapping).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->NameCollisionMapping).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->NameCollisionMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->NameCollisionMapping).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->NameCollisionMapping).field_0x40 = 0;
  *(undefined8 *)&__return_storage_ptr__->OriginalToNewNodesMapping = 0;
  *(undefined8 *)&(__return_storage_ptr__->OriginalToNewNodesMapping).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OriginalToNewNodesMapping).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OriginalToNewNodesMapping).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OriginalToNewNodesMapping).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->OriginalToNewNodesMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->OriginalToNewNodesMapping).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OriginalToNewNodesMapping).field_0x40 = 0;
  *(undefined8 *)&__return_storage_ptr__->GraphParametersDescToNodeGetters = 0;
  *(undefined8 *)&(__return_storage_ptr__->GraphParametersDescToNodeGetters).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->GraphParametersDescToNodeGetters).field_0x20 = 0;
  __return_storage_ptr__->NewGraph = (UPCGGraph *)0x0;
  *(undefined4 *)&(__return_storage_ptr__->GraphParametersDescToNodeGetters).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->GraphParametersDescToNodeGetters).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->GraphParametersDescToNodeGetters).field_0x30 = 0xffffffff
  ;
  *(undefined4 *)&(__return_storage_ptr__->GraphParametersDescToNodeGetters).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->GraphParametersDescToNodeGetters).field_0x40 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OriginalPinsToBreakEdges).Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->OriginalPinsToBreakEdges).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OriginalPinsToBreakEdges).Elements.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OriginalPinsToBreakEdges).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OriginalPinsToBreakEdges).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->OriginalPinsToBreakEdges).Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->OriginalPinsToBreakEdges).Elements.field_0x34 = 0;
  (__return_storage_ptr__->OriginalPinsToBreakEdges).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->OriginalGraph = param_3;
  __return_storage_ptr__->GraphParameters = param_2;
  local_res10 = param_1->ArrayNum;
  uVar9 = (ulonglong)(int)local_res10;
  pFVar10 = (param_1->AllocatorInstance).Data;
  local_res18 = pFVar10 + uVar9 * 8;
  while( true ) {
    pFVar1 = local_res18;
    if (param_1->ArrayNum != (int)uVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UPCGNode_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar1) break;
    local_48[0] = *(UPCGNode **)pFVar10;
    if (local_48[0] == (UPCGNode *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PCGNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x8d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FCollapsingInformation *)(*pcVar2)();
        return pFVar6;
      }
    }
    pUVar7 = (UPCGUserParameterGetSettings *)UPCGNode::GetSettings(local_48[0]);
    if (pUVar7 != (UPCGUserParameterGetSettings *)0x0) {
      pUVar8 = Z_Construct_UClass_UPCGGraphInputOutputSettings_NoRegister();
      iVar5 = (int)pUVar8->_padding_;
      if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar8->_padding_)) {
        bVar3 = true;
        pUVar8 = Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister();
        iVar5 = (int)pUVar8->_padding_;
        if ((iVar5 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
            &pUVar8->_padding_)) {
          bVar3 = false;
          bVar4 = ConnectGraphParameterGetterToSubgraphInput
                            (__return_storage_ptr__,pUVar7,local_48[0]);
          if (!bVar4) {
            pFVar1 = (__return_storage_ptr__->SuperfluousNodes).AllocatorInstance.Data;
            if ((pFVar1 <= (FScriptContainerElement *)local_48) &&
               ((FScriptContainerElement *)local_48 <
                pFVar1 + (longlong)(__return_storage_ptr__->SuperfluousNodes).ArrayMax * 8)) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                pFVar6 = (FCollapsingInformation *)(*pcVar2)();
                return pFVar6;
              }
            }
            iVar5 = (__return_storage_ptr__->SuperfluousNodes).ArrayNum;
            if (iVar5 == (__return_storage_ptr__->SuperfluousNodes).ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&(__return_storage_ptr__->SuperfluousNodes).AllocatorInstance
                                 ,&(__return_storage_ptr__->SuperfluousNodes).ArrayMax);
            }
            (__return_storage_ptr__->SuperfluousNodes).ArrayNum = iVar5 + 1;
            *(UPCGNode **)
             ((__return_storage_ptr__->SuperfluousNodes).AllocatorInstance.Data +
             (longlong)iVar5 * 8) = local_48[0];
          }
        }
        pFVar1 = (__return_storage_ptr__->ValidNodesToCollapse).AllocatorInstance.Data;
        if ((pFVar1 <= (FScriptContainerElement *)local_48) &&
           ((FScriptContainerElement *)local_48 <
            pFVar1 + (longlong)(__return_storage_ptr__->ValidNodesToCollapse).ArrayMax * 8)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FCollapsingInformation *)(*pcVar2)();
            return pFVar6;
          }
        }
        iVar5 = (__return_storage_ptr__->ValidNodesToCollapse).ArrayNum;
        if (iVar5 == (__return_storage_ptr__->ValidNodesToCollapse).ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)__return_storage_ptr__,
                             &(__return_storage_ptr__->ValidNodesToCollapse).ArrayMax);
        }
        (__return_storage_ptr__->ValidNodesToCollapse).ArrayNum = iVar5 + 1;
        *(UPCGNode **)
         ((__return_storage_ptr__->ValidNodesToCollapse).AllocatorInstance.Data +
         (longlong)iVar5 * 8) = local_48[0];
        if (bVar3) {
          pFVar1 = (__return_storage_ptr__->NodesToRemove).AllocatorInstance.Data;
          if ((pFVar1 <= (FScriptContainerElement *)local_48) &&
             ((FScriptContainerElement *)local_48 <
              pFVar1 + (longlong)(__return_storage_ptr__->NodesToRemove).ArrayMax * 8)) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar6 = (FCollapsingInformation *)(*pcVar2)();
              return pFVar6;
            }
          }
          iVar5 = (__return_storage_ptr__->NodesToRemove).ArrayNum;
          if (iVar5 == (__return_storage_ptr__->NodesToRemove).ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&(__return_storage_ptr__->NodesToRemove).AllocatorInstance,
                               &(__return_storage_ptr__->NodesToRemove).ArrayMax);
          }
          (__return_storage_ptr__->NodesToRemove).ArrayNum = iVar5 + 1;
          *(UPCGNode **)
           ((__return_storage_ptr__->NodesToRemove).AllocatorInstance.Data + (longlong)iVar5 * 8) =
               local_48[0];
        }
      }
    }
    uVar9 = (ulonglong)local_res10;
    pFVar10 = pFVar10 + 8;
  }
  return __return_storage_ptr__;
}

// CreateNewCustomPin @ 149d45940

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

FName __thiscall
PCGSubgraphHelpersExtra::FCollapsingInformation::CreateNewCustomPin
          (FCollapsingInformation *this,UPCGGraph *param_1,UPCGPin *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  UPCGNode *this_00;
  code *pcVar2;
  UPCGPin *pUVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  UPCGGraphInputOutputSettings *this_01;
  UClass *pUVar9;
  UPCGSettings *this_02;
  FText *this_03;
  FString *pFVar10;
  undefined8 *puVar11;
  FName *pFVar12;
  FPCGPinProperties *pFVar13;
  TPairInitializer<FString_&,int_&&> *pTVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  int iVar17;
  UPCGSettings *pUVar18;
  ForAnyElementType FVar19;
  wchar_t *pwVar20;
  int iVar21;
  FString **ppFVar22;
  undefined7 in_register_00000089;
  UPCGPin *pUVar23;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *this_04;
  undefined1 local_res18 [8];
  UPCGPin *local_res20;
  byte in_stack_00000028;
  FString local_198;
  FPCGPinProperties local_188;
  undefined4 local_158;
  undefined4 local_154;
  FString local_150;
  FPCGDataTypeIdentifier local_140;
  undefined1 local_128 [8];
  UPCGNode *local_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString *local_d8;
  undefined4 *local_d0;
  FString *local_c8;
  undefined4 *local_c0;
  FName local_b0;
  FText local_a8;
  FString local_98;
  FScriptContainerElement *local_88 [3];
  FString local_70;
  FString local_60;
  FString local_50;
  
  pUVar23 = (UPCGPin *)CONCAT71(in_register_00000089,param_3);
  ppFVar22 = &local_d8;
  pwVar15 = L"";
  local_res20 = pUVar23;
  if (((param_2 == (UPCGPin *)0x0) || (pUVar23 == (UPCGPin *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InGraph && InPinToClone",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x177,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    FVar8 = (FName)(*pcVar2)();
    return FVar8;
  }
  local_120 = *(UPCGNode **)(&(param_2->Edges).ArrayNum + ((ulonglong)in_stack_00000028 ^ 1) * 2);
  this_01 = (UPCGGraphInputOutputSettings *)UPCGNode::GetSettings(local_120);
  if (this_01 == (UPCGGraphInputOutputSettings *)0x0) {
    pFVar10 = GetTypeName<UPCGGraphInputOutputSettings>(&local_70);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar15);
  }
  pUVar9 = Z_Construct_UClass_UPCGGraphInputOutputSettings_NoRegister();
  iVar17 = (int)pUVar9->_padding_;
  if ((*(int *)(this_01->_padding_ + 0x38) < iVar17) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar17 * 8)
      != &pUVar9->_padding_)) {
    pFVar10 = GetTypeName<UPCGGraphInputOutputSettings>(&local_60);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<UPCGSettings>(&local_50,(UPCGSettings *)this_01);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar15,pwVar20);
  }
  this_00 = (pUVar23->Node).field0_0x0.DebugPtr;
  pUVar18 = (UPCGSettings *)0x0;
  iVar17 = 0;
  this_02 = pUVar18;
  if (((this_00 == (UPCGNode *)0x0) ||
      (this_02 = UPCGNode::GetSettings(this_00), this_02 == (UPCGSettings *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PinToCloneNode && PinToCloneSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x17d,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    FVar8 = (FName)(*pcVar2)();
    return FVar8;
  }
  ::FName::ToString(&(pUVar23->Properties).Label,&local_198);
  this_04 = &this->NameCollisionMapping;
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_198.Data.ArrayNum != 0) {
    FVar19.Data = local_198.Data.AllocatorInstance.Data;
  }
  iVar21 = 0;
  iVar7 = local_198.Data.ArrayNum + -1;
  if (local_198.Data.ArrayNum == 0) {
    iVar7 = iVar21;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar19.Data);
  iVar7 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                      *)this_04,uVar6,&local_198);
  if (iVar7 == -1) {
    local_c8 = &local_198;
    local_154 = 1;
    ppFVar22 = &local_c8;
    local_c0 = &local_154;
    pTVar14 = (TPairInitializer<FString_&,int_&&> *)(local_128 + 4);
  }
  else {
    ::FString::FString(&local_f8," ");
    this_03 = UPCGNode::GetNodeTitle(this_00,&local_a8,ListView);
    pFVar10 = FText::ToString(this_03);
    ::FString::ConcatFF(&local_108,pFVar10,&local_f8);
    ::FString::ConcatFF(&local_150,&local_108,&local_198);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    local_198.Data.ArrayNum = local_150.Data.ArrayNum;
    local_198.Data.AllocatorInstance.Data = local_150.Data.AllocatorInstance.Data;
    local_198.Data.ArrayMax = local_150.Data.ArrayMax;
    local_150.Data.ArrayNum = 0;
    local_150.Data.ArrayMax = 0;
    local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    iVar7 = local_198.Data.ArrayNum + -1;
    FVar19.Data = local_198.Data.AllocatorInstance.Data;
    if (local_198.Data.ArrayNum == 0) {
      iVar7 = iVar21;
      FVar19.Data = (FScriptContainerElement *)L"";
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar19.Data);
    iVar7 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)this_04,uVar6,&local_198);
    if (iVar7 != -1) {
      iVar7 = local_198.Data.ArrayNum + -1;
      FVar19.Data = local_198.Data.AllocatorInstance.Data;
      if (local_198.Data.ArrayNum == 0) {
        iVar7 = 0;
        FVar19.Data = (FScriptContainerElement *)L"";
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar19.Data);
      iVar7 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                          *)this_04,uVar6,&local_198);
      if (((iVar7 == -1) ||
          (pUVar18 = (UPCGSettings *)((longlong)iVar7 * 0x20 + *(longlong *)&this_04->field_0x0),
          pUVar18 == (UPCGSettings *)0x0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        FVar8 = (FName)(*pcVar2)();
        return FVar8;
      }
      *(int *)&pUVar18->_padding_ = (int)pUVar18->_padding_ + 1;
      pFVar10 = ::FString::FormatAsNumber(&local_98,(int)pUVar18->_padding_);
      ::FString::FString(&local_e8," ");
      ::FString::ConcatFF(&local_118,&local_e8,pFVar10);
      if (local_118.Data.ArrayNum != 0) {
        iVar21 = local_118.Data.ArrayNum + -1;
      }
      ::FString::AppendChars(&local_198,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar21);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      goto LAB_149d45c97;
    }
    local_d8 = &local_198;
    local_158 = 1;
    local_d0 = &local_158;
    pTVar14 = (TPairInitializer<FString_&,int_&&> *)local_128;
  }
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&,int_&&>_>
            ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)this_04,pTVar14,(bool *)ppFVar22);
LAB_149d45c97:
  local_188.Label = (pUVar23->Properties).Label;
  local_188.Usage = (pUVar23->Properties).Usage;
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
            (&local_188.AllowedTypes,&(pUVar23->Properties).AllowedTypes);
  pUVar3 = local_res20;
  local_188.bAllowMultipleData = (pUVar23->Properties).bAllowMultipleData;
  local_188.PinStatus = (pUVar23->Properties).PinStatus;
  local_188.bInvisiblePin = (pUVar23->Properties).bInvisiblePin;
  local_188.bAllowMultipleConnections = (pUVar23->Properties).bAllowMultipleConnections;
  bVar5 = UPCGPin::IsOutputPin(local_res20);
  if (bVar5) {
    puVar11 = (undefined8 *)(**(code **)(this_02->_padding_ + 0x440))(this_02,local_88,pUVar3);
    if (&local_188.AllowedTypes != (FPCGDataTypeIdentifier *)puVar11) {
      if (local_188.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.AllowedTypes.Ids.AllocatorInstance.Data);
      }
      local_188.AllowedTypes.Ids.AllocatorInstance.Data = (FScriptContainerElement *)*puVar11;
      *puVar11 = 0;
      local_188.AllowedTypes.Ids.ArrayNum = *(int *)(puVar11 + 1);
      local_188.AllowedTypes.Ids.ArrayMax = *(int *)((longlong)puVar11 + 0xc);
      puVar11[1] = 0;
    }
    local_188.AllowedTypes.CustomSubtype = *(int *)(puVar11 + 2);
  }
  else {
    UPCGSettings::GetTypeUnionIDOfIncidentEdges(this_02,&local_140,&(pUVar23->Properties).Label);
    iVar7 = local_140.Ids.ArrayNum;
    uVar16 = (ulonglong)local_140.Ids.ArrayNum;
    local_88[0] = local_140.Ids.AllocatorInstance.Data;
    if (local_140.Ids.ArrayNum != 0) {
      pFVar1 = local_140.Ids.AllocatorInstance.Data + uVar16 * 8;
      FVar19.Data = local_140.Ids.AllocatorInstance.Data;
      while( true ) {
        uVar6 = (uint)uVar16;
        if ((uint)uVar16 != iVar7) {
          `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
          uVar6 = local_140.Ids.ArrayNum;
        }
        FVar4.Data = local_140.Ids.AllocatorInstance.Data;
        if (FVar19.Data == pFVar1) break;
        bVar5 = FPCGDataTypeBaseId::IsValid((FPCGDataTypeBaseId *)FVar19.Data);
        local_88[0] = local_140.Ids.AllocatorInstance.Data;
        if (!bVar5) goto joined_r0x000149d45e1e;
        uVar16 = (ulonglong)(uint)local_140.Ids.ArrayNum;
        FVar19.Data = FVar19.Data + 8;
      }
      local_188.AllowedTypes.Ids.ArrayNum = uVar6;
      if ((uVar6 == 0) && (local_188.AllowedTypes.Ids.ArrayMax == 0)) {
        local_188.AllowedTypes.Ids.ArrayMax = 0;
        local_188.AllowedTypes.CustomSubtype = local_140.CustomSubtype;
        local_88[0] = local_140.Ids.AllocatorInstance.Data;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar6,local_188.AllowedTypes.Ids.ArrayMax,
                   (ForAnyElementType *)&local_188.AllowedTypes,uVar6,
                   &local_188.AllowedTypes.Ids.ArrayMax);
        ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                  (local_188.AllowedTypes.Ids.AllocatorInstance.Data,
                   (FPCGDataTypeBaseId *)FVar4.Data,uVar6);
        local_188.AllowedTypes.CustomSubtype = local_140.CustomSubtype;
        local_88[0] = local_140.Ids.AllocatorInstance.Data;
      }
    }
  }
joined_r0x000149d45e1e:
  if (local_88[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88[0]);
  }
  if (local_198.Data.ArrayNum != 0) {
    iVar17 = local_198.Data.ArrayNum + -1;
  }
  pFVar12 = ::FName::FName(&local_b0,iVar17,(wchar_t *)local_198.Data.AllocatorInstance.Data,
                           FNAME_Add);
  local_188.Label = *pFVar12;
  pFVar13 = UPCGGraphInputOutputSettings::AddPin(this_01,&local_188);
  local_188.Label = pFVar13->Label;
  local_188.Usage = pFVar13->Usage;
  FPCGDataTypeIdentifier::operator=(&local_188.AllowedTypes,&pFVar13->AllowedTypes);
  local_188.bAllowMultipleData = pFVar13->bAllowMultipleData;
  local_188.PinStatus = pFVar13->PinStatus;
  local_188.bInvisiblePin = pFVar13->bInvisiblePin;
  local_188.bAllowMultipleConnections = pFVar13->bAllowMultipleConnections;
  UPCGNode::UpdateAfterSettingsChangeDuringCreation(local_120);
  param_1->_padding_ = (longlong)local_188.Label;
  if (local_188.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// CreateSubgraphNodeAndConnectRemainingPins @ 149d46c10

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
PCGSubgraphHelpersExtra::FCollapsingInformation::CreateSubgraphNodeAndConnectRemainingPins
          (FCollapsingInformation *this)

{
  int iVar1;
  UPCGGraph *this_00;
  code *pcVar2;
  UPCGSettings *pUVar3;
  bool bVar4;
  UPCGNode *this_01;
  UClass *pUVar5;
  UPCGPin *pUVar6;
  UPCGPin *this_02;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  UPCGSettings *local_res10;
  UClass *local_res18;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pwVar10 = L"";
  if ((this->OriginalGraph == (UPCGGraph *)0x0) || (this->NewGraph == (UPCGGraph *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("OriginalGraph && NewGraph",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                       ,0x129,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = this->OriginalGraph;
  local_res10 = (UPCGSettings *)0x0;
  local_res18 = Z_Construct_UClass_UPCGSubgraphSettings_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  this_01 = UPCGGraph::AddNodeOfType(this_00,(TSubclassOf<UPCGSettings>)&local_res18,&local_res10);
  pUVar3 = local_res10;
  if (local_res10 != (UPCGSettings *)0x0) {
    pUVar5 = Z_Construct_UClass_UPCGSubgraphSettings_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      (**(code **)(pUVar3->_padding_ + 0x508))(pUVar3,this->NewGraph);
      if (this_01 == (UPCGNode *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SubgraphNode",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                           ,0x130,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      UPCGNode::UpdateAfterSettingsChangeDuringCreation(this_01);
      iVar1 = (this->OutsideSubgraphPinToSubgraphPinLabel).ArrayNum;
      pFVar8 = (this->OutsideSubgraphPinToSubgraphPinLabel).AllocatorInstance.Data;
      pFVar11 = pFVar8 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->OutsideSubgraphPinToSubgraphPinLabel).ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TTuple<UPCGPin_*,FName>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar8 == pFVar11) break;
        if (*(longlong *)pFVar8 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutsidePin",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                             ,0x13b,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (*(longlong *)(*(longlong *)pFVar8 + 0x28) == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutsideNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                             ,0x13d,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        bVar4 = UPCGPin::IsOutputPin(*(UPCGPin **)pFVar8);
        if (bVar4) {
          this_02 = *(UPCGPin **)pFVar8;
          pUVar6 = UPCGNode::GetInputPin(this_01,(FName *)(pFVar8 + 8));
        }
        else {
          this_02 = UPCGNode::GetOutputPin(this_01,(FName *)(pFVar8 + 8));
          pUVar6 = *(UPCGPin **)pFVar8;
        }
        UPCGPin::AddEdgeTo(this_02,pUVar6,
                           (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)
                           0x0);
        pFVar8 = pFVar8 + 0x10;
      }
      return;
    }
    pFVar7 = GetTypeName<UPCGSubgraphSettings>(&local_58);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    pFVar7 = GetFullNameForCastLogError<UPCGSettings>(&local_48,pUVar3);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar10,pwVar9);
  }
  pFVar7 = GetTypeName<UPCGSubgraphSettings>(&local_68);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar10);
}

// DeleteNodes @ 149d47360

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
PCGSubgraphHelpersExtra::FCollapsingInformation::DeleteNodes
          (FCollapsingInformation *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_58;
  FScriptContainerElement *local_50;
  TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> local_48;
  
  if ((this->OriginalGraph == (UPCGGraph *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OriginalGraph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0xff,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UPCGGraph::RemoveNodes(this->OriginalGraph,&this->NodesToRemove);
  uVar2 = (this->SuperfluousNodes).ArrayNum;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&local_48.AllocatorInstance,0,&local_48.ArrayMax);
  }
  pFVar12 = (this->SuperfluousNodes).AllocatorInstance.Data;
  iVar3 = (this->SuperfluousNodes).ArrayNum;
  local_50 = pFVar12 + (longlong)iVar3 * 8;
  do {
    pFVar7 = local_50;
    if ((this->SuperfluousNodes).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UPCGNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar12 == pFVar7) {
      UPCGGraph::RemoveNodes(this->OriginalGraph,&local_48);
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      return;
    }
    local_58 = *(longlong *)pFVar12;
    if ((local_58 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SuperfluousNode",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                           ,0x118,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar5 = local_58;
    puVar11 = *(undefined8 **)(local_58 + 0x68);
    iVar10 = *(int *)(local_58 + 0x70);
    puVar1 = puVar11 + iVar10;
    while( true ) {
      if (*(int *)(lVar5 + 0x70) != iVar10) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      lVar6 = local_58;
      if (puVar11 == puVar1) {
        puVar11 = *(undefined8 **)(local_58 + 0x78);
        iVar10 = *(int *)(local_58 + 0x80);
        puVar1 = puVar11 + iVar10;
        goto LAB_149d474d0;
      }
      if (((UPCGPin *)*puVar11 != (UPCGPin *)0x0) &&
         (iVar9 = UPCGPin::EdgeCount((UPCGPin *)*puVar11), 0 < iVar9)) break;
      puVar11 = puVar11 + 1;
    }
LAB_149d475a1:
    pFVar12 = pFVar12 + 8;
  } while( true );
LAB_149d474d0:
  if (*(int *)(lVar6 + 0x80) != iVar10) {
    local_res20[0] = 0;
    `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res20);
  }
  if (puVar11 == puVar1) {
    if (((local_48.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar10 = local_48.ArrayNum;
    if (local_48.ArrayNum == local_48.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_48.AllocatorInstance,&local_48.ArrayMax);
    }
    local_48.ArrayNum = iVar10 + 1;
    *(longlong *)(local_48.AllocatorInstance.Data + (longlong)iVar10 * 8) = local_58;
    goto LAB_149d475a1;
  }
  if (((UPCGPin *)*puVar11 != (UPCGPin *)0x0) &&
     (iVar9 = UPCGPin::EdgeCount((UPCGPin *)*puVar11), 0 < iVar9)) goto LAB_149d475a1;
  puVar11 = puVar11 + 1;
  goto LAB_149d474d0;
}

// HandleExternalGraphParameterGetter @ 149d56600

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
PCGSubgraphHelpersExtra::FCollapsingInformation::HandleExternalGraphParameterGetter
          (FCollapsingInformation *this,UPCGPin *param_1,UPCGPin *param_2,UPCGPin *param_3)

{
  int *piVar1;
  longlong lVar2;
  TObjectPtr<UPCGNode>_u_0 *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UPCGSettings *pUVar8;
  UClass *pUVar9;
  FPropertyBagPropertyDesc *pFVar10;
  TTuple<UPCGNode_const_*,UPCGNode_*> *pTVar11;
  FString *pFVar12;
  undefined1 *puVar13;
  wchar_t *pwVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  TObjectPtr<UPCGNode>_u_0 local_68 [2];
  FGuid local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pwVar14 = L"";
  if ((((param_1 == (UPCGPin *)0x0) || (param_2 == (UPCGPin *)0x0)) || (param_3 == (UPCGPin *)0x0))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("OriginalInsidePin && NewInsidePin && OutsidePin",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                            ,0x21e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_68[0] = (TObjectPtr<UPCGNode>_u_0)(param_3->Node).field0_0x0.DebugPtr;
  if ((local_68[0].DebugPtr == (UPCGNode *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExternalGraphParameterNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x220,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar8 = UPCGNode::GetSettings(local_68[0].DebugPtr);
  if (pUVar8 == (UPCGSettings *)0x0) {
    pFVar12 = GetTypeName<UPCGUserParameterGetSettings_const_>(&local_48);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar14);
  }
  pUVar9 = Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister();
  iVar7 = (int)pUVar9->_padding_;
  if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar7) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
      &pUVar9->_padding_)) {
    pFVar12 = GetTypeName<UPCGUserParameterGetSettings_const_>(&local_38);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    pFVar12 = GetFullNameForCastLogError<UPCGSettings>(&local_28,pUVar8);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar14,pwVar16);
  }
  local_58._0_8_ = pUVar8[1]._padding_;
  local_58._8_8_ = pUVar8[1]._padding_;
  pFVar10 = FInstancedPropertyBag::FindPropertyDescByID(this->GraphParameters,&local_58);
  if ((pFVar10 == (FPropertyBagPropertyDesc *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PropertyDesc",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x224,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = ((uint)((ulonglong)pFVar10 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar10 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->GraphParametersDescToNodeGetters).field_0x8 !=
      *(int *)&(this->GraphParametersDescToNodeGetters).field_0x34) {
    puVar13 = *(undefined1 **)&(this->GraphParametersDescToNodeGetters).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->GraphParametersDescToNodeGetters).field_0x38;
    }
    iVar7 = *(int *)(puVar13 +
                    (ulonglong)
                    (*(int *)&(this->GraphParametersDescToNodeGetters).field_0x48 - 1U &
                    (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&this->GraphParametersDescToNodeGetters;
      do {
        if (*(FPropertyBagPropertyDesc **)(lVar2 + (longlong)iVar7 * 0x18) == pFVar10) {
          if (((iVar7 != -1) && (lVar2 = lVar2 + (longlong)iVar7 * 0x18, lVar2 != 0)) &&
             (plVar15 = (longlong *)(lVar2 + 8), plVar15 != (longlong *)0x0)) {
            if ((*plVar15 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("*ExistingGraphParameterNode",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                                   ,0x229,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pTVar11 = TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
                              *)&this->OriginalToNewNodesMapping,(UPCGNode *)*plVar15);
            if ((pTVar11 == (TTuple<UPCGNode_const_*,UPCGNode_*> *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar2 = *(longlong *)&pTVar11->field_0x8;
            if (((lVar2 == 0) || (*(int *)(lVar2 + 0x80) != 1)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ExistingGraphParameterNodeInsideSubgraph && ExistingGraphParameterNodeInsideSubgraph->GetOutputPins().Num() == 1"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                                   ,0x22b,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((*(int *)(lVar2 + 0x80) < 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            UPCGPin::AddEdgeTo((UPCGPin *)**(undefined8 **)(lVar2 + 0x78),param_2,
                               (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator>
                                *)0x0);
            pTVar3 = (TObjectPtr<UPCGNode>_u_0 *)(this->SuperfluousNodes).AllocatorInstance.Data;
            if (((pTVar3 <= local_68) && (local_68 < pTVar3 + (this->SuperfluousNodes).ArrayMax)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar7 = (this->SuperfluousNodes).ArrayNum;
            piVar1 = &(this->SuperfluousNodes).ArrayMax;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&(this->SuperfluousNodes).AllocatorInstance,piVar1);
            }
            (this->SuperfluousNodes).ArrayNum = iVar7 + 1;
            *(TObjectPtr<UPCGNode>_u_0 *)
             ((this->SuperfluousNodes).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_68[0];
            return;
          }
          break;
        }
        iVar7 = *(int *)(lVar2 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  ConnectPinsBetweenSubgraphBoundaries(this,param_1,param_2,param_3,true);
  return;
}

// HandleReconnectNamedRerouteDeclaration @ 149d569e0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
PCGSubgraphHelpersExtra::FCollapsingInformation::HandleReconnectNamedRerouteDeclaration
          (FCollapsingInformation *this,UPCGNode *param_1,
          UPCGNamedRerouteDeclarationSettings *param_2)

{
  int iVar1;
  UPCGNode *this_00;
  UPCGPin *pUVar2;
  UPCGNode *pUVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TTuple<UPCGNode_const_*,UPCGNode_*> *pTVar9;
  UPCGPin *pUVar10;
  UPCGSettings *pUVar11;
  UClass *pUVar12;
  FScriptContainerElement *pFVar13;
  undefined1 *puVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  UPCGNode *local_res10;
  undefined1 local_res20 [8];
  undefined1 local_68 [4];
  undefined1 local_64 [12];
  UPCGPin *local_58;
  UPCGPin *local_50;
  FScriptContainerElement *local_48;
  
  local_res10 = param_1;
  if (((param_1 == (UPCGNode *)0x0) || (param_2 == (UPCGNamedRerouteDeclarationSettings *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OriginalDeclNode && OriginalDeclSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x239,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar9 = TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
                   *)&this->OriginalToNewNodesMapping,local_res10);
  if ((pTVar9 == (TTuple<UPCGNode_const_*,UPCGNode_*> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = *(UPCGNode **)&pTVar9->field_0x8;
  if ((this_00 == (UPCGNode *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewDeclNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x23b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar3 = local_res10;
  pFVar15 = (local_res10->InputPins).AllocatorInstance.Data;
  iVar1 = (local_res10->InputPins).ArrayNum;
  pFVar16 = pFVar15 + (longlong)iVar1 * 8;
  while( true ) {
    if ((pUVar3->InputPins).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar15 == pFVar16) break;
    ReconnectNode(this,this_00,*(UPCGPin **)pFVar15);
    pFVar15 = pFVar15 + 8;
  }
  pUVar10 = UPCGNode::GetOutputPin(local_res10,&PCGNamedRerouteConstants::InvisiblePinLabel);
  if ((pUVar10 == (UPCGPin *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InvisiblePin",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x245,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar3 = local_res10;
  pFVar15 = (local_res10->OutputPins).AllocatorInstance.Data;
  iVar1 = (local_res10->OutputPins).ArrayNum;
  pFVar16 = pFVar15 + (longlong)iVar1 * 8;
  while( true ) {
    if ((pUVar3->OutputPins).ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar15 == pFVar16) break;
    pUVar2 = *(UPCGPin **)pFVar15;
    if (pUVar2 == (UPCGPin *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2608592251726593464>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x248,"OriginalOutputPin");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else if (pUVar2 != pUVar10) {
      ReconnectNode(this,this_00,pUVar2);
    }
    pFVar15 = pFVar15 + 8;
  }
  pFVar16 = (pUVar10->Edges).AllocatorInstance.Data;
  iVar1 = (pUVar10->Edges).ArrayNum;
  local_48 = pFVar16 + (longlong)iVar1 * 8;
  do {
    pFVar15 = local_48;
    if ((pUVar10->Edges).ArrayNum != iVar1) {
      local_68[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPCGEdge>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_68);
    }
    if (pFVar16 == pFVar15) {
      return;
    }
    pUVar2 = *(UPCGPin **)(*(longlong *)pFVar16 + 0x50);
    if (((pUVar2 == (UPCGPin *)0x0) || (pUVar2 == pUVar10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OtherPin && OtherPin != InvisiblePin",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                           ,0x256,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar3 = (pUVar2->Node).field0_0x0.DebugPtr;
    if ((pUVar3 == (UPCGNode *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OtherNode",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                           ,600,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar11 = UPCGNode::GetSettings(pUVar3);
    if (pUVar11 == (UPCGSettings *)0x0) {
LAB_149d56c78:
      pUVar11 = (UPCGSettings *)0x0;
    }
    else {
      pUVar12 = Z_Construct_UClass_UPCGNamedRerouteUsageSettings_NoRegister();
      iVar8 = (int)pUVar12->_padding_;
      if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar8) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar12->_padding_)) goto LAB_149d56c78;
    }
    uVar7 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
            -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    if (*(int *)&(this->OriginalToNewNodesMapping).field_0x8 !=
        *(int *)&(this->OriginalToNewNodesMapping).field_0x34) {
      puVar4 = *(undefined1 **)&(this->OriginalToNewNodesMapping).field_0x40;
      puVar14 = &(this->OriginalToNewNodesMapping).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar14 = puVar4;
      }
      iVar8 = *(int *)(puVar14 +
                      (ulonglong)
                      (*(int *)&(this->OriginalToNewNodesMapping).field_0x48 - 1U &
                      (uVar7 >> 0x10 ^ uVar7)) * 4);
      if (iVar8 != -1) {
        do {
          if (*(UPCGNode **)(*(longlong *)&this->OriginalToNewNodesMapping + (longlong)iVar8 * 0x18)
              == pUVar3) goto LAB_149d56d31;
          iVar8 = *(int *)(*(longlong *)&this->OriginalToNewNodesMapping + 0x10 +
                          (longlong)iVar8 * 0x18);
        } while (iVar8 != -1);
      }
    }
    if (pUVar11 != (UPCGSettings *)0x0) {
      pFVar13 = (this->NodesToRemove).AllocatorInstance.Data;
      pFVar15 = pFVar13 + (longlong)(this->NodesToRemove).ArrayNum * 8;
      for (; pFVar13 != pFVar15; pFVar13 = pFVar13 + 8) {
        if (*(UPCGNode **)pFVar13 == local_res10) {
          TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                    (&this->NodesToRemove,&local_res10,Default);
          local_58 = UPCGNode::GetInputPin(local_res10,&PCGPinConstants::DefaultInputLabel);
          if ((local_58 == (UPCGPin *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("OriginalInputPin",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                                 ,0x25e,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          TSet<UPCGPin_*,DefaultKeyFuncs<UPCGPin_*,0>,FDefaultSetAllocator>::
          Emplace<UPCGPin_*_const_&>
                    (&this->OriginalPinsToBreakEdges,(UPCGPin **)local_64,(bool *)&local_58);
          local_50 = UPCGNode::GetOutputPin(local_res10,&PCGPinConstants::DefaultOutputLabel);
          if ((local_50 == (UPCGPin *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("OriginalOutputPin",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                                 ,0x262,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          TSet<UPCGPin_*,DefaultKeyFuncs<UPCGPin_*,0>,FDefaultSetAllocator>::
          Emplace<UPCGPin_*_const_&>
                    (&this->OriginalPinsToBreakEdges,(UPCGPin **)(local_64 + 4),(bool *)&local_50);
          pUVar10 = UPCGNode::GetOutputPin(this_00,&PCGPinConstants::DefaultOutputLabel);
          if ((pUVar10 == (UPCGPin *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("NewOutputPin",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                                 ,0x266,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          ConnectPinsBetweenSubgraphBoundaries(this,local_50,pUVar10,local_58,false);
          return;
        }
      }
    }
LAB_149d56d31:
    pFVar16 = pFVar16 + 8;
  } while( true );
}

// HandleReconnectNamedRerouteUsage @ 149d56e90

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
PCGSubgraphHelpersExtra::FCollapsingInformation::HandleReconnectNamedRerouteUsage
          (FCollapsingInformation *this,UPCGNode *param_1,UPCGNamedRerouteUsageSettings *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPCGNode *this_00;
  UPCGNamedRerouteDeclarationSettings *pUVar3;
  UPCGNode *pUVar4;
  code *pcVar5;
  bool bVar6;
  TTuple<UPCGNode_const_*,UPCGNode_*> *pTVar7;
  UPCGSettings *pUVar8;
  UClass *pUVar9;
  TObjectPtr<UPCGNode> TVar10;
  UPCGSettings *pUVar11;
  UPCGPin *pUVar12;
  UPCGPin *pUVar13;
  FString *pFVar14;
  wchar_t *pwVar15;
  FScriptContainerElement *pFVar16;
  wchar_t *pwVar17;
  undefined1 local_res8 [16];
  UPCGNode *local_res20;
  UPCGNode *local_e8;
  UPCGNode **local_e0;
  UPCGNode **local_d8;
  undefined1 local_d0 [24];
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pwVar15 = L"";
  if ((param_1 == (UPCGNode *)0x0) || (param_2 == (UPCGNamedRerouteUsageSettings *)0x0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("OriginalUsageNode && OriginalUsageSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                       ,0x26f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar7 = TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
                   *)&this->OriginalToNewNodesMapping,param_1);
  if (pTVar7 == (TTuple<UPCGNode_const_*,UPCGNode_*> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = *(UPCGNode **)&pTVar7->field_0x8;
  if (this_00 == (UPCGNode *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewUsageNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                       ,0x271,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pUVar8 = UPCGNode::GetSettings(this_00);
  if (pUVar8 == (UPCGSettings *)0x0) {
    pFVar14 = GetTypeName<UPCGNamedRerouteUsageSettings>((FString *)(local_d0 + 8));
    if ((pFVar14->Data).ArrayNum != 0) {
      pwVar15 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar15);
  }
  pUVar9 = Z_Construct_UClass_UPCGNamedRerouteUsageSettings_NoRegister();
  iVar2 = (int)pUVar9->_padding_;
  if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar9->_padding_)) {
    pFVar14 = GetTypeName<UPCGNamedRerouteUsageSettings>(&local_58);
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    pFVar14 = GetFullNameForCastLogError<UPCGSettings>(&local_48,pUVar8);
    if ((pFVar14->Data).ArrayNum != 0) {
      pwVar15 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar15,pwVar17);
  }
  pUVar3 = (param_2->Declaration).field0_0x0.DebugPtr;
  if (pUVar3 == (UPCGNamedRerouteDeclarationSettings *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2608592251726593419>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                       ,0x275,"OriginalDeclSettings");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pUVar4 = *(UPCGNode **)&pUVar3->field_0x20;
    if (pUVar4 == (UPCGNode *)0x0) {
      pFVar14 = GetTypeName<UPCGNode>(&local_b8);
      if ((pFVar14->Data).ArrayNum != 0) {
        pwVar15 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar15);
    }
    pUVar9 = Z_Construct_UClass_UPCGNode_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar9->_padding_)) {
      pFVar14 = GetTypeName<UPCGNode>(&local_78);
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      pFVar14 = GetFullNameForCastLogError<UObject>(&local_68,(UObject *)pUVar4);
      if ((pFVar14->Data).ArrayNum != 0) {
        pwVar15 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar15,pwVar17);
    }
    local_e8 = pUVar4;
    pTVar7 = TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
                     *)&this->OriginalToNewNodesMapping,pUVar4);
    if ((pTVar7 == (TTuple<UPCGNode_const_*,UPCGNode_*> *)0x0) ||
       (&pTVar7->field_0x8 == (undefined1 *)0x0)) {
      TVar10 = UPCGGraph::ReconstructNewNode(this->NewGraph,(UPCGNode *)local_d0);
      local_res20 = *(UPCGNode **)TVar10.field0_0x0;
      if (local_res20 == (UPCGNode *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewDeclNode",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                           ,0x284,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_res20->NodeTitle = local_e8->NodeTitle;
      local_e0 = &local_e8;
      local_d8 = &local_res20;
      TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UPCGNode_*_&,UPCGNode_*_&>_>
                ((TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
                  *)&this->OriginalToNewNodesMapping,
                 (TPairInitializer<UPCGNode_*_&,UPCGNode_*_&> *)(local_res8 + 8),(bool *)&local_e0);
      pUVar12 = UPCGNode::GetOutputPin(local_e8,&PCGPinConstants::DefaultOutputLabel);
      pUVar13 = UPCGNode::GetInputPin(local_res20,&PCGPinConstants::DefaultInputLabel);
      if ((pUVar12 == (UPCGPin *)0x0) || (pUVar13 == (UPCGPin *)0x0)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OriginalOutputPin && NewInputPin",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                           ,0x28a,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      ConnectPinsBetweenSubgraphBoundaries(this,pUVar12,pUVar13,pUVar12,true);
    }
    else {
      local_res20 = *(UPCGNode **)&pTVar7->field_0x8;
    }
    if (local_res20 == (UPCGNode *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewDeclNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x28f,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pUVar11 = UPCGNode::GetSettings(local_res20);
    if (pUVar11 == (UPCGSettings *)0x0) {
      pFVar14 = GetTypeName<UPCGNamedRerouteDeclarationSettings>(&local_a8);
      if ((pFVar14->Data).ArrayNum != 0) {
        pwVar15 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar15);
    }
    pUVar9 = Z_Construct_UClass_UPCGNamedRerouteDeclarationSettings_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar9->_padding_)) {
      pFVar14 = GetTypeName<UPCGNamedRerouteDeclarationSettings>(&local_98);
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      pFVar14 = GetFullNameForCastLogError<UPCGSettings>(&local_88,pUVar11);
      if ((pFVar14->Data).ArrayNum != 0) {
        pwVar15 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar15,pwVar17);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    pUVar8[1]._padding_ = (longlong)pUVar11;
    pUVar12 = UPCGNode::GetOutputPin(local_res20,&PCGNamedRerouteConstants::InvisiblePinLabel);
    pUVar13 = UPCGNode::GetInputPin(this_00,&PCGPinConstants::DefaultInputLabel);
    if ((pUVar12 == (UPCGPin *)0x0) || (pUVar13 == (UPCGPin *)0x0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InvisiblePin && InputUsagePin",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x293,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UPCGPin::AddEdgeTo(pUVar12,pUVar13,
                       (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)0x0);
    pFVar16 = (param_1->OutputPins).AllocatorInstance.Data;
    iVar2 = (param_1->OutputPins).ArrayNum;
    pFVar1 = pFVar16 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->OutputPins).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar16 == pFVar1) break;
      ReconnectNode(this,this_00,*(UPCGPin **)pFVar16);
      pFVar16 = pFVar16 + 8;
    }
  }
  return;
}

// ReconnectAllNodes @ 149d60800

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
PCGSubgraphHelpersExtra::FCollapsingInformation::ReconnectAllNodes(FCollapsingInformation *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPCGNode *this_00;
  undefined1 *puVar3;
  longlong lVar4;
  UPCGNode *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TTuple<UPCGNode_const_*,UPCGNode_*> *pTVar10;
  UPCGSettings *pUVar11;
  UClass *pUVar12;
  UPCGNamedRerouteUsageSettings *pUVar13;
  undefined1 *puVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  
  pFVar16 = (this->ValidNodesToCollapse).AllocatorInstance.Data;
  iVar2 = (this->ValidNodesToCollapse).ArrayNum;
  local_res20 = pFVar16 + (longlong)iVar2 * 8;
LAB_149d60827:
  do {
    pFVar1 = local_res20;
    if ((this->ValidNodesToCollapse).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UPCGNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar16 == pFVar1) {
      return;
    }
    this_00 = *(UPCGNode **)pFVar16;
    uVar8 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_00 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    if (*(int *)&(this->OriginalToNewNodesMapping).field_0x8 !=
        *(int *)&(this->OriginalToNewNodesMapping).field_0x34) {
      puVar3 = *(undefined1 **)&(this->OriginalToNewNodesMapping).field_0x40;
      puVar14 = &(this->OriginalToNewNodesMapping).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar14 = puVar3;
      }
      iVar9 = *(int *)(puVar14 +
                      (ulonglong)
                      (*(int *)&(this->OriginalToNewNodesMapping).field_0x48 - 1U &
                      (uVar8 >> 0x10 ^ uVar8)) * 4);
      if (iVar9 != -1) {
        lVar4 = *(longlong *)&(this->OriginalToNewNodesMapping).field_0x0;
        do {
          if (*(UPCGNode **)(lVar4 + (longlong)iVar9 * 0x18) == this_00) goto LAB_149d608eb;
          iVar9 = *(int *)(lVar4 + 0x10 + (longlong)iVar9 * 0x18);
        } while (iVar9 != -1);
      }
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("OriginalToNewNodesMapping.Contains(OriginalNode)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                       ,0x14e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
LAB_149d608eb:
    pTVar10 = TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
                      *)&this->OriginalToNewNodesMapping,this_00);
    if (pTVar10 == (TTuple<UPCGNode_const_*,UPCGNode_*> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pUVar5 = *(UPCGNode **)&pTVar10->field_0x8;
    if (pUVar5 == (UPCGNode *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x150,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pUVar11 = UPCGNode::GetSettings(this_00);
    if (pUVar11 != (UPCGSettings *)0x0) {
      pUVar12 = Z_Construct_UClass_UPCGNamedRerouteDeclarationSettings_NoRegister();
      iVar9 = (int)pUVar12->_padding_;
      if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar9) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
          &pUVar12->_padding_)) goto LAB_149d609a5;
      HandleReconnectNamedRerouteDeclaration
                (this,this_00,(UPCGNamedRerouteDeclarationSettings *)pUVar11);
LAB_149d60994:
      pFVar16 = pFVar16 + 8;
      goto LAB_149d60827;
    }
LAB_149d609a5:
    pUVar13 = (UPCGNamedRerouteUsageSettings *)UPCGNode::GetSettings(this_00);
    if (pUVar13 == (UPCGNamedRerouteUsageSettings *)0x0) {
LAB_149d609f7:
      pFVar15 = (this_00->InputPins).AllocatorInstance.Data;
      iVar9 = (this_00->InputPins).ArrayNum;
      pFVar1 = pFVar15 + (longlong)iVar9 * 8;
      while( true ) {
        if ((this_00->InputPins).ArrayNum != iVar9) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if (pFVar15 == pFVar1) break;
        ReconnectNode(this,pUVar5,*(UPCGPin **)pFVar15);
        pFVar15 = pFVar15 + 8;
      }
      pFVar15 = (this_00->OutputPins).AllocatorInstance.Data;
      iVar9 = (this_00->OutputPins).ArrayNum;
      pFVar1 = pFVar15 + (longlong)iVar9 * 8;
      while( true ) {
        if ((this_00->OutputPins).ArrayNum != iVar9) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res18);
        }
        if (pFVar15 == pFVar1) break;
        ReconnectNode(this,pUVar5,*(UPCGPin **)pFVar15);
        pFVar15 = pFVar15 + 8;
      }
      goto LAB_149d60994;
    }
    pUVar12 = Z_Construct_UClass_UPCGNamedRerouteUsageSettings_NoRegister();
    iVar9 = (int)pUVar12->_padding_;
    if ((*(int *)(pUVar13->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar12->_padding_)) goto LAB_149d609f7;
    HandleReconnectNamedRerouteUsage(this,this_00,pUVar13);
    pFVar16 = pFVar16 + 8;
  } while( true );
}

// ReconnectNode @ 149d60aa0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
PCGSubgraphHelpersExtra::FCollapsingInformation::ReconnectNode
          (FCollapsingInformation *this,UPCGNode *param_1,UPCGPin *param_2)

{
  int iVar1;
  longlong lVar2;
  UPCGNode *this_00;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  bool bVar6;
  UPCGPin *pUVar7;
  TTuple<UPCGNode_const_*,UPCGNode_*> *pTVar8;
  UPCGPin *pUVar9;
  UPCGSettings *pUVar10;
  UClass *pUVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  UPCGNode *local_res10;
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  local_res10 = param_1;
  if ((((this->NewGraph == (UPCGGraph *)0x0) || (param_1 == (UPCGNode *)0x0)) ||
      (param_2 == (UPCGPin *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewGraph && NewNode && OriginalPin",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x1ab,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar5 = UPCGPin::IsOutputPin(param_2);
  bVar5 = !bVar5;
  if (bVar5) {
    pUVar7 = UPCGNode::GetInputPin(param_1,&(param_2->Properties).Label);
  }
  else {
    pUVar7 = UPCGNode::GetOutputPin(param_1,&(param_2->Properties).Label);
  }
  if ((pUVar7 == (UPCGPin *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewPin",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x1af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res18 = (param_2->Edges).ArrayNum;
  uVar12 = (ulonglong)(int)local_res18;
  pFVar14 = (param_2->Edges).AllocatorInstance.Data;
  local_res20 = pFVar14 + uVar12 * 8;
  do {
    while( true ) {
      pFVar4 = local_res20;
      if ((param_2->Edges).ArrayNum != (int)uVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UPCGEdge>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar14 == pFVar4) {
        return;
      }
      lVar2 = *(longlong *)pFVar14;
      if ((lVar2 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Edge",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                             ,0x1b3,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (bVar5) {
        puVar13 = (undefined8 *)(lVar2 + 0x48);
      }
      else {
        puVar13 = (undefined8 *)(lVar2 + 0x50);
      }
      pUVar9 = (UPCGPin *)*puVar13;
      if ((pUVar9 == (UPCGPin *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("OtherOriginalPin",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                             ,0x1b5,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = (pUVar9->Node).field0_0x0.DebugPtr;
      if ((this_00 == (UPCGNode *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("OtherOriginalNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                             ,0x1b8,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar8 = TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
                       *)&this->OriginalToNewNodesMapping,this_00);
      if ((pTVar8 == (TTuple<UPCGNode_const_*,UPCGNode_*> *)0x0) ||
         (param_1 = local_res10, &pTVar8->field_0x8 == (undefined1 *)0x0)) break;
      if (bVar5) {
        bVar6 = UPCGPin::IsOutputPin(pUVar9);
        if ((!bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("OtherOriginalPin->IsOutputPin()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                               ,0x1bf,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar9 = UPCGNode::GetOutputPin
                           (*(UPCGNode **)&pTVar8->field_0x8,&(pUVar9->Properties).Label);
        if ((pUVar9 == (UPCGPin *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("OtherNewPin",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                               ,0x1c1,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UPCGPin::AddEdgeTo(pUVar9,pUVar7,
                           (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)
                           0x0);
        uVar12 = (ulonglong)local_res18;
        pFVar14 = pFVar14 + 8;
        param_1 = local_res10;
      }
      else {
LAB_149d60daa:
        pFVar14 = pFVar14 + 8;
        uVar12 = (ulonglong)local_res18;
        param_1 = local_res10;
      }
    }
    pUVar10 = UPCGNode::GetSettings(this_00);
    if (pUVar10 == (UPCGSettings *)0x0) {
LAB_149d60d61:
      pUVar10 = UPCGNode::GetSettings(param_1);
      if (pUVar10 != (UPCGSettings *)0x0) {
        pUVar11 = Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister();
        iVar1 = (int)pUVar11->_padding_;
        if ((iVar1 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar11->_padding_)) goto LAB_149d60daa;
      }
      ConnectPinsBetweenSubgraphBoundaries(this,param_2,pUVar7,pUVar9,bVar5);
      goto LAB_149d60daa;
    }
    pUVar11 = Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister();
    iVar1 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar11->_padding_)) goto LAB_149d60d61;
    HandleExternalGraphParameterGetter(this,param_2,pUVar7,pUVar9);
    uVar12 = (ulonglong)local_res18;
    pFVar14 = pFVar14 + 8;
    param_1 = local_res10;
  } while( true );
}

// SetNewGraphAndUpdatePositions @ 149d638a0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
PCGSubgraphHelpersExtra::FCollapsingInformation::SetNewGraphAndUpdatePositions
          (FCollapsingInformation *this,UPCGGraph *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (UPCGGraph *)0x0) {
    this->NewGraph = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InNewGraph",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                     ,0xc2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->NewGraph = (UPCGGraph *)0x0;
  return;
}

// ValidateCollapseIsNotIntroducingCycle @ 149d67530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
PCGSubgraphHelpersExtra::FCollapsingInformation::ValidateCollapseIsNotIntroducingCycle
          (FCollapsingInformation *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  UPCGNode *pUVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  ulonglong uVar14;
  ForElementType<FSetElementId> FVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  ForElementType<unsigned_int> FVar21;
  longlong *plVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  longlong *plVar28;
  bool bVar29;
  undefined1 auStackY_208 [32];
  uint local_1d8;
  undefined1 local_1d4;
  undefined1 local_1d3;
  undefined1 local_1d2 [2];
  uint local_1d0;
  longlong *local_1c8;
  uint local_1c0;
  uint uStack_1bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b8;
  undefined4 local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  <lambda_1> local_1a0;
  int local_190;
  undefined8 local_18c;
  undefined1 local_184 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_178;
  longlong *local_158;
  uint uStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  uint local_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  undefined4 local_dc;
  undefined1 local_d8 [32];
  ForElementType<unsigned_int> local_b8;
  uint local_b0;
  uint local_ac;
  int local_a8;
  int local_a4;
  FScriptContainerElement local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar18 = (this->ValidNodesToCollapse).ArrayNum;
  pFVar20 = (this->ValidNodesToCollapse).AllocatorInstance.Data;
  if (((int)uVar18 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  uVar14 = 0;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (ForElementType<unsigned_int>)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = -1;
  local_a4 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  uVar25 = 0;
  uVar24 = uVar14;
  if (uVar18 == 0) goto LAB_149d67818;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_d8,uVar18);
  uVar17 = 1;
  if (3 < uVar18) {
    uVar24 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1d0 = (uint)lVar13;
    uVar17 = 1 << ((byte)lVar13 & 0x1f);
  }
  if ((local_90 == 0) || ((int)local_90 < (int)uVar17)) {
    local_90 = uVar17;
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
    }
    if (uVar17 != 0) {
      uVar23 = uVar17;
      if (uVar17 < 2) {
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          uVar23 = 0;
          goto LAB_149d6765c;
        }
      }
      else {
LAB_149d6765c:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar23,4);
      }
      if (0 < (int)uVar17) {
        uVar26 = (ulonglong)uVar17;
        uVar24 = uVar14;
        do {
          FVar12.Data = local_a0;
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            FVar12.Data = local_98.Data;
          }
          uVar11 = uVar24 & (longlong)(int)uVar17 - 1U;
          uVar24 = uVar24 + 1;
          *(undefined4 *)(FVar12.Data + uVar11 * 4) = 0xffffffff;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
    }
    if (local_90 != 0) {
      uVar24 = (ulonglong)local_b0;
      pTStack_1b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
      local_1c0 = 0;
      uStack_1bc = 1;
      uStack_1ac = 0;
      uStack_1a8 = 0;
      uVar26 = uVar14;
      if (local_b0 != 0) {
        FVar21 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
        if (local_b8 != (ForElementType<unsigned_int>)0x0) {
          FVar21 = local_b8;
        }
        uVar17 = *(uint *)FVar21;
        uVar11 = uVar14;
        while (uVar17 == 0) {
          uStack_1a8 = (int)uVar11 + 0x20;
          uVar11 = (ulonglong)uStack_1a8;
          iVar19 = (int)uVar26;
          local_1c0 = iVar19 + 1;
          uVar26 = (ulonglong)local_1c0;
          if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1c0)
          goto LAB_149d67750;
          uVar17 = ((uint *)((longlong)FVar21 + 4))[iVar19];
        }
        uStack_1bc = -uVar17 & uVar17;
        uVar26 = (ulonglong)uStack_1bc * 2 + 1;
        lVar13 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_190 = (int)lVar13;
        uStack_1ac = (uStack_1a8 - 1) + local_190;
        uVar26 = (ulonglong)uStack_1ac;
        if ((int)local_b0 < (int)uStack_1ac) {
LAB_149d67750:
          uVar26 = (ulonglong)local_b0;
          uStack_1ac = local_b0;
        }
      }
      local_1b0 = 0xffffffff;
      local_184._4_8_ = local_d8;
      local_178._padding_ = CONCAT44(uStack_1bc,local_1c0);
      local_178.CurrentBitIndex = uStack_1ac;
      local_178.UnvisitedBitMask = 0xffffffff;
      local_178._28_4_ = uStack_1a4;
      local_178.BaseBitIndex = uStack_1a8;
      local_178.Array = pTStack_1b8;
      if ((int)local_b0 <= (int)uVar26) goto LAB_149d67818;
      do {
        puVar27 = (ulonglong *)((longlong)(int)uVar26 * 0x10 + *(longlong *)local_184._4_8_);
        uVar17 = ((uint)(*puVar27 >> 0x14) & 0xffff ^ (uint)(*puVar27 >> 4)) * -0x7a143595;
        uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
        uVar17 = (uVar17 >> 0x10 ^ uVar17) & local_90 - 1;
        *(uint *)((longlong)puVar27 + 0xc) = uVar17;
        FVar12.Data = local_a0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_98.Data;
        }
        uVar24 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(puVar27 + 1) = *(undefined4 *)(FVar12.Data + uVar24 * 4);
        *(int *)(FVar12.Data + uVar24 * 4) = (int)uVar26;
        local_178.UnvisitedBitMask = local_178.UnvisitedBitMask & ~local_178._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_178);
        uVar26 = (ulonglong)(uint)local_178.CurrentBitIndex;
      } while (local_178.CurrentBitIndex < (local_178.Array)->NumBits);
    }
  }
  uVar24 = (ulonglong)local_b0;
LAB_149d67818:
  pFVar1 = pFVar20 + (longlong)(int)uVar18 * 8;
  if (pFVar20 != pFVar1) {
    do {
      TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator>::
      Emplace<UPCGNode_*_const_&>
                ((TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)local_d8,
                 (UPCGNode **)&local_18c,(bool *)pFVar20);
      pFVar20 = pFVar20 + 8;
    } while (pFVar20 != pFVar1);
    uVar24 = (ulonglong)local_b0;
  }
  local_1d8 = (uint)uVar24;
  uStack_13c = uVar25;
  local_138 = uVar25;
  uStack_14c = 1;
  if (local_1d8 != 0) {
    FVar21 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
    if (local_b8 != (ForElementType<unsigned_int>)0x0) {
      FVar21 = local_b8;
    }
    uVar18 = *(uint *)FVar21;
    uVar26 = uVar14;
    local_138 = 0;
    uVar25 = 0;
    while (uVar18 == 0) {
      iVar19 = (int)uVar14;
      local_138 = (int)uVar26 + 0x20;
      uVar26 = (ulonglong)local_138;
      uVar25 = iVar19 + 1;
      uVar14 = (ulonglong)uVar25;
      uStack_13c = local_1d8;
      if ((int)((local_1d8 - 1) + ((int)(local_1d8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar25)
      goto LAB_149d678c1;
      uVar18 = ((uint *)((longlong)FVar21 + 4))[iVar19];
    }
    uStack_14c = -uVar18 & uVar18;
    uVar14 = (ulonglong)uStack_14c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_18c._4_4_ = (int)lVar13;
    uStack_13c = (local_138 - 1) + local_18c._4_4_;
    if ((int)local_1d8 < (int)uStack_13c) {
      uStack_13c = local_1d8;
    }
  }
LAB_149d678c1:
  local_158 = (longlong *)local_d8;
  uStack_134 = local_dc;
  local_148 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  uVar18 = local_1d8 & 0xffffffe0;
  iStack_130 = local_d8._8_4_ - local_a4;
  uStack_140 = 0xffffffff;
  TStack_120.CurrentBitIndex = uStack_13c;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_14c,uVar25);
  iVar19 = (int)local_1d8 >> 5;
  TStack_120._28_4_ = local_dc;
  TStack_120.BaseBitIndex = local_138;
  uStack_100 = CONCAT44(uStack_12c,iStack_130);
  uVar14 = uVar24;
  uStack_150 = uVar25;
  local_128 = local_158;
  TStack_120.Array = local_148;
  if ((int)local_1d8 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    uVar14 = (ulonglong)local_b0;
  }
  uVar25 = (uint)uVar14;
  if (local_1d8 != uVar25) {
    FVar21 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
    if (local_b8 != (ForElementType<unsigned_int>)0x0) {
      FVar21 = local_b8;
    }
    uVar17 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)((longlong)FVar21 + (longlong)iVar19 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar19;
      uVar18 = uVar18 + 0x20;
      iVar19 = iVar19 + 1;
      uVar24 = uVar14;
      local_1d8 = uVar25;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_149d679d0;
      uVar17 = ((uint *)((longlong)FVar21 + 4))[lVar13];
    }
    uVar24 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar18 = (uVar18 - 1) + (int)lVar13;
    uVar24 = (ulonglong)uVar18;
    if ((int)uVar25 < (int)uVar18) {
      uVar24 = uVar14;
    }
    local_1d8 = (uint)uVar24;
  }
LAB_149d679d0:
  do {
    plVar3 = local_128;
    if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
      `TSparseArray<TSparseSetElement<UPCGNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1d4);
    }
    if (((TStack_120.CurrentBitIndex == (int)uVar24) &&
        (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
       (plVar3 == (longlong *)local_d8)) {
      bVar8 = true;
LAB_149d67d99:
      local_90 = 0;
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
      bVar29 = local_d8._12_4_ != 0;
      local_d8._8_8_ = (ulonglong)(uint)local_d8._12_4_ << 0x20;
      if (bVar29) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
      }
      local_a8 = -1;
      local_a4 = 0;
      local_b0 = 0;
      if (0x80 < local_ac) {
        local_ac = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
      }
      if (local_b8 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_b8);
      }
      if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_d8._0_8_);
      }
      return bVar8;
    }
    plVar3 = *(longlong **)(*plVar3 + (longlong)TStack_120.CurrentBitIndex * 0x10);
    if (plVar3 != (longlong *)0x0) {
      local_1a0.NodesToCollapse =
           (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)local_d8;
      local_88._0_8_ = (FScriptContainerElement *)0x0;
      local_1a0.SeenNodes =
           (TSet<UPCGNode_const_*,DefaultKeyFuncs<UPCGNode_const_*,0>,FDefaultSetAllocator> *)
           local_88;
      local_88._8_8_ = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_5c = 0x80;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = (ForElementType<FSetElementId>)0x0;
      local_40 = 0;
      local_1c8 = plVar3;
      TSet<UPCGNode_const_*,DefaultKeyFuncs<UPCGNode_const_*,0>,FDefaultSetAllocator>::
      Emplace<UPCGNode_const_*_const_&>
                ((TSet<UPCGNode_const_*,DefaultKeyFuncs<UPCGNode_const_*,0>,FDefaultSetAllocator> *)
                 local_88,(UPCGNode **)local_184,(bool *)&local_1c8);
      local_1d0 = *(uint *)(plVar3 + 0x10);
      uVar14 = (ulonglong)(int)local_1d0;
      plVar28 = (longlong *)plVar3[0xf];
      plVar16 = plVar28 + uVar14;
      local_1c8 = plVar16;
      while( true ) {
        if ((int)plVar3[0x10] != (int)uVar14) {
          `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_1d3);
        }
        if (plVar28 == plVar16) break;
        lVar13 = *plVar28;
        if (lVar13 != 0) {
          plVar22 = *(longlong **)(lVar13 + 0x38);
          iVar19 = *(int *)(lVar13 + 0x40);
          plVar2 = plVar22 + iVar19;
          while( true ) {
            if (*(int *)(lVar13 + 0x40) != iVar19) {
              `TCheckedPointerIterator<TObjectPtr<UPCGEdge>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_1d2);
            }
            plVar16 = local_1c8;
            if (plVar22 == plVar2) break;
            if ((*plVar22 != 0) && (lVar4 = *(longlong *)(*plVar22 + 0x50), lVar4 != 0)) {
              pUVar5 = *(UPCGNode **)(lVar4 + 0x28);
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                if (pUVar5 == (UPCGNode *)0x0) goto LAB_149d67bdb;
                UE::GC::MarkAsReachable((UObject *)pUVar5);
              }
              if (pUVar5 != (UPCGNode *)0x0) {
                uVar18 = ((uint)((ulonglong)pUVar5 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)pUVar5 >> 4)) * -0x7a143595;
                uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
                if (*(int *)&((local_1a0.NodesToCollapse)->Elements).field_0x8 !=
                    *(int *)&((local_1a0.NodesToCollapse)->Elements).field_0x34) {
                  FVar6 = ((local_1a0.NodesToCollapse)->Hash).SecondaryData;
                  FVar15 = (ForElementType<FSetElementId>)&(local_1a0.NodesToCollapse)->Hash;
                  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
                    FVar15 = FVar6;
                  }
                  iVar10 = *(int *)((longlong)FVar15 +
                                   (ulonglong)
                                   ((local_1a0.NodesToCollapse)->HashSize - 1U &
                                   (uVar18 >> 0x10 ^ uVar18)) * 4);
                  if (iVar10 != -1) {
                    do {
                      if (*(UPCGNode **)
                           (*(longlong *)&(local_1a0.NodesToCollapse)->Elements +
                           (longlong)iVar10 * 0x10) == pUVar5) goto LAB_149d67bba;
                      iVar10 = *(int *)(*(longlong *)&(local_1a0.NodesToCollapse)->Elements + 8 +
                                       (longlong)iVar10 * 0x10);
                    } while (iVar10 != -1);
                  }
                }
                iVar10 = -1;
LAB_149d67bba:
                bVar8 = `PCGSubgraphHelpersExtra::FCollapsingInformation::
                        ValidateCollapseIsNotIntroducingCycle'::__l6::<lambda_1>::
                        operator()<_PCGSubgraphHelpersExtra::FCollapsingInformation::ValidateCollapseIsNotIntroducingCycle_::__l6::<lambda_1>_&>
                                  (&local_1a0,pUVar5,iVar10 != -1,&local_1a0);
                if (!bVar8) {
                  local_40 = 0;
                  if (local_48 != (ForElementType<FSetElementId>)0x0) {
                    FMemory::Free((void *)local_48);
                  }
                  iVar19 = SUB84(local_88._8_8_,4);
                  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
                  if (iVar19 != 0) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
                  }
                  local_58 = 0xffffffff;
                  local_54 = 0;
                  local_60 = 0;
                  if (0x80 < local_5c) {
                    local_5c = 0x80;
                    TBitArray<FDefaultBitArrayAllocator>::Realloc
                              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
                  }
                  if (local_68 != (void *)0x0) {
                    FMemory::Free(local_68);
                  }
                  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
                    FMemory::Free((void *)local_88._0_8_);
                  }
                  bVar8 = false;
                  goto LAB_149d67d99;
                }
              }
            }
LAB_149d67bdb:
            plVar22 = plVar22 + 1;
          }
        }
        uVar14 = (ulonglong)local_1d0;
        plVar28 = plVar28 + 1;
      }
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      iVar19 = SUB84(local_88._8_8_,4);
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if (iVar19 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_58 = 0xffffffff;
      local_54 = 0;
      local_60 = 0;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      uVar24 = (ulonglong)local_1d8;
    }
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  } while( true );
}

