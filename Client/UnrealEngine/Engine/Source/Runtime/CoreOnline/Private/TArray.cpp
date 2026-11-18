// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 1

// Pop @ 144618b30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> * __thiscall
TArray<TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1>,TSizedDefaultAllocator<32>_>::
Pop(TArray<TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1>,TSizedDefaultAllocator<32>_>
    *this,TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> *__return_storage_ptr__,
   EAllowShrinking param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  if (this->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = this->ArrayNum;
  pFVar6 = (this->AllocatorInstance).Data;
  __return_storage_ptr__->Object = *(StackState **)(pFVar6 + (longlong)iVar4 * 0x10 + -0x10);
  pTVar1 = *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar4 * 0x10 + -8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar4 = this->ArrayNum;
  pFVar6 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar6 + -8));
  iVar4 = this->ArrayNum - iVar4;
  if (iVar4 != 0) {
    memmove(pFVar6 + -0x10,pFVar6,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_1 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return __return_storage_ptr__;
}

