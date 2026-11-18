// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// FTypeInfo @ 14e157d60

FTypeInfo * __thiscall
FOptimusDataTypeRegistry::FTypeInfo::FTypeInfo(FTypeInfo *this,FTypeInfo *param_1)

{
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  undefined8 *puVar6;
  FScriptContainerElement *_Src;
  undefined8 *puVar7;
  
  (this->DataType).Object = (param_1->DataType).Object;
  pTVar4 = (param_1->DataType).SharedReferenceCount.ReferenceController;
  (this->DataType).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  lVar5 = *(longlong *)&param_1->PropertyCreateFunc;
  *(undefined8 *)&(this->PropertyCreateFunc).field_0x28 = 0;
  *(longlong *)&this->PropertyCreateFunc = lVar5;
  if (lVar5 != 0) {
    puVar6 = *(undefined8 **)&(param_1->PropertyCreateFunc).field_0x28;
    puVar7 = (undefined8 *)&(param_1->PropertyCreateFunc).field_0x10;
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = puVar6;
    }
    (**(code **)*puVar7)(puVar7,&(this->PropertyCreateFunc).field_0x10);
  }
  lVar5 = *(longlong *)&param_1->PropertyValueConvertFunc;
  *(longlong *)&this->PropertyValueConvertFunc = lVar5;
  *(undefined8 *)&(this->PropertyValueConvertFunc).field_0x28 = 0;
  if (lVar5 != 0) {
    puVar6 = *(undefined8 **)&(param_1->PropertyValueConvertFunc).field_0x28;
    puVar7 = (undefined8 *)&(param_1->PropertyValueConvertFunc).field_0x10;
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = puVar6;
    }
    (**(code **)*puVar7)();
  }
  pTVar1 = &this->ArrayMetadata;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ArrayMetadata).ArrayMax;
  iVar3 = (param_1->ArrayMetadata).ArrayNum;
  _Src = (param_1->ArrayMetadata).AllocatorInstance.Data;
  (this->ArrayMetadata).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

