// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 15

// ~TIndirectArray<TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 1441f94c0

void __thiscall
TIndirectArray<TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<UE::Net::FReplicationStateStorage::FPerObjectInfo,8192,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x2000);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TIndirectArray<TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 14422a880

void __thiscall
TIndirectArray<TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x1000);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TIndirectArray<TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 14422a910

void __thiscall
TIndirectArray<TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0xfff0);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Empty @ 144237c60

void __thiscall
TIndirectArray<TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<UNetObjectGridFilter::FPerObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0xfff0);
    pFVar2 = pFVar2 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ~TIndirectArray<TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 144268a00

void __thiscall
TIndirectArray<TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<unsigned_short,200,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,200);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TIndirectArray<TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 144268a90

void __thiscall
TIndirectArray<TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,800);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TIndirectArray<TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 144268b20

void __thiscall
TIndirectArray<TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<TObjectPtr<UObject>,800,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,800);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TIndirectArray<TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 144268bb0

void __thiscall
TIndirectArray<TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x15e0);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Empty @ 1442775e0

void __thiscall
TIndirectArray<TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x15e0);
    pFVar2 = pFVar2 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ~TIndirectArray<TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 1442af940

void __thiscall
TIndirectArray<TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x800);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TIndirectArray<TChunkedArray<unsigned_int,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 1442af9d0

void __thiscall
TIndirectArray<TChunkedArray<unsigned_int,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<unsigned_int,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<unsigned_int,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x1000);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 1442afa60

void __thiscall
TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x10000);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Empty @ 1442bf710

void __thiscall
TIndirectArray<TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x800);
    pFVar2 = pFVar2 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAt @ 1442de050

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TIndirectArray<TChunkedArray<unsigned_int,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::RemoveAt(TIndirectArray<TChunkedArray<unsigned_int,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2,EAllowShrinking param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x112,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Array).ArrayNum < param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x113,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Array).ArrayNum < param_1 + param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index + Count <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                         ,0x114,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
  for (iVar5 = param_2; iVar5 != 0; iVar5 = iVar5 + -1) {
    ::operator_delete(*(void **)pFVar1,0x1000);
    pFVar1 = pFVar1 + 8;
  }
  uVar4 = 0;
  if (param_1 + param_2 <= (this->Array).ArrayNum) {
    uVar4 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2 != 0) {
    pFVar1 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 8;
    iVar5 = ((this->Array).ArrayNum - param_1) - param_2;
    if (iVar5 != 0) {
      memmove(pFVar1,pFVar1 + (longlong)param_2 * 8,(longlong)iVar5 << 3);
    }
    iVar5 = (this->Array).ArrayNum - param_2;
    (this->Array).ArrayNum = iVar5;
    if (param_3 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)this,iVar5,&(this->Array).ArrayMax);
    }
  }
  return;
}

// ~TIndirectArray<TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 1442f70d0

void __thiscall
TIndirectArray<TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x10000);
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

