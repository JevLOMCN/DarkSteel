// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 59

// FAutomationReport @ 148c534a0

FAutomationReport * __thiscall
FAutomationReport::FAutomationReport
          (FAutomationReport *this,FAutomationTestInfo *param_1,bool param_2)

{
  FAutomationTestExcludelistEntry *this_00;
  EAutomationTestFlags EVar1;
  UAutomationTestExcludelist *this_01;
  FAutomationTestExcludelistEntry *pFVar2;
  
  this->bIsParent = param_2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->bEnabled = false;
  (this->ChildReports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildReports).ArrayNum = 0;
  (this->ChildReports).ArrayMax = 0;
  *(undefined8 *)&this->ChildReportNameHashes = 0;
  *(undefined8 *)&(this->ChildReportNameHashes).field_0x8 = 0;
  *(undefined8 *)&(this->ChildReportNameHashes).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FAutomationReport__6B_;
  this->bNodeExpandInUI = false;
  this->bSelfPassesFilter = false;
  this->SupportFlags = 0;
  *(undefined4 *)&(this->ChildReportNameHashes).field_0x28 = 0;
  *(undefined4 *)&(this->ChildReportNameHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildReportNameHashes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChildReportNameHashes).field_0x34 = 0;
  *(undefined8 *)&(this->ChildReportNameHashes).field_0x40 = 0;
  *(undefined4 *)&(this->ChildReportNameHashes).field_0x48 = 0;
  (this->FilteredChildReports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredChildReports).ArrayNum = 0;
  (this->FilteredChildReports).ArrayMax = 0;
  (this->Results).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Results).ArrayNum = 0;
  (this->Results).ArrayMax = 0;
  FAutomationTestInfo::FAutomationTestInfo(&this->TestInfo,param_1);
  this_00 = &this->ExcludeTestInfo;
  (this_00->FullTestName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludeTestInfo).FullTestName.Data.ArrayNum = 0;
  (this->ExcludeTestInfo).FullTestName.Data.ArrayMax = 0;
  *(undefined8 *)&(this->ExcludeTestInfo).Platforms.Elements = 0;
  *(undefined8 *)&(this->ExcludeTestInfo).Platforms.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExcludeTestInfo).Platforms.Elements.field_0x20 = 0;
  (this->ExcludeTestInfo).bIsPropagated = false;
  *(undefined4 *)&(this->ExcludeTestInfo).Platforms.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExcludeTestInfo).Platforms.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExcludeTestInfo).Platforms.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExcludeTestInfo).Platforms.Elements.field_0x34 = 0;
  (this->ExcludeTestInfo).Platforms.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExcludeTestInfo).Platforms.HashSize = 0;
  (this->ExcludeTestInfo).Map.ComparisonIndex = 0;
  (this->ExcludeTestInfo).Map.Number = 0;
  (this->ExcludeTestInfo).Test.ComparisonIndex = 0;
  (this->ExcludeTestInfo).Test.Number = 0;
  (this->ExcludeTestInfo).Reason.ComparisonIndex = 0;
  (this->ExcludeTestInfo).Reason.Number = 0;
  *(undefined8 *)&(this->ExcludeTestInfo).RHIs.Elements = 0;
  *(undefined8 *)&(this->ExcludeTestInfo).RHIs.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExcludeTestInfo).RHIs.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ExcludeTestInfo).RHIs.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExcludeTestInfo).RHIs.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExcludeTestInfo).RHIs.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExcludeTestInfo).RHIs.Elements.field_0x34 = 0;
  (this->ExcludeTestInfo).RHIs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExcludeTestInfo).RHIs.HashSize = 0;
  (this->ExcludeTestInfo).Warn = false;
  EVar1 = (this->TestInfo).TestFlags;
  this->bNeedToSkip = false;
  if (EVar1 == SmokeFilter) {
    this->bEnabled = true;
  }
  if (1 < (this->TestInfo).FullTestPath.Data.ArrayNum) {
    this_01 = UAutomationTestExcludelist::Get();
    pFVar2 = UAutomationTestExcludelist::GetExcludeTestEntry(this_01,&(this->TestInfo).FullTestPath)
    ;
    if (pFVar2 != (FAutomationTestExcludelistEntry *)0x0) {
      FAutomationTestExcludelistEntry::operator=(this_00,pFVar2);
      FAutomationTestExcludelistEntry::SetPropagation(this_00,&(this->TestInfo).FullTestPath);
      this->bNeedToSkip = true;
    }
  }
  return this;
}

// AddArtifact @ 148c55900

void __thiscall
FAutomationReport::AddArtifact
          (FAutomationReport *this,int param_1,int param_2,FAutomationArtifact *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  FMemScope local_res8;
  FLLMScope local_res10 [2];
  
  lVar6 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Results).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("( ClusterIndex >= 0 ) && ( ClusterIndex < Results.Num() )",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationReport.cpp"
                         ,0x1d8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Results).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_2 < *(int *)((this->Results).AllocatorInstance.Data + lVar6 * 0x10 + 8))
    goto LAB_148c559e6;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("( PassIndex >= 0 ) && ( PassIndex < Results[ClusterIndex].Num() )",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationReport.cpp"
                     ,0x1d9,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_148c559e6:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name475,L"AutomationTest/Report");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name475,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,&LLMScope_Name475,true);
  uVar4 = 0;
  if (param_1 < (this->Results).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Results).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar6 * 0x10 + 8)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar6 = *(longlong *)(pFVar1 + lVar6 * 0x10) + (longlong)param_2 * 0x40;
  if (((*(FAutomationArtifact **)(lVar6 + 0x18) <= param_3) &&
      (param_3 < *(FAutomationArtifact **)(lVar6 + 0x18) + *(int *)(lVar6 + 0x24))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = *(int *)(lVar6 + 0x20);
  if (iVar5 == *(int *)(lVar6 + 0x24)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8c8,(ForAnyElementType *)(lVar6 + 0x18),(int *)(lVar6 + 0x24));
  }
  *(int *)(lVar6 + 0x20) = iVar5 + 1;
  FAutomationArtifact::FAutomationArtifact
            ((FAutomationArtifact *)((longlong)iVar5 * 200 + *(longlong *)(lVar6 + 0x18)),param_3);
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// ClustersUpdated @ 148c58180

void __thiscall FAutomationReport::ClustersUpdated(FAutomationReport *this,int param_1)

{
  TArray<TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FMemScope local_res8;
  FLLMScope local_res10 [2];
  ForAnyElementType local_98;
  undefined8 local_90;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name372,L"AutomationTest/Report");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name372,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,&LLMScope_Name372,true);
  uVar9 = 0;
  (this->TestInfo).NumDevicesCurrentlyRunningTest = 0;
  this->SupportFlags = 0;
  if (-1 < param_1) {
    uVar7 = 1;
    uVar12 = (ulonglong)(param_1 + 1);
    do {
      uVar9 = uVar9 | uVar7;
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    this->SupportFlags = uVar9;
  }
  iVar6 = (this->Results).ArrayNum;
  if (iVar6 < param_1) {
    pTVar1 = &this->Results;
    uVar12 = (ulonglong)(uint)(param_1 - iVar6);
    do {
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90 = 0;
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&local_98,(int *)((longlong)&local_90 + 4));
      local_90 = CONCAT44(local_90._4_4_,iVar6 + 1);
      lVar8 = (longlong)iVar6 * 0x40;
      *(undefined4 *)(local_98.Data + lVar8 + 4) = 0;
      local_98.Data[lVar8].field_0x0 = 0;
      *(undefined8 *)(local_98.Data + lVar8 + 8) = 0;
      *(undefined8 *)(local_98.Data + lVar8 + 0x10) = 0;
      *(undefined8 *)(local_98.Data + lVar8 + 0x18) = 0;
      *(undefined8 *)(local_98.Data + lVar8 + 0x20) = 0;
      *(undefined8 *)(local_98.Data + lVar8 + 0x28) = 0;
      *(undefined8 *)(local_98.Data + lVar8 + 0x30) = 0;
      *(undefined8 *)(local_98.Data + lVar8 + 0x38) = 0;
      DestructItems<FAutomationExecutionEntry,int>((FAutomationExecutionEntry *)0x0,0);
      DestructItems<FAutomationArtifact,int>((FAutomationArtifact *)0x0,0);
      pFVar10 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 <
           pFVar10 + (longlong)(this->Results).ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (this->Results).ArrayNum;
      if (iVar6 == (this->Results).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar1->AllocatorInstance,&(this->Results).ArrayMax);
      }
      FVar4.Data = local_98.Data;
      pFVar10 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      (this->Results).ArrayNum = iVar6 + 1;
      *(undefined8 *)pFVar10 = 0;
      iVar6 = (int)local_90;
      *(int *)(pFVar10 + 8) = (int)local_90;
      if ((int)local_90 == 0) {
        *(int *)(pFVar10 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,(int)local_90,0,(ForAnyElementType *)pFVar10,(int)local_90,
                   (int *)(pFVar10 + 0xc));
        ConstructItems<FAutomationTestResults,FAutomationTestResults,int>
                  (*(void **)pFVar10,(FAutomationTestResults *)FVar4.Data,iVar6);
      }
      DestructItems<FAutomationTestResults,int>
                ((FAutomationTestResults *)local_98.Data,(int)local_90);
      if ((FAutomationTestResults *)local_98.Data != (FAutomationTestResults *)0x0) {
        FMemory::Free(local_98.Data);
      }
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  else if (param_1 < iVar6) {
    uVar9 = iVar6 - param_1;
    if (((int)(uVar9 | param_1) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar9 != 0) {
      TArray<TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(&this->Results,param_1,uVar9);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&(this->Results).AllocatorInstance,(this->Results).ArrayNum,
                 &(this->Results).ArrayMax);
    }
  }
  uVar11 = 0;
  uVar12 = uVar11;
  if (0 < (this->ChildReports).ArrayNum) {
    do {
      uVar7 = (uint)uVar11;
      uVar9 = 0;
      if ((int)uVar7 < (this->ChildReports).ArrayNum) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (this->ChildReports).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar10 + uVar12) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar2 = *(longlong **)(pFVar10 + uVar12);
      (**(code **)(*plVar2 + 0xf0))(plVar2,param_1);
      uVar11 = (ulonglong)(uVar7 + 1);
      uVar12 = uVar12 + 0x10;
    } while ((int)(uVar7 + 1) < (this->ChildReports).ArrayNum);
  }
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// Empty @ 148c591b0

void __thiscall FAutomationReport::Empty(FAutomationReport *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  
  DestructItems<TSharedPtr<IAutomationReport,1>,int>
            ((TSharedPtr<IAutomationReport,1> *)(this->ChildReports).AllocatorInstance.Data,
             (this->ChildReports).ArrayNum);
  piVar1 = &(this->ChildReports).ArrayMax;
  (this->ChildReports).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ChildReports).AllocatorInstance,0,piVar1);
  }
  bVar4 = 1 < *(int *)&(this->ChildReportNameHashes).field_0x48;
  if (!bVar4) {
    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->ChildReportNameHashes);
  }
  puVar2 = &(this->ChildReportNameHashes).field_0xc;
  *(undefined4 *)&(this->ChildReportNameHashes).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&this->ChildReportNameHashes,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->ChildReportNameHashes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChildReportNameHashes).field_0x34 = 0;
  iVar3 = *(int *)&(this->ChildReportNameHashes).field_0x2c;
  *(undefined4 *)&(this->ChildReportNameHashes).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->ChildReportNameHashes).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ChildReportNameHashes).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->ChildReportNameHashes).field_0x48 = 1;
    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->ChildReportNameHashes);
  }
  DestructItems<TSharedPtr<IAutomationReport,1>,int>
            ((TSharedPtr<IAutomationReport,1> *)(this->FilteredChildReports).AllocatorInstance.Data,
             (this->FilteredChildReports).ArrayNum);
  piVar1 = &(this->FilteredChildReports).ArrayMax;
  (this->FilteredChildReports).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->FilteredChildReports).AllocatorInstance,0,piVar1);
  }
  return;
}

// EnsureReportExists @ 148c593a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSharedPtr<IAutomationReport,1> * __thiscall
FAutomationReport::EnsureReportExists
          (FAutomationReport *this,TSharedPtr<IAutomationReport,1> *__return_storage_ptr__,
          FAutomationTestInfo *param_1,int param_2,int param_3)

