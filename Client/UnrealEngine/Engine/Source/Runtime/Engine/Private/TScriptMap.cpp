// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FindValue @ 1476a9330

uchar * __thiscall
TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
::FindValue(TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
            *this,void *param_1,FScriptMapLayout *param_2,
           TFunctionRef<unsigned_int___cdecl(void_const_*)> *param_3,
           TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  
  local_28 = *(undefined8 *)param_4;
  local_20 = *(undefined8 *)&param_4->field_0x8;
  if ((this->Pairs).Elements.Data.ArrayNum != (this->Pairs).Elements.NumFreeIndices) {
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::FindPairIndex'::__l5::<lambda_1>,bool,void_const_*,void_const_*>
               ::Call;
    local_10 = &local_28;
    param_4 = param_1;
    uVar1 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&param_4);
    iVar2 = TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
            ::FindIndexImpl(&this->Pairs,param_1,&param_2->SetLayout,uVar1,
                            (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_18);
    if (iVar2 != -1) {
      uVar3 = (this->Pairs).Elements.Data._padding_;
      if ((uVar3 & 1) != 0) {
        uVar3 = (longlong)&(this->Pairs).Elements.Data._padding_ + ((longlong)uVar3 >> 0x18);
      }
      return (uchar *)((longlong)param_2->ValueOffset +
                      (longlong)(iVar2 * (param_2->SetLayout).SparseArrayLayout.Size) + uVar3);
    }
  }
  return (uchar *)0x0;
}

// FindValue @ 1476a9400

uchar * __thiscall
TScriptMap<FDefaultSetAllocator,FScriptMap>::FindValue
          (TScriptMap<FDefaultSetAllocator,FScriptMap> *this,void *param_1,FScriptMapLayout *param_2
          ,TFunctionRef<unsigned_int___cdecl(void_const_*)> *param_3,
          TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *param_4)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 *local_20;
  TFunctionRef<unsigned_int___cdecl(void_const_*)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_3;
  local_18._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_38 = *(undefined8 *)param_4;
  local_30 = *(undefined8 *)&param_4->field_0x8;
  if ((this->Pairs).Elements.Data.ArrayNum != (this->Pairs).Elements.NumFreeIndices) {
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::FindPairIndex'::__l5::<lambda_1>,bool,void_const_*,void_const_*>
               ::Call;
    iVar1 = TScriptSparseSet<FDefaultSetAllocator>::FindIndex
                      (&this->Pairs,param_1,&param_2->SetLayout,&local_18,
                       (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_28);
    if (iVar1 != -1) {
      return (uchar *)((longlong)(iVar1 * (param_2->SetLayout).SparseArrayLayout.Size) +
                       (longlong)param_2->ValueOffset + (this->Pairs).Elements.Data._padding_);
    }
  }
  return (uchar *)0x0;
}

