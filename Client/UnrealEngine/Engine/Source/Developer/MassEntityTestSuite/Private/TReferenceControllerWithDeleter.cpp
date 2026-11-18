// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// DestroyObject @ 14711cb10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMassEntityManager,SharedPointerInternals::DefaultDeleter<FMassEntityManager>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMassEntityManager,SharedPointerInternals::DefaultDeleter<FMassEntityManager>,1>
                *this)

{
  FMassEntityManager *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMassEntityManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014711cb21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14711cb30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::Mass::Testing::FMassTestProcessingPhaseManager,SharedPointerInternals::DefaultDeleter<UE::Mass::Testing::FMassTestProcessingPhaseManager>,1>
::DestroyObject(TReferenceControllerWithDeleter<UE::Mass::Testing::FMassTestProcessingPhaseManager,SharedPointerInternals::DefaultDeleter<UE::Mass::Testing::FMassTestProcessingPhaseManager>,1>
                *this)

{
  FMassTestProcessingPhaseManager *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMassTestProcessingPhaseManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014711cb41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14711cb50

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FStructSharedMemory,FStructSharedMemory::FStructSharedMemoryDeleter,1>
::DestroyObject(TReferenceControllerWithDeleter<FStructSharedMemory,FStructSharedMemory::FStructSharedMemoryDeleter,1>
                *this)

{
  FStructSharedMemory *pFVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  
  pFVar1 = this->Object;
  if (pFVar1 == (FStructSharedMemory *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructSharedMemory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                       ,0x38,
                       L"FStructSharedMemoryDeleter is expected to be used only with a valid FStructSharedMemory. See FStructSharedMemory::Create/CreateArgs"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar2 = (pFVar1->ScriptStruct).field0_0x0.DebugPtr;
  lVar5 = (longlong)*(short *)((longlong)&pUVar2->_padding_ + 4);
  (**(code **)(pUVar2->_padding_ + 0x300))
            (pUVar2,(longlong)&(pFVar1->ScriptStruct).field0_0x0 + lVar5 + 7 & -lVar5,1);
  FMemory::Free(pFVar1);
  return;
}

