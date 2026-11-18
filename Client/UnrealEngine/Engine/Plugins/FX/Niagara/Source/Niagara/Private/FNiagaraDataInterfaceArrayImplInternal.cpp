// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// GetCountBufferRHIAccess @ 149104610

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ERHIAccess __cdecl
FNiagaraDataInterfaceArrayImplInternal::GetCountBufferRHIAccess
          (FNiagaraGpuComputeDispatchInterface *param_1)

{
  ERHIAccess EVar1;
  
  EVar1 = UAVCompute;
  if (*(char *)((longlong)&param_1[1]._padding_ + 1) != '\0') {
    EVar1 = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
  }
  return EVar1;
}

// IsRWFunction @ 149117980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FNiagaraDataInterfaceArrayImplInternal::IsRWFunction(FName param_1)

{
  uint uVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  undefined1 auStack_88 [32];
  initializer_list<FName> local_68;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  FName local_28;
  FName local_20;
  FName local_18 [2];
  
  local_18[0] = (FName)(__security_cookie.value ^ (ulonglong)auStack_88);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_58 = Function_ClearName;
    local_50 = Function_ResizeName;
    local_48 = Function_SetArrayElemName;
    local_40 = Function_AddName;
    local_38 = Function_RemoveLastElemName;
    local_30 = Function_AtomicAddName;
    local_28 = Function_AtomicMinName;
    local_20 = Function_AtomicMaxName;
    local_68._First = &local_58;
    local_68._Last = local_18;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(&RWFunctions,&local_68);
    atexit(`FNiagaraDataInterfaceArrayImplInternal::IsRWFunction'::__l2::
           _dynamic_atexit_destructor_for__RWFunctions__);
    _Init_thread_footer(&::_TSS0);
  }
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (RWFunctions.Elements._8_4_ != RWFunctions.Elements._52_4_) {
    FVar3 = (ForElementType<FSetElementId>)0x155272738;
    if (RWFunctions.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar3 = RWFunctions.Hash.SecondaryData;
    }
    for (iVar2 = *(int *)((longlong)FVar3 +
                         (ulonglong)(RWFunctions.HashSize - 1U & param_1.Number + uVar1) * 4);
        iVar2 != -1; iVar2 = *(int *)(RWFunctions.Elements._0_8_ + 8 + (longlong)iVar2 * 0x10)) {
      if (*(FName *)(RWFunctions.Elements._0_8_ + (longlong)iVar2 * 0x10) == param_1)
      goto LAB_149117a2d;
    }
  }
  iVar2 = -1;
LAB_149117a2d:
  return iVar2 != -1;
}

