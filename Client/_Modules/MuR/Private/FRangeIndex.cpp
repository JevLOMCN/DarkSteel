// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 5

// GetPosition @ 14ab77fb0

int __thiscall UE::Mutable::Private::FRangeIndex::GetPosition(FRangeIndex *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  piVar1 = &(this->Values).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < GetRangeCount()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Parameters.cpp"
                         ,0x4d1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    return 0;
  }
  if ((param_1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  return *(int *)((this->Values).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// GetRangeCount @ 14ab784c0

int __thiscall UE::Mutable::Private::FRangeIndex::GetRangeCount(FRangeIndex *this)

{
  return (this->Values).ArrayNum;
}

// GetRangeName @ 14ab784d0

FString * __thiscall UE::Mutable::Private::FRangeIndex::GetRangeName(FRangeIndex *this,int param_1)

{
  Private *pPVar1;
  TReferenceControllerBase<1> *pTVar2;
  FModel *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  Private *pPVar7;
  uint uVar8;
  
  if ((param_1 < 0) || ((this->Values).ArrayNum <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < GetRangeCount()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Parameters.cpp"
                       ,0x4af,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if ((this->Parameters).Object == (FParameters *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if ((((this->Parameters).Object)->m_pD->Values).ArrayNum <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < int32(Parameters->GetPrivate()->Values.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Parameters.cpp"
                       ,0x4b0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if ((this->Parameters).Object == (FParameters *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  pPVar1 = ((this->Parameters).Object)->m_pD;
  pTVar2 = (pPVar1->Model).SharedReferenceCount.ReferenceController;
  this_00 = (pPVar1->Model).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FModel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Model",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Parameters.cpp"
                       ,0x4b2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  pPVar7 = FModel::GetPrivate(this_00);
  if ((pPVar7->Program).Ranges.ArrayNum <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < int32(Model->GetPrivate()->Program.Ranges.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Parameters.cpp"
                       ,0x4b3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (this_00 == (FModel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  pPVar7 = FModel::GetPrivate(this_00);
  uVar8 = 0;
  if (param_1 < (pPVar7->Program).Ranges.ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  pFVar3 = (pPVar7->Program).Ranges.AllocatorInstance.Data;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (FString *)(pFVar3 + (longlong)param_1 * 0x28);
}

// GetRangeUid @ 14ab786f0

FString * __thiscall UE::Mutable::Private::FRangeIndex::GetRangeUid(FRangeIndex *this,int param_1)

{
  Private *pPVar1;
  TReferenceControllerBase<1> *pTVar2;
  FModel *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  Private *pPVar7;
  uint uVar8;
  
  if ((param_1 < 0) || ((this->Values).ArrayNum <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < GetRangeCount()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Parameters.cpp"
                       ,0x4bb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if ((this->Parameters).Object == (FParameters *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if ((((this->Parameters).Object)->m_pD->Values).ArrayNum <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < int32(Parameters->GetPrivate()->Values.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Parameters.cpp"
                       ,0x4bc,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if ((this->Parameters).Object == (FParameters *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  pPVar1 = ((this->Parameters).Object)->m_pD;
  pTVar2 = (pPVar1->Model).SharedReferenceCount.ReferenceController;
  this_00 = (pPVar1->Model).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FModel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Model",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Parameters.cpp"
                       ,0x4be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  pPVar7 = FModel::GetPrivate(this_00);
  if ((pPVar7->Program).Ranges.ArrayNum <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < int32(Model->GetPrivate()->Program.Ranges.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Parameters.cpp"
                       ,0x4bf,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (this_00 == (FModel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  pPVar7 = FModel::GetPrivate(this_00);
  uVar8 = 0;
  if (param_1 < (pPVar7->Program).Ranges.ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  pFVar3 = (pPVar7->Program).Ranges.AllocatorInstance.Data;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (FString *)(pFVar3 + (longlong)param_1 * 0x28 + 0x10);
}

// SetPosition @ 14ab89b60

void __thiscall
UE::Mutable::Private::FRangeIndex::SetPosition(FRangeIndex *this,int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  piVar1 = &(this->Values).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < GetRangeCount()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Parameters.cpp"
                         ,0x4c7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((-1 < param_1) && (param_1 < *piVar1)) {
    if ((param_1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(int *)((this->Values).AllocatorInstance.Data + (longlong)param_1 * 4) = param_2;
  }
  return;
}

