// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b498440

UScriptStruct * __cdecl FDS_FloatingTextNumberData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_FloatingTextNumberData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_FloatingTextNumberData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_FloatingTextNumberData,(UObject *)pUVar1,
                         L"DS_FloatingTextNumberData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_FloatingTextNumberData.OuterSingleton;
}

// operator= @ 14b49ae10

FDS_FloatingTextNumberData * __thiscall
FDS_FloatingTextNumberData::operator=
          (FDS_FloatingTextNumberData *this,FDS_FloatingTextNumberData *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  this->FloatingTextWindowID = param_1->FloatingTextWindowID;
  this->NumberFontType = param_1->NumberFontType;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->AnimationSequenceList,&param_1->AnimationSequenceList);
  pTVar1 = &this->IconIDs;
  if (pTVar1 != &param_1->IconIDs) {
    iVar3 = (param_1->IconIDs).ArrayNum;
    piVar2 = &(this->IconIDs).ArrayMax;
    _Src = (param_1->IconIDs).AllocatorInstance.Data;
    (this->IconIDs).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
      }
    }
  }
  return this;
}

