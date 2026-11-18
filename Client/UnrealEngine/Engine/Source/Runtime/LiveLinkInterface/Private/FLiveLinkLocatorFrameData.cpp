// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 2

// StaticStruct @ 14cfb0ce0

UScriptStruct * __cdecl FLiveLinkLocatorFrameData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLocatorFrameData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkLocatorFrameData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLocatorFrameData,(UObject *)pUVar1,
                         L"LiveLinkLocatorFrameData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkLocatorFrameData.OuterSingleton;
}

// operator= @ 14cfb7060

FLiveLinkLocatorFrameData * __thiscall
FLiveLinkLocatorFrameData::operator=
          (FLiveLinkLocatorFrameData *this,FLiveLinkLocatorFrameData *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  FLiveLinkBaseFrameData::operator=
            ((FLiveLinkBaseFrameData *)this,(FLiveLinkBaseFrameData *)param_1);
  pTVar2 = &this->Locators;
  if (pTVar2 != &param_1->Locators) {
    iVar3 = (param_1->Locators).ArrayNum;
    piVar1 = &(this->Locators).ArrayMax;
    _Src = (param_1->Locators).AllocatorInstance.Data;
    (this->Locators).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x18);
      }
    }
  }
  return this;
}

