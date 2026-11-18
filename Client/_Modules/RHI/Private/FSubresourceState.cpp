// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 5

// Assert @ 145cd4c80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
RHIValidation::FSubresourceState::Assert
          (FSubresourceState *this,FResource *param_1,FSubresourceIndex *param_2,FState *param_3,
          bool param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  ERHIAccess EVar8;
  ERHIAccess EVar9;
  longlong lVar10;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (param_1->LoggingMode != None) {
    GetRHIPipelineName(&local_d8,param_3->Pipelines);
    GetRHIAccessName(&local_e8,param_3->Access);
    ::FString::PrintfImpl(&local_118,L"Access: %s, Pipeline: %s");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar5.Data = local_118.Data.AllocatorInstance.Data;
    }
    RHIValidation::Log(param_1,param_2,(void *)0x0,(wchar_t *)0x0,L"Assert",(wchar_t *)FVar5.Data);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if ((param_3->Pipelines == Graphics) || (lVar10 = 0x38, param_3->Pipelines != AsyncCompute)) {
    lVar10 = 0x10;
  }
  if ((&(this->States).field_0x1)[lVar10] != '\0') {
    pFVar6 = GetReasonString_AccessDuringTransition
                       (&local_c8,param_1,param_2,
                        (FState *)(&(this->LastTransitionFences).field_0x8 + lVar10),param_3,
                        *(void **)(&(this->States).field_0x8 + lVar10),
                        *(void **)(&(this->States).field_0x10 + lVar10));
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure(pwVar7);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (((!param_4) && ((&(this->States).field_0x3)[lVar10] != '\0')) ||
     (((&(this->States).field_0x4)[lVar10] == '\0' && ((&(this->States).field_0x5)[lVar10] != '\0'))
     )) {
    if (((param_2->MipIndex == -1) && (param_2->ArraySlice == -1)) && (param_2->PlaneIndex == -1)) {
      ::FString::PrintfImpl(&local_138,L"\"%s\" (0x%p) (Whole Resource)");
    }
    else {
      ::FString::PrintfImpl(&local_138,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
    }
    GetRHIPipelineName(&local_88,param_3->Pipelines);
    GetRHIPipelineName(&local_98,(&(this->LastTransitionFences).field_0xc)[lVar10]);
    GetRHIAccessName(&local_a8,param_3->Access);
    GetRHIAccessName(&local_b8,*(ERHIAccess *)(&(this->LastTransitionFences).field_0x8 + lVar10));
    ::FString::PrintfImpl
              (&local_108,
               L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted to access resource %s which was previously used with overlapping UAV access, but has not been transitioned since UAV overlap was disabled. A resource transition is required.\n\n    --- Allowed access states for this resource are: %s\n    --- Required access states are:                  %s\n    --- Allowed pipelines for this resource are:     %s\n    --- Required pipelines are:                      %s\n\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar5.Data = local_108.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar5.Data);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  if (((*(ERHIAccess *)(&(this->LastTransitionFences).field_0x8 + lVar10) & param_3->Access) !=
       param_3->Access) ||
     (((&(this->LastTransitionFences).field_0xc)[lVar10] & param_3->Pipelines) != param_3->Pipelines
     )) {
    if ((param_2->MipIndex == -1) && ((param_2->ArraySlice == -1 && (param_2->PlaneIndex == -1)))) {
      ::FString::PrintfImpl(&local_128,L"\"%s\" (0x%p) (Whole Resource)");
    }
    else {
      ::FString::PrintfImpl(&local_128,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
    }
    GetRHIPipelineName(&local_48,param_3->Pipelines);
    GetRHIPipelineName(&local_58,(&(this->LastTransitionFences).field_0xc)[lVar10]);
    GetRHIAccessName(&local_68,param_3->Access);
    GetRHIAccessName(&local_78,*(ERHIAccess *)(&(this->LastTransitionFences).field_0x8 + lVar10));
    ::FString::PrintfImpl
              (&local_f8,
               L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted to access resource %s from a hardware unit it is not currently accessible from. A resource transition is required.\n\n    --- Allowed access states for this resource are: %s\n    --- Required access states are:                  %s\n    --- Allowed pipelines for this resource are:     %s\n    --- Required pipelines are:                      %s\n\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_f8.Data.ArrayNum != 0) {
      FVar5.Data = local_f8.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar5.Data);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  uVar1 = *(undefined8 *)(&(this->LastTransitionFences).field_0x8 + lVar10);
  *(undefined8 *)(&(this->LastTransitionFences).field_0x0 + lVar10) = uVar1;
  EVar9 = param_3->Access;
  if ((EVar9 & (BVHWrite|UAVMask)) != None) {
    if (param_4) {
      (&(this->States).field_0x3)[lVar10] = 1;
      EVar9 = param_3->Access;
    }
    if ((&(this->States).field_0x4)[lVar10] != '\0') {
      (&(this->States).field_0x5)[lVar10] = 1;
      EVar9 = param_3->Access;
    }
  }
  if ((param_4) || ((&(this->States).field_0x4)[lVar10] != '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  EVar8 = (ERHIAccess)uVar1;
  if (EVar9 != SRVGraphics) {
    if (((EVar9 & EVar9 - CPURead) != None) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RequiredAccess == ERHIAccess::SRVGraphics || (T(RequiredAccess) & (T(RequiredAccess) - 1)) == 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                           ,0x5e8,L"Only one required access bit may be set at once."), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((EVar9 & (BVHWrite|UAVMask)) != None) {
      if (!bVar3) {
        EVar8 = None;
      }
      goto LAB_145cd5201;
    }
    if ((EVar9 >> 0xf & 1) != 0) {
      EVar8 = EVar8 & (DSVWrite|DSVRead);
      goto LAB_145cd5201;
    }
    if ((EVar9 >> 9 & 1) != 0) {
      EVar8 = EVar8 & (DSVWrite|DSVRead|CopySrc|SRVMask);
      goto LAB_145cd5201;
    }
  }
  if ((EVar9 & WritableMask) != None) {
    EVar8 = EVar9;
  }
LAB_145cd5201:
  *(ERHIAccess *)(&(this->LastTransitionFences).field_0x8 + lVar10) = EVar8;
  return;
}

// AssertTracked @ 145cd5220

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
RHIValidation::FSubresourceState::AssertTracked
          (FSubresourceState *this,FResource *param_1,FSubresourceIndex *param_2,FState *param_3,
          ERHIPipeline param_4)

{
  ERHIPipeline *pEVar1;
  ERHIAccess EVar2;
  ulong64 *puVar3;
  ulong64 *puVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ERHIPipeline EVar9;
  longlong lVar10;
  longlong lVar11;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  if (param_1->LoggingMode != None) {
    GetRHIPipelineName(&local_118,param_3->Pipelines);
    GetRHIAccessName(&local_108,param_3->Access);
    ::FString::PrintfImpl(&local_138,L"Access: %s, Pipelines %s");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_138.Data.ArrayNum != 0) {
      FVar5.Data = local_138.Data.AllocatorInstance.Data;
    }
    RHIValidation::Log(param_1,param_2,(void *)0x0,(wchar_t *)0x0,L"AssertTracked",
                       (wchar_t *)FVar5.Data);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  for (EVar9 = param_3->Pipelines; EVar9 != None; EVar9 = EVar9 & EVar9 - Graphics) {
    if (((-EVar9 & EVar9) == Graphics) || ((-EVar9 & EVar9) != AsyncCompute)) {
      lVar8 = 0x30;
      lVar7 = 0x21;
      lVar6 = 0x1c;
      lVar10 = 0x28;
      lVar11 = 0x18;
    }
    else {
      lVar8 = 0x58;
      lVar7 = 0x49;
      lVar6 = 0x44;
      lVar10 = 0x50;
      lVar11 = 0x40;
    }
    pEVar1 = &(this->LastTransitionFences).field_0x0 + lVar6;
    if ((*pEVar1 == param_4) && ((&(this->LastTransitionFences).field_0x0)[lVar7] != '\0')) {
      puVar3 = *(ulong64 **)(&(this->LastTransitionFences).field_0x0 + lVar8);
      puVar4 = *(ulong64 **)(&(this->LastTransitionFences).field_0x0 + lVar10);
      if ((param_2->MipIndex == -1) && ((param_2->ArraySlice == -1 && (param_2->PlaneIndex == -1))))
      {
        ::FString::PrintfImpl(&local_f8,L"\"%s\" (0x%p) (Whole Resource)");
      }
      else {
        ::FString::PrintfImpl(&local_f8,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
      }
      if ((puVar4 == (ulong64 *)0x0) && (puVar3 == (ulong64 *)0x0)) {
        ::FString::FString(&local_128,
                           L"    --- Enable barrier logging for this resource to see a callstack backtrace for the RHIBeginTransitions() call which has not been completed. Use -RHIValidationLog=X,Y,Z to enable backtrace logging for individual resources.\n\n"
                          );
      }
      else if (GRHIValidationPrintHumanReadableCallStack == false) {
        ::FString::PrintfImpl
                  (&local_128,
                   L"    --- Callstack backtraces for the transition which has not been completed (resolve in the Watch window):\n        RHICreateTransition: (void**)0x%p,32\n        RHIBeginTransitions: (void**)0x%p,32\n"
                  );
      }
      else {
        ResolveAndFormatCallstack(&local_d8,puVar3);
        ResolveAndFormatCallstack(&local_e8,puVar4);
        ::FString::PrintfImpl
                  (&local_128,
                   L"    --- Callstack backtraces for the transition which has not been completed:\n        RHICreateTransition: %s\n        RHIBeginTransitions: %s\n"
                  );
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      GetRHIPipelineName(&local_98,param_3->Pipelines);
      GetRHIPipelineName(&local_a8,(&(this->LastTransitionFences).field_0x4)[lVar11]);
      GetRHIAccessName(&local_b8,param_3->Access);
      GetRHIAccessName(&local_c8,*(ERHIAccess *)(&(this->LastTransitionFences).field_0x0 + lVar11));
      ::FString::PrintfImpl
                (&local_118,
                 L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted to access resource %s whilst an asynchronous resource transition is in progress. A call to RHIEndTransitions() must be made before the resource can be accessed again.\n\n    --- Pending access states for this resource are: %s\n    --- Attempted access states are:                 %s\n    --- Pending pipelines for this resource are:     %s\n    --- Attempted pipelines are:                     %s\n%s\n\n--------------------------------------------------------------------\n\n\n"
                );
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar5.Data = local_118.Data.AllocatorInstance.Data;
      }
      FValidationRHI::ReportValidationFailure((wchar_t *)FVar5.Data);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
    EVar2 = *(ERHIAccess *)(&(this->LastTransitionFences).field_0x0 + lVar11);
    if ((EVar2 != Discard) && ((EVar2 != param_3->Access || (*pEVar1 != param_3->Pipelines)))) {
      if ((param_2->MipIndex == -1) && ((param_2->ArraySlice == -1 && (param_2->PlaneIndex == -1))))
      {
        ::FString::PrintfImpl(&local_138,L"\"%s\" (0x%p) (Whole Resource)");
      }
      else {
        ::FString::PrintfImpl(&local_138,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
      }
      GetRHIPipelineName(&local_58,param_3->Pipelines);
      GetRHIAccessName(&local_68,param_3->Access);
      GetRHIPipelineName(&local_78,(&(this->LastTransitionFences).field_0x4)[lVar11]);
      GetRHIAccessName(&local_88,*(ERHIAccess *)(&(this->LastTransitionFences).field_0x0 + lVar11));
      ::FString::PrintfImpl
                (&local_108,
                 L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted to assign resource %s a tracked access that does not match its validation tracked access.\n\n    --- Actual access states:                    %s\n    --- Actual pipelines:                        %s\n    --- Assigned access states:                  %s\n    --- Assigned pipelines:                      %s\n\n\n--------------------------------------------------------------------\n\n\n"
                );
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar5.Data = local_108.Data.AllocatorInstance.Data;
      }
      FValidationRHI::ReportValidationFailure((wchar_t *)FVar5.Data);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// BeginTransition @ 145cd5af0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
RHIValidation::FSubresourceState::BeginTransition
          (FSubresourceState *this,FResource *param_1,FSubresourceIndex *param_2,FState *param_3,
          FState *param_4,EResourceTransitionFlags param_5,ERHITransitionCreateFlags param_6,
          ERHIPipeline param_7,TRHIPipelineArray<unsigned___int64> *param_8,void *param_9)

{
  FState *pFVar1;
  FState *pFVar2;
  FState FVar3;
  code *pcVar4;
  byte bVar5;
  FState FVar6;
  FState FVar7;
  FState FVar8;
  char cVar9;
  bool bVar10;
  ERHIPipeline EVar11;
  byte bVar12;
  ERHIAccess EVar13;
  int iVar14;
  longlong lVar15;
  size_t sVar16;
  ForAnyElementType FVar17;
  FString *pFVar18;
  ERHIAccess EVar19;
  TRHIPipelineArray<unsigned___int64> *pTVar20;
  wchar_t *pwVar21;
  ERHIPipeline EVar22;
  int iVar23;
  EResourceTransitionFlags EVar24;
  FState local_490;
  FState local_488;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  wchar_t *local_3d0;
  FState local_3c8;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  if ((param_7 == Graphics) || (lVar15 = 0x38, param_7 != AsyncCompute)) {
    lVar15 = 0x10;
  }
  pFVar1 = (FState *)(&(this->LastTransitionFences).field_0x0 + lVar15);
  local_490 = *param_4;
  EVar19 = local_490.Access;
  EVar13 = EVar19;
  if (EVar19 == None) {
    EVar13 = (param_1->TrackedState).Access;
    local_490.Access = EVar13;
  }
  bVar12 = 0;
  local_488.Access = None;
  local_488.Pipelines = None;
  local_488._5_3_ = 0;
  iVar23 = 0;
  if (param_1->LoggingMode != None) {
    local_3d0 = L" (Pulled From SetTrackedAccess)";
    if (EVar19 != None) {
      local_3d0 = L"";
    }
    GetRHIPipelineName(&local_260,param_7);
    if (param_5 == None) {
      ::FString::FString(&local_470,L"None");
    }
    else {
      local_480.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_480.Data.ArrayNum = 0;
      local_480.Data.ArrayMax = 0;
      EVar24 = param_5;
      do {
        if ((EVar24 & MaintainCompression) != None) {
          iVar14 = iVar23 + -1;
          if (iVar23 == 0) {
            iVar14 = 0;
          }
          if ((0 < iVar14) && (EVar24 != None)) {
            ::FString::AppendChars(&local_480,L"|",1);
          }
          cVar9 = '\x01' << (bVar12 & 0x1f);
          if (cVar9 == '\0') {
LAB_145cd5c87:
            pwVar21 = L"None";
          }
          else if (cVar9 == '\x01') {
            pwVar21 = L"MaintainCompression";
          }
          else {
            if (cVar9 != '\x02') {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIStrings.cpp"
                                  ,0x1f8,L"");
              if (bVar10) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              goto LAB_145cd5c87;
            }
            pwVar21 = L"IgnoreAfterState";
          }
          sVar16 = wcslen(pwVar21);
          ::FString::AppendChars(&local_480,pwVar21,(int)sVar16);
          iVar23 = local_480.Data.ArrayNum;
        }
        bVar12 = bVar12 + 1;
        EVar24 = EVar24 >> 1;
      } while (EVar24 != None);
      local_470.Data.AllocatorInstance.Data = local_480.Data.AllocatorInstance.Data;
      local_470.Data.ArrayMax = local_480.Data.ArrayMax;
      local_470.Data.ArrayNum = iVar23;
    }
    GetRHIPipelineName(&local_2b0,local_490.Pipelines);
    GetRHIAccessName(&local_2c0,EVar13);
    ::FString::PrintfImpl(&local_390,L"Access: %s, Pipelines: %s");
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    GetRHIPipelineName(&local_290,param_3->Pipelines);
    GetRHIAccessName(&local_2a0,param_3->Access);
    ::FString::PrintfImpl(&local_3a0,L"Access: %s, Pipelines: %s");
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    GetRHIPipelineName(&local_270,pFVar1[1].Pipelines);
    GetRHIAccessName(&local_280,pFVar1[1].Access);
    ::FString::PrintfImpl(&local_3b0,L"Access: %s, Pipelines: %s");
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl
              (&local_3c0,
               L"Current: (%s) -> Before(%s) New: (%s)%s, Flags: %s, Executing Pipeline: %s");
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_3c0.Data.ArrayNum != 0) {
      FVar17.Data = local_3c0.Data.AllocatorInstance.Data;
    }
    local_488 = (FState)RHIValidation::Log(param_1,param_2,param_9,L"Begin",L"BeginTransition",
                                           (wchar_t *)FVar17.Data);
    if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
    }
    if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
    }
    if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
    }
    if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Data.AllocatorInstance.Data);
    }
    if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_470.Data.AllocatorInstance.Data);
    }
    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data.AllocatorInstance.Data);
    }
  }
  if (param_3->Access == None) {
    FVar3 = param_1->TrackedState;
    if (FVar3.Access != pFVar1->Access) {
      local_3c8 = FVar3;
      if (((param_2->MipIndex == -1) && (param_2->ArraySlice == -1)) && (param_2->PlaneIndex == -1))
      {
        ::FString::PrintfImpl(&local_430,L"\"%s\" (0x%p) (Whole Resource)");
      }
      else {
        ::FString::PrintfImpl(&local_430,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
      }
      GetRHIPipelineName(&local_220,local_3c8.Pipelines);
      GetRHIAccessName(&local_230,FVar3.Access);
      GetRHIPipelineName(&local_240,pFVar1->Pipelines);
      GetRHIAccessName(&local_250,pFVar1->Access);
      ::FString::PrintfImpl
                (&local_380,
                 L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted to resolve ERHIAccess::Unknown for resource %s but its tracked access that does match its validation tracked access.\n\n    --- Validation actual access states:        %s\n    --- Validation actual pipelines:            %s\n    --- Tracked access states:                  %s\n    --- Tracked pipelines:                      %s\n\n\n--------------------------------------------------------------------\n\n\n"
                );
      if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.Data.AllocatorInstance.Data);
      }
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
      if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_430.Data.AllocatorInstance.Data);
      }
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_380.Data.ArrayNum != 0) {
        FVar17.Data = local_380.Data.AllocatorInstance.Data;
      }
      FValidationRHI::ReportValidationFailure((wchar_t *)FVar17.Data);
      if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.Data.AllocatorInstance.Data);
      }
    }
  }
  if ((param_1->TransientState).bTransient != false) {
    if ((param_1->TransientState).Status != Acquired) {
      ::FString::PrintfImpl(&local_370,L"\"%s\" (0x%p) (Whole Resource)");
      ::FString::PrintfImpl
                (&local_360,
                 L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted a resource transition for transient resource %s without acquiring it. Transient resources must be acquired before any transitions are begun and discarded after all transitions are complete.\n\n\n--------------------------------------------------------------------\n\n\n"
                );
      if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_370.Data.AllocatorInstance.Data);
      }
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_360.Data.ArrayNum != 0) {
        FVar17.Data = local_360.Data.AllocatorInstance.Data;
      }
      FValidationRHI::ReportValidationFailure((wchar_t *)FVar17.Data);
      if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_360.Data.AllocatorInstance.Data);
      }
    }
    if ((EVar13 & Discard) != None) {
      FTransientState::Discard(&param_1->TransientState,param_1,param_9,param_3->Pipelines,param_7);
    }
  }
  if ((param_6 & NoFence) != None) {
    for (EVar22 = ~param_3->Pipelines & pFVar1->Pipelines; EVar22 != None;
        EVar22 = EVar22 & EVar22 - Graphics) {
      EVar11 = -EVar22 & EVar22;
      if ((EVar11 == Graphics) || (EVar11 != AsyncCompute)) {
        pTVar20 = param_8;
        if ((EVar11 == Graphics) || (EVar11 != AsyncCompute)) {
          lVar15 = 0;
        }
        else {
          lVar15 = 8;
        }
      }
      else {
        lVar15 = 8;
        pTVar20 = (TRHIPipelineArray<unsigned___int64> *)&param_8->field_0x8;
      }
      if (*(ulonglong *)pTVar20 <= *(ulonglong *)(&(this->LastTransitionFences).field_0x0 + lVar15))
      {
        if (((param_2->MipIndex == -1) && (param_2->ArraySlice == -1)) &&
           (param_2->PlaneIndex == -1)) {
          ::FString::PrintfImpl(&local_420,L"\"%s\" (0x%p) (Whole Resource)");
        }
        else {
          ::FString::PrintfImpl(&local_420,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
        }
        pFVar18 = GetRHIPipelineName(&local_210,EVar11);
        if ((pFVar18->Data).ArrayNum == 0) {
          pwVar21 = L"";
        }
        else {
          pwVar21 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
        }
        ::FString::FString(&local_340,pwVar21);
        if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data.AllocatorInstance.Data);
        }
        pFVar18 = GetRHIPipelineName(&local_200,param_7);
        if ((pFVar18->Data).ArrayNum == 0) {
          pwVar21 = L"";
        }
        else {
          pwVar21 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
        }
        ::FString::FString(&local_350,pwVar21);
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
        ::FString::PrintfImpl
                  (&local_330,
                   L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttemped to begin a resource transition for resource %s on the %s pipeline but skipping the transition on the %s pipeline (which is allowed with the NoFence flag), however no external\nfence was issued between these two pipelines between this begin transition and the last end transition call on the %s pipeline. You must insert a manual fence from \'%s\' to \'%s\'.\n\n\n--------------------------------------------------------------------\n\n\n"
                  );
        if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_350.Data.AllocatorInstance.Data);
        }
        if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Data.AllocatorInstance.Data);
        }
        if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_420.Data.AllocatorInstance.Data);
        }
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_330.Data.ArrayNum != 0) {
          FVar17.Data = local_330.Data.AllocatorInstance.Data;
        }
        FValidationRHI::ReportValidationFailure((wchar_t *)FVar17.Data);
        if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_330.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if (*(byte *)((longlong)&pFVar1[2].Access + 1) != 0) {
    FVar3 = pFVar1[3];
    if (((param_2->MipIndex == -1) && (param_2->ArraySlice == -1)) && (param_2->PlaneIndex == -1)) {
      ::FString::PrintfImpl(&local_410,L"\"%s\" (0x%p) (Whole Resource)");
    }
    else {
      ::FString::PrintfImpl(&local_410,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
    }
    if ((FVar3 == (FState)0x0) && (local_488 == (FState)0x0)) {
      ::FString::FString(&local_440,
                         L"    --- Enable barrier logging for this resource to see a callstack backtrace for the RHIBeginTransitions() call which has not been completed. Use -RHIValidationLog=X,Y,Z to enable backtrace logging for individual resources.\n\n"
                        );
    }
    else if (GRHIValidationPrintHumanReadableCallStack == false) {
      ::FString::PrintfImpl
                (&local_440,
                 L"    --- Callstack backtraces for the transition which has not been completed (resolve in the Watch window):\n        RHICreateTransition: (void**)0x%p,32\n        RHIBeginTransitions: (void**)0x%p,32\n"
                );
    }
    else {
      ResolveAndFormatCallstack(&local_1e0,(ulong64 *)local_488);
      ResolveAndFormatCallstack(&local_1f0,(ulong64 *)FVar3);
      ::FString::PrintfImpl
                (&local_440,
                 L"    --- Callstack backtraces for the transition which has not been completed:\n        RHICreateTransition: %s\n        RHIBeginTransitions: %s\n"
                );
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
    }
    GetRHIPipelineName(&local_1a0,local_490.Pipelines);
    GetRHIPipelineName(&local_1b0,pFVar1[1].Pipelines);
    GetRHIAccessName(&local_1c0,EVar13);
    GetRHIAccessName(&local_1d0,pFVar1[1].Access);
    ::FString::PrintfImpl
              (&local_320,
               L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted to begin a resource transition for resource %s whilst a previous asynchronous resource transition is already in progress. A call to RHIEndTransitions() must be made before the resource can be transitioned again.\n\n    --- Pending access states for this resource are:              %s\n    --- Attempted access states for the duplicate transition are: %s\n    --- Pending pipelines for this resource are:                  %s\n    --- Attempted pipelines for the duplicate transition are:     %s\n%s\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.Data.AllocatorInstance.Data);
    }
    if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.Data.AllocatorInstance.Data);
    }
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_320.Data.ArrayNum != 0) {
      FVar17.Data = local_320.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar17.Data);
    if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.Data.AllocatorInstance.Data);
    }
  }
  if ((param_3->Pipelines & param_7) != param_7) {
    if (((param_2->MipIndex == -1) && (param_2->ArraySlice == -1)) && (param_2->PlaneIndex == -1)) {
      ::FString::PrintfImpl(&local_400,L"\"%s\" (0x%p) (Whole Resource)");
    }
    else {
      ::FString::PrintfImpl(&local_400,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
    }
    GetRHIAccessName(&local_160,EVar13);
    GetRHIAccessName(&local_170,pFVar1[1].Access);
    GetRHIPipelineName(&local_180,pFVar1[1].Pipelines);
    GetRHIPipelineName(&local_190,local_490.Pipelines);
    ::FString::PrintfImpl
              (&local_310,
               L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted to begin a resource transition for resource %s on the wrong pipeline(s) (\"%s\"). The resource is currently accessible on the \"%s\" pipeline(s).\n\n    --- Current access states for this resource are: %s\n    --- Attempted access states are:                 %s\n\n    --- Ensure that resource transitions are issued on the correct pipeline.\n\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_400.Data.AllocatorInstance.Data);
    }
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_310.Data.ArrayNum != 0) {
      FVar17.Data = local_310.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar17.Data);
    if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
  }
  bVar10 = true;
  if ((param_5 & IgnoreAfterState) == None) {
    EVar22 = pFVar1->Pipelines;
    if (EVar22 == param_3->Pipelines) {
      bVar10 = true;
    }
    else if ((((param_6 & AllowDecayPipelines) == None) || ((EVar22 & param_3->Pipelines) == None))
            || (EVar22 != (param_1->TrackedState).Pipelines)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  }
  if (param_3->Access == None) {
    if (((param_1->TrackedState).Access == pFVar1->Access) && (bVar10)) goto LAB_145cd6c9c;
    EVar22 = param_3->Pipelines;
    if ((param_2->MipIndex == -1) && ((param_2->ArraySlice == -1 && (param_2->PlaneIndex == -1)))) {
      ::FString::PrintfImpl(&local_460,L"\"%s\" (0x%p) (Whole Resource)");
    }
    else {
      ::FString::PrintfImpl(&local_460,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
    }
    GetRHIPipelineName(&local_120,EVar22);
    GetRHIPipelineName(&local_130,pFVar1->Pipelines);
    GetRHIAccessName(&local_140,pFVar1->Access);
    GetRHIAccessName(&local_150,(param_1->TrackedState).Access);
    ::FString::PrintfImpl
              (&local_300,
               L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nThe tracked previous state \"%s\" does not match the tracked current state \"%s\" for the resource %s.\n    --- Allowed pipelines for this resource are:                           %s\n    --- Previous pipelines passed as part of the resource transition were: %s\n\n    --- The previous state was pulled from the last call to RHICmdList.SetTrackedAccess due to the use of ERHIAccess::Unknown. If this doesn\'t match the expected state, be sure to update the \n    --- tracked state after using manual low - level transitions. It is highly recommended to coalesce all subresources into the same state before relying on tracked previous states with \n    --- ERHIAccess::Unknown. RHICmdList.SetTrackedAccess applies to whole resources.\n\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.Data.AllocatorInstance.Data);
    }
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_300.Data.ArrayNum != 0) {
      FVar17.Data = local_300.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar17.Data);
  }
  else {
    if ((param_3->Access == pFVar1->Access) && (bVar10)) goto LAB_145cd6c9c;
    if ((param_2->MipIndex == -1) && ((param_2->ArraySlice == -1 && (param_2->PlaneIndex == -1)))) {
      ::FString::PrintfImpl(&local_450,L"\"%s\" (0x%p) (Whole Resource)");
    }
    else {
      ::FString::PrintfImpl(&local_450,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
    }
    GetRHIPipelineName(&local_e0,param_3->Pipelines);
    GetRHIPipelineName(&local_f0,pFVar1->Pipelines);
    GetRHIAccessName(&local_100,pFVar1->Access);
    GetRHIAccessName(&local_110,param_3->Access);
    ::FString::PrintfImpl
              (&local_2f0,
               L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nThe explicit previous state \"%s\" does not match the tracked current state \"%s\" for the resource %s.\n    --- Allowed pipelines for this resource are:                           %s\n    --- Previous pipelines passed as part of the resource transition were: %s\n\n    --- The best solution is to correct the explicit previous state passed for the resource in the call to RHICreateTransition().\n    --- Alternatively, use ERHIAccess::Unknown if the actual previous state cannot be determined. Unknown previous resource states have a performance impact so should be avoided if possible.\n\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.Data.AllocatorInstance.Data);
    }
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_2f0.Data.ArrayNum != 0) {
      FVar17.Data = local_2f0.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar17.Data);
    local_300.Data.AllocatorInstance.Data = local_2f0.Data.AllocatorInstance.Data;
  }
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
LAB_145cd6c9c:
  if (((param_5 & IgnoreAfterState) != None) && (param_3->Pipelines == All)) {
    if ((param_2->MipIndex == -1) && ((param_2->ArraySlice == -1 && (param_2->PlaneIndex == -1)))) {
      ::FString::PrintfImpl(&local_3f0,L"\"%s\" (0x%p) (Whole Resource)");
    }
    else {
      ::FString::PrintfImpl(&local_3f0,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
    }
    GetRHIPipelineName(&local_a0,local_490.Pipelines);
    GetRHIPipelineName(&local_b0,pFVar1[1].Pipelines);
    GetRHIAccessName(&local_c0,EVar13);
    GetRHIAccessName(&local_d0,pFVar1[1].Access);
    ::FString::PrintfImpl
              (&local_2e0,
               L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted to begin a resource transition for resource %s on All pipes. Transition with EResourceTransitionFlags::IgnoreAfterState on All pipes are not supported.\n\n    --- Pending access states for this resource are:              %s\n    --- Attempted access states for the current transition are: %s\n    --- Pending pipelines for this resource are:                  %s\n    --- Attempted pipelines for the current transition are:     %s\n\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
    }
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_2e0.Data.ArrayNum != 0) {
      FVar17.Data = local_2e0.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar17.Data);
    if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
    }
  }
  if ((*(byte *)((longlong)&pFVar1[2].Access + 2) != 0) && ((param_5 & IgnoreAfterState) == None)) {
    if ((param_2->MipIndex == -1) && ((param_2->ArraySlice == -1 && (param_2->PlaneIndex == -1)))) {
      ::FString::PrintfImpl(&local_3e0,L"\"%s\" (0x%p) (Whole Resource)");
    }
    else {
      ::FString::PrintfImpl(&local_3e0,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
    }
    GetRHIPipelineName(local_60,local_490.Pipelines);
    GetRHIPipelineName(&local_70,pFVar1[1].Pipelines);
    GetRHIAccessName(&local_80,EVar13);
    GetRHIAccessName(&local_90,pFVar1[1].Access);
    ::FString::PrintfImpl
              (&local_2d0,
               L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nAttempted to begin a resource transition for resource %s whilst not having the flag EResourceTransitionFlags::IgnoreAfterState matching the previous transiton. Transition with EResourceTransitionFlags::IgnoreAfterState always needs to be done in pairs.\n\n    --- Pending access states for this resource are:              %s\n    --- Attempted access states for the current transition are: %s\n    --- Pending pipelines for this resource are:                  %s\n    --- Attempted pipelines for the current transition are:     %s\n\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
    }
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_2d0.Data.ArrayNum != 0) {
      FVar17.Data = local_2d0.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar17.Data);
    if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
    }
  }
  pFVar1[4] = local_488;
  pFVar1[3] = (FState)param_9;
  *(byte *)((longlong)&pFVar1[2].Access + 1) = 1;
  *(EResourceTransitionFlags *)&pFVar1[2].Access = param_5;
  *pFVar1 = local_490;
  pFVar1[1] = local_490;
  *(byte *)((longlong)&pFVar1[2].Access + 3) = 0;
  pFVar1[2].field_0x5 = 0;
  if ((param_5 & IgnoreAfterState) == None) {
    for (bVar12 = ~param_3->Pipelines & 3; bVar12 != 0; bVar12 = bVar12 & ~(~bVar12 + 1)) {
      FVar6 = pFVar1[1];
      FVar7 = pFVar1[2];
      FVar8 = pFVar1[3];
      FVar3 = pFVar1[4];
      bVar5 = bVar12 & ~bVar12 + 1;
      if ((bVar5 == 1) || (lVar15 = 0x38, bVar5 != 2)) {
        lVar15 = 0x10;
      }
      pFVar2 = (FState *)(&(this->LastTransitionFences).field_0x0 + lVar15);
      *pFVar2 = *pFVar1;
      pFVar2[1] = FVar6;
      pFVar2 = (FState *)(&(this->States).field_0x0 + lVar15);
      *pFVar2 = FVar7;
      pFVar2[1] = FVar8;
      *(FState *)(&(this->States).field_0x10 + lVar15) = FVar3;
    }
  }
  return;
}

