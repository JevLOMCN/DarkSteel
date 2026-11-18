// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// FRigVMFunctionCompilationData @ 14a079c20

FRigVMFunctionCompilationData * __thiscall
FRigVMFunctionCompilationData::FRigVMFunctionCompilationData(FRigVMFunctionCompilationData *this)

{
  (this->ByteCode).ByteCode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteCode).ByteCode.ArrayNum = 0;
  (this->ByteCode).ByteCode.ArrayMax = 0;
  (this->ByteCode).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteCode).Entries.ArrayNum = 0;
  (this->ByteCode).Entries.ArrayMax = 0;
  (this->ByteCode).BranchInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteCode).BranchInfos.ArrayNum = 0;
  (this->ByteCode).BranchInfos.ArrayMax = 0;
  (this->ByteCode).PredicateBranches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteCode).PredicateBranches.ArrayNum = 0;
  (this->ByteCode).PredicateBranches.ArrayMax = 0;
  (this->ByteCode).PublicContextAssetPath.PackageName.ComparisonIndex = 0;
  (this->ByteCode).PublicContextAssetPath.PackageName.Number = 0;
  (this->ByteCode).PublicContextAssetPath.AssetName.ComparisonIndex = 0;
  (this->ByteCode).PublicContextAssetPath.AssetName.Number = 0;
  *(undefined8 *)&(this->ByteCode).BranchInfoLookup = 0;
  *(undefined8 *)&(this->ByteCode).BranchInfoLookup.field_0x8 = 0;
  *(undefined8 *)&(this->ByteCode).BranchInfoLookup.field_0x20 = 0;
  (this->ByteCode).NumInstructions = 0;
  *(undefined4 *)&(this->ByteCode).BranchInfoLookup.field_0x28 = 0;
  *(undefined4 *)&(this->ByteCode).BranchInfoLookup.field_0x2c = 0x80;
  *(undefined4 *)&(this->ByteCode).BranchInfoLookup.field_0x34 = 0;
  *(undefined4 *)&(this->ByteCode).BranchInfoLookup.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ByteCode).BranchInfoLookup.field_0x40 = 0;
  *(undefined4 *)&(this->ByteCode).BranchInfoLookup.field_0x48 = 0;
  (this->ByteCode).bByteCodeIsAligned = false;
  (this->ByteCode).bHasPublicContextAssetPath = false;
  (this->FunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FunctionNames).ArrayNum = 0;
  (this->FunctionNames).ArrayMax = 0;
  (this->WorkPropertyDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkPropertyDescriptions).ArrayNum = 0;
  (this->WorkPropertyDescriptions).ArrayMax = 0;
  (this->WorkPropertyPathDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkPropertyPathDescriptions).ArrayNum = 0;
  (this->WorkPropertyPathDescriptions).ArrayMax = 0;
  (this->LiteralPropertyDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LiteralPropertyDescriptions).ArrayNum = 0;
  (this->LiteralPropertyDescriptions).ArrayMax = 0;
  (this->LiteralPropertyPathDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LiteralPropertyPathDescriptions).ArrayNum = 0;
  (this->LiteralPropertyPathDescriptions).ArrayMax = 0;
  (this->DebugPropertyDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugPropertyDescriptions).ArrayNum = 0;
  (this->DebugPropertyDescriptions).ArrayMax = 0;
  (this->DebugPropertyPathDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugPropertyPathDescriptions).ArrayNum = 0;
  (this->DebugPropertyPathDescriptions).ArrayMax = 0;
  (this->ExternalPropertyDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalPropertyDescriptions).ArrayNum = 0;
  (this->ExternalPropertyDescriptions).ArrayMax = 0;
  (this->ExternalPropertyPathDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalPropertyPathDescriptions).ArrayNum = 0;
  (this->ExternalPropertyPathDescriptions).ArrayMax = 0;
  *(undefined8 *)&this->ExternalRegisterIndexToVariable = 0;
  *(undefined8 *)&(this->ExternalRegisterIndexToVariable).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalRegisterIndexToVariable).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x34 = 0;
  *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExternalRegisterIndexToVariable).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x48 = 0;
  *(undefined8 *)&this->Operands = 0;
  *(undefined8 *)&(this->Operands).field_0x8 = 0;
  *(undefined8 *)&(this->Operands).field_0x20 = 0;
  *(undefined4 *)&(this->Operands).field_0x28 = 0;
  *(undefined4 *)&(this->Operands).field_0x2c = 0x80;
  *(undefined4 *)&(this->Operands).field_0x34 = 0;
  *(undefined4 *)&(this->Operands).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Operands).field_0x40 = 0;
  *(undefined4 *)&(this->Operands).field_0x48 = 0;
  this->Hash = 0;
  this->bEncounteredSurpressedErrors = false;
  *(undefined8 *)&this->OperandToDebugRegisters = 0;
  *(undefined8 *)&(this->OperandToDebugRegisters).field_0x8 = 0;
  *(undefined8 *)&(this->OperandToDebugRegisters).field_0x20 = 0;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x28 = 0;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x2c = 0x80;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x34 = 0;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OperandToDebugRegisters).field_0x40 = 0;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x48 = 0;
  return this;
}

