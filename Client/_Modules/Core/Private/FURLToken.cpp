// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FURLToken @ 1417a4630

FURLToken * __thiscall FURLToken::FURLToken(FURLToken *this,FString *param_1,FText *param_2)

{
  ForAnyElementType *pFVar1;
  longlong *plVar2;
  int iVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  FScriptContainerElement *_Src;
  ForElementType<TAlignedBytes<16,16>_> FVar6;
  bool bVar7;
  FText *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
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
  this->_padding_ = (longlong)&___7FURLToken__6B_;
  (this->URL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->URL).Data.ArrayNum = 0;
  (this->URL).Data.ArrayMax = 0;
  ::FString::operator=(&this->URL,param_1);
  bVar7 = FText::IsEmpty(param_2);
  if (bVar7) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"Core.MessageLog",L"DefaultHelpURLLabel",L"Help");
    FText::operator=((FText *)&this->_padding_,pFVar8);
    if ((atomic<unsigned___int64>)local_68 != (atomic<unsigned___int64>)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68 + 0x10))();
    }
  }
  else {
    pIVar4 = (param_2->TextData).Reference;
    pIVar5 = (ITextData *)this->_padding_;
    if (pIVar5 != pIVar4) {
      this->_padding_ = (longlong)pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
      }
      if (pIVar5 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
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
  puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar9 != (undefined8 *)0x0) {
    pFVar1 = (ForAnyElementType *)(puVar9 + 1);
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    iVar3 = (this->URL).Data.ArrayNum;
    _Src = (this->URL).Data.AllocatorInstance.Data;
    *(int *)(puVar9 + 2) = iVar3;
    if (iVar3 == 0) {
      *(int *)((longlong)puVar9 + 0x14) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,pFVar1,iVar3,(int *)((longlong)puVar9 + 0x14));
      memcpy(pFVar1->Data,_Src,(longlong)iVar3 * 2);
    }
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[3] = uVar10;
    *puVar9 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    puVar9[4] = VisitURL;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  iVar3 = local_60.DelegateSize;
  FVar6 = local_60.DelegateAllocator;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_50);
  plVar2 = &this->_padding_;
  if (((int)this->_padding_ != 0) && ((undefined8 *)*plVar2 != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)*plVar2)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->_padding_,0,0,0x10);
    *(undefined4 *)&this->_padding_ = 0;
  }
  if ((void *)*plVar2 != (void *)0x0) {
    FMemory::Free((void *)*plVar2);
  }
  *plVar2 = (longlong)FVar6;
  *(int *)&this->_padding_ = iVar3;
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

// Create @ 1417bed20

TSharedRef<FURLToken,1> * __cdecl
FURLToken::Create(TSharedRef<FURLToken,1> *__return_storage_ptr__,FString *param_1,FText *param_2)

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
         (longlong)&___7__TIntrusiveReferenceController_VFURLToken___00_SharedPointerInternals__6B_;
    FURLToken((FURLToken *)(pTVar1 + 1),param_1,param_2);
    pTVar1[1]._padding_ = (longlong)&___7FURLToken__6B_;
  }
  TSharedRef<FURLToken,1>::TSharedRef<FURLToken,1>
            (__return_storage_ptr__,(FURLToken *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// GetType @ 1417d87a0

Type __thiscall FURLToken::GetType(FURLToken *this)

{
  return URL;
}

// VisitURL @ 14180d0a0

void __cdecl FURLToken::VisitURL(TSharedRef<IMessageToken,1> *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  wchar_t *pwVar2;
  
  if ((param_2->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  FWindowsPlatformProcess::LaunchURL(pwVar2,(wchar_t *)0x0,(FString *)0x0);
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

