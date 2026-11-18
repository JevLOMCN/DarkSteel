// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 7

// operator()<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagBlocked<FTestTag_B>_> @ 1470d1660

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::
FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagBlocked<FTestTag_B>_>
::ConfigureQuery'::__l2::<lambda_1>::
operator()<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagBlocked<FTestTag_B>_>
          (void *this,FConstFragmentAccess<FTestFragment_Float> *param_1,
          FMassTagBlocked<FTestTag_B> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            (*(FMassFragmentRequirements **)this,ReadOnly,All);
  lVar1 = *(longlong *)this;
  if ((*(byte *)(lVar1 + 0x270) & 0x10) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                       ,0x114,L"Modifying requirements before initialization is not supported.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestTag_B>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)(lVar1 + 0x80),iVar4);
  *(short *)(lVar1 + 0x272) = *(short *)(lVar1 + 0x272) + 1;
  *(ushort *)(lVar1 + 0x270) = *(ushort *)(lVar1 + 0x270) & 0xfffe;
  return;
}

// ConfigureQuery @ 14711b670

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>_>::ConfigureQuery
          (FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>_> *this,
          FMassEntityQuery *param_1,FMassSubsystemRequirements *param_2)

{
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)param_1,ReadOnly,All);
  return;
}

// ConfigureQuery @ 14711b690

void __thiscall
UE::Mass::
FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagBlocked<FTestTag_B>_>
::ConfigureQuery(FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagBlocked<FTestTag_B>_>
                 *this,FMassEntityQuery *param_1,FMassSubsystemRequirements *param_2)

{
  FMassEntityQuery *local_18;
  FMassSubsystemRequirements *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  `UE::Mass::
  FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagBlocked<FTestTag_B>_>
  ::ConfigureQuery'::__l2::<lambda_1>::
  operator()<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagBlocked<FTestTag_B>_>
            (&local_18,(FConstFragmentAccess<FTestFragment_Float> *)&this->AccessorTuple,
             (FMassTagBlocked<FTestTag_B> *)&(this->AccessorTuple).field_0x10);
  return;
}

// ConfigureQuery @ 14711b6c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::
FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagRequired<FTestTag_A>_>
::ConfigureQuery(FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagRequired<FTestTag_A>_>
                 *this,FMassEntityQuery *param_1,FMassSubsystemRequirements *param_2)

{
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)param_1,ReadOnly,All);
  FMassFragmentRequirements::AddTagRequirement<FTestTag_A>((FMassFragmentRequirements *)param_1,All)
  ;
  return;
}

// SetupForExecute @ 1471ab6b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>_>::SetupForExecute
          (FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>_> *this,
          FMassExecutionContext *param_1)

{
  return;
}

// SetupForExecute @ 1471ab6c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::
FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagBlocked<FTestTag_B>_>
::SetupForExecute(FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagBlocked<FTestTag_B>_>
                  *this,FMassExecutionContext *param_1)

{
  return;
}

// SetupForExecute @ 1471ab6d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::
FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagRequired<FTestTag_A>_>
::SetupForExecute(FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagRequired<FTestTag_A>_>
                  *this,FMassExecutionContext *param_1)

{
  return;
}

