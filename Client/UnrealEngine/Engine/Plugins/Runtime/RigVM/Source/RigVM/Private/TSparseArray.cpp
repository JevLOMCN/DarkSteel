// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 61

// ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a07b010

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a07b0b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a07b150

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a07b1f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a07b290

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a07b330

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FRigVMNameOp,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a07b3d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a07b470

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FString,UNameSpacedUserData::FUserData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a07b510

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,UNameSpacedUserData::FUserData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FString,UNameSpacedUserData::FUserData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FString,UNameSpacedUserData::FUserData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a07b5b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a07b650

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a07b6f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator= @ 14a07c960

TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  iVar6 = *(int *)&param_1->field_0x8;
  lVar11 = (longlong)iVar6;
  Empty(this,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,iVar6,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc)
  ;
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar12 = 0;
  if (0 < iVar6) {
    uVar10 = 1;
    puVar9 = (undefined8 *)(*(longlong *)this + 8);
    lVar13 = *(longlong *)param_1 - *(longlong *)this;
    do {
      if ((iVar12 < 0) || (*(int *)&param_1->field_0x28 <= iVar12)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      puVar8 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&param_1->field_0x20;
      }
      iVar6 = iVar12;
      if (iVar12 < 0) {
        iVar6 = iVar12 + 0x1f;
      }
      uVar2 = *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4);
      *(undefined4 *)(puVar9 + -1) = *(undefined4 *)((longlong)puVar9 + lVar13 + -8);
      if ((uVar2 & uVar10) == 0) {
        *(undefined4 *)((longlong)puVar9 + -4) = *(undefined4 *)(lVar13 + -4 + (longlong)puVar9);
      }
      else {
        *puVar9 = *(undefined8 *)(lVar13 + (longlong)puVar9);
        lVar3 = *(longlong *)(lVar13 + 8 + (longlong)puVar9);
        puVar9[1] = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(lVar13 + 0x10 + (longlong)puVar9);
        *(undefined4 *)((longlong)puVar9 + 0x14) = *(undefined4 *)(lVar13 + 0x14 + (longlong)puVar9)
        ;
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      puVar9 = puVar9 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// operator= @ 14a07cae0

TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  FString *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  FSoftObjectPath *pFVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  FString *this_00;
  undefined1 *puVar11;
  longlong lVar12;
  
  if (this == param_1) {
    return this;
  }
  iVar5 = *(int *)&param_1->field_0x8;
  lVar10 = (longlong)iVar5;
  Empty(this,iVar5);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,8,iVar5,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc)
  ;
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar8 = 0;
  if (0 < iVar5) {
    this_00 = (FString *)(*(longlong *)this + 0x20);
    lVar12 = *(longlong *)param_1 - *(longlong *)this;
    uVar9 = 1;
    do {
      if (((iVar8 < 0) || (*(int *)&param_1->field_0x28 <= iVar8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(*pcVar3)();
        return pTVar6;
      }
      pFVar2 = (FString *)((longlong)this_00 + lVar12);
      puVar11 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar11 = *(undefined1 **)&param_1->field_0x20;
      }
      pFVar7 = (FSoftObjectPath *)(lVar12 + -0x20 + (longlong)this_00);
      iVar5 = iVar8;
      if (iVar8 < 0) {
        iVar5 = iVar8 + 0x1f;
      }
      if ((*(uint *)(puVar11 + (longlong)(iVar5 >> 5) * 4) & uVar9) == 0) {
        (((FSoftObjectPath *)(this_00 + -2))->AssetPath).PackageName.ComparisonIndex.Value =
             (pFVar7->AssetPath).PackageName.ComparisonIndex.Value;
        *(undefined4 *)((longlong)&this_00[-2].Data.AllocatorInstance.Data + 4) =
             *(undefined4 *)((longlong)&pFVar2[-2].Data.AllocatorInstance.Data + 4);
      }
      else {
        FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(this_00 + -2),pFVar7);
        ::FString::FString(this_00,pFVar2);
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(this_00 + 1),
                   (FSoftObjectPath *)(lVar12 + 0x10 + (longlong)this_00));
        *(undefined4 *)&this_00[3].Data.AllocatorInstance.Data =
             *(undefined4 *)&pFVar2[3].Data.AllocatorInstance.Data;
        this_00[3].Data.ArrayNum = pFVar2[3].Data.ArrayNum;
        this_00[3].Data.ArrayMax = pFVar2[3].Data.ArrayMax;
      }
      iVar8 = iVar8 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      this_00 = this_00 + 6;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return this;
}

// operator= @ 14a07cc80

TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  ForAnyElementType *pFVar2;
  uint uVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar7;
  undefined1 *puVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  if (this == param_1) {
    return this;
  }
  iVar6 = *(int *)&param_1->field_0x8;
  lVar12 = (longlong)iVar6;
  Empty(this,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,iVar6,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc)
  ;
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar13 = 0;
  if (0 < iVar6) {
    lVar9 = *(longlong *)param_1 - *(longlong *)this;
    piVar10 = (int *)(*(longlong *)this + 0x10);
    uVar11 = 1;
    do {
      if (((iVar13 < 0) || (*(int *)&param_1->field_0x28 <= iVar13)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      puVar8 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&param_1->field_0x20;
      }
      iVar6 = iVar13;
      if (iVar13 < 0) {
        iVar6 = iVar13 + 0x1f;
      }
      uVar3 = *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4);
      piVar10[-4] = *(int *)((longlong)piVar10 + lVar9 + -0x10);
      if ((uVar3 & uVar11) == 0) {
        piVar10[-3] = *(int *)(lVar9 + -0xc + (longlong)piVar10);
      }
      else {
        pFVar2 = (ForAnyElementType *)(piVar10 + -2);
        *(undefined2 *)(piVar10 + -3) = *(undefined2 *)((longlong)piVar10 + lVar9 + -0xc);
        pFVar2->Data = (FScriptContainerElement *)0x0;
        _Src = *(void **)(lVar9 + -8 + (longlong)piVar10);
        iVar6 = *(int *)(lVar9 + (longlong)piVar10);
        *piVar10 = iVar6;
        if (iVar6 == 0) {
          piVar10[1] = 0;
          piVar10[2] = *(int *)(lVar9 + 8 + (longlong)piVar10);
          piVar10[3] = *(int *)(lVar9 + 0xc + (longlong)piVar10);
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (6,2,iVar6,0,pFVar2,iVar6,piVar10 + 1);
          memcpy(pFVar2->Data,_Src,(longlong)iVar6 * 6);
          piVar10[2] = *(int *)(lVar9 + 8 + (longlong)piVar10);
          piVar10[3] = *(int *)(lVar9 + 0xc + (longlong)piVar10);
        }
      }
      iVar13 = iVar13 + 1;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      piVar10 = piVar10 + 8;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return this;
}

// operator= @ 14a07ce90

TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  FString *pFVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  
  if (this == param_1) {
    return this;
  }
  iVar5 = *(int *)&param_1->field_0x8;
  lVar10 = (longlong)iVar5;
  Empty(this,iVar5);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,iVar5,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc)
  ;
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar11 = 0;
  if (0 < iVar5) {
    uVar9 = 1;
    plVar8 = (longlong *)(*(longlong *)this + 0x10);
    lVar13 = *(longlong *)param_1 - *(longlong *)this;
    do {
      if ((iVar11 < 0) || (*(int *)&param_1->field_0x28 <= iVar11)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(*pcVar3)();
          return pTVar6;
        }
      }
      puVar12 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar12 = *(undefined1 **)&param_1->field_0x20;
      }
      pFVar7 = (FString *)(lVar13 + -0x10 + (longlong)plVar8);
      iVar5 = iVar11;
      if (iVar11 < 0) {
        iVar5 = iVar11 + 0x1f;
      }
      if ((*(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) & uVar9) == 0) {
        *(undefined4 *)&(((FString *)(plVar8 + -2))->Data).AllocatorInstance.Data =
             *(undefined4 *)&(pFVar7->Data).AllocatorInstance.Data;
        *(undefined4 *)((longlong)plVar8 + -0xc) = *(undefined4 *)(lVar13 + -0xc + (longlong)plVar8)
        ;
      }
      else {
        ::FString::FString((FString *)(plVar8 + -2),pFVar7);
        *plVar8 = 0;
        plVar2 = *(longlong **)(lVar13 + (longlong)plVar8);
        *plVar8 = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,local_res8);
        }
        *(undefined4 *)(plVar8 + 1) = *(undefined4 *)(lVar13 + 8 + (longlong)plVar8);
        *(undefined4 *)(plVar8 + 2) = *(undefined4 *)(lVar13 + 0x10 + (longlong)plVar8);
        *(undefined4 *)((longlong)plVar8 + 0x14) = *(undefined4 *)(lVar13 + 0x14 + (longlong)plVar8)
        ;
      }
      iVar11 = iVar11 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      plVar8 = plVar8 + 5;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return this;
}

