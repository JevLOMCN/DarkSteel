// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 149852b80

UScriptStruct * __cdecl FPCGInitializeFromDataParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGInitializeFromDataParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGInitializeFromDataParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGInitializeFromDataParams,(UObject *)pUVar1,
                         L"PCGInitializeFromDataParams");
  }
  return Z_Registration_Info_UScriptStruct_FPCGInitializeFromDataParams.OuterSingleton;
}

// FPCGInitializeFromDataParams @ 14988c890

FPCGInitializeFromDataParams * __thiscall
FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
          (FPCGInitializeFromDataParams *this,FPCGInitializeFromDataParams *param_1)

{
  TArray<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  int iVar4;
  UPCGSpatialData *pUVar5;
  FScriptContainerElement *_Src;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *pTVar6;
  
  pUVar5 = (param_1->Source).field0_0x0.DebugPtr;
  (this->Source).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar5 = (param_1->SourceOverride).field0_0x0.DebugPtr;
  (this->SourceOverride).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pTVar1 = &(this->MetadataInitializeParams).DomainMapping;
  this->bInheritMetadata = param_1->bInheritMetadata;
  this->bInheritAttributes = param_1->bInheritAttributes;
  this->bInheritSpatialData = param_1->bInheritSpatialData;
  this->bIsDuplicatingData = param_1->bIsDuplicatingData;
  (this->MetadataInitializeParams).Parent = (param_1->MetadataInitializeParams).Parent;
  piVar2 = &(this->MetadataInitializeParams).DomainMapping.ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->MetadataInitializeParams).DomainMapping.ArrayNum;
  _Src = (param_1->MetadataInitializeParams).DomainMapping.AllocatorInstance.Data;
  (this->MetadataInitializeParams).DomainMapping.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 5);
  }
  pTVar3 = &(this->MetadataInitializeParams).DomainInitializeParams;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->MetadataInitializeParams).DomainInitializeParams.ArrayMax;
  iVar4 = (param_1->MetadataInitializeParams).DomainInitializeParams.ArrayNum;
  pTVar6 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
           (param_1->MetadataInitializeParams).DomainInitializeParams.AllocatorInstance.Data;
  (this->MetadataInitializeParams).DomainInitializeParams.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar6,iVar4);
  }
  return this;
}

// FPCGInitializeFromDataParams @ 14988c9d0

FPCGInitializeFromDataParams * __thiscall
FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
          (FPCGInitializeFromDataParams *this,UPCGSpatialData *param_1)

{
  UPCGMetadata *pUVar1;
  
  (this->Source).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGSpatialData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pUVar1 = (UPCGMetadata *)0x0;
  this->bInheritMetadata = true;
  this->bInheritAttributes = true;
  this->bInheritSpatialData = true;
  this->bIsDuplicatingData = false;
  (this->SourceOverride).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
  if (param_1 != (UPCGSpatialData *)0x0) {
    pUVar1 = (UPCGMetadata *)(**(code **)(param_1->_padding_ + 800))(param_1);
  }
  (this->MetadataInitializeParams).Parent = pUVar1;
  (this->MetadataInitializeParams).DomainMapping.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MetadataInitializeParams).DomainMapping.ArrayNum = 0;
  (this->MetadataInitializeParams).DomainMapping.ArrayMax = 0;
  (this->MetadataInitializeParams).DomainInitializeParams.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MetadataInitializeParams).DomainInitializeParams.ArrayNum = 0;
  (this->MetadataInitializeParams).DomainInitializeParams.ArrayMax = 0;
  return this;
}

// FPCGInitializeFromDataParams @ 14988ca50

FPCGInitializeFromDataParams * __thiscall
FPCGInitializeFromDataParams::FPCGInitializeFromDataParams(FPCGInitializeFromDataParams *this)

{
  (this->Source).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
  (this->SourceOverride).field0_0x0.DebugPtr = (UPCGSpatialData *)0x0;
  this->bInheritMetadata = true;
  this->bInheritAttributes = true;
  this->bInheritSpatialData = true;
  this->bIsDuplicatingData = false;
  (this->MetadataInitializeParams).Parent = (UPCGMetadata *)0x0;
  (this->MetadataInitializeParams).DomainMapping.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MetadataInitializeParams).DomainMapping.ArrayNum = 0;
  (this->MetadataInitializeParams).DomainMapping.ArrayMax = 0;
  (this->MetadataInitializeParams).DomainInitializeParams.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MetadataInitializeParams).DomainInitializeParams.ArrayNum = 0;
  (this->MetadataInitializeParams).DomainInitializeParams.ArrayMax = 0;
  return this;
}