// EndTransition @ 145cda910

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
RHIValidation::FSubresourceState::EndTransition
          (FSubresourceState *this,FResource *param_1,FSubresourceIndex *param_2,FState *param_3,
          FState *param_4,EResourceTransitionFlags param_5,ERHIPipeline param_6,ulong64 param_7,
          void *param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ERHIPipeline EVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ERHIPipeline EVar8;
  ForAnyElementType FVar9;
  ERHIAccess EVar10;
  longlong lVar11;
  longlong lVar12;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if ((param_6 == Graphics) || (lVar12 = 0x38, param_6 != AsyncCompute)) {
    lVar12 = 0x10;
  }
  EVar10 = (*param_4).Access;
  if (EVar10 == None) {
    EVar10 = (param_1->TrackedState).Access;
  }
  param_4._4_1_ = (*param_4).Pipelines;
  if (param_1->LoggingMode != None) {
    GetRHIPipelineName(&local_68,param_6);
    GetRHIPipelineName(&local_78,param_4._4_1_);
    GetRHIAccessName(&local_88,EVar10);
    ::FString::PrintfImpl(&local_98,L"Access: %s%s, Pipeline: %s, Executing Pipeline: %s");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar9.Data = local_98.Data.AllocatorInstance.Data;
    }
    RHIValidation::Log(param_1,param_2,param_8,L"End",L"EndTransition",(wchar_t *)FVar9.Data);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if ((param_5 & IgnoreAfterState) != None) {
    (&(this->States).field_0x2)[lVar12] = (&(this->States).field_0x2)[lVar12] == '\0';
  }
  if ((&(this->States).field_0x1)[lVar12] == '\0') {
    FValidationRHI::ReportValidationFailure(L"Unsolicited resource end transition call.");
  }
  *(undefined8 *)(&(this->States).field_0x10 + lVar12) = 0;
  (&(this->States).field_0x1)[lVar12] = 0;
  if ((EVar10 != *(ERHIAccess *)(&(this->LastTransitionFences).field_0x8 + lVar12)) ||
     (param_4._4_1_ != (&(this->LastTransitionFences).field_0xc)[lVar12])) {
    if ((param_2->MipIndex == -1) && ((param_2->ArraySlice == -1 && (param_2->PlaneIndex == -1)))) {
      ::FString::PrintfImpl(&local_98,L"\"%s\" (0x%p) (Whole Resource)");
    }
    else {
      ::FString::PrintfImpl(&local_98,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
    }
    GetRHIPipelineName(&local_48,param_4._4_1_);
    GetRHIAccessName(&local_58,*(ERHIAccess *)(&(this->LastTransitionFences).field_0x8 + lVar12));
    GetRHIPipelineName(&local_78,(&(this->LastTransitionFences).field_0xc)[lVar12]);
    GetRHIAccessName(&local_68,EVar10);
    ::FString::PrintfImpl
              (&local_88,
               L"RHI validation failed for resource: %s:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nThe expected target state \"%s\" on pipe \"%s\" in end transition does not match the tracked target state \"%s\" on pipe \"%s\" for the resource %s.\n    --- The call to EndTransition() is mismatched with the another BeginTransition() with different states.\n\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar9.Data = local_88.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar9.Data);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if ((param_5 & IgnoreAfterState) == None) {
    EVar8 = All;
    do {
      EVar4 = ~EVar8 + Graphics & EVar8;
      if ((EVar4 & param_4._4_1_) == None) {
        uVar3 = *(undefined8 *)(&(this->States).field_0x10 + lVar12);
        puVar1 = (undefined8 *)(&(this->LastTransitionFences).field_0x0 + lVar12);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(&(this->States).field_0x0 + lVar12);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        if ((EVar4 == Graphics) || (lVar11 = 0x38, EVar4 != AsyncCompute)) {
          lVar11 = 0x10;
        }
        puVar2 = (undefined8 *)(&(this->LastTransitionFences).field_0x0 + lVar11);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(&(this->States).field_0x0 + lVar11);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        *(undefined8 *)(&(this->States).field_0x10 + lVar11) = uVar3;
      }
      EVar8 = EVar8 & ~(~EVar8 + Graphics);
    } while (EVar8 != None);
  }
  if ((param_6 != Graphics) && (param_6 == AsyncCompute)) {
    *(ulong64 *)&(this->LastTransitionFences).field_0x8 = param_7;
    return;
  }
  *(ulong64 *)&this->LastTransitionFences = param_7;
  return;
}

// SpecificUAVOverlap @ 145cf2870

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
RHIValidation::FSubresourceState::SpecificUAVOverlap
          (FSubresourceState *this,FResource *param_1,FSubresourceIndex *param_2,
          ERHIPipeline param_3,bool param_4)

{
  ForAnyElementType FVar1;
  longlong lVar2;
  FString local_38;
  FString local_28;
  
  if (param_1->LoggingMode != None) {
    ::FString::PrintfImpl(&local_38,L"Allow: %s");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar1.Data = local_38.Data.AllocatorInstance.Data;
    }
    RHIValidation::Log(param_1,param_2,(void *)0x0,(wchar_t *)0x0,L"UAVOverlap",
                       (wchar_t *)FVar1.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((param_3 == Graphics) || (lVar2 = 0x4c, param_3 != AsyncCompute)) {
    lVar2 = 0x24;
  }
  if ((bool)(&(this->LastTransitionFences).field_0x0)[lVar2] == param_4) {
    if (((param_2->MipIndex == -1) && (param_2->ArraySlice == -1)) && (param_2->PlaneIndex == -1)) {
      ::FString::PrintfImpl(&local_38,L"\"%s\" (0x%p) (Whole Resource)");
    }
    else {
      ::FString::PrintfImpl(&local_38,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
    }
    ::FString::PrintfImpl
              (&local_28,
               L"RHI validation failed: UAV overlap mismatch:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nMismatched call to %sUAVOverlap(FRHIUnorderedAccessView*) for the resource %s.\n\n    --- Ensure all calls to RHICmdList.BeginUAVOverlap() are paired with a call to RHICmdList.EndUAVOverlap().\n\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar1.Data = local_28.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar1.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  (&(this->LastTransitionFences).field_0x0)[lVar2] = param_4;
  return;
}

