// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// StaticStruct @ 14df8f500

UScriptStruct * __cdecl FHairGroupInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairGroupInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairGroupInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupInfo,(UObject *)pUVar1,L"HairGroupInfo"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FHairGroupInfo.OuterSingleton;
}

// operator= @ 14dfb17b0

FHairGroupInfo * __thiscall FHairGroupInfo::operator=(FHairGroupInfo *this,FHairGroupInfo *param_1)

{
  TArray<FHairGroupLODInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->LODInfos;
  this->GroupIndex = param_1->GroupIndex;
  this->GroupID = param_1->GroupID;
  this->GroupName = param_1->GroupName;
  this->NumCurves = param_1->NumCurves;
  this->NumGuides = param_1->NumGuides;
  this->NumCurveVertices = param_1->NumCurveVertices;
  this->NumGuideVertices = param_1->NumGuideVertices;
  this->MaxCurveLength = param_1->MaxCurveLength;
  this->Flags = param_1->Flags;
  if (pTVar1 != &param_1->LODInfos) {
    iVar3 = (this->LODInfos).ArrayMax;
    piVar2 = &(this->LODInfos).ArrayMax;
    _Src = (param_1->LODInfos).AllocatorInstance.Data;
    iVar4 = (param_1->LODInfos).ArrayNum;
    (this->LODInfos).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  return this;
}

