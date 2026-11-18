// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 14a0037a0

EAutomationTestFlags __thiscall
FPCGCollapseSubgraphWithParams::GetTestFlags(FPCGCollapseSubgraphWithParams *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a0037b0

bool __thiscall FPCGCollapseSubgraphWithParams::IsStressTest(FPCGCollapseSubgraphWithParams *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a0037c0

uint __thiscall
FPCGCollapseSubgraphWithParams::GetRequiredDeviceNum(FPCGCollapseSubgraphWithParams *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a0037d0

FString * __thiscall
FPCGCollapseSubgraphWithParams::GetTestSourceFileName
          (FPCGCollapseSubgraphWithParams *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a003800

int __thiscall
FPCGCollapseSubgraphWithParams::GetTestSourceFileLine(FPCGCollapseSubgraphWithParams *this)

{
  return 0x16;
}

// GetTests @ 14a003810

/* WARNING: Removing unreachable block (ram,0x00014a0038fd) */
/* WARNING: Removing unreachable block (ram,0x00014a0039c8) */

void __thiscall
FPCGCollapseSubgraphWithParams::GetTests
          (FPCGCollapseSubgraphWithParams *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.Subgraph.Collapse.WithParams");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14a0039f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

bool __thiscall
FPCGCollapseSubgraphWithParams::RunTest(FPCGCollapseSubgraphWithParams *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  FName FVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  UObject *pUVar16;
  UPCGGraph *this_00;
  UScriptStruct *pUVar17;
  FInstancedPropertyBag *pFVar18;
  UPCGNode *pUVar19;
  <lambda_1> this_01;
  <lambda_2> this_02;
  UPCGGraph *pUVar20;
  UPCGPin *pUVar21;
  TObjectPtr<UPCGEdge> *pTVar22;
  FPropertyBagPropertyDesc *pFVar23;
  TValueOrError<float,EPropertyBagResult> TVar24;
  UScriptStruct *pUVar25;
  FName *pFVar26;
  FScriptContainerElement *pFVar27;
  longlong lVar28;
  ForAnyElementType FVar29;
  ulonglong uVar30;
  double *pdVar31;
  undefined1 auStackY_2c8 [32];
  FName local_288;
  FName local_280;
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> local_278;
  TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> local_268;
  undefined8 local_258;
  undefined8 local_250;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_248;
  UPCGSurfaceSamplerSettings *local_238;
  FName local_230;
  FName local_228;
  FString local_220;
  undefined1 local_210;
  undefined7 uStack_20f;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  double local_160;
  double dStack_158;
  double local_150;
  FConstStructView local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FName local_108;
  FName local_100;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  UPCGNode *local_b8;
  UPCGNode *pUStack_b0;
  UPCGNode *local_a8;
  TValueOrError<FStructView,EPropertyBagResult> local_a0;
  undefined1 local_88 [8];
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  pUVar16 = GetTransientPackageAsObject();
  this_00 = NewObject<UPCGGraph>(pUVar16);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transient);
  ::FName::FName(&local_288,L"FloatParam");
  ::FName::FName(&local_280,L"VectorParam");
  local_160 = ___xmm_40000000000000003ff0000000000000;
  dStack_158 = _UNK_150744178;
  local_150 = __real_4008000000000000;
  local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.ArrayNum = 0;
  local_278.ArrayMax = 0;
  iVar15 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x840,&local_278.AllocatorInstance,&local_278.ArrayMax);
  lVar28 = (longlong)iVar15 * 0x40;
  *(undefined8 *)(local_278.AllocatorInstance.Data + lVar28) = 0;
  *(undefined8 *)(local_278.AllocatorInstance.Data + lVar28 + 8) = 0;
  *(undefined8 *)(local_278.AllocatorInstance.Data + lVar28 + 0x10) = 0;
  *(FName *)(local_278.AllocatorInstance.Data + lVar28 + 0x18) = local_288;
  *(undefined4 *)(local_278.AllocatorInstance.Data + lVar28 + 0x20) = 5;
  *(undefined8 *)(local_278.AllocatorInstance.Data + lVar28 + 0x28) = 1;
  *(undefined8 *)(local_278.AllocatorInstance.Data + lVar28 + 0x30) = 0;
  *(undefined4 *)(local_278.AllocatorInstance.Data + lVar28 + 0x38) = 0xffffffff;
  local_278.ArrayNum = iVar15 + 1;
  pUVar17 = TBaseStructure<UE::Math::TVector<double>_>::Get();
  if (local_278.ArrayNum == local_278.ArrayMax) {
    local_278.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x840,&local_278.AllocatorInstance,&local_278.ArrayMax);
  }
  FVar29.Data = local_278.AllocatorInstance.Data;
  FVar9 = local_280;
  lVar28 = (longlong)local_278.ArrayNum * 0x40;
  local_278.ArrayNum = local_278.ArrayNum + 1;
  *(UScriptStruct **)(local_278.AllocatorInstance.Data + lVar28) = pUVar17;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  *(undefined8 *)(FVar29.Data + lVar28 + 8) = 0;
  *(undefined8 *)(FVar29.Data + lVar28 + 0x10) = 0;
  *(FName *)(FVar29.Data + lVar28 + 0x18) = FVar9;
  *(undefined4 *)(FVar29.Data + lVar28 + 0x20) = 0xb;
  *(undefined8 *)(FVar29.Data + lVar28 + 0x28) = 1;
  *(undefined8 *)(FVar29.Data + lVar28 + 0x30) = 0;
  *(undefined4 *)(FVar29.Data + lVar28 + 0x38) = 0xffffffff;
  UPCGGraph::AddUserParameters(this_00,&local_278,(UPCGGraph *)0x0);
  pFVar18 = (FInstancedPropertyBag *)(**(code **)(this_00->_padding_ + 0x2c0))(this_00);
  iVar15 = FInstancedPropertyBag::GetNumPropertiesInBag(pFVar18);
  ::FString::FString(&local_1f0,"Graph has 2 parameters");
  FVar29.Data = (FScriptContainerElement *)L"";
  if (local_1f0.Data.ArrayNum != 0) {
    FVar29.Data = local_1f0.Data.AllocatorInstance.Data;
  }
  bVar13 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,iVar15,2);
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  if (!bVar13) goto LAB_14a00443a;
  pFVar18 = (FInstancedPropertyBag *)(**(code **)(this_00->_padding_ + 0x2c0))(this_00);
  fVar8 = __real_3dcccccd;
  FInstancedPropertyBag::SetValueFloat(pFVar18,local_288,__real_3dcccccd);
  pFVar18 = (FInstancedPropertyBag *)(**(code **)(this_00->_padding_ + 0x2c0))(this_00);
  FVar9 = local_280;
  local_148.ScriptStruct = TBaseStructure<UE::Math::TVector<double>_>::Get();
  local_148.StructMemory = (uchar *)&local_160;
  FInstancedPropertyBag::SetValueStruct(pFVar18,FVar9,&local_148);
  local_238 = (UPCGSurfaceSamplerSettings *)0x0;
  pUVar19 = UPCGGraph::AddNodeOfType<UPCGSurfaceSamplerSettings,void>(this_00,&local_238);
  this_01.GetParameter1Node = PCGCollapseSubgraphTests::AddGetGraphParameterNode(this_00,local_288);
  this_02.GetParameter2Node = PCGCollapseSubgraphTests::AddGetGraphParameterNode(this_00,local_280);
  ::FName::FName(&local_230,L"Looseness");
  UPCGGraph::AddLabeledEdge(this_00,this_01.GetParameter1Node,&local_288,pUVar19,&local_230);
  ::FName::FName(&local_228,L"PointExtents");
  UPCGGraph::AddLabeledEdge(this_00,this_02.GetParameter2Node,&local_280,pUVar19,&local_228);
  bVar13 = false;
  local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.ArrayNum = 3;
  local_b8 = pUVar19;
  pUStack_b0 = this_01.GetParameter1Node;
  local_a8 = this_02.GetParameter2Node;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,3,0,&local_268.AllocatorInstance,3,&local_268.ArrayMax);
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(UPCGNode **)local_268.AllocatorInstance.Data = local_b8;
  *(UPCGNode **)(local_268.AllocatorInstance.Data + 8) = pUStack_b0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  *(UPCGNode **)(local_268.AllocatorInstance.Data + 0x10) = local_a8;
  pUVar20 = FPCGSubgraphHelpers::CollapseIntoSubgraph
                      (this_00,&local_268,&local_248,(UPCGGraph *)0x0);
  if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1e0,"Subgraph collapse succeeded");
  if (pUVar20 == (UPCGGraph *)0x0) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_138,L"Expected \'%s\' to be not null.");
    (*pcVar4)(this,&local_138,0);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    bVar13 = true;
  }
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  if (bVar13) {
LAB_14a004410:
    bVar13 = false;
  }
  else {
    iVar15 = (this_00->Nodes).ArrayNum;
    ::FString::FString(&local_1d0,"There are 3 node in the main graph");
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_1d0.Data.ArrayNum != 0) {
      FVar29.Data = local_1d0.Data.AllocatorInstance.Data;
    }
    bVar13 = FAutomationTestBase::TestEqual
                       ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,iVar15,3);
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
    if (!bVar13) goto LAB_14a004410;
    pFVar27 = (this_00->Nodes).AllocatorInstance.Data;
    pFVar1 = pFVar27 + (longlong)(this_00->Nodes).ArrayNum * 8;
    for (; pFVar27 != pFVar1; pFVar27 = pFVar27 + 8) {
      if (*(UPCGNode **)pFVar27 == this_01.GetParameter1Node) {
        bVar13 = true;
        goto LAB_14a003e74;
      }
    }
    bVar13 = false;
