// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 3

// operator<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_>_TTuple<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_> @ 14d982c90

TTuple<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<FName_const_&,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_const_&>::
operator<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_>_TTuple<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<FName_const_&,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_> *pTVar3;
  FBoolParamCallback *pFVar4;
  uint uVar5;
  
  pTVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  uVar5 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar5;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  pFVar4 = (FBoolParamCallback *)(pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    ConstructItems<FBoolParamCallback,FBoolParamCallback,int>(*(void **)puVar1,pFVar4,iVar2);
  }
  return __return_storage_ptr__;
}

// operator<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_>_TTuple<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_> @ 14d982d30

TTuple<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<FName_const_&,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_const_&>::
operator<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_>_TTuple<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<FName_const_&,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<FSoundCallback,TSizedDefaultAllocator<32>_> *pTVar3;
  FSoundCallback *pFVar4;
  uint uVar5;
  
  pTVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  uVar5 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar5;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  pFVar4 = (FSoundCallback *)(pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    ConstructItems<FSoundCallback,FSoundCallback,int>(*(void **)puVar1,pFVar4,iVar2);
  }
  return __return_storage_ptr__;
}

// operator<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>_>_TTuple<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>_> @ 14d982dd0

TTuple<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<FName_const_&,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>_const_&>::
operator<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>_>_TTuple<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<FName_const_&,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<FStringParamCallback,TSizedDefaultAllocator<32>_> *pTVar3;
  FStringParamCallback *pFVar4;
  uint uVar5;
  
  pTVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  uVar5 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar5;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  pFVar4 = (FStringParamCallback *)(pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    ConstructItems<FStringParamCallback,FStringParamCallback,int>(*(void **)puVar1,pFVar4,iVar2);
  }
  return __return_storage_ptr__;
}

