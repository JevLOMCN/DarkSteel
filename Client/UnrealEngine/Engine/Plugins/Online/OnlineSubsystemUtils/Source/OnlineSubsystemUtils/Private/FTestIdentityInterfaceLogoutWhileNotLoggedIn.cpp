// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 8

// GetTestFlags @ 14eca7a10

EAutomationTestFlags __thiscall
FTestIdentityInterfaceLogoutWhileNotLoggedIn::GetTestFlags
          (FTestIdentityInterfaceLogoutWhileNotLoggedIn *this)

{
  return StressFilter|ClientContext;
}

// IsStressTest @ 14eca7a20

bool __thiscall
FTestIdentityInterfaceLogoutWhileNotLoggedIn::IsStressTest
          (FTestIdentityInterfaceLogoutWhileNotLoggedIn *this)

{
  return true;
}

// GetRequiredDeviceNum @ 14eca7a30

uint __thiscall
FTestIdentityInterfaceLogoutWhileNotLoggedIn::GetRequiredDeviceNum
          (FTestIdentityInterfaceLogoutWhileNotLoggedIn *this)

{
  return 1;
}

// GetTestSourceFileName @ 14eca7a40

FString * __thiscall
FTestIdentityInterfaceLogoutWhileNotLoggedIn::GetTestSourceFileName
          (FTestIdentityInterfaceLogoutWhileNotLoggedIn *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\OnlineSubsystemUtilitiesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14eca7a70

int __thiscall
FTestIdentityInterfaceLogoutWhileNotLoggedIn::GetTestSourceFileLine
          (FTestIdentityInterfaceLogoutWhileNotLoggedIn *this)

{
  return 0xaa;
}

// GetTests @ 14eca7aa0

void __thiscall
FTestIdentityInterfaceLogoutWhileNotLoggedIn::GetTests
          (FTestIdentityInterfaceLogoutWhileNotLoggedIn *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Functional Tests.Logging out while not logged in");
  OSSUtilsTestHelper::GetOSSNamesForTesting(param_1,param_2,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// RunTest @ 14eca7b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FTestIdentityInterfaceLogoutWhileNotLoggedIn::RunTest
          (FTestIdentityInterfaceLogoutWhileNotLoggedIn *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FAutomationTestFramework *this_00;
  FTestIdentityInterfaceLoginOut *pFVar4;
  FTestIdentityInterfaceLoginOut *pFVar5;
  TSharedPtr<IAutomationLatentCommand,1> *pTVar6;
  IAutomationLatentCommand *pIVar7;
  TRawPtrProxy<FTestIdentityInterfaceLoginOut> local_res18 [2];
  TSharedPtr<IAutomationLatentCommand,1> local_68;
  FString local_58;
  FString local_48;
  FTestIdentityInterfaceStruct local_38;
  
  ::FString::FString(&local_48,L"");
  ::FString::FString(&local_58,L"");
  ::FString::operator=(&local_48,L"");
  ::FString::operator=(&local_58,L"");
  pwVar3 = FCommandLine::Get();
  ::FString::FString((FString *)&local_68,pwVar3);
  pIVar7 = (IAutomationLatentCommand *)L"";
  if ((int)local_68.SharedReferenceCount.ReferenceController != 0) {
    pIVar7 = local_68.Object;
  }
  pFVar5 = (FTestIdentityInterfaceLoginOut *)0x0;
  FParse::Value((wchar_t *)pIVar7,L"OSSIDTESTUSER=",&local_48,true,(wchar_t **)0x0);
  pIVar7 = (IAutomationLatentCommand *)L"";
  if ((int)local_68.SharedReferenceCount.ReferenceController != 0) {
    pIVar7 = local_68.Object;
  }
  FParse::Value((wchar_t *)pIVar7,L"OSSIDTESTPSSWD=",&local_58,true,(wchar_t **)0x0);
  if ((local_48.Data.ArrayNum < 2) || (local_58.Data.ArrayNum < 2)) {
    if (1 < (byte)OSSUtilsTestLog._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&OSSUtilsTestLog);
    }
  }
  else {
    if (local_68.Object != (IAutomationLatentCommand *)0x0) {
      FMemory::Free(local_68.Object);
    }
    ::FString::FString((FString *)&local_68,L"epic");
    FTestIdentityInterfaceStruct::FTestIdentityInterfaceStruct
              (&local_38,&local_48,&local_58,(FString *)&local_68,param_1);
    if (local_68.Object != (IAutomationLatentCommand *)0x0) {
      FMemory::Free(local_68.Object);
    }
    local_38.bIsLogoutTest = true;
    bVar2 = FTestIdentityInterface::IsTheUserLoggedIn(local_38.IdentityInterface);
    if (!bVar2) {
      this_00 = FAutomationTestFramework::Get();
      pFVar4 = ::operator_new(0x40);
      if (pFVar4 != (FTestIdentityInterfaceLoginOut *)0x0) {
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        (pFVar4->TestStruct).CurrentWorld = local_38.CurrentWorld;
        (pFVar4->TestStruct).AccountCredentials = local_38.AccountCredentials;
        pFVar4->_padding_ = 0;
        (pFVar4->TestStruct).IdentityInterface = local_38.IdentityInterface;
        (pFVar4->TestStruct).bIsLogoutTest = local_38.bIsLogoutTest;
        *(int3 *)&(pFVar4->TestStruct).field_0x19 = local_38._25_3_;
        (pFVar4->TestStruct).TestStatus = local_38.TestStatus;
        pFVar4->_padding_ = (longlong)&___7FTestIdentityInterfaceLoginOut__6B_;
        pFVar5 = pFVar4;
      }
      local_res18[0].Object = pFVar5;
      pTVar6 = TSharedPtr<IAutomationLatentCommand,1>::
               TSharedPtr<IAutomationLatentCommand,1><FTestIdentityInterfaceLoginOut>
                         (&local_68,local_res18);
      FAutomationTestFramework::EnqueueLatentCommand(this_00,pTVar6);
      bVar2 = true;
      goto LAB_14eca7ccf;
    }
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::FString((FString *)&local_68,L"Unable to test as the user is currently logged in.");
    (*pcVar1)(this,&local_68,0);
  }
  if (local_68.Object != (IAutomationLatentCommand *)0x0) {
    FMemory::Free(local_68.Object);
  }
  bVar2 = false;
LAB_14eca7ccf:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetBeautifiedTestName @ 14eca7d10

FString * __thiscall
FTestIdentityInterfaceLogoutWhileNotLoggedIn::GetBeautifiedTestName
          (FTestIdentityInterfaceLogoutWhileNotLoggedIn *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.OSS");
  return __return_storage_ptr__;
}

