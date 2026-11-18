// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 4

// StaticStruct @ 148c74560

UScriptStruct * __cdecl FAITestSpawnInfoBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAITestSpawnInfoBase.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UScriptStruct_FAITestSpawnInfoBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAITestSpawnInfoBase,(UObject *)pUVar1,
                         L"AITestSpawnInfoBase");
  }
  return Z_Registration_Info_UScriptStruct_FAITestSpawnInfoBase.OuterSingleton;
}

// IsValid @ 148c745a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FAITestSpawnInfoBase::IsValid(FAITestSpawnInfoBase *this)

{
  return (this->SpawnLocation).field0_0x0.DebugPtr != (AActor *)0x0;
}

// Spawn @ 148c745b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FAITestSpawnInfoBase::Spawn(FAITestSpawnInfoBase *this,AFunctionalAITestBase *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Classes\\FunctionalAITest.h"
             ,0x3d,L"Pure virtual not implemented (%s)");
  return false;
}

// ~FAITestSpawnInfoBase @ 148c80be0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAITestSpawnInfoBase::~FAITestSpawnInfoBase(FAITestSpawnInfoBase *this)

{
  return;
}

