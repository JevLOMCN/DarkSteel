// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// RegisterType<FTestSharedFragment_Int> @ 1470ee750

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTypeHandle __thiscall
UE::Mass::FTypeManager::RegisterType<FTestSharedFragment_Int>(FTypeManager *this)

{
  UPackage *pUVar1;
  TObjectKey<UStruct_const_> in_RDX;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar1,
                         L"TestSharedFragment_Int");
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
  }
  RegisterType(this,(TNotNull<UStruct_const_*>)in_RDX.ObjectKey,
               (FSharedFragmentTypeTraits *)
               Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton);
  return (FTypeHandle)in_RDX.ObjectKey;
}

// RegisterType<UMassTestParallelSubsystem> @ 1470ee7d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTypeHandle __thiscall
UE::Mass::FTypeManager::RegisterType<UMassTestParallelSubsystem>(FTypeManager *this)

{
  UClass *pUVar1;
  TObjectKey<UStruct_const_> in_RDX;
  
  pUVar1 = UMassTestParallelSubsystem::StaticClass();
  if (pUVar1 != (UClass *)0x0) {
    RegisterType(this,(TNotNull<UStruct_const_*>)in_RDX.ObjectKey,(FSubsystemTypeTraits *)pUVar1);
    return (FTypeHandle)in_RDX.ObjectKey;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// RegisterType<UMassTestWorldSubsystem> @ 1470ee830

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTypeHandle __thiscall
UE::Mass::FTypeManager::RegisterType<UMassTestWorldSubsystem>(FTypeManager *this)

{
  UClass *pUVar1;
  TObjectKey<UStruct_const_> in_RDX;
  
  pUVar1 = UMassTestWorldSubsystem::StaticClass();
  if (pUVar1 != (UClass *)0x0) {
    RegisterType(this,(TNotNull<UStruct_const_*>)in_RDX.ObjectKey,(FSubsystemTypeTraits *)pUVar1);
    return (FTypeHandle)in_RDX.ObjectKey;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// GetRelationTypeChecked @ 147121b00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

FRelationTypeTraits * __thiscall
UE::Mass::FTypeManager::GetRelationTypeChecked(FTypeManager *this,FTypeHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  FTypeInfo *pFVar3;
  FRelationTypeTraits *pFVar4;
  FObjectKey local_res8 [4];
  
  local_res8[0] = (FObjectKey)param_1.TypeKey.ObjectKey;
  pFVar3 = TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
           ::Find((TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
                   *)&this->TypeDataMap,(FTypeHandle *)local_res8);
  if (pFVar3 == (FTypeInfo *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RelationInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassTypeManager.h"
                       ,0x125,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRelationTypeTraits *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((pFVar3->Traits).TypeIndex != '\x03') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRelationTypeTraits *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FRelationTypeTraits *)&pFVar3->Traits;
}