{
  int *piVar1;
  EAutomationTestFlags EVar2;
  code *pcVar3;
  IAutomationReport *pIVar4;
  FSharedReferencer<1> FVar5;
  undefined8 uVar6;
  ForAnyElementType _Src;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  FAutomationReport *pFVar13;
  TSharedPtr<IAutomationReport,1> *pTVar14;
  int iVar15;
  int iVar16;
  wchar_t *pwVar17;
  undefined1 *puVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  FLLMScope local_res8 [2];
  uint local_res10 [2];
  TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> local_res18;
  TSharedPtr<IAutomationReport,1> local_1e8;
  undefined1 local_1d8 [40];
  undefined8 local_1b0;
  FString local_1a8;
  FString local_198;
  FString local_188;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  TRawPtrProxy<FAutomationReport> local_158;
  ForAnyElementType local_150;
  FMemScope local_148;
  FString local_140;
  FAutomationTestInfo local_128;
  FString local_88;
  uint *local_78;
  uint *local_70;
  IAutomationReport *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  local_1d8._8_4_ = (param_1->DisplayName).Data.ArrayNum;
  lVar20 = (longlong)(int)local_1d8._8_4_;
  pFVar19 = (param_1->DisplayName).Data.AllocatorInstance.Data;
  local_1d8._0_8_ = (FScriptContainerElement *)0x0;
  local_res18.Value._0_4_ = param_2;
  if (local_1d8._8_4_ == 0) {
    local_1d8._12_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1d8._8_4_,0,(ForAnyElementType *)local_1d8,local_1d8._8_4_,
               (int *)(local_1d8 + 0xc));
    memcpy((void *)local_1d8._0_8_,pFVar19,lVar20 * 2);
  }
  local_1d8._24_4_ = (param_1->FullTestPath).Data.ArrayNum;
  lVar20 = (longlong)(int)local_1d8._24_4_;
  pFVar19 = (param_1->FullTestPath).Data.AllocatorInstance.Data;
  local_1d8._16_8_ = (FScriptContainerElement *)0x0;
  if (local_1d8._24_4_ == 0) {
    local_1d8._28_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1d8._24_4_,0,(ForAnyElementType *)(local_1d8 + 0x10),local_1d8._24_4_,
               (int *)(local_1d8 + 0x1c));
    memcpy((void *)local_1d8._16_8_,pFVar19,lVar20 * 2);
  }
  local_1d8._32_8_ = (FScriptContainerElement *)0x0;
  local_1b0._0_4_ = 0;
  local_1b0._4_4_ = 0;
  ::FString::FString(&local_88,L".");
  bVar7 = ::FString::Split(&param_1->DisplayName,&local_88,(FString *)local_1d8,
                           (FString *)(local_1d8 + 0x20));
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((!bVar7) && ((FAutomationTestInfo *)local_1d8 != param_1)) {
    iVar9 = (param_1->DisplayName).Data.ArrayNum;
    pFVar19 = (param_1->DisplayName).Data.AllocatorInstance.Data;
    local_1d8._8_4_ = iVar9;
    if ((iVar9 == 0) && (local_1d8._12_4_ == 0)) {
      local_1d8._12_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar9,local_1d8._12_4_,(ForAnyElementType *)local_1d8,iVar9,
                 (int *)(local_1d8 + 0xc));
      if (iVar9 != 0) {
        memcpy((void *)local_1d8._0_8_,pFVar19,(longlong)iVar9 * 2);
      }
    }
  }
  uVar6 = local_1d8._32_8_;
  iVar9 = (int)local_1b0;
  lVar20 = (longlong)(int)local_1b0;
  iVar10 = (int)local_1b0 + -1;
  if ((int)local_1b0 == 0) {
    iVar10 = 0;
  }
  iVar15 = 0;
  if (iVar10 != 0) {
    if (param_1 != (FAutomationTestInfo *)(local_1d8 + 0x20)) {
      iVar10 = (param_1->DisplayName).Data.ArrayMax;
      piVar1 = &(param_1->DisplayName).Data.ArrayMax;
      (param_1->DisplayName).Data.ArrayNum = (int)local_1b0;
      if (((int)local_1b0 == 0) && (iVar10 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_1b0,iVar10,(ForAnyElementType *)param_1,(int)local_1b0,piVar1);
        if (iVar9 != 0) {
          memcpy((param_1->DisplayName).Data.AllocatorInstance.Data,(void *)uVar6,lVar20 * 2);
        }
      }
    }
    iVar9 = (int)local_1b0;
    if ((int)local_1b0 == 0) {
      iVar9 = 1;
    }
    iVar10 = local_1d8._24_4_ + -1;
    if (local_1d8._24_4_ == 0) {
      iVar10 = 0;
    }
    if (iVar10 - iVar9 < iVar10) {
      iVar10 = iVar10 - iVar9;
    }
    iVar16 = iVar15;
    if (0 < iVar10) {
      iVar16 = iVar10;
    }
    ::FString::RemoveAt((FString *)(local_1d8 + 0x10),iVar16,iVar9,Default);
  }
  if (local_1d8._24_4_ == 0) {
    pwVar17 = L"";
  }
  else {
    iVar15 = local_1d8._24_4_ + -1;
    pwVar17 = (wchar_t *)local_1d8._16_8_;
  }
  local_res10[0] = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar17);
  local_1e8.Object = (IAutomationReport *)0x0;
  local_1e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*(int *)&(this->ChildReportNameHashes).field_0x8 !=
      *(int *)&(this->ChildReportNameHashes).field_0x34) {
    puVar18 = *(undefined1 **)&(this->ChildReportNameHashes).field_0x40;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->ChildReportNameHashes).field_0x38;
    }
    iVar9 = *(int *)(puVar18 +
                    (ulonglong)
                    (*(int *)&(this->ChildReportNameHashes).field_0x48 - 1U & local_res10[0]) * 4);
    if (iVar9 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->ChildReportNameHashes + (longlong)iVar9 * 0x10) ==
            local_res10[0]) {
          uVar11 = (this->ChildReports).ArrayNum - 1;
          if (-1 < (int)uVar11) {
            lVar20 = (longlong)(int)uVar11 << 4;
            goto LAB_148c59680;
          }
          break;
        }
        iVar9 = *(int *)(*(longlong *)&this->ChildReportNameHashes + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  goto LAB_148c5975c;
LAB_148c59680:
  do {
    uVar8 = 0;
    if ((int)uVar11 < (this->ChildReports).ArrayNum) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar14 = (TSharedPtr<IAutomationReport,1> *)(*pcVar3)();
      return pTVar14;
    }
    pFVar19 = (this->ChildReports).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar19 + lVar20) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar14 = (TSharedPtr<IAutomationReport,1> *)(*pcVar3)();
      return pTVar14;
    }
    puVar12 = (undefined8 *)(**(code **)(**(longlong **)(pFVar19 + lVar20) + 0x20))();
    iVar9 = *(int *)(puVar12 + 1);
    if (iVar9 == local_1d8._24_4_) {
      if (1 < iVar9) {
        iVar9 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar12,(wchar_t *)local_1d8._16_8_);
        bVar7 = iVar9 == 0;
        goto LAB_148c59733;
      }
LAB_148c5984c:
      uVar8 = 0;
      if ((int)uVar11 < (this->ChildReports).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar14 = (TSharedPtr<IAutomationReport,1> *)(*pcVar3)();
        return pTVar14;
      }
      FVar5.ReferenceController = local_1e8.SharedReferenceCount.ReferenceController;
      pFVar19 = (this->ChildReports).AllocatorInstance.Data;
      local_1e8.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar19 + (longlong)(int)uVar11 * 0x10 + 8);
      local_1e8.Object = *(IAutomationReport **)(pFVar19 + (longlong)(int)uVar11 * 0x10);
      if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar5.ReferenceController);
      break;
    }
    bVar7 = iVar9 + local_1d8._24_4_ == 1;
LAB_148c59733:
    if (bVar7) goto LAB_148c5984c;
    lVar20 = lVar20 + -0x10;
    uVar11 = uVar11 - 1;
  } while (-1 < (int)uVar11);
  if (local_1e8.Object != (IAutomationReport *)0x0) goto LAB_148c59cfb;
