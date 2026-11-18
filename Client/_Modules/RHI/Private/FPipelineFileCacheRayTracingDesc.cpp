// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 8

// FPipelineFileCacheRayTracingDesc @ 145c45b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FPipelineFileCacheRayTracingDesc * __thiscall
FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::FPipelineFileCacheRayTracingDesc
          (FPipelineFileCacheRayTracingDesc *this,FRayTracingPipelineStateInitializer *param_1,
          FRHIRayTracingShader *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  FRHIShaderBindingLayout *pFVar3;
  uint uVar4;
  EShaderBindingLayoutFlags EVar5;
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *pTVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong *puVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  uint local_1d8;
  EShaderBindingLayoutFlags local_1d4;
  undefined2 local_1d3;
  undefined1 local_1d1;
  undefined8 local_1d0;
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> local_1c8;
  uint local_108;
  EShaderBindingLayoutFlags local_104;
  uint local_100;
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> local_f8;
  ulonglong local_38 [2];
  
  puVar8 = &local_108;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_208;
  lVar7 = param_2->_padding_;
  local_1e8 = 0;
  *(longlong *)(this->ShaderHash).Hash = param_2->_padding_;
  *(longlong *)((this->ShaderHash).Hash + 8) = lVar7;
  *(int *)((this->ShaderHash).Hash + 0x10) = (int)param_2->_padding_;
  this->DeprecatedMaxPayloadSizeInBytes = 0;
  this->Frequency = *(EShaderFrequency *)((longlong)&param_2->_padding_ + 4);
  pFVar3 = param_1->ShaderBindingLayout;
  bVar12 = pFVar3 == (FRHIShaderBindingLayout *)0x0;
  if (bVar12) {
    local_1d8 = 0;
    local_1d3 = 0;
    local_1d1 = 0;
    local_1d0 = 0;
    local_1c8.Elements[0]._20_4_ = 0;
    local_1c8.Elements[1]._20_4_ = 0;
    local_1c8.Elements[2]._20_4_ = 0;
    local_1c8.Elements[3]._20_4_ = 0;
    local_1c8.Elements[4]._20_4_ = 0;
    local_1c8.Elements[5]._20_4_ = 0;
    local_1c8.Elements[6]._20_4_ = 0;
    local_1c8.Elements[7]._20_4_ = 0;
    local_1d4 = None;
    memset(&local_1c8,0,0xc0);
    pTVar6 = &local_1c8;
    local_1c8.Elements[0].LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Elements[0].LayoutName.Data.ArrayNum = 0;
    local_1c8.Elements[0].LayoutName.Data.ArrayMax = 0;
    local_1c8.Elements[0].field1_0x10.Flags = 0;
    local_1c8.Elements[1].LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Elements[1].LayoutName.Data.ArrayNum = 0;
    local_1c8.Elements[1].LayoutName.Data.ArrayMax = 0;
    local_1c8.Elements[1].field1_0x10.Flags = 0;
    local_1c8.Elements[2].LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Elements[2].LayoutName.Data.ArrayNum = 0;
    local_1c8.Elements[2].LayoutName.Data.ArrayMax = 0;
    local_1c8.Elements[2].field1_0x10.Flags = 0;
    local_1c8.Elements[3].LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Elements[3].LayoutName.Data.ArrayNum = 0;
    local_1c8.Elements[3].LayoutName.Data.ArrayMax = 0;
    local_1c8.Elements[3].field1_0x10.Flags = 0;
    local_1c8.Elements[4].LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Elements[4].LayoutName.Data.ArrayNum = 0;
    local_1c8.Elements[4].LayoutName.Data.ArrayMax = 0;
    local_1c8.Elements[4].field1_0x10.Flags = 0;
    local_1c8.Elements[5].LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Elements[5].LayoutName.Data.ArrayNum = 0;
    local_1c8.Elements[5].LayoutName.Data.ArrayMax = 0;
    local_1c8.Elements[5].field1_0x10.Flags = 0;
    local_1c8.Elements[6].LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Elements[6].LayoutName.Data.ArrayNum = 0;
    local_1c8.Elements[6].LayoutName.Data.ArrayMax = 0;
    local_1c8.Elements[6].field1_0x10.Flags = 0;
    local_1c8.Elements[7].LayoutName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Elements[7].LayoutName.Data.ArrayNum = 0;
    local_1c8.Elements[7].LayoutName.Data.ArrayMax = 0;
    local_1c8.Elements[7].field1_0x10.Flags = 0;
    uVar4 = local_1d8;
    EVar5 = local_1d4;
    uVar11 = (uint)local_1d0;
  }
  else {
    local_108 = pFVar3->Hash;
    local_104 = pFVar3->Flags;
    local_100 = pFVar3->NumUniformBufferEntries;
    TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::
    TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>
              (&local_f8,&pFVar3->UniformBufferEntries);
    pTVar6 = &local_f8;
    uVar4 = local_108;
    EVar5 = local_104;
    uVar11 = local_100;
  }
  (this->ShaderBindingLayout).Flags = EVar5;
  (this->ShaderBindingLayout).Hash = uVar4;
  (this->ShaderBindingLayout).NumUniformBufferEntries = uVar11;
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>
            (&(this->ShaderBindingLayout).UniformBufferEntries,pTVar6);
  lVar7 = 8;
  if (bVar12) {
    lVar9 = 8;
    do {
      puVar1 = puVar8 + -6;
      puVar8 = puVar8 + -6;
      lVar9 = lVar9 + -1;
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
    } while (lVar9 != 0);
  }
  if (!bVar12) {
    puVar10 = local_38;
    do {
      puVar2 = puVar10 + -3;
      puVar10 = puVar10 + -3;
      lVar7 = lVar7 + -1;
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
    } while (lVar7 != 0);
  }
  return this;
}

