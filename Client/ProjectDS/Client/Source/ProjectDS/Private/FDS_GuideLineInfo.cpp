// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b78a190

UScriptStruct * __cdecl FDS_GuideLineInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_GuideLineInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_GuideLineInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_GuideLineInfo,(UObject *)pUVar1,
                         L"DS_GuideLineInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_GuideLineInfo.OuterSingleton;
}

// FDS_GuideLineInfo @ 14b78c290

FDS_GuideLineInfo * __thiscall FDS_GuideLineInfo::FDS_GuideLineInfo(FDS_GuideLineInfo *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  this->bIsSet = false;
  piVar1 = &(this->GuideLine).ArrayNum;
  piVar2 = &(this->GuideLine).ArrayMax;
  *piVar1 = 0;
  this->MinDist = 0.0;
  (this->GuideLine).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  this->SnappingPos = 0.0;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,2,&(this->GuideLine).AllocatorInstance,piVar1,piVar2);
  pFVar4 = (this->GuideLine).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)(pFVar4 + 8) = 0;
  *(undefined8 *)(pFVar4 + 0x10) = 0;
  *(undefined8 *)(pFVar4 + 0x18) = 0;
  return this;
}

