// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// operator= @ 145c488b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FDriverConfigEntryConstraints * __thiscall
FDriverConfigEntryConstraints::operator=
          (FDriverConfigEntryConstraints *this,FDriverConfigEntryConstraints *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FDriverConfigEntryConstraints *pFVar5;
  
  if (param_1 != this) {
    if (*(int *)((longlong)&(param_1->RHINameConstraint).field0_0x0 + 0xc) == -1) {
      if (*(int *)((longlong)&(this->RHINameConstraint).field0_0x0 + 0xc) != -1) {
        pFVar1 = (this->RHINameConstraint).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        *(undefined4 *)((longlong)&(this->RHINameConstraint).field0_0x0 + 0xc) = 0xffffffff;
        (this->RHINameConstraint).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        *(undefined4 *)((longlong)&(this->RHINameConstraint).field0_0x0 + 8) = 0;
      }
    }
    else {
      pFVar1 = (this->RHINameConstraint).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this->RHINameConstraint).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (this->RHINameConstraint).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (param_1->RHINameConstraint).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
      (param_1->RHINameConstraint).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&(this->RHINameConstraint).field0_0x0 + 8) =
           *(undefined4 *)((longlong)&(param_1->RHINameConstraint).field0_0x0 + 8);
      *(undefined4 *)((longlong)&(this->RHINameConstraint).field0_0x0 + 0xc) =
           *(undefined4 *)((longlong)&(param_1->RHINameConstraint).field0_0x0 + 0xc);
      *(int *)((longlong)&(param_1->RHINameConstraint).field0_0x0 + 8) = 0;
      *(int *)((longlong)&(param_1->RHINameConstraint).field0_0x0 + 0xc) = 0;
      if (*(int *)((longlong)&(this->RHINameConstraint).field0_0x0 + 0xc) == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FDriverConfigEntryConstraints *)(*pcVar3)();
          return pFVar5;
        }
      }
    }
  }
  if (&param_1->AdapterNameRegexConstraint != &this->AdapterNameRegexConstraint) {
    bVar4 = (this->AdapterNameRegexConstraint).bIsSet;
    if ((param_1->AdapterNameRegexConstraint).bIsSet != false) {
      if (bVar4 != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((this->AdapterNameRegexConstraint).TypedValue.Implementation.SharedReferenceCount
                   .ReferenceController);
      }
      (this->AdapterNameRegexConstraint).TypedValue.Implementation.Object =
           (param_1->AdapterNameRegexConstraint).TypedValue.Implementation.Object;
      pTVar2 = (param_1->AdapterNameRegexConstraint).TypedValue.Implementation.SharedReferenceCount.
               ReferenceController;
      (this->AdapterNameRegexConstraint).TypedValue.Implementation.SharedReferenceCount.
      ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      (this->AdapterNameRegexConstraint).bIsSet = true;
      return this;
    }
    if (bVar4 != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->AdapterNameRegexConstraint).TypedValue.Implementation.SharedReferenceCount.
                 ReferenceController);
      (this->AdapterNameRegexConstraint).bIsSet = false;
    }
  }
  return this;
}

// AreConstraintsSatisfied @ 145c50290

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FDriverConfigEntryConstraints::AreConstraintsSatisfied
          (FDriverConfigEntryConstraints *this,FGPUDriverInfo *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  FRegexMatcher local_28;
  
  *param_2 = 0;
  if (*(int *)((longlong)&(this->RHINameConstraint).field0_0x0 + 0xc) == -1) goto LAB_145c502e2;
  iVar2 = *(int *)((longlong)&(this->RHINameConstraint).field0_0x0 + 8);
  iVar1 = (param_1->RHIName).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)
                         (this->RHINameConstraint).field0_0x0.TypedValue.Data.AllocatorInstance.Data
                         ,(wchar_t *)(param_1->RHIName).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_145c502d9;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_145c502d9:
    if (!bVar3) {
      return false;
    }
  }
  *param_2 = *param_2 + 1;
LAB_145c502e2:
  if ((this->AdapterNameRegexConstraint).bIsSet != false) {
    FRegexMatcher::FRegexMatcher
              (&local_28,&(this->AdapterNameRegexConstraint).TypedValue,&param_1->DeviceDescription)
    ;
    bVar3 = FRegexMatcher::FindNext(&local_28);
    if (!bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.Implementation.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.Pattern.Implementation.SharedReferenceCount.ReferenceController);
      return false;
    }
    *param_2 = *param_2 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.Implementation.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  }
  return true;
}

