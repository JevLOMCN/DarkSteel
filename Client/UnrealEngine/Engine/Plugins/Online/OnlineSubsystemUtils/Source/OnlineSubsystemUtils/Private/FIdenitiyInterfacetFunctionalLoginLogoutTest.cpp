// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 8

// GetTestFlags @ 14eca7620

EAutomationTestFlags __thiscall
FIdenitiyInterfacetFunctionalLoginLogoutTest::GetTestFlags
          (FIdenitiyInterfacetFunctionalLoginLogoutTest *this)

{
  return StressFilter|ClientContext;
}

// IsStressTest @ 14eca7630

bool __thiscall
FIdenitiyInterfacetFunctionalLoginLogoutTest::IsStressTest
          (FIdenitiyInterfacetFunctionalLoginLogoutTest *this)

{
  return true;
}

// GetRequiredDeviceNum @ 14eca7640

uint __thiscall
FIdenitiyInterfacetFunctionalLoginLogoutTest::GetRequiredDeviceNum
          (FIdenitiyInterfacetFunctionalLoginLogoutTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14eca7650

FString * __thiscall
FIdenitiyInterfacetFunctionalLoginLogoutTest::GetTestSourceFileName
          (FIdenitiyInterfacetFunctionalLoginLogoutTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\OnlineSubsystemUtilitiesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14eca7680

int __thiscall
FIdenitiyInterfacetFunctionalLoginLogoutTest::GetTestSourceFileLine
          (FIdenitiyInterfacetFunctionalLoginLogoutTest *this)

{
  return 0x8b;
}

// GetTests @ 14eca7690

void __thiscall
FIdenitiyInterfacetFunctionalLoginLogoutTest::GetTests
          (FIdenitiyInterfacetFunctionalLoginLogoutTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Functional Tests.Log in and then log out");
  OSSUtilsTestHelper::GetOSSNamesForTesting(param_1,param_2,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// RunTest @ 14eca76f0

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
FIdenitiyInterfacetFunctionalLoginLogoutTest::RunTest
          (FIdenitiyInterfacetFunctionalLoginLogoutTest *this,FString *param_1)

{
  wchar_t *pwVar1;
  FAutomationTestFramework *pFVar2;
  FTestIdentityInterfaceLoginOut *pFVar3;
  TSharedPtr<IAutomationLatentCommand,1> *pTVar4;
  FTestIdentityInterfaceLoginOut *pFVar5;
  IAutomationLatentCommand *pIVar6;
  bool bVar7;
  TRawPtrProxy<FTestIdentityInterfaceLoginOut> local_res18;
  TSharedPtr<IAutomationLatentCommand,1> local_78;
  FString local_68;
  FString local_58;
  FTestIdentityInterfaceStruct local_48;
  FTestIdentityInterfaceStruct local_28;
  
  ::FString::FString(&local_58,L"");
  ::FString::FString(&local_68,L"");
  ::FString::operator=(&local_58,L"");
  ::FString::operator=(&local_68,L"");
  pwVar1 = FCommandLine::Get();
  ::FString::FString((FString *)&local_78,pwVar1);
  pIVar6 = (IAutomationLatentCommand *)L"";
  if ((int)local_78.SharedReferenceCount.ReferenceController != 0) {
    pIVar6 = local_78.Object;
  }
  pFVar5 = (FTestIdentityInterfaceLoginOut *)0x0;
  FParse::Value((wchar_t *)pIVar6,L"OSSIDTESTUSER=",&local_58,true,(wchar_t **)0x0);
  pIVar6 = (IAutomationLatentCommand *)L"";
  if ((int)local_78.SharedReferenceCount.ReferenceController != 0) {
    pIVar6 = local_78.Object;
  }
  FParse::Value((wchar_t *)pIVar6,L"OSSIDTESTPSSWD=",&local_68,true,(wchar_t **)0x0);
  if ((local_58.Data.ArrayNum < 2) || (local_68.Data.ArrayNum < 2)) {
    if (1 < (byte)OSSUtilsTestLog._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&OSSUtilsTestLog);
    }
    if (local_78.Object != (IAutomationLatentCommand *)0x0) {
      FMemory::Free(local_78.Object);
    }
    bVar7 = false;
  }
  else {
    if (local_78.Object != (IAutomationLatentCommand *)0x0) {
      FMemory::Free(local_78.Object);
    }
    ::FString::FString((FString *)&local_78,L"epic");
    FTestIdentityInterfaceStruct::FTestIdentityInterfaceStruct
              (&local_28,&local_58,&local_68,(FString *)&local_78,param_1);
    if (local_78.Object != (IAutomationLatentCommand *)0x0) {
      FMemory::Free(local_78.Object);
    }
    ::FString::FString((FString *)&local_78,L"epic");
    FTestIdentityInterfaceStruct::FTestIdentityInterfaceStruct
              (&local_48,&local_58,&local_68,(FString *)&local_78,param_1);
    if (local_78.Object != (IAutomationLatentCommand *)0x0) {
      FMemory::Free(local_78.Object);
    }
    local_48.bIsLogoutTest = true;
    pFVar2 = FAutomationTestFramework::Get();
    pFVar3 = ::operator_new(0x40);
    local_res18.Object = pFVar5;
    if (pFVar3 != (FTestIdentityInterfaceLoginOut *)0x0) {
      pFVar3->_padding_ = 0;
      pFVar3->_padding_ = 0;
      (pFVar3->TestStruct).CurrentWorld = local_28.CurrentWorld;
      (pFVar3->TestStruct).AccountCredentials = local_28.AccountCredentials;
      pFVar3->_padding_ = 0;
      (pFVar3->TestStruct).IdentityInterface = local_28.IdentityInterface;
      (pFVar3->TestStruct).bIsLogoutTest = local_28.bIsLogoutTest;
      *(undefined3 *)&(pFVar3->TestStruct).field_0x19 = local_28._25_3_;
      (pFVar3->TestStruct).TestStatus = local_28.TestStatus;
      pFVar3->_padding_ = (longlong)&___7FTestIdentityInterfaceLoginOut__6B_;
      local_res18.Object = pFVar3;
    }
    pTVar4 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FTestIdentityInterfaceLoginOut>
                       (&local_78,&local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar2,pTVar4);
    pFVar2 = FAutomationTestFramework::Get();
    pFVar3 = ::operator_new(0x40);
    if (pFVar3 != (FTestIdentityInterfaceLoginOut *)0x0) {
      pFVar3->_padding_ = 0;
      pFVar3->_padding_ = 0;
      (pFVar3->TestStruct).CurrentWorld = local_48.CurrentWorld;
      (pFVar3->TestStruct).AccountCredentials = local_48.AccountCredentials;
      pFVar3->_padding_ = 0;
      (pFVar3->TestStruct).IdentityInterface = local_48.IdentityInterface;
      (pFVar3->TestStruct).bIsLogoutTest = local_48.bIsLogoutTest;
      *(int3 *)&(pFVar3->TestStruct).field_0x19 = local_48._25_3_;
      (pFVar3->TestStruct).TestStatus = local_48.TestStatus;
      pFVar3->_padding_ = (longlong)&___7FTestIdentityInterfaceLoginOut__6B_;
      pFVar5 = pFVar3;
    }
    local_res18.Object = pFVar5;
    pTVar4 = TSharedPtr<IAutomationLatentCommand,1>::
             TSharedPtr<IAutomationLatentCommand,1><FTestIdentityInterfaceLoginOut>
                       (&local_78,&local_res18);
    FAutomationTestFramework::EnqueueLatentCommand(pFVar2,pTVar4);
    bVar7 = true;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// GetBeautifiedTestName @ 14eca7960

FString * __thiscall
FIdenitiyInterfacetFunctionalLoginLogoutTest::GetBeautifiedTestName
          (FIdenitiyInterfacetFunctionalLoginLogoutTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.OSS");
  return __return_storage_ptr__;
}

