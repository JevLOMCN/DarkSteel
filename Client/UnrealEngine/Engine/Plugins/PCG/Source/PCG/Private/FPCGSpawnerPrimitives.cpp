// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 14978a460

UScriptStruct * __cdecl FPCGSpawnerPrimitives::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGSpawnerPrimitives.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSpawnerPrimitives.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSpawnerPrimitives,(UObject *)pUVar1,
                         L"PCGSpawnerPrimitives");
  }
  return Z_Registration_Info_UScriptStruct_FPCGSpawnerPrimitives.OuterSingleton;
}

// FPCGSpawnerPrimitives @ 1497e0090

FPCGSpawnerPrimitives * __thiscall
FPCGSpawnerPrimitives::FPCGSpawnerPrimitives
          (FPCGSpawnerPrimitives *this,FPCGSpawnerPrimitives *param_1)

{
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TIntVector4<unsigned_int>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  (this->PrimitiveFactory).Object = (param_1->PrimitiveFactory).Object;
  pTVar6 = (param_1->PrimitiveFactory).SharedReferenceCount.ReferenceController;
  (this->PrimitiveFactory).SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->PrimitiveMeshBounds;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PrimitiveMeshBounds).ArrayMax;
  iVar5 = (param_1->PrimitiveMeshBounds).ArrayNum;
  pFVar7 = (param_1->PrimitiveMeshBounds).AllocatorInstance.Data;
  (this->PrimitiveMeshBounds).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar7,(longlong)iVar5 * 0x38);
  }
  pTVar3 = &this->SelectionCDF;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SelectionCDF).ArrayMax;
  iVar5 = (param_1->SelectionCDF).ArrayNum;
  pFVar7 = (param_1->SelectionCDF).AllocatorInstance.Data;
  (this->SelectionCDF).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar5 << 2);
  }
  pTVar4 = &this->AttributeIdOffsetStrides;
  this->NumCustomFloats = param_1->NumCustomFloats;
  piVar2 = &(this->AttributeIdOffsetStrides).ArrayMax;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->AttributeIdOffsetStrides).ArrayNum;
  pFVar7 = (param_1->AttributeIdOffsetStrides).AllocatorInstance.Data;
  (this->AttributeIdOffsetStrides).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar5 << 4);
  }
  this->SelectorAttributeId = param_1->SelectorAttributeId;
  return this;
}

