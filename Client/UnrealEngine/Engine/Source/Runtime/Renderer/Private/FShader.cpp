// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// GetRayTracingPayloadType @ 14475efb0

ERayTracingPayloadType __cdecl FShader::GetRayTracingPayloadType(int param_1)

{
  return None;
}

// GetShaderBindingLayout @ 14475fc20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderBindingLayout * __cdecl
FShader::GetShaderBindingLayout(FShaderPermutationParameters *param_1)

{
  return (FShaderBindingLayout *)0x0;
}

// GetType @ 144777910

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderType * __thiscall FShader::GetType(FShader *this,FShaderMapPointerTable *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FShaderType *pFVar4;
  uint uVar5;
  
  if ((*(byte *)&(this->Type).field0_0x0 & 1) == 0) {
    return (this->Type).field0_0x0.Ptr;
  }
  uVar5 = (uint)((this->Type).field0_0x0.PackedIndex >> 1);
  uVar3 = 0;
  if ((int)uVar5 < *(int *)&(param_1->ShaderTypes).field_0x28) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FShaderType *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FShaderType **)
          (*(longlong *)&(param_1->ShaderTypes).field_0x20 + (longlong)(int)uVar5 * 8);
}

// GetUniformBufferParameter @ 14481b680

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderUniformBufferParameter * __thiscall
FShader::GetUniformBufferParameter(FShader *this,FHashedName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FShaderUniformBufferParameter *pFVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  longlong lVar8;
  
  FVar6 = (this->UniformBufferParameterStructs).AllocatorInstance;
  if (((ulonglong)FVar6 & 1) != 0) {
    FVar6 = (ForAnyElementType)
            ((longlong)&(this->UniformBufferParameterStructs).AllocatorInstance.field_0x0 +
            ((longlong)FVar6 >> 0x18));
  }
  iVar1 = (this->UniformBufferParameterStructs).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FShaderUniformBufferParameter *)(*pcVar2)();
    return pFVar5;
  }
  uVar7 = 0;
  if (0 < iVar1) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < iVar1) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FShaderUniformBufferParameter *)(*pcVar2)();
        return pFVar5;
      }
      if (*(longlong *)((longlong)FVar6 + lVar8 * 8) == *(longlong *)param_1.Hash) {
        if (uVar7 != 0xffffffff) {
          uVar4 = 0;
          if ((int)uVar7 < (this->UniformBufferParameters).ArrayNum) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FShaderUniformBufferParameter *)(*pcVar2)();
            return pFVar5;
          }
          FVar6 = (this->UniformBufferParameters).AllocatorInstance;
          if (((ulonglong)FVar6 & 1) != 0) {
            FVar6 = (ForAnyElementType)
                    ((longlong)&(this->UniformBufferParameters).AllocatorInstance.field_0x0 +
                    ((longlong)FVar6 >> 0x18));
          }
          return (FShaderUniformBufferParameter *)((longlong)FVar6 + (longlong)(int)uVar7 * 2);
        }
        break;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_FShaderUniformBufferParameter_const&___ptr64___cdecl_FShader::GetUniformBufferParameter(FHashedName)const___ptr64'
       ::__l12::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_FShaderUniformBufferParameter_const&___ptr64___cdecl_FShader::GetUniformBufferParameter(FHashedName)const___ptr64'
                           ::__l12::_thread_safe_static_guard_0__),
     `public:_class_FShaderUniformBufferParameter_const&___ptr64___cdecl_FShader::GetUniformBufferParameter(FHashedName)const___ptr64'
     ::__l12::_thread_safe_static_guard_0__ == -1)) {
    `public:_class_FShaderUniformBufferParameter_const&___ptr64___cdecl_FShader::GetUniformBufferParameter(FHashedName)const___ptr64'
    ::__l12::UnboundParameter.BaseIndex = 0xffff;
    _Init_thread_footer(&`public:_class_FShaderUniformBufferParameter_const&___ptr64___cdecl_FShader::GetUniformBufferParameter(FHashedName)const___ptr64'
                         ::__l12::_thread_safe_static_guard_0__);
  }
  return &`public:_class_FShaderUniformBufferParameter_const&___ptr64___cdecl_FShader::GetUniformBufferParameter(FHashedName)const___ptr64'
          ::__l12::UnboundParameter;
}

// GetUniformBufferParameter<FPrimitiveUniformShaderParameters> @ 14556fc30

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TShaderUniformBufferParameter<FPrimitiveUniformShaderParameters> * __thiscall
FShader::GetUniformBufferParameter<FPrimitiveUniformShaderParameters>(FShader *this)

{
  FShaderParametersMetadata *pFVar1;
  FHashedName FVar2;
  TShaderUniformBufferParameter<FPrimitiveUniformShaderParameters> *pTVar3;
  FHashedName local_res10;
  FHashedName local_res18 [2];
  
  pFVar1 = FPrimitiveUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_res10,&pFVar1->ShaderVariableHashedName);
  FVar2.Hash = (ulong64)FHashedName::FHashedName(local_res18,&local_res10);
  pTVar3 = (TShaderUniformBufferParameter<FPrimitiveUniformShaderParameters> *)
           GetUniformBufferParameter(this,FVar2);
  return pTVar3;
}

