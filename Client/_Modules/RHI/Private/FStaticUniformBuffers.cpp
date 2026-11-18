// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// Reset @ 145cf0b40

void __thiscall RHIValidation::FStaticUniformBuffers::Reset(FStaticUniformBuffers *this)

{
  code *pcVar1;
  bool bVar2;
  
  (this->Bindings).ArrayNum = 0;
  if ((this->Bindings).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->Bindings).ArrayMax);
  }
  if (this->bInSetPipelineStateCall != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bInSetPipelineStateCall",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0x5ad,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ValidateSetShaderUniformBuffer @ 145cf4cd0

void __thiscall
RHIValidation::FStaticUniformBuffers::ValidateSetShaderUniformBuffer
          (FStaticUniformBuffers *this,FRHIUniformBuffer *param_1)

{
  byte bVar1;
  FRHIUniformBufferLayout *pFVar2;
  code *pcVar3;
  FDynamicRHI *pFVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  int iVar7;
  FRHIUniformBufferLayout *local_res8;
  FString local_28;
  FString local_18;
  
  if ((param_1 == (FRHIUniformBuffer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0x5b2,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar4 = GDynamicRHI;
  if ((char)param_1->_padding_ != '\0') {
    FValidationRHI::ReportValidationFailure
              (
              L"Uniform buffer created with null contents is now being bound for rendering on an RHI context. The contents must first be updated."
              );
  }
  if ((*(int *)((longlong)&param_1->_padding_ + 4) != 2) &&
     ((ulonglong)param_1->_padding_ < (ulonglong)pFVar4[5]._padding_)) {
    ::FString::FString(&local_28,
                       L"Non MultiFrame Uniform buffer has been allocated in a previous frame. The data could have been deleted already!"
                      );
    if (param_1->_padding_ != 0) {
      ::FString::PrintfImpl(&local_18,L"\nAllocation callstack: (void**)0x%p,32");
      iVar7 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar7);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar6.Data = local_28.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar6.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (this->bInSetPipelineStateCall == false) {
    pFVar2 = (param_1->Layout).Reference;
    if (((pFVar2->BindingFlags & Shader) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAnyFlags(Layout.BindingFlags, EUniformBufferBindingFlags::Shader)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                           ,0x5bd,
                           L"Uniform buffer \'%s\' does not have the \'Shader\' binding flag."),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((int)(uint)pFVar2->StaticSlot < (this->Bindings).ArrayNum) {
      if ((pFVar2->BindingFlags != StaticAndShader) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Layout.BindingFlags == EUniformBufferBindingFlags::StaticAndShader",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                             ,0x5c1,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar1 = pFVar2->StaticSlot;
      if (((this->Bindings).ArrayNum <= (int)(uint)bVar1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((this->Bindings).AllocatorInstance.Data + (ulonglong)bVar1 * 8) != 0) {
        local_res8 = pFVar2;
        `RHIValidation::FStaticUniformBuffers::ValidateSetShaderUniformBuffer'::__l24::<lambda_1>::
        operator()(&local_res8);
      }
    }
  }
  return;
}

// operator() @ 1504db060

bool __thiscall
`RHIValidation::FStaticUniformBuffers::ValidateSetShaderUniformBuffer'::__l24::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6018585595129890245>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<6018585595129890245>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

