// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticStruct @ 148074980

UScriptStruct * __cdecl FNetworkMetricsMutator::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetworkMetricsMutator,(UObject *)pUVar1,
                         L"NetworkMetricsMutator");
  }
  return Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.OuterSingleton;
}

// ~FNetworkMetricsMutator @ 14808e960

void __thiscall FNetworkMetricsMutator::~FNetworkMetricsMutator(FNetworkMetricsMutator *this)

{
  return;
}

// GetAllMetricNames @ 1480a3b70

TArrayView<FName_const_,int> * __thiscall
FNetworkMetricsMutator::GetAllMetricNames
          (FNetworkMetricsMutator *this,TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\NetworkMetricsMutators.h"
             ,0x34,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->DataPtr = (FName *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetName @ 1480a6100

FName __thiscall FNetworkMetricsMutator::GetName(FNetworkMetricsMutator *this)

{
  FName in_RDX;
  
  if (this->NameOverride != (FName)0x0) {
    *(FName *)in_RDX = this->NameOverride;
    return in_RDX;
  }
  (**(code **)(this->_padding_ + 0x28))();
  return in_RDX;
}

// GetNameInternal @ 1480a6140

FName __thiscall FNetworkMetricsMutator::GetNameInternal(FNetworkMetricsMutator *this)

{
  FName in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\NetworkMetricsMutators.h"
             ,0x38,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetValue @ 1480aba80

TVariant<float,__int64> * __thiscall
FNetworkMetricsMutator::GetValue
          (FNetworkMetricsMutator *this,TVariant<float,__int64> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\NetworkMetricsMutators.h"
             ,0x31,L"Pure virtual not implemented (%s)");
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->TypeIndex = '\0';
  return __return_storage_ptr__;
}

// ProcessFrame @ 1480be4d0

void __thiscall
FNetworkMetricsMutator::ProcessFrame(FNetworkMetricsMutator *this,FNetworkMetricSnapshot *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\NetworkMetricsMutators.h"
             ,0x2b,L"Pure virtual not implemented (%s)");
  return;
}

// Reset @ 1480cc040

void __thiscall FNetworkMetricsMutator::Reset(FNetworkMetricsMutator *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\NetworkMetricsMutators.h"
             ,0x2e,L"Pure virtual not implemented (%s)");
  return;
}

