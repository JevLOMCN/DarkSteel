// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FDeformablePackage @ 143a37690

FDeformablePackage * __thiscall
Chaos::Softs::FDeformablePackage::FDeformablePackage
          (FDeformablePackage *this,int param_1,
          TMap<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,0>_>
          *param_2)

{
  TMap<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>,0>_>
  *this_00;
  undefined1 *puVar1;
  
  this_00 = &this->ObjectMap;
  this->Frame = param_1;
  puVar1 = &(this->ObjectMap).field_0x48;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ObjectMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectMap).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectMap).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_00 != param_2) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ObjectMap).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)&param_2->field_0x38,*(int *)&param_2->field_0x48);
    TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_2);
  }
  return this;
}

