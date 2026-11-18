// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// DestroyObject @ 146f418c0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAIMessageObserver,SharedPointerInternals::DefaultDeleter<FAIMessageObserver>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAIMessageObserver,SharedPointerInternals::DefaultDeleter<FAIMessageObserver>,1>
                *this)

{
  if (this->Object != (FAIMessageObserver *)0x0) {
    FAIMessageObserver::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 146f418e0

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
SharedPointerInternals::
TReferenceControllerWithDeleter<FEnvQueryInstance,SharedPointerInternals::DefaultDeleter<FEnvQueryInstance>,1>
::DestroyObject(TReferenceControllerWithDeleter<FEnvQueryInstance,SharedPointerInternals::DefaultDeleter<FEnvQueryInstance>,1>
                *this)

{
  FEnvQueryInstance *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FEnvQueryInstance *)0x0) {
    FEnvQueryInstance::~FEnvQueryInstance(this_00);
    ::operator_delete(this_00,0x1b8);
    return;
  }
  return;
}

// DestroyObject @ 146f41920

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayDebuggerCategory_AI,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_AI>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGameplayDebuggerCategory_AI,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_AI>,1>
                *this)

{
  FGameplayDebuggerCategory_AI *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGameplayDebuggerCategory_AI *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f41931. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146f41940

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayDebuggerCategory_BehaviorTree,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_BehaviorTree>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGameplayDebuggerCategory_BehaviorTree,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_BehaviorTree>,1>
                *this)

{
  FGameplayDebuggerCategory_BehaviorTree *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGameplayDebuggerCategory_BehaviorTree *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f41951. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146f41960

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayDebuggerCategory_EQS,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_EQS>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGameplayDebuggerCategory_EQS,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_EQS>,1>
                *this)

{
  FGameplayDebuggerCategory_EQS *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGameplayDebuggerCategory_EQS *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f41971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146fa4cc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRecastSpeciaLinkFilter,SharedPointerInternals::DefaultDeleter<FRecastSpeciaLinkFilter>,1>
::DestroyObject(TReferenceControllerWithDeleter<FRecastSpeciaLinkFilter,SharedPointerInternals::DefaultDeleter<FRecastSpeciaLinkFilter>,1>
                *this)

{
  FRecastSpeciaLinkFilter *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FRecastSpeciaLinkFilter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146fa4cd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146fa4ce0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayDebuggerCategory_NavLocalGrid,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_NavLocalGrid>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGameplayDebuggerCategory_NavLocalGrid,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_NavLocalGrid>,1>
                *this)

{
  FGameplayDebuggerCategory_NavLocalGrid *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGameplayDebuggerCategory_NavLocalGrid *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146fa4cf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146fa4d00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayDebuggerCategory_Navmesh,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_Navmesh>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGameplayDebuggerCategory_Navmesh,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_Navmesh>,1>
                *this)

{
  FGameplayDebuggerCategory_Navmesh *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGameplayDebuggerCategory_Navmesh *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146fa4d11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146fa4d20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayDebuggerCategory_Perception,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_Perception>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGameplayDebuggerCategory_Perception,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_Perception>,1>
                *this)

{
  FGameplayDebuggerCategory_Perception *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGameplayDebuggerCategory_Perception *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146fa4d31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146fa4d40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayDebuggerCategory_PerceptionSystem,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_PerceptionSystem>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGameplayDebuggerCategory_PerceptionSystem,SharedPointerInternals::DefaultDeleter<FGameplayDebuggerCategory_PerceptionSystem>,1>
                *this)

{
  FGameplayDebuggerCategory_PerceptionSystem *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGameplayDebuggerCategory_PerceptionSystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146fa4d51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

