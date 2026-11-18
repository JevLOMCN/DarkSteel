// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FPackageReloadedEvent @ 14212b960

FPackageReloadedEvent * __thiscall
FPackageReloadedEvent::FPackageReloadedEvent
          (FPackageReloadedEvent *this,UPackage *param_1,UPackage *param_2,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_3)

{
  TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
  *this_00;
  undefined1 *puVar1;
  
  this_00 = &this->RepointedObjects;
  this->OldPackage = param_1;
  this->NewPackage = param_2;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->RepointedObjects).field_0x8 = 0;
  *(undefined8 *)&(this->RepointedObjects).field_0x20 = 0;
  puVar1 = &(this->RepointedObjects).field_0x48;
  *(undefined4 *)&(this->RepointedObjects).field_0x28 = 0;
  *(undefined4 *)&(this->RepointedObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->RepointedObjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RepointedObjects).field_0x34 = 0;
  *(undefined8 *)&(this->RepointedObjects).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_00 !=
      (TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
       *)param_3) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->RepointedObjects).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)&param_3->field_0x38,*(int *)&param_3->field_0x48);
    TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_3);
  }
  (this->ObjectReferencers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectReferencers).ArrayNum = 0;
  (this->ObjectReferencers).ArrayMax = 0;
  *(undefined4 *)&param_3->field_0x48 = 0;
  if (*(void **)&param_3->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_3);
  return this;
}

