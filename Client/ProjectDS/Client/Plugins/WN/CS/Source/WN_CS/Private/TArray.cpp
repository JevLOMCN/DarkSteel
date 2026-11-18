// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 5

// operator= @ 14a6a2d50

TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *this,
          TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FWN_CS_CharacterPresetSlotMaterialDesc *pFVar3;
  
  if (this != param_1) {
    DestructItems<FWN_CS_CharacterPresetSlotMaterialDesc,int>
              ((FWN_CS_CharacterPresetSlotMaterialDesc *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FWN_CS_CharacterPresetSlotMaterialDesc *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FWN_CS_CharacterPresetSlotMaterialDesc,FWN_CS_CharacterPresetSlotMaterialDesc,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14a6a2df0

TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_> *this,
          TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x50);
    }
  }
  return this;
}

// operator= @ 14a6a2e90

TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_> *this,
          TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x60);
    }
  }
  return this;
}

// operator= @ 14a6a2f30

TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> *this,
          TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x50);
    }
  }
  return this;
}

// RemoveAtSwapImpl @ 14a6aa030

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall
TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FWN_CS_CharacterPartInfo,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FWN_CS_CharacterPartInfo *this_00;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = (FWN_CS_CharacterPartInfo *)(pFVar1 + (longlong)param_1 * 0x88);
  FWN_CS_CharacterPartInfo::~FWN_CS_CharacterPartInfo(this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x88,(longlong)iVar2 * 0x88);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