LAB_148c5975c:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name622,L"AutomationTest/Report");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name622,false,None,Default,true);
  FMemScope::FMemScope(&local_148,&LLMScope_Name622,true);
  iVar9 = (int)local_1b0 + -1;
  if ((int)local_1b0 == 0) {
    iVar9 = 0;
  }
  if (iVar9 == 0) {
    pFVar13 = ::operator_new(0x238);
    if (pFVar13 == (FAutomationReport *)0x0) {
      local_158.Object = (FAutomationReport *)0x0;
    }
    else {
      local_158.Object = FAutomationReport(pFVar13,param_1,false);
      if (((local_158.Object != (FAutomationReport *)0x0) && ((local_158.Object)->_padding_ != 0))
         && (((local_158.Object)->_padding_ != 0 &&
             ((0 < *(int *)((local_158.Object)->_padding_ + 8) &&
              (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!InObject || !InObject->DoesSharedInstanceExist()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x7a5,L"Trying to share an already-shared object"), bVar7)))))) {
        pcVar3 = (code *)swi(3);
        pTVar14 = (TSharedPtr<IAutomationReport,1> *)(*pcVar3)();
        return pTVar14;
      }
    }
    TSharedPtr<IAutomationReport,1>::operator=<FAutomationReport>(&local_1e8,&local_158);
  }
  else {
    uVar11 = param_1->NumParticipantsRequired;
    local_168._0_8_ = (FScriptContainerElement *)0x0;
    local_178._0_8_ = (FScriptContainerElement *)0x0;
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    EVar2 = param_1->TestFlags;
    local_168._8_8_ = (FScriptContainerElement *)0x0;
    local_178._8_8_ = (FScriptContainerElement *)0x0;
    local_188.Data.ArrayNum = 0;
    local_188.Data.ArrayMax = 0;
    local_198.Data.ArrayNum = 0;
    local_198.Data.ArrayMax = 0;
    local_1a8.Data.ArrayNum = 0;
    local_1a8.Data.ArrayMax = 0;
    ::FString::FString(&local_140,L"");
    uVar6 = local_1d8._0_8_;
    lVar20 = (longlong)(int)local_1d8._8_4_;
    local_128.DisplayName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.DisplayName.Data.ArrayNum = local_1d8._8_4_;
    if (local_1d8._8_4_ == 0) {
      local_128.DisplayName.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1d8._8_4_,0,(ForAnyElementType *)&local_128,local_1d8._8_4_,
                 &local_128.DisplayName.Data.ArrayMax);
      memcpy(local_128.DisplayName.Data.AllocatorInstance.Data,(void *)uVar6,lVar20 * 2);
    }
    uVar6 = local_1d8._16_8_;
    lVar20 = (longlong)(int)local_1d8._24_4_;
    local_128.FullTestPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.FullTestPath.Data.ArrayNum = local_1d8._24_4_;
    if (local_1d8._24_4_ == 0) {
      local_128.FullTestPath.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1d8._24_4_,0,(ForAnyElementType *)&local_128.FullTestPath,
                 local_1d8._24_4_,&local_128.FullTestPath.Data.ArrayMax);
      memcpy(local_128.FullTestPath.Data.AllocatorInstance.Data,(void *)uVar6,lVar20 * 2);
    }
    _Src.Data = local_140.Data.AllocatorInstance.Data;
    local_128.TestName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.TestName.Data.ArrayNum = local_140.Data.ArrayNum;
    if (local_140.Data.ArrayNum == 0) {
      local_128.TestName.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_140.Data.ArrayNum,0,(ForAnyElementType *)&local_128.TestName,
                 local_140.Data.ArrayNum,&local_128.TestName.Data.ArrayMax);
      memcpy(local_128.TestName.Data.AllocatorInstance.Data,_Src.Data,
             (longlong)local_140.Data.ArrayNum * 2);
    }
    ::FString::FString(&local_128.TestTags,(FString *)local_168);
    ::FString::FString(&local_128.TestParameter,&local_1a8);
    ::FString::FString(&local_128.SourceFile,&local_198);
    local_128.SourceFileLine = 0;
    ::FString::FString(&local_128.AssetPath,&local_188);
    ::FString::FString(&local_128.OpenCommand,(FString *)local_178);
    local_128.NumDevicesCurrentlyRunningTest = 0;
    local_128.TestFlags = EVar2;
    local_128.NumParticipantsRequired = uVar11;
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_178._0_8_);
    }
    if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_168._0_8_);
    }
    pFVar13 = ::operator_new(0x238);
    if (pFVar13 == (FAutomationReport *)0x0) {
      local_150.Data = (FScriptContainerElement *)0x0;
    }
    else {
      local_150.Data = (FScriptContainerElement *)FAutomationReport(pFVar13,&local_128,true);
      if (((((FAutomationReport *)local_150.Data != (FAutomationReport *)0x0) &&
           (((FAutomationReport *)local_150.Data)->_padding_ != 0)) &&
          (((FAutomationReport *)local_150.Data)->_padding_ != 0)) &&
         ((0 < *(int *)(((FAutomationReport *)local_150.Data)->_padding_ + 8) &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar7)))) {
        pcVar3 = (code *)swi(3);
        pTVar14 = (TSharedPtr<IAutomationReport,1> *)(*pcVar3)();
        return pTVar14;
      }
    }
    TSharedPtr<IAutomationReport,1>::operator=<FAutomationReport>
              (&local_1e8,(TRawPtrProxy<FAutomationReport> *)&local_150);
    FAutomationTestInfo::~FAutomationTestInfo(&local_128);
  }
  iVar9 = AlgoImpl::
          UpperBoundInternal<TSharedPtr<IAutomationReport,1>_const_,int,TSharedPtr<IAutomationReport,1>,FIdentityFunctor,_FAutomationReport::EnsureReportExists_::__l19::<lambda_1>_>
                    ((TSharedPtr<IAutomationReport,1> *)(this->ChildReports).AllocatorInstance.Data,
                     (this->ChildReports).ArrayNum,&local_1e8,
                     (FIdentityFunctor)local_res8[0].Tracker,(<lambda_1>)local_res8[0].Tracker);
  pTVar14 = (TSharedPtr<IAutomationReport,1> *)(this->ChildReports).AllocatorInstance.Data;
  if (((pTVar14 <= &local_1e8) && (&local_1e8 < pTVar14 + (this->ChildReports).ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TSharedPtr<IAutomationReport,1> *)(*pcVar3)();
    return pTVar14;
  }
  iVar10 = (this->ChildReports).ArrayNum;
  piVar1 = &(this->ChildReports).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this->ChildReports).AllocatorInstance,piVar1);
  }
  pFVar19 = (this->ChildReports).AllocatorInstance.Data;
  (this->ChildReports).ArrayNum = iVar10 + 1;
  lVar20 = (longlong)iVar9 * 0x10;
  pFVar19 = pFVar19 + lVar20;
  memmove(pFVar19 + 0x10,pFVar19,(longlong)(iVar10 - iVar9) << 4);
  pFVar19 = (this->ChildReports).AllocatorInstance.Data;
  *(IAutomationReport **)(pFVar19 + lVar20) = local_1e8.Object;
  *(TReferenceControllerBase<1> **)(pFVar19 + lVar20 + 8) =
       local_1e8.SharedReferenceCount.ReferenceController;
  if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = local_res10;
  local_70 = local_res10;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->ChildReportNameHashes,&local_res18,(bool *)&local_78);
  FMemScope::~FMemScope(&local_148);
  FLLMScope::~FLLMScope(local_res8);
  if ((local_1e8.Object == (IAutomationReport *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TSharedPtr<IAutomationReport,1> *)(*pcVar3)();
    return pTVar14;
  }
LAB_148c59cfb:
  iVar9 = (int)local_res18.Value;
  (**(code **)((local_1e8.Object)->_padding_ + 0xc0))(local_1e8.Object,(int)local_res18.Value);
  if ((local_1e8.Object == (IAutomationReport *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TSharedPtr<IAutomationReport,1> *)(*pcVar3)();
    return pTVar14;
  }
  (**(code **)((local_1e8.Object)->_padding_ + 200))(local_1e8.Object,param_1->TestFlags);
  if ((local_1e8.Object == (IAutomationReport *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TSharedPtr<IAutomationReport,1> *)(*pcVar3)();
    return pTVar14;
  }
  pIVar4 = local_1e8.Object;
  pcVar3 = *(code **)((local_1e8.Object)->_padding_ + 0x188);
  if ((local_1e8.Object == (IAutomationReport *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar14 = (TSharedPtr<IAutomationReport,1> *)(*pcVar3)();
    return pTVar14;
  }
  uVar11 = param_1->NumParticipantsRequired;
  iVar10 = (**(code **)((local_1e8.Object)->_padding_ + 0x180))();
  if ((int)uVar11 < iVar10) {
    if ((local_1e8.Object == (IAutomationReport *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar14 = (TSharedPtr<IAutomationReport,1> *)(*pcVar3)();
      return pTVar14;
    }
    uVar11 = (**(code **)((local_1e8.Object)->_padding_ + 0x180))();
  }
  else {
    uVar11 = param_1->NumParticipantsRequired;
  }
  (*pcVar3)(pIVar4,uVar11);
  __return_storage_ptr__->Object = (IAutomationReport *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  iVar10 = (int)local_1b0 + -1;
  if ((int)local_1b0 == 0) {
    iVar10 = 0;
  }
  if (iVar10 == 0) {
    if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68 = __return_storage_ptr__->Object;
    local_50 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    __return_storage_ptr__->Object = local_1e8.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_1e8.SharedReferenceCount.ReferenceController;
    pTStack_60 = local_50;
  }
  else {
    if ((local_1e8.Object == (IAutomationReport *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar14 = (TSharedPtr<IAutomationReport,1> *)(*pcVar3)();
      return pTVar14;
    }
    pTVar14 = (TSharedPtr<IAutomationReport,1> *)
              (**(code **)((local_1e8.Object)->_padding_ + 0x148))
                        (local_1e8.Object,local_58,param_1,iVar9,param_3);
    if (__return_storage_ptr__ != pTVar14) {
      __return_storage_ptr__->Object = pTVar14->Object;
      pTVar14->Object = (IAutomationReport *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&pTVar14->SharedReferenceCount);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  if ((FScriptContainerElement *)local_1d8._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1d8._32_8_);
  }
  if ((FScriptContainerElement *)local_1d8._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1d8._16_8_);
  }
  if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1d8._0_8_);
  }
  return __return_storage_ptr__;
}

// ExpandInUI @ 148c5b190

bool __thiscall FAutomationReport::ExpandInUI(FAutomationReport *this)

{
  return this->bNodeExpandInUI;
}

// GetAssetPath @ 148c5ca40

FString * __thiscall
FAutomationReport::GetAssetPath(FAutomationReport *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&(this->TestInfo).AssetPath);
  return __return_storage_ptr__;
}

// GetChildReports @ 148c5ca70

TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> * __thiscall
FAutomationReport::GetChildReports(FAutomationReport *this)

{
  return &this->ChildReports;
}

// GetCommand @ 148c5cdb0

FString * __thiscall
FAutomationReport::GetCommand(FAutomationReport *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&(this->TestInfo).TestName);
  return __return_storage_ptr__;
}

// GetCompletionStatus @ 148c5cde0

void __thiscall
FAutomationReport::GetCompletionStatus
          (FAutomationReport *this,int param_1,int param_2,FAutomationCompleteState *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  
  uVar8 = (ulonglong)param_1;
  uVar9 = (ulonglong)param_2;
  cVar3 = (**(code **)(this->_padding_ + 0xd0))(this,param_1);
  if ((cVar3 != '\0') && ((this->ChildReports).ArrayNum == 0)) {
    uVar7 = 0;
    if (param_1 < (this->Results).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar11 = (this->Results).AllocatorInstance.Data;
    lVar10 = uVar8 * 0x10;
    uVar7 = 0;
    if (param_2 < *(int *)(pFVar11 + lVar10 + 8)) {
      uVar7 = (uint)~param_2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    cVar3 = *(char *)(uVar9 * 0x40 + *(longlong *)(pFVar11 + lVar10));
    cVar5 = (**(code **)(this->_padding_ + 0xa0))(this);
    if ((cVar5 != '\0') && (param_3->TotalEnabled = param_3->TotalEnabled + 1, cVar3 == '\x01')) {
      param_3->NumEnabledInProcess = param_3->NumEnabledInProcess + 1;
    }
    uVar7 = 0;
    if (param_1 < (this->Results).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar11 = (this->Results).AllocatorInstance.Data + lVar10;
    uVar7 = 0;
    if (param_2 < *(int *)(pFVar11 + 8)) {
      uVar7 = (uint)~param_2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (0 < *(int *)(uVar9 * 0x40 + 0x38 + *(longlong *)pFVar11)) {
      cVar5 = (**(code **)(this->_padding_ + 0xa0))(this);
      if (cVar5 == '\0') {
        param_3->NumDisabledTestsWarnings = param_3->NumDisabledTestsWarnings + 1;
      }
      else {
        param_3->NumEnabledTestsWarnings = param_3->NumEnabledTestsWarnings + 1;
      }
    }
    if (cVar3 == '\x03') {
      cVar3 = (**(code **)(this->_padding_ + 0xa0))(this);
      uVar8 = (ulonglong)(uint)param_1;
      uVar9 = (ulonglong)(uint)param_2;
      if (cVar3 == '\0') {
        param_3->NumDisabledTestsPassed = param_3->NumDisabledTestsPassed + 1;
      }
      else {
        param_3->NumEnabledTestsPassed = param_3->NumEnabledTestsPassed + 1;
      }
    }
    else if (cVar3 == '\x02') {
      cVar3 = (**(code **)(this->_padding_ + 0xa0))(this);
      uVar8 = (ulonglong)(uint)param_1;
      uVar9 = (ulonglong)(uint)param_2;
      if (cVar3 == '\0') {
        param_3->NumDisabledTestsFailed = param_3->NumDisabledTestsFailed + 1;
      }
      else {
        param_3->NumEnabledTestsFailed = param_3->NumEnabledTestsFailed + 1;
      }
    }
    else if (cVar3 == '\x04') {
      cVar3 = (**(code **)(this->_padding_ + 0xa0))(this);
      uVar8 = (ulonglong)(uint)param_1;
      uVar9 = (ulonglong)(uint)param_2;
      if (cVar3 == '\0') {
        param_3->NumDisabledTestsCouldntBeRun = param_3->NumDisabledTestsCouldntBeRun + 1;
      }
      else {
        param_3->NumEnabledTestsCouldntBeRun = param_3->NumEnabledTestsCouldntBeRun + 1;
      }
    }
    else {
      uVar8 = (ulonglong)(uint)param_1;
      uVar9 = (ulonglong)(uint)param_2;
    }
  }
  uVar7 = 0;
  if (0 < (this->ChildReports).ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->ChildReports).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar11 = (this->ChildReports).AllocatorInstance.Data;
      if (*(longlong *)(pFVar11 + lVar10) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar1 = *(longlong **)(pFVar11 + lVar10);
      (**(code **)(*plVar1 + 0x110))(plVar1,uVar8 & 0xffffffff,uVar9 & 0xffffffff,param_3);
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar7 < (this->ChildReports).ArrayNum);
  }
  return;
}

// GetCurrentPassIndex @ 148c5d120

int __thiscall FAutomationReport::GetCurrentPassIndex(FAutomationReport *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = (longlong)param_1;
  uVar7 = 1;
  cVar3 = (**(code **)(this->_padding_ + 0xd0))(this,param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  lVar9 = 0x40;
  while( true ) {
    uVar5 = 0;
    if (param_1 < (this->Results).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    if (*(int *)((this->Results).AllocatorInstance.Data + lVar8 * 0x10 + 8) <= (int)uVar7) break;
    uVar5 = 0;
    if (param_1 < (this->Results).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    pFVar1 = (this->Results).AllocatorInstance.Data;
    uVar5 = 0;
    if ((int)uVar7 < *(int *)(pFVar1 + lVar8 * 0x10 + 8)) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    if (*(char *)(lVar9 + *(longlong *)(pFVar1 + lVar8 * 0x10)) == '\0') break;
    uVar7 = uVar7 + 1;
    lVar9 = lVar9 + 0x40;
  }
  return uVar7 - 1;
}

// GetDisplayName @ 148c5daa0

FString * __thiscall FAutomationReport::GetDisplayName(FAutomationReport *this)

{
  return &(this->TestInfo).DisplayName;
}

// GetDisplayNameWithDecoration @ 148c5dab0

FString * __thiscall
FAutomationReport::GetDisplayNameWithDecoration
          (FAutomationReport *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  FString local_18;
  
  local_20 = (this->TestInfo).DisplayName.Data.ArrayNum;
  lVar1 = (longlong)local_20;
  _Src = (this->TestInfo).DisplayName.Data.AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,_Src,lVar1 * 2);
  }
  if ((this->FilteredChildReports).ArrayNum == 0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_20;
    (__return_storage_ptr__->Data).ArrayMax = local_1c;
  }
  else {
    (**(code **)(this->_padding_ + 0x78))(this);
    ::FString::PrintfImpl(&local_18,L" (%d)");
    ::FString::ConcatFF(__return_storage_ptr__,&(this->TestInfo).DisplayName,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetDurationRange @ 148c5dbd0

bool __thiscall
FAutomationReport::GetDurationRange(FAutomationReport *this,float *param_1,float *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  bool local_res8;
  float local_res20 [2];
  float local_78 [2];
  longlong local_70;
  
  *param_1 = 3.4028235e+38;
  bVar8 = false;
  uVar12 = 0;
  *param_2 = 0.0;
  local_res8 = false;
  fVar16 = 0.0;
  fVar17 = 0.0;
  if (0 < (this->ChildReports).ArrayNum) {
    lVar10 = 0;
    do {
      local_res20[0] = 3.4028235e+38;
      local_78[0] = 0.0;
      uVar13 = 0;
      if ((int)uVar12 < (this->ChildReports).ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar1 = (this->ChildReports).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + lVar10) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      plVar2 = *(longlong **)(pFVar1 + lVar10);
      cVar7 = (**(code **)(*plVar2 + 0x170))(plVar2,local_res20,local_78);
      if (cVar7 != '\0') {
        fVar16 = fVar16 + local_res20[0];
        fVar17 = fVar17 + local_78[0];
        bVar8 = true;
      }
      uVar12 = uVar12 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar12 < (this->ChildReports).ArrayNum);
    local_res8 = bVar8;
    if (bVar8 != false) {
      *param_1 = fVar16;
      *param_2 = fVar17;
    }
  }
  uVar12 = 0;
  if ((this->Results).ArrayNum < 1) {
    return local_res8;
  }
  local_70 = 0;
  bVar8 = local_res8;
  do {
    uVar13 = 0;
    uVar15 = ~uVar12 >> 0x1f;
    lVar10 = 0;
    while( true ) {
      lVar4 = local_70;
      lVar11 = (longlong)(int)uVar12;
      uVar9 = 0;
      if ((int)uVar12 < (this->Results).ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (*(int *)((this->Results).AllocatorInstance.Data + lVar4 + 8) <= (int)uVar13) break;
      uVar9 = 0;
      if ((int)uVar12 < (this->Results).ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar1 = (this->Results).AllocatorInstance.Data;
      uVar14 = ~uVar13 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < *(int *)(pFVar1 + lVar11 * 0x10 + 8)) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (*(char *)(lVar10 + *(longlong *)(pFVar1 + lVar11 * 0x10)) == '\x03') {
LAB_148c5deed:
        uVar9 = 0;
        if ((int)uVar12 < (this->Results).ArrayNum) {
          uVar9 = uVar15;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pFVar1 = (this->Results).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar13 < *(int *)(pFVar1 + lVar11 * 0x10 + 8)) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        fVar16 = *(float *)(lVar10 + 4 + *(longlong *)(pFVar1 + lVar11 * 0x10));
        if (*param_1 <= fVar16) {
          fVar16 = *param_1;
        }
        *param_1 = fVar16;
        uVar9 = 0;
        if ((int)uVar12 < (this->Results).ArrayNum) {
          uVar9 = uVar15;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pFVar1 = (this->Results).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar13 < *(int *)(pFVar1 + lVar11 * 0x10 + 8)) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        uVar13 = uVar13 + 1;
        local_res8 = true;
        fVar16 = *(float *)(*(longlong *)(pFVar1 + lVar11 * 0x10) + 4 + lVar10);
        lVar10 = lVar10 + 0x40;
        if (fVar16 <= *param_2) {
          fVar16 = *param_2;
        }
        *param_2 = fVar16;
        bVar8 = true;
      }
      else {
        uVar9 = 0;
        if ((int)uVar12 < (this->Results).ArrayNum) {
          uVar9 = uVar15;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pFVar1 = (this->Results).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar13 < *(int *)(pFVar1 + lVar11 * 0x10 + 8)) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if (*(char *)(lVar10 + *(longlong *)(pFVar1 + lVar11 * 0x10)) == '\x02') goto LAB_148c5deed;
        uVar13 = uVar13 + 1;
        lVar10 = lVar10 + 0x40;
        bVar8 = local_res8;
      }
    }
    local_70 = lVar4 + 0x10;
    uVar12 = uVar12 + 1;
    if ((this->Results).ArrayNum <= (int)uVar12) {
      return bVar8;
    }
  } while( true );
}

// GetEnabledTestNames @ 148c5e1b0

void __thiscall
FAutomationReport::GetEnabledTestNames
          (FAutomationReport *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FString *pFVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 local_res8 [2];
  FMemScope local_88;
  ForAnyElementType local_80;
  int local_78;
  int local_74;
  ForAnyElementType local_70;
  int local_68;
  int local_64;
  FString local_60;
  FString local_50;
  
  uVar12 = 0;
  local_res8[0] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name131,L"AutomationTest/Report");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope((FLLMScope *)local_res8,LLMScope_Name131,false,None,Default,true);
  FMemScope::FMemScope(&local_88,&LLMScope_Name131,true);
  if (((this->ChildReports).ArrayNum == 0) &&
     (cVar3 = (**(code **)(this->_padding_ + 0xa0))(this), cVar3 != '\0')) {
    iVar5 = (param_2->Data).ArrayNum;
    iVar8 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar8 = 0;
    }
    bVar4 = iVar8 < 1;
    if (bVar4) {
      pFVar7 = ::FString::FString(&local_50,&(this->TestInfo).DisplayName);
    }
    else {
      pFVar7 = ::FString::AppendChar(param_2,L'.');
      ::FString::ConcatFF(&local_60,pFVar7,&(this->TestInfo).DisplayName);
      pFVar7 = &local_60;
    }
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = (pFVar7->Data).ArrayNum;
    lVar9 = (longlong)local_78;
    pFVar11 = (pFVar7->Data).AllocatorInstance.Data;
    if (local_78 == 0) {
      local_74 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78,0,&local_80,local_78,&local_74);
      memcpy(local_80.Data,pFVar11,lVar9 * 2);
    }
    if ((bVar4) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if ((!bVar4) && (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    pFVar11 = (param_1->AllocatorInstance).Data;
    if (((pFVar11 <= (FScriptContainerElement *)&local_80) &&
        ((FScriptContainerElement *)&local_80 < pFVar11 + (longlong)param_1->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    _Src.Data = local_80.Data;
    pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    param_1->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar11->field_0x0 = 0;
    lVar9 = (longlong)local_78;
    *(int *)&pFVar11[8].field_0x0 = local_78;
    if (local_78 == 0) {
      *(int *)(pFVar11 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78,0,(ForAnyElementType *)pFVar11,local_78,(int *)(pFVar11 + 0xc));
      memcpy(*(void **)&pFVar11->field_0x0,_Src.Data,lVar9 * 2);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
  }
  else {
    if (1 < (param_2->Data).ArrayNum) {
      ::FString::AppendChars(param_2,L".",1);
    }
    iVar8 = (this->TestInfo).DisplayName.Data.ArrayNum;
    iVar5 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (param_2,(wchar_t *)(this->TestInfo).DisplayName.Data.AllocatorInstance.Data,iVar5);
    uVar13 = uVar12;
    if (0 < (this->ChildReports).ArrayNum) {
      do {
        uVar10 = (uint)uVar12;
        uVar6 = 0;
        if ((int)uVar10 < (this->ChildReports).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar11 = (this->ChildReports).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar11 + uVar13) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)(pFVar11 + uVar13);
        local_68 = (param_2->Data).ArrayNum;
        lVar9 = (longlong)local_68;
        pFVar11 = (param_2->Data).AllocatorInstance.Data;
        local_70.Data = (FScriptContainerElement *)0x0;
        pcVar2 = *(code **)(*plVar1 + 0x80);
        if (local_68 == 0) {
          local_64 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_68,0,&local_70,local_68,&local_64);
          memcpy(local_70.Data,pFVar11,lVar9 * 2);
        }
        (*pcVar2)(plVar1,param_1,&local_70);
        uVar12 = (ulonglong)(uVar10 + 1);
        uVar13 = uVar13 + 0x10;
      } while ((int)(uVar10 + 1) < (this->ChildReports).ArrayNum);
    }
  }
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope((FLLMScope *)local_res8);
  pFVar11 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  return;
}

// GetEnabledTestReports @ 148c5e6b0

void __thiscall
FAutomationReport::GetEnabledTestReports
          (FAutomationReport *this,
          TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  TSharedRef<IAutomationReport,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  IAutomationReport *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<IAutomationReport,1> local_18;
  
  iVar6 = (this->ChildReports).ArrayNum;
  if (iVar6 == 0) {
    cVar4 = (**(code **)(this->_padding_ + 0xa0))();
    if (cVar4 != '\0') {
      pTVar7 = TSharedFromThis<IAutomationReport,1>::AsShared
                         ((TSharedFromThis<IAutomationReport,1> *)&this->_padding_,&local_18);
      local_28 = pTVar7->Object;
      local_20 = (pTVar7->SharedReferenceCount).ReferenceController;
      if (local_20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_28) &&
          ((FScriptContainerElement *)&local_28 < pFVar8 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(IAutomationReport **)pFVar8 = local_28;
      *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_20;
      local_20 = (TReferenceControllerBase<1> *)0x0;
      local_28 = (IAutomationReport *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return;
    }
  }
  else {
    uVar9 = 0;
    if (0 < iVar6) {
      lVar10 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar9 < (this->ChildReports).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar8 = (this->ChildReports).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar8 + lVar10) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)(pFVar8 + lVar10);
        (**(code **)(*plVar1 + 0x158))(plVar1,param_1);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar9 < (this->ChildReports).ArrayNum);
    }
  }
  return;
}

// GetEnabledTestsNum @ 148c5e9a0

int __thiscall FAutomationReport::GetEnabledTestsNum(FAutomationReport *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar6 = 0;
  if (((this->ChildReports).ArrayNum == 0) &&
     (cVar3 = (**(code **)(this->_padding_ + 0xa0))(), cVar3 != '\0')) {
    return 1;
  }
  uVar8 = 0;
  if (0 < (this->ChildReports).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->ChildReports).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      pFVar1 = (this->ChildReports).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + lVar9) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      iVar7 = (**(code **)(**(longlong **)(pFVar1 + lVar9) + 0x98))();
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
      iVar6 = iVar6 + iVar7;
    } while ((int)uVar8 < (this->ChildReports).ArrayNum);
  }
  return iVar6;
}

// GetExcludeOptions @ 148c5eb00

TSharedPtr<FAutomationTestExcludeOptions,1> * __thiscall
FAutomationReport::GetExcludeOptions
          (FAutomationReport *this,
          TSharedPtr<FAutomationTestExcludeOptions,1> *__return_storage_ptr__)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  TSharedPtr<FAutomationTestExcludeOptions,1> *pTVar5;
  wchar_t *pwVar6;
  FName local_res8;
  TRawPtrProxy<FAutomationTestExcludeOptions> local_res10;
  
  if ((this->TestInfo).FullTestPath.Data.ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(this->TestInfo).FullTestPath.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar6);
  (this->ExcludeTestInfo).Test = local_res8;
  local_res10.Object = ::operator_new(0xb8);
  if (local_res10.Object == (FAutomationTestExcludeOptions *)0x0) {
    local_res10.Object = (FAutomationTestExcludeOptions *)0x0;
  }
  else {
    memset(local_res10.Object,0,0xb8);
    *(undefined4 *)&((local_res10.Object)->RHIs).Elements.field_0x2c = 0x80;
    *(undefined4 *)&((local_res10.Object)->RHIs).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&((local_res10.Object)->Platforms).Elements.field_0x2c = 0x80;
    *(undefined4 *)&((local_res10.Object)->Platforms).Elements.field_0x30 = 0xffffffff;
  }
  TSharedPtr<FAutomationTestExcludeOptions,1>::
  TSharedPtr<FAutomationTestExcludeOptions,1><FAutomationTestExcludeOptions>
            (__return_storage_ptr__,&local_res10);
  FVar1 = (this->ExcludeTestInfo).Test;
  if (__return_storage_ptr__->Object == (FAutomationTestExcludeOptions *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FAutomationTestExcludeOptions,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Object->Test = FVar1;
  FVar1 = (this->ExcludeTestInfo).Reason;
  if (__return_storage_ptr__->Object == (FAutomationTestExcludeOptions *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FAutomationTestExcludeOptions,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Object->Reason = FVar1;
  bVar3 = (this->ExcludeTestInfo).Warn;
  if (__return_storage_ptr__->Object == (FAutomationTestExcludeOptions *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FAutomationTestExcludeOptions,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Object->Warn = bVar3;
  if (__return_storage_ptr__->Object == (FAutomationTestExcludeOptions *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FAutomationTestExcludeOptions,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&__return_storage_ptr__->Object->RHIs,&(this->ExcludeTestInfo).RHIs);
  if (__return_storage_ptr__->Object == (FAutomationTestExcludeOptions *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FAutomationTestExcludeOptions,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&__return_storage_ptr__->Object->Platforms,&(this->ExcludeTestInfo).Platforms);
  return __return_storage_ptr__;
}

// GetFilteredChildren @ 148c5ecf0

TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> * __thiscall
FAutomationReport::GetFilteredChildren(FAutomationReport *this)

{
  return &this->FilteredChildReports;
}

// GetFilteredTestNames @ 148c5ee30

void __thiscall
FAutomationReport::GetFilteredTestNames
          (FAutomationReport *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FString *pFVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 local_res20 [2];
  FMemScope local_90;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FString local_58;
  FString local_48;
  
  uVar9 = 0;
  local_res20[0] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name156,L"AutomationTest/Report");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope((FLLMScope *)local_res20,LLMScope_Name156,false,None,Default,true);
  FMemScope::FMemScope(&local_90,&LLMScope_Name156,true);
  iVar5 = (param_2->Data).ArrayNum;
  iVar11 = (this->FilteredChildReports).ArrayNum;
  if (iVar5 < 2) {
    uVar12 = uVar9;
    if (0 < iVar11) {
      do {
        uVar8 = (uint)uVar9;
        uVar4 = 0;
        if ((int)uVar8 < (this->FilteredChildReports).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar10 = (this->FilteredChildReports).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar10 + uVar12) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)(pFVar10 + uVar12);
        local_70 = (this->TestInfo).DisplayName.Data.ArrayNum;
        lVar7 = (longlong)local_70;
        local_78.Data = (FScriptContainerElement *)0x0;
        pcVar2 = *(code **)(*plVar1 + 0x88);
        pFVar10 = (this->TestInfo).DisplayName.Data.AllocatorInstance.Data;
        if (local_70 == 0) {
          local_6c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_70,0,&local_78,local_70,&local_6c);
          memcpy(local_78.Data,pFVar10,lVar7 * 2);
        }
        (*pcVar2)(plVar1,param_1,&local_78);
        uVar9 = (ulonglong)(uVar8 + 1);
        uVar12 = uVar12 + 0x10;
      } while ((int)(uVar8 + 1) < (this->FilteredChildReports).ArrayNum);
    }
  }
  else if (iVar11 == 0) {
    bVar3 = iVar5 + -1 < 1;
    if (bVar3) {
      pFVar6 = ::FString::FString(&local_48,&(this->TestInfo).DisplayName);
    }
    else {
      pFVar6 = ::FString::AppendChar(param_2,L'.');
      ::FString::ConcatFF(&local_58,pFVar6,&(this->TestInfo).DisplayName);
      pFVar6 = &local_58;
    }
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = (pFVar6->Data).ArrayNum;
    lVar7 = (longlong)local_80;
    pFVar10 = (pFVar6->Data).AllocatorInstance.Data;
    if (local_80 == 0) {
      local_7c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_80,0,&local_88,local_80,&local_7c);
      memcpy(local_88.Data,pFVar10,lVar7 * 2);
    }
    if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((!bVar3) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar10 = (param_1->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 < pFVar10 + (longlong)param_1->ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    _Src.Data = local_88.Data;
    pFVar10 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    param_1->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar10->field_0x0 = 0;
    lVar7 = (longlong)local_80;
    *(int *)&pFVar10[8].field_0x0 = local_80;
    if (local_80 == 0) {
      *(int *)(pFVar10 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_80,0,(ForAnyElementType *)pFVar10,local_80,(int *)(pFVar10 + 0xc));
      memcpy(*(void **)&pFVar10->field_0x0,_Src.Data,lVar7 * 2);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  else {
    ::FString::AppendChars(param_2,L".",1);
    iVar5 = (this->TestInfo).DisplayName.Data.ArrayNum;
    iVar11 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar11 = 0;
    }
    ::FString::AppendChars
              (param_2,(wchar_t *)(this->TestInfo).DisplayName.Data.AllocatorInstance.Data,iVar11);
    uVar12 = uVar9;
    if (0 < (this->FilteredChildReports).ArrayNum) {
      do {
        uVar8 = (uint)uVar9;
        uVar4 = 0;
        if ((int)uVar8 < (this->FilteredChildReports).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar10 = (this->FilteredChildReports).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar10 + uVar12) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)(pFVar10 + uVar12);
        local_68.Data = (FScriptContainerElement *)0x0;
        pcVar2 = *(code **)(*plVar1 + 0x88);
        local_60 = (param_2->Data).ArrayNum;
        lVar7 = (longlong)local_60;
        pFVar10 = (param_2->Data).AllocatorInstance.Data;
        if (local_60 == 0) {
          local_5c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_60,0,&local_68,local_60,&local_5c);
          memcpy(local_68.Data,pFVar10,lVar7 * 2);
        }
        (*pcVar2)(plVar1,param_1,&local_68);
        uVar9 = (ulonglong)(uVar8 + 1);
        uVar12 = uVar12 + 0x10;
      } while ((int)(uVar8 + 1) < (this->FilteredChildReports).ArrayNum);
    }
  }
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope((FLLMScope *)local_res20);
  pFVar10 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  return;
}

// GetFullTestPath @ 148c5f460

FString * __thiscall FAutomationReport::GetFullTestPath(FAutomationReport *this)

{
  return &(this->TestInfo).FullTestPath;
}

// GetGameInstanceName @ 148c5f4e0

FString * __thiscall
FAutomationReport::GetGameInstanceName
          (FAutomationReport *this,FString *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < (this->Results).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = (this->Results).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  if (*(int *)(pFVar4 + 8) < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(__return_storage_ptr__,(FString *)(*(longlong *)pFVar4 + 8));
  return __return_storage_ptr__;
}

// GetNextReportToExecute @ 148c5f860

TSharedPtr<IAutomationReport,1> * __thiscall
FAutomationReport::GetNextReportToExecute
          (FAutomationReport *this,TSharedPtr<IAutomationReport,1> *__return_storage_ptr__,
          bool *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  TSharedPtr<IAutomationReport,1> *pTVar9;
  TSharedRef<IAutomationReport,1> *pTVar10;
  uint uVar11;
  longlong lVar12;
  TSharedPtr<IAutomationReport,1> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TSharedRef<IAutomationReport,1> local_38;
  
  __return_storage_ptr__->Object = (IAutomationReport *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  iVar1 = (this->ChildReports).ArrayNum;
  if (iVar1 == 0) {
    cVar6 = (**(code **)(this->_padding_ + 0xa0))();
    if ((((cVar6 != '\0') &&
         (cVar6 = (**(code **)(this->_padding_ + 0xd0))(this,param_2), cVar6 != '\0')) &&
        (bVar7 = (**(code **)(this->_padding_ + 0x118))(this,param_2,param_3), bVar7 < 2)) &&
       (*param_1 = false, bVar7 == 0)) {
      pTVar10 = TSharedFromThis<IAutomationReport,1>::AsShared
                          ((TSharedFromThis<IAutomationReport,1> *)&this->_padding_,&local_38);
      local_58.SharedReferenceCount.ReferenceController =
           (pTVar10->SharedReferenceCount).ReferenceController;
      local_58.Object = pTVar10->Object;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (__return_storage_ptr__ != &local_58) {
        __return_storage_ptr__->Object = local_58.Object;
        local_58.Object = (IAutomationReport *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&local_58.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    return __return_storage_ptr__;
  }
  uVar11 = 0;
  if (0 < iVar1) {
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar11 < (this->ChildReports).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TSharedPtr<IAutomationReport,1> *)(*pcVar4)();
        return pTVar9;
      }
      pFVar2 = (this->ChildReports).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar2 + lVar12) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TSharedPtr<IAutomationReport,1> *)(*pcVar4)();
        return pTVar9;
      }
      plVar3 = *(longlong **)(pFVar2 + lVar12);
      pTVar9 = (TSharedPtr<IAutomationReport,1> *)
               (**(code **)(*plVar3 + 0x150))(plVar3,local_48,param_1,param_2,param_3,param_4);
      if (__return_storage_ptr__ != pTVar9) {
        __return_storage_ptr__->Object = pTVar9->Object;
        pTVar9->Object = (IAutomationReport *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&pTVar9->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      if (__return_storage_ptr__->Object != (IAutomationReport *)0x0) {
        return __return_storage_ptr__;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar11 < (this->ChildReports).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetNumDevicesRunningTest @ 148c5fdc0

int __thiscall FAutomationReport::GetNumDevicesRunningTest(FAutomationReport *this)

{
  return (this->TestInfo).NumDevicesCurrentlyRunningTest;
}

// GetNumParticipantsRequired @ 148c5fdd0

int __thiscall FAutomationReport::GetNumParticipantsRequired(FAutomationReport *this)

{
  return (this->TestInfo).NumParticipantsRequired;
}

// GetNumResults @ 148c5fdf0

int __thiscall FAutomationReport::GetNumResults(FAutomationReport *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Results).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
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
  return *(int *)((this->Results).AllocatorInstance.Data + (longlong)param_1 * 0x10 + 8);
}

// GetOpenCommand @ 148c5fe70

FString * __thiscall
FAutomationReport::GetOpenCommand(FAutomationReport *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&(this->TestInfo).OpenCommand);
  return __return_storage_ptr__;
}

// GetResults @ 148c5ff90

FAutomationTestResults * __thiscall
FAutomationReport::GetResults(FAutomationReport *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FAutomationTestResults *pFVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < (this->Results).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAutomationTestResults *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = (this->Results).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  uVar5 = 0;
  if (param_2 < *(int *)(pFVar4 + 8)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAutomationTestResults *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FAutomationTestResults *)((longlong)param_2 * 0x40 + *(longlong *)pFVar4);
}

// GetSourceFile @ 148c60070

FString * __thiscall
FAutomationReport::GetSourceFile(FAutomationReport *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&(this->TestInfo).SourceFile);
  return __return_storage_ptr__;
}

// GetSourceFileLine @ 148c600a0

int __thiscall FAutomationReport::GetSourceFileLine(FAutomationReport *this)

{
  return (this->TestInfo).SourceFileLine;
}

// GetState @ 148c600b0

EAutomationState __thiscall
FAutomationReport::GetState(FAutomationReport *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  EAutomationState EVar4;
  uint uVar5;
  longlong lVar6;
  
  if (((-1 < param_1) && (param_1 < (this->Results).ArrayNum)) && (-1 < param_2)) {
    lVar6 = (longlong)param_1;
    if (param_2 < *(int *)((this->Results).AllocatorInstance.Data + lVar6 * 0x10 + 8)) {
      uVar5 = 0;
      if (param_1 < (this->Results).ArrayNum) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
      }
      pFVar1 = (this->Results).AllocatorInstance.Data;
      uVar5 = 0;
      if (param_2 < *(int *)(pFVar1 + lVar6 * 0x10 + 8)) {
        uVar5 = (uint)~param_2 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
      }
      return *(EAutomationState *)((longlong)param_2 * 0x40 + *(longlong *)(pFVar1 + lVar6 * 0x10));
    }
  }
  return NotRun;
}

// GetTags @ 148c60320

FString * __thiscall
FAutomationReport::GetTags(FAutomationReport *this,FString *__return_storage_ptr__)

{
  FAutomationTestFramework *this_00;
  FString *pFVar1;
  
  this_00 = FAutomationTestFramework::Get();
  pFVar1 = (FString *)(**(code **)(this->_padding_ + 0x20))(this);
  FAutomationTestFramework::GetTagsForAutomationTest(this_00,__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetTagsArray @ 148c60370

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FAutomationReport::GetTagsArray
          (FAutomationReport *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FAutomationTestFramework *this_00;
  FString *pFVar1;
  
  this_00 = FAutomationTestFramework::Get();
  pFVar1 = (FString *)(**(code **)(this->_padding_ + 0x20))(this);
  FAutomationTestFramework::GetTagsForAutomationTestAsArray(this_00,__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetTestFlags @ 148c605b0

EAutomationTestFlags __thiscall FAutomationReport::GetTestFlags(FAutomationReport *this)

{
  return (this->TestInfo).TestFlags;
}

// GetTestParameter @ 148c605c0

FString * __thiscall
FAutomationReport::GetTestParameter(FAutomationReport *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&(this->TestInfo).TestParameter);
  return __return_storage_ptr__;
}

// GetTotalNumChildren @ 148c60730

int __thiscall FAutomationReport::GetTotalNumChildren(FAutomationReport *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar6 = 0;
  uVar8 = 0;
  if (0 < (this->ChildReports).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->ChildReports).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      pFVar1 = (this->ChildReports).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + lVar9) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      iVar7 = (**(code **)(**(longlong **)(pFVar1 + lVar9) + 0x70))();
      iVar3 = iVar6 + 1;
      if (iVar7 != 0) {
        iVar3 = iVar6;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
      iVar6 = iVar7 + iVar3;
    } while ((int)uVar8 < (this->ChildReports).ArrayNum);
  }
  return iVar6;
}

// GetTotalNumFilteredChildren @ 148c608c0

int __thiscall FAutomationReport::GetTotalNumFilteredChildren(FAutomationReport *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar6 = 0;
  uVar8 = 0;
  if (0 < (this->FilteredChildReports).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->FilteredChildReports).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      pFVar1 = (this->FilteredChildReports).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + lVar9) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      iVar7 = (**(code **)(**(longlong **)(pFVar1 + lVar9) + 0x78))();
      iVar3 = iVar6 + 1;
      if (iVar7 != 0) {
        iVar3 = iVar6;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
      iVar6 = iVar7 + iVar3;
    } while ((int)uVar8 < (this->FilteredChildReports).ArrayNum);
  }
  return iVar6;
}

// HasErrors @ 148c63da0

bool __thiscall FAutomationReport::HasErrors(FAutomationReport *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  bool local_res8;
  
  uVar6 = 0;
  local_res8 = false;
  bVar2 = false;
  if (0 < (this->Results).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      lVar7 = 0;
      while( true ) {
        uVar4 = 0;
        if ((int)uVar6 < (this->Results).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(int *)((this->Results).AllocatorInstance.Data + lVar8 + 8) <= (int)uVar5)
        goto LAB_148c63f02;
        uVar4 = 0;
        if ((int)uVar6 < (this->Results).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        pFVar9 = (this->Results).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
        uVar4 = 0;
        if ((int)uVar5 < *(int *)(pFVar9 + 8)) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (0 < *(int *)(lVar7 + 0x3c + *(longlong *)pFVar9)) break;
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x40;
      }
      local_res8 = true;
LAB_148c63f02:
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x10;
      bVar2 = local_res8;
    } while ((int)uVar6 < (this->Results).ArrayNum);
  }
  return bVar2;
}

// HasWarnings @ 148c63f40

bool __thiscall FAutomationReport::HasWarnings(FAutomationReport *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  bool local_res8;
  
  uVar6 = 0;
  local_res8 = false;
  bVar2 = false;
  if (0 < (this->Results).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      lVar7 = 0;
      while( true ) {
        uVar4 = 0;
        if ((int)uVar6 < (this->Results).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(int *)((this->Results).AllocatorInstance.Data + lVar8 + 8) <= (int)uVar5)
        goto LAB_148c640a2;
        uVar4 = 0;
        if ((int)uVar6 < (this->Results).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        pFVar9 = (this->Results).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
        uVar4 = 0;
        if ((int)uVar5 < *(int *)(pFVar9 + 8)) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (0 < *(int *)(lVar7 + 0x38 + *(longlong *)pFVar9)) break;
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x40;
      }
      local_res8 = true;
LAB_148c640a2:
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x10;
      bVar2 = local_res8;
    } while ((int)uVar6 < (this->Results).ArrayNum);
  }
  return bVar2;
}

// IncrementNetworkCommandResponses @ 148c640e0

bool __thiscall FAutomationReport::IncrementNetworkCommandResponses(FAutomationReport *this)

{
  this->NumberNetworkResponsesReceived = this->NumberNetworkResponsesReceived + 1;
  return this->NumberNetworkResponsesReceived == (this->TestInfo).NumParticipantsRequired;
}

// IsEnabled @ 148c64930

bool __thiscall FAutomationReport::IsEnabled(FAutomationReport *this)

{
  return this->bEnabled;
}

// IsParent @ 148c64950

bool __thiscall FAutomationReport::IsParent(FAutomationReport *this)

{
  return this->bIsParent;
}

// IsSmokeTest @ 148c64ab0

bool __thiscall FAutomationReport::IsSmokeTest(FAutomationReport *this)

{
  byte extraout_var;
  
  (**(code **)(this->_padding_ + 0x58))();
  return (bool)(extraout_var & 1);
}

// IsSupported @ 148c64ad0

bool __thiscall FAutomationReport::IsSupported(FAutomationReport *this,int param_1)

{
  return (this->SupportFlags >> (param_1 & 0x1fU) & 1) != 0;
}

// IsToBeSkipped @ 148c64bf0

bool __thiscall
FAutomationReport::IsToBeSkipped(FAutomationReport *this,FName *param_1,bool *param_2)

{
  FString *pFVar1;
  FString *pFVar2;
  FName *this_00;
  ForAnyElementType FVar3;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (this->bNeedToSkip == false) {
    return false;
  }
  if (param_1 != (FName *)0x0) {
    this_00 = &(this->ExcludeTestInfo).Reason;
    if (*(int *)&(this->ExcludeTestInfo).Platforms.Elements.field_0x8 ==
        *(int *)&(this->ExcludeTestInfo).Platforms.Elements.field_0x34) {
      if (*(int *)&(this->ExcludeTestInfo).RHIs.Elements.field_0x8 ==
          *(int *)&(this->ExcludeTestInfo).RHIs.Elements.field_0x34) {
        *param_1 = *this_00;
      }
      else {
        pFVar1 = ::FName::ToString(this_00,&local_38);
        pFVar2 = SetToShortString(&local_28,&(this->ExcludeTestInfo).RHIs);
        ::FString::ConcatFC(&local_48,pFVar2,L": ");
        ::FString::ConcatFF(&local_58,&local_48,pFVar1);
        FVar3.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar3.Data = local_58.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
        *param_1 = local_res8;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pFVar1 = ::FName::ToString(this_00,&local_28);
      pFVar2 = SetToShortString(&local_38,&(this->ExcludeTestInfo).Platforms);
      ::FString::ConcatFC(&local_48,pFVar2,L": ");
      ::FString::ConcatFF(&local_58,&local_48,pFVar1);
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar3.Data = local_58.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
      *param_1 = local_res8;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  if (param_2 != (bool *)0x0) {
    *param_2 = (this->ExcludeTestInfo).Warn;
  }
  return true;
}

// IsToBeSkippedByPropagation @ 148c64de0

bool __thiscall FAutomationReport::IsToBeSkippedByPropagation(FAutomationReport *this)

{
  if ((this->bNeedToSkip != false) && ((this->ExcludeTestInfo).bIsPropagated != false)) {
    return true;
  }
  return false;
}

// IsToBeSkippedOnConditions @ 148c64e00

bool __thiscall FAutomationReport::IsToBeSkippedOnConditions(FAutomationReport *this)

{
  if ((this->bNeedToSkip != false) &&
     ((*(int *)&(this->ExcludeTestInfo).RHIs.Elements.field_0x8 !=
       *(int *)&(this->ExcludeTestInfo).RHIs.Elements.field_0x34 ||
      (*(int *)&(this->ExcludeTestInfo).Platforms.Elements.field_0x8 !=
       *(int *)&(this->ExcludeTestInfo).Platforms.Elements.field_0x34)))) {
    return true;
  }
  return false;
}

// ResetForExecution @ 148c68a00

void __thiscall FAutomationReport::ResetForExecution(FAutomationReport *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement local_78 [4];
  undefined4 local_74;
  void *local_70;
  undefined8 local_68;
  FAutomationArtifact *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar14 = this->_padding_;
  (this->TestInfo).NumDevicesCurrentlyRunningTest = 0;
  cVar4 = (**(code **)(lVar14 + 0xa0))();
  if ((cVar4 != '\0') && (uVar13 = 0, 0 < (this->Results).ArrayNum)) {
    lVar14 = 0;
    do {
      uVar8 = ~uVar13 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar13 < (this->Results).ArrayNum) {
        uVar15 = uVar8;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (this->Results).ArrayNum;
      if (*(int *)((this->Results).AllocatorInstance.Data + lVar14 + 8) < param_1) {
        uVar15 = 0;
        if ((int)uVar13 < iVar6) {
          uVar15 = uVar8;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = *(int *)((this->Results).AllocatorInstance.Data + lVar14 + 8);
        if (iVar6 < param_1) {
          uVar11 = (ulonglong)(uint)(param_1 - iVar6);
          do {
            uVar15 = 0;
            if ((int)uVar13 < (this->Results).ArrayNum) {
              uVar15 = uVar8;
            }
            if ((uVar15 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar10 = (this->Results).AllocatorInstance.Data + lVar14;
            local_78[0] = (FScriptContainerElement)0x0;
            local_74 = 0;
            local_70 = (void *)0x0;
            local_68 = 0;
            local_60 = (FAutomationArtifact *)0x0;
            local_58 = 0;
            local_50 = (void *)0x0;
            local_48 = 0;
            uStack_40 = 0;
            if (((*(FScriptContainerElement **)&pFVar10->field_0x0 <= local_78) &&
                (local_78 <
                 *(FScriptContainerElement **)&pFVar10->field_0x0 +
                 (longlong)*(int *)(pFVar10 + 0xc) * 0x40)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar6 = *(int *)&pFVar10[8].field_0x0;
            if (iVar6 == *(int *)(pFVar10 + 0xc)) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x840,(ForAnyElementType *)pFVar10,(int *)(pFVar10 + 0xc));
            }
            *(int *)&pFVar10[8].field_0x0 = iVar6 + 1;
            lVar12 = *(longlong *)&pFVar10->field_0x0;
            lVar7 = (longlong)iVar6 * 0x40;
            *(FScriptContainerElement *)(lVar12 + lVar7) = local_78[0];
            *(undefined4 *)(lVar12 + lVar7 + 4) = local_74;
            *(undefined8 *)(lVar12 + lVar7 + 8) = 0;
            *(void **)(lVar12 + lVar7 + 8) = local_70;
            local_70 = (void *)0x0;
            *(undefined4 *)(lVar12 + lVar7 + 0x10) = (undefined4)local_68;
            *(undefined4 *)(lVar12 + lVar7 + 0x14) = local_68._4_4_;
            local_68 = 0;
            *(undefined8 *)(lVar12 + lVar7 + 0x18) = 0;
            *(FAutomationArtifact **)(lVar12 + lVar7 + 0x18) = local_60;
            local_60 = (FAutomationArtifact *)0x0;
            *(int *)(lVar12 + lVar7 + 0x20) = (int)local_58;
            *(undefined4 *)(lVar12 + lVar7 + 0x24) = local_58._4_4_;
            local_58 = 0;
            *(undefined8 *)(lVar12 + lVar7 + 0x28) = 0;
            *(void **)(lVar12 + lVar7 + 0x28) = local_50;
            local_50 = (void *)0x0;
            *(undefined4 *)(lVar12 + lVar7 + 0x30) = (undefined4)local_48;
            *(undefined4 *)(lVar12 + lVar7 + 0x34) = local_48._4_4_;
            local_48 = 0;
            *(undefined4 *)(lVar12 + lVar7 + 0x38) = (undefined4)uStack_40;
            *(undefined4 *)(lVar12 + lVar7 + 0x3c) = uStack_40._4_4_;
            DestructItems<FAutomationExecutionEntry,int>((FAutomationExecutionEntry *)0x0,0);
            if (local_50 != (void *)0x0) {
              FMemory::Free(local_50);
            }
            DestructItems<FAutomationArtifact,int>(local_60,(int)local_58);
            if (local_60 != (FAutomationArtifact *)0x0) {
              FMemory::Free(local_60);
            }
            if (local_70 != (void *)0x0) {
              FMemory::Free(local_70);
            }
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      else {
        uVar15 = 0;
        if ((int)uVar13 < iVar6) {
          uVar15 = uVar8;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (param_1 < *(int *)((this->Results).AllocatorInstance.Data + lVar14 + 8)) {
          uVar15 = 0;
          if ((int)uVar13 < (this->Results).ArrayNum) {
            uVar15 = uVar8;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = (TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_> *)
                    ((this->Results).AllocatorInstance.Data + lVar14);
          uVar15 = 0;
          if ((int)uVar13 < (this->Results).ArrayNum) {
            uVar15 = uVar8;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar6 = *(int *)((this->Results).AllocatorInstance.Data + lVar14 + 8);
          uVar9 = iVar6 - param_1;
          uVar15 = 0;
          if (iVar6 <= this_00->ArrayNum) {
            uVar15 = ~(uVar9 | param_1) >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar9 != 0) {
            TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (this_00,param_1,uVar9);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,(ForAnyElementType *)this_00,this_00->ArrayNum,&this_00->ArrayMax);
          }
        }
      }
      uVar15 = 0;
      lVar12 = 0;
      while( true ) {
        uVar9 = 0;
        if ((int)uVar13 < (this->Results).ArrayNum) {
          uVar9 = uVar8;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)((this->Results).AllocatorInstance.Data + lVar14 + 8) <= (int)uVar15) break;
        uVar9 = 0;
        if ((int)uVar13 < (this->Results).ArrayNum) {
          uVar9 = uVar8;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10 = (this->Results).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar15 < *(int *)(pFVar10 + lVar14 + 8)) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar1 = *(longlong *)(pFVar10 + lVar14);
        lVar7 = lVar12 + lVar1;
        *(undefined1 *)(lVar12 + lVar1) = 0;
        DestructItems<FAutomationExecutionEntry,int>
                  (*(FAutomationExecutionEntry **)(lVar7 + 0x28),*(int *)(lVar7 + 0x30));
        *(undefined4 *)(lVar7 + 0x30) = 0;
        if (*(int *)(lVar7 + 0x34) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,0,(ForAnyElementType *)(lVar7 + 0x28),0,(int *)(lVar7 + 0x34));
        }
        lVar7 = lVar12 + lVar1;
        DestructItems<FAutomationArtifact,int>
                  (*(FAutomationArtifact **)(lVar7 + 0x18),*(int *)(lVar12 + 0x20 + lVar1));
        *(undefined4 *)(lVar7 + 0x20) = 0;
        if (*(int *)(lVar7 + 0x24) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (200,8,0,(ForAnyElementType *)(lVar7 + 0x18),0,(int *)(lVar7 + 0x24));
        }
        uVar15 = uVar15 + 1;
        *(undefined8 *)(lVar12 + 0x38 + lVar1) = 0;
        lVar12 = lVar12 + 0x40;
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x10;
    } while ((int)uVar13 < (this->Results).ArrayNum);
  }
  uVar13 = 0;
  if (0 < (this->ChildReports).ArrayNum) {
    lVar14 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar13 < (this->ChildReports).ArrayNum) {
        uVar15 = ~uVar13 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (this->ChildReports).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar10 + lVar14) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar2 = *(longlong **)(pFVar10 + lVar14);
      (**(code **)(*plVar2 + 0xf8))(plVar2,param_1);
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x10;
    } while ((int)uVar13 < (this->ChildReports).ArrayNum);
  }
  return;
}

// ResetNetworkCommandResponses @ 148c691b0

void __thiscall FAutomationReport::ResetNetworkCommandResponses(FAutomationReport *this)

{
  this->NumberNetworkResponsesReceived = 0;
  return;
}

// SetEnabled @ 148c69b40

void __thiscall FAutomationReport::SetEnabled(FAutomationReport *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  this->bEnabled = param_1;
  if (0 < (this->FilteredChildReports).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->FilteredChildReports).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->FilteredChildReports).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + lVar7) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar2 = *(longlong **)(pFVar1 + lVar7);
      (**(code **)(*plVar2 + 0xb8))(plVar2,param_1);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < (this->FilteredChildReports).ArrayNum);
  }
  return;
}

// SetEnabledTests @ 148c69cd0

void __thiscall
FAutomationReport::SetEnabledTests
          (FAutomationReport *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType _Src;
  ulonglong uVar14;
  bool bVar15;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FString local_48;
  
  iVar4 = (param_2->Data).ArrayNum;
  uVar12 = 0;
  if ((this->ChildReports).ArrayNum == 0) {
    iVar6 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar6 = 0;
    }
    if (iVar6 < 1) {
      local_70 = (this->TestInfo).DisplayName.Data.ArrayNum;
      lVar10 = (longlong)local_70;
      pFVar11 = (this->TestInfo).DisplayName.Data.AllocatorInstance.Data;
      local_78.Data = (FScriptContainerElement *)0x0;
      if (local_70 == 0) {
        local_6c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_70,0,&local_78,local_70,&local_6c);
        memcpy(local_78.Data,pFVar11,lVar10 * 2);
      }
      bVar3 = false;
      bVar15 = true;
      _Src.Data = local_78.Data;
      local_48.Data.ArrayNum = local_70;
    }
    else {
      pFVar7 = ::FString::AppendChar(param_2,L'.');
      ::FString::ConcatFF(&local_48,pFVar7,&(this->TestInfo).DisplayName);
      bVar3 = true;
      bVar15 = false;
      _Src.Data = local_48.Data.AllocatorInstance.Data;
    }
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = local_48.Data.ArrayNum;
    if (local_48.Data.ArrayNum == 0) {
      local_5c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,&local_68,local_48.Data.ArrayNum,&local_5c);
      memcpy(local_68.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    if ((bVar15) && (local_78.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_78.Data);
    }
    if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar11 = (param_1->AllocatorInstance).Data;
    pFVar13 = pFVar11 + (longlong)param_1->ArrayNum * 0x10;
    for (; pFVar11 != pFVar13; pFVar11 = pFVar11 + 0x10) {
      iVar4 = *(int *)(pFVar11 + 8);
      if (iVar4 == local_60) {
        if (1 < iVar4) {
          iVar4 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)pFVar11,(wchar_t *)local_68.Data);
          bVar15 = iVar4 == 0;
          goto LAB_148c69e74;
        }
LAB_148c69ea9:
        uVar8 = 1;
        goto LAB_148c69e86;
      }
      bVar15 = iVar4 + local_60 == 1;
LAB_148c69e74:
      if (bVar15) goto LAB_148c69ea9;
    }
    uVar8 = 0;
LAB_148c69e86:
    (**(code **)(this->_padding_ + 0xb8))(this,uVar8);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  else {
    if (1 < iVar4) {
      ::FString::AppendChars(param_2,L".",1);
    }
    iVar4 = (this->TestInfo).DisplayName.Data.ArrayNum;
    iVar6 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars
              (param_2,(wchar_t *)(this->TestInfo).DisplayName.Data.AllocatorInstance.Data,iVar6);
    uVar14 = uVar12;
    if (0 < (this->ChildReports).ArrayNum) {
      do {
        uVar9 = (uint)uVar12;
        uVar5 = 0;
        if ((int)uVar9 < (this->ChildReports).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar11 = (this->ChildReports).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar11 + uVar14) == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)(pFVar11 + uVar14);
        local_50 = (param_2->Data).ArrayNum;
        lVar10 = (longlong)local_50;
        local_58.Data = (FScriptContainerElement *)0x0;
        pcVar2 = *(code **)(*plVar1 + 0x90);
        pFVar11 = (param_2->Data).AllocatorInstance.Data;
        if (local_50 == 0) {
          local_4c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_50,0,&local_58,local_50,&local_4c);
          memcpy(local_58.Data,pFVar11,lVar10 * 2);
        }
        (*pcVar2)(plVar1,param_1,&local_58);
        uVar12 = (ulonglong)(uVar9 + 1);
        uVar14 = uVar14 + 0x10;
      } while ((int)(uVar9 + 1) < (this->ChildReports).ArrayNum);
    }
    iVar4 = (**(code **)(this->_padding_ + 0x70))(this);
    iVar6 = (**(code **)(this->_padding_ + 0x98))(this);
    this->bEnabled = iVar4 == iVar6;
  }
  pFVar11 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  return;
}

// SetFilter @ 148c6a1c0

bool __thiscall
FAutomationReport::SetFilter
          (FAutomationReport *this,
          TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1> *param_1,
          bool param_2)

{
  TArray<TSharedPtr<IAutomationReport,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  IAutomationReport *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  TSharedRef<IAutomationReport,1> *pTVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint uVar21;
  bool local_res8;
  FLLMScope local_res20 [2];
  FScriptContainerElement *pFVar22;
  FMemScope local_78;
  IAutomationReport *local_70;
  TReferenceControllerBase<1> *local_68;
  TSharedRef<IAutomationReport,1> local_60;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *local_50;
  TReferenceControllerBase<1> *local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name312,L"AutomationTest/Report");
    _Init_thread_footer(&::_TSS0);
  }
  pFVar22 = (FScriptContainerElement *)&DAT_00000001;
  pFVar15 = (FScriptContainerElement *)&DAT_00000001;
  FLLMScope::FLLMScope(local_res20,LLMScope_Name312,false,None,Default,true);
  FMemScope::FMemScope(&local_78,&LLMScope_Name312,true);
  this->bNodeExpandInUI = false;
  local_res8 = false;
  if ((param_1->Object == (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pTVar2 = param_1->Object;
  pTVar13 = TSharedFromThis<IAutomationReport,1>::AsShared
                      ((TSharedFromThis<IAutomationReport,1> *)&this->_padding_,&local_60);
  pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
  pIVar4 = pTVar13->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar18 = 0;
  local_70 = pIVar4;
  local_68 = pTVar3;
  if (0 < (pTVar2->ChildFilters).ArrayNum) {
    lVar20 = 0;
    do {
      iVar12 = (pTVar2->ChildFilters).ArrayNum;
      pFVar17 = (FScriptContainerElement *)(longlong)iVar12;
      uVar11 = 0;
      if ((int)uVar18 < iVar12) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      if (uVar11 == 0) {
        pFVar15 = (FScriptContainerElement *)(longlong)(int)uVar18;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        pFVar22 = pFVar17;
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      pFVar17 = (pTVar2->ChildFilters).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar17 + lVar20) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      plVar5 = *(longlong **)(pFVar17 + lVar20);
      cVar9 = (**(code **)(*plVar5 + 0x10))(plVar5,&local_70);
      if (cVar9 == '\0') {
        bVar7 = false;
        goto LAB_148c6a382;
      }
      uVar18 = uVar18 + 1;
      lVar20 = lVar20 + 0x10;
    } while ((int)uVar18 < (pTVar2->ChildFilters).ArrayNum);
  }
  bVar7 = true;
LAB_148c6a382:
  this->bSelfPassesFilter = bVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  cVar9 = (**(code **)(this->_padding_ + 0xa8))(this);
  if ((cVar9 != '\0') && (param_2)) {
    this->bSelfPassesFilter = true;
  }
  pTVar1 = &this->FilteredChildReports;
  DestructItems<TSharedPtr<IAutomationReport,1>,int>
            ((TSharedPtr<IAutomationReport,1> *)(pTVar1->AllocatorInstance).Data,
             (this->FilteredChildReports).ArrayNum);
  pFVar17 = (FScriptContainerElement *)&(this->FilteredChildReports).ArrayMax;
  (this->FilteredChildReports).ArrayNum = 0;
  if ((this->FilteredChildReports).ArrayMax != 0) {
    pFVar15 = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar1->AllocatorInstance,0,(int *)pFVar17);
    pFVar22 = pFVar17;
  }
  uVar18 = 0;
  if (0 < (this->ChildReports).ArrayNum) {
    pFVar17 = (FScriptContainerElement *)0x0;
    lVar20 = 0;
    do {
      iVar12 = (this->ChildReports).ArrayNum;
      pFVar16 = (FScriptContainerElement *)(longlong)iVar12;
      uVar21 = ~uVar18 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar18 < iVar12) {
        uVar11 = uVar21;
      }
      if (uVar11 == 0) {
        pFVar15 = (FScriptContainerElement *)(longlong)(int)uVar18;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        pFVar22 = pFVar16;
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      pFVar16 = (this->ChildReports).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar16 + lVar20) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      plVar5 = *(longlong **)(pFVar16 + lVar20);
      bVar7 = this->bSelfPassesFilter;
      pcVar6 = *(code **)(*plVar5 + 0xd8);
      local_50 = param_1->Object;
      local_48 = (param_1->SharedReferenceCount).ReferenceController;
      if (local_48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_48->SharedReferenceCount = (atomic<int>)((int)local_48->SharedReferenceCount + 1);
        UNLOCK();
      }
      cVar9 = (*pcVar6)(plVar5,&local_50,bVar7,pcVar6,pFVar15,pFVar22);
      if (cVar9 != '\0') {
        iVar12 = (this->ChildReports).ArrayNum;
        pFVar16 = (FScriptContainerElement *)(longlong)iVar12;
        uVar11 = 0;
        if ((int)uVar18 < iVar12) {
          uVar11 = uVar21;
        }
        if ((uVar11 == 0) &&
           (pFVar15 = pFVar17,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           pFVar22 = pFVar16, bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar16 = (this->ChildReports).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar16 + lVar20) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        cVar10 = (**(code **)(**(longlong **)(pFVar16 + lVar20) + 0xa8))();
        if (cVar10 != '\0') {
          iVar12 = (this->ChildReports).ArrayNum;
          pFVar16 = (FScriptContainerElement *)(longlong)iVar12;
          uVar11 = 0;
          if ((int)uVar18 < iVar12) {
            uVar11 = uVar21;
          }
          if ((uVar11 == 0) &&
             (pFVar15 = pFVar17,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), pFVar22 = pFVar16, bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          pFVar16 = (this->ChildReports).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar16 + lVar20) == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          lVar14 = (**(code **)(**(longlong **)(pFVar16 + lVar20) + 0xe0))();
          if (*(int *)(lVar14 + 8) < 1) goto LAB_148c6a6d0;
        }
        iVar12 = (this->ChildReports).ArrayNum;
        pFVar16 = (FScriptContainerElement *)(longlong)iVar12;
        uVar11 = 0;
        if ((int)uVar18 < iVar12) {
          uVar11 = uVar21;
        }
        if ((uVar11 == 0) &&
           (pFVar15 = pFVar17,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           pFVar22 = pFVar16, bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar16 = (pTVar1->AllocatorInstance).Data;
        pFVar19 = (this->ChildReports).AllocatorInstance.Data + lVar20;
        if (((pFVar16 <= pFVar19) &&
            (pFVar19 < pFVar16 + (longlong)(this->FilteredChildReports).ArrayMax * 0x10)) &&
           (pFVar15 = pFVar19,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), pFVar22 = pFVar16, bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        iVar12 = (this->FilteredChildReports).ArrayNum;
        if (iVar12 == (this->FilteredChildReports).ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar1->AllocatorInstance,
                              &(this->FilteredChildReports).ArrayMax);
        }
        (this->FilteredChildReports).ArrayNum = iVar12 + 1;
        pFVar16 = (pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
        *(undefined8 *)pFVar16 = *(undefined8 *)pFVar19;
        lVar14 = *(longlong *)(pFVar19 + 8);
        *(longlong *)(pFVar16 + 8) = lVar14;
        if (lVar14 != 0) {
          LOCK();
          *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
          UNLOCK();
        }
      }
LAB_148c6a6d0:
      if ((this->bNodeExpandInUI == false) && (cVar9 == '\x01')) {
        this->bNodeExpandInUI = true;
      }
      uVar18 = uVar18 + 1;
      pFVar17 = pFVar17 + 1;
      lVar20 = lVar20 + 0x10;
    } while ((int)uVar18 < (this->ChildReports).ArrayNum);
  }
  if ((this->bSelfPassesFilter != false) || (this->bNodeExpandInUI != false)) {
    local_res8 = true;
  }
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(local_res20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return local_res8;
}

// SetNumParticipantsRequired @ 148c6a840

void __thiscall FAutomationReport::SetNumParticipantsRequired(FAutomationReport *this,int param_1)

{
  (this->TestInfo).NumParticipantsRequired = param_1;
  return;
}

// SetResults @ 148c6a900

void __thiscall
FAutomationReport::SetResults
          (FAutomationReport *this,int param_1,int param_2,FAutomationTestResults *param_3)

{
  TArray<TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  uint *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  IAutomationReport *pIVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TSharedRef<IAutomationReport,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ForAnyElementType *pFVar17;
  uint uVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  FLLMScope local_res10 [2];
  int local_res18;
  FAutomationTestResults *local_res20;
  ForAnyElementType local_158;
  int local_150;
  int local_14c;
  FAutomationArtifact *local_148;
  longlong local_140;
  EAutomationEventType local_138;
  FString local_130;
  FString local_120;
  FGuid local_110;
  FMemScope local_100;
  FString local_f8;
  FString local_e8;
  IAutomationReport *local_d8;
  TReferenceControllerBase<1> *local_d0;
  FAutomationExecutionEntry local_c8;
  TSharedRef<IAutomationReport,1> local_70;
  FReadAccessScope local_60;
  
  lVar16 = (longlong)param_2;
  local_res18 = param_2;
  local_res20 = param_3;
  if (((param_1 < 0) || ((this->Results).ArrayNum <= param_1)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ClusterIndex >= 0) && (ClusterIndex < Results.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationReport.cpp"
                         ,0x1bd,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar1 = &this->Results;
  if (-1 < param_2) {
    uVar10 = 0;
    if (param_1 < (this->Results).ArrayNum) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (param_2 < *(int *)((pTVar1->AllocatorInstance).Data + (longlong)param_1 * 0x10 + 8))
    goto LAB_148c6a9ef;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("(PassIndex >= 0) && (PassIndex < Results[ClusterIndex].Num())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationReport.cpp"
                     ,0x1be,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_148c6a9ef:
  if (local_res20->State == InProcess) {
    puVar2 = &(this->TestInfo).NumDevicesCurrentlyRunningTest;
    *puVar2 = *puVar2 + 1;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name453,L"AutomationTest/Report");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name453,false,None,Default,true);
  FMemScope::FMemScope(&local_100,&LLMScope_Name453,true);
  uVar18 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < (this->Results).ArrayNum) {
    uVar10 = uVar18;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  lVar19 = (longlong)param_1 * 0x10;
  uVar14 = (uint)~param_2 >> 0x1f;
  uVar10 = 0;
  if (param_2 < *(int *)(pFVar4 + lVar19 + 8)) {
    uVar10 = uVar14;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar15 = lVar16 * 0x40;
  lVar5 = *(longlong *)(pFVar4 + lVar19);
  local_158.Data = (FScriptContainerElement *)0x0;
  iVar3 = *(int *)(lVar5 + 0x20 + lVar15);
  local_148 = *(FAutomationArtifact **)(lVar5 + 0x18 + lVar15);
  local_150 = iVar3;
  local_140 = lVar16;
  if (iVar3 == 0) {
    local_14c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,iVar3,0,&local_158,iVar3,&local_14c);
    ConstructItems<FAutomationArtifact,FAutomationArtifact,int>(local_158.Data,local_148,iVar3);
  }
  uVar10 = 0;
  if (param_1 < (this->Results).ArrayNum) {
    uVar10 = uVar18;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_148 = (FAutomationArtifact *)(pTVar1->AllocatorInstance).Data;
  uVar10 = 0;
  if (param_2 < *(int *)((longlong)local_148 + lVar19 + 8)) {
    uVar10 = uVar14;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar16 = *(longlong *)((longlong)local_148 + lVar19);
  *(EAutomationState *)(lVar16 + lVar15) = local_res20->State;
  *(float *)(lVar16 + 4 + lVar15) = local_res20->Duration;
  ::FString::operator=((FString *)(lVar15 + 8 + lVar16),&local_res20->GameInstance);
  TArray<FAutomationArtifact,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FAutomationArtifact,TSizedDefaultAllocator<32>_> *)(lVar15 + 0x18 + lVar16),
             &local_res20->Artifacts);
  TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *)
             (lVar15 + 0x28 + lVar16),&local_res20->Entries);
  *(int *)(lVar16 + 0x38 + lVar15) = local_res20->WarningTotal;
  *(int *)(lVar16 + 0x3c + lVar15) = local_res20->ErrorTotal;
  uVar10 = 0;
  if (param_1 < (this->Results).ArrayNum) {
    uVar10 = uVar18;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  uVar10 = 0;
  if (local_res18 < *(int *)(pFVar4 + lVar19 + 8)) {
    uVar10 = uVar14;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar17 = (ForAnyElementType *)(*(longlong *)(pFVar4 + lVar19) + lVar15 + 0x18);
  if ((pFVar17 == &local_158) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar3 = local_150;
  if (local_150 != 0) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (200,8,local_150,pFVar17,(int *)(pFVar17 + 1),
                        (int *)((longlong)&pFVar17[1].Data + 4));
    ConstructItems<FAutomationArtifact,FAutomationArtifact,int>
              (pFVar17->Data + (longlong)iVar11 * 200,(FAutomationArtifact *)local_158.Data,iVar3);
  }
  if ((local_res20->State == Fail) && (local_res20->ErrorTotal == 0)) {
    ::FString::PrintfImpl(&local_e8,L"Test %s failed, but no errors were logged.");
    uVar10 = 0;
    if (param_1 < (this->Results).ArrayNum) {
      uVar10 = uVar18;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    uVar10 = 0;
    if (local_res18 < *(int *)(pFVar4 + lVar19 + 8)) {
      uVar10 = uVar14;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar16 = *(longlong *)(pFVar4 + lVar19);
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar20.Data = local_e8.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_f8,(wchar_t *)FVar20.Data);
    FVar20.Data = local_f8.Data.AllocatorInstance.Data;
    local_138 = Error;
    local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f8.Data.ArrayNum == 0) {
      local_130.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_130,local_f8.Data.ArrayNum
                 ,&local_130.Data.ArrayMax);
      memcpy(local_130.Data.AllocatorInstance.Data,FVar20.Data,(longlong)local_f8.Data.ArrayNum * 2)
      ;
    }
    local_110.A = 0;
    local_110.B = 0;
    local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.Data.ArrayNum = 0;
    local_120.Data.ArrayMax = 0;
    local_110.C = 0;
    local_110.D = 0;
    local_c8.Event.Type = local_138;
    ::FString::FString(&local_c8.Event.Message,&local_130);
    ::FString::FString(&local_c8.Event.Context,&local_120);
    local_c8.LineNumber = -1;
    local_c8.Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Event.Artifact.A = local_110.A;
    local_c8.Event.Artifact.B = local_110.B;
    local_c8.Event.Artifact.C = local_110.C;
    local_c8.Event.Artifact.D = local_110.D;
    local_c8.Filename.Data.ArrayNum = 0;
    local_c8.Filename.Data.ArrayMax = 0;
    FDateTime::UtcNow();
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    FAutomationTestResults::AddEvent((FAutomationTestResults *)(lVar15 + lVar16),&local_c8);
    if (local_c8.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Filename.Data.AllocatorInstance.Data);
    }
    if (local_c8.Event.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Event.Context.Data.AllocatorInstance.Data);
    }
    if (local_c8.Event.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Event.Message.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  pTVar12 = TSharedFromThis<IAutomationReport,1>::AsShared
                      ((TSharedFromThis<IAutomationReport,1> *)&this->_padding_,&local_70);
  pTVar13 = (pTVar12->SharedReferenceCount).ReferenceController;
  pIVar6 = pTVar12->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_60);
  if (((int)this->_padding_ == 0) ||
     (plVar7 = (longlong *)this->_padding_, plVar7 == (longlong *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
  }
  else {
    local_d8 = pIVar6;
    local_d0 = pTVar13;
    (**(code **)(*plVar7 + 0x68))(plVar7,&local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    pTVar13 = (TReferenceControllerBase<1> *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.SharedReferenceCount.ReferenceController);
  DestructItems<FAutomationArtifact,int>((FAutomationArtifact *)local_158.Data,local_150);
  if ((FAutomationArtifact *)local_158.Data != (FAutomationArtifact *)0x0) {
    FMemory::Free(local_158.Data);
  }
  FMemScope::~FMemScope(&local_100);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetSkipFlag @ 148c6b0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAutomationReport::SetSkipFlag
          (FAutomationReport *this,bool param_1,FAutomationTestExcludelistEntry *param_2,
          bool param_3)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  bool bVar7;
  UAutomationTestExcludelist *pUVar8;
  FAutomationTestExcludelistEntry *pFVar9;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  char local_f7;
  UAutomationTestExcludelist *local_f0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_e8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f7 = param_3;
  cVar6 = (**(code **)(this->_padding_ + 0x1b0))(this,0,0);
  if ((bool)cVar6 == param_1) {
    if (!param_1) {
      return;
    }
    if (param_2 == (FAutomationTestExcludelistEntry *)0x0) {
      return;
    }
    if (!param_3) {
      pUVar8 = UAutomationTestExcludelist::Get();
      UAutomationTestExcludelist::RemoveFromExcludeTest(pUVar8,&(this->TestInfo).FullTestPath);
LAB_148c6b153:
      if ((((1 < (this->ExcludeTestInfo).FullTestName.Data.ArrayNum) &&
           ((this->ExcludeTestInfo).bIsPropagated != false)) &&
          (*(int *)&(this->ExcludeTestInfo).RHIs.Elements.field_0x8 ==
           *(int *)&(this->ExcludeTestInfo).RHIs.Elements.field_0x34)) &&
         (*(int *)&(this->ExcludeTestInfo).Platforms.Elements.field_0x8 ==
          *(int *)&(this->ExcludeTestInfo).Platforms.Elements.field_0x34)) {
        return;
      }
    }
  }
  else if (!param_3) goto LAB_148c6b153;
  this->bNeedToSkip = param_1;
  if (param_2 != (FAutomationTestExcludelistEntry *)0x0) {
    FAutomationTestExcludelistEntry::operator=(&this->ExcludeTestInfo,param_2);
    (this->ExcludeTestInfo).bIsPropagated = param_3;
  }
  pUVar8 = UAutomationTestExcludelist::Get();
  local_f0 = pUVar8;
  if (param_3) {
    pFVar9 = UAutomationTestExcludelist::GetExcludeTestEntry(pUVar8,&(this->TestInfo).FullTestPath);
    if (this->bNeedToSkip != false) {
      if (pFVar9 != (FAutomationTestExcludelistEntry *)0x0) {
        FAutomationTestExcludelistEntry::operator=(&this->ExcludeTestInfo,pFVar9);
        FAutomationTestExcludelistEntry::SetPropagation
                  (&this->ExcludeTestInfo,&(this->TestInfo).FullTestPath);
      }
      goto LAB_148c6b405;
    }
    if (pFVar9 == (FAutomationTestExcludelistEntry *)0x0) {
      ::FString::Empty(&(this->ExcludeTestInfo).FullTestName);
      (this->ExcludeTestInfo).bIsPropagated = false;
      goto LAB_148c6b405;
    }
    FAutomationTestExcludelistEntry::operator=(&this->ExcludeTestInfo,pFVar9);
    param_2 = pFVar9;
  }
  else {
    if (this->bNeedToSkip != false) {
      if ((param_2 == (FAutomationTestExcludelistEntry *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Template != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationReport.cpp"
                             ,0x3d7,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = UAutomationTestExcludelist::GetExcludeTestEntry
                         (pUVar8,&(this->TestInfo).FullTestPath);
      if ((pFVar9 != (FAutomationTestExcludelistEntry *)0x0) &&
         ((*(int *)&(pFVar9->RHIs).Elements.field_0x8 != *(int *)&(pFVar9->RHIs).Elements.field_0x34
          || (*(int *)&(pFVar9->Platforms).Elements.field_0x8 !=
              *(int *)&(pFVar9->Platforms).Elements.field_0x34)))) {
        pTVar1 = &(this->ExcludeTestInfo).RHIs;
        bVar7 = false;
        iVar13 = *(int *)&(this->ExcludeTestInfo).RHIs.Elements.field_0x8 -
                 *(int *)&(this->ExcludeTestInfo).RHIs.Elements.field_0x34;
        if (0 < iVar13) {
          pTVar10 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Difference
                              (pTVar1,&local_e8,&pFVar9->RHIs);
          if (pTVar1 != pTVar10) {
            TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
            Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>(pTVar1,pTVar10);
          }
          local_e8.HashSize = 0;
          if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_e8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_e8.Elements);
          bVar7 = iVar13 != *(int *)&(this->ExcludeTestInfo).RHIs.Elements.field_0x8 -
                            *(int *)&(this->ExcludeTestInfo).RHIs.Elements.field_0x34;
        }
        pTVar1 = &(this->ExcludeTestInfo).Platforms;
        iVar13 = *(int *)&(this->ExcludeTestInfo).Platforms.Elements.field_0x8 -
                 *(int *)&(this->ExcludeTestInfo).Platforms.Elements.field_0x34;
        if (iVar13 < 1) {
          if (bVar7) goto LAB_148c6b3a4;
        }
        else {
          pTVar10 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Difference
                              (pTVar1,&local_98,&pFVar9->Platforms);
          if (pTVar1 != pTVar10) {
            TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
            Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>(pTVar1,pTVar10);
          }
          local_98.HashSize = 0;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_98.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_98.Elements);
          if ((bVar7) ||
             (iVar13 != *(int *)&(this->ExcludeTestInfo).Platforms.Elements.field_0x8 -
                        *(int *)&(this->ExcludeTestInfo).Platforms.Elements.field_0x34)) {
LAB_148c6b3a4:
            param_2 = &this->ExcludeTestInfo;
          }
        }
      }
      UAutomationTestExcludelist::AddToExcludeTest(pUVar8,&(this->TestInfo).FullTestPath,param_2);
      goto LAB_148c6b405;
    }
    UAutomationTestExcludelist::RemoveFromExcludeTest(pUVar8,&(this->TestInfo).FullTestPath);
    pFVar9 = UAutomationTestExcludelist::GetExcludeTestEntry(pUVar8,&(this->TestInfo).FullTestPath);
    if (pFVar9 == (FAutomationTestExcludelistEntry *)0x0) goto LAB_148c6b405;
    FAutomationTestExcludelistEntry::operator=(&this->ExcludeTestInfo,pFVar9);
    (this->ExcludeTestInfo).bIsPropagated = true;
    param_2 = pFVar9;
  }
  this->bNeedToSkip = true;
LAB_148c6b405:
  cVar6 = (**(code **)(this->_padding_ + 0xa8))(this);
  if (cVar6 != '\0') {
    plVar11 = (longlong *)(**(code **)(this->_padding_ + 0xe8))(this);
    lVar5 = plVar11[1];
    plVar12 = (longlong *)*plVar11;
    plVar14 = plVar12 + (longlong)(int)lVar5 * 2;
    while( true ) {
      if ((int)plVar11[1] != (int)lVar5) {
        local_f8 = 0;
        `TCheckedPointerIterator<TSharedPtr<IAutomationReport,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_f8);
      }
      pUVar8 = local_f0;
      if (plVar12 == plVar14) break;
      pTVar2 = (TReferenceControllerBase<1> *)plVar12[1];
      plVar3 = (longlong *)*plVar12;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((plVar3 == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*plVar3 + 0x1c8))(plVar3,this->bNeedToSkip,param_2,1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      plVar12 = plVar12 + 2;
    }
  }
  if (local_f7 == '\0') {
    UAutomationTestExcludelist::SaveToConfigs(pUVar8);
  }
  return;
}

// SetState @ 148c6b520

void __thiscall FAutomationReport::SetState(FAutomationReport *this,EAutomationState param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  
  cVar2 = (**(code **)(this->_padding_ + 0xa0))();
  if ((cVar2 != '\0') && (uVar6 = 0, 0 < (this->Results).ArrayNum)) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      lVar8 = 0;
      while( true ) {
        uVar4 = 0;
        if ((int)uVar6 < (this->Results).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)((this->Results).AllocatorInstance.Data + lVar7 + 8) <= (int)uVar5) break;
        uVar4 = 0;
        if ((int)uVar6 < (this->Results).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar9 = (this->Results).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
        uVar4 = 0;
        if ((int)uVar5 < *(int *)(pFVar9 + 8)) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(EAutomationState *)(lVar8 + *(longlong *)pFVar9) = param_1;
        lVar8 = lVar8 + 0x40;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < (this->Results).ArrayNum);
  }
  return;
}

// SetSupport @ 148c6b6d0

void __thiscall FAutomationReport::SetSupport(FAutomationReport *this,int param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  TArray<TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  ulonglong uVar8;
  FMemScope local_res8;
  FLLMScope local_res10 [2];
  ForAnyElementType local_88;
  undefined8 local_80;
  
  uVar8 = (ulonglong)_tls_index;
  this->SupportFlags = this->SupportFlags | 1 << ((byte)param_1 & 0x1f);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name259,L"AutomationTest/Report");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name259,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,&LLMScope_Name259,true);
  if (-1 < param_1) {
    pTVar7 = &this->Results;
    uVar8 = (ulonglong)(param_1 + 1);
    do {
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80 = 0;
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&local_88,(int *)((longlong)&local_80 + 4));
      local_80 = CONCAT44(local_80._4_4_,iVar4 + 1);
      lVar5 = (longlong)iVar4 * 0x40;
      *(undefined4 *)(local_88.Data + lVar5 + 4) = 0;
      local_88.Data[lVar5].field_0x0 = 0;
      *(undefined8 *)(local_88.Data + lVar5 + 8) = 0;
      *(undefined8 *)(local_88.Data + lVar5 + 0x10) = 0;
      *(undefined8 *)(local_88.Data + lVar5 + 0x18) = 0;
      *(undefined8 *)(local_88.Data + lVar5 + 0x20) = 0;
      *(undefined8 *)(local_88.Data + lVar5 + 0x28) = 0;
      *(undefined8 *)(local_88.Data + lVar5 + 0x30) = 0;
      *(undefined8 *)(local_88.Data + lVar5 + 0x38) = 0;
      DestructItems<FAutomationExecutionEntry,int>((FAutomationExecutionEntry *)0x0,0);
      DestructItems<FAutomationArtifact,int>((FAutomationArtifact *)0x0,0);
      pFVar6 = (pTVar7->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar6 + (longlong)(this->Results).ArrayMax * 0x10
          )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = (this->Results).ArrayNum;
      if (iVar4 == (this->Results).ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar7->AllocatorInstance,&(this->Results).ArrayMax);
      }
      FVar2.Data = local_88.Data;
      pFVar6 = (pTVar7->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
      (this->Results).ArrayNum = iVar4 + 1;
      *(undefined8 *)&pFVar6->field_0x0 = 0;
      iVar4 = (int)local_80;
      *(int *)&pFVar6[8].field_0x0 = (int)local_80;
      if ((int)local_80 == 0) {
        *(int *)(pFVar6 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,(int)local_80,0,(ForAnyElementType *)pFVar6,(int)local_80,
                   (int *)(pFVar6 + 0xc));
        ConstructItems<FAutomationTestResults,FAutomationTestResults,int>
                  (*(void **)&pFVar6->field_0x0,(FAutomationTestResults *)FVar2.Data,iVar4);
      }
      DestructItems<FAutomationTestResults,int>
                ((FAutomationTestResults *)local_88.Data,(int)local_80);
      if ((FAutomationTestResults *)local_88.Data != (FAutomationTestResults *)0x0) {
        FMemory::Free(local_88.Data);
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetTestFlags @ 148c6bbc0

void __thiscall
FAutomationReport::SetTestFlags(FAutomationReport *this,EAutomationTestFlags param_1)

{
  EAutomationTestFlags *pEVar1;
  
  pEVar1 = &(this->TestInfo).TestFlags;
  *pEVar1 = *pEVar1 | param_1;
  if (param_1 == SmokeFilter) {
    this->bEnabled = true;
  }
  return;
}

// StopRunningTest @ 148c6d4a0

void __thiscall FAutomationReport::StopRunningTest(FAutomationReport *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong local_res8;
  
  cVar3 = (**(code **)(this->_padding_ + 0xa0))();
  if ((cVar3 != '\0') && (uVar6 = 0, 0 < (this->Results).ArrayNum)) {
    local_res8 = 0;
    do {
      uVar8 = 0;
      uVar9 = ~uVar6 >> 0x1f;
      lVar10 = 0;
      while( true ) {
        lVar7 = (longlong)(int)uVar6;
        uVar5 = 0;
        if ((int)uVar6 < (this->Results).ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)((this->Results).AllocatorInstance.Data + local_res8 + 8) <= (int)uVar8) break;
        uVar5 = 0;
        if ((int)uVar6 < (this->Results).ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->Results).AllocatorInstance.Data;
        uVar5 = 0;
        if ((int)uVar8 < *(int *)(pFVar1 + lVar7 * 0x10 + 8)) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(char *)(lVar10 + *(longlong *)(pFVar1 + lVar7 * 0x10)) == '\x01') {
          uVar5 = 0;
          if ((int)uVar6 < (this->Results).ArrayNum) {
            uVar5 = uVar9;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this->Results).AllocatorInstance.Data;
          uVar5 = 0;
          if ((int)uVar8 < *(int *)(pFVar1 + lVar7 * 0x10 + 8)) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined1 *)(lVar10 + *(longlong *)(pFVar1 + lVar7 * 0x10)) = 0;
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x40;
      }
      local_res8 = local_res8 + 0x10;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (this->Results).ArrayNum);
  }
  uVar6 = 0;
  if (0 < (this->ChildReports).ArrayNum) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar6 < (this->ChildReports).ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->ChildReports).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + lVar10) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(**(longlong **)(pFVar1 + lVar10) + 0x1a8))();
      uVar6 = uVar6 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar6 < (this->ChildReports).ArrayNum);
  }
  return;
}

