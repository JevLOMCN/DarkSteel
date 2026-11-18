// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// operator= @ 146a59150

FInstanceCacheDataBase * __thiscall
FInstanceCacheDataBase::operator=(FInstanceCacheDataBase *this,FInstanceCacheDataBase *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FDataCacheDuplicatedObjectData,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined4 uVar7;
  
  pTVar1 = &this->SavedProperties;
  if (pTVar1 != &param_1->SavedProperties) {
    iVar5 = (param_1->SavedProperties).ArrayNum;
    piVar2 = &(this->SavedProperties).ArrayMax;
    pFVar6 = (param_1->SavedProperties).AllocatorInstance.Data;
    (this->SavedProperties).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar5,*piVar2,&pTVar1->AllocatorInstance,iVar5,piVar2);
      if (iVar5 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5);
      }
    }
  }
  iVar5 = (param_1->UniqueTransientPackage).ObjectPathDepth;
  uVar7 = *(undefined4 *)&(param_1->UniqueTransientPackage).field_0xc;
  pTVar3 = &this->DuplicatedObjects;
  (this->UniqueTransientPackage).DuplicatedObject =
       (param_1->UniqueTransientPackage).DuplicatedObject;
  (this->UniqueTransientPackage).ObjectPathDepth = iVar5;
  *(undefined4 *)&(this->UniqueTransientPackage).field_0xc = uVar7;
  if (pTVar3 != &param_1->DuplicatedObjects) {
    iVar5 = (param_1->DuplicatedObjects).ArrayNum;
    piVar2 = &(this->DuplicatedObjects).ArrayMax;
    pFVar6 = (param_1->DuplicatedObjects).AllocatorInstance.Data;
    (this->DuplicatedObjects).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,*piVar2,&pTVar3->AllocatorInstance,iVar5,piVar2);
      if (iVar5 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 4);
      }
    }
  }
  pTVar4 = &this->ReferencedObjects;
  if (pTVar4 != &param_1->ReferencedObjects) {
    iVar5 = (param_1->ReferencedObjects).ArrayNum;
    piVar2 = &(this->ReferencedObjects).ArrayMax;
    pFVar6 = (param_1->ReferencedObjects).AllocatorInstance.Data;
    (this->ReferencedObjects).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar5,*piVar2,&pTVar4->AllocatorInstance,iVar5,piVar2);
      ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                ((pTVar4->AllocatorInstance).Data,(TObjectPtr<UObject> *)pFVar6,iVar5);
    }
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->ReferencedNames,&param_1->ReferencedNames);
  return this;
}

