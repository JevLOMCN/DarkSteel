// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// FAssetDataToken @ 141e83ed0

FAssetDataToken * __thiscall
FAssetDataToken::FAssetDataToken
          (FAssetDataToken *this,FPrivateToken param_1,FAssetData *param_2,FText *param_3)

{
  int *piVar1;
  TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  ITextData *pIVar5;
  ITextData *pIVar6;
  FName FVar7;
  bool bVar8;
  char cVar9;
  FString *pFVar10;
  FText *pFVar11;
  ForElementType<int> _Dst;
  ForElementType<int> _Src;
  longlong *plVar12;
  undefined1 local_res8 [8];
  FText local_58;
  FReadAccessScope local_48;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IMessageToken__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  FText::FText((FText *)&this->_padding_);
  this->_padding_ = (longlong)&___7FAssetDataToken__6B_;
  (this->AssetData).PackageName = param_2->PackageName;
  (this->AssetData).PackagePath = param_2->PackagePath;
  (this->AssetData).AssetName = param_2->AssetName;
  (this->AssetData).AssetClass = param_2->AssetClass;
  FVar7 = (param_2->AssetClassPath).AssetName;
  (this->AssetData).AssetClassPath.PackageName = (param_2->AssetClassPath).PackageName;
  (this->AssetData).AssetClassPath.AssetName = FVar7;
  (this->AssetData).ChunkArrayRegistryHandle.Index = (param_2->ChunkArrayRegistryHandle).Index;
  (this->AssetData).PackageFlags = param_2->PackageFlags;
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
            (&(this->AssetData).TagsAndValues,&param_2->TagsAndValues);
  (this->AssetData).TaggedAssetBundles.Object = (param_2->TaggedAssetBundles).Object;
  pTVar4 = (param_2->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
  (this->AssetData).TaggedAssetBundles.SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &(this->AssetData).ChunkIDs;
  (this->AssetData).ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  _Src = (param_2->ChunkIDs).AllocatorInstance.SecondaryData;
  iVar3 = (param_2->ChunkIDs).ArrayNum;
  (this->AssetData).ChunkIDs.ArrayNum = iVar3;
  if (_Src == (ForElementType<int>)0x0) {
    _Src = (ForElementType<int>)&param_2->ChunkIDs;
  }
  piVar1 = &(this->AssetData).ChunkIDs.ArrayMax;
  if (iVar3 == 0) {
    *piVar1 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    _Dst = (this->AssetData).ChunkIDs.AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<int>)0x0) {
      _Dst = (ForElementType<int>)pTVar2;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3 << 2);
  }
  bVar8 = FText::IsEmpty(param_3);
  if (bVar8) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&DefaultGetAssetDisplayName
               ,&local_48);
    if (((DefaultGetAssetDisplayName._16_4_ == 0) || (DefaultGetAssetDisplayName._8_8_ == 0)) ||
       (cVar9 = (**(code **)(*(longlong *)DefaultGetAssetDisplayName._8_8_ + 0x38))(), cVar9 == '\0'
       )) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    if (bVar8) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &DefaultGetAssetDisplayName,&local_48);
      plVar12 = (longlong *)0x0;
      if (DefaultGetAssetDisplayName._16_4_ != 0) {
        plVar12 = (longlong *)DefaultGetAssetDisplayName._8_8_;
      }
      (**(code **)(*plVar12 + 0x60))(plVar12,&local_58,param_2,0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      FText::operator=((FText *)&this->_padding_,&local_58);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
    }
    else {
      pFVar10 = FAssetData::GetObjectPathString(param_2,(FString *)&local_48);
      pFVar11 = FText::FromString(&local_58,pFVar10);
      FText::operator=((FText *)&this->_padding_,pFVar11);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if ((void *)local_48.DestructionSentinel._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_48.DestructionSentinel._0_8_);
      }
    }
    return this;
  }
  pIVar5 = (param_3->TextData).Reference;
  pIVar6 = (ITextData *)this->_padding_;
  if (pIVar6 != pIVar5) {
    this->_padding_ = (longlong)pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res8);
    }
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  *(uint *)&this->_padding_ = param_3->Flags;
  return this;
}

// ~FAssetDataToken @ 141e87920

void __thiscall FAssetDataToken::~FAssetDataToken(FAssetDataToken *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<int> FVar3;
  longlong *plVar4;
  
  FVar3 = (this->AssetData).ChunkIDs.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AssetData).TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&(this->AssetData).TagsAndValues);
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
                    /* WARNING: Could not recover jumptable at 0x000141e87996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// Create @ 141e941f0

TSharedRef<FAssetDataToken,1> * __cdecl
FAssetDataToken::Create
          (TSharedRef<FAssetDataToken,1> *__return_storage_ptr__,FAssetData *param_1,FText *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FPrivateToken local_res8;
  
  pTVar1 = ::operator_new(0xb8);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFAssetDataToken___00_SharedPointerInternals__6B_;
    FAssetDataToken((FAssetDataToken *)(pTVar1 + 1),local_res8,param_1,param_2);
  }
  TSharedRef<FAssetDataToken,1>::TSharedRef<FAssetDataToken,1>
            (__return_storage_ptr__,(FAssetDataToken *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// GetOnMessageTokenActivated @ 141ea1b20

TDelegate<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy> * __thiscall
FAssetDataToken::GetOnMessageTokenActivated(FAssetDataToken *this)

{
  char cVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) && ((longlong *)this->_padding_ != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (TDelegate<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
              *)&this->_padding_;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &DefaultMessageTokenActivated;
}

// GetType @ 141ea2ea0

Type __thiscall FAssetDataToken::GetType(FAssetDataToken *this)

{
  return AssetData;
}

