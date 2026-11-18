// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// Acquire @ 145cd4330

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
RHIValidation::FTransientState::Acquire
          (FTransientState *this,FResource *param_1,void *param_2,ERHIPipeline param_3)

{
  ulong64 *puVar1;
  ForAnyElementType FVar2;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (this->bTransient == false) {
    ::FString::PrintfImpl(&local_68,L"\"%s\" (0x%p) (Whole Resource)");
    ::FString::PrintfImpl
              (&local_78,
               L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted to acquire non-transient resource %s. Only transient resources may be acquired with the transient aliasing API.\n\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar2.Data = local_78.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar2.Data);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (this->Status == None) goto LAB_145cd462b;
  puVar1 = this->AcquireBacktrace;
  ::FString::PrintfImpl(&local_58,L"\"%s\" (0x%p) (Whole Resource)");
  if (puVar1 == (ulong64 *)0x0) {
    if (param_2 != (void *)0x0) {
LAB_145cd446f:
      if (GRHIValidationPrintHumanReadableCallStack == false) {
        ::FString::PrintfImpl
                  (&local_78,
                   L"    --- Callstack backtrace for %s operation (resolve in the Watch window):\n        %s: (void**)0x%p,32\n"
                  );
      }
      else {
        ResolveAndFormatCallstack(&local_38,param_2);
        ::FString::PrintfImpl
                  (&local_78,L"    --- Callstack backtrace for %s operation:\n        %s: %s\n");
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      if (puVar1 != (ulong64 *)0x0) goto LAB_145cd4512;
      ::FString::FString(&local_88,
                         L"    --- Enable barrier logging for this resource to see a callstack backtrace for the RHIBeginTransitions() call which has not been completed. Use -RHIValidationLog=X,Y,Z to enable backtrace logging for individual resources.\n\n"
                        );
      goto LAB_145cd458b;
    }
    ::FString::FString(&local_68,
                       L"    --- Enable barrier logging for this resource to see a callstack backtrace for the RHIBeginTransitions() call which has not been completed. Use -RHIValidationLog=X,Y,Z to enable backtrace logging for individual resources.\n\n"
                      );
  }
  else {
    if (param_2 != (void *)0x0) goto LAB_145cd446f;
    ::FString::FString(&local_78,
                       L"    --- Enable barrier logging for this resource to see a callstack backtrace for the RHIBeginTransitions() call which has not been completed. Use -RHIValidationLog=X,Y,Z to enable backtrace logging for individual resources.\n\n"
                      );
LAB_145cd4512:
    if (GRHIValidationPrintHumanReadableCallStack == false) {
      ::FString::PrintfImpl
                (&local_88,
                 L"    --- Callstack backtrace for %s operation (resolve in the Watch window):\n        %s: (void**)0x%p,32\n"
                );
    }
    else {
      ResolveAndFormatCallstack(&local_38,puVar1);
      ::FString::PrintfImpl
                (&local_88,L"    --- Callstack backtrace for %s operation:\n        %s: %s\n");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
LAB_145cd458b:
    ::FString::ConcatFF(&local_68,&local_88,&local_78);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  ::FString::PrintfImpl
            (&local_48,
             L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nMismatched acquire of transient resource %s. A transient resource may only be acquired once in its lifetime.\n%s\n\n--------------------------------------------------------------------\n\n\n"
            );
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar2.Data = local_48.Data.AllocatorInstance.Data;
  }
  FValidationRHI::ReportValidationFailure((wchar_t *)FVar2.Data);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_145cd462b:
  this->Status = Acquired;
  if (this->AcquireBacktrace == (void *)0x0) {
    this->AcquireBacktrace = param_2;
  }
  this->NumAcquiredSubresources =
       param_1->NumPlanes * param_1->NumArraySlices * param_1->NumMips * 2;
  if (param_1->LoggingMode != None) {
    GetRHIPipelineName(&local_38,param_3);
    ::FString::PrintfImpl(&local_48,L"Transient Acquire, Executing Pipeline : %s");
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0xffffffffffffffff;
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar2.Data = local_48.Data.AllocatorInstance.Data;
    }
    local_88.Data.ArrayNum = -1;
    RHIValidation::Log(param_1,(FSubresourceIndex *)&local_88,param_2,L"Acquire",L"Acquire",
                       (wchar_t *)FVar2.Data);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// AliasingOverlap @ 145cd4810

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
RHIValidation::FTransientState::AliasingOverlap(FResource *param_1,FResource *param_2,void *param_3)

{
  ForAnyElementType FVar1;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((param_1->TransientState).bTransient == false) {
    ::FString::PrintfImpl(&local_58,L"\"%s\" (0x%p) (Whole Resource)");
    ::FString::PrintfImpl(&local_68,L"\"%s\" (0x%p) (Whole Resource)");
    ::FString::PrintfImpl
              (&local_48,
               L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted to overlap non-transient resource %s when acquiring resource %s. Only transient resources may be used in an aliasing overlap operation.\n\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar1.Data = local_48.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar1.Data);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1->TransientState).Status != Discarded) {
    ::FString::PrintfImpl(&local_58,L"\"%s\" (0x%p) (Whole Resource)");
    ::FString::PrintfImpl(&local_48,L"\"%s\" (0x%p) (Whole Resource)");
    if (param_3 == (void *)0x0) {
      ::FString::FString(&local_68,
                         L"    --- Enable barrier logging for this resource to see a callstack backtrace for the RHIBeginTransitions() call which has not been completed. Use -RHIValidationLog=X,Y,Z to enable backtrace logging for individual resources.\n\n"
                        );
    }
    else if (GRHIValidationPrintHumanReadableCallStack == false) {
      ::FString::PrintfImpl
                (&local_68,
                 L"    --- Callstack backtrace for %s operation (resolve in the Watch window):\n        %s: (void**)0x%p,32\n"
                );
    }
    else {
      ResolveAndFormatCallstack(&local_28,param_3);
      ::FString::PrintfImpl
                (&local_68,L"    --- Callstack backtrace for %s operation:\n        %s: %s\n");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    ::FString::PrintfImpl
              (&local_38,
               L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted to overlap resource %s (before) with resource %s (after), but %s (before) has not been discarded.\n%s\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar1.Data = local_38.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar1.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (param_1->LoggingMode != None) {
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0xffffffffffffffff;
    local_68.Data.ArrayNum = -1;
    RHIValidation::Log(param_1,(FSubresourceIndex *)&local_68,param_3,L"AliasingOverlap",
                       L"AliasingOverlap",L"Aliasing Overlap (Before)");
  }
  if (param_2->LoggingMode != None) {
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0xffffffffffffffff;
    local_68.Data.ArrayNum = -1;
    RHIValidation::Log(param_2,(FSubresourceIndex *)&local_68,param_3,L"AliasingOverlap",
                       L"AliasingOverlap",L"Aliasing Overlap (After)");
  }
  return;
}

// Discard @ 145cd9da0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
RHIValidation::FTransientState::Discard
          (FTransientState *this,FResource *param_1,void *param_2,ERHIPipeline param_3,
          ERHIPipeline param_4)

{
  int *piVar1;
  ForAnyElementType FVar2;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (this->bTransient == false) {
    ::FString::PrintfImpl(&local_68,L"\"%s\" (0x%p) (Whole Resource)");
    ::FString::PrintfImpl
              (&local_58,
               L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted to discard non-transient resource %s. Only transient resources may be discarded with the transient aliasing API.\n\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar2.Data = local_58.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar2.Data);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (this->Status == None) {
    ::FString::PrintfImpl(&local_58,L"\"%s\" (0x%p) (Whole Resource)");
    if (param_2 == (void *)0x0) {
      ::FString::FString(&local_68,
                         L"    --- Enable barrier logging for this resource to see a callstack backtrace for the RHIBeginTransitions() call which has not been completed. Use -RHIValidationLog=X,Y,Z to enable backtrace logging for individual resources.\n\n"
                        );
    }
    else if (GRHIValidationPrintHumanReadableCallStack == false) {
      ::FString::PrintfImpl
                (&local_68,
                 L"    --- Callstack backtrace for %s operation (resolve in the Watch window):\n        %s: (void**)0x%p,32\n"
                );
    }
    else {
      ResolveAndFormatCallstack(&local_38,param_2);
      ::FString::PrintfImpl
                (&local_68,L"    --- Callstack backtrace for %s operation:\n        %s: %s\n");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    ::FString::PrintfImpl
              (&local_48,
               L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted to discard transient resource %s, but it was never acquired.\n%s\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar2.Data = local_48.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar2.Data);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (this->Status == Discarded) {
    ::FString::PrintfImpl(&local_48,L"\"%s\" (0x%p) (Whole Resource)");
    if (param_2 == (void *)0x0) {
      ::FString::FString(&local_68,
                         L"    --- Enable barrier logging for this resource to see a callstack backtrace for the RHIBeginTransitions() call which has not been completed. Use -RHIValidationLog=X,Y,Z to enable backtrace logging for individual resources.\n\n"
                        );
    }
    else if (GRHIValidationPrintHumanReadableCallStack == false) {
      ::FString::PrintfImpl
                (&local_68,
                 L"    --- Callstack backtrace for %s operation (resolve in the Watch window):\n        %s: (void**)0x%p,32\n"
                );
    }
    else {
      ResolveAndFormatCallstack(&local_38,param_2);
      ::FString::PrintfImpl
                (&local_68,L"    --- Callstack backtrace for %s operation:\n        %s: %s\n");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    ::FString::PrintfImpl
              (&local_58,
               L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted to transition transient resource %s to ERHIAccess::Discard, but it has already been discarded.\n%s\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar2.Data = local_58.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar2.Data);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  piVar1 = &this->NumAcquiredSubresources;
  *piVar1 = *piVar1 - ((param_3 != All) + 1);
  if ((*piVar1 == 0) && (this->Status = Discarded, param_1->LoggingMode != None)) {
    GetRHIPipelineName(&local_38,param_4);
    ::FString::PrintfImpl(&local_48,L"Transient Discard, Executing Pipeline : %s");
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0xffffffffffffffff;
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar2.Data = local_48.Data.AllocatorInstance.Data;
    }
    local_68.Data.ArrayNum = -1;
    RHIValidation::Log(param_1,(FSubresourceIndex *)&local_68,param_2,L"Discard",L"Discard",
                       (wchar_t *)FVar2.Data);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

