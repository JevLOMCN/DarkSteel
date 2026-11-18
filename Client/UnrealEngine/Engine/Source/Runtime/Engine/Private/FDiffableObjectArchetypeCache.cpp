// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetArchetypeDiffableObject @ 1488c2190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDiffableObject * __thiscall
UE::Transaction::DiffUtil::FDiffableObjectArchetypeCache::GetArchetypeDiffableObject
          (FDiffableObjectArchetypeCache *this,UObject *param_1,FGetDiffableObjectOptions *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  FDiffableObject *pFVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 auStack_138 [32];
  TPairInitializer<UObject_const_*_const_&,UE::Transaction::FDiffableObject_&&> local_118;
  FDiffableObject **local_108;
  FDiffableObject *local_100;
  FDiffableObject local_f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118.Value = (FDiffableObject *)param_1;
  if (param_1 == (UObject *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`UE::Transaction::DiffUtil::FDiffableObjectArchetypeCache::GetArchetypeDiffableObject'
             ::__l2::_dynamic_atexit_destructor_for__EmptyDiffableObject__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar4 = &EmptyDiffableObject;
  }
  else {
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    if (*(int *)&(this->ArchetypeDiffableObjects).field_0x8 !=
        *(int *)&(this->ArchetypeDiffableObjects).field_0x34) {
      puVar6 = *(undefined1 **)&(this->ArchetypeDiffableObjects).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->ArchetypeDiffableObjects).field_0x38;
      }
      iVar2 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(this->ArchetypeDiffableObjects).field_0x48 - 1U &
                                (uVar5 >> 0x10 ^ uVar5)) * 4);
      if (iVar2 != -1) {
        do {
          plVar3 = (longlong *)
                   ((longlong)iVar2 * 0xf0 + *(longlong *)&this->ArchetypeDiffableObjects);
          if ((UObject *)*plVar3 == param_1) {
            pFVar4 = (FDiffableObject *)(plVar3 + 1);
            if (plVar3 == (longlong *)0x0) {
              pFVar4 = (FDiffableObject *)0x0;
            }
            if (pFVar4 != (FDiffableObject *)0x0) {
              return pFVar4;
            }
            break;
          }
          iVar2 = (int)plVar3[0x1d];
        } while (iVar2 != -1);
      }
    }
    local_108 = &local_118.Value;
    local_100 = GetDiffableObject(&local_f8,param_1,param_2);
    TSet<TTuple<UObject_const_*,UE::Transaction::FDiffableObject>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Transaction::FDiffableObject,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_const_*_const_&,UE::Transaction::FDiffableObject_&&>_>
              ((TSet<TTuple<UObject_const_*,UE::Transaction::FDiffableObject>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Transaction::FDiffableObject,0>,FDefaultSetAllocator>
                *)this,&local_118,(bool *)&local_108);
    lVar1 = *(longlong *)&this->ArchetypeDiffableObjects;
    if (local_f8.SerializedTaggedData.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_f8.SerializedTaggedData.Pairs.AllocatorInstance.Data);
    }
    if (local_f8.SerializedData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.SerializedData.Data.AllocatorInstance.Data);
    }
    if (local_f8.ObjectArchetype.CachedSubObjectHierarchy.AllocatorInstance.SecondaryData !=
        (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      FMemory::Free((void *)local_f8.ObjectArchetype.CachedSubObjectHierarchy.AllocatorInstance.
                            SecondaryData);
    }
    if (local_f8.ObjectArchetype.SubObjectHierarchyIDs.AllocatorInstance.SecondaryData !=
        (ForElementType<FName>)0x0) {
      FMemory::Free((void *)local_f8.ObjectArchetype.SubObjectHierarchyIDs.AllocatorInstance.
                            SecondaryData);
    }
    pFVar4 = (FDiffableObject *)(lVar1 + (longlong)(int)local_118.Key * 0xf0 + 8);
  }
  return pFVar4;
}

