// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// FPCGKernelAttributeDesc @ 1497df760

FPCGKernelAttributeDesc * __thiscall
FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
          (FPCGKernelAttributeDesc *this,FPCGKernelAttributeDesc *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  EPCGMetadataDomainFlag EVar4;
  undefined3 uVar5;
  
  this->AttributeId = param_1->AttributeId;
  EVar4 = (param_1->AttributeKey).Identifier.MetadataDomain.Flag;
  uVar5 = *(undefined3 *)&(param_1->AttributeKey).Identifier.MetadataDomain.field_0x1;
  iVar3 = (param_1->AttributeKey).Identifier.MetadataDomain.CustomFlag;
  (this->AttributeKey).Identifier.Name = (param_1->AttributeKey).Identifier.Name;
  (this->AttributeKey).Identifier.MetadataDomain.Flag = EVar4;
  *(undefined3 *)&(this->AttributeKey).Identifier.MetadataDomain.field_0x1 = uVar5;
  (this->AttributeKey).Identifier.MetadataDomain.CustomFlag = iVar3;
  (this->AttributeKey).Identifier.MetadataDomain.DebugName =
       (param_1->AttributeKey).Identifier.MetadataDomain.DebugName;
  (this->AttributeKey).Type = (param_1->AttributeKey).Type;
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)&(this->AttributeKey).Name,
             (FPCGAttributePropertySelector *)&(param_1->AttributeKey).Name);
  pTVar1 = &this->UniqueStringKeys;
  *(undefined ***)&(this->AttributeKey).Name = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_
  ;
  piVar2 = &(this->UniqueStringKeys).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->UniqueStringKeys).ArrayNum;
  _Src = (param_1->UniqueStringKeys).AllocatorInstance.Data;
  (this->UniqueStringKeys).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  return this;
}

// ~FPCGKernelAttributeDesc @ 1497e2a50

void __thiscall FPCGKernelAttributeDesc::~FPCGKernelAttributeDesc(FPCGKernelAttributeDesc *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->UniqueStringKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->AttributeKey).Name.field_0x28,
             *(int *)&(this->AttributeKey).Name.field_0x30);
  pvVar2 = *(void **)&(this->AttributeKey).Name.field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// operator== @ 1497e3880

bool __thiscall
FPCGKernelAttributeDesc::operator==(FPCGKernelAttributeDesc *this,FPCGKernelAttributeDesc *param_1)

{
  if ((((this->AttributeId == param_1->AttributeId) &&
       ((this->AttributeKey).Type == (param_1->AttributeKey).Type)) &&
      ((this->AttributeKey).Identifier.Name == (param_1->AttributeKey).Identifier.Name)) &&
     (((this->AttributeKey).Identifier.MetadataDomain.Flag ==
       (param_1->AttributeKey).Identifier.MetadataDomain.Flag &&
      ((this->AttributeKey).Identifier.MetadataDomain.CustomFlag ==
       (param_1->AttributeKey).Identifier.MetadataDomain.CustomFlag)))) {
    return true;
  }
  return false;
}

// AddUniqueStringKeys @ 1497ee460

void __thiscall
FPCGKernelAttributeDesc::AddUniqueStringKeys
          (FPCGKernelAttributeDesc *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int local_res10 [2];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar1) break;
    local_res10[0] = *(int *)pFVar3;
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (&this->UniqueStringKeys,local_res10);
    pFVar3 = pFVar3 + 4;
  }
  return;
}

// SetAttributeId @ 14982d490

void __thiscall FPCGKernelAttributeDesc::SetAttributeId(FPCGKernelAttributeDesc *this,int param_1)

{
  this->AttributeId = param_1;
  return;
}

// SetStringKeys @ 149840e00

void __thiscall
FPCGKernelAttributeDesc::SetStringKeys
          (FPCGKernelAttributeDesc *this,TArrayView<int_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  int *_Src;
  
  iVar2 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  piVar1 = &(this->UniqueStringKeys).ArrayMax;
  (this->UniqueStringKeys).ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,*piVar1,&(this->UniqueStringKeys).AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->UniqueStringKeys).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  }
  return;
}

