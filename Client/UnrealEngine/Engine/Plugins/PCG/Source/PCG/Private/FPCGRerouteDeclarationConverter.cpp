// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// FPCGRerouteDeclarationConverter @ 149d33b10

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

FPCGRerouteDeclarationConverter * __thiscall
FPCGRerouteDeclarationConverter::FPCGRerouteDeclarationConverter
          (FPCGRerouteDeclarationConverter *this,UPCGNode *param_1,FName param_2)

{
  byte *pbVar1;
  UClass *pUVar2;
  UPCGGraph *pUVar3;
  UPCGSettings *pUVar4;
  
  pUVar2 = Z_Construct_UClass_UPCGRerouteSettings_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
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
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FPCGSingleNodeConverter__6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = 0;
  if ((UPCGNode *)this->_padding_ != (UPCGNode *)0x0) {
    pUVar4 = UPCGNode::GetSettings((UPCGNode *)this->_padding_);
    if (pUVar4 != (UPCGSettings *)0x0) {
      pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
      *pbVar1 = *pbVar1 | 2;
    }
  }
  this->_padding_ = (longlong)&___7FPCGRerouteDeclarationConverter__6B_;
  this->RerouteNodeTitle = param_2;
  return this;
}

// ExecuteApplyStructural @ 149d48790

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
FPCGRerouteDeclarationConverter::ExecuteApplyStructural
          (FPCGRerouteDeclarationConverter *this,bool *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  UPCGPin *pUVar6;
  void *_Src;
  UPCGNode *this_00;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  UPCGSettings *pUVar11;
  UClass *pUVar12;
  UPCGSettings *pUVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  bool local_res8;
  undefined1 local_res18 [16];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  cVar8 = (**(code **)(this->_padding_ + 8))();
  if (cVar8 == '\0') {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6676545619617644326>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                       ,0xda,"IsValid()");
    if (!bVar9) {
      return false;
    }
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  lVar5 = this->_padding_;
  lVar14 = this->_padding_;
  piVar1 = (int *)(lVar5 + 0x70);
  if (((*(int *)(lVar14 + 0x70) != 1) || (*piVar1 != 1)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceInputPins.Num() == 1 && GeneratedInputPins.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                         ,0xe2,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  if ((*piVar1 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  pUVar6 = (UPCGPin *)**(undefined8 **)(lVar5 + 0x68);
  if ((*(int *)(lVar14 + 0x70) < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  local_res8 = PCGConversion::Node::Helpers::RewireAllEdges
                         ((UPCGPin *)**(undefined8 **)(lVar14 + 0x68),pUVar6);
  lVar5 = this->_padding_;
  if ((*(int *)(lVar5 + 0x80) != 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeneratedOutputPins.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                         ,0xe6,L"%s"), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  pUVar11 = UPCGNode::GetSettings((UPCGNode *)this->_padding_);
  if (pUVar11 != (UPCGSettings *)0x0) {
    pUVar12 = Z_Construct_UClass_UPCGNamedRerouteDeclarationSettings_NoRegister();
    iVar3 = (int)pUVar12->_padding_;
    if ((iVar3 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar12->_padding_)) {
      lVar14 = this->_padding_;
      if ((*(int *)(lVar14 + 0x80) != 2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("SourceOutputPins.Num() == 2",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                             ,0xea,L"%s"), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      if ((*(int *)(lVar5 + 0x80) < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      pUVar6 = (UPCGPin *)**(undefined8 **)(lVar5 + 0x78);
      if ((*(int *)(lVar14 + 0x80) < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      bVar9 = PCGConversion::Node::Helpers::RewireAllEdges
                        ((UPCGPin *)**(undefined8 **)(lVar14 + 0x78),pUVar6);
      local_res8 = local_res8 && bVar9;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = *(int *)(this->_padding_ + 0x38);
      lVar14 = (longlong)local_40;
      _Src = *(void **)(this->_padding_ + 0x30);
      if (local_40 == 0) {
        local_3c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_40,0,&local_48,local_40,&local_3c);
        memcpy(local_48.Data,_Src,lVar14 << 3);
      }
      iVar3 = local_40;
      pFVar2 = local_48.Data + (longlong)local_40 * 8;
      FVar15.Data = local_48.Data;
      while( true ) {
        if (local_40 != iVar3) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UPCGNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (FVar15.Data == pFVar2) break;
        this_00 = *(UPCGNode **)FVar15.Data;
        if ((this_00 != (UPCGNode *)0x0) &&
           (pUVar13 = UPCGNode::GetSettings(this_00), pUVar13 != (UPCGSettings *)0x0)) {
          pUVar12 = Z_Construct_UClass_UPCGNamedRerouteUsageSettings_NoRegister();
          iVar4 = (int)pUVar12->_padding_;
          if ((iVar4 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
              &pUVar12->_padding_)) {
            if ((UPCGSettings *)pUVar13[1]._padding_ == (UPCGSettings *)0x0) {
              bVar9 = pUVar11 == (UPCGSettings *)0x0;
            }
            else {
              bVar9 = (UPCGSettings *)pUVar13[1]._padding_ == pUVar11;
            }
            if (bVar9) {
              if (((this_00->OutputPins).ArrayNum != 1) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("UsageNode->GetOutputPins().Num() == 1",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                                     ,0xf5,L""), bVar9)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              if ((*(int *)(lVar5 + 0x80) < 1) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              pUVar6 = (UPCGPin *)**(undefined8 **)(lVar5 + 0x78);
              if (((this_00->OutputPins).ArrayNum < 1) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              bVar9 = PCGConversion::Node::Helpers::RewireAllEdges
                                (*(UPCGPin **)(this_00->OutputPins).AllocatorInstance.Data,pUVar6);
              local_res8 = (bool)(local_res8 & bVar9);
              UPCGGraph::RemoveNode((UPCGGraph *)this->_padding_,this_00);
            }
          }
        }
        FVar15.Data = FVar15.Data + 8;
      }
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
    }
  }
  UPCGGraph::RemoveNode((UPCGGraph *)this->_padding_,(UPCGNode *)this->_padding_);
  return local_res8;
}

// ExecutePrepareData @ 149d49400

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
FPCGRerouteDeclarationConverter::ExecutePrepareData
          (FPCGRerouteDeclarationConverter *this,bool *param_1)

{
  UPCGGraph *this_00;
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  UPCGNode *pUVar6;
  UPCGSettings *pUVar7;
  UObject *local_res8;
  
  cVar3 = (**(code **)(this->_padding_ + 8))();
  if (cVar3 == '\0') {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6676545619617644404>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                       ,0x8c,"IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  else {
    local_res8 = (UObject *)this->_padding_;
    this_00 = (UPCGGraph *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    pUVar6 = UPCGGraph::AddNodeOfType
                       (this_00,(TSubclassOf<UPCGSettings>)&local_res8,
                        (UPCGSettings **)&this->_padding_);
    this->_padding_ = (longlong)pUVar6;
    if ((pUVar6 != (UPCGNode *)0x0) && (this->_padding_ != 0)) {
      *param_1 = true;
      lVar1 = *(longlong *)(this->_padding_ + 0x28);
      if (lVar1 != 0) {
        *(longlong *)(this->_padding_ + 0x28) = lVar1;
      }
      pUVar7 = UPCGNode::GetSettings((UPCGNode *)this->_padding_);
      *(char *)(this->_padding_ + 0x48) = (char)pUVar7->_padding_;
      *(FName *)(this->_padding_ + 0x28) = this->RerouteNodeTitle;
      return true;
    }
  }
  return false;
}

