// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 4

// StaticStruct @ 148c4e180

UScriptStruct * __cdecl FAutomatedTestFilterBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestFilterBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationController();
    Z_Registration_Info_UScriptStruct_FAutomatedTestFilterBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestFilterBase,(UObject *)pUVar1,
                         L"AutomatedTestFilterBase");
  }
  return Z_Registration_Info_UScriptStruct_FAutomatedTestFilterBase.OuterSingleton;
}

// PassesFilter @ 148c4e1c0

bool __thiscall
FAutomatedTestFilterBase::PassesFilter
          (FAutomatedTestFilterBase *this,TSharedPtr<IAutomationReport,1> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  size_t sVar7;
  IAutomationReport *pIVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  
  pwVar10 = L"";
  bVar3 = true;
  iVar5 = 0;
  if (this->MatchFromStart == false) {
    if (this->MatchFromEnd == false) {
      pwVar10 = L"";
      if ((param_1->Object == (IAutomationReport *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar6 = (FString *)(**(code **)(param_1->Object->_padding_ + 0x20))();
      if (((this->Contains).Data.ArrayNum != 0) &&
         (pwVar10 = (wchar_t *)(this->Contains).Data.AllocatorInstance.Data,
         (FScriptContainerElement *)pwVar10 == (FScriptContainerElement *)0x0)) {
        return false;
      }
      sVar7 = wcslen(pwVar10);
      iVar5 = ::FString::Find(pFVar6,pwVar10,(int)sVar7,IgnoreCase,FromStart,-1);
      return iVar5 != -1;
    }
  }
  else {
    if ((param_1->Object == (IAutomationReport *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar6 = (FString *)(**(code **)(param_1->Object->_padding_ + 0x20))();
    iVar1 = (this->Contains).Data.ArrayNum;
    if (iVar1 == 0) {
      pwVar9 = L"";
      iVar1 = iVar5;
    }
    else {
      pwVar9 = (wchar_t *)(this->Contains).Data.AllocatorInstance.Data;
      iVar1 = iVar1 + -1;
    }
    bVar3 = ::FString::StartsWith(pFVar6,pwVar9,iVar1,IgnoreCase);
  }
  if ((this->MatchFromEnd != false) && (bVar3 != false)) {
    pIVar8 = TSharedPtr<IAutomationReport,1>::operator->(param_1);
    pFVar6 = (FString *)(**(code **)(pIVar8->_padding_ + 0x20))(pIVar8);
    iVar1 = (this->Contains).Data.ArrayNum;
    if (iVar1 != 0) {
      pwVar10 = (wchar_t *)(this->Contains).Data.AllocatorInstance.Data;
      iVar5 = iVar1 + -1;
    }
    bVar3 = ::FString::EndsWith(pFVar6,pwVar10,iVar5,IgnoreCase);
  }
  return bVar3;
}

// FAutomatedTestFilterBase @ 148c528b0

FAutomatedTestFilterBase * __thiscall
FAutomatedTestFilterBase::FAutomatedTestFilterBase(FAutomatedTestFilterBase *this)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,L"");
  this->_padding_ = (longlong)&___7FAutomatedTestFilterBase__6B_;
  ::FString::FString(&this->Contains,pFVar2);
  this->MatchFromStart = false;
  this->MatchFromEnd = false;
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAutomatedTestFilterBase__6B_;
  return this;
}

// ~FAutomatedTestFilterBase @ 148c53c00

void __thiscall FAutomatedTestFilterBase::~FAutomatedTestFilterBase(FAutomatedTestFilterBase *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FAutomatedTestFilterBase__6B_;
  pFVar1 = (this->Contains).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

