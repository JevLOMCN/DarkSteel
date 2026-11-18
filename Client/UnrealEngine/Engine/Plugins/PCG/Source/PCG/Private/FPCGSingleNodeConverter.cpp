// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// FPCGSingleNodeConverter @ 149d33d00

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

FPCGSingleNodeConverter * __thiscall
FPCGSingleNodeConverter::FPCGSingleNodeConverter
          (FPCGSingleNodeConverter *this,UPCGNode *param_1,TSubclassOf<UPCGSettings> param_2)

{
  byte *pbVar1;
  UClass *pUVar2;
  UPCGGraph *pUVar3;
  UPCGSettings *pUVar4;
  
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
  this->_padding_ = (longlong)&___7FPCGSingleNodeConverter__6B_;
  this->GeneratedNode = (UPCGNode *)0x0;
  pUVar2 = *(UClass **)param_2.Class.field0_0x0;
  (this->TargetSettingsClass).Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->GeneratedSettings = (UPCGSettings *)0x0;
  if (this->SourceNode != (UPCGNode *)0x0) {
    pUVar4 = UPCGNode::GetSettings(this->SourceNode);
    if (pUVar4 != (UPCGSettings *)0x0) {
      pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
      *pbVar1 = *pbVar1 | 2;
      return this;
    }
  }
  return this;
}

// ~FPCGSingleNodeConverter @ 149d34df0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall FPCGSingleNodeConverter::~FPCGSingleNodeConverter(FPCGSingleNodeConverter *this)

{
  this->_padding_ = (longlong)&___7FPCGSingleNodeConverter__6B_;
  if ((this->_padding_ & 0x800) == 0) {
    if (((UPCGGraph *)this->_padding_ != (UPCGGraph *)0x0) &&
       (this->GeneratedNode != (UPCGNode *)0x0)) {
      UPCGGraph::RemoveNode((UPCGGraph *)this->_padding_,this->GeneratedNode);
    }
    *(undefined1 *)&this->_padding_ = 0;
    this->_padding_ = (longlong)&___7FPCGConverterBase__6B_;
    return;
  }
  this->_padding_ = (longlong)&___7FPCGConverterBase__6B_;
  return;
}

// ExecuteApplyStructural @ 149d49170

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
FPCGSingleNodeConverter::ExecuteApplyStructural(FPCGSingleNodeConverter *this,bool *param_1)

{
  UPCGNode *pUVar1;
  UPCGNode *pUVar2;
  UPCGPin *pUVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  cVar5 = (**(code **)(this->_padding_ + 8))();
  if (cVar5 == '\0') {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6676545619617644379>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                       ,0xa5,"IsValid()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    return false;
  }
  uVar11 = 0;
  pUVar1 = this->SourceNode;
  bVar6 = true;
  pUVar2 = this->GeneratedNode;
  iVar10 = (pUVar2->InputPins).ArrayNum;
  if (0 < iVar10) {
    lVar12 = 0;
    do {
      if ((pUVar1->InputPins).ArrayNum <= (int)uVar11) break;
      uVar9 = 0;
      if ((int)uVar11 < iVar10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      pUVar3 = *(UPCGPin **)((pUVar2->InputPins).AllocatorInstance.Data + lVar12);
      uVar9 = 0;
      if ((int)uVar11 < (pUVar1->InputPins).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      bVar8 = PCGConversion::Node::Helpers::RewireAllEdges
                        (*(UPCGPin **)((pUVar1->InputPins).AllocatorInstance.Data + lVar12),pUVar3);
      iVar10 = (pUVar2->InputPins).ArrayNum;
      bVar6 = (bool)(bVar6 & bVar8);
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar11 < iVar10);
  }
  pUVar1 = this->GeneratedNode;
  uVar11 = 0;
  pUVar2 = this->SourceNode;
  iVar10 = (pUVar1->OutputPins).ArrayNum;
  if (0 < iVar10) {
    lVar12 = 0;
    do {
      if ((pUVar2->OutputPins).ArrayNum <= (int)uVar11) break;
      uVar9 = 0;
      if ((int)uVar11 < iVar10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      pUVar3 = *(UPCGPin **)((pUVar1->OutputPins).AllocatorInstance.Data + lVar12);
      uVar9 = 0;
      if ((int)uVar11 < (pUVar2->OutputPins).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      bVar8 = PCGConversion::Node::Helpers::RewireAllEdges
                        (*(UPCGPin **)((pUVar2->OutputPins).AllocatorInstance.Data + lVar12),pUVar3)
      ;
      iVar10 = (pUVar1->OutputPins).ArrayNum;
      bVar6 = (bool)(bVar6 & bVar8);
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar11 < iVar10);
  }
  UPCGGraph::RemoveNode((UPCGGraph *)this->_padding_,this->SourceNode);
  return bVar6;
}

// ExecutePrepareData @ 149d499c0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
FPCGSingleNodeConverter::ExecutePrepareData(FPCGSingleNodeConverter *this,bool *param_1)

{
  UPCGGraph *this_00;
  FName FVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  UPCGNode *pUVar6;
  UPCGSettings *pUVar7;
  UClass *local_res8;
  
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
    local_res8 = (this->TargetSettingsClass).Class.field0_0x0.DebugPtr;
    this_00 = (UPCGGraph *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar6 = UPCGGraph::AddNodeOfType
                       (this_00,(TSubclassOf<UPCGSettings>)&local_res8,&this->GeneratedSettings);
    this->GeneratedNode = pUVar6;
    if ((pUVar6 != (UPCGNode *)0x0) && (this->GeneratedSettings != (UPCGSettings *)0x0)) {
      *param_1 = true;
      FVar1 = this->SourceNode->NodeTitle;
      if (FVar1 != (FName)0x0) {
        this->GeneratedNode->NodeTitle = FVar1;
      }
      pUVar7 = UPCGNode::GetSettings(this->SourceNode);
      *(char *)&this->GeneratedSettings->_padding_ = (char)pUVar7->_padding_;
      return true;
    }
  }
  return false;
}

// Finalize @ 149d4c5f0

void __thiscall FPCGSingleNodeConverter::Finalize(FPCGSingleNodeConverter *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 8))();
  if (cVar2 != '\0') {
    UPCGNode::UpdateAfterSettingsChangeDuringCreation(this->GeneratedNode);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6676545619617644350>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGConversion.cpp"
                     ,0xc2,"IsValid()");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// IsValid @ 149d58160

bool __thiscall FPCGSingleNodeConverter::IsValid(FPCGSingleNodeConverter *this)

{
  if ((this->_padding_ != 0) &&
     ((this->GeneratedNode != (UPCGNode *)0x0 || ((this->_padding_ & 0x400) == 0)))) {
    return true;
  }
  return false;
}