// ~FRigVMFunctionCompilationData @ 14a07bbe0

void __thiscall
FRigVMFunctionCompilationData::~FRigVMFunctionCompilationData(FRigVMFunctionCompilationData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OperandToDebugRegisters).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OperandToDebugRegisters);
  *(undefined4 *)&(this->Operands).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Operands).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Operands);
  *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExternalRegisterIndexToVariable).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExternalRegisterIndexToVariable);
  DestructItems<FRigVMFunctionCompilationPropertyPath,int>
            ((FRigVMFunctionCompilationPropertyPath *)
             (this->ExternalPropertyPathDescriptions).AllocatorInstance.Data,
             (this->ExternalPropertyPathDescriptions).ArrayNum);
  pFVar2 = (this->ExternalPropertyPathDescriptions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FRigVMFunctionCompilationPropertyDescription,int>
            ((FRigVMFunctionCompilationPropertyDescription *)
             (this->ExternalPropertyDescriptions).AllocatorInstance.Data,
             (this->ExternalPropertyDescriptions).ArrayNum);
  pFVar2 = (this->ExternalPropertyDescriptions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FRigVMFunctionCompilationPropertyPath,int>
            ((FRigVMFunctionCompilationPropertyPath *)
             (this->DebugPropertyPathDescriptions).AllocatorInstance.Data,
             (this->DebugPropertyPathDescriptions).ArrayNum);
  pFVar2 = (this->DebugPropertyPathDescriptions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FRigVMFunctionCompilationPropertyDescription,int>
            ((FRigVMFunctionCompilationPropertyDescription *)
             (this->DebugPropertyDescriptions).AllocatorInstance.Data,
             (this->DebugPropertyDescriptions).ArrayNum);
  pFVar2 = (this->DebugPropertyDescriptions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FRigVMFunctionCompilationPropertyPath,int>
            ((FRigVMFunctionCompilationPropertyPath *)
             (this->LiteralPropertyPathDescriptions).AllocatorInstance.Data,
             (this->LiteralPropertyPathDescriptions).ArrayNum);
  pFVar2 = (this->LiteralPropertyPathDescriptions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FRigVMFunctionCompilationPropertyDescription,int>
            ((FRigVMFunctionCompilationPropertyDescription *)
             (this->LiteralPropertyDescriptions).AllocatorInstance.Data,
             (this->LiteralPropertyDescriptions).ArrayNum);
  pFVar2 = (this->LiteralPropertyDescriptions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FRigVMFunctionCompilationPropertyPath,int>
            ((FRigVMFunctionCompilationPropertyPath *)
             (this->WorkPropertyPathDescriptions).AllocatorInstance.Data,
             (this->WorkPropertyPathDescriptions).ArrayNum);
  pFVar2 = (this->WorkPropertyPathDescriptions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FRigVMFunctionCompilationPropertyDescription,int>
            ((FRigVMFunctionCompilationPropertyDescription *)
             (this->WorkPropertyDescriptions).AllocatorInstance.Data,
             (this->WorkPropertyDescriptions).ArrayNum);
  pFVar2 = (this->WorkPropertyDescriptions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FunctionNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FRigVMByteCode::~FRigVMByteCode(&this->ByteCode);
  return;
}

// StaticStruct @ 14a0ada20

UScriptStruct * __cdecl FRigVMFunctionCompilationData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData,(UObject *)pUVar1,
                         L"RigVMFunctionCompilationData");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunctionCompilationData.OuterSingleton;
}

// FRigVMFunctionCompilationData @ 14a0bd030

FRigVMFunctionCompilationData * __thiscall
FRigVMFunctionCompilationData::FRigVMFunctionCompilationData
          (FRigVMFunctionCompilationData *this,FRigVMFunctionCompilationData *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_> *pTVar5;
  TMap<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  int iVar6;
  FScriptContainerElement *_Src;
  FRigVMFunctionCompilationPropertyDescription *pFVar7;
  FRigVMFunctionCompilationPropertyPath *pFVar8;
  
  FRigVMByteCode::FRigVMByteCode(&this->ByteCode,&param_1->ByteCode);
  pTVar3 = &this->FunctionNames;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->FunctionNames).ArrayMax;
  iVar6 = (param_1->FunctionNames).ArrayNum;
  _Src = (param_1->FunctionNames).AllocatorInstance.Data;
  (this->FunctionNames).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar6 << 3);
  }
  pTVar4 = &this->WorkPropertyDescriptions;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->WorkPropertyDescriptions).ArrayMax;
  iVar6 = (param_1->WorkPropertyDescriptions).ArrayNum;
  pFVar7 = (FRigVMFunctionCompilationPropertyDescription *)
           (param_1->WorkPropertyDescriptions).AllocatorInstance.Data;
  (this->WorkPropertyDescriptions).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FRigVMFunctionCompilationPropertyDescription,FRigVMFunctionCompilationPropertyDescription,int>
              ((pTVar4->AllocatorInstance).Data,pFVar7,iVar6);
  }
  pTVar5 = &this->WorkPropertyPathDescriptions;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->WorkPropertyPathDescriptions).ArrayMax;
  iVar6 = (param_1->WorkPropertyPathDescriptions).ArrayNum;
  pFVar8 = (FRigVMFunctionCompilationPropertyPath *)
           (param_1->WorkPropertyPathDescriptions).AllocatorInstance.Data;
  (this->WorkPropertyPathDescriptions).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FRigVMFunctionCompilationPropertyPath,FRigVMFunctionCompilationPropertyPath,int>
              ((pTVar5->AllocatorInstance).Data,pFVar8,iVar6);
  }
  pTVar4 = &this->LiteralPropertyDescriptions;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->LiteralPropertyDescriptions).ArrayMax;
  iVar6 = (param_1->LiteralPropertyDescriptions).ArrayNum;
  pFVar7 = (FRigVMFunctionCompilationPropertyDescription *)
           (param_1->LiteralPropertyDescriptions).AllocatorInstance.Data;
  (this->LiteralPropertyDescriptions).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FRigVMFunctionCompilationPropertyDescription,FRigVMFunctionCompilationPropertyDescription,int>
              ((pTVar4->AllocatorInstance).Data,pFVar7,iVar6);
  }
  pTVar5 = &this->LiteralPropertyPathDescriptions;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->LiteralPropertyPathDescriptions).ArrayMax;
  iVar6 = (param_1->LiteralPropertyPathDescriptions).ArrayNum;
  pFVar8 = (FRigVMFunctionCompilationPropertyPath *)
           (param_1->LiteralPropertyPathDescriptions).AllocatorInstance.Data;
  (this->LiteralPropertyPathDescriptions).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FRigVMFunctionCompilationPropertyPath,FRigVMFunctionCompilationPropertyPath,int>
              ((pTVar5->AllocatorInstance).Data,pFVar8,iVar6);
  }
  pTVar4 = &this->DebugPropertyDescriptions;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->DebugPropertyDescriptions).ArrayMax;
  iVar6 = (param_1->DebugPropertyDescriptions).ArrayNum;
  pFVar7 = (FRigVMFunctionCompilationPropertyDescription *)
           (param_1->DebugPropertyDescriptions).AllocatorInstance.Data;
  (this->DebugPropertyDescriptions).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FRigVMFunctionCompilationPropertyDescription,FRigVMFunctionCompilationPropertyDescription,int>
              ((pTVar4->AllocatorInstance).Data,pFVar7,iVar6);
  }
  pTVar5 = &this->DebugPropertyPathDescriptions;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->DebugPropertyPathDescriptions).ArrayMax;
  iVar6 = (param_1->DebugPropertyPathDescriptions).ArrayNum;
  pFVar8 = (FRigVMFunctionCompilationPropertyPath *)
           (param_1->DebugPropertyPathDescriptions).AllocatorInstance.Data;
  (this->DebugPropertyPathDescriptions).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FRigVMFunctionCompilationPropertyPath,FRigVMFunctionCompilationPropertyPath,int>
              ((pTVar5->AllocatorInstance).Data,pFVar8,iVar6);
  }
  pTVar4 = &this->ExternalPropertyDescriptions;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ExternalPropertyDescriptions).ArrayMax;
  iVar6 = (param_1->ExternalPropertyDescriptions).ArrayNum;
  pFVar7 = (FRigVMFunctionCompilationPropertyDescription *)
           (param_1->ExternalPropertyDescriptions).AllocatorInstance.Data;
  (this->ExternalPropertyDescriptions).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FRigVMFunctionCompilationPropertyDescription,FRigVMFunctionCompilationPropertyDescription,int>
              ((pTVar4->AllocatorInstance).Data,pFVar7,iVar6);
  }
  pTVar5 = &this->ExternalPropertyPathDescriptions;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ExternalPropertyPathDescriptions).ArrayMax;
  iVar6 = (param_1->ExternalPropertyPathDescriptions).ArrayNum;
  pFVar8 = (FRigVMFunctionCompilationPropertyPath *)
           (param_1->ExternalPropertyPathDescriptions).AllocatorInstance.Data;
  (this->ExternalPropertyPathDescriptions).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar1);
    ConstructItems<FRigVMFunctionCompilationPropertyPath,FRigVMFunctionCompilationPropertyPath,int>
              ((pTVar5->AllocatorInstance).Data,pFVar8,iVar6);
  }
  *(undefined8 *)&(this->ExternalRegisterIndexToVariable).field_0x0 = 0;
  *(undefined8 *)&(this->ExternalRegisterIndexToVariable).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalRegisterIndexToVariable).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalRegisterIndexToVariable).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x48 = 0;
  TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
              *)&this->ExternalRegisterIndexToVariable,
             (TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
              *)&param_1->ExternalRegisterIndexToVariable);
  *(undefined8 *)&(this->Operands).field_0x0 = 0;
  *(undefined8 *)&(this->Operands).field_0x8 = 0;
  *(undefined8 *)&(this->Operands).field_0x20 = 0;
  *(undefined4 *)&(this->Operands).field_0x28 = 0;
  *(undefined4 *)&(this->Operands).field_0x2c = 0x80;
  *(undefined4 *)&(this->Operands).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Operands).field_0x34 = 0;
  *(undefined8 *)&(this->Operands).field_0x40 = 0;
  *(undefined4 *)&(this->Operands).field_0x48 = 0;
  TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
               *)&this->Operands,
              (TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
               *)&param_1->Operands);
  this_00 = &this->OperandToDebugRegisters;
  this->Hash = param_1->Hash;
  puVar2 = &(this->OperandToDebugRegisters).field_0x48;
  this->bEncounteredSurpressedErrors = param_1->bEncounteredSurpressedErrors;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->OperandToDebugRegisters).field_0x8 = 0;
  *(undefined8 *)&(this->OperandToDebugRegisters).field_0x20 = 0;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x28 = 0;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x2c = 0x80;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OperandToDebugRegisters).field_0x34 = 0;
  *(undefined8 *)&(this->OperandToDebugRegisters).field_0x40 = 0;
  *(undefined4 *)puVar2 = 0;
  if (this_00 != &param_1->OperandToDebugRegisters) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->OperandToDebugRegisters).field_0x38,
               (int *)puVar2,
               (ForElementType<FSetElementId> *)&(param_1->OperandToDebugRegisters).field_0x38,
               *(int *)&(param_1->OperandToDebugRegisters).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->OperandToDebugRegisters);
  }
  return this;
}

