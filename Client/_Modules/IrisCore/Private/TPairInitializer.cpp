// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// operator<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>_TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors> @ 1441f4770

TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>
* __thiscall
TPairInitializer<FFieldVariant_const_&,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors_const_&>
::
operator<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>_TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>
          (TPairInitializer<FFieldVariant_const_&,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors_const_&>
           *this,TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FRegisteredDescriptors *pFVar3;
  FFieldVariant FVar4;
  FWeakObjectPtr FVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar3 = this->Value;
  FVar4.Container = (FFieldObjectUnion)(this->Key->Container).Unknown;
  *(FFieldObjectUnion *)__return_storage_ptr__ = FVar4.Container;
  if (((((ulonglong)FVar4.Container & 1) != 0) &&
      ((UObject *)((ulonglong)FVar4.Container & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)((ulonglong)FVar4.Container & 0xfffffffffffffffe));
  }
  FVar5 = (pFVar3->WeakPtrForPruning).WeakPtr;
  puVar1 = &__return_storage_ptr__->field_0x10;
  *(int *)&__return_storage_ptr__->field_0x8 = FVar5.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0xc = FVar5.ObjectSerialNumber;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->Descriptors).ArrayNum;
  pFVar6 = (pFVar3->Descriptors).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x18 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x1c);
    ConstructItems<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,int>
              (*(void **)puVar1,(TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *)pFVar6,
               iVar2);
  }
  iVar2 = (pFVar3->OwnerKey).ObjectSerialNumber;
  *(int *)&__return_storage_ptr__->field_0x20 = (pFVar3->OwnerKey).ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x24 = iVar2;
  return __return_storage_ptr__;
}

// operator<unsigned_int,FString>_TTuple<unsigned_int,FString> @ 14425e810

TTuple<unsigned_int,FString> * __thiscall
TPairInitializer<unsigned_int_const_&,FString_const_&>::
operator<unsigned_int,FString>_TTuple<unsigned_int,FString>
          (TPairInitializer<unsigned_int_const_&,FString_const_&> *this,
          TTuple<unsigned_int,FString> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FString *pFVar3;
  FScriptContainerElement *_Src;
  
  pFVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(uint *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->Data).ArrayNum;
  _Src = (pFVar3->Data).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 * 2);
  }
  return __return_storage_ptr__;
}

