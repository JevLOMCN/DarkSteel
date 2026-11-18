// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// GetLargeIndexBuffer @ 143ec31b0

TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FTrimeshIndexBuffer::GetLargeIndexBuffer(FTrimeshIndexBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this->bRequiresLargeIndices == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRequiresLargeIndices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                       ,0x19a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->LargeIdxBuffer;
}

// GetSmallIndexBuffer @ 143ec37b0

TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FTrimeshIndexBuffer::GetSmallIndexBuffer(FTrimeshIndexBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this->bRequiresLargeIndices == false) {
    return &this->SmallIdxBuffer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!bRequiresLargeIndices",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMeshImplicitObject.h"
                     ,0x1a0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  return &this->SmallIdxBuffer;
}

// Reinitialize @ 143ecaa70

void __thiscall
Chaos::FTrimeshIndexBuffer::Reinitialize
          (FTrimeshIndexBuffer *this,
          TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(this->LargeIdxBuffer).ArrayMax;
  (this->LargeIdxBuffer).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  pTVar2 = &this->SmallIdxBuffer;
  piVar1 = &(this->SmallIdxBuffer).ArrayMax;
  (this->SmallIdxBuffer).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (6,2,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  this->bRequiresLargeIndices = false;
  if (pTVar2 != param_1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SmallIdxBuffer).ArrayNum = param_1->ArrayNum;
    *piVar1 = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return;
}

// Reinitialize @ 143ecab40

void __thiscall
Chaos::FTrimeshIndexBuffer::Reinitialize
          (FTrimeshIndexBuffer *this,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(this->LargeIdxBuffer).ArrayMax;
  (this->LargeIdxBuffer).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar2 = &(this->SmallIdxBuffer).ArrayMax;
  (this->SmallIdxBuffer).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (6,2,0,&(this->SmallIdxBuffer).AllocatorInstance,0,piVar2);
  }
  this->bRequiresLargeIndices = true;
  if (this != (FTrimeshIndexBuffer *)param_1) {
    pFVar3 = (this->LargeIdxBuffer).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->LargeIdxBuffer).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LargeIdxBuffer).ArrayNum = param_1->ArrayNum;
    *piVar1 = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return;
}

// Serialize @ 143ecc3f0

void __thiscall Chaos::FTrimeshIndexBuffer::Serialize(FTrimeshIndexBuffer *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar1 < 0x1c) {
    TArrayPrivateFriend::Serialize<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>
              (param_1,&this->LargeIdxBuffer);
    this->bRequiresLargeIndices = true;
    return;
  }
  ::operator<<(param_1,&this->bRequiresLargeIndices);
  if (this->bRequiresLargeIndices != false) {
    TArrayPrivateFriend::Serialize<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>
              (param_1,&this->LargeIdxBuffer);
    return;
  }
  TArrayPrivateFriend::Serialize<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_>
            (param_1,&this->SmallIdxBuffer);
  return;
}

