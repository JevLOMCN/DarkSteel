// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FindValueFromHash @ 1476a94b0

uchar * __thiscall FScriptMapHelper::FindValueFromHash(FScriptMapHelper *this,void *param_1)

{
  FProperty **ppFVar1;
  uchar *puVar2;
  FProperty *local_res8;
  FProperty *local_res10 [3];
  code *local_28;
  undefined8 *local_20;
  code *local_18;
  undefined8 *local_10;
  
  local_res8 = this->KeyProp;
  local_10 = &local_res8;
  local_20 = local_res10;
  local_res10[0] = local_res8;
  if ((this->MapFlags & UsesMemoryImageAllocator) != None) {
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<``FScriptMapHelper::FindValueFromHash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
               ::Call;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<``FScriptMapHelper::FindValueFromHash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
               ::Call;
    ppFVar1 = (FProperty **)local_20;
    local_20 = local_10;
    local_10 = ppFVar1;
    puVar2 = TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
             ::FindValue((this->field2_0x10).FreezableMap,param_1,&this->MapLayout,
                         (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_18,
                         (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_28);
    return puVar2;
  }
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``FScriptMapHelper::FindValueFromHash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
             ::Call;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``FScriptMapHelper::FindValueFromHash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
             ::Call;
  puVar2 = TScriptMap<FDefaultSetAllocator,FScriptMap>::FindValue
                     ((TScriptMap<FDefaultSetAllocator,FScriptMap> *)
                      (this->field2_0x10).FreezableMap,param_1,&this->MapLayout,
                      (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_28,
                      (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_18);
  return puVar2;
}

