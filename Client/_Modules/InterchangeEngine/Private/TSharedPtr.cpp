// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 4

// operator*<UE::Interchange::FImportAsyncHelper> @ 14e4ceae0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FImportAsyncHelper * __thiscall
TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::operator*<UE::Interchange::FImportAsyncHelper>
          (TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FImportAsyncHelper *pFVar3;
  
  if (this->Object != (FImportAsyncHelper *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImportAsyncHelper *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14e4dbb30

FAnalyticsHelper * __thiscall
TSharedPtr<UE::Interchange::FAnalyticsHelper,1>::operator->
          (TSharedPtr<UE::Interchange::FAnalyticsHelper,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FAnalyticsHelper *pFVar3;
  
  if (this->Object != (FAnalyticsHelper *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAnalyticsHelper *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14e4dbb80

FAsyncTaskNotification * __thiscall
TSharedPtr<FAsyncTaskNotification,1>::operator->(TSharedPtr<FAsyncTaskNotification,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FAsyncTaskNotification *pFVar3;
  
  if (this->Object != (FAsyncTaskNotification *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAsyncTaskNotification *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14e4dbbd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FImportAsyncHelper * __thiscall
TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::operator->
          (TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FImportAsyncHelper *pFVar3;
  
  if (this->Object != (FImportAsyncHelper *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImportAsyncHelper *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

