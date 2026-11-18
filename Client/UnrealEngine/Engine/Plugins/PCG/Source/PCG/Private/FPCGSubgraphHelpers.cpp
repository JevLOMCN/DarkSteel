// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// CollapseIntoSubgraph @ 149d40610

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPCGGraph * __cdecl
FPCGSubgraphHelpers::CollapseIntoSubgraph
          (UPCGGraph *param_1,TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_3,UPCGGraph *param_4)

{
  UPCGGraph *pUVar1;
  FText local_18;
  
  FText::FText(&local_18);
  pUVar1 = CollapseIntoSubgraphWithReason(param_1,param_2,param_3,&local_18,param_4);
  if ((pUVar1 == (UPCGGraph *)0x0) && (2 < (byte)LogPCG._0_1_)) {
    FText::ToString(&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return pUVar1;
}

// CollapseIntoSubgraphWithReason @ 149d406c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

UPCGGraph * __cdecl
FPCGSubgraphHelpers::CollapseIntoSubgraphWithReason
          (UPCGGraph *param_1,TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_3,FText *param_4,UPCGGraph *param_5)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FText *pFVar4;
  FInstancedPropertyBag *pFVar5;
  UPCGGraph *pUVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  TObjectPtr<UPCGNode> TVar9;
  longlong *plVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  undefined1 auStack_358 [32];
  <lambda_1> local_338 [8];
  UPCGNode *local_330;
  longlong local_328;
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> local_320;
  TPairInitializer<UPCGNode_*_&,UPCGNode_*_&> local_310;
  longlong *local_300;
  undefined1 local_2f8 [24];
  FText local_2e0;
  FText local_2d0;
  FText local_2c0;
  undefined1 local_2a8 [128];
  FCollapsingInformation local_228;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_358;
  if (param_1 == (UPCGGraph *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)(local_2f8 + 8),L"PCGSubgraphHelpers",L"InvalidGraph",
                        L"Original Graph is invalid.");
    FText::operator=(param_4,pFVar4);
LAB_149d4075e:
    if ((ITextData *)local_2f8._8_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_2f8._8_8_ + 0x10))();
    }
    return (UPCGGraph *)0x0;
  }
  if (param_2->ArrayNum < 2) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_2e0,L"PCGSubgraphHelpers",L"CollapseLessThanTwoNodes",
                        L"Try to collapse less than 2 nodes.");
    FText::operator=(param_4,pFVar4);
    local_2f8._8_8_ = local_2e0.TextData.Reference;
    goto LAB_149d4075e;
  }
  pFVar5 = (FInstancedPropertyBag *)(**(code **)(param_1->_padding_ + 0x2c0))();
  if ((pFVar5 == (FInstancedPropertyBag *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x2ff,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pUVar6 = (UPCGGraph *)(*pcVar1)();
    return pUVar6;
  }
  PCGSubgraphHelpersExtra::FCollapsingInformation::CreateAndInitialize
            (&local_228,param_2,pFVar5,param_1);
  if (local_228.ValidNodesToCollapse.ArrayNum < 2) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_2d0,L"PCGSubgraphHelpers",L"ValidLessThanTwoNodes",
                        L"There were less than 2 PCG nodes selected, abort");
    FText::operator=(param_4,pFVar4);
  }
  else {
    bVar3 = PCGSubgraphHelpersExtra::FCollapsingInformation::ValidateCollapseIsNotIntroducingCycle
                      (&local_228);
    if (bVar3) {
      if (param_5 == (UPCGGraph *)0x0) {
        pUVar7 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar7,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar8 = Z_Construct_UClass_UPCGGraph_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_2a8,pUVar8);
        local_2a8._8_8_ = pUVar7;
        param_5 = (UPCGGraph *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2a8);
        if (local_2a8._64_8_ != 0) {
          plVar10 = (longlong *)(local_2a8 + 0x50);
          if ((longlong *)local_2a8._104_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_2a8._104_8_;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if ((param_5 == (UPCGGraph *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InNewGraph",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                               ,0xc2,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          pUVar6 = (UPCGGraph *)(*pcVar1)();
          return pUVar6;
        }
      }
      local_228.NewGraph = param_5;
      if (((local_228.OriginalGraph == (UPCGGraph *)0x0) || (param_5 == (UPCGGraph *)0x0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("OriginalGraph && NewGraph",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                             ,0xd1,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pUVar6 = (UPCGGraph *)(*pcVar1)();
        return pUVar6;
      }
      local_320.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_320.ArrayNum = 0;
      local_320.ArrayMax = 0;
      Algo::
      Transform<TMap<FPropertyBagPropertyDesc_const_*,UPCGNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPropertyBagPropertyDesc_const_*,UPCGNode_*,0>_>,TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_>_&,_PCGSubgraphHelpersExtra::FCollapsingInformation::AddDiscoveredGraphParameters_::__l2::<lambda_1>_>
                (&local_228.GraphParametersDescToNodeGetters,&local_320,local_338[0]);
      UPCGGraph::AddUserParameters(local_228.NewGraph,&local_320,local_228.OriginalGraph);
      if (local_320.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.AllocatorInstance.Data);
      }
      if ((local_228.NewGraph == (UPCGGraph *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewGraph",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                             ,0xd9,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pUVar6 = (UPCGGraph *)(*pcVar1)();
        return pUVar6;
      }
      iVar2 = local_228.ValidNodesToCollapse.ArrayNum;
      lVar12 = (longlong)local_228.ValidNodesToCollapse.ArrayNum;
      FVar11.Data = local_228.ValidNodesToCollapse.AllocatorInstance.Data;
      while( true ) {
        if (local_228.ValidNodesToCollapse.ArrayNum != iVar2) {
          local_338[0] = (<lambda_1>)0x0;
          `TCheckedPointerIterator<UPCGNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_338);
        }
        if (FVar11.Data == local_228.ValidNodesToCollapse.AllocatorInstance.Data + lVar12 * 8)
        break;
        local_330 = *(UPCGNode **)FVar11.Data;
        if ((local_330 == (UPCGNode *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("PCGNode",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                               ,0xdc,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          pUVar6 = (UPCGGraph *)(*pcVar1)();
          return pUVar6;
        }
        TVar9 = UPCGGraph::ReconstructNewNode(local_228.NewGraph,(UPCGNode *)local_2f8);
        local_328 = *(longlong *)TVar9.field0_0x0;
        if ((local_328 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewNode",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                               ,0xe0,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          pUVar6 = (UPCGGraph *)(*pcVar1)();
          return pUVar6;
        }
        *(FName *)(local_328 + 0x28) = local_330->NodeTitle;
        local_310.Value = &local_330;
        local_300 = &local_328;
        TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UPCGNode_*_&,UPCGNode_*_&>_>
                  ((TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
                    *)&local_228.OriginalToNewNodesMapping,&local_310,(bool *)&local_310.Value);
        FVar11.Data = FVar11.Data + 8;
      }
      PCGSubgraphHelpersExtra::FCollapsingInformation::ReconnectAllNodes(&local_228);
      PCGSubgraphHelpersExtra::FCollapsingInformation::CleanUpOriginalEdges(&local_228);
      PCGSubgraphHelpersExtra::FCollapsingInformation::DeleteNodes(&local_228,param_3);
      PCGSubgraphHelpersExtra::FCollapsingInformation::CreateSubgraphNodeAndConnectRemainingPins
                (&local_228);
      goto LAB_149d40a9f;
    }
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_2c0,L"PCGSubgraphHelpers",L"CycleDetected",
                        L"Collapsing would introduce a cycle (A -> B -> C situation when we try to collapse A and C, B would be connected to both ends). Abort."
                       );
    FText::operator=(param_4,pFVar4);
    local_2d0.TextData.Reference = local_2c0.TextData.Reference;
  }
  if ((FName)local_2d0.TextData.Reference != (FName)0x0) {
    (**(code **)((longlong)*local_2d0.TextData.Reference + 0x10))();
  }
  param_5 = (UPCGGraph *)0x0;
LAB_149d40a9f:
  PCGSubgraphHelpersExtra::FCollapsingInformation::~FCollapsingInformation(&local_228);
  return param_5;
}

// SpawnNodeAndConnect @ 149d65e20

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGNode * __cdecl
FPCGSubgraphHelpers::SpawnNodeAndConnect
          (UPCGGraph *param_1,UPCGPin *param_2,UPCGPin *param_3,TSubclassOf<UPCGSettings> param_4,
          TFunction<bool___cdecl(UPCGSettings_*)> *param_5)

{
  int iVar1;
  longlong lVar2;
  UPCGNode *this;
  UPCGNode *pUVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  UClass *pUVar7;
  UPCGNode *pUVar8;
  undefined8 uVar9;
  longlong *plVar10;
  UObject *local_res8;
  UPCGSettings *local_res20;
  
  if ((((param_1 != (UPCGGraph *)0x0) && (param_2 != (UPCGPin *)0x0)) && (param_3 != (UPCGPin *)0x0)
      ) && ((lVar2 = *(longlong *)param_4.Class.field0_0x0, lVar2 != 0 &&
            (pUVar7 = Z_Construct_UClass_UPCGSettings_NoRegister(), pUVar7 != (UClass *)0x0)))) {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (*(longlong *)param_4.Class.field0_0x0 != 0)) goto LAB_149d65ea8;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("InGraph && InUpstreamPin && InDownstreamPin && InSettingsClass",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                     ,0x334,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UPCGNode *)(*pcVar4)();
    return pUVar8;
  }
LAB_149d65ea8:
  local_res8 = *(UObject **)param_4.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pUVar8 = UPCGGraph::AddNodeOfType(param_1,(TSubclassOf<UPCGSettings>)&local_res8,&local_res20);
  if (pUVar8 != (UPCGNode *)0x0) {
    if (*(void **)param_5 != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)param_5);
      pcVar4 = *(code **)param_5;
      plVar10 = (longlong *)&param_5->field_0x10;
      if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
        plVar10 = *(longlong **)&param_5->field_0x28;
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      cVar6 = (*pcVar4)(uVar9);
      if (cVar6 != '\0') {
        UPCGNode::UpdateAfterSettingsChangeDuringCreation(pUVar8);
      }
    }
    this = (param_2->Node).field0_0x0.DebugPtr;
    pUVar3 = (param_3->Node).field0_0x0.DebugPtr;
    if (((this == (UPCGNode *)0x0) || (pUVar3 == (UPCGNode *)0x0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("UpstreamNode && DownstreamNode",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                           ,0x341,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UPCGNode *)(*pcVar4)();
      return pUVar8;
    }
    iVar1 = (pUVar8->InputPins).ArrayNum;
    if (iVar1 == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2608592251726593195>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x355,"!NewNode->GetInputPins().IsEmpty()");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UPCGNode *)(*pcVar4)();
        return pUVar8;
      }
    }
    else {
      if ((iVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UPCGNode *)(*pcVar4)();
        return pUVar8;
      }
      if ((*(longlong *)(pUVar8->InputPins).AllocatorInstance.Data == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewNode->GetInputPins()[0]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                             ,0x357,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UPCGNode *)(*pcVar4)();
        return pUVar8;
      }
      if (((pUVar8->InputPins).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UPCGNode *)(*pcVar4)();
        return pUVar8;
      }
      UPCGNode::AddEdgeTo(this,(param_2->Properties).Label,pUVar8,
                          *(FName *)(*(longlong *)(pUVar8->InputPins).AllocatorInstance.Data + 0x48)
                         );
    }
    iVar1 = (pUVar8->OutputPins).ArrayNum;
    if (iVar1 == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2608592251726593188>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                         ,0x35c,"!NewNode->GetOutputPins().IsEmpty()");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UPCGNode *)(*pcVar4)();
        return pUVar8;
      }
    }
    else {
      if ((iVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UPCGNode *)(*pcVar4)();
        return pUVar8;
      }
      if ((*(longlong *)(pUVar8->OutputPins).AllocatorInstance.Data == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewNode->GetOutputPins()[0]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSubgraphHelpers.cpp"
                             ,0x35e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UPCGNode *)(*pcVar4)();
        return pUVar8;
      }
      if (((pUVar8->OutputPins).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UPCGNode *)(*pcVar4)();
        return pUVar8;
      }
      UPCGNode::AddEdgeTo(pUVar8,*(FName *)(*(longlong *)(pUVar8->OutputPins).AllocatorInstance.Data
                                           + 0x48),pUVar3,(param_3->Properties).Label);
    }
  }
  return pUVar8;
}

