// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 9

// SuppressLogs @ 148c703b0

bool __thiscall FFunctionalTestBase::SuppressLogs(FFunctionalTestBase *this)

{
  if (GRHIValidationEnabled) {
    if (this->bSuppressLogs != false) {
      return true;
    }
  }
  else {
    if (this->bSuppressLogs != false) {
      return true;
    }
    if (!bIsFunctionalTestRunning) {
      return true;
    }
  }
  return false;
}

// ShouldCaptureLogCategory @ 148c703e0

bool __thiscall
FFunctionalTestBase::ShouldCaptureLogCategory(FFunctionalTestBase *this,FName *param_1)

{
  FName *pFVar1;
  FName local_res18 [2];
  
  if ((GRHIValidationEnabled) && (!bIsFunctionalTestRunning)) {
    pFVar1 = ::FName::FName(local_res18,L"LogRHI");
    return *param_1 == *pFVar1;
  }
  return true;
}

// SuppressLogErrors @ 148c70430

bool __thiscall FFunctionalTestBase::SuppressLogErrors(FFunctionalTestBase *this)

{
  return this->bSuppressLogErrors;
}

// SuppressLogWarnings @ 148c70440

bool __thiscall FFunctionalTestBase::SuppressLogWarnings(FFunctionalTestBase *this)

{
  return this->bSuppressLogWarnings;
}

// ElevateLogWarningsToErrors @ 148c70450

bool __thiscall FFunctionalTestBase::ElevateLogWarningsToErrors(FFunctionalTestBase *this)

{
  return this->bElevateLogWarningsToErrors;
}

// FFunctionalTestBase @ 148c7f630

FFunctionalTestBase * __thiscall
FFunctionalTestBase::FFunctionalTestBase(FFunctionalTestBase *this,FString *param_1,bool param_2)

{
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,param_2);
  this->bSuppressLogs = false;
  this->_padding_ = (longlong)&___7FFunctionalTestBase__6B_;
  bIsFunctionalTestRunning = false;
  this->bSuppressLogErrors = false;
  this->bSuppressLogWarnings = false;
  this->bElevateLogWarningsToErrors = true;
  return this;
}

// SetFunctionalTestComplete @ 148c9bc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFunctionalTestBase::SetFunctionalTestComplete(FFunctionalTestBase *this,FString *param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((!bIsFunctionalTestRunning) && (1 < (byte)LogFunctionalTest._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
  }
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == ActiveTestName.Data.ArrayNum) {
    if (iVar1 < 2) goto LAB_148c9bd06;
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)ActiveTestName.Data.AllocatorInstance.Data);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = iVar1 + ActiveTestName.Data.ArrayNum == 1;
  }
  if ((!bVar2) && (1 < (byte)LogFunctionalTest._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
  }
LAB_148c9bd06:
  bIsFunctionalTestRunning = false;
  ::FString::operator=(&ActiveTestName,L"");
  return;
}

// SetFunctionalTestRunning @ 148c9bd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFunctionalTestBase::SetFunctionalTestRunning(FFunctionalTestBase *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((bIsFunctionalTestRunning) && (1 < (byte)LogFunctionalTest._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
  }
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if ((iVar2 == 0) && (1 < (byte)LogFunctionalTest._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
  }
  bIsFunctionalTestRunning = true;
  ::FString::operator=(&ActiveTestName,param_1);
  return;
}

// SetLogErrorAndWarningHandlingToDefault @ 148c9bdb0

void __thiscall
FFunctionalTestBase::SetLogErrorAndWarningHandlingToDefault(FFunctionalTestBase *this)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  
  pUVar5 = Z_Construct_UClass_UAutomationControllerSettings_NoRegister();
  if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar5);
  }
  pUVar2 = (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar5 = Z_Construct_UClass_UAutomationControllerSettings_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar5->_padding_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->bSuppressLogErrors = (bool)pUVar2[1].field_0x10;
  this->bSuppressLogWarnings = (bool)pUVar2[1].field_0x11;
  this->bElevateLogWarningsToErrors = (bool)pUVar2[1].field_0x12;
  return;
}

