// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// operator= @ 1499c7620

FPCGPinProperties * __thiscall
FPCGPinProperties::operator=(FPCGPinProperties *this,FPCGPinProperties *param_1)

{
  FPCGDataTypeIdentifier *pFVar1;
  FPCGDataTypeIdentifier *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = &param_1->AllowedTypes;
  this->Label = param_1->Label;
  pFVar2 = &this->AllowedTypes;
  this->Usage = param_1->Usage;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Ids).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Ids).AllocatorInstance.Data = (pFVar1->Ids).AllocatorInstance.Data;
    (pFVar1->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AllowedTypes).Ids.ArrayNum = (param_1->AllowedTypes).Ids.ArrayNum;
    (this->AllowedTypes).Ids.ArrayMax = (param_1->AllowedTypes).Ids.ArrayMax;
    (param_1->AllowedTypes).Ids.ArrayNum = 0;
    (param_1->AllowedTypes).Ids.ArrayMax = 0;
  }
  (this->AllowedTypes).CustomSubtype = (param_1->AllowedTypes).CustomSubtype;
  this->bAllowMultipleData = param_1->bAllowMultipleData;
  this->PinStatus = param_1->PinStatus;
  this->bInvisiblePin = param_1->bInvisiblePin;
  this->bAllowMultipleConnections = param_1->bAllowMultipleConnections;
  return this;
}

// ~FPCGPinProperties @ 149be9670

void __thiscall FPCGPinProperties::~FPCGPinProperties(FPCGPinProperties *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllowedTypes).Ids.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// FPCGPinProperties @ 149ca3d50

FPCGPinProperties * __thiscall
FPCGPinProperties::FPCGPinProperties(FPCGPinProperties *this,FPCGPinProperties *param_1)

{
  FPCGDataTypeIdentifier *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar1 = &this->AllowedTypes;
  this->Label = param_1->Label;
  this->Usage = param_1->Usage;
  (pFVar1->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AllowedTypes).Ids.ArrayMax;
  iVar3 = (param_1->AllowedTypes).Ids.ArrayNum;
  pFVar4 = (param_1->AllowedTypes).Ids.AllocatorInstance.Data;
  (this->AllowedTypes).Ids.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,(ForAnyElementType *)pFVar1,iVar3,piVar2);
    ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
              ((pFVar1->Ids).AllocatorInstance.Data,(FPCGDataTypeBaseId *)pFVar4,iVar3);
  }
  (this->AllowedTypes).CustomSubtype = (param_1->AllowedTypes).CustomSubtype;
  this->bAllowMultipleData = param_1->bAllowMultipleData;
  this->PinStatus = param_1->PinStatus;
  this->bInvisiblePin = param_1->bInvisiblePin;
  this->bAllowMultipleConnections = param_1->bAllowMultipleConnections;
  return this;
}

// StaticStruct @ 149f1fe50

UScriptStruct * __cdecl FPCGPinProperties::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGPinProperties.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGPinProperties.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGPinProperties,(UObject *)pUVar1,
                         L"PCGPinProperties");
  }
  return Z_Registration_Info_UScriptStruct_FPCGPinProperties.OuterSingleton;
}

// FPCGPinProperties @ 149f31280

FPCGPinProperties * __thiscall
FPCGPinProperties::FPCGPinProperties
          (FPCGPinProperties *this,FName *param_1,FPCGDataTypeIdentifier *param_2,bool param_3,
          bool param_4,FText *param_5)

