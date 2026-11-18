// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 2

// ~FTestIdentityInterfaceLoginOut @ 14ecadac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTestIdentityInterfaceLoginOut::~FTestIdentityInterfaceLoginOut
          (FTestIdentityInterfaceLoginOut *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7IAutomationLatentCommand__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ecadaea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Update @ 14eccff80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FTestIdentityInterfaceLoginOut::Update(FTestIdentityInterfaceLoginOut *this)

{
  type tVar1;
  
  tVar1 = (this->TestStruct).TestStatus;
  if (tVar1 == NotStarted) {
    if (4 < (byte)OSSUtilsTestLog._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&OSSUtilsTestLog);
    }
    (this->TestStruct).TestStatus = BeginTest;
  }
  else {
    if (tVar1 == BeginTest) {
      if (4 < (byte)OSSUtilsTestLog._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&OSSUtilsTestLog);
      }
      FTestIdentityInterface::Test
                ((this->TestStruct).IdentityInterface,(this->TestStruct).CurrentWorld,
                 (this->TestStruct).AccountCredentials,(this->TestStruct).bIsLogoutTest);
      (this->TestStruct).TestStatus = PerformingTest;
      return false;
    }
    if (tVar1 == PerformingTest) {
      return ((this->TestStruct).IdentityInterface)->bIsTestFinished != false;
    }
  }
  return false;
}

