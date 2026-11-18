// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1485e3270

UScriptStruct * __cdecl FSkeletalMeshSamplingBuiltData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingBuiltData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingBuiltData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData,(UObject *)pUVar1,
                         L"SkeletalMeshSamplingBuiltData");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingBuiltData.OuterSingleton;
}

// operator= @ 148626a90

FSkeletalMeshSamplingBuiltData * __thiscall
FSkeletalMeshSamplingBuiltData::operator=
          (FSkeletalMeshSamplingBuiltData *this,FSkeletalMeshSamplingBuiltData *param_1)

{
  int *piVar1;
  TArray<FSkeletalMeshSamplingRegionBuiltData,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FSkeletalMeshSamplingRegionBuiltData *pFVar5;
  
  if (this != param_1) {
    DestructItems<FSkeletalMeshSamplingLODBuiltData,int>
              ((FSkeletalMeshSamplingLODBuiltData *)
               (this->WholeMeshBuiltData).AllocatorInstance.Data,(this->WholeMeshBuiltData).ArrayNum
              );
    iVar3 = (param_1->WholeMeshBuiltData).ArrayNum;
    piVar1 = &(this->WholeMeshBuiltData).ArrayMax;
    pFVar4 = (param_1->WholeMeshBuiltData).AllocatorInstance.Data;
    (this->WholeMeshBuiltData).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar3,*piVar1,(ForAnyElementType *)this,iVar3,piVar1);
      ConstructItems<FSkeletalMeshSamplingLODBuiltData,FSkeletalMeshSamplingLODBuiltData,int>
                ((this->WholeMeshBuiltData).AllocatorInstance.Data,
                 (FSkeletalMeshSamplingLODBuiltData *)pFVar4,iVar3);
    }
  }
  pTVar2 = &this->RegionBuiltData;
  if (pTVar2 != &param_1->RegionBuiltData) {
    DestructItems<FSkeletalMeshSamplingRegionBuiltData,int>
              ((FSkeletalMeshSamplingRegionBuiltData *)(pTVar2->AllocatorInstance).Data,
               (this->RegionBuiltData).ArrayNum);
    iVar3 = (param_1->RegionBuiltData).ArrayNum;
    piVar1 = &(this->RegionBuiltData).ArrayMax;
    pFVar5 = (FSkeletalMeshSamplingRegionBuiltData *)
             (param_1->RegionBuiltData).AllocatorInstance.Data;
    (this->RegionBuiltData).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FSkeletalMeshSamplingRegionBuiltData,FSkeletalMeshSamplingRegionBuiltData,int>
                ((pTVar2->AllocatorInstance).Data,pFVar5,iVar3);
    }
  }
  return this;
}