{
  FScriptContainerElement *pFVar1;
  
  this->Label = *param_1;
  this->Usage = Normal;
  (this->AllowedTypes).Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllowedTypes).Ids.AllocatorInstance.Data = (param_2->Ids).AllocatorInstance.Data;
  (param_2->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllowedTypes).Ids.ArrayNum = (param_2->Ids).ArrayNum;
  (this->AllowedTypes).Ids.ArrayMax = (param_2->Ids).ArrayMax;
  (param_2->Ids).ArrayNum = 0;
  (param_2->Ids).ArrayMax = 0;
  (this->AllowedTypes).CustomSubtype = param_2->CustomSubtype;
  this->bAllowMultipleData = param_4;
  this->PinStatus = Normal;
  this->bInvisiblePin = false;
  if (param_3) {
    this->bAllowMultipleData = true;
  }
  this->bAllowMultipleConnections = param_3;
  pFVar1 = (param_2->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FPCGPinProperties @ 149f31300

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGPinProperties * __thiscall FPCGPinProperties::FPCGPinProperties(FPCGPinProperties *this)

{
  FPCGDataTypeIdentifier *pFVar1;
  FScriptContainerElement *pFVar2;
  FPCGDataTypeIdentifier *pFVar3;
  FPCGDataTypeIdentifier local_28;
  
  pFVar1 = &this->AllowedTypes;
  (this->Label).ComparisonIndex = 0;
  (this->Label).Number = 0;
  this->Usage = Normal;
  this->bAllowMultipleData = true;
  this->PinStatus = Normal;
  this->bInvisiblePin = false;
  this->bAllowMultipleConnections = true;
  (pFVar1->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllowedTypes).Ids.ArrayNum = 0;
  (this->AllowedTypes).Ids.ArrayMax = 0;
  (this->AllowedTypes).CustomSubtype = -1;
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Ids).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Ids).AllocatorInstance.Data = (pFVar3->Ids).AllocatorInstance.Data;
    (pFVar3->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AllowedTypes).Ids.ArrayNum = (pFVar3->Ids).ArrayNum;
    (this->AllowedTypes).Ids.ArrayMax = (pFVar3->Ids).ArrayMax;
    (pFVar3->Ids).ArrayNum = 0;
    (pFVar3->Ids).ArrayMax = 0;
  }
  (this->AllowedTypes).CustomSubtype = pFVar3->CustomSubtype;
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  return this;
}

// operator= @ 149f351d0

FPCGPinProperties * __thiscall
FPCGPinProperties::operator=(FPCGPinProperties *this,FPCGPinProperties *param_1)

{
  FPCGDataTypeIdentifier *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  this->Label = param_1->Label;
  pFVar1 = &this->AllowedTypes;
  this->Usage = param_1->Usage;
  if (pFVar1 != &param_1->AllowedTypes) {
    iVar3 = (this->AllowedTypes).Ids.ArrayMax;
    piVar2 = &(this->AllowedTypes).Ids.ArrayMax;
    iVar4 = (param_1->AllowedTypes).Ids.ArrayNum;
    pFVar5 = (param_1->AllowedTypes).Ids.AllocatorInstance.Data;
    (this->AllowedTypes).Ids.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,iVar3,(ForAnyElementType *)pFVar1,iVar4,piVar2);
      ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                ((pFVar1->Ids).AllocatorInstance.Data,(FPCGDataTypeBaseId *)pFVar5,iVar4);
    }
  }
  (this->AllowedTypes).CustomSubtype = (param_1->AllowedTypes).CustomSubtype;
  this->bAllowMultipleData = param_1->bAllowMultipleData;
  this->PinStatus = param_1->PinStatus;
  this->bInvisiblePin = param_1->bInvisiblePin;
  this->bAllowMultipleConnections = param_1->bAllowMultipleConnections;
  return this;
}

// operator== @ 149f35e40

bool __thiscall FPCGPinProperties::operator==(FPCGPinProperties *this,FPCGPinProperties *param_1)

{
  bool bVar1;
  
  if (this->Label == param_1->Label) {
    bVar1 = FPCGDataTypeIdentifier::IsIdentical(&this->AllowedTypes,&param_1->AllowedTypes);
    if ((((bVar1) && (this->bAllowMultipleConnections == param_1->bAllowMultipleConnections)) &&
        (this->bAllowMultipleData == param_1->bAllowMultipleData)) &&
       (((this->Usage == param_1->Usage && (this->PinStatus == param_1->PinStatus)) &&
        (this->bInvisiblePin == param_1->bInvisiblePin)))) {
      return true;
    }
  }
  return false;
}

// PostSerialize @ 149f58110

void __thiscall FPCGPinProperties::PostSerialize(FPCGPinProperties *this,FArchive *param_1)

{
  return;
}

// SetAllowMultipleConnections @ 149f60610

void __thiscall FPCGPinProperties::SetAllowMultipleConnections(FPCGPinProperties *this,bool param_1)

{
  if (param_1) {
    this->bAllowMultipleData = true;
    this->bAllowMultipleConnections = true;
    return;
  }
  this->bAllowMultipleConnections = false;
  return;
}

