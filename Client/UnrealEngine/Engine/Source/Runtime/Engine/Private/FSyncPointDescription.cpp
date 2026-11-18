// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1487e4f80

UScriptStruct * __cdecl UE::Tick::FSyncPointDescription::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSyncPointDescription.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSyncPointDescription.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSyncPointDescription,(UObject *)pUVar1,
                         L"SyncPointDescription");
  }
  return Z_Registration_Info_UScriptStruct_FSyncPointDescription.OuterSingleton;
}

// FSyncPointDescription @ 148806320

FSyncPointDescription * __thiscall
UE::Tick::FSyncPointDescription::FSyncPointDescription
          (FSyncPointDescription *this,FSyncPointDescription *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->PrerequisiteSyncGroups;
  this->RegisteredName = param_1->RegisteredName;
  this->SourceName = param_1->SourceName;
  this->EventType = param_1->EventType;
  this->ActivationRules = param_1->ActivationRules;
  (this->FirstPossibleTickGroup).Value = (param_1->FirstPossibleTickGroup).Value;
  (this->LastPossibleTickGroup).Value = (param_1->LastPossibleTickGroup).Value;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PrerequisiteSyncGroups).ArrayMax;
  iVar3 = (param_1->PrerequisiteSyncGroups).ArrayNum;
  _Src = (param_1->PrerequisiteSyncGroups).AllocatorInstance.Data;
  (this->PrerequisiteSyncGroups).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

// operator= @ 14880e1f0

FSyncPointDescription * __thiscall
UE::Tick::FSyncPointDescription::operator=
          (FSyncPointDescription *this,FSyncPointDescription *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->PrerequisiteSyncGroups;
  this->RegisteredName = param_1->RegisteredName;
  this->SourceName = param_1->SourceName;
  this->EventType = param_1->EventType;
  this->ActivationRules = param_1->ActivationRules;
  (this->FirstPossibleTickGroup).Value = (param_1->FirstPossibleTickGroup).Value;
  (this->LastPossibleTickGroup).Value = (param_1->LastPossibleTickGroup).Value;
  if (pTVar1 != &param_1->PrerequisiteSyncGroups) {
    iVar3 = (this->PrerequisiteSyncGroups).ArrayMax;
    piVar2 = &(this->PrerequisiteSyncGroups).ArrayMax;
    _Src = (param_1->PrerequisiteSyncGroups).AllocatorInstance.Data;
    iVar4 = (param_1->PrerequisiteSyncGroups).ArrayNum;
    (this->PrerequisiteSyncGroups).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  return this;
}

