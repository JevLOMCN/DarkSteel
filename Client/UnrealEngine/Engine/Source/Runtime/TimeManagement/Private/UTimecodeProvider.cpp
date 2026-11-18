// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 8

// FetchTimecode @ 14604bf40

bool __thiscall
UTimecodeProvider::FetchTimecode(UTimecodeProvider *this,FQualifiedFrameTime *param_1)

{
  return false;
}

// GetSynchronizationState @ 14604d370

ETimecodeProviderSynchronizationState __thiscall
UTimecodeProvider::GetSynchronizationState(UTimecodeProvider *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TimecodeProvider.h"
             ,0x5e,L"Pure virtual not implemented (%s)");
  return Closed;
}

// Initialize @ 14604dc90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UTimecodeProvider::Initialize(UTimecodeProvider *this,UEngine *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TimecodeProvider.h"
             ,0x62,L"Pure virtual not implemented (%s)");
  return false;
}

// IsAutoDetected @ 14604ddc0

bool __thiscall UTimecodeProvider::IsAutoDetected(UTimecodeProvider *this)

{
  return false;
}

// SetIsAutoDetected @ 14604fa10

void __thiscall UTimecodeProvider::SetIsAutoDetected(UTimecodeProvider *this,bool param_1)

{
  return;
}

// Shutdown @ 14604fc40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UTimecodeProvider::Shutdown(UTimecodeProvider *this,UEngine *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TimecodeProvider.h"
             ,0x65,L"Pure virtual not implemented (%s)");
  return;
}

// StaticClass @ 14604fd70

UClass * __cdecl UTimecodeProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTimecodeProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TimecodeProvider",
               &Z_Registration_Info_UClass_UTimecodeProvider.InnerSingleton,
               StaticRegisterNativesUTimecodeProvider,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UTimecodeProvider>,
               InternalVTableHelperCtorCaller<UTimecodeProvider>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimecodeProvider.InnerSingleton;
}

// SupportsAutoDetected @ 14604fea0

bool __thiscall UTimecodeProvider::SupportsAutoDetected(UTimecodeProvider *this)

{
  return false;
}

