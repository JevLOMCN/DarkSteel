// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StudioTelemetry
// Functions: 2

// operator-> @ 14ea1a130

FAnalyticsProviderBroadcast * __thiscall
TSharedPtr<FAnalyticsProviderBroadcast,1>::operator->
          (TSharedPtr<FAnalyticsProviderBroadcast,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FAnalyticsProviderBroadcast *pFVar3;
  
  if (this->Object != (FAnalyticsProviderBroadcast *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAnalyticsProviderBroadcast *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14ea1a180

IAnalyticsTracer * __thiscall
TSharedPtr<IAnalyticsTracer,1>::operator->(TSharedPtr<IAnalyticsTracer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IAnalyticsTracer *pIVar3;
  
  if (this->Object != (IAnalyticsTracer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAnalyticsTracer *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

