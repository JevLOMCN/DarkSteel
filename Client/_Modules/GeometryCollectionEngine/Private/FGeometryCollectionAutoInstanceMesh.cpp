// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 4

// StaticStruct @ 146399cb0

UScriptStruct * __cdecl FGeometryCollectionAutoInstanceMesh::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionAutoInstanceMesh.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionAutoInstanceMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh,
                         (UObject *)pUVar1,L"GeometryCollectionAutoInstanceMesh");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionAutoInstanceMesh.OuterSingleton;
}

// FGeometryCollectionAutoInstanceMesh @ 1463a1370

FGeometryCollectionAutoInstanceMesh * __thiscall
FGeometryCollectionAutoInstanceMesh::FGeometryCollectionAutoInstanceMesh
          (FGeometryCollectionAutoInstanceMesh *this,FGeometryCollectionAutoInstanceMesh *param_1)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  UStaticMesh *pUVar5;
  FScriptContainerElement *pFVar6;
  
  pUVar5 = (param_1->Mesh).field0_0x0.DebugPtr;
  (this->Mesh).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pTVar1 = &this->Materials;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Materials).ArrayMax;
  iVar4 = (param_1->Materials).ArrayNum;
  pFVar6 = (param_1->Materials).AllocatorInstance.Data;
  (this->Materials).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar6,iVar4);
  }
  pTVar3 = &this->CustomData;
  this->NumInstances = param_1->NumInstances;
  piVar2 = &(this->CustomData).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->CustomData).ArrayNum;
  pFVar6 = (param_1->CustomData).AllocatorInstance.Data;
  (this->CustomData).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar4 << 2);
  }
  return this;
}

// operator== @ 1463a6910

bool __thiscall
FGeometryCollectionAutoInstanceMesh::operator==
          (FGeometryCollectionAutoInstanceMesh *this,FGeometryCollectionAutoInstanceMesh *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (((this->Mesh).field0_0x0.DebugPtr == (param_1->Mesh).field0_0x0.DebugPtr) &&
     (iVar1 = (this->Materials).ArrayNum, iVar1 == (param_1->Materials).ArrayNum)) {
    bVar2 = CompareItems<TObjectPtr<UMaterialInterface>,int>
                      ((TObjectPtr<UMaterialInterface> *)(this->Materials).AllocatorInstance.Data,
                       (TObjectPtr<UMaterialInterface> *)(param_1->Materials).AllocatorInstance.Data
                       ,iVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// GetNumDataPerInstance @ 1463b63f0

int __thiscall
FGeometryCollectionAutoInstanceMesh::GetNumDataPerInstance
          (FGeometryCollectionAutoInstanceMesh *this)

{
  if (this->NumInstances != 0) {
    return (this->CustomData).ArrayNum / this->NumInstances;
  }
  return 0;
}

