// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FDriverConfigEntryConstraints @ 141be2230

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FDriverConfigEntryConstraints * __thiscall
FDriverConfigEntryConstraints::FDriverConfigEntryConstraints
          (FDriverConfigEntryConstraints *this,wchar_t *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 _Src;
  bool bVar4;
  FDriverConfigEntryConstraints *pFVar5;
  undefined4 uVar6;
  TOptional<FString>_u_0 local_38;
  FString local_28;
  
  piVar1 = (int *)((longlong)&(this->RHINameConstraint).field0_0x0 + 0xc);
  *piVar1 = -1;
  (this->RHINameConstraint).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->RHINameConstraint).field0_0x0 + 8) = 0;
  (this->AdapterNameRegexConstraint).bIsSet = false;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38._8_8_ = 0;
  FParse::Value(param_1,L"RHI=",&local_38.TypedValue,true,(wchar_t **)0x0);
  if ((1 < local_38.TypedValue.Data.ArrayNum) && (&local_38 != (TOptional<FString>_u_0 *)this)) {
    pFVar2 = (this->RHINameConstraint).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
    uVar6 = local_38.TypedValue.Data.ArrayNum;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
      uVar6 = local_38.TypedValue.Data.ArrayNum;
    }
    _Src = local_38.TypedValue.Data.AllocatorInstance.Data;
    (this->RHINameConstraint).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(this->RHINameConstraint).field0_0x0 + 8) = uVar6;
    if (uVar6 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar6,0,(ForAnyElementType *)this,uVar6,piVar1);
      memcpy((this->RHINameConstraint).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
             (void *)_Src,(longlong)(int)uVar6 * 2);
    }
    if (*piVar1 == -1) {
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
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FParse::Value(param_1,L"AdapterNameRegex=",&local_28,true,(wchar_t **)0x0);
  if (1 < local_28.Data.ArrayNum) {
    if ((this->AdapterNameRegexConstraint).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->AdapterNameRegexConstraint).TypedValue.Implementation.SharedReferenceCount.
                 ReferenceController);
    }
    FRegexPattern::FRegexPattern(&(this->AdapterNameRegexConstraint).TypedValue,&local_28,None);
    (this->AdapterNameRegexConstraint).bIsSet = true;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return this;
}

