// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// operator<FOptimusValueIdentifier,FOptimusValueDescription>_TTuple<FOptimusValueIdentifier,FOptimusValueDescription> @ 14e120a40

TTuple<FOptimusValueIdentifier,FOptimusValueDescription> * __thiscall
TPairInitializer<FOptimusValueIdentifier_const_&,FOptimusValueDescription_const_&>::
operator<FOptimusValueIdentifier,FOptimusValueDescription>_TTuple<FOptimusValueIdentifier,FOptimusValueDescription>
          (TPairInitializer<FOptimusValueIdentifier_const_&,FOptimusValueDescription_const_&> *this,
          TTuple<FOptimusValueIdentifier,FOptimusValueDescription> *__return_storage_ptr__)

{
  FOptimusValueIdentifier *pFVar1;
  FOptimusValueDescription *pFVar2;
  undefined3 uVar3;
  FNameEntryId FVar4;
  uint uVar5;
  
  pFVar1 = this->Key;
  pFVar2 = this->Value;
  uVar3 = *(undefined3 *)&pFVar1->field_0x1;
  FVar4.Value = (pFVar1->Name).ComparisonIndex.Value;
  __return_storage_ptr__->field_0x0 = pFVar1->Type;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x4 = FVar4.Value;
  *(uint *)&__return_storage_ptr__->field_0x8 = (pFVar1->Name).Number;
  uVar5 = (pFVar2->DataType).TypeName.Number;
  *(uint *)&__return_storage_ptr__->field_0x10 = (pFVar2->DataType).TypeName.ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x14 = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 =
       *(undefined8 *)&(pFVar2->DataType).TypeObject.SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&__return_storage_ptr__->field_0x20,
             (FSoftObjectPath *)&(pFVar2->DataType).TypeObject.SoftObjectPtr.field_0x8);
  __return_storage_ptr__->field_0x40 = pFVar2->ValueUsage;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  FInstancedStruct::InitializeAs
            ((FInstancedStruct *)&__return_storage_ptr__->field_0x48,
             (pFVar2->Value).Value.Value.ScriptStruct.field0_0x0.DebugPtr,
             (pFVar2->Value).Value.Value.StructMemory);
  FShaderValueContainer::FShaderValueContainer
            ((FShaderValueContainer *)&__return_storage_ptr__->field_0x58,&pFVar2->ShaderValue);
  return __return_storage_ptr__;
}

// operator<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>_TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*> @ 14e120ac0

TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*> * __thiscall
TPairInitializer<TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UOptimusNodePin_*_const_&>::
operator<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>_TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>
          (TPairInitializer<TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UOptimusNodePin_*_const_&>
           *this,TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>
                 *__return_storage_ptr__)

{
  int iVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  UOptimusNodePin **ppUVar3;
  FScriptContainerElement *_Src;
  
  pTVar2 = this->Key;
  ppUVar3 = this->Value;
  *(undefined8 *)__return_storage_ptr__ = 0;
  iVar1 = pTVar2->ArrayNum;
  _Src = (pTVar2->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x8 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar1,0,(ForAnyElementType *)__return_storage_ptr__,iVar1,
               (int *)&__return_storage_ptr__->field_0xc);
    memcpy(*(void **)__return_storage_ptr__,_Src,(longlong)iVar1 << 3);
  }
  *(UOptimusNodePin **)&__return_storage_ptr__->field_0x10 = *ppUVar3;
  return __return_storage_ptr__;
}

