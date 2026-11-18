// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 35

// GetStructMetadata @ 148e04ec0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl FNiagaraMeshCommonParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraMeshCommonParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraMeshCommonParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraMeshCommonParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FNiagaraMeshCommonParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraMeshCommonParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FNiagaraMeshCommonParameters",L"FNiagaraMeshCommonParameters",(wchar_t *)0x0,
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraVertexFactories\\Public\\NiagaraMeshVertexFactory.h"
                 ,0x1b,0x150,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraMeshCommonParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraMeshCommonParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraMeshCommonParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraMeshCommonParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e05010

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraRibbonAggregationApplyParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonAggregationApplyParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonAggregationApplyParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonAggregationApplyParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FNiagaraRibbonAggregationApplyParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonAggregationApplyParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FNiagaraRibbonAggregationApplyParameters",
                 L"FNiagaraRibbonAggregationApplyParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraRibbonCompute.h"
                 ,0x135,0xd0,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraRibbonAggregationApplyParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonAggregationApplyParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonAggregationApplyParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonAggregationApplyParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e05160

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraRibbonAggregationStepParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonAggregationStepParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonAggregationStepParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonAggregationStepParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FNiagaraRibbonAggregationStepParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonAggregationStepParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FNiagaraRibbonAggregationStepParameters",
                 L"FNiagaraRibbonAggregationStepParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraRibbonCompute.h"
                 ,0x122,0xc0,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraRibbonAggregationStepParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonAggregationStepParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonAggregationStepParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonAggregationStepParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e052b0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraRibbonGenerateIndices::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonGenerateIndices::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonGenerateIndices::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonGenerateIndices::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FNiagaraRibbonGenerateIndices::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonGenerateIndices::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FNiagaraRibbonGenerateIndices",L"FNiagaraRibbonGenerateIndices",(wchar_t *)0x0,
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraRibbonCompute.h"
                 ,0xfb,0x70,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraRibbonGenerateIndices::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonGenerateIndices::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonGenerateIndices::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonGenerateIndices::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e05400

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraRibbonInitializeIndices::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonInitializeIndices::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonInitializeIndices::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonInitializeIndices::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FNiagaraRibbonInitializeIndices::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonInitializeIndices::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FNiagaraRibbonInitializeIndices",L"FNiagaraRibbonInitializeIndices",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraRibbonCompute.h"
                 ,0xd3,0x70,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraRibbonInitializeIndices::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonInitializeIndices::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonInitializeIndices::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonInitializeIndices::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e05550

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraRibbonUVSettingsParams::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonUVSettingsParams::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonUVSettingsParams::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonUVSettingsParams::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FNiagaraRibbonUVSettingsParams::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonUVSettingsParams::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FNiagaraRibbonUVSettingsParams",L"FNiagaraRibbonUVSettingsParams",(wchar_t *)0x0,
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraRibbonCompute.h"
                 ,0xb1,0x30,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraRibbonUVSettingsParams::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonUVSettingsParams::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonUVSettingsParams::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonUVSettingsParams::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e056a0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraRibbonVertexFinalizationParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexFinalizationParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexFinalizationParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexFinalizationParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FNiagaraRibbonVertexFinalizationParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexFinalizationParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FNiagaraRibbonVertexFinalizationParameters",
                 L"FNiagaraRibbonVertexFinalizationParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraRibbonCompute.h"
                 ,0xbc,0x130,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraRibbonVertexFinalizationParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexFinalizationParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexFinalizationParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexFinalizationParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e057f0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraRibbonVertexReductionFinalizationParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexReductionFinalizationParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexReductionFinalizationParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexReductionFinalizationParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FNiagaraRibbonVertexReductionFinalizationParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexReductionFinalizationParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FNiagaraRibbonVertexReductionFinalizationParameters",
                 L"FNiagaraRibbonVertexReductionFinalizationParameters",(wchar_t *)0x0,
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraRibbonCompute.h"
                 ,0x98,0xf0,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraRibbonVertexReductionFinalizationParameters::FTypeInfo::GetStructMetadata'::
             __l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexReductionFinalizationParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexReductionFinalizationParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexReductionFinalizationParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e05940

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraRibbonVertexReductionParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexReductionParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexReductionParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexReductionParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FNiagaraRibbonVertexReductionParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexReductionParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FNiagaraRibbonVertexReductionParameters",
                 L"FNiagaraRibbonVertexReductionParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraRibbonCompute.h"
                 ,0x7d,0x100,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraRibbonVertexReductionParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexReductionParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexReductionParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRibbonVertexReductionParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e05a90

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraBlendSVTsToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraBlendSVTsToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraBlendSVTsToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraBlendSVTsToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraBlendSVTsToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraSVTShaders.h"
                 ,0x23,0xb0,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraBlendSVTsToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraBlendSVTsToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraBlendSVTsToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraBlendSVTsToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e05be0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraClearAsyncGpuTraceCS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearAsyncGpuTraceCS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearAsyncGpuTraceCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearAsyncGpuTraceCS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearAsyncGpuTraceCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraAsyncGpuTraceProvider.cpp"
                 ,0x22,0x10,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraClearAsyncGpuTraceCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearAsyncGpuTraceCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearAsyncGpuTraceCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearAsyncGpuTraceCS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e05d30

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraClearCountsIntCS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsIntCS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsIntCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsIntCS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsIntCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraClearCounts.cpp"
                 ,0x1b,0x20,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraClearCountsIntCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsIntCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsIntCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsIntCS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e05e80

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraClearCountsIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraClearCounts.cpp"
                 ,0x7a,0x20,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraClearCountsIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e05fd0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraClearCountsUIntCS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsUIntCS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsUIntCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsUIntCS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsUIntCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraClearCounts.cpp"
                 ,0x30,0x20,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraClearCountsUIntCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsUIntCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsUIntCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsUIntCS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e06120

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraClearCountsUIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsUIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsUIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsUIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsUIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraClearCounts.cpp"
                 ,0x8f,0x20,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraClearCountsUIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsUIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsUIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearCountsUIntCS_Legacy::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e06270

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraClearUAVCS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearUAVCS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearUAVCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearUAVCS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearUAVCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraDebugShaders.cpp"
                 ,0x62,0x20,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraClearUAVCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearUAVCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearUAVCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraClearUAVCS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e063c0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraCollisionRayTrace::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraCollisionRayTrace::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraCollisionRayTrace::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraCollisionRayTrace::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraCollisionRayTrace::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraAsyncGpuTraceProviderHwrt.cpp"
                 ,0x42,0x70,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraCollisionRayTrace::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraCollisionRayTrace::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraCollisionRayTrace::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraCollisionRayTrace::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e06510

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraCopySVTToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraCopySVTToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraCopySVTToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraCopySVTToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraCopySVTToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraSVTShaders.h"
                 ,0xf,0x50,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraCopySVTToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraCopySVTToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraCopySVTToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraCopySVTToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e06660

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraDebugDrawLinePS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraDebugDrawLinePS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraDebugDrawLinePS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraDebugDrawLinePS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraDebugDrawLinePS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraDebugShaders.cpp"
                 ,0x93,0x140,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraDebugDrawLinePS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraDebugDrawLinePS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraDebugDrawLinePS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraDebugDrawLinePS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e067b0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraDebugDrawLineVS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraDebugDrawLineVS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraDebugDrawLineVS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraDebugDrawLineVS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraDebugDrawLineVS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraDebugShaders.cpp"
                 ,0x7d,0x20,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraDebugDrawLineVS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraDebugDrawLineVS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraDebugDrawLineVS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraDebugDrawLineVS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e06900

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraGenerateMipsCS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraGenerateMipsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraGenerateMipsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraGenerateMipsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraGenerateMipsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraGenerateMips.cpp"
                 ,0x17,0x40,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraGenerateMipsCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraGenerateMipsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraGenerateMipsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraGenerateMipsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e06a50

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraInitFreeIDBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraInitFreeIDBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraInitFreeIDBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraInitFreeIDBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraInitFreeIDBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShaderParticleID.cpp"
                 ,0x1f,0x20,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraInitFreeIDBufferCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraInitFreeIDBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraInitFreeIDBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraInitFreeIDBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e06ba0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraLWCTileShiftPositionsCS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraLWCTileShiftPositionsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraLWCTileShiftPositionsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraLWCTileShiftPositionsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraLWCTileShiftPositionsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Internal\\NiagaraLWCTileShiftPositions.h"
                 ,0x13,0x50,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraLWCTileShiftPositionsCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraLWCTileShiftPositionsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraLWCTileShiftPositionsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraLWCTileShiftPositionsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e06cf0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraRayMarchGlobalSdfCS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRayMarchGlobalSdfCS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRayMarchGlobalSdfCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRayMarchGlobalSdfCS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRayMarchGlobalSdfCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraAsyncGpuTraceProviderGsdf.cpp"
                 ,0x3d,0x250,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraRayMarchGlobalSdfCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRayMarchGlobalSdfCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRayMarchGlobalSdfCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraRayMarchGlobalSdfCS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e06e40

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraSimpleElement2DArrayAttribute::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElement2DArrayAttribute::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElement2DArrayAttribute::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElement2DArrayAttribute::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElement2DArrayAttribute::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraBatchedElements.cpp"
                 ,0x1f,0x70,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraSimpleElement2DArrayAttribute::FParameters::FTypeInfo::GetStructMetadata'::
             __l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElement2DArrayAttribute::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElement2DArrayAttribute::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElement2DArrayAttribute::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e06f90

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraSimpleElementPS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElementPS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElementPS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElementPS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElementPS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraBatchedElements.cpp"
                 ,0xb1,0x60,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraSimpleElementPS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElementPS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElementPS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElementPS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e070e0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraSimpleElementVolumeAttribute::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElementVolumeAttribute::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElementVolumeAttribute::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElementVolumeAttribute::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElementVolumeAttribute::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraBatchedElements.cpp"
                 ,99,0xc0,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraSimpleElementVolumeAttribute::FParameters::FTypeInfo::GetStructMetadata'::__l2
             ::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElementVolumeAttribute::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElementVolumeAttribute::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraSimpleElementVolumeAttribute::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e07230

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraUpdateCollisionGroupMapCS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraUpdateCollisionGroupMapCS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraUpdateCollisionGroupMapCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraUpdateCollisionGroupMapCS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraUpdateCollisionGroupMapCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraAsyncGpuTraceProvider.cpp"
                 ,0x34,0x30,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraUpdateCollisionGroupMapCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraUpdateCollisionGroupMapCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraUpdateCollisionGroupMapCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraUpdateCollisionGroupMapCS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e07380

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraDebugShaders.cpp"
                 ,0x3b,0x1a0,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraVisualizeTexturePS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e074d0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Internal\\Stateless\\NiagaraStatelessEmitterShaders.h"
                 ,0x19,0x640,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::
             GetStructMetadata'::__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraStateless::FSimulationShaderDefaultCS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e07620

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
NiagaraComputeFreeIDsCS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraComputeFreeIDsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraComputeFreeIDsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraComputeFreeIDsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraComputeFreeIDsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShaderParticleID.cpp"
                 ,0x62,0x20,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`NiagaraComputeFreeIDsCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraComputeFreeIDsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraComputeFreeIDsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraComputeFreeIDsCS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e07770

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
NiagaraFillIntBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraFillIntBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraFillIntBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraFillIntBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraFillIntBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
                 L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShaderParticleID.cpp"
                 ,0x92,0x10,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`NiagaraFillIntBufferCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraFillIntBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraFillIntBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraFillIntBufferCS::FParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e078c0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FRibbonComputeUniformParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRibbonComputeUniformParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRibbonComputeUniformParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRibbonComputeUniformParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FRibbonComputeUniformParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRibbonComputeUniformParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FRibbonComputeUniformParameters",L"FRibbonComputeUniformParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraRibbonCompute.h"
                 ,0xd,0xa0,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FRibbonComputeUniformParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRibbonComputeUniformParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRibbonComputeUniformParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRibbonComputeUniformParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e07a10

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl FRibbonOrderSortParameters::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRibbonOrderSortParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRibbonOrderSortParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRibbonOrderSortParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FRibbonOrderSortParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRibbonOrderSortParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FRibbonOrderSortParameters",L"FRibbonOrderSortParameters",(wchar_t *)0x0,
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraRibbonCompute.h"
                 ,0x55,0xc0,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FRibbonOrderSortParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRibbonOrderSortParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRibbonOrderSortParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRibbonOrderSortParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 148e07b60

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
FNiagaraGPUSceneUtils::FUpdateMeshParticleInstancesParams::FTypeInfo::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraGPUSceneUtils::FUpdateMeshParticleInstancesParams::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraGPUSceneUtils::FUpdateMeshParticleInstancesParams::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraGPUSceneUtils::FUpdateMeshParticleInstancesParams::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FUpdateMeshParticleInstancesParams::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraGPUSceneUtils::FUpdateMeshParticleInstancesParams::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FUpdateMeshParticleInstancesParams",L"FUpdateMeshParticleInstancesParams",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraGPUSceneUtils.h"
                 ,0x10,0x240,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`FNiagaraGPUSceneUtils::FUpdateMeshParticleInstancesParams::FTypeInfo::
             GetStructMetadata'::__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraGPUSceneUtils::FUpdateMeshParticleInstancesParams::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraGPUSceneUtils::FUpdateMeshParticleInstancesParams::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraGPUSceneUtils::FUpdateMeshParticleInstancesParams::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

