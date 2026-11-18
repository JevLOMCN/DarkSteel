// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FRPCDoSAnalyticsVars @ 1473d6f60

FRPCDoSAnalyticsVars * __thiscall
FRPCDoSAnalyticsVars::FRPCDoSAnalyticsVars(FRPCDoSAnalyticsVars *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  (this->PlayerIP).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerIP).Data.ArrayNum = 0;
  (this->PlayerIP).Data.ArrayMax = 0;
  (this->PlayerUID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerUID).Data.ArrayNum = 0;
  (this->PlayerUID).Data.ArrayMax = 0;
  this->MaxSeverityIndex = 0;
  (this->MaxSeverityCategory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxSeverityCategory).Data.ArrayNum = 0;
  (this->MaxSeverityCategory).Data.ArrayMax = 0;
  this->MaxAnalyticsSeverityIndex = 0;
  (this->MaxAnalyticsSeverityCategory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxAnalyticsSeverityCategory).Data.ArrayNum = 0;
  (this->MaxAnalyticsSeverityCategory).Data.ArrayMax = 0;
  (this->RPCTrackingAnalytics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RPCTrackingAnalytics).ArrayNum = 0;
  pTVar1 = CVarRPCDoSAnalyticsMaxRPCs.Ref;
  (this->RPCTrackingAnalytics).ArrayMax = 0;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (!bVar2) goto LAB_1473d6fc2;
  }
  lVar3 = 0;
LAB_1473d6fc2:
  this->MaxRPCAnalytics = *(int *)((longlong)pTVar1->ShadowedValue + lVar3);
  (this->MaxPlayerSeverity).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxPlayerSeverity).ArrayNum = 0;
  (this->MaxPlayerSeverity).ArrayMax = 0;
  return this;
}

// operator== @ 1473dc200

bool __thiscall
FRPCDoSAnalyticsVars::operator==(FRPCDoSAnalyticsVars *this,FRPCDoSAnalyticsVars *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (this->PlayerIP).Data.ArrayNum;
  iVar1 = (param_1->PlayerIP).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->PlayerIP).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->PlayerIP).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_1473dc233;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_1473dc233:
    if (!bVar3) {
      return false;
    }
  }
  iVar2 = (this->PlayerUID).Data.ArrayNum;
  iVar1 = (param_1->PlayerUID).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->PlayerUID).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->PlayerUID).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_1473dc263;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_1473dc263:
    if (!bVar3) {
      return false;
    }
  }
  if (this->MaxSeverityIndex != param_1->MaxSeverityIndex) {
    return false;
  }
  iVar2 = (this->MaxSeverityCategory).Data.ArrayNum;
  iVar1 = (param_1->MaxSeverityCategory).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->MaxSeverityCategory).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->MaxSeverityCategory).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_1473dc29f;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_1473dc29f:
    if (!bVar3) {
      return false;
    }
  }
  if (this->MaxAnalyticsSeverityIndex != param_1->MaxAnalyticsSeverityIndex) {
    return false;
  }
  iVar2 = (this->MaxAnalyticsSeverityCategory).Data.ArrayNum;
  iVar1 = (param_1->MaxAnalyticsSeverityCategory).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_1473dc2da;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->MaxAnalyticsSeverityCategory).Data.AllocatorInstance.Data,
                       (wchar_t *)
                       (param_1->MaxAnalyticsSeverityCategory).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_1473dc2da:
  iVar2 = (this->RPCTrackingAnalytics).ArrayNum;
  if ((((iVar2 == (param_1->RPCTrackingAnalytics).ArrayNum) &&
       (bVar3 = CompareItems<TSharedPtr<FRPCAnalytics,1>,int>
                          ((TSharedPtr<FRPCAnalytics,1> *)
                           (this->RPCTrackingAnalytics).AllocatorInstance.Data,
                           (TSharedPtr<FRPCAnalytics,1> *)
                           (param_1->RPCTrackingAnalytics).AllocatorInstance.Data,iVar2), bVar3)) &&
      (iVar2 = (this->MaxPlayerSeverity).ArrayNum, iVar2 == (param_1->MaxPlayerSeverity).ArrayNum))
     && (bVar3 = CompareItems<FMaxRPCDoSEscalation,int>
                           ((FMaxRPCDoSEscalation *)(this->MaxPlayerSeverity).AllocatorInstance.Data
                            ,(FMaxRPCDoSEscalation *)
                             (param_1->MaxPlayerSeverity).AllocatorInstance.Data,iVar2), bVar3)) {
    return true;
  }
  return false;
}

// operator() @ 1473dcd60

