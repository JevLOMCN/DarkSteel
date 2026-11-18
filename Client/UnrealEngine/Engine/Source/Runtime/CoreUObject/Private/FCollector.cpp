// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 18

// HandleObjectReference @ 1421d0f60

void __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::
FCollector<1>::HandleObjectReference
          (FCollector<1> *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  FProcessor::HandleTokenStreamObjectReference
            (this->Processor,this->Context,param_2,param_1,(FMemberId)0x20000000,Other,false);
  return;
}

// HandleObjectReference @ 1421d0fa0

void __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::
FCollector<0>::HandleObjectReference
          (FCollector<0> *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  FProcessor::HandleTokenStreamObjectReference
            (this->Processor,this->Context,param_2,param_1,(FMemberId)0x20000000,Other,false);
  return;
}

// HandleObjectReference @ 1421d0fe0

void __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::
FCollector<0>::HandleObjectReference
          (FCollector<0> *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  FProcessor::HandleTokenStreamObjectReference
            (this->Processor,this->Context,param_2,param_1,(FMemberId)0x20000000,Other,false);
  return;
}

// HandleObjectReferences @ 1421d1830

void __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::
FCollector<1>::HandleObjectReferences
          (FCollector<1> *this,UObject **param_1,int param_2,UObject *param_3,FProperty *param_4)

{
  UObject **ppUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_2 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ppUVar1 = param_1 + param_2;
  for (; param_1 != ppUVar1; param_1 = param_1 + 1) {
    FProcessor::HandleTokenStreamObjectReference
              (this->Processor,this->Context,param_3,param_1,(FMemberId)0x20000000,Other,false);
  }
  return;
}

// HandleObjectReferences @ 1421d18e0

void __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::
FCollector<0>::HandleObjectReferences
          (FCollector<0> *this,UObject **param_1,int param_2,UObject *param_3,FProperty *param_4)

{
  UObject **ppUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_2 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ppUVar1 = param_1 + param_2;
  for (; param_1 != ppUVar1; param_1 = param_1 + 1) {
    FProcessor::HandleTokenStreamObjectReference
              (this->Processor,this->Context,param_3,param_1,(FMemberId)0x20000000,Other,false);
  }
  return;
}

// HandleObjectReferences @ 1421d1990

void __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::
FCollector<0>::HandleObjectReferences
          (FCollector<0> *this,UObject **param_1,int param_2,UObject *param_3,FProperty *param_4)

{
  UObject **ppUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_2 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ppUVar1 = param_1 + param_2;
  for (; param_1 != ppUVar1; param_1 = param_1 + 1) {
    FProcessor::HandleTokenStreamObjectReference
              (this->Processor,this->Context,param_3,param_1,(FMemberId)0x20000000,Other,false);
  }
  return;
}

// IsIgnoringArchetypeRef @ 1421d3540

bool __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::
FCollector<1>::IsIgnoringArchetypeRef(FCollector<1> *this)

{
  return false;
}

// IsIgnoringArchetypeRef @ 1421d3550

bool __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::
FCollector<0>::IsIgnoringArchetypeRef(FCollector<0> *this)

{
  return false;
}

// IsIgnoringArchetypeRef @ 1421d3560

bool __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::
FCollector<0>::IsIgnoringArchetypeRef(FCollector<0> *this)

{
  return false;
}

// IsIgnoringTransient @ 1421d3590

bool __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::
FCollector<1>::IsIgnoringTransient(FCollector<1> *this)

{
  return false;
}

// IsIgnoringTransient @ 1421d35a0

bool __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::
FCollector<0>::IsIgnoringTransient(FCollector<0> *this)

{
  return false;
}

// IsIgnoringTransient @ 1421d35b0

bool __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::
FCollector<0>::IsIgnoringTransient(FCollector<0> *this)

{
  return false;
}

// MarkWeakObjectReferenceForClearing @ 1421d3fe0

bool __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::
FCollector<1>::MarkWeakObjectReferenceForClearing
          (FCollector<1> *this,UObject **param_1,UObject *param_2)

{
  return true;
}

// MarkWeakObjectReferenceForClearing @ 1421d3ff0

bool __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::
FCollector<0>::MarkWeakObjectReferenceForClearing
          (FCollector<0> *this,UObject **param_1,UObject *param_2)

{
  return true;
}

// MarkWeakObjectReferenceForClearing @ 1421d4000

bool __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::
FCollector<0>::MarkWeakObjectReferenceForClearing
          (FCollector<0> *this,UObject **param_1,UObject *param_2)

{
  return true;
}

// NeedsPropertyReferencer @ 1421d6360

bool __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::
FCollector<1>::NeedsPropertyReferencer(FCollector<1> *this)

{
  return true;
}

// NeedsPropertyReferencer @ 1421d6370

bool __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::
FCollector<0>::NeedsPropertyReferencer(FCollector<0> *this)

{
  return false;
}

// NeedsPropertyReferencer @ 1421d6380

bool __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::
FCollector<0>::NeedsPropertyReferencer(FCollector<0> *this)

{
  return false;
}

