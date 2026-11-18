// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// operator<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>_>_TTuple<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>_> @ 14a073740

TTuple<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<int_const_&,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>_const_&>::
operator<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>_>_TTuple<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<int_const_&,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  
  pTVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(int *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  _Src = (pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 5);
  }
  return __return_storage_ptr__;
}

// operator<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_> @ 14a0b12e0

TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<FRigVMOperand_const_&,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_const_&>::
operator<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<FRigVMOperand_const_&,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FRigVMOperand *pFVar3;
  TArray<FRigVMOperand,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *_Src;
  undefined1 uVar5;
  ushort uVar6;
  
  pFVar3 = this->Key;
  puVar1 = &__return_storage_ptr__->field_0x8;
  pTVar4 = this->Value;
  uVar5 = pFVar3->field_0x1;
  uVar6 = pFVar3->RegisterIndex;
  __return_storage_ptr__->field_0x0 = pFVar3->MemoryType;
  __return_storage_ptr__->field_0x1 = uVar5;
  *(ushort *)&__return_storage_ptr__->field_0x2 = uVar6;
  *(ushort *)&__return_storage_ptr__->field_0x4 = pFVar3->RegisterOffset;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar4->ArrayNum;
  _Src = (pTVar4->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (6,2,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 * 6);
  }
  return __return_storage_ptr__;
}