LAB_14a003e74:
    ::FString::FString(&local_1c0,"GetParam1 node is still in the main graph");
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_1c0.Data.ArrayNum != 0) {
      FVar29.Data = local_1c0.Data.AllocatorInstance.Data;
    }
    bVar13 = FAutomationTestBase::TestTrue
                       ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,bVar13);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    if (!bVar13) goto LAB_14a004410;
    pFVar27 = (this_00->Nodes).AllocatorInstance.Data;
    pFVar1 = pFVar27 + (longlong)(this_00->Nodes).ArrayNum * 8;
    for (; pFVar27 != pFVar1; pFVar27 = pFVar27 + 8) {
      if (*(UPCGNode **)pFVar27 == this_02.GetParameter2Node) {
        bVar13 = true;
        goto LAB_14a003eda;
      }
    }
    bVar13 = false;
LAB_14a003eda:
    ::FString::FString(&local_1b0,"GetParam2 node is still in the main graph");
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_1b0.Data.ArrayNum != 0) {
      FVar29.Data = local_1b0.Data.AllocatorInstance.Data;
    }
    bVar13 = FAutomationTestBase::TestTrue
                       ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,bVar13);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    if (!bVar13) goto LAB_14a004410;
    pUVar21 = UPCGNode::GetOutputPin(this_01.GetParameter1Node,&local_288);
    pTVar22 = TArray<TObjectPtr<UPCGEdge>,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGCollapseSubgraphWithParams::RunTest_::__l18::<lambda_1>_>
                        (&pUVar21->Edges,this_01);
    ::FString::FString(&local_1a0,"Edge between param 1 and subgraph exists");
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_1a0.Data.ArrayNum != 0) {
      FVar29.Data = local_1a0.Data.AllocatorInstance.Data;
    }
    bVar13 = FAutomationTestBase::TestTrue
                       ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,
                        pTVar22 != (TObjectPtr<UPCGEdge> *)0x0);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    if (!bVar13) goto LAB_14a004410;
    pUVar21 = UPCGNode::GetOutputPin(this_02.GetParameter2Node,&local_280);
    pTVar22 = TArray<TObjectPtr<UPCGEdge>,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGCollapseSubgraphWithParams::RunTest_::__l21::<lambda_2>_>
                        (&pUVar21->Edges,this_02);
    ::FString::FString(&local_190,"Edge between param 2 and subgraph exists");
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_190.Data.ArrayNum != 0) {
      FVar29.Data = local_190.Data.AllocatorInstance.Data;
    }
    bVar13 = FAutomationTestBase::TestTrue
                       ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,
                        pTVar22 != (TObjectPtr<UPCGEdge> *)0x0);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    if (!bVar13) goto LAB_14a004410;
    pFVar18 = (FInstancedPropertyBag *)(**(code **)(pUVar20->_padding_ + 0x2c0))(pUVar20);
    pFVar23 = FInstancedPropertyBag::FindPropertyDescByName(pFVar18,local_288);
    ::FString::FString(&local_180,"Subgraph has Param1 as parameter");
    if (pFVar23 == (FPropertyBagPropertyDesc *)0x0) {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_128,L"Expected \'%s\' to be not null.");
      (*pcVar4)(this,&local_128,0);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    if (bVar13) goto LAB_14a004410;
    pFVar18 = (FInstancedPropertyBag *)(**(code **)(pUVar20->_padding_ + 0x2c0))(pUVar20);
    pFVar23 = FInstancedPropertyBag::FindPropertyDescByName(pFVar18,local_280);
    ::FString::FString(&local_170,"Subgraph has Param2 as parameter");
    if (pFVar23 == (FPropertyBagPropertyDesc *)0x0) {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_118,L"Expected \'%s\' to be not null.");
      (*pcVar4)(this,&local_118,0);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (bVar13) goto LAB_14a004410;
    pFVar18 = (FInstancedPropertyBag *)(**(code **)(pUVar20->_padding_ + 0x2c0))(pUVar20);
    TVar24 = FInstancedPropertyBag::GetValueFloat(pFVar18,(FName)local_88);
    if ((*(char *)((longlong)TVar24.Variant + 4) != '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    fVar2 = *(float *)TVar24.Variant;
    ::FString::FString(&local_220,"Param1 has the right value");
    fVar7 = __real_38d1b717;
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_220.Data.ArrayNum != 0) {
      FVar29.Data = local_220.Data.AllocatorInstance.Data;
    }
    bVar13 = FAutomationTestBase::TestEqual
                       ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,fVar2,fVar8,
                        __real_38d1b717);
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
    dVar12 = local_150;
    dVar11 = dStack_158;
    dVar10 = local_160;
    if (!bVar13) goto LAB_14a004410;
    pFVar18 = (FInstancedPropertyBag *)(**(code **)(pUVar20->_padding_ + 0x2c0))(pUVar20);
    pUVar17 = TBaseStructure<UE::Math::TVector<double>_>::Get();
    FInstancedPropertyBag::GetValueStruct(pFVar18,&local_a0,local_280,pUVar17);
    uVar30 = local_a0.Variant._16_8_ & 0xff;
    if ((2 < uVar30) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar30 + 4) == '\0') {
      if ((local_a0.Variant.TypeIndex != '\x01') &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      local_210 = (undefined1)local_a0.Variant._padding_;
LAB_14a0042fc:
      bVar13 = true;
      pdVar31 = (double *)CONCAT71(uStack_20f,local_210);
    }
    else {
      if ((local_a0.Variant.TypeIndex != '\0') &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      pUVar17 = (UScriptStruct *)
                CONCAT71(local_a0.Variant._padding_._1_7_,(undefined1)local_a0.Variant._padding_);
      if (((double *)local_a0.Variant._padding_ == (double *)0x0) ||
         (pUVar17 == (UScriptStruct *)0x0)) {
LAB_14a0042f8:
        local_210 = 1;
        goto LAB_14a0042fc;
      }
      pUVar25 = TBaseStructure<UE::Math::TVector<double>_>::Get();
      if (pUVar17 != pUVar25) {
        pUVar25 = TBaseStructure<UE::Math::TVector<double>_>::Get();
        if (pUVar25 != (UScriptStruct *)0x0) {
          iVar15 = (int)pUVar25->_padding_;
          if (((int)pUVar17->_padding_ < iVar15) ||
             ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar15 * 8) !=
              &pUVar25->_padding_)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          if (bVar13) goto LAB_14a0042f4;
        }
        goto LAB_14a0042f8;
      }
LAB_14a0042f4:
      bVar13 = false;
      pdVar31 = (double *)local_a0.Variant._padding_;
    }
    if ((bVar13) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    dVar5 = *pdVar31;
    dVar6 = pdVar31[1];
    dVar3 = pdVar31[2];
    ::FString::FString(&local_200,"Param2 has the right value");
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_200.Data.ArrayNum != 0) {
      FVar29.Data = local_200.Data.AllocatorInstance.Data;
    }
    local_f8._s_0.X = dVar10;
    local_f8._s_0.Y = dVar11;
    local_f8._s_0.Z = dVar12;
    local_d8._s_0.X = dVar5;
    local_d8._s_0.Y = dVar6;
    local_d8._s_0.Z = dVar3;
    bVar13 = FAutomationTestBase::TestEqual
                       ((FAutomationTestBase *)this,(wchar_t *)FVar29.Data,
                        (TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_f8._s_0,fVar7);
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    if (!bVar13) goto LAB_14a004410;
    pFVar26 = ::FName::FName(&local_108,L"Looseness");
    local_258 = 0;
    bVar13 = PCGCollapseSubgraphTests::
             ValidateNodeAndEdge<UPCGUserParameterGetSettings,UPCGSurfaceSamplerSettings>
                       ((FPCGTestBaseClass *)this,pUVar20,(FName)0x0,*pFVar26);
    if (!bVar13) goto LAB_14a004410;
    pFVar26 = ::FName::FName(&local_100,L"PointExtents");
    local_250 = 0;
    bVar13 = PCGCollapseSubgraphTests::
             ValidateNodeAndEdge<UPCGUserParameterGetSettings,UPCGSurfaceSamplerSettings>
                       ((FPCGTestBaseClass *)this,pUVar20,(FName)0x0,*pFVar26);
    if (!bVar13) goto LAB_14a004410;
    bVar13 = true;
  }
  if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
LAB_14a00443a:
  if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.AllocatorInstance.Data);
  }
  return bVar13;
}

// GetBeautifiedTestName @ 14a0044a0

FString * __thiscall
FPCGCollapseSubgraphWithParams::GetBeautifiedTestName
          (FPCGCollapseSubgraphWithParams *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Subgraph.Collapse.WithParams");
  return __return_storage_ptr__;
}