// FPipelineFileCacheRayTracingDesc @ 145c45d60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FPipelineFileCacheRayTracingDesc * __thiscall
FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::FPipelineFileCacheRayTracingDesc
          (FPipelineFileCacheRayTracingDesc *this)

{
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *pTVar1;
  FRHIUniformBufferShaderBindingLayout *pFVar2;
  
  (this->ShaderHash).Hash[0] = '\0';
  (this->ShaderHash).Hash[1] = '\0';
  (this->ShaderHash).Hash[2] = '\0';
  (this->ShaderHash).Hash[3] = '\0';
  (this->ShaderHash).Hash[4] = '\0';
  (this->ShaderHash).Hash[5] = '\0';
  (this->ShaderHash).Hash[6] = '\0';
  (this->ShaderHash).Hash[7] = '\0';
  (this->ShaderHash).Hash[8] = '\0';
  (this->ShaderHash).Hash[9] = '\0';
  (this->ShaderHash).Hash[10] = '\0';
  (this->ShaderHash).Hash[0xb] = '\0';
  (this->ShaderHash).Hash[0xc] = '\0';
  (this->ShaderHash).Hash[0xd] = '\0';
  (this->ShaderHash).Hash[0xe] = '\0';
  (this->ShaderHash).Hash[0xf] = '\0';
  *(undefined8 *)((this->ShaderHash).Hash + 0x10) = 0;
  (this->ShaderBindingLayout).Flags = None;
  this->Frequency = SF_NumStandardFrequencies;
  (this->ShaderBindingLayout).Hash = 0;
  (this->ShaderBindingLayout).NumUniformBufferEntries = 0;
  *(undefined8 *)&(this->ShaderBindingLayout).UniformBufferEntries.Elements[0].field1_0x10 = 0;
  *(undefined8 *)&(this->ShaderBindingLayout).UniformBufferEntries.Elements[1].field1_0x10 = 0;
  *(undefined8 *)&(this->ShaderBindingLayout).UniformBufferEntries.Elements[2].field1_0x10 = 0;
  *(undefined8 *)&(this->ShaderBindingLayout).UniformBufferEntries.Elements[3].field1_0x10 = 0;
  *(undefined8 *)&(this->ShaderBindingLayout).UniformBufferEntries.Elements[4].field1_0x10 = 0;
  *(undefined8 *)&(this->ShaderBindingLayout).UniformBufferEntries.Elements[5].field1_0x10 = 0;
  *(undefined8 *)&(this->ShaderBindingLayout).UniformBufferEntries.Elements[6].field1_0x10 = 0;
  *(undefined8 *)&(this->ShaderBindingLayout).UniformBufferEntries.Elements[7].field1_0x10 = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[0].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pTVar1 = &(this->ShaderBindingLayout).UniformBufferEntries;
  pTVar1->Elements[0].LayoutName.Data.ArrayNum = 0;
  pTVar1->Elements[0].LayoutName.Data.ArrayMax = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[1].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (this->ShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar2[1].LayoutName.Data.ArrayNum = 0;
  pFVar2[1].LayoutName.Data.ArrayMax = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[2].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (this->ShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar2[2].LayoutName.Data.ArrayNum = 0;
  pFVar2[2].LayoutName.Data.ArrayMax = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[3].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (this->ShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar2[3].LayoutName.Data.ArrayNum = 0;
  pFVar2[3].LayoutName.Data.ArrayMax = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[4].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (this->ShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar2[4].LayoutName.Data.ArrayNum = 0;
  pFVar2[4].LayoutName.Data.ArrayMax = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[5].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (this->ShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar2[5].LayoutName.Data.ArrayNum = 0;
  pFVar2[5].LayoutName.Data.ArrayMax = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[6].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (this->ShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar2[6].LayoutName.Data.ArrayNum = 0;
  pFVar2[6].LayoutName.Data.ArrayMax = 0;
  (this->ShaderBindingLayout).UniformBufferEntries.Elements[7].LayoutName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (this->ShaderBindingLayout).UniformBufferEntries.Elements;
  pFVar2[7].LayoutName.Data.ArrayNum = 0;
  pFVar2[7].LayoutName.Data.ArrayMax = 0;
  return this;
}

// ~FPipelineFileCacheRayTracingDesc @ 145c47f30

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::~FPipelineFileCacheRayTracingDesc
          (FPipelineFileCacheRayTracingDesc *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FPipelineFileCacheRayTracingDesc *pFVar3;
  
  pFVar3 = this + 1;
  lVar2 = 8;
  do {
    pFVar1 = pFVar3[-1].ShaderBindingLayout.UniformBufferEntries.Elements[7].LayoutName.Data.
             AllocatorInstance.Data;
    pFVar3 = (FPipelineFileCacheRayTracingDesc *)
             (pFVar3[-1].ShaderBindingLayout.UniformBufferEntries.Elements + 7);
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// operator= @ 145c48af0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FPipelineFileCacheRayTracingDesc * __thiscall
FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::operator=
          (FPipelineFileCacheRayTracingDesc *this,FPipelineFileCacheRayTracingDesc *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((param_1->ShaderHash).Hash + 8);
  *(undefined8 *)(this->ShaderHash).Hash = *(undefined8 *)(param_1->ShaderHash).Hash;
  *(undefined8 *)((this->ShaderHash).Hash + 8) = uVar1;
  *(undefined4 *)((this->ShaderHash).Hash + 0x10) =
       *(undefined4 *)((param_1->ShaderHash).Hash + 0x10);
  this->DeprecatedMaxPayloadSizeInBytes = param_1->DeprecatedMaxPayloadSizeInBytes;
  this->Frequency = param_1->Frequency;
  (this->ShaderBindingLayout).Hash = (param_1->ShaderBindingLayout).Hash;
  (this->ShaderBindingLayout).Flags = (param_1->ShaderBindingLayout).Flags;
  (this->ShaderBindingLayout).NumUniformBufferEntries =
       (param_1->ShaderBindingLayout).NumUniformBufferEntries;
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::operator=
            (&(this->ShaderBindingLayout).UniformBufferEntries,
             &(param_1->ShaderBindingLayout).UniformBufferEntries);
  return this;
}

// AddToReadableString @ 145c4edb0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::AddToReadableString
          (FPipelineFileCacheRayTracingDesc *this,TStringBuilderWithBuffer<wchar_t,1024> *param_1)

{
  EShaderFrequency EVar1;
  wchar_t *pwVar2;
  int iVar3;
  FString local_18;
  
  EVar1 = this->Frequency;
  if (EVar1 == SF_NumStandardFrequencies) {
    pwVar2 = L" RGS:";
LAB_145c4ee0a:
    iVar3 = 5;
  }
  else {
    if (EVar1 == SF_RayMiss) {
      pwVar2 = L" RMS:";
      goto LAB_145c4ee0a;
    }
    if (EVar1 != SF_RayHitGroup) {
      if (EVar1 != SF_RayCallable) goto LAB_145c4ee18;
      pwVar2 = L" RCS:";
      goto LAB_145c4ee0a;
    }
    iVar3 = 6;
    pwVar2 = L" RHGS:";
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,pwVar2,iVar3);
LAB_145c4ee18:
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  BytesToHex((uchar *)this,0x14,&local_18);
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,
             iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" AHGI ",6)
  ;
  return;
}

// FromString @ 145c58bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::FromString
          (FPipelineFileCacheRayTracingDesc *this,FString *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  FRHIUniformBufferShaderBindingLayout *pFVar4;
  ulonglong *puVar5;
  FScriptContainerElement *pFVar6;
  FRHIUniformBufferShaderBindingLayout *pFVar7;
  int iVar8;
  code *pcVar9;
  EShaderBindingLayoutFlags EVar10;
  bool bVar11;
  int iVar12;
  FString *this_00;
  FRHIShaderBindingLayout *pFVar13;
  longlong lVar14;
  FRHIUniformBufferShaderBindingLayout_u_16 *pFVar15;
  ulonglong *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auStackY_288 [32];
  uint local_258 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_250;
  uint local_240 [2];
  ForAnyElementType local_238;
  int local_230 [4];
  longlong local_220;
  longlong local_218;
  FPipelineFileCacheRayTracingDesc *local_210;
  wchar_t *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  TStringView<wchar_t> local_1f8;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  TStringView<wchar_t> local_1c8;
  TStringView<wchar_t> local_1b8;
  TStringView<wchar_t> local_1a8;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  FRHIUniformBufferShaderBindingLayout *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  FString local_148;
  TStringView<wchar_t> local_138;
  TArrayView<FRHIUniformBufferShaderBindingLayout_const_,int> local_128;
  FRHIShaderBindingLayout local_118;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_288;
  uVar17 = 0;
  local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.ArrayNum = 0;
  local_250.ArrayMax = 0;
  local_210 = this;
  this_00 = ::FString::TrimStartAndEnd(param_1,&local_148);
  ::FString::ParseIntoArray(this_00,&local_250,L",",true);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_250.ArrayNum == 0x36) {
    local_208 = *(wchar_t **)local_250.AllocatorInstance.Data;
    iVar12 = 0;
    iStack_200 = *(int *)(local_250.AllocatorInstance.Data + 8) + -1;
    if (*(int *)(local_250.AllocatorInstance.Data + 8) == 0) {
      iStack_200 = iVar12;
    }
    if ((iStack_200 != 0x28) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Src.Len() == GetStringLen()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\SecureHash.h"
                            ,0x109,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_138._12_4_ = uStack_1fc;
    local_138.Size = iStack_200;
    local_138.DataPtr = local_208;
    UE::String::HexToBytes(&local_138,(uchar *)this);
    if ((local_250.ArrayNum < 2) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_1f8.DataPtr = *(wchar_t **)(local_250.AllocatorInstance.Data + 0x10);
    local_1f8.Size = *(int *)(local_250.AllocatorInstance.Data + 0x18) + -1;
    if (*(int *)(local_250.AllocatorInstance.Data + 0x18) == 0) {
      local_1f8.Size = iVar12;
    }
    ::LexFromString(&this->DeprecatedMaxPayloadSizeInBytes,&local_1f8);
    local_258[0] = 0;
    if ((local_250.ArrayNum < 3) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_1e8.DataPtr = *(wchar_t **)(local_250.AllocatorInstance.Data + 0x20);
    local_1e8.Size = *(int *)(local_250.AllocatorInstance.Data + 0x28) + -1;
    if (*(int *)(local_250.AllocatorInstance.Data + 0x28) == 0) {
      local_1e8.Size = iVar12;
    }
    ::LexFromString(local_258,&local_1e8);
    this->Frequency = (EShaderBindingLayoutFlags)local_258[0];
    if ((local_250.ArrayNum < 4) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_1d8.DataPtr = *(wchar_t **)(local_250.AllocatorInstance.Data + 0x30);
    local_1d8.Size = *(int *)(local_250.AllocatorInstance.Data + 0x38) + -1;
    if (*(int *)(local_250.AllocatorInstance.Data + 0x38) == 0) {
      local_1d8.Size = iVar12;
    }
    ::LexFromString((uint *)(local_230 + 2),&local_1d8);
    if ((local_250.ArrayNum < 5) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_1c8.DataPtr = *(wchar_t **)(local_250.AllocatorInstance.Data + 0x40);
    local_1c8.Size = *(int *)(local_250.AllocatorInstance.Data + 0x48) + -1;
    if (*(int *)(local_250.AllocatorInstance.Data + 0x48) == 0) {
      local_1c8.Size = 0;
    }
    ::LexFromString(local_258,&local_1c8);
    EVar10 = (EShaderBindingLayoutFlags)local_258[0];
    if ((local_250.ArrayNum < 6) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_1b8.DataPtr = *(wchar_t **)(local_250.AllocatorInstance.Data + 0x50);
    local_1b8.Size = *(int *)(local_250.AllocatorInstance.Data + 0x58) + -1;
    if (*(int *)(local_250.AllocatorInstance.Data + 0x58) == 0) {
      local_1b8.Size = iVar12;
    }
    ::LexFromString(local_240,&local_1b8);
    uVar18 = local_240[0];
    local_238.Data = (FScriptContainerElement *)0x0;
    uVar20 = 6;
    local_230[0] = 0;
    lVar21 = 8;
    local_230[1] = 0;
    if ((int)local_240[0] < 1) {
      if ((int)local_240[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_240[0]);
      }
    }
    else {
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x18,8,local_240[0],&local_238,local_230,local_230 + 1);
      DefaultConstructItems<FRHIUniformBufferShaderBindingLayout,int>
                (local_238.Data + (longlong)iVar12 * 0x18,uVar18);
    }
    if (local_240[0] != 0) {
      do {
        uVar18 = 0;
        if ((int)uVar17 < local_230[0]) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar6 = local_238.Data + (longlong)(int)uVar17 * 0x18;
        uVar18 = 0;
        if ((int)uVar20 < local_250.ArrayNum) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar18 = uVar20 + 1;
        iVar8 = *(int *)(local_250.AllocatorInstance.Data + (longlong)(int)uVar20 * 0x10 + 8);
        iVar12 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar12 = 0;
        }
        ::FString::AssignRange
                  ((FString *)pFVar6,
                   *(wchar_t **)(local_250.AllocatorInstance.Data + (longlong)(int)uVar20 * 0x10),
                   iVar12);
        uVar19 = 0;
        if ((int)uVar18 < local_250.ArrayNum) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar19 = uVar20 + 2;
        local_1a8.DataPtr =
             *(wchar_t **)(local_250.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10);
        iVar12 = *(int *)(local_250.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10 + 8);
        local_1a8.Size = iVar12 + -1;
        if (iVar12 == 0) {
          local_1a8.Size = 0;
        }
        ::LexFromString(local_258,&local_1a8);
        *(uint *)(pFVar6 + 0x10) = *(uint *)(pFVar6 + 0x10) & 0xfffffff0 | local_258[0] & 0xf;
        uVar18 = 0;
        if ((int)uVar19 < local_250.ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar18 = uVar20 + 3;
        local_198.DataPtr =
             *(wchar_t **)(local_250.AllocatorInstance.Data + (longlong)(int)uVar19 * 0x10);
        iVar12 = *(int *)(local_250.AllocatorInstance.Data + (longlong)(int)uVar19 * 0x10 + 8);
        local_198.Size = iVar12 + -1;
        if (iVar12 == 0) {
          local_198.Size = 0;
        }
        ::LexFromString(local_258,&local_198);
        *(uint *)(pFVar6 + 0x10) =
             (local_258[0] & 0x3f) << 4 | *(uint *)(pFVar6 + 0x10) & 0xfffffc0f;
        uVar19 = 0;
        if ((int)uVar18 < local_250.ArrayNum) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar19 = uVar20 + 4;
        local_188.DataPtr =
             *(wchar_t **)(local_250.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10);
        iVar12 = *(int *)(local_250.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10 + 8);
        local_188.Size = iVar12 + -1;
        if (iVar12 == 0) {
          local_188.Size = 0;
        }
        ::LexFromString(local_258,&local_188);
        *(uint *)(pFVar6 + 0x10) =
             (local_258[0] & 0xff) << 10 | *(uint *)(pFVar6 + 0x10) & 0xfffc03ff;
        uVar18 = 0;
        if ((int)uVar19 < local_250.ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar18 = uVar20 + 5;
        local_178.DataPtr =
             *(wchar_t **)(local_250.AllocatorInstance.Data + (longlong)(int)uVar19 * 0x10);
        iVar12 = *(int *)(local_250.AllocatorInstance.Data + (longlong)(int)uVar19 * 0x10 + 8);
        local_178.Size = iVar12 + -1;
        if (iVar12 == 0) {
          local_178.Size = 0;
        }
        ::LexFromString(local_258,&local_178);
        *(uint *)(pFVar6 + 0x10) =
             (local_258[0] & 0xff) << 0x12 | *(uint *)(pFVar6 + 0x10) & 0xfc03ffff;
        uVar19 = 0;
        if ((int)uVar18 < local_250.ArrayNum) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar20 = uVar20 + 6;
        local_168.DataPtr =
             *(wchar_t **)(local_250.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10);
        iVar12 = *(int *)(local_250.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10 + 8);
        local_168.Size = iVar12 + -1;
        if (iVar12 == 0) {
          local_168.Size = 0;
        }
        ::LexFromString(local_258,&local_168);
        uVar17 = uVar17 + 1;
        *(uint *)(pFVar6 + 0x10) = *(uint *)(pFVar6 + 0x10) & 0x3ffffff | local_258[0] << 0x1a;
      } while (uVar17 < local_240[0]);
    }
    iVar12 = local_230[0];
    local_158 = (FRHIUniformBufferShaderBindingLayout *)local_238.Data;
    if ((local_230[0] < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_128._12_4_ = uStack_14c;
    local_128.ArrayNum = iVar12;
    local_128.DataPtr = local_158;
    iStack_150 = iVar12;
    pFVar13 = FRHIShaderBindingLayout::FRHIShaderBindingLayout(&local_118,EVar10,&local_128);
    local_220 = 8;
    pFVar15 = &(pFVar13->UniformBufferEntries).Elements[0].field1_0x10;
    (this->ShaderBindingLayout).Hash = pFVar13->Hash;
    (this->ShaderBindingLayout).Flags = pFVar13->Flags;
    (this->ShaderBindingLayout).NumUniformBufferEntries = pFVar13->NumUniformBufferEntries;
    lVar14 = (longlong)this + (0x20 - (longlong)pFVar13);
    lVar1 = lVar14 + -8;
    lVar2 = lVar14 + -4;
    lVar3 = lVar14 + -0x10;
    local_218 = lVar14;
    do {
      pFVar4 = (FRHIUniformBufferShaderBindingLayout *)(pFVar15 + -4);
      pFVar7 = (FRHIUniformBufferShaderBindingLayout *)(lVar3 + (longlong)pFVar15);
      if (pFVar7 != pFVar4) {
        pFVar6 = (pFVar7->LayoutName).Data.AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
          lVar14 = local_218;
        }
        (pFVar7->LayoutName).Data.AllocatorInstance.Data =
             (pFVar4->LayoutName).Data.AllocatorInstance.Data;
        (pFVar4->LayoutName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(uint *)(lVar1 + (longlong)pFVar15) = *(uint *)(pFVar15 + -2);
        *(uint *)((longlong)pFVar15 + lVar2) = *(uint *)(pFVar15 + -1);
        *(undefined8 *)(pFVar15 + -2) = 0;
      }
      uVar17 = (*(uint *)(lVar14 + (longlong)pFVar15) ^ pFVar15->Flags) & 0xf ^
               *(uint *)(lVar14 + (longlong)pFVar15);
      *(uint *)(lVar14 + (longlong)pFVar15) = uVar17;
      uVar17 = (uVar17 ^ pFVar15->Flags) & 0x3f0 ^ uVar17;
      *(uint *)(lVar14 + (longlong)pFVar15) = uVar17;
      uVar17 = (uVar17 ^ pFVar15->Flags) & 0x3fc00 ^ uVar17;
      *(uint *)(lVar14 + (longlong)pFVar15) = uVar17;
      uVar17 = (uVar17 ^ pFVar15->Flags) & 0x3fc0000 ^ uVar17;
      *(uint *)(lVar14 + (longlong)pFVar15) = uVar17;
      *(uint *)(lVar14 + (longlong)pFVar15) = (uVar17 ^ pFVar15->Flags) & 0x3ffffff ^ pFVar15->Flags
      ;
      ((FRHIUniformBufferShaderBindingLayout_u_16 *)(lVar14 + (longlong)pFVar15))->Flags =
           *(uint *)pFVar15;
      pFVar15 = pFVar15 + 6;
      local_220 = local_220 + -1;
    } while (local_220 != 0);
    puVar16 = local_48;
    local_220 = 0;
    do {
      puVar5 = puVar16 + -3;
      puVar16 = puVar16 + -3;
      lVar21 = lVar21 + -1;
      if ((void *)*puVar5 != (void *)0x0) {
        FMemory::Free((void *)*puVar5);
      }
    } while (lVar21 != 0);
    if (((local_210->ShaderBindingLayout).Hash != local_230[2]) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ShaderBindingLayout.GetHash() == ShaderBiningLayoutHash",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                            ,0x118f,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    DestructItems<FRHIUniformBufferShaderBindingLayout,int>
              ((FRHIUniformBufferShaderBindingLayout *)local_238.Data,local_230[0]);
    if ((FRHIUniformBufferShaderBindingLayout *)local_238.Data !=
        (FRHIUniformBufferShaderBindingLayout *)0x0) {
      FMemory::Free(local_238.Data);
    }
  }
  DestructItems<FString,int>((FString *)local_250.AllocatorInstance.Data,local_250.ArrayNum);
  if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.AllocatorInstance.Data);
  }
  return;
}

// HeaderLine @ 145c5d110

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FString * __thiscall
FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::HeaderLine
          (FPipelineFileCacheRayTracingDesc *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FString local_38;
  
  ::FString::FString(__return_storage_ptr__,
                     L"RayTracingShader,DeprecatedMaxPayloadSizeInBytes,Frequency,ShaderBindingLayout-Hash,ShaderBindingLayout-Flags,ShaderBindingLayout-NumUBEntries"
                    );
  iVar1 = 0;
  do {
    ::FString::PrintfImpl(&local_38,L",%s%d,%s%d,%s%d,%s%d,%s%d,%s%d");
    iVar2 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar2);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return __return_storage_ptr__;
}

// ToString @ 145c7be90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FString * __thiscall
FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::ToString
          (FPipelineFileCacheRayTracingDesc *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  int iVar5;
  longlong lVar6;
  FString local_98;
  FString local_88;
  undefined4 local_78;
  FString local_70;
  undefined4 local_60;
  FString local_58;
  undefined4 local_48;
  
  bVar2 = false;
  bVar1 = false;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  BytesToHex((uchar *)this,0x14,&local_98);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s,%d,%d,%d,%d,%d");
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  uVar3 = 0;
  lVar6 = 0;
  do {
    if (uVar3 < (this->ShaderBindingLayout).NumUniformBufferEntries) {
      bVar2 = true;
      ::FString::FString(&local_58,
                         (FString *)
                         ((longlong)
                          &(this->ShaderBindingLayout).UniformBufferEntries.Elements[0].LayoutName.
                           Data.AllocatorInstance.Data + lVar6));
      local_48 = *(undefined4 *)((longlong)(&this->ShaderHash + 3) + lVar6 + 4);
      pFVar4 = &local_58;
    }
    else {
      bVar1 = true;
      local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.Data.ArrayNum = 0;
      local_70.Data.ArrayMax = 0;
      pFVar4 = &local_70;
      local_60 = 0;
    }
    ::FString::FString(&local_88,pFVar4);
    local_78 = *(undefined4 *)&pFVar4[1].Data.AllocatorInstance.Data;
    if ((bVar1) &&
       (bVar1 = false, local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if ((bVar2) &&
       (bVar2 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_98,L",%s,%d,%d,%d,%d,%d");
    iVar5 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar5);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    uVar3 = uVar3 + 1;
    lVar6 = lVar6 + 0x18;
  } while (uVar3 < 8);
  return __return_storage_ptr__;
}

