// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 4

// GetStructMetadata @ 14e99dbe0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
TShaderParameterStructTypeInfo<NDIPhysicsFieldLocal::FShaderGlobalParameters>::GetStructMetadata
          (void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIPhysicsFieldLocal::FShaderGlobalParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIPhysicsFieldLocal::FShaderGlobalParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIPhysicsFieldLocal::FShaderGlobalParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = NDIPhysicsFieldLocal::FShaderGlobalParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIPhysicsFieldLocal::FShaderGlobalParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FShaderGlobalParameters",L"FShaderGlobalParameters",(wchar_t *)0x0,(wchar_t *)0x0
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfacePhysicsField.cpp"
                 ,0x21,0x20,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`NDIPhysicsFieldLocal::FShaderGlobalParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIPhysicsFieldLocal::FShaderGlobalParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIPhysicsFieldLocal::FShaderGlobalParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIPhysicsFieldLocal::FShaderGlobalParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 14e99dd30

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
TShaderParameterStructTypeInfo<NDIPhysicsFieldLocal::FShaderInstanceParameters>::GetStructMetadata
          (void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIPhysicsFieldLocal::FShaderInstanceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIPhysicsFieldLocal::FShaderInstanceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIPhysicsFieldLocal::FShaderInstanceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = NDIPhysicsFieldLocal::FShaderInstanceParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIPhysicsFieldLocal::FShaderInstanceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FShaderInstanceParameters",L"FShaderInstanceParameters",(wchar_t *)0x0,
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfacePhysicsField.cpp"
                 ,0x28,0x440,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`NDIPhysicsFieldLocal::FShaderInstanceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIPhysicsFieldLocal::FShaderInstanceParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIPhysicsFieldLocal::FShaderInstanceParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIPhysicsFieldLocal::FShaderInstanceParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 14e99de80

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
TShaderParameterStructTypeInfo<NDIChaosDestructionLocal::FShaderParameters>::GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIChaosDestructionLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIChaosDestructionLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIChaosDestructionLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = NDIChaosDestructionLocal::FShaderParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIChaosDestructionLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FShaderParameters",
                 L"FShaderParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceChaosDestruction.cpp"
                 ,0x3c,0xd0,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`NDIChaosDestructionLocal::FShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIChaosDestructionLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIChaosDestructionLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NDIChaosDestructionLocal::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetStructMetadata @ 14e99dfd0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
TShaderParameterStructTypeInfo<UNiagaraDataInterfaceGeometryCollection::FShaderParameters>::
GetStructMetadata(void)

{
  code *pcVar1;
  undefined1 local_res8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceGeometryCollection::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceGeometryCollection::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceGeometryCollection::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = UNiagaraDataInterfaceGeometryCollection::FShaderParameters::zzAppendMemberGetPrev;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(local_res8,&local_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceGeometryCollection::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FShaderParameters",
                 L"FShaderParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Public\\NiagaraDataInterfaceGeometryCollection.h"
                 ,0xbd,0x80,&local_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      atexit(`UNiagaraDataInterfaceGeometryCollection::FShaderParameters::FTypeInfo::
             GetStructMetadata'::__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceGeometryCollection::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceGeometryCollection::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UNiagaraDataInterfaceGeometryCollection::FShaderParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

