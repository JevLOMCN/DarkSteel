// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 14a002b60

EAutomationTestFlags __thiscall
FPCGCollapseSubgraphSimple::GetTestFlags(FPCGCollapseSubgraphSimple *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a002b70

bool __thiscall FPCGCollapseSubgraphSimple::IsStressTest(FPCGCollapseSubgraphSimple *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a002b80

uint __thiscall FPCGCollapseSubgraphSimple::GetRequiredDeviceNum(FPCGCollapseSubgraphSimple *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a002b90

FString * __thiscall
FPCGCollapseSubgraphSimple::GetTestSourceFileName
          (FPCGCollapseSubgraphSimple *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a002bc0

int __thiscall FPCGCollapseSubgraphSimple::GetTestSourceFileLine(FPCGCollapseSubgraphSimple *this)

{
  return 0x15;
}

// GetTests @ 14a002bd0

/* WARNING: Removing unreachable block (ram,0x00014a002cbd) */
/* WARNING: Removing unreachable block (ram,0x00014a002d88) */

void __thiscall
FPCGCollapseSubgraphSimple::GetTests
          (FPCGCollapseSubgraphSimple *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.Subgraph.Collapse.Simple");
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

// RunTest @ 14a002db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall
FPCGCollapseSubgraphSimple::RunTest(FPCGCollapseSubgraphSimple *this,FString *param_1)

{
  int iVar1;
  UPCGNode *pUVar2;
  UPCGNode *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  UPCGGraph *this_01;
  UPCGGraphInputOutputSettings *this_02;
  UClass *pUVar7;
  FText *pFVar8;
  FPCGDataTypeIdentifier *pFVar9;
  FPCGPinProperties *pFVar10;
  UPCGNode *pUVar11;
  UPCGNode *pUVar12;
  FName *pFVar13;
  UPCGGraph *pUVar14;
  UPCGSettings *pUVar15;
  UPCGGraph *pUVar16;
  FString *pFVar17;
  ForAnyElementType FVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  undefined1 auStackY_2a8 [32];
  TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> local_258;
  UPCGSettings *local_248;
  undefined8 local_240;
  FName local_238;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_230;
  UPCGSurfaceSamplerSettings *local_220;
  UClass *local_218;
  FName local_210;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FName local_d8;
  FName local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FPCGDataTypeIdentifier local_98;
  FPCGPinProperties local_80;
  UPCGNode *local_50;
  UPCGNode *pUStack_48;
  UPCGNode *local_40;
  UPCGNode *pUStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pUVar6 = GetTransientPackageAsObject();
  this_01 = NewObject<UPCGGraph>(pUVar6);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_01,RF_Transient);
  pUVar2 = (this_01->OutputNode).field0_0x0.DebugPtr;
  this_00 = (this_01->InputNode).field0_0x0.DebugPtr;
  ::FString::FString(&local_1e8,"InputNode is valid");
  pwVar20 = L"";
  if (this_00 == (UPCGNode *)0x0) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_158,L"Expected \'%s\' to be not null.");
    (*pcVar3)(this,&local_158,0);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    return false;
  }
  ::FString::FString(&local_1d8,"OutputNode is valid");
  if (pUVar2 == (UPCGNode *)0x0) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_148,L"Expected \'%s\' to be not null.");
    (*pcVar3)(this,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    return false;
  }
  this_02 = (UPCGGraphInputOutputSettings *)UPCGNode::GetSettings(this_00);
  if (this_02 == (UPCGGraphInputOutputSettings *)0x0) {
    pFVar17 = GetTypeName<UPCGGraphInputOutputSettings>(&local_c8);
    if ((pFVar17->Data).ArrayNum != 0) {
      pwVar20 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar20);
  }
  pUVar7 = Z_Construct_UClass_UPCGGraphInputOutputSettings_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(this_02->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar7->_padding_)) {
    pFVar17 = GetTypeName<UPCGGraphInputOutputSettings>(&local_b8);
    if ((pFVar17->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
    }
    pFVar17 = GetFullNameForCastLogError<UPCGSettings>(&local_a8,(UPCGSettings *)this_02);
    if ((pFVar17->Data).ArrayNum != 0) {
      pwVar20 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar20,pwVar19);
  }
  pFVar8 = FText::GetEmpty();
  pFVar9 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_98,Landscape);
  pFVar10 = FPCGPinProperties::FPCGPinProperties
                      (&local_80,&PCGInputOutputConstants::DefaultLandscapeLabel,pFVar9,true,true,
                       pFVar8);
  pFVar10 = UPCGGraphInputOutputSettings::AddPin(this_02,pFVar10);
  if (local_80.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  UPCGNode::UpdateAfterSettingsChangeDuringCreation(this_00);
  bVar4 = false;
  local_220 = (UPCGSurfaceSamplerSettings *)0x0;
  pUVar11 = UPCGGraph::AddNodeOfType<UPCGSurfaceSamplerSettings,void>(this_01,&local_220);
  local_248 = (UPCGSettings *)0x0;
  local_218 = Z_Construct_UClass_UPCGAttributeNoiseSettings_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_218 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_218);
  }
  pUVar12 = UPCGGraph::AddNodeOfType(this_01,(TSubclassOf<UPCGSettings>)&local_218,&local_248);
  if (local_248 != (UPCGSettings *)0x0) {
    Z_Construct_UClass_UPCGAttributeNoiseSettings_NoRegister();
  }
  ::FString::FString(&local_1c8,"SurfaceSampler node is valid");
  if (pUVar11 == (UPCGNode *)0x0) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_138,L"Expected \'%s\' to be not null.");
    (*pcVar3)(this,&local_138,0);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    bVar4 = true;
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    return false;
  }
  ::FString::FString(&local_1b8,"AttributeNoise node is valid");
  if (pUVar12 == (UPCGNode *)0x0) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_128,L"Expected \'%s\' to be not null.");
    (*pcVar3)(this,&local_128,0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    return false;
  }
  iVar1 = (this_01->Nodes).ArrayNum;
  ::FString::FString(&local_1a8,"There are 2 nodes");
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_1a8.Data.ArrayNum != 0) {
    FVar18.Data = local_1a8.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,iVar1,2)
  ;
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    return false;
  }
  ::FName::FName(&local_210,L"Surface");
  UPCGGraph::AddLabeledEdge(this_01,this_00,&pFVar10->Label,pUVar11,&local_210);
  UPCGGraph::AddLabeledEdge
            (this_01,pUVar11,&PCGPinConstants::DefaultOutputLabel,pUVar12,
             &PCGPinConstants::DefaultInputLabel);
  UPCGGraph::AddLabeledEdge
            (this_01,pUVar12,&PCGPinConstants::DefaultOutputLabel,pUVar2,
             &PCGPinConstants::DefaultOutputLabel);
  pFVar13 = ::FName::FName(&local_d8,L"Surface");
  bVar4 = PCGCollapseSubgraphTests::
          ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSurfaceSamplerSettings>
                    ((FPCGTestBaseClass *)this,this_01,pFVar10->Label,*pFVar13);
  if (!bVar4) {
    return false;
  }
  bVar4 = PCGCollapseSubgraphTests::
          ValidateNodeAndEdge<UPCGSurfaceSamplerSettings,UPCGAttributeNoiseSettings>
                    ((FPCGTestBaseClass *)this,this_01,PCGPinConstants::DefaultOutputLabel,
                     PCGPinConstants::DefaultInputLabel);
  if (!bVar4) {
    return false;
  }
  bVar4 = PCGCollapseSubgraphTests::
          ValidateNodeAndEdge<UPCGAttributeNoiseSettings,UPCGGraphInputOutputSettings>
                    ((FPCGTestBaseClass *)this,this_01,PCGPinConstants::DefaultOutputLabel,
                     PCGPinConstants::DefaultOutputLabel);
  if (!bVar4) {
    return false;
  }
  local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.ArrayNum = 4;
  local_50 = this_00;
  pUStack_48 = pUVar2;
  local_40 = pUVar11;
  pUStack_38 = pUVar12;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,4,0,&local_258.AllocatorInstance,4,&local_258.ArrayMax);
  local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.ArrayNum = 0;
  local_230.ArrayMax = 0;
  *(UPCGNode **)local_258.AllocatorInstance.Data = local_50;
  *(UPCGNode **)(local_258.AllocatorInstance.Data + 8) = pUStack_48;
  *(UPCGNode **)(local_258.AllocatorInstance.Data + 0x10) = local_40;
  *(UPCGNode **)(local_258.AllocatorInstance.Data + 0x18) = pUStack_38;
  pUVar14 = FPCGSubgraphHelpers::CollapseIntoSubgraph
                      (this_01,&local_258,&local_230,(UPCGGraph *)0x0);
  if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.AllocatorInstance.Data);
  }
  ::FString::FString(&local_198,"Subgraph collapse succeeded");
  if (pUVar14 == (UPCGGraph *)0x0) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_118,L"Expected \'%s\' to be not null.");
    (*pcVar3)(this,&local_118,0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    iVar1 = (this_01->Nodes).ArrayNum;
    ::FString::FString(&local_188,"There is 1 node in the main graph");
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_188.Data.ArrayNum != 0) {
      FVar18.Data = local_188.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,iVar1,1);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      if (((this_01->Nodes).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pUVar2 = *(UPCGNode **)(this_01->Nodes).AllocatorInstance.Data;
      ::FString::FString(&local_178,"SubgraphNode is valid");
      if (pUVar2 == (UPCGNode *)0x0) {
        pcVar3 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_108,L"Expected \'%s\' to be not null.");
        (*pcVar3)(this,&local_108,0);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        pUVar15 = UPCGNode::GetSettings(pUVar2);
        if (pUVar15 == (UPCGSettings *)0x0) {
LAB_14a003461:
          pUVar15 = (UPCGSettings *)0x0;
        }
        else {
          pUVar7 = Z_Construct_UClass_UPCGSubgraphSettings_NoRegister();
          iVar1 = (int)pUVar7->_padding_;
          if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar7->_padding_)) goto LAB_14a003461;
        }
        ::FString::FString(&local_168,"Node is a subgraph node");
        if (pUVar15 == (UPCGSettings *)0x0) {
          pcVar3 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_f8,L"Expected \'%s\' to be not null.");
          (*pcVar3)(this,&local_f8,0);
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if (!bVar4) {
          pUVar16 = (UPCGGraph *)(**(code **)(*(longlong *)pUVar15[1]._padding_ + 0x2b8))();
          ::FString::FString(&local_208,"Subgraph graph is the right one");
          if (pUVar16 == pUVar14) {
            bVar4 = false;
          }
          else {
            pcVar3 = *(code **)(*(longlong *)this + 0x28);
            ::FString::PrintfImpl(&local_e8,L"%s: The two values are not equal.");
            (*pcVar3)(this,&local_e8,0);
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
            bVar4 = true;
          }
          if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Data.AllocatorInstance.Data);
          }
          if (!bVar4) {
            ::FName::FName(&local_238,L"Landscape");
            bVar4 = PCGCollapseSubgraphTests::
                    ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSubgraphSettings>
                              ((FPCGTestBaseClass *)this,this_01,pFVar10->Label,local_238);
            if (bVar4) {
              local_240 = 0;
              bVar4 = PCGCollapseSubgraphTests::
                      ValidateNodeAndEdge<UPCGSubgraphSettings,UPCGGraphInputOutputSettings>
                                ((FPCGTestBaseClass *)this,this_01,(FName)0x0,
                                 PCGPinConstants::DefaultOutputLabel);
              if (bVar4) {
                iVar1 = (pUVar14->Nodes).ArrayNum;
                ::FString::FString(&local_1f8,"There is 2 nodes in the subgraph");
                if (local_1f8.Data.ArrayNum != 0) {
                  pwVar20 = (wchar_t *)local_1f8.Data.AllocatorInstance.Data;
                }
                bVar4 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar20,iVar1,2);
                if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
                }
                if (bVar4) {
                  pFVar13 = ::FName::FName(&local_d0,L"Surface");
                  bVar4 = PCGCollapseSubgraphTests::
                          ValidateNodeAndEdge<UPCGGraphInputOutputSettings,UPCGSurfaceSamplerSettings>
                                    ((FPCGTestBaseClass *)this,pUVar14,local_238,*pFVar13);
                  if (((bVar4) &&
                      (bVar4 = PCGCollapseSubgraphTests::
                               ValidateNodeAndEdge<UPCGSurfaceSamplerSettings,UPCGAttributeNoiseSettings>
                                         ((FPCGTestBaseClass *)this,pUVar14,
                                          PCGPinConstants::DefaultOutputLabel,
                                          PCGPinConstants::DefaultInputLabel), bVar4)) &&
                     (bVar4 = PCGCollapseSubgraphTests::
                              ValidateNodeAndEdge<UPCGAttributeNoiseSettings,UPCGGraphInputOutputSettings>
                                        ((FPCGTestBaseClass *)this,pUVar14,
                                         PCGPinConstants::DefaultOutputLabel,(FName)0x0), bVar4)) {
                    bVar4 = true;
                    goto LAB_14a00366f;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_14a00366f:
  if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.AllocatorInstance.Data);
    return bVar4;
  }
  return bVar4;
}

// GetBeautifiedTestName @ 14a003730

FString * __thiscall
FPCGCollapseSubgraphSimple::GetBeautifiedTestName
          (FPCGCollapseSubgraphSimple *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Subgraph.Collapse.Simple");
  return __return_storage_ptr__;
}

