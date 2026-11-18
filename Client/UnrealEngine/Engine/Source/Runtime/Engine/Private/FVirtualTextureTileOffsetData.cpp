// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FVirtualTextureTileOffsetData @ 1489b4fb0

FVirtualTextureTileOffsetData * __thiscall
FVirtualTextureTileOffsetData::FVirtualTextureTileOffsetData
          (FVirtualTextureTileOffsetData *this,FVirtualTextureTileOffsetData *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->Addresses;
  this->Width = param_1->Width;
  this->Height = param_1->Height;
  this->MaxAddress = param_1->MaxAddress;
  piVar2 = &(this->Addresses).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Addresses).ArrayNum;
  pFVar4 = (param_1->Addresses).AllocatorInstance.Data;
  (this->Addresses).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  pTVar1 = &this->Offsets;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Offsets).ArrayMax;
  iVar3 = (param_1->Offsets).ArrayNum;
  pFVar4 = (param_1->Offsets).AllocatorInstance.Data;
  (this->Offsets).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  return this;
}

// GetTileOffset @ 1489eeab0

uint __thiscall
FVirtualTextureTileOffsetData::GetTileOffset(FVirtualTextureTileOffsetData *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = (this->Addresses).ArrayNum;
  iVar6 = 0;
  if (0 < (int)uVar5) {
    do {
      iVar1 = (uVar5 >> 1) + iVar6;
      if (*(uint *)((this->Addresses).AllocatorInstance.Data + (longlong)iVar1 * 4) <= param_1) {
        iVar6 = iVar1 + (uVar5 & 1);
      }
      uVar4 = uVar5 >> 1;
      uVar5 = uVar5 >> 1;
    } while (uVar4 != 0);
  }
  uVar5 = iVar6 - 1;
  uVar4 = 0;
  if ((int)uVar5 < (this->Offsets).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  iVar6 = *(int *)((this->Offsets).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
  if (iVar6 == -1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar4 = 0;
    if ((int)uVar5 < (this->Addresses).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    uVar5 = param_1 + (iVar6 - *(int *)((this->Addresses).AllocatorInstance.Data +
                                       (longlong)(int)uVar5 * 4));
  }
  return uVar5;
}

