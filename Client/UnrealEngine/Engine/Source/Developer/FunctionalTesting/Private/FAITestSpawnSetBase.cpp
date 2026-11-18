// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 7

// StaticStruct @ 148c75300

UScriptStruct * __cdecl FAITestSpawnSetBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAITestSpawnSetBase.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UScriptStruct_FAITestSpawnSetBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAITestSpawnSetBase,(UObject *)pUVar1,
                         L"AITestSpawnSetBase");
  }
  return Z_Registration_Info_UScriptStruct_FAITestSpawnSetBase.OuterSingleton;
}

// GetSpawnInfo @ 148c75350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAITestSpawnInfoBase * __thiscall
FAITestSpawnSetBase::GetSpawnInfo(FAITestSpawnSetBase *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Classes\\FunctionalAITest.h"
             ,0xb1,L"Pure virtual not implemented (%s)");
  return (FAITestSpawnInfoBase *)0x0;
}

// GetSpawnInfo @ 148c75380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAITestSpawnInfoBase * __thiscall
FAITestSpawnSetBase::GetSpawnInfo(FAITestSpawnSetBase *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Classes\\FunctionalAITest.h"
             ,0xb4,L"Pure virtual not implemented (%s)");
  return (FAITestSpawnInfoBase *)0x0;
}

// IsValidSpawnInfoIndex @ 148c753b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FAITestSpawnSetBase::IsValidSpawnInfoIndex(FAITestSpawnSetBase *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Classes\\FunctionalAITest.h"
             ,0xb7,L"Pure virtual not implemented (%s)");
  return false;
}

// ForEachSpawnInfo @ 148c753e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAITestSpawnSetBase::ForEachSpawnInfo
          (FAITestSpawnSetBase *this,
          TFunctionRef<void___cdecl(FAITestSpawnInfoBase_const_&)> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Classes\\FunctionalAITest.h"
             ,0xba,L"Pure virtual not implemented (%s)");
  return;
}

// ForEachSpawnInfo @ 148c75410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAITestSpawnSetBase::ForEachSpawnInfo
          (FAITestSpawnSetBase *this,TFunctionRef<void___cdecl(FAITestSpawnInfoBase_&)> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Classes\\FunctionalAITest.h"
             ,0xbd,L"Pure virtual not implemented (%s)");
  return;
}

// ~FAITestSpawnSetBase @ 148c80bf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAITestSpawnSetBase::~FAITestSpawnSetBase(FAITestSpawnSetBase *this)

{
  return;
}

