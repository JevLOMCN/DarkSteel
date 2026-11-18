// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 3

// StaticStruct @ 14e8aa570

UScriptStruct * __cdecl FDataflowSphereCovering::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSphereCovering.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowSphereCovering.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSphereCovering,(UObject *)pUVar1,
                         L"DataflowSphereCovering");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSphereCovering.OuterSingleton;
}

// FDataflowSphereCovering @ 14e91ba40

FDataflowSphereCovering * __thiscall
FDataflowSphereCovering::FDataflowSphereCovering
          (FDataflowSphereCovering *this,FDataflowSphereCovering *param_1)

{
  int *piVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->Spheres).Position.ArrayMax;
  (this->Spheres).Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Spheres).Position.ArrayNum;
  pFVar4 = (param_1->Spheres).Position.AllocatorInstance.Data;
  (this->Spheres).Position.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->Spheres).Position.AllocatorInstance.Data,pFVar4,(longlong)iVar3 * 0x18);
  }
  pTVar2 = &(this->Spheres).Radius;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Spheres).Radius.ArrayMax;
  iVar3 = (param_1->Spheres).Radius.ArrayNum;
  pFVar4 = (param_1->Spheres).Radius.AllocatorInstance.Data;
  (this->Spheres).Radius.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  return this;
}

// ~FDataflowSphereCovering @ 14e933330

void __thiscall FDataflowSphereCovering::~FDataflowSphereCovering(FDataflowSphereCovering *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Spheres).Radius.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Spheres).Position.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

