// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// operator= @ 149d35410

FPCGSkinnedMeshInstanceList * __thiscall
FPCGSkinnedMeshInstanceList::operator=
          (FPCGSkinnedMeshInstanceList *this,FPCGSkinnedMeshInstanceList *param_1)

{
  int *piVar1;
  TArray<FPCGSkinnedMeshInstance,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  FScriptContainerElement *_Src;
  longlong lVar6;
  byte bVar7;
  
  *(int *)&(this->Descriptor)._padding_ = (int)(param_1->Descriptor)._padding_;
  *(undefined1 *)((longlong)&(this->Descriptor)._padding_ + 4) =
       *(undefined1 *)((longlong)&(param_1->Descriptor)._padding_ + 4);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (UObject *)(param_1->Descriptor)._padding_, pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  (this->Descriptor)._padding_ = (param_1->Descriptor)._padding_;
  bVar7 = *(byte *)((longlong)&(this->Descriptor)._padding_ + 4);
  *(int *)&(this->Descriptor)._padding_ = (int)(param_1->Descriptor)._padding_;
  *(undefined4 *)((longlong)&(this->Descriptor)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->Descriptor)._padding_ + 4);
  *(int *)&(this->Descriptor)._padding_ = (int)(param_1->Descriptor)._padding_;
  bVar7 = (bVar7 ^ *(byte *)((longlong)&(param_1->Descriptor)._padding_ + 4)) & 1 ^
          *(byte *)((longlong)&(this->Descriptor)._padding_ + 4);
  *(byte *)((longlong)&(this->Descriptor)._padding_ + 4) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)((longlong)&(param_1->Descriptor)._padding_ + 4)) & 2 ^ bVar7;
  *(byte *)((longlong)&(this->Descriptor)._padding_ + 4) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)((longlong)&(param_1->Descriptor)._padding_ + 4)) & 4 ^ bVar7;
  *(byte *)((longlong)&(this->Descriptor)._padding_ + 4) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)((longlong)&(param_1->Descriptor)._padding_ + 4)) & 8 ^ bVar7;
  *(byte *)((longlong)&(this->Descriptor)._padding_ + 4) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)((longlong)&(param_1->Descriptor)._padding_ + 4)) & 0x10 ^ bVar7;
  *(byte *)((longlong)&(this->Descriptor)._padding_ + 4) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)((longlong)&(param_1->Descriptor)._padding_ + 4)) & 0x20 ^ bVar7;
  *(byte *)((longlong)&(this->Descriptor)._padding_ + 4) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)((longlong)&(param_1->Descriptor)._padding_ + 4)) & 0x40 ^ bVar7;
  *(byte *)((longlong)&(this->Descriptor)._padding_ + 4) = bVar7;
  *(byte *)((longlong)&(this->Descriptor)._padding_ + 4) =
       (bVar7 ^ *(byte *)((longlong)&(param_1->Descriptor)._padding_ + 4)) & 0x7f ^
       *(byte *)((longlong)&(param_1->Descriptor)._padding_ + 4);
  bVar7 = (*(byte *)((longlong)&(this->Descriptor)._padding_ + 5) ^
          *(byte *)((longlong)&(param_1->Descriptor)._padding_ + 5)) & 1 ^
          *(byte *)((longlong)&(this->Descriptor)._padding_ + 5);
  *(byte *)((longlong)&(this->Descriptor)._padding_ + 5) = bVar7;
  *(byte *)((longlong)&(this->Descriptor)._padding_ + 5) =
       (bVar7 ^ *(byte *)((longlong)&(param_1->Descriptor)._padding_ + 5)) & 2 ^ bVar7;
  *(undefined1 *)((longlong)&(this->Descriptor)._padding_ + 6) =
       *(undefined1 *)((longlong)&(param_1->Descriptor)._padding_ + 6);
  *(undefined1 *)((longlong)&(this->Descriptor)._padding_ + 7) =
       *(undefined1 *)((longlong)&(param_1->Descriptor)._padding_ + 7);
  *(char *)&(this->Descriptor)._padding_ = (char)(param_1->Descriptor)._padding_;
  lVar6 = (param_1->Descriptor)._padding_;
  (this->Descriptor)._padding_ = (param_1->Descriptor)._padding_;
  (this->Descriptor)._padding_ = lVar6;
  lVar6 = (param_1->Descriptor)._padding_;
  (this->Descriptor)._padding_ = (param_1->Descriptor)._padding_;
  (this->Descriptor)._padding_ = lVar6;
  lVar6 = (param_1->Descriptor)._padding_;
  (this->Descriptor)._padding_ = (param_1->Descriptor)._padding_;
  (this->Descriptor)._padding_ = lVar6;
  (this->Descriptor)._padding_ = (param_1->Descriptor)._padding_;
  *(char *)&(this->Descriptor)._padding_ = (char)(param_1->Descriptor)._padding_;
  *(undefined4 *)((longlong)&(this->Descriptor)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->Descriptor)._padding_ + 4);
  *(int *)&(this->Descriptor)._padding_ = (int)(param_1->Descriptor)._padding_;
  (this->Descriptor)._padding_ = (param_1->Descriptor)._padding_;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->Descriptor)._padding_,
             (FSoftObjectPath *)&(param_1->Descriptor)._padding_);
  (this->Descriptor)._padding_ = (param_1->Descriptor)._padding_;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->Descriptor)._padding_,
             (FSoftObjectPath *)&(param_1->Descriptor)._padding_);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Descriptor).ComponentTags,&(param_1->Descriptor).ComponentTags);
  pTVar2 = &this->Instances;
  if (pTVar2 != &param_1->Instances) {
    iVar3 = (this->Instances).ArrayMax;
    piVar1 = &(this->Instances).ArrayMax;
    _Src = (param_1->Instances).AllocatorInstance.Data;
    iVar4 = (param_1->Instances).ArrayNum;
    (this->Instances).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x70);
      }
    }
  }
  this->AttributePartitionIndex = param_1->AttributePartitionIndex;
  (this->PointData).WeakPtr = (param_1->PointData).WeakPtr;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->InstancePointIndices,&param_1->InstancePointIndices);
  return this;
}

// StaticStruct @ 149d783c0

UScriptStruct * __cdecl FPCGSkinnedMeshInstanceList::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGSkinnedMeshInstanceList.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSkinnedMeshInstanceList.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSkinnedMeshInstanceList,(UObject *)pUVar1,
                         L"PCGSkinnedMeshInstanceList");
  }
  return Z_Registration_Info_UScriptStruct_FPCGSkinnedMeshInstanceList.OuterSingleton;
}