// DestroyElements @ 14a0854a0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 0x10 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14a085580

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FRigVMDispatchFactory_const_*,TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 8 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14a085670

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar8 = (undefined8 *)(uVar6 * 0x60 + 0x20 + *(longlong *)this);
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          if ((void *)puVar8[4] != (void *)0x0) {
            FMemory::Free((void *)puVar8[4]);
          }
          if ((void *)*puVar8 != (void *)0x0) {
            FMemory::Free((void *)*puVar8);
          }
          if ((void *)puVar8[-2] != (void *)0x0) {
            FMemory::Free((void *)puVar8[-2]);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar8 = puVar8 + 0xc;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 14a085780

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 8 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14a085870

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,UNameSpacedUserData::FUserData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FString,UNameSpacedUserData::FUserData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14a085950

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14a085a30

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x38 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          if ((void *)puVar10[4] != (void *)0x0) {
            FMemory::Free((void *)puVar10[4]);
          }
          if ((void *)*puVar10 != (void *)0x0) {
            FMemory::Free((void *)*puVar10);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 7;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14a085b20

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FString,TArray<UNameSpacedUserData::FUserData_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(*(longlong *)this + uVar6 * 0x28);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          if ((void *)puVar10[2] != (void *)0x0) {
            FMemory::Free((void *)puVar10[2]);
          }
          if ((void *)*puVar10 != (void *)0x0) {
            FMemory::Free((void *)*puVar10);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 5;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// Empty @ 14a090520

void __thiscall
TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a0905d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a090670

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a090710

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a0907c0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a090870

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a090910

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FString,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ~TSparseArray<TSparseSetElement<TObjectPtr<UScriptStruct_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0c2410

void __thiscall
TSparseArray<TSparseSetElement<TObjectPtr<UScriptStruct_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TObjectPtr<UScriptStruct_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TObjectPtr<UScriptStruct_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0c24b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0c2550

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0c25f0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0c2690

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,FRigVMDispatchFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0c2730

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,FRigVMDispatchFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,FRigVMDispatchFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,FRigVMDispatchFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0c27d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0c2870

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0c2910

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0c29b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0c2a50

void __thiscall
TSparseArray<TSparseSetElement<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0c2af0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<FRigVMOperand>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0c2b90

void __thiscall
TSparseArray<TSparseSetElement<FRigVMOperand>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<FRigVMOperand>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<FRigVMOperand>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TRigVMTypeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14a0c2c30

void __thiscall
TSparseArray<TSparseSetElement<TRigVMTypeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TRigVMTypeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TRigVMTypeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator= @ 14a0c4150

TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  if (this == param_1) {
    return this;
  }
  iVar5 = *(int *)&param_1->field_0x8;
  lVar10 = (longlong)iVar5;
  Empty(this,iVar5);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,iVar5,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc)
  ;
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar11 = 0;
  if (0 < iVar5) {
    uVar9 = 1;
    puVar8 = (undefined8 *)(*(longlong *)this + 8);
    lVar12 = *(longlong *)param_1 - *(longlong *)this;
    do {
      if ((iVar11 < 0) || (*(int *)&param_1->field_0x28 <= iVar11)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(*pcVar3)();
          return pTVar6;
        }
      }
      puVar7 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar7 = *(undefined1 **)&param_1->field_0x20;
      }
      iVar5 = iVar11;
      if (iVar11 < 0) {
        iVar5 = iVar11 + 0x1f;
      }
      if ((*(uint *)(puVar7 + (longlong)(iVar5 >> 5) * 4) & uVar9) == 0) {
        *(undefined4 *)(puVar8 + -1) = *(undefined4 *)((longlong)puVar8 + lVar12 + -8);
        *(undefined4 *)((longlong)puVar8 + -4) = *(undefined4 *)(lVar12 + -4 + (longlong)puVar8);
      }
      else {
        puVar8[-1] = *(undefined8 *)((longlong)puVar8 + lVar12 + -8);
        pUVar2 = *(UObject **)(lVar12 + (longlong)puVar8);
        *puVar8 = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        puVar8[1] = *(undefined8 *)(lVar12 + 8 + (longlong)puVar8);
        *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(lVar12 + 0x10 + (longlong)puVar8);
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(lVar12 + 0x18 + (longlong)puVar8);
        *(undefined4 *)((longlong)puVar8 + 0x1c) = *(undefined4 *)(lVar12 + 0x1c + (longlong)puVar8)
        ;
      }
      iVar11 = iVar11 + 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      puVar8 = puVar8 + 5;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return this;
}

// operator= @ 14a0c42f0

TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
* __thiscall
TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *this,TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *param_1)

