// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 1

// operator<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14db25d60

TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&>::
operator<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&> *this,
          TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  uint uVar4;
  
  pTVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  uVar4 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar4;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  _Src = (pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 3);
  }
  return __return_storage_ptr__;
}