// operator= @ 14a0c48f0

FRigVMFunctionCompilationData * __thiscall
FRigVMFunctionCompilationData::operator=
          (FRigVMFunctionCompilationData *this,FRigVMFunctionCompilationData *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_> *pTVar8;
  TMap<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_> *pTVar9;
  TMap<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_> *pTVar10;
  TMap<FString,FRigVMOperand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>_>
  *pTVar11;
  TMap<FString,FRigVMOperand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>_>
  *this_00;
  TMap<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  FScriptContainerElement *pFVar12;
  void *pvVar13;
  TMap<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar14;
  
  FRigVMByteCode::operator=(&this->ByteCode,&param_1->ByteCode);
  pTVar3 = &param_1->FunctionNames;
  pTVar4 = &this->FunctionNames;
  if (pTVar4 != pTVar3) {
    pFVar12 = (pTVar4->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->FunctionNames).ArrayNum = (param_1->FunctionNames).ArrayNum;
    (this->FunctionNames).ArrayMax = (param_1->FunctionNames).ArrayMax;
    (param_1->FunctionNames).ArrayNum = 0;
    (param_1->FunctionNames).ArrayMax = 0;
  }
  pTVar5 = &param_1->WorkPropertyDescriptions;
  pTVar6 = &this->WorkPropertyDescriptions;
  if (pTVar6 != pTVar5) {
    DestructItems<FRigVMFunctionCompilationPropertyDescription,int>
              ((FRigVMFunctionCompilationPropertyDescription *)(pTVar6->AllocatorInstance).Data,
               (this->WorkPropertyDescriptions).ArrayNum);
    pFVar12 = (pTVar6->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->WorkPropertyDescriptions).ArrayNum = (param_1->WorkPropertyDescriptions).ArrayNum;
    (this->WorkPropertyDescriptions).ArrayMax = (param_1->WorkPropertyDescriptions).ArrayMax;
    (param_1->WorkPropertyDescriptions).ArrayNum = 0;
    (param_1->WorkPropertyDescriptions).ArrayMax = 0;
  }
  pTVar7 = &param_1->WorkPropertyPathDescriptions;
  pTVar8 = &this->WorkPropertyPathDescriptions;
  if (pTVar8 != pTVar7) {
    DestructItems<FRigVMFunctionCompilationPropertyPath,int>
              ((FRigVMFunctionCompilationPropertyPath *)(pTVar8->AllocatorInstance).Data,
               (this->WorkPropertyPathDescriptions).ArrayNum);
    pFVar12 = (pTVar8->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->WorkPropertyPathDescriptions).ArrayNum = (param_1->WorkPropertyPathDescriptions).ArrayNum
    ;
    (this->WorkPropertyPathDescriptions).ArrayMax = (param_1->WorkPropertyPathDescriptions).ArrayMax
    ;
    (param_1->WorkPropertyPathDescriptions).ArrayNum = 0;
    (param_1->WorkPropertyPathDescriptions).ArrayMax = 0;
  }
  pTVar5 = &param_1->LiteralPropertyDescriptions;
  pTVar6 = &this->LiteralPropertyDescriptions;
  if (pTVar6 != pTVar5) {
    DestructItems<FRigVMFunctionCompilationPropertyDescription,int>
              ((FRigVMFunctionCompilationPropertyDescription *)(pTVar6->AllocatorInstance).Data,
               (this->LiteralPropertyDescriptions).ArrayNum);
    pFVar12 = (pTVar6->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LiteralPropertyDescriptions).ArrayNum = (param_1->LiteralPropertyDescriptions).ArrayNum;
    (this->LiteralPropertyDescriptions).ArrayMax = (param_1->LiteralPropertyDescriptions).ArrayMax;
    (param_1->LiteralPropertyDescriptions).ArrayNum = 0;
    (param_1->LiteralPropertyDescriptions).ArrayMax = 0;
  }
  pTVar7 = &param_1->LiteralPropertyPathDescriptions;
  pTVar8 = &this->LiteralPropertyPathDescriptions;
  if (pTVar8 != pTVar7) {
    DestructItems<FRigVMFunctionCompilationPropertyPath,int>
              ((FRigVMFunctionCompilationPropertyPath *)(pTVar8->AllocatorInstance).Data,
               (this->LiteralPropertyPathDescriptions).ArrayNum);
    pFVar12 = (pTVar8->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LiteralPropertyPathDescriptions).ArrayNum =
         (param_1->LiteralPropertyPathDescriptions).ArrayNum;
    (this->LiteralPropertyPathDescriptions).ArrayMax =
         (param_1->LiteralPropertyPathDescriptions).ArrayMax;
    (param_1->LiteralPropertyPathDescriptions).ArrayNum = 0;
    (param_1->LiteralPropertyPathDescriptions).ArrayMax = 0;
  }
  pTVar5 = &param_1->DebugPropertyDescriptions;
  pTVar6 = &this->DebugPropertyDescriptions;
  if (pTVar6 != pTVar5) {
    DestructItems<FRigVMFunctionCompilationPropertyDescription,int>
              ((FRigVMFunctionCompilationPropertyDescription *)(pTVar6->AllocatorInstance).Data,
               (this->DebugPropertyDescriptions).ArrayNum);
    pFVar12 = (pTVar6->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DebugPropertyDescriptions).ArrayNum = (param_1->DebugPropertyDescriptions).ArrayNum;
    (this->DebugPropertyDescriptions).ArrayMax = (param_1->DebugPropertyDescriptions).ArrayMax;
    (param_1->DebugPropertyDescriptions).ArrayNum = 0;
    (param_1->DebugPropertyDescriptions).ArrayMax = 0;
  }
  pTVar7 = &param_1->DebugPropertyPathDescriptions;
  pTVar8 = &this->DebugPropertyPathDescriptions;
  if (pTVar8 != pTVar7) {
    DestructItems<FRigVMFunctionCompilationPropertyPath,int>
              ((FRigVMFunctionCompilationPropertyPath *)(pTVar8->AllocatorInstance).Data,
               (this->DebugPropertyPathDescriptions).ArrayNum);
    pFVar12 = (pTVar8->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DebugPropertyPathDescriptions).ArrayNum =
         (param_1->DebugPropertyPathDescriptions).ArrayNum;
    (this->DebugPropertyPathDescriptions).ArrayMax =
         (param_1->DebugPropertyPathDescriptions).ArrayMax;
    (param_1->DebugPropertyPathDescriptions).ArrayNum = 0;
    (param_1->DebugPropertyPathDescriptions).ArrayMax = 0;
  }
  pTVar5 = &param_1->ExternalPropertyDescriptions;
  pTVar6 = &this->ExternalPropertyDescriptions;
  if (pTVar6 != pTVar5) {
    DestructItems<FRigVMFunctionCompilationPropertyDescription,int>
              ((FRigVMFunctionCompilationPropertyDescription *)(pTVar6->AllocatorInstance).Data,
               (this->ExternalPropertyDescriptions).ArrayNum);
    pFVar12 = (pTVar6->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ExternalPropertyDescriptions).ArrayNum = (param_1->ExternalPropertyDescriptions).ArrayNum
    ;
    (this->ExternalPropertyDescriptions).ArrayMax = (param_1->ExternalPropertyDescriptions).ArrayMax
    ;
    (param_1->ExternalPropertyDescriptions).ArrayNum = 0;
    (param_1->ExternalPropertyDescriptions).ArrayMax = 0;
  }
  pTVar7 = &param_1->ExternalPropertyPathDescriptions;
  pTVar8 = &this->ExternalPropertyPathDescriptions;
  if (pTVar8 != pTVar7) {
    DestructItems<FRigVMFunctionCompilationPropertyPath,int>
              ((FRigVMFunctionCompilationPropertyPath *)(pTVar8->AllocatorInstance).Data,
               (this->ExternalPropertyPathDescriptions).ArrayNum);
    pFVar12 = (pTVar8->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ExternalPropertyPathDescriptions).ArrayNum =
         (param_1->ExternalPropertyPathDescriptions).ArrayNum;
    (this->ExternalPropertyPathDescriptions).ArrayMax =
         (param_1->ExternalPropertyPathDescriptions).ArrayMax;
    (param_1->ExternalPropertyPathDescriptions).ArrayNum = 0;
    (param_1->ExternalPropertyPathDescriptions).ArrayMax = 0;
  }
  pTVar9 = &param_1->ExternalRegisterIndexToVariable;
  pTVar10 = &this->ExternalRegisterIndexToVariable;
  if (pTVar10 != pTVar9) {
    if (*(void **)pTVar10 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar10);
    }
    puVar1 = &(param_1->ExternalRegisterIndexToVariable).field_0x10;
    *(undefined8 *)pTVar10 = *(undefined8 *)pTVar9;
    puVar2 = &(this->ExternalRegisterIndexToVariable).field_0x10;
    *(undefined8 *)pTVar9 = 0;
    *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x8 =
         *(undefined4 *)&(param_1->ExternalRegisterIndexToVariable).field_0x8;
    *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0xc =
         *(undefined4 *)&(param_1->ExternalRegisterIndexToVariable).field_0xc;
    *(undefined8 *)&(param_1->ExternalRegisterIndexToVariable).field_0x8 = 0;
    if (puVar2 != puVar1) {
      if (*(longlong *)&(param_1->ExternalRegisterIndexToVariable).field_0x20 == 0) {
        memmove(puVar2,puVar1,0x10);
      }
      pvVar13 = *(void **)&(this->ExternalRegisterIndexToVariable).field_0x20;
      if (pvVar13 != (void *)0x0) {
        FMemory::Free(pvVar13);
      }
      *(undefined8 *)&(this->ExternalRegisterIndexToVariable).field_0x20 =
           *(undefined8 *)&(param_1->ExternalRegisterIndexToVariable).field_0x20;
      *(undefined8 *)&(param_1->ExternalRegisterIndexToVariable).field_0x20 = 0;
      *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x28 =
           *(undefined4 *)&(param_1->ExternalRegisterIndexToVariable).field_0x28;
      *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x2c =
           *(undefined4 *)&(param_1->ExternalRegisterIndexToVariable).field_0x2c;
      *(undefined8 *)&(param_1->ExternalRegisterIndexToVariable).field_0x28 = 0;
    }
    *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x30 =
         *(undefined4 *)&(param_1->ExternalRegisterIndexToVariable).field_0x30;
    *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x34 =
         *(undefined4 *)&(param_1->ExternalRegisterIndexToVariable).field_0x34;
    *(undefined4 *)&(param_1->ExternalRegisterIndexToVariable).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->ExternalRegisterIndexToVariable).field_0x34 = 0;
    if (*(longlong *)&(param_1->ExternalRegisterIndexToVariable).field_0x40 == 0) {
      *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x38 =
           *(undefined4 *)&(param_1->ExternalRegisterIndexToVariable).field_0x38;
    }
    pvVar13 = *(void **)&(this->ExternalRegisterIndexToVariable).field_0x40;
    if (pvVar13 != (void *)0x0) {
      FMemory::Free(pvVar13);
    }
    *(undefined8 *)&(this->ExternalRegisterIndexToVariable).field_0x40 =
         *(undefined8 *)&(param_1->ExternalRegisterIndexToVariable).field_0x40;
    *(undefined8 *)&(param_1->ExternalRegisterIndexToVariable).field_0x40 = 0;
    *(undefined4 *)&(this->ExternalRegisterIndexToVariable).field_0x48 =
         *(undefined4 *)&(param_1->ExternalRegisterIndexToVariable).field_0x48;
    *(undefined4 *)&(param_1->ExternalRegisterIndexToVariable).field_0x48 = 0;
  }
  pTVar11 = &param_1->Operands;
  this_00 = &this->Operands;
  if (this_00 != pTVar11) {
    TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->Operands).field_0x8);
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    puVar1 = &(param_1->Operands).field_0x10;
    *(undefined8 *)this_00 = *(undefined8 *)pTVar11;
    puVar2 = &(this->Operands).field_0x10;
    *(undefined8 *)pTVar11 = 0;
    *(undefined4 *)&(this->Operands).field_0x8 = *(undefined4 *)&(param_1->Operands).field_0x8;
    *(undefined4 *)&(this->Operands).field_0xc = *(undefined4 *)&(param_1->Operands).field_0xc;
    *(undefined8 *)&(param_1->Operands).field_0x8 = 0;
    if (puVar2 != puVar1) {
      if (*(longlong *)&(param_1->Operands).field_0x20 == 0) {
        memmove(puVar2,puVar1,0x10);
      }
      pvVar13 = *(void **)&(this->Operands).field_0x20;
      if (pvVar13 != (void *)0x0) {
        FMemory::Free(pvVar13);
      }
      *(undefined8 *)&(this->Operands).field_0x20 = *(undefined8 *)&(param_1->Operands).field_0x20;
      *(undefined8 *)&(param_1->Operands).field_0x20 = 0;
      *(undefined4 *)&(this->Operands).field_0x28 = *(undefined4 *)&(param_1->Operands).field_0x28;
      *(undefined4 *)&(this->Operands).field_0x2c = *(undefined4 *)&(param_1->Operands).field_0x2c;
      *(undefined8 *)&(param_1->Operands).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Operands).field_0x30 = *(undefined4 *)&(param_1->Operands).field_0x30;
    *(undefined4 *)&(this->Operands).field_0x34 = *(undefined4 *)&(param_1->Operands).field_0x34;
    *(undefined4 *)&(param_1->Operands).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Operands).field_0x34 = 0;
    if (*(longlong *)&(param_1->Operands).field_0x40 == 0) {
      *(undefined4 *)&(this->Operands).field_0x38 = *(undefined4 *)&(param_1->Operands).field_0x38;
    }
    pvVar13 = *(void **)&(this->Operands).field_0x40;
    if (pvVar13 != (void *)0x0) {
      FMemory::Free(pvVar13);
    }
    *(undefined8 *)&(this->Operands).field_0x40 = *(undefined8 *)&(param_1->Operands).field_0x40;
    *(undefined8 *)&(param_1->Operands).field_0x40 = 0;
    *(undefined4 *)&(this->Operands).field_0x48 = *(undefined4 *)&(param_1->Operands).field_0x48;
    *(undefined4 *)&(param_1->Operands).field_0x48 = 0;
  }
  this_01 = &this->OperandToDebugRegisters;
  this->Hash = param_1->Hash;
  pTVar14 = &param_1->OperandToDebugRegisters;
  this->bEncounteredSurpressedErrors = param_1->bEncounteredSurpressedErrors;
  if (this_01 != pTVar14) {
    TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_01,0,*(int *)&(this->OperandToDebugRegisters).field_0x8);
    if (*(void **)this_01 != (void *)0x0) {
      FMemory::Free(*(void **)this_01);
    }
    puVar1 = &(param_1->OperandToDebugRegisters).field_0x10;
    *(undefined8 *)this_01 = *(undefined8 *)pTVar14;
    puVar2 = &(this->OperandToDebugRegisters).field_0x10;
    *(undefined8 *)pTVar14 = 0;
    *(undefined4 *)&(this->OperandToDebugRegisters).field_0x8 =
         *(undefined4 *)&(param_1->OperandToDebugRegisters).field_0x8;
    *(undefined4 *)&(this->OperandToDebugRegisters).field_0xc =
         *(undefined4 *)&(param_1->OperandToDebugRegisters).field_0xc;
    *(undefined8 *)&(param_1->OperandToDebugRegisters).field_0x8 = 0;
    if (puVar2 != puVar1) {
      if (*(longlong *)&(param_1->OperandToDebugRegisters).field_0x20 == 0) {
        memmove(puVar2,puVar1,0x10);
      }
      pvVar13 = *(void **)&(this->OperandToDebugRegisters).field_0x20;
      if (pvVar13 != (void *)0x0) {
        FMemory::Free(pvVar13);
      }
      *(undefined8 *)&(this->OperandToDebugRegisters).field_0x20 =
           *(undefined8 *)&(param_1->OperandToDebugRegisters).field_0x20;
      *(undefined8 *)&(param_1->OperandToDebugRegisters).field_0x20 = 0;
      *(undefined4 *)&(this->OperandToDebugRegisters).field_0x28 =
           *(undefined4 *)&(param_1->OperandToDebugRegisters).field_0x28;
      *(undefined4 *)&(this->OperandToDebugRegisters).field_0x2c =
           *(undefined4 *)&(param_1->OperandToDebugRegisters).field_0x2c;
      *(undefined8 *)&(param_1->OperandToDebugRegisters).field_0x28 = 0;
    }
    *(undefined4 *)&(this->OperandToDebugRegisters).field_0x30 =
         *(undefined4 *)&(param_1->OperandToDebugRegisters).field_0x30;
    *(undefined4 *)&(this->OperandToDebugRegisters).field_0x34 =
         *(undefined4 *)&(param_1->OperandToDebugRegisters).field_0x34;
    *(undefined4 *)&(param_1->OperandToDebugRegisters).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->OperandToDebugRegisters).field_0x34 = 0;
    if (*(longlong *)&(param_1->OperandToDebugRegisters).field_0x40 == 0) {
      *(undefined4 *)&(this->OperandToDebugRegisters).field_0x38 =
           *(undefined4 *)&(param_1->OperandToDebugRegisters).field_0x38;
    }
    pvVar13 = *(void **)&(this->OperandToDebugRegisters).field_0x40;
    if (pvVar13 != (void *)0x0) {
      FMemory::Free(pvVar13);
    }
    *(undefined8 *)&(this->OperandToDebugRegisters).field_0x40 =
         *(undefined8 *)&(param_1->OperandToDebugRegisters).field_0x40;
    *(undefined8 *)&(param_1->OperandToDebugRegisters).field_0x40 = 0;
    *(undefined4 *)&(this->OperandToDebugRegisters).field_0x48 =
         *(undefined4 *)&(param_1->OperandToDebugRegisters).field_0x48;
    *(undefined4 *)&(param_1->OperandToDebugRegisters).field_0x48 = 0;
  }
  return this;
}