bool __thiscall
`FRPCDoSAnalyticsVars::CommitAnalytics'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FRPCAnalytics,1> *param_1,TSharedPtr<FRPCAnalytics,1> *param_2)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  if (param_1->Object == (FRPCAnalytics *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  dVar2 = param_1->Object->MaxTimePerSec;
  if (param_2->Object == (FRPCAnalytics *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pdVar1 = &param_2->Object->MaxTimePerSec;
  return *pdVar1 <= dVar2 && dVar2 != *pdVar1;
}

// CommitAnalytics @ 1473f2120

void __thiscall
FRPCDoSAnalyticsVars::CommitAnalytics(FRPCDoSAnalyticsVars *this,FRPCDoSAnalyticsVars *param_1)

{
  TArray<TSharedPtr<FRPCAnalytics,1>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  FIdentityFunctor local_res8 [8];
  FMaxRPCDoSEscalation local_78;
  
  uVar6 = 0;
  if (param_1->MaxSeverityIndex < this->MaxSeverityIndex) {
    param_1->MaxSeverityIndex = this->MaxSeverityIndex;
    iVar5 = (this->MaxSeverityCategory).Data.ArrayNum;
    iVar4 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange
              (&param_1->MaxSeverityCategory,
               (wchar_t *)(this->MaxSeverityCategory).Data.AllocatorInstance.Data,iVar4);
  }
  if (param_1->MaxAnalyticsSeverityIndex < this->MaxAnalyticsSeverityIndex) {
    param_1->MaxAnalyticsSeverityIndex = this->MaxAnalyticsSeverityIndex;
    iVar5 = (this->MaxAnalyticsSeverityCategory).Data.ArrayNum;
    iVar4 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange
              (&param_1->MaxAnalyticsSeverityCategory,
               (wchar_t *)(this->MaxAnalyticsSeverityCategory).Data.AllocatorInstance.Data,iVar4);
  }
  this_00 = &param_1->RPCTrackingAnalytics;
  if ((this_00 == &this->RPCTrackingAnalytics) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = (this->RPCTrackingAnalytics).ArrayNum;
  if (iVar5 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar5,&this_00->AllocatorInstance,
                       &(param_1->RPCTrackingAnalytics).ArrayNum,
                       &(param_1->RPCTrackingAnalytics).ArrayMax);
    ConstructItems<TSharedPtr<FRPCAnalytics,1>,TSharedPtr<FRPCAnalytics,1>,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x10,
               (TSharedPtr<FRPCAnalytics,1> *)(this->RPCTrackingAnalytics).AllocatorInstance.Data,
               iVar5);
  }
  AlgoImpl::
  IntroSortInternal<TSharedPtr<FRPCAnalytics,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FRPCAnalytics,1>,_FRPCDoSAnalyticsVars::CommitAnalytics_::__l2::<lambda_1>_>_>
            ((TSharedPtr<FRPCAnalytics,1> *)(this_00->AllocatorInstance).Data,
             (param_1->RPCTrackingAnalytics).ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
  iVar5 = (param_1->RPCTrackingAnalytics).ArrayNum;
  uVar8 = param_1->MaxRPCAnalytics;
  if ((int)uVar8 < iVar5) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    uVar10 = iVar5 - uVar8;
    if (((int)(uVar10 | uVar8) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar10 != 0) {
      TArray<TSharedPtr<FRPCAnalytics,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (this_00,uVar8,uVar10);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this_00->AllocatorInstance,(param_1->RPCTrackingAnalytics).ArrayNum,
                 &(param_1->RPCTrackingAnalytics).ArrayMax);
    }
  }
  if (this->MaxAnalyticsSeverityIndex != 0) {
    iVar5 = (param_1->MaxPlayerSeverity).ArrayNum;
    uVar9 = uVar6;
    uVar8 = 0;
    if (0 < iVar5) {
      do {
        uVar8 = (uint)uVar9;
        uVar10 = 0;
        if ((int)uVar8 < iVar5) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)((param_1->MaxPlayerSeverity).AllocatorInstance.Data + uVar6 + 0x38) <
            this->MaxAnalyticsSeverityIndex) break;
        iVar5 = (param_1->MaxPlayerSeverity).ArrayNum;
        uVar8 = uVar8 + 1;
        uVar6 = uVar6 + 0x50;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < iVar5);
    }
    local_78.PlayerIP.Data.ArrayNum = (this->PlayerIP).Data.ArrayNum;
    lVar7 = (longlong)local_78.PlayerIP.Data.ArrayNum;
    pFVar1 = (this->PlayerIP).Data.AllocatorInstance.Data;
    local_78.PlayerIP.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_78.PlayerIP.Data.ArrayNum == 0) {
      local_78.PlayerIP.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.PlayerIP.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_78.PlayerIP.Data.ArrayNum,&local_78.PlayerIP.Data.ArrayMax);
      memcpy(local_78.PlayerIP.Data.AllocatorInstance.Data,pFVar1,lVar7 * 2);
    }
    local_78.PlayerUID.Data.ArrayNum = (this->PlayerUID).Data.ArrayNum;
    lVar7 = (longlong)local_78.PlayerUID.Data.ArrayNum;
    pFVar1 = (this->PlayerUID).Data.AllocatorInstance.Data;
    local_78.PlayerUID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_78.PlayerUID.Data.ArrayNum == 0) {
      local_78.PlayerUID.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.PlayerUID.Data.ArrayNum,0,(ForAnyElementType *)&local_78.PlayerUID,
                 local_78.PlayerUID.Data.ArrayNum,&local_78.PlayerUID.Data.ArrayMax);
      memcpy(local_78.PlayerUID.Data.AllocatorInstance.Data,pFVar1,lVar7 * 2);
    }
    local_78.MaxSeverityCategory.Data.ArrayNum = (this->MaxSeverityCategory).Data.ArrayNum;
    lVar7 = (longlong)local_78.MaxSeverityCategory.Data.ArrayNum;
    local_78.MaxSeverityIndex = this->MaxSeverityIndex;
    pFVar1 = (this->MaxSeverityCategory).Data.AllocatorInstance.Data;
    local_78.MaxSeverityCategory.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_78.MaxSeverityCategory.Data.ArrayNum == 0) {
      local_78.MaxSeverityCategory.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.MaxSeverityCategory.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_78.MaxSeverityCategory,
                 local_78.MaxSeverityCategory.Data.ArrayNum,
                 &local_78.MaxSeverityCategory.Data.ArrayMax);
      memcpy(local_78.MaxSeverityCategory.Data.AllocatorInstance.Data,pFVar1,lVar7 * 2);
    }
    local_78.MaxAnalyticsSeverityCategory.Data.ArrayNum =
         (this->MaxAnalyticsSeverityCategory).Data.ArrayNum;
    lVar7 = (longlong)local_78.MaxAnalyticsSeverityCategory.Data.ArrayNum;
    local_78.MaxAnalyticsSeverityIndex = this->MaxAnalyticsSeverityIndex;
    pFVar1 = (this->MaxAnalyticsSeverityCategory).Data.AllocatorInstance.Data;
    local_78.MaxAnalyticsSeverityCategory.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    if (local_78.MaxAnalyticsSeverityCategory.Data.ArrayNum == 0) {
      local_78.MaxAnalyticsSeverityCategory.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.MaxAnalyticsSeverityCategory.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_78.MaxAnalyticsSeverityCategory,
                 local_78.MaxAnalyticsSeverityCategory.Data.ArrayNum,
                 &local_78.MaxAnalyticsSeverityCategory.Data.ArrayMax);
      memcpy(local_78.MaxAnalyticsSeverityCategory.Data.AllocatorInstance.Data,pFVar1,lVar7 * 2);
    }
    TArray<FMaxRPCDoSEscalation,TSizedDefaultAllocator<32>_>::Insert
              (&param_1->MaxPlayerSeverity,&local_78,uVar8);
    if (local_78.MaxAnalyticsSeverityCategory.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.MaxAnalyticsSeverityCategory.Data.AllocatorInstance.Data);
    }
    if (local_78.MaxSeverityCategory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_78.MaxSeverityCategory.Data.AllocatorInstance.Data);
    }
    if (local_78.PlayerUID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.PlayerUID.Data.AllocatorInstance.Data);
    }
    if (local_78.PlayerIP.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.PlayerIP.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ~FRPCDoSAnalyticsVars @ 147fa91e0

void __thiscall FRPCDoSAnalyticsVars::~FRPCDoSAnalyticsVars(FRPCDoSAnalyticsVars *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FMaxRPCDoSEscalation,int>
            ((FMaxRPCDoSEscalation *)(this->MaxPlayerSeverity).AllocatorInstance.Data,
             (this->MaxPlayerSeverity).ArrayNum);
  pFVar1 = (this->MaxPlayerSeverity).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FRPCAnalytics,1>,int>
            ((TSharedPtr<FRPCAnalytics,1> *)(this->RPCTrackingAnalytics).AllocatorInstance.Data,
             (this->RPCTrackingAnalytics).ArrayNum);
  pFVar1 = (this->RPCTrackingAnalytics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaxAnalyticsSeverityCategory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaxSeverityCategory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayerUID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayerIP).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

