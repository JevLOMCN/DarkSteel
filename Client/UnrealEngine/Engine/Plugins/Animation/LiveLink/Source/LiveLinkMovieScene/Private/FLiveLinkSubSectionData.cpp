// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 2

// StaticStruct @ 14d098040

UScriptStruct * __cdecl FLiveLinkSubSectionData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubSectionData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMovieScene();
    Z_Registration_Info_UScriptStruct_FLiveLinkSubSectionData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubSectionData,(UObject *)pUVar1,
                         L"LiveLinkSubSectionData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkSubSectionData.OuterSingleton;
}

// FLiveLinkSubSectionData @ 14d09dfc0

FLiveLinkSubSectionData * __thiscall
FLiveLinkSubSectionData::FLiveLinkSubSectionData
          (FLiveLinkSubSectionData *this,FLiveLinkSubSectionData *param_1)

{
  int *piVar1;
  int iVar2;
  FLiveLinkPropertyData *pFVar3;
  
  (this->Properties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Properties).ArrayMax;
  iVar2 = (param_1->Properties).ArrayNum;
  pFVar3 = (FLiveLinkPropertyData *)(param_1->Properties).AllocatorInstance.Data;
  (this->Properties).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x58,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  ConstructItems<FLiveLinkPropertyData,FLiveLinkPropertyData,int>
            ((this->Properties).AllocatorInstance.Data,pFVar3,iVar2);
  return this;
}

