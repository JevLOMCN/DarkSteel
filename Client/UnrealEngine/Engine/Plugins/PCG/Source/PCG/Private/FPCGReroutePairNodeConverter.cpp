// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// FPCGReroutePairNodeConverter @ 149d33c00

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

FPCGReroutePairNodeConverter * __thiscall
FPCGReroutePairNodeConverter::FPCGReroutePairNodeConverter
          (FPCGReroutePairNodeConverter *this,UPCGNode *param_1,FName param_2)

{
  byte *pbVar1;
  int iVar2;
  UPCGGraph *pUVar3;
  UPCGSettings *pUVar4;
  UClass *pUVar5;
  
  if (param_1 == (UPCGNode *)0x0) {
    this->_padding_ = 0;
    *(undefined2 *)&this->_padding_ = 0;
  }
  else {
    pUVar3 = UPCGNode::GetGraph(param_1);
    this->_padding_ = (longlong)pUVar3;
    *(undefined2 *)&this->_padding_ = 0;
    if (pUVar3 != (UPCGGraph *)0x0) {
      *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
    }
  }
  this->SourceNode = param_1;
  this->_padding_ = (longlong)&___7FPCGReroutePairNodeConverter__6B_;
  this->GeneratedDeclarationNode = (UPCGNode *)0x0;
  this->GeneratedDeclarationSettings = (UPCGSettings *)0x0;
  this->RerouteNodeTitle = param_2;
  (this->GeneratedUsageSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedUsageSettings).ArrayNum = 0;
  (this->GeneratedUsageSettings).ArrayMax = 0;
  *(undefined8 *)&this->DownstreamToUsageNodeMapping = 0;
  *(undefined8 *)&(this->DownstreamToUsageNodeMapping).field_0x8 = 0;
  *(undefined8 *)&(this->DownstreamToUsageNodeMapping).field_0x20 = 0;
  *(undefined4 *)&(this->DownstreamToUsageNodeMapping).field_0x28 = 0;
  *(undefined4 *)&(this->DownstreamToUsageNodeMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->DownstreamToUsageNodeMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DownstreamToUsageNodeMapping).field_0x34 = 0;
  *(undefined8 *)&(this->DownstreamToUsageNodeMapping).field_0x40 = 0;
  *(undefined4 *)&(this->DownstreamToUsageNodeMapping).field_0x48 = 0;
  if ((this->SourceNode != (UPCGNode *)0x0) &&
     (pUVar4 = UPCGNode::GetSettings(this->SourceNode), pUVar4 != (UPCGSettings *)0x0)) {
    pUVar4 = UPCGNode::GetSettings(this->SourceNode);
    pUVar5 = Z_Construct_UClass_UPCGRerouteSettings_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) {
      pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
      *pbVar1 = *pbVar1 | 2;
    }
  }
  return this;
}

// ExecuteApplyStructural @ 149d48c60

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
FPCGReroutePairNodeConverter::ExecuteApplyStructural
          (FPCGReroutePairNodeConverter *this,bool *param_1)

