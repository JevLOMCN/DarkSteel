// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 1

// operator<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_TTuple<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> @ 14da06c70

TTuple<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<FGuid_const_&,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_const_&>::
operator<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_TTuple<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<FGuid_const_&,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FGuid *pFVar3;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  pFVar3 = this->Key;
  puVar1 = &__return_storage_ptr__->field_0x10;
  pTVar4 = this->Value;
  uVar6 = pFVar3->B;
  uVar7 = pFVar3->C;
  uVar8 = pFVar3->D;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar3->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar6;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar7;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar8;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar4->ArrayNum;
  pFVar5 = (pTVar4->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x18 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x1c);
    ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
              (*(void **)puVar1,(TObjectPtr<UObject> *)pFVar5,iVar2);
  }
  return __return_storage_ptr__;
}

