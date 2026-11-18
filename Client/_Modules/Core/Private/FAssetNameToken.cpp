// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FAssetNameToken @ 1417a0800

FAssetNameToken * __thiscall
FAssetNameToken::FAssetNameToken(FAssetNameToken *this,FString *param_1,FText *param_2)

{
  longlong *plVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  ForElementType<TAlignedBytes<16,16>_> FVar4;
  int iVar5;
  bool bVar6;
  FText *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  undefined1 local_res8 [8];
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IMessageToken__6B_;
  FText::FText((FText *)&this->_padding_);
  this->_padding_ = (longlong)&___7FAssetNameToken__6B_;
  ::FString::FString(&this->AssetName,param_1);
  bVar6 = FText::IsEmpty(param_2);
  if (bVar6) {
    pFVar7 = FText::FromString((FText *)local_68,&this->AssetName);
    FText::operator=((FText *)&this->_padding_,pFVar7);
    if ((atomic<unsigned___int64>)local_68 != (atomic<unsigned___int64>)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68 + 0x10))();
    }
  }
  else {
    pIVar2 = (param_2->TextData).Reference;
    pIVar3 = (ITextData *)this->_padding_;
    if (pIVar3 != pIVar2) {
      this->_padding_ = (longlong)pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    *(uint *)&this->_padding_ = param_2->Flags;
  }
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    ::FString::FString((FString *)(puVar8 + 1),&this->AssetName);
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[3] = uVar9;
    *puVar8 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    puVar8[4] = FindAsset;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  iVar5 = local_60.DelegateSize;
  FVar4 = local_60.DelegateAllocator;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_50);
  plVar1 = &this->_padding_;
  if (((int)this->_padding_ != 0) && ((undefined8 *)*plVar1 != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)*plVar1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->_padding_,0,0,0x10);
    *(undefined4 *)&this->_padding_ = 0;
  }
  if ((void *)*plVar1 != (void *)0x0) {
    FMemory::Free((void *)*plVar1);
  }
  *plVar1 = (longlong)FVar4;
  *(int *)&this->_padding_ = iVar5;
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return this;
}

// Create @ 1417be180

TSharedRef<FAssetNameToken,1> * __cdecl
FAssetNameToken::Create
          (TSharedRef<FAssetNameToken,1> *__return_storage_ptr__,FString *param_1,FText *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = ::operator_new(0x60);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFAssetNameToken___00_SharedPointerInternals__6B_;
    FAssetNameToken((FAssetNameToken *)(pTVar1 + 1),param_1,param_2);
    pTVar1[1]._padding_ = (longlong)&___7FAssetNameToken__6B_;
  }
  TSharedRef<FAssetNameToken,1>::TSharedRef<FAssetNameToken,1>
            (__return_storage_ptr__,(FAssetNameToken *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// FindAsset @ 1417cd3b0

void __cdecl FAssetNameToken::FindAsset(TSharedRef<IMessageToken,1> *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&GotoAsset,&local_28);
  if ((GotoAsset._16_4_ != 0) && (GotoAsset._8_8_ != 0)) {
    cVar3 = (**(code **)(*(longlong *)GotoAsset._8_8_ + 0x38))();
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_1417cd3f3;
    }
  }
  bVar2 = false;
LAB_1417cd3f3:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&GotoAsset,&local_28);
    plVar4 = (longlong *)0x0;
    if (GotoAsset._16_4_ != 0) {
      plVar4 = (longlong *)GotoAsset._8_8_;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetType @ 1417d8720

Type __thiscall FAssetNameToken::GetType(FAssetNameToken *this)

{
  return AssetName;
}