{
  FScriptContainerElement *pFVar1;
  UPCGNode *pUVar2;
  UPCGNode *pUVar3;
  UPCGPin *pUVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  byte bVar10;
  uint uVar11;
  TTuple<UPCGNode_const_*,UPCGNode_*> *pTVar12;
  UPCGPin *pUVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  UPCGPin *this_00;
  FScriptContainerElement *pFVar18;
  undefined1 local_res18 [8];
  uint local_res20;
  
  bVar7 = IsValid(this);
  if (!bVar7) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6676545619617644181>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                       ,0x16b,"IsValid()");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    return false;
  }
  uVar17 = 0;
  bVar7 = true;
  pUVar2 = this->SourceNode;
  pUVar3 = this->GeneratedDeclarationNode;
  iVar14 = (pUVar3->InputPins).ArrayNum;
  uVar15 = uVar17;
  if (0 < iVar14) {
    do {
      uVar16 = (uint)uVar17;
      if ((pUVar2->InputPins).ArrayNum <= (int)uVar16) break;
      uVar11 = 0;
      if ((int)uVar16 < iVar14) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      pUVar4 = *(UPCGPin **)((pUVar3->InputPins).AllocatorInstance.Data + uVar15);
      uVar11 = 0;
      if ((int)uVar16 < (pUVar2->InputPins).ArrayNum) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      bVar9 = PCGConversion::Node::Helpers::RewireAllEdges
                        (*(UPCGPin **)((pUVar2->InputPins).AllocatorInstance.Data + uVar15),pUVar4);
      iVar14 = (pUVar3->InputPins).ArrayNum;
      bVar7 = (bool)(bVar7 & bVar9);
      uVar17 = (ulonglong)(uVar16 + 1);
      uVar15 = uVar15 + 8;
    } while ((int)(uVar16 + 1) < iVar14);
  }
  if (*(int *)&(this->DownstreamToUsageNodeMapping).field_0x8 !=
      *(int *)&(this->DownstreamToUsageNodeMapping).field_0x34) {
    pUVar2 = this->SourceNode;
    if (((pUVar2->OutputPins).ArrayNum != 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceOutputPins.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                           ,0x17b,L"%s"), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    local_res20 = (pUVar2->OutputPins).ArrayNum;
    uVar15 = (ulonglong)(int)local_res20;
    pFVar18 = (pUVar2->OutputPins).AllocatorInstance.Data;
    pFVar1 = pFVar18 + uVar15 * 8;
    while( true ) {
      if ((pUVar2->OutputPins).ArrayNum != (int)uVar15) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar18 == pFVar1) break;
      pUVar4 = *(UPCGPin **)pFVar18;
      if ((pUVar4 == (UPCGPin *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pin",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                             ,0x17e,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar14 = (pUVar4->Edges).ArrayNum;
      while (iVar14 != 0) {
        if (((pUVar4->Edges).ArrayNum < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if (*(longlong *)(pUVar4->Edges).AllocatorInstance.Data == 0) {
LAB_149d48f56:
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pin->Edges[0] && Pin->Edges[0]->OutputPin && Pin->Edges[0]->OutputPin->Node"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                             ,0x181,L"");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
        }
        else {
          if (((pUVar4->Edges).ArrayNum < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          if (*(longlong *)(*(longlong *)(pUVar4->Edges).AllocatorInstance.Data + 0x50) == 0)
          goto LAB_149d48f56;
          if (((pUVar4->Edges).ArrayNum < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(pUVar4->Edges).AllocatorInstance.Data + 0x50) + 0x28) ==
              0) goto LAB_149d48f56;
        }
        if (((pUVar4->Edges).ArrayNum < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pTVar12 = TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
                          *)&this->DownstreamToUsageNodeMapping,
                         *(UPCGNode **)
                          (*(longlong *)(*(longlong *)(pUVar4->Edges).AllocatorInstance.Data + 0x50)
                          + 0x28));
        if ((pTVar12 == (TTuple<UPCGNode_const_*,UPCGNode_*> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pUVar3 = *(UPCGNode **)&pTVar12->field_0x8;
        if (((pUVar3->OutputPins).ArrayNum != 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("UsageNode->GetOutputPins().Num() == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                               ,0x183,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pUVar13 = UPCGNode::GetOutputPin(pUVar3,&PCGPinConstants::DefaultOutputLabel);
        if (((pUVar4->Edges).ArrayNum < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        lVar5 = *(longlong *)(pUVar4->Edges).AllocatorInstance.Data;
        if (((lVar5 == 0) || (pUVar13 == (UPCGPin *)0x0)) || (pUVar4 == pUVar13)) {
          bVar10 = 0;
        }
        else {
          this_00 = *(UPCGPin **)(lVar5 + 0x48);
          if (this_00 == (UPCGPin *)0x0) {
            bVar9 = pUVar4 == (UPCGPin *)0x0;
          }
          else {
            bVar9 = this_00 == pUVar4;
          }
          if (bVar9) {
            this_00 = *(UPCGPin **)(lVar5 + 0x50);
          }
          if ((this_00 == (UPCGPin *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("OtherPin",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                                 ,0x29,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          UPCGPin::BreakEdgeTo
                    (this_00,pUVar4,
                     (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)0x0);
          UPCGPin::AddEdgeTo(this_00,pUVar13,
                             (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)
                             0x0);
          bVar10 = 1;
        }
        bVar7 = (bool)(bVar7 & bVar10);
        iVar14 = (pUVar4->Edges).ArrayNum;
      }
      uVar15 = (ulonglong)local_res20;
      pFVar18 = pFVar18 + 8;
    }
  }
  UPCGGraph::RemoveNode((UPCGGraph *)this->_padding_,this->SourceNode);
  return bVar7;
}

// ExecutePrepareData @ 149d49500

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
FPCGReroutePairNodeConverter::ExecutePrepareData(FPCGReroutePairNodeConverter *this,bool *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UPCGGraph *pUVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  UPCGNode *pUVar11;
  UPCGSettings *pUVar12;
  UPCGPin *this_00;
  UPCGPin *pUVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined1 local_res18 [8];
  uint local_res20;
  TPairInitializer<UPCGNode_const_*_const_&,UPCGNode_*_const_&> local_88;
  ulonglong local_78;
  UClass *local_70;
  UClass *local_68;
  longlong *local_60;
  longlong local_58;
  ulonglong *local_50;
  UPCGNode ***local_48;
  
  bVar6 = IsValid(this);
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6676545619617644237>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                       ,0x133,"IsValid()");
    if (!bVar6) {
      return false;
    }
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  *param_1 = true;
  pUVar3 = (UPCGGraph *)this->_padding_;
  local_70 = Z_Construct_UClass_UPCGNamedRerouteDeclarationSettings_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_70);
  }
  pUVar11 = UPCGGraph::AddNodeOfType
                      (pUVar3,(TSubclassOf<UPCGSettings>)&local_70,
                       &this->GeneratedDeclarationSettings);
  this->GeneratedDeclarationNode = pUVar11;
  bVar6 = 1 < *(int *)&(this->DownstreamToUsageNodeMapping).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
                      *)&this->DownstreamToUsageNodeMapping);
  }
  puVar4 = &(this->DownstreamToUsageNodeMapping).field_0xc;
  *(undefined4 *)&(this->DownstreamToUsageNodeMapping).field_0x8 = 0;
  if (*(int *)puVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->DownstreamToUsageNodeMapping,0,(int *)puVar4);
  }
  *(undefined4 *)&(this->DownstreamToUsageNodeMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DownstreamToUsageNodeMapping).field_0x34 = 0;
  iVar10 = *(int *)&(this->DownstreamToUsageNodeMapping).field_0x2c;
  *(undefined4 *)&(this->DownstreamToUsageNodeMapping).field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->DownstreamToUsageNodeMapping).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->DownstreamToUsageNodeMapping).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->DownstreamToUsageNodeMapping).field_0x48 = 1;
    TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
              *)&this->DownstreamToUsageNodeMapping);
  }
  pUVar11 = this->SourceNode;
  if (((pUVar11->OutputPins).ArrayNum != 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceOutputPins.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                         ,0x13a,L"%s"), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if ((this->GeneratedDeclarationNode == (UPCGNode *)0x0) ||
     (this->GeneratedDeclarationSettings == (UPCGSettings *)0x0)) {
    bVar6 = false;
  }
  else {
    this->GeneratedDeclarationNode->NodeTitle = this->RerouteNodeTitle;
    pUVar12 = UPCGNode::GetSettings(this->SourceNode);
    bVar6 = true;
    *(char *)&this->GeneratedDeclarationSettings->_padding_ = (char)pUVar12->_padding_;
  }
  if (((pUVar11->OutputPins).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_58 = *(longlong *)(pUVar11->OutputPins).AllocatorInstance.Data;
  local_res20 = *(uint *)(local_58 + 0x40);
  uVar16 = (ulonglong)(int)local_res20;
  plVar19 = *(longlong **)(local_58 + 0x38);
  plVar18 = plVar19 + uVar16;
  local_60 = plVar18;
  do {
    if (*(int *)(local_58 + 0x40) != (int)uVar16) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPCGEdge>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (plVar19 == plVar18) {
      return bVar6;
    }
    local_78 = *(ulonglong *)(*(longlong *)(*plVar19 + 0x50) + 0x28);
    if ((local_78 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("DownstreamNode",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                           ,0x151,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar14 = ((uint)(local_78 >> 0x14) & 0xffff ^ (uint)(local_78 >> 4)) * -0x7a143595;
    uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
    if (*(int *)&(this->DownstreamToUsageNodeMapping).field_0x8 !=
        *(int *)&(this->DownstreamToUsageNodeMapping).field_0x34) {
      puVar4 = *(undefined1 **)&(this->DownstreamToUsageNodeMapping).field_0x40;
      puVar17 = &(this->DownstreamToUsageNodeMapping).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar17 = puVar4;
      }
      iVar10 = *(int *)(puVar17 +
                       (ulonglong)
                       (*(int *)&(this->DownstreamToUsageNodeMapping).field_0x48 - 1U &
                       (uVar14 >> 0x10 ^ uVar14)) * 4);
      if (iVar10 != -1) {
        do {
          if (*(ulonglong *)
               (*(longlong *)&this->DownstreamToUsageNodeMapping + (longlong)iVar10 * 0x18) ==
              local_78) goto LAB_149d49962;
          iVar10 = *(int *)(*(longlong *)&this->DownstreamToUsageNodeMapping + 0x10 +
                           (longlong)iVar10 * 0x18);
        } while (iVar10 != -1);
      }
    }
    iVar10 = (this->GeneratedUsageSettings).ArrayNum;
    piVar1 = &(this->GeneratedUsageSettings).ArrayMax;
    pUVar3 = (UPCGGraph *)this->_padding_;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(this->GeneratedUsageSettings).AllocatorInstance,piVar1);
    }
    (this->GeneratedUsageSettings).ArrayNum = iVar10 + 1;
    pFVar2 = (this->GeneratedUsageSettings).AllocatorInstance.Data + (longlong)iVar10 * 8;
    *(UPCGSettings **)pFVar2 = (UPCGSettings *)0x0;
    local_68 = Z_Construct_UClass_UPCGNamedRerouteUsageSettings_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_68);
    }
    local_88.Value =
         (UPCGNode **)
         UPCGGraph::AddNodeOfType
                   (pUVar3,(TSubclassOf<UPCGSettings>)&local_68,(UPCGSettings **)pFVar2);
    local_50 = &local_78;
    local_48 = &local_88.Value;
    TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UPCGNode_const_*_const_&,UPCGNode_*_const_&>_>
              ((TSet<TTuple<UPCGNode_const_*,UPCGNode_*>,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>,FDefaultSetAllocator>
                *)&this->DownstreamToUsageNodeMapping,&local_88,(bool *)&local_50);
    iVar10 = (this->GeneratedUsageSettings).ArrayNum;
    uVar15 = iVar10 - 1;
    uVar14 = 0;
    if ((int)uVar15 < iVar10) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if (((UPCGNode *)local_88.Value == (UPCGNode *)0x0) ||
       (*(longlong *)
         ((this->GeneratedUsageSettings).AllocatorInstance.Data +
         (longlong)(this->GeneratedUsageSettings).ArrayNum * 8 + -8) == 0)) {
      bVar9 = 0;
    }
    else {
      this->GeneratedDeclarationNode->NodeTitle = this->RerouteNodeTitle;
      pUVar12 = UPCGNode::GetSettings(this->SourceNode);
      *(char *)&this->GeneratedDeclarationSettings->_padding_ = (char)pUVar12->_padding_;
      bVar9 = 1;
    }
    bVar6 = (bool)(bVar6 & bVar9);
    *(FName *)((longlong)local_88.Value + 0x28) = this->RerouteNodeTitle;
    this_00 = UPCGNode::GetOutputPin
                        (this->GeneratedDeclarationNode,&PCGNamedRerouteConstants::InvisiblePinLabel
                        );
    pUVar13 = UPCGNode::GetInputPin((UPCGNode *)local_88.Value,&PCGPinConstants::DefaultInputLabel);
    UPCGPin::AddEdgeTo(this_00,pUVar13,
                       (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)0x0);
    plVar18 = local_60;
LAB_149d49962:
    plVar19 = plVar19 + 1;
    uVar16 = (ulonglong)local_res20;
  } while( true );
}

// Finalize @ 149d4c1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FPCGReroutePairNodeConverter::Finalize(FPCGReroutePairNodeConverter *this)

{
  undefined1 *puVar1;
  TMap<UPCGNode_const_*,UPCGNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>_>
  *pTVar2;
  undefined8 *puVar3;
  ForElementType<UPCGNode_*> FVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  TMap<UPCGNode_const_*,UPCGNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>_>
  *pTVar9;
  bool bVar10;
  ForElementType<UPCGNode_*> FVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [8];
  undefined8 local_140;
  UPCGNode *pUStack_138;
  TMap<UPCGNode_const_*,UPCGNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>_>
  *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  int local_fc;
  TMap<UPCGNode_const_*,UPCGNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGNode_const_*,UPCGNode_*,0>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  ForElementType<UPCGNode_*> local_c8;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar10 = IsValid(this);
  if (bVar10) {
    UPCGNode::UpdateAfterSettingsChangeDuringCreation(this->GeneratedDeclarationNode);
    local_3c = 0x10;
    puVar1 = &(this->DownstreamToUsageNodeMapping).field_0x10;
    local_c8.SecondaryData = (ForElementType<UPCGNode_*>)0x0;
    iStack_128 = 0;
    local_40 = 0;
    pTVar2 = &this->DownstreamToUsageNodeMapping;
    iVar6 = *(int *)&(this->DownstreamToUsageNodeMapping).field_0x28;
    uStack_124 = 1;
    local_110 = 0;
    iStack_114 = local_110;
    if (iVar6 != 0) {
      puVar17 = *(uint **)&(this->DownstreamToUsageNodeMapping).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar15 = *puVar17;
      iStack_128 = 0;
      local_110 = 0;
      while (uVar15 == 0) {
        lVar12 = (longlong)iStack_128;
        local_110 = local_110 + 0x20;
        iStack_128 = iStack_128 + 1;
        iStack_114 = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_128) goto LAB_149d4c31e;
        uVar15 = puVar17[lVar12 + 1];
      }
      uStack_124 = -uVar15 & uVar15;
      uVar5 = (ulonglong)uStack_124 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_100 = (int)lVar12;
      iStack_114 = local_110 + -1 + local_100;
      if (iVar6 < iStack_114) {
        iStack_114 = iVar6;
      }
    }
LAB_149d4c31e:
    uVar15 = *(uint *)&(this->DownstreamToUsageNodeMapping).field_0x28;
    uVar14 = uVar15 & 0xffffffe0;
    iStack_108 = *(int *)&(this->DownstreamToUsageNodeMapping).field_0x8 -
                 *(int *)&(this->DownstreamToUsageNodeMapping).field_0x34;
    uStack_118 = 0xffffffff;
    TStack_f0._padding_ = CONCAT44(uStack_124,iStack_128);
    TStack_f0.CurrentBitIndex = iStack_114;
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar15 >> 5;
    TStack_f0._28_4_ = iStack_114;
    TStack_f0.BaseBitIndex = local_110;
    uStack_d0 = CONCAT44(uStack_104,iStack_108);
    local_130 = pTVar2;
    local_120 = puVar1;
    iStack_10c = iStack_114;
    local_f8 = pTVar2;
    TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar15 < 0) || (iVar6 < (int)uVar15)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar7 = *(uint *)&(this->DownstreamToUsageNodeMapping).field_0x28;
    if (uVar15 != uVar7) {
      puVar16 = *(undefined1 **)&(this->DownstreamToUsageNodeMapping).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
      while (uVar15 == 0) {
        lVar12 = (longlong)iVar13;
        uVar14 = uVar14 + 0x20;
        iVar13 = iVar13 + 1;
        uVar15 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_149d4c440;
        uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
      }
      uVar5 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_fc = (int)lVar12;
      uVar15 = local_fc + -1 + uVar14;
      if ((int)uVar7 < (int)uVar15) {
        uVar15 = uVar7;
      }
    }
LAB_149d4c440:
    while( true ) {
      pTVar9 = local_f8;
      if (*(int *)&local_f8->field_0x8 - *(int *)&local_f8->field_0x34 != (int)uStack_d0) {
        local_148[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,UPCGNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_148);
      }
      if (((TStack_f0.CurrentBitIndex == uVar15) &&
          (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2)
         ) break;
      puVar3 = (undefined8 *)(*(longlong *)pTVar9 + (longlong)TStack_f0.CurrentBitIndex * 0x18);
      local_140 = *puVar3;
      pUStack_138 = (UPCGNode *)puVar3[1];
      FVar11 = (ForElementType<UPCGNode_*>)&local_c8;
      if (local_c8.SecondaryData != (ForElementType<UPCGNode_*>)0x0) {
        FVar11 = local_c8.SecondaryData;
      }
      FVar4 = (ForElementType<UPCGNode_*>)((longlong)FVar11 + (longlong)local_40 * 8);
      for (; FVar11 != FVar4; FVar11 = (ForElementType<UPCGNode_*>)((longlong)FVar11 + 8)) {
        if (*(UPCGNode **)FVar11 == pUStack_138) goto LAB_149d4c593;
      }
      UPCGNode::UpdateAfterSettingsChangeDuringCreation(pUStack_138);
      FVar11 = (ForElementType<UPCGNode_*>)&local_c8;
      if (local_c8.SecondaryData != (ForElementType<UPCGNode_*>)0x0) {
        FVar11 = local_c8.SecondaryData;
      }
      if ((ulonglong)FVar11 <= &pUStack_138) {
        FVar11 = (ForElementType<UPCGNode_*>)&local_c8;
        if (local_c8.SecondaryData != (ForElementType<UPCGNode_*>)0x0) {
          FVar11 = local_c8.SecondaryData;
        }
        if ((&pUStack_138 < (UPCGNode **)((longlong)FVar11 + (longlong)local_3c * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (local_40 == local_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGNode_*>_>
                             (0x808,&local_c8,&local_3c);
      }
      lVar12 = (longlong)local_40;
      FVar11 = (ForElementType<UPCGNode_*>)&local_c8;
      if (local_c8.SecondaryData != (ForElementType<UPCGNode_*>)0x0) {
        FVar11 = local_c8.SecondaryData;
      }
      local_40 = local_40 + 1;
      *(UPCGNode **)((longlong)FVar11 + lVar12 * 8) = pUStack_138;
LAB_149d4c593:
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    }
    if (local_c8.SecondaryData != (ForElementType<UPCGNode_*>)0x0) {
      FMemory::Free((void *)local_c8.SecondaryData);
    }
  }
  else {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6676545619617644273>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                        ,0x10f,"IsValid()");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}

// IsValid @ 149d57ef0

bool __thiscall FPCGReroutePairNodeConverter::IsValid(FPCGReroutePairNodeConverter *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  bool bVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar17 = this->_padding_ != 0;
  if ((this->_padding_ & 0x400) != 0) {
    iVar3 = *(int *)&(this->DownstreamToUsageNodeMapping).field_0x28;
    uVar8 = 1;
    puVar1 = &(this->DownstreamToUsageNodeMapping).field_0x10;
    iVar12 = 0;
    bVar17 = bVar17 && this->GeneratedDeclarationNode != (UPCGNode *)0x0;
    iVar14 = 0;
    iVar9 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(this->DownstreamToUsageNodeMapping).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar9 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_149d57fbd;
        uVar11 = puVar15[lVar10 + 1];
      }
      uVar8 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res10 = (int)lVar10;
      iVar9 = iVar14 + -1 + local_res10;
      if (iVar3 < iVar9) {
        iVar9 = iVar3;
      }
    }
LAB_149d57fbd:
    uVar11 = *(uint *)&(this->DownstreamToUsageNodeMapping).field_0x28;
    uVar16 = uVar11 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar8,iVar12);
    TStack_60.CurrentBitIndex = iVar9;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_60._28_4_ = iVar9;
    TStack_60.BaseBitIndex = iVar14;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->DownstreamToUsageNodeMapping).field_0x8 -
                         *(int *)&(this->DownstreamToUsageNodeMapping).field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    uVar8 = *(uint *)&(this->DownstreamToUsageNodeMapping).field_0x28;
    if (uVar11 != uVar8) {
      puVar13 = *(undefined1 **)&(this->DownstreamToUsageNodeMapping).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar12;
        uVar16 = uVar16 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_149d580d0;
        uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar11 = (int)lVar10 + -1 + uVar16;
      if ((int)uVar8 < (int)uVar11) {
        uVar11 = uVar8;
      }
    }
LAB_149d580d0:
    while( true ) {
      if (*(int *)&(this->DownstreamToUsageNodeMapping).field_0x8 -
          *(int *)&(this->DownstreamToUsageNodeMapping).field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,UPCGNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar11) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      if ((*(longlong *)
            (*(longlong *)&this->DownstreamToUsageNodeMapping +
            (longlong)TStack_60.CurrentBitIndex * 0x18) == 0) ||
         (*(longlong *)
           (*(longlong *)&this->DownstreamToUsageNodeMapping + 8 +
           (longlong)TStack_60.CurrentBitIndex * 0x18) == 0)) {
        bVar7 = 0;
      }
      else {
        bVar7 = 1;
      }
      bVar17 = (bool)(bVar17 & bVar7);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return bVar17;
}

