// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// FEventPayload @ 14660f7e0

FEventPayload * __thiscall FEventPayload::FEventPayload(FEventPayload *this,FEventPayload *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  this->EventName = param_1->EventName;
  FSoftObjectPath::FSoftObjectPath(&(this->Parameters).StructType,&(param_1->Parameters).StructType)
  ;
  pTVar1 = &(this->Parameters).StructBytes;
  (this->Parameters).PackageFileVersion = (param_1->Parameters).PackageFileVersion;
  (this->Parameters).LicenseePackageFileVersion = (param_1->Parameters).LicenseePackageFileVersion;
  piVar2 = &(this->Parameters).StructBytes.ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Parameters).StructBytes.ArrayNum;
  _Src = (param_1->Parameters).StructBytes.AllocatorInstance.Data;
  (this->Parameters).StructBytes.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  return this;
}

// StaticStruct @ 146728ce0

UScriptStruct * __cdecl FEventPayload::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEventPayload.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FEventPayload.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEventPayload,(UObject *)pUVar1,L"EventPayload");
  }
  return Z_Registration_Info_UScriptStruct_FEventPayload.OuterSingleton;
}

