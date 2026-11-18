// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 13

// AddBufferSRV @ 145e8a5c0

void __thiscall
FShaderParametersMetadataBuilder::AddBufferSRV
          (FShaderParametersMetadataBuilder *this,wchar_t *param_1,wchar_t *param_2,Type param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  piVar1 = &(this->Members).ArrayMax;
  this->NextMemberOffset = this->NextMemberOffset + 7 & 0xfffffff8;
  iVar4 = (this->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
  }
  (this->Members).ArrayNum = iVar4 + 1;
  pFVar5 = (this->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(uint *)(pFVar5 + 0x14) = this->NextMemberOffset;
  *(wchar_t **)pFVar5 = param_1;
  *(wchar_t **)(pFVar5 + 8) = param_2;
  *(undefined4 *)(pFVar5 + 0x10) = 0x59;
  pFVar5[0x18] = (FScriptContainerElement)0x6;
  pFVar5[0x19] = (FScriptContainerElement)param_3;
  *(undefined4 *)(pFVar5 + 0x1c) = 1;
  *(undefined8 *)(pFVar5 + 0x20) = 1;
  *(undefined8 *)(pFVar5 + 0x28) = 0;
  if (param_2 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShaderType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0xcc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->NextMemberOffset = this->NextMemberOffset + 8;
  return;
}

// AddBufferUAV @ 145e8a6a0

void __thiscall
FShaderParametersMetadataBuilder::AddBufferUAV
          (FShaderParametersMetadataBuilder *this,wchar_t *param_1,wchar_t *param_2,Type param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  piVar1 = &(this->Members).ArrayMax;
  this->NextMemberOffset = this->NextMemberOffset + 7 & 0xfffffff8;
  iVar4 = (this->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
  }
  (this->Members).ArrayNum = iVar4 + 1;
  pFVar5 = (this->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(uint *)(pFVar5 + 0x14) = this->NextMemberOffset;
  *(wchar_t **)pFVar5 = param_1;
  *(wchar_t **)(pFVar5 + 8) = param_2;
  *(undefined4 *)(pFVar5 + 0x10) = 0x71;
  pFVar5[0x18] = (FScriptContainerElement)0x7;
  pFVar5[0x19] = (FScriptContainerElement)param_3;
  *(undefined4 *)(pFVar5 + 0x1c) = 1;
  *(undefined8 *)(pFVar5 + 0x20) = 1;
  *(undefined8 *)(pFVar5 + 0x28) = 0;
  if (param_2 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShaderType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0xcc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->NextMemberOffset = this->NextMemberOffset + 8;
  return;
}

// AddIncludedStruct @ 145e8a780

void __thiscall
FShaderParametersMetadataBuilder::AddIncludedStruct
          (FShaderParametersMetadataBuilder *this,FShaderParametersMetadata *param_1,Type param_2)

{
  int *piVar1;
  uint uVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  piVar1 = &(this->Members).ArrayMax;
  this->NextMemberOffset = this->NextMemberOffset + 0xf & 0xfffffff0;
  iVar6 = (this->Members).ArrayNum;
  pwVar3 = param_1->StructTypeName;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
  }
  (this->Members).ArrayNum = iVar6 + 1;
  uVar2 = this->NextMemberOffset;
  pFVar7 = (this->Members).AllocatorInstance.Data + (longlong)iVar6 * 0x30;
  *(wchar_t **)pFVar7 = L"";
  *(wchar_t **)(pFVar7 + 8) = pwVar3;
  *(undefined4 *)(pFVar7 + 0x10) = 0x27;
  *(uint *)(pFVar7 + 0x14) = uVar2;
  pFVar7[0x18] = (FScriptContainerElement)0x15;
  pFVar7[0x19] = (FScriptContainerElement)param_2;
  *(undefined4 *)(pFVar7 + 0x1c) = 1;
  *(undefined8 *)(pFVar7 + 0x20) = 1;
  *(FShaderParametersMetadata **)(pFVar7 + 0x28) = param_1;
  if (pwVar3 == (wchar_t *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShaderType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0xcc,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->NextMemberOffset = this->NextMemberOffset + (param_1->Size + 0xf & 0xfffffff0);
  return;
}

// AddNestedStruct @ 145e8a860

uint __thiscall
FShaderParametersMetadataBuilder::AddNestedStruct
          (FShaderParametersMetadataBuilder *this,wchar_t *param_1,
          FShaderParametersMetadata *param_2,Type param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  
  piVar1 = &(this->Members).ArrayMax;
  uVar4 = this->NextMemberOffset + 0xf & 0xfffffff0;
  this->NextMemberOffset = uVar4;
  iVar2 = (this->Members).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
  }
  (this->Members).ArrayNum = iVar2 + 1;
  pFVar3 = (this->Members).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  *(uint *)(pFVar3 + 0x14) = this->NextMemberOffset;
  *(wchar_t **)(pFVar3 + 8) = L"";
  pFVar3[0x19] = (FScriptContainerElement)param_3;
  *(FShaderParametersMetadata **)(pFVar3 + 0x28) = param_2;
  *(wchar_t **)pFVar3 = param_1;
  *(undefined4 *)(pFVar3 + 0x10) = 0x40;
  pFVar3[0x18] = (FScriptContainerElement)0x14;
  *(undefined4 *)(pFVar3 + 0x1c) = 1;
  *(undefined8 *)(pFVar3 + 0x20) = 1;
  this->NextMemberOffset = this->NextMemberOffset + (param_2->Size + 0xf & 0xfffffff0);
  return uVar4;
}

// AddRDGBufferSRV @ 145e8af90

void __thiscall
FShaderParametersMetadataBuilder::AddRDGBufferSRV
          (FShaderParametersMetadataBuilder *this,wchar_t *param_1,wchar_t *param_2,Type param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  piVar1 = &(this->Members).ArrayMax;
  this->NextMemberOffset = this->NextMemberOffset + 7 & 0xfffffff8;
  iVar4 = (this->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
  }
  (this->Members).ArrayNum = iVar4 + 1;
  pFVar5 = (this->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(uint *)(pFVar5 + 0x14) = this->NextMemberOffset;
  *(wchar_t **)pFVar5 = param_1;
  *(wchar_t **)(pFVar5 + 8) = param_2;
  *(undefined4 *)(pFVar5 + 0x10) = 0x89;
  pFVar5[0x18] = (FScriptContainerElement)0x11;
  pFVar5[0x19] = (FScriptContainerElement)param_3;
  *(undefined4 *)(pFVar5 + 0x1c) = 1;
  *(undefined8 *)(pFVar5 + 0x20) = 1;
  *(undefined8 *)(pFVar5 + 0x28) = 0;
  if (param_2 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShaderType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0xcc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->NextMemberOffset = this->NextMemberOffset + 8;
  return;
}

// AddRDGBufferUAV @ 145e8b070

void __thiscall
FShaderParametersMetadataBuilder::AddRDGBufferUAV
          (FShaderParametersMetadataBuilder *this,wchar_t *param_1,wchar_t *param_2,Type param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  piVar1 = &(this->Members).ArrayMax;
  this->NextMemberOffset = this->NextMemberOffset + 7 & 0xfffffff8;
  iVar4 = (this->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
  }
  (this->Members).ArrayNum = iVar4 + 1;
  pFVar5 = (this->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(uint *)(pFVar5 + 0x14) = this->NextMemberOffset;
  *(wchar_t **)pFVar5 = param_1;
  *(wchar_t **)(pFVar5 + 8) = param_2;
  *(undefined4 *)(pFVar5 + 0x10) = 0xa1;
  pFVar5[0x18] = (FScriptContainerElement)0x12;
  pFVar5[0x19] = (FScriptContainerElement)param_3;
  *(undefined4 *)(pFVar5 + 0x1c) = 1;
  *(undefined8 *)(pFVar5 + 0x20) = 1;
  *(undefined8 *)(pFVar5 + 0x28) = 0;
  if (param_2 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShaderType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0xcc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->NextMemberOffset = this->NextMemberOffset + 8;
  return;
}

// AddRDGTexture @ 145e8b150

void __thiscall
FShaderParametersMetadataBuilder::AddRDGTexture
          (FShaderParametersMetadataBuilder *this,wchar_t *param_1,wchar_t *param_2,Type param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  piVar1 = &(this->Members).ArrayMax;
  this->NextMemberOffset = this->NextMemberOffset + 7 & 0xfffffff8;
  iVar4 = (this->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
  }
  (this->Members).ArrayNum = iVar4 + 1;
  pFVar5 = (this->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(uint *)(pFVar5 + 0x14) = this->NextMemberOffset;
  *(wchar_t **)pFVar5 = param_1;
  *(wchar_t **)(pFVar5 + 8) = param_2;
  *(undefined4 *)(pFVar5 + 0x10) = 0xd0;
  pFVar5[0x18] = (FScriptContainerElement)0x9;
  pFVar5[0x19] = (FScriptContainerElement)param_3;
  *(undefined4 *)(pFVar5 + 0x1c) = 1;
  *(undefined8 *)(pFVar5 + 0x20) = 1;
  *(undefined8 *)(pFVar5 + 0x28) = 0;
  if (param_2 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShaderType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0xcc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->NextMemberOffset = this->NextMemberOffset + 8;
  return;
}

// AddReferencedStruct @ 145e8b240

void __thiscall
FShaderParametersMetadataBuilder::AddReferencedStruct
          (FShaderParametersMetadataBuilder *this,wchar_t *param_1,
          FShaderParametersMetadata *param_2,Type param_3)

{
  int *piVar1;
  uint uVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  this->NextMemberOffset = this->NextMemberOffset + 0xf & 0xfffffff0;
  pwVar3 = param_2->StructTypeName;
  piVar1 = &(this->Members).ArrayMax;
  iVar6 = (this->Members).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
  }
  (this->Members).ArrayNum = iVar6 + 1;
  uVar2 = this->NextMemberOffset;
  pFVar7 = (this->Members).AllocatorInstance.Data + (longlong)iVar6 * 0x30;
  *(wchar_t **)pFVar7 = param_1;
  *(wchar_t **)(pFVar7 + 8) = pwVar3;
  *(undefined4 *)(pFVar7 + 0x10) = 0x10;
  *(uint *)(pFVar7 + 0x14) = uVar2;
  pFVar7[0x18] = (FScriptContainerElement)0x16;
  pFVar7[0x19] = (FScriptContainerElement)param_3;
  *(undefined4 *)(pFVar7 + 0x1c) = 1;
  *(undefined8 *)(pFVar7 + 0x20) = 1;
  *(FShaderParametersMetadata **)(pFVar7 + 0x28) = param_2;
  if (pwVar3 == (wchar_t *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShaderType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0xcc,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->NextMemberOffset = this->NextMemberOffset + (param_2->Size + 0xf & 0xfffffff0);
  return;
}

// AddRenderTargetBindingSlots @ 145e8b330

void __thiscall
FShaderParametersMetadataBuilder::AddRenderTargetBindingSlots
          (FShaderParametersMetadataBuilder *this,wchar_t *param_1,wchar_t *param_2,Type param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  piVar1 = &(this->Members).ArrayMax;
  this->NextMemberOffset = this->NextMemberOffset + 0xf & 0xfffffff0;
  iVar4 = (this->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
  }
  (this->Members).ArrayNum = iVar4 + 1;
  pFVar5 = (this->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(uint *)(pFVar5 + 0x14) = this->NextMemberOffset;
  *(wchar_t **)pFVar5 = param_1;
  *(wchar_t **)(pFVar5 + 8) = param_2;
  *(undefined4 *)(pFVar5 + 0x10) = 0xf8;
  pFVar5[0x18] = (FScriptContainerElement)0x17;
  pFVar5[0x19] = (FScriptContainerElement)param_3;
  *(undefined4 *)(pFVar5 + 0x1c) = 1;
  *(undefined8 *)(pFVar5 + 0x20) = 1;
  *(undefined8 *)(pFVar5 + 0x28) = 0;
  if (param_2 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShaderType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0xcc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->NextMemberOffset = this->NextMemberOffset + 0x100;
  return;
}

// AddSampler @ 145e8b410

void __thiscall
FShaderParametersMetadataBuilder::AddSampler
          (FShaderParametersMetadataBuilder *this,wchar_t *param_1,wchar_t *param_2,Type param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  piVar1 = &(this->Members).ArrayMax;
  this->NextMemberOffset = this->NextMemberOffset + 7 & 0xfffffff8;
  iVar4 = (this->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
  }
  (this->Members).ArrayNum = iVar4 + 1;
  pFVar5 = (this->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(uint *)(pFVar5 + 0x14) = this->NextMemberOffset;
  *(wchar_t **)pFVar5 = param_1;
  *(wchar_t **)(pFVar5 + 8) = param_2;
  *(undefined4 *)(pFVar5 + 0x10) = 0xe4;
  pFVar5[0x18] = (FScriptContainerElement)0x8;
  pFVar5[0x19] = (FScriptContainerElement)param_3;
  *(undefined4 *)(pFVar5 + 0x1c) = 1;
  *(undefined8 *)(pFVar5 + 0x20) = 1;
  *(undefined8 *)(pFVar5 + 0x28) = 0;
  if (param_2 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShaderType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0xcc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->NextMemberOffset = this->NextMemberOffset + 8;
  return;
}

// AddTexture @ 145e8c580

void __thiscall
FShaderParametersMetadataBuilder::AddTexture
          (FShaderParametersMetadataBuilder *this,wchar_t *param_1,wchar_t *param_2,Type param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  piVar1 = &(this->Members).ArrayMax;
  this->NextMemberOffset = this->NextMemberOffset + 7 & 0xfffffff8;
  iVar4 = (this->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
  }
  (this->Members).ArrayNum = iVar4 + 1;
  pFVar5 = (this->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(uint *)(pFVar5 + 0x14) = this->NextMemberOffset;
  *(wchar_t **)pFVar5 = param_1;
  *(wchar_t **)(pFVar5 + 8) = param_2;
  *(undefined4 *)(pFVar5 + 0x10) = 0xb8;
  pFVar5[0x18] = (FScriptContainerElement)0x5;
  pFVar5[0x19] = (FScriptContainerElement)param_3;
  *(undefined4 *)(pFVar5 + 0x1c) = 1;
  *(undefined8 *)(pFVar5 + 0x20) = 1;
  *(undefined8 *)(pFVar5 + 0x28) = 0;
  if (param_2 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShaderType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0xcc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->NextMemberOffset = this->NextMemberOffset + 8;
  return;
}

// Build @ 145e91410

FShaderParametersMetadata * __thiscall
FShaderParametersMetadataBuilder::Build
          (FShaderParametersMetadataBuilder *this,EUseCase param_1,wchar_t *param_2)

{
  uint uVar1;
  FShaderParametersMetadata *this_00;
  FShaderParametersMetadata *pFVar2;
  
  uVar1 = this->NextMemberOffset;
  this_00 = ::operator_new(0x80);
  pFVar2 = (FShaderParametersMetadata *)0x0;
  if (this_00 != (FShaderParametersMetadata *)0x0) {
    pFVar2 = FShaderParametersMetadata::FShaderParametersMetadata
                       (this_00,param_1,Shader,param_2,param_2,(wchar_t *)0x0,(wchar_t *)0x0,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterMetadataBuilder.cpp"
                        ,0x114,uVar1 + 0xf & 0xfffffff0,&this->Members,false,
                        (FRHIUniformBufferLayoutInitializer *)0x0,None);
  }
  return pFVar2;
}

// Build @ 145e914b0

FShaderParametersMetadata * __thiscall
FShaderParametersMetadataBuilder::Build
          (FShaderParametersMetadataBuilder *this,EUseCase param_1,
          EUniformBufferBindingFlags param_2,wchar_t *param_3,wchar_t *param_4,wchar_t *param_5,
          wchar_t *param_6,char *param_7,int param_8,bool param_9,
          FRHIUniformBufferLayoutInitializer *param_10,EUsageFlags param_11)

{
  uint uVar1;
  FShaderParametersMetadata *this_00;
  FShaderParametersMetadata *pFVar2;
  
  uVar1 = this->NextMemberOffset;
  this_00 = ::operator_new(0x80);
  pFVar2 = (FShaderParametersMetadata *)0x0;
  if (this_00 != (FShaderParametersMetadata *)0x0) {
    pFVar2 = FShaderParametersMetadata::FShaderParametersMetadata
                       (this_00,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        uVar1 + 0xf & 0xfffffff0,&this->Members,param_9,param_10,param_11);
  }
  return pFVar2;
}