// operator= @ 14a0c4e70

FRigVMFunctionCompilationData * __thiscall
FRigVMFunctionCompilationData::operator=
          (FRigVMFunctionCompilationData *this,FRigVMFunctionCompilationData *param_1)

{
  FRigVMByteCode::operator=(&this->ByteCode,&param_1->ByteCode);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->FunctionNames,&param_1->FunctionNames)
  ;
  TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_>::operator=
            (&this->WorkPropertyDescriptions,&param_1->WorkPropertyDescriptions);
  TArray<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_>::operator=
            (&this->WorkPropertyPathDescriptions,&param_1->WorkPropertyPathDescriptions);
  TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_>::operator=
            (&this->LiteralPropertyDescriptions,&param_1->LiteralPropertyDescriptions);
  TArray<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_>::operator=
            (&this->LiteralPropertyPathDescriptions,&param_1->LiteralPropertyPathDescriptions);
  TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_>::operator=
            (&this->DebugPropertyDescriptions,&param_1->DebugPropertyDescriptions);
  TArray<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_>::operator=
            (&this->DebugPropertyPathDescriptions,&param_1->DebugPropertyPathDescriptions);
  TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_>::operator=
            (&this->ExternalPropertyDescriptions,&param_1->ExternalPropertyDescriptions);
  TArray<FRigVMFunctionCompilationPropertyPath,TSizedDefaultAllocator<32>_>::operator=
            (&this->ExternalPropertyPathDescriptions,&param_1->ExternalPropertyPathDescriptions);
  TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
              *)&this->ExternalRegisterIndexToVariable,
             (TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
              *)&param_1->ExternalRegisterIndexToVariable);
  TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
               *)&this->Operands,
              (TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
               *)&param_1->Operands);
  this->Hash = param_1->Hash;
  this->bEncounteredSurpressedErrors = param_1->bEncounteredSurpressedErrors;
  if (&this->OperandToDebugRegisters != &param_1->OperandToDebugRegisters) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->OperandToDebugRegisters).field_0x38,
               (int *)&(this->OperandToDebugRegisters).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->OperandToDebugRegisters).field_0x38,
               *(int *)&(param_1->OperandToDebugRegisters).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->OperandToDebugRegisters,
                (TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FRigVMOperand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->OperandToDebugRegisters);
  }
  return this;
}

