// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FindOrAdd @ 14213a130

void * __thiscall
TScriptMap<FDefaultSetAllocator,FScriptMap>::FindOrAdd
          (TScriptMap<FDefaultSetAllocator,FScriptMap> *this,void *param_1,FScriptMapLayout *param_2
          ,TFunctionRef<unsigned_int___cdecl(void_const_*)> *param_3,
          TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *param_4,
          TFunctionRef<void___cdecl(void_*,void_*)> *param_5)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ForElementType<FSetElementId> FVar12;
  longlong lVar13;
  longlong local_res8;
  undefined8 local_res10;
  code *local_res18;
  undefined8 local_res20;
  code *local_78;
  TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *local_70;
  
  pcVar5 = *(code **)param_3;
  iVar3 = param_2->ValueOffset;
  local_res18 = *(code **)param_5;
  local_res10 = *(undefined8 *)&param_5->field_0x8;
  uVar6 = *(undefined8 *)param_4;
  param_4 = *(TFunctionRef<bool___cdecl(void_const_*,void_const_*)> **)&param_4->field_0x8;
  local_res20 = *(undefined8 *)&param_3->field_0x8;
  param_5 = param_1;
  uVar8 = (*pcVar5)(local_res20,&param_5);
  if ((this->Pairs).Elements.Data.ArrayNum != (this->Pairs).Elements.NumFreeIndices) {
    local_70 = param_4;
    local_78 = (code *)uVar6;
    iVar9 = TScriptSparseSet<FDefaultSetAllocator>::FindIndexImpl
                      (&this->Pairs,param_1,&param_2->SetLayout,uVar8,
                       (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_78);
    if (iVar9 != -1) goto LAB_14213a2c3;
  }
  iVar9 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
          ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                              *)this,&(param_2->SetLayout).SparseArrayLayout);
  lVar13 = (longlong)(iVar9 * (param_2->SetLayout).SparseArrayLayout.Size) +
           (this->Pairs).Elements.Data._padding_;
  param_4 = (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)(iVar3 + lVar13);
  local_res8 = lVar13;
  (*local_res18)(local_res10,&local_res8,&param_4);
  uVar10 = (this->Pairs).Elements.Data.ArrayNum - (this->Pairs).Elements.NumFreeIndices;
  if (uVar10 < 4) {
    iVar11 = 1;
  }
  else {
    uVar2 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar11 = 1 << ((byte)lVar7 & 0x1f);
  }
  iVar4 = (this->Pairs).HashSize;
  if ((iVar4 == 0) || (iVar4 < iVar11)) {
    local_70 = (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)local_res20;
    local_78 = pcVar5;
    TScriptSparseSet<FDefaultSetAllocator>::Rehash
              (&this->Pairs,&param_2->SetLayout,
               (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_78);
  }
  else {
    FVar12 = (this->Pairs).Hash.SecondaryData;
    uVar8 = iVar4 - 1U & uVar8;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    piVar1 = (int *)((longlong)FVar12 + ((longlong)iVar4 - 1U & (longlong)(int)uVar8) * 4);
    *(uint *)((param_2->SetLayout).HashIndexOffset + lVar13) = uVar8;
    *(int *)((param_2->SetLayout).HashNextIdOffset + lVar13) = *piVar1;
    *piVar1 = iVar9;
  }
LAB_14213a2c3:
  return (void *)((longlong)(iVar9 * (param_2->SetLayout).SparseArrayLayout.Size) + (longlong)iVar3
                 + (this->Pairs).Elements.Data._padding_);
}

// FindPairIndex @ 14213aea0

int __thiscall
TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
::FindPairIndex(TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
                *this,void *param_1,FScriptMapLayout *param_2,
               TFunctionRef<unsigned_int___cdecl(void_const_*)> *param_3,
               TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *param_4)

{
  uint uVar1;
  int iVar2;
  void *local_res8;
  undefined8 local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  
  if ((this->Pairs).Elements.Data.ArrayNum != (this->Pairs).Elements.NumFreeIndices) {
    local_28 = *(undefined8 *)param_4;
    local_20 = *(undefined8 *)&param_4->field_0x8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::FindPairIndex'::__l5::<lambda_1>,bool,void_const_*,void_const_*>
               ::Call;
    local_10 = &local_28;
    local_res8 = param_1;
    uVar1 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_res8);
    iVar2 = TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
            ::FindIndexImpl(&this->Pairs,param_1,&param_2->SetLayout,uVar1,
                            (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_18);
    return iVar2;
  }
  return -1;
}

// FindPairIndex @ 14213af50

int __thiscall
TScriptMap<FDefaultSetAllocator,FScriptMap>::FindPairIndex
          (TScriptMap<FDefaultSetAllocator,FScriptMap> *this,void *param_1,FScriptMapLayout *param_2
          ,TFunctionRef<unsigned_int___cdecl(void_const_*)> *param_3,
          TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *param_4)

{
  uint uVar1;
  int iVar2;
  void *local_res8;
  undefined8 local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  
  if ((this->Pairs).Elements.Data.ArrayNum != (this->Pairs).Elements.NumFreeIndices) {
    local_28 = *(undefined8 *)param_4;
    local_20 = *(undefined8 *)&param_4->field_0x8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::FindPairIndex'::__l5::<lambda_1>,bool,void_const_*,void_const_*>
               ::Call;
    local_10 = &local_28;
    local_res8 = param_1;
    uVar1 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_res8);
    iVar2 = TScriptSparseSet<FDefaultSetAllocator>::FindIndexImpl
                      (&this->Pairs,param_1,&param_2->SetLayout,uVar1,
                       (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_18);
    return iVar2;
  }
  return -1;
}