{
  undefined1 *puVar1;
  ForAnyElementType *pFVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  undefined1 *puVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  
  if (this == param_1) {
    return this;
  }
  iVar5 = *(int *)&param_1->field_0x8;
  lVar11 = (longlong)iVar5;
  Empty(this,iVar5);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,iVar5,(ForAnyElementType *)this,(int *)&this->field_0x8,(int *)&this->field_0xc)
  ;
  puVar1 = &param_1->field_0x10;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  if (&this->field_0x10 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar12 = 0;
  if (0 < iVar5) {
    lVar8 = *(longlong *)param_1 - *(longlong *)this;
    piVar9 = (int *)(*(longlong *)this + 0x18);
    uVar10 = 1;
    do {
      if (((iVar12 < 0) || (*(int *)&param_1->field_0x28 <= iVar12)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(*pcVar3)();
        return pTVar6;
      }
      puVar7 = puVar1;
      if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
        puVar7 = *(undefined1 **)&param_1->field_0x20;
      }
      iVar5 = iVar12;
      if (iVar12 < 0) {
        iVar5 = iVar12 + 0x1f;
      }
      if ((*(uint *)(puVar7 + (longlong)(iVar5 >> 5) * 4) & uVar10) == 0) {
        piVar9[-6] = *(int *)((longlong)piVar9 + lVar8 + -0x18);
        piVar9[-5] = *(int *)(lVar8 + -0x14 + (longlong)piVar9);
      }
      else {
        pFVar2 = (ForAnyElementType *)(piVar9 + -2);
        *(undefined8 *)(piVar9 + -6) = *(undefined8 *)((longlong)piVar9 + lVar8 + -0x18);
        piVar9[-4] = *(int *)((longlong)piVar9 + lVar8 + -0x10);
        pFVar2->Data = (FScriptContainerElement *)0x0;
        _Src = *(void **)(lVar8 + -8 + (longlong)piVar9);
        iVar5 = *(int *)(lVar8 + (longlong)piVar9);
        *piVar9 = iVar5;
        if (iVar5 == 0) {
          piVar9[1] = 0;
          piVar9[2] = *(int *)(lVar8 + 8 + (longlong)piVar9);
          piVar9[3] = *(int *)(lVar8 + 0xc + (longlong)piVar9);
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar5,0,pFVar2,iVar5,piVar9 + 1);
          memcpy(pFVar2->Data,_Src,(longlong)iVar5 << 2);
          piVar9[2] = *(int *)(lVar8 + 8 + (longlong)piVar9);
          piVar9[3] = *(int *)(lVar8 + 0xc + (longlong)piVar9);
        }
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      piVar9 = piVar9 + 10;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// DestroyElements @ 14a0d5730

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 8 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14a0d5820

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x50 + 0x10 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14a0d5910

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 8 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) {
          DestructItems<FRigVMFunction,int>((FRigVMFunction *)*puVar10,*(int *)(puVar10 + 1));
          if ((void *)*puVar10 != (void *)0x0) {
            FMemory::Free((void *)*puVar10);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14a0d5a00

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FName,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 8 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14a0d5af0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    puVar10 = (undefined8 *)(*(longlong *)this + (uVar6 * 5 + 2) * 8);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 5;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14a0d5be0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(void *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 8 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)((longlong)this + 0x28))) {
        if ((*(int *)((longlong)this + 0x28) <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar9 = (longlong)this + 0x10;
        if (*(longlong *)((longlong)this + 0x20) != 0) {
          lVar9 = *(longlong *)((longlong)this + 0x20);
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(lVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 14a0d5cd0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(void *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 8 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)((longlong)this + 0x28))) {
        if ((*(int *)((longlong)this + 0x28) <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar9 = (longlong)this + 0x10;
        if (*(longlong *)((longlong)this + 0x20) != 0) {
          lVar9 = *(longlong *)((longlong)this + 0x20);
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(lVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// Empty @ 14a0d63f0

void __thiscall
TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a0d6490

void __thiscall
TSparseArray<TSparseSetElement<TObjectPtr<UScriptStruct_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TObjectPtr<UScriptStruct_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a0d6530

void __thiscall
TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a0d65d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a0d6670

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a0d6720

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a196c70

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

