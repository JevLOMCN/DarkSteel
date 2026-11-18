// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 3

// FMeshElementChannels @ 143657510

FMeshElementChannels * __thiscall
FMeshElementChannels::FMeshElementChannels(FMeshElementChannels *this,FMeshElementChannels *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FMeshElementContainer> FVar3;
  ForElementType<FMeshElementContainer> FVar4;
  
  (this->Channels).AllocatorInstance.SecondaryData = (ForElementType<FMeshElementContainer>)0x0;
  FVar3 = (param_1->Channels).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Channels).ArrayNum;
  (this->Channels).ArrayNum = iVar2;
  if (FVar3 != (ForElementType<FMeshElementContainer>)0x0) {
    param_1 = (FMeshElementChannels *)FVar3;
  }
  piVar1 = &(this->Channels).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 1;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshElementContainer>_>
            (0x80,8,iVar2,0,(ForElementType<FMeshElementContainer> *)this,iVar2,piVar1);
  FVar3 = (this->Channels).AllocatorInstance.SecondaryData;
  FVar4 = (ForElementType<FMeshElementContainer>)this;
  if (FVar3 != (ForElementType<FMeshElementContainer>)0x0) {
    FVar4 = FVar3;
  }
  ConstructItems<FMeshElementContainer,FMeshElementContainer,int>
            ((void *)FVar4,(FMeshElementContainer *)param_1,iVar2);
  return this;
}

// Get @ 143670fd0

FMeshElementContainer * __thiscall FMeshElementChannels::Get(FMeshElementChannels *this,int param_1)

{
  ForElementType<FMeshElementContainer> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMeshElementContainer *pFVar5;
  
  uVar4 = 0;
  if (param_1 < (this->Channels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMeshElementContainer *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar1 = (this->Channels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMeshElementContainer>)0x0) {
    this = (FMeshElementChannels *)FVar1;
  }
  return (FMeshElementContainer *)((longlong)param_1 * 0x80 + (longlong)this);
}

// Get @ 143671060

FMeshElementContainer * __thiscall FMeshElementChannels::Get(FMeshElementChannels *this,int param_1)

{
  ForElementType<FMeshElementContainer> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMeshElementContainer *pFVar5;
  
  uVar4 = 0;
  if (param_1 < (this->Channels).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMeshElementContainer *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar1 = (this->Channels).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMeshElementContainer>)0x0) {
    this = (FMeshElementChannels *)FVar1;
  }
  return (FMeshElementContainer *)((longlong)param_1 * 0x80 + (longlong)this);
}

