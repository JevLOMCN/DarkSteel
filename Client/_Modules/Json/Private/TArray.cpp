// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 6

// Append<TSharedRef<IAutomationLatentCommand,1>,TSizedDefaultAllocator<32>_> @ 141da2b30

void __thiscall
TArray<TSharedRef<IAutomationLatentCommand,1>,TSizedDefaultAllocator<32>_>::
Append<TSharedRef<IAutomationLatentCommand,1>,TSizedDefaultAllocator<32>_>
          (TArray<TSharedRef<IAutomationLatentCommand,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedRef<IAutomationLatentCommand,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<TSharedRef<IAutomationLatentCommand,1>,TSharedRef<IAutomationLatentCommand,1>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,
               (TSharedRef<IAutomationLatentCommand,1> *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// CopyToEmpty<TSharedPtr<FJsonValue,1>,int> @ 141da2c90

void __thiscall
TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<TSharedPtr<FJsonValue,1>,int>
          (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<FJsonValue,1> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// ~TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> @ 141dc5670

void __thiscall
TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::
~TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>
          (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 141dc6690

TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FJsonValue,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<FJsonValue,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// Pop @ 141ddc210

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> * __thiscall
TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1>,TSizedDefaultAllocator<32>_>::Pop
          (TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1>,TSizedDefaultAllocator<32>_>
           *this,TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *__return_storage_ptr__,
          EAllowShrinking param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  if (this->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)(*pcVar2)();
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

// Pop @ 141ddc320

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

EJson __thiscall
TArray<enum_EJson,TSizedDefaultAllocator<32>_>::Pop(void *this,EAllowShrinking param_1)

{
  code *pcVar1;
  bool bVar2;
  EJson EVar3;
  int iVar4;
  
  if (*(int *)((longlong)this + 8) < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  iVar4 = *(int *)((longlong)this + 8) + -1;
  EVar3 = *(EJson *)(*(longlong *)this + -4 + (longlong)*(int *)((longlong)this + 8) * 4);
  *(int *)((longlong)this + 8) = iVar4;
  if (param_1 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,this,iVar4,(int *)((longlong)this + 0xc));
  }
  return EVar3;
}

