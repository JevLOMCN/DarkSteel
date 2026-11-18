// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FDocumentationToken @ 1417a0cd0

FDocumentationToken * __thiscall
FDocumentationToken::FDocumentationToken
          (FDocumentationToken *this,FString *param_1,FString *param_2,FString *param_3)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IMessageToken__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  FText::FText((FText *)&this->_padding_);
  this_00 = &this->DocumentationLink;
  this->_padding_ = (longlong)&___7FDocumentationToken__6B_;
  ::FString::FString(this_00,param_1);
  ::FString::FString(&this->PreviewExcerptLink,param_2);
  ::FString::FString(&this->PreviewExcerptName,param_3);
  if (1 < (this->PreviewExcerptName).Data.ArrayNum) {
    pFVar2 = ::FString::ToLower(&this->PreviewExcerptName,&local_28);
    ::FString::FString(&local_38,"#");
    ::FString::ConcatFF(&local_48,this_00,&local_38);
    ::FString::ConcatFF(&local_58,&local_48,pFVar2);
    if (this_00 != &local_58) {
      pFVar1 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this_00->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (this->DocumentationLink).Data.ArrayNum = local_58.Data.ArrayNum;
      (this->DocumentationLink).Data.ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// Create @ 1417be220

TSharedRef<FDocumentationToken,1> * __cdecl
FDocumentationToken::Create
          (TSharedRef<FDocumentationToken,1> *__return_storage_ptr__,FString *param_1,
          FString *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FString *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pTVar2 = ::operator_new(0x80);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFDocumentationToken___00_SharedPointerInternals__6B_;
    pTVar2[1]._padding_ = (longlong)&___7IMessageToken__6B_;
    pTVar2[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[2]._padding_ = 0;
    pTVar2[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[3]._padding_ = 0;
    pTVar2[3].SharedReferenceCount = (atomic<int>)0x0;
    FText::FText((FText *)(pTVar2 + 4));
    pTVar4 = pTVar2 + 5;
    pTVar2[1]._padding_ = (longlong)&___7FDocumentationToken__6B_;
    ::FString::FString((FString *)pTVar4,param_1);
    ::FString::FString((FString *)(pTVar2 + 6),param_2);
    ::FString::FString((FString *)(pTVar2 + 7),param_3);
    if (1 < (int)pTVar2[7].SharedReferenceCount) {
      pFVar3 = ::FString::ToLower((FString *)(pTVar2 + 7),&local_38);
      ::FString::FString(&local_48,"#");
      ::FString::ConcatFF(&local_58,(FString *)pTVar4,&local_48);
      ::FString::ConcatFF((FString *)&local_68,&local_58,pFVar3);
      if (pTVar4 != &local_68) {
        pFVar1 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar4->_padding_)->
                 AllocatorInstance).Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar4->_padding_)->AllocatorInstance).
        Data = (FScriptContainerElement *)local_68._padding_;
        pTVar2[5].SharedReferenceCount = local_68.SharedReferenceCount;
        pTVar2[5].WeakReferenceCount = local_68.WeakReferenceCount;
        local_68.SharedReferenceCount = (atomic<int>)0x0;
        local_68.WeakReferenceCount = (atomic<int>)0x0;
        local_68._padding_ = 0;
      }
      if ((FScriptContainerElement *)local_68._padding_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_68._padding_);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pTVar2[1]._padding_ = (longlong)&___7FDocumentationToken__6B_;
    pTVar4 = pTVar2;
  }
  TSharedRef<FDocumentationToken,1>::TSharedRef<FDocumentationToken,1>
            (__return_storage_ptr__,(FDocumentationToken *)(pTVar4 + 1),pTVar4);
  return __return_storage_ptr__;
}

// GetType @ 1417d8730

Type __thiscall FDocumentationToken::GetType(FDocumentationToken *this)

{
  return Documentation;
}

// ~FDocumentationToken @ 1418bea00

void __thiscall FDocumentationToken::~FDocumentationToken(FDocumentationToken *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pFVar3 = (this->PreviewExcerptName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PreviewExcerptLink).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->DocumentationLink).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IMessageToken__6B_;
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001418bea7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

