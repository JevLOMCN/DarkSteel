// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// StaticStruct @ 14ad708f0

UScriptStruct * __cdecl FMetasoundFrontendInterfaceMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendInterfaceMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendInterfaceMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendInterfaceMetadata,
                         (UObject *)pUVar1,L"MetasoundFrontendInterfaceMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendInterfaceMetadata.OuterSingleton;
}

// operator= @ 14ad9f840

FMetasoundFrontendInterfaceMetadata * __thiscall
FMetasoundFrontendInterfaceMetadata::operator=
          (FMetasoundFrontendInterfaceMetadata *this,FMetasoundFrontendInterfaceMetadata *param_1)

{
  TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FMetasoundFrontendVersionNumber FVar5;
  
  FVar5 = (param_1->Version).Number;
  pTVar1 = &this->UClassOptions;
  (this->Version).Name = (param_1->Version).Name;
  (this->Version).Number = FVar5;
  if (pTVar1 != &param_1->UClassOptions) {
    iVar3 = (this->UClassOptions).ArrayMax;
    piVar2 = &(this->UClassOptions).ArrayMax;
    _Src = (param_1->UClassOptions).AllocatorInstance.Data;
    iVar4 = (param_1->UClassOptions).ArrayNum;
    (this->UClassOptions).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x14);
      }
    }
  }
  return this;
}

// FMetasoundFrontendInterfaceMetadata @ 14ae59b60

FMetasoundFrontendInterfaceMetadata * __thiscall
FMetasoundFrontendInterfaceMetadata::FMetasoundFrontendInterfaceMetadata
          (FMetasoundFrontendInterfaceMetadata *this,FMetasoundFrontendInterfaceMetadata *param_1)

{
  TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FMetasoundFrontendVersionNumber FVar4;
  
  FVar4 = (param_1->Version).Number;
  pTVar1 = &this->UClassOptions;
  piVar2 = &(this->UClassOptions).ArrayMax;
  (this->Version).Name = (param_1->Version).Name;
  (this->Version).Number = FVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->UClassOptions).ArrayNum;
  _Src = (param_1->UClassOptions).AllocatorInstance.Data;
  (this->UClassOptions).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x14);
  }
  return this;
}

