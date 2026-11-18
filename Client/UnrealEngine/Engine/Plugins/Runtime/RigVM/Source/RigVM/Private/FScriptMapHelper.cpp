// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 1

// operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_> @ 14a0b1380

uchar * __thiscall
`FScriptMapHelper::FindValueFromHash'::__l2::<lambda_1>::
operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>
          (void *this,
          TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
          *param_1)

{
  longlong lVar1;
  void *pvVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  void *pvVar8;
  FProperty *local_res8;
  TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,bool___cdecl(void_const_*,void_const_*)>
  local_28;
  
  local_res8 = *(FProperty **)((longlong)this + 0x10);
  lVar1 = *(longlong *)this;
  pvVar2 = *(void **)((longlong)this + 8);
  if ((param_1->Pairs).Elements.Data.ArrayNum != (param_1->Pairs).Elements.NumFreeIndices) {
    local_28.Callable =
         UE::Core::Private::Function::
         TFunctionRefCaller<``FScriptMapHelper::FindValueFromHash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
         ::Call;
    local_28.Storage.Ptr = &local_res8;
    uVar4 = FProperty::GetValueTypeHash(local_res8,pvVar2);
    iVar6 = (param_1->Pairs).HashSize;
    FVar7 = (param_1->Pairs).Hash;
    if (((ulonglong)FVar7 & 1) != 0) {
      FVar7 = (ForElementType<FSetElementId>)
              ((longlong)&(param_1->Pairs).Hash.field_0x0 + ((longlong)FVar7 >> 0x18));
    }
    iVar6 = *(int *)((longlong)FVar7 +
                    ((longlong)iVar6 - 1U & (longlong)(int)(iVar6 - 1U & uVar4)) * 4);
    while (iVar6 != -1) {
      uVar5 = (param_1->Pairs).Elements.Data._padding_;
      if ((uVar5 & 1) != 0) {
        uVar5 = (longlong)&(param_1->Pairs).Elements.Data._padding_ + ((longlong)uVar5 >> 0x18);
      }
      pvVar8 = (void *)((longlong)(iVar6 * *(int *)(lVar1 + 0x2c)) + uVar5);
      bVar3 = UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,bool___cdecl(void_const_*,void_const_*)>
              ::operator()(&local_28,pvVar2,pvVar8);
      if (bVar3) goto LAB_14a0b143f;
      iVar6 = *(int *)((longlong)*(int *)(lVar1 + 0x1c) + (longlong)pvVar8);
    }
    iVar6 = -1;
LAB_14a0b143f:
    if (iVar6 != -1) {
      uVar5 = (param_1->Pairs).Elements.Data._padding_;
      if ((uVar5 & 1) != 0) {
        uVar5 = (longlong)&(param_1->Pairs).Elements.Data._padding_ + ((longlong)uVar5 >> 0x18);
      }
      return (uchar *)((longlong)*(int *)(lVar1 + 0x18) +
                      (longlong)(iVar6 * *(int *)(lVar1 + 0x2c)) + uVar5);
    }
  }
  return (uchar *)0x0;
}

