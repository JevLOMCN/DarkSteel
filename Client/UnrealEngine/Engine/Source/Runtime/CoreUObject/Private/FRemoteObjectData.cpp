// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FRemoteObjectData @ 1421b2f60

FRemoteObjectData * __thiscall
FRemoteObjectData::FRemoteObjectData(FRemoteObjectData *this,FRemoteObjectData *param_1)

{
  TArray<FRemoteObjectId,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FPackedRemoteObjectPathName,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  TArray<FRemoteObjectBytes,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FPackedRemoteObjectPathName *pFVar7;
  
  piVar3 = &(this->Tables).Names.ArrayMax;
  (this->Tables).Names.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Tables).Names.ArrayNum;
  pFVar6 = (param_1->Tables).Names.AllocatorInstance.Data;
  (this->Tables).Names.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,(ForAnyElementType *)this,iVar5,piVar3);
    memcpy((this->Tables).Names.AllocatorInstance.Data,pFVar6,(longlong)iVar5 << 3);
  }
  pTVar1 = &(this->Tables).RemoteIds;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->Tables).RemoteIds.ArrayMax;
  iVar5 = (param_1->Tables).RemoteIds.ArrayNum;
  pFVar6 = (param_1->Tables).RemoteIds.AllocatorInstance.Data;
  (this->Tables).RemoteIds.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar3);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
  }
  pTVar2 = &this->PathNames;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->PathNames).ArrayMax;
  iVar5 = (param_1->PathNames).ArrayNum;
  pFVar7 = (FPackedRemoteObjectPathName *)(param_1->PathNames).AllocatorInstance.Data;
  (this->PathNames).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar3);
    ConstructItems<FPackedRemoteObjectPathName,FPackedRemoteObjectPathName,int>
              ((pTVar2->AllocatorInstance).Data,pFVar7,iVar5);
  }
  pTVar4 = &this->Bytes;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->Bytes).ArrayMax;
  iVar5 = (param_1->Bytes).ArrayNum;
  pFVar6 = (param_1->Bytes).AllocatorInstance.Data;
  (this->Bytes).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar3);
    ConstructItems<FRemoteObjectBytes,FRemoteObjectBytes,int>
              ((pTVar4->AllocatorInstance).Data,(FRemoteObjectBytes *)pFVar6,iVar5);
  }
  return this;
}

// ~FRemoteObjectData @ 1421b64e0

void __thiscall FRemoteObjectData::~FRemoteObjectData(FRemoteObjectData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FRemoteObjectBytes,int>
            ((FRemoteObjectBytes *)(this->Bytes).AllocatorInstance.Data,(this->Bytes).ArrayNum);
  pFVar1 = (this->Bytes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPackedRemoteObjectPathName,int>
            ((FPackedRemoteObjectPathName *)(this->PathNames).AllocatorInstance.Data,
             (this->PathNames).ArrayNum);
  pFVar1 = (this->PathNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tables).RemoteIds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tables).Names.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetNumBytes @ 1421cfda0

int __thiscall FRemoteObjectData::GetNumBytes(FRemoteObjectData *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Bytes).ArrayNum;
  iVar4 = 0;
  pFVar2 = (this->Bytes).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Bytes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRemoteObjectBytes_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    iVar4 = iVar4 + *(int *)(pFVar2 + 8);
    pFVar2 = pFVar2 + 0x10;
  }
  return iVar4;
}

