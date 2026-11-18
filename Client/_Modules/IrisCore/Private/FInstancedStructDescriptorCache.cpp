// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 12

// FInstancedStructDescriptorCache @ 1442f5ff0

FInstancedStructDescriptorCache * __thiscall
UE::Net::Private::FInstancedStructDescriptorCache::FInstancedStructDescriptorCache
          (FInstancedStructDescriptorCache *this)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  *(undefined8 *)&(this->DescriptorLruCache).LookupSet.Elements = 0;
  *(undefined8 *)&(this->DescriptorLruCache).LookupSet.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DescriptorLruCache).LookupSet.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DescriptorLruCache).LookupSet.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DescriptorLruCache).LookupSet.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DescriptorLruCache).LookupSet.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->DescriptorLruCache).LookupSet.Elements.field_0x30 = 0xffffffff;
  (this->DescriptorLruCache).LookupSet.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DescriptorLruCache).LookupSet.HashSize = 0;
  (this->DescriptorLruCache).LeastRecent = (FCacheEntry *)0x0;
  (this->DescriptorLruCache).MostRecent = (FCacheEntry *)0x0;
  (this->DescriptorLruCache).MaxNumElements = 0;
  *(undefined8 *)&this->DescriptorMap = 0;
  *(undefined8 *)&(this->DescriptorMap).field_0x8 = 0;
  *(undefined8 *)&(this->DescriptorMap).field_0x20 = 0;
  *(undefined4 *)&(this->DescriptorMap).field_0x28 = 0;
  *(undefined4 *)&(this->DescriptorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DescriptorMap).field_0x34 = 0;
  *(undefined4 *)&(this->DescriptorMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DescriptorMap).field_0x40 = 0;
  *(undefined4 *)&(this->DescriptorMap).field_0x48 = 0;
  *(undefined8 *)&(this->SupportedTypes).Elements = 0;
  *(undefined8 *)&(this->SupportedTypes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SupportedTypes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SupportedTypes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SupportedTypes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SupportedTypes).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SupportedTypes).Elements.field_0x30 = 0xffffffff;
  (this->SupportedTypes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SupportedTypes).HashSize = 0;
  (this->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugName).Data.ArrayNum = 0;
  (this->DebugName).Data.ArrayMax = 0;
  this->MaxCachedDescriptorCount = 0;
  return this;
}

// ~FInstancedStructDescriptorCache @ 1442f7fc0

void __thiscall
UE::Net::Private::FInstancedStructDescriptorCache::~FInstancedStructDescriptorCache
          (FInstancedStructDescriptorCache *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  pFVar1 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->SupportedTypes).HashSize = 0;
  FVar2 = (this->SupportedTypes).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TSoftObjectPtr<UScriptStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSoftObjectPtr<UScriptStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SupportedTypes).Elements);
  *(undefined4 *)&(this->DescriptorMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->DescriptorMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DescriptorMap);
  TLruCache<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,DefaultKeyComparer<FName>_>
  ::Empty(&this->DescriptorLruCache,0);
  (this->DescriptorLruCache).LookupSet.HashSize = 0;
  FVar2 = (this->DescriptorLruCache).LookupSet.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TLruCache<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,DefaultKeyComparer<FName>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TLruCache<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,DefaultKeyComparer<FName>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TLruCache<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,DefaultKeyComparer<FName>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DescriptorLruCache);
                    /* WARNING: Could not recover jumptable at 0x0001442f8062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// AddSupportedTypes @ 1442fb0d0

void __thiscall
UE::Net::Private::FInstancedStructDescriptorCache::AddSupportedTypes
          (FInstancedStructDescriptorCache *this,
          TArrayView<TSoftObjectPtr<UScriptStruct>_const_,int> *param_1)

{
  TSoftObjectPtr<UScriptStruct> *pTVar1;
  TSoftObjectPtr<UScriptStruct> *pTVar2;
  
  pTVar2 = param_1->DataPtr;
  pTVar1 = pTVar2 + param_1->ArrayNum;
  if (pTVar2 != pTVar1) {
    do {
      TSet<TSoftObjectPtr<UScriptStruct>,DefaultKeyFuncs<TSoftObjectPtr<UScriptStruct>,0>,FDefaultSetAllocator>
      ::Emplace<TSoftObjectPtr<UScriptStruct>_const_&>
                (&this->SupportedTypes,(TSoftObjectPtr<UScriptStruct> *)&stack0x00000010,
                 (bool *)pTVar2);
      pTVar2 = pTVar2 + 1;
    } while (pTVar2 != pTVar1);
  }
  return;
}

// CreateAndCacheDescriptor @ 1442fd8f0

TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> __thiscall
UE::Net::Private::FInstancedStructDescriptorCache::CreateAndCacheDescriptor
          (FInstancedStructDescriptorCache *this,UScriptStruct *param_1,FName param_2)

{
  FReplicationStateDescriptor *this_00;
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar3;
  TPairInitializer<FName_const_&,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_const_&>
  local_res8;
  FName local_res20;
  FName *local_48;
  UScriptStruct *local_40;
  FParameters local_38;
  
  param_1->_padding_ = 0;
  FReplicationStateDescriptorBuilder::FParameters::FParameters(&local_38);
  TVar3 = FReplicationStateDescriptorBuilder::CreateDescriptorForStruct
                    ((UStruct *)&local_res8.Value,(FParameters *)param_2);
  if ((FReplicationStateDescriptor *)param_1 != TVar3.Reference) {
    this_00 = (FReplicationStateDescriptor *)param_1->_padding_;
    param_1->_padding_ = (longlong)(TVar3.Reference)->MemberDescriptors;
    (TVar3.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
    if (this_00 != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(this_00);
    }
  }
  if ((FReplicationStateDescriptor *)local_res8.Value != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::Release((FReplicationStateDescriptor *)local_res8.Value);
  }
  if (this == (FInstancedStructDescriptorCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FReplicationStateDescriptor *)(*pcVar1)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar3.Reference;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (this->MaxCachedDescriptorCount < 1) {
    local_48 = &local_res20;
    local_40 = param_1;
    TSet<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FName_const_&,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_const_&>_>
              ((TSet<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>,FDefaultSetAllocator>
                *)&this->DescriptorMap,&local_res8,(bool *)&local_48);
  }
  else {
    TLruCache<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,DefaultKeyComparer<FName>_>
    ::Add(&this->DescriptorLruCache,&local_res20,
          (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *)param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)
         (FReplicationStateDescriptor *)param_1;
}

// FindDescriptor @ 1443022c0

TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> __thiscall
UE::Net::Private::FInstancedStructDescriptorCache::FindDescriptor
          (FInstancedStructDescriptorCache *this,UScriptStruct *param_1)

{
  int iVar1;
  UObjectBaseUtility *in_R8;
  FName local_res18 [2];
  FString local_18;
  
  if (in_R8 == (UObjectBaseUtility *)0x0) {
    param_1->_padding_ = 0;
    return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)
           (FReplicationStateDescriptor *)param_1;
  }
  UObjectBaseUtility::GetPathName(in_R8,&local_18,(UObject *)0x0);
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FName::FName(local_res18,iVar1,(wchar_t *)local_18.Data.AllocatorInstance.Data,FNAME_Add);
  FindDescriptor(this,(FName)param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)
         (FReplicationStateDescriptor *)param_1;
}

// FindDescriptor @ 144302350

TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> __thiscall
UE::Net::Private::FInstancedStructDescriptorCache::FindDescriptor
          (FInstancedStructDescriptorCache *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar3;
  FCacheEntry **ppFVar4;
  TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_> *pTVar5;
  FReplicationStateDescriptor *this_00;
  FName in_R8;
  
  if (this == (FInstancedStructDescriptorCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FReplicationStateDescriptor *)(*pcVar1)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar3.Reference;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (this->MaxCachedDescriptorCount < 1) {
    pTVar5 = TSet<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>,FDefaultSetAllocator>
                     *)&this->DescriptorMap,in_R8);
    if (pTVar5 == (TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_> *)0x0)
    goto LAB_1443023f7;
    this_00 = *(FReplicationStateDescriptor **)&pTVar5->field_0x8;
  }
  else {
    ppFVar4 = TSet<TLruCache<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,DefaultKeyComparer<FName>_>::FCacheEntry_*,TLruCache<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,DefaultKeyComparer<FName>_>::FKeyFuncs,FDefaultSetAllocator>
              ::Find(&(this->DescriptorLruCache).LookupSet,in_R8);
    if (ppFVar4 == (FCacheEntry **)0x0) {
LAB_1443023f7:
      *(undefined8 *)param_1 = 0;
      goto LAB_1443023fe;
    }
    TLruCache<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,DefaultKeyComparer<FName>_>
    ::MarkAsRecent(&this->DescriptorLruCache,*ppFVar4);
    this_00 = ((*ppFVar4)->Value).Reference;
  }
  *(FReplicationStateDescriptor **)param_1 = this_00;
  if (this_00 != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::AddRef(this_00);
  }
LAB_1443023fe:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)param_1;
}

// FindOrAddDescriptor @ 144302460

TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> __thiscall
UE::Net::Private::FInstancedStructDescriptorCache::FindOrAddDescriptor
          (FInstancedStructDescriptorCache *this,UScriptStruct *param_1)

{
  FName FVar1;
  FReplicationStateDescriptor *pFVar2;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar5;
  FName *pFVar6;
  FCacheEntry **ppFVar7;
  TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_> *pTVar8;
  int iVar9;
  FReplicationStateDescriptor *pFVar10;
  FName in_R8;
  FReplicationStateDescriptor *local_res10;
  FName local_res18;
  undefined1 local_48 [16];
  int local_38;
  
  pFVar10 = (FReplicationStateDescriptor *)0x0;
  param_1->_padding_ = 0;
  if (in_R8 == (FName)0x0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8078501384019770682>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\InstancedStructNetSerializer.cpp"
                       ,0x2c6,"Struct != nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Reference = (FReplicationStateDescriptor *)(*pcVar3)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar5.Reference;
    }
  }
  else {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)in_R8,(FString *)(local_48 + 8),(UObject *)0x0);
    iVar9 = local_38 + -1;
    if (local_38 == 0) {
      iVar9 = 0;
    }
    pFVar6 = ::FName::FName(&local_res18,iVar9,(wchar_t *)local_48._8_8_,FNAME_Add);
    FVar1 = *pFVar6;
    if ((this == (FInstancedStructDescriptorCache *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5.Reference = (FReplicationStateDescriptor *)(*pcVar3)();
      return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar5.Reference;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if (this->MaxCachedDescriptorCount < 1) {
      pTVar8 = TSet<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>,FDefaultSetAllocator>
                       *)&this->DescriptorMap,FVar1);
      if (pTVar8 == (TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_> *)0x0)
      {
        pFVar10 = (FReplicationStateDescriptor *)0x0;
      }
      else {
        pFVar10 = *(FReplicationStateDescriptor **)&pTVar8->field_0x8;
        if (pFVar10 != (FReplicationStateDescriptor *)0x0) {
          FReplicationStateDescriptor::AddRef(pFVar10);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
    }
    else {
      ppFVar7 = TSet<TLruCache<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,DefaultKeyComparer<FName>_>::FCacheEntry_*,TLruCache<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,DefaultKeyComparer<FName>_>::FKeyFuncs,FDefaultSetAllocator>
                ::Find(&(this->DescriptorLruCache).LookupSet,FVar1);
      if (ppFVar7 == (FCacheEntry **)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
      }
      else {
        TLruCache<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,DefaultKeyComparer<FName>_>
        ::MarkAsRecent(&this->DescriptorLruCache,*ppFVar7);
        pFVar10 = ((*ppFVar7)->Value).Reference;
        if (pFVar10 != (FReplicationStateDescriptor *)0x0) {
          FReplicationStateDescriptor::AddRef(pFVar10);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
      }
    }
    if (param_1 != (UScriptStruct *)local_48) {
      pFVar2 = (FReplicationStateDescriptor *)param_1->_padding_;
      param_1->_padding_ = (longlong)pFVar10;
      pFVar10 = pFVar2;
    }
    if (pFVar10 != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(pFVar10);
    }
    if ((param_1->_padding_ == 0) && (bVar4 = IsSupportedType(this,(UScriptStruct *)in_R8), bVar4))
    {
      TVar5 = CreateAndCacheDescriptor(this,(UScriptStruct *)&local_res10,in_R8);
      if ((FReplicationStateDescriptor *)param_1 != TVar5.Reference) {
        pFVar10 = (FReplicationStateDescriptor *)param_1->_padding_;
        param_1->_padding_ = (longlong)(TVar5.Reference)->MemberDescriptors;
        (TVar5.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
        if (pFVar10 != (FReplicationStateDescriptor *)0x0) {
          FReplicationStateDescriptor::Release(pFVar10);
        }
      }
      if (local_res10 != (FReplicationStateDescriptor *)0x0) {
        FReplicationStateDescriptor::Release(local_res10);
      }
    }
    if ((wchar_t *)local_48._8_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)local_48._8_8_);
    }
  }
  return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)
         (FReplicationStateDescriptor *)param_1;
}

// FindOrAddDescriptor @ 144302690

TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> __thiscall
UE::Net::Private::FInstancedStructDescriptorCache::FindOrAddDescriptor
          (FInstancedStructDescriptorCache *this,FName param_1)

{
  FReplicationStateDescriptor *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar5;
  FCacheEntry **ppFVar6;
  TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_> *pTVar7;
  FString *pFVar8;
  size_t sVar9;
  UClass *pUVar10;
  FName FVar11;
  FReplicationStateDescriptor *pFVar12;
  FName in_R8;
  int iVar13;
  FName local_res8;
  FReplicationStateDescriptor *local_res10;
  FName local_res18;
  FName *local_res20;
  undefined1 local_98 [16];
  TStringView<wchar_t> local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  FString local_58;
  uint local_3c;
  
  pFVar12 = (FReplicationStateDescriptor *)0x0;
  *(undefined8 *)param_1 = 0;
  if ((this == (FInstancedStructDescriptorCache *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar5.Reference = (FReplicationStateDescriptor *)(*pcVar3)();
    return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)TVar5.Reference;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  iVar13 = 0;
  if (this->MaxCachedDescriptorCount < 1) {
    pTVar7 = TSet<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>,FDefaultSetAllocator>
                     *)&this->DescriptorMap,in_R8);
    if (pTVar7 == (TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_> *)0x0) {
      pFVar12 = (FReplicationStateDescriptor *)0x0;
    }
    else {
      pFVar12 = *(FReplicationStateDescriptor **)&pTVar7->field_0x8;
      if (pFVar12 != (FReplicationStateDescriptor *)0x0) {
        FReplicationStateDescriptor::AddRef(pFVar12);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  else {
    ppFVar6 = TSet<TLruCache<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,DefaultKeyComparer<FName>_>::FCacheEntry_*,TLruCache<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,DefaultKeyComparer<FName>_>::FKeyFuncs,FDefaultSetAllocator>
              ::Find(&(this->DescriptorLruCache).LookupSet,in_R8);
    if (ppFVar6 != (FCacheEntry **)0x0) {
      TLruCache<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,DefaultKeyComparer<FName>_>
      ::MarkAsRecent(&this->DescriptorLruCache,*ppFVar6);
      pFVar12 = ((*ppFVar6)->Value).Reference;
      if (pFVar12 != (FReplicationStateDescriptor *)0x0) {
        FReplicationStateDescriptor::AddRef(pFVar12);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  if (param_1 != (FName)local_98) {
    pFVar1 = *(FReplicationStateDescriptor **)param_1;
    *(FReplicationStateDescriptor **)param_1 = pFVar12;
    pFVar12 = pFVar1;
  }
  if (pFVar12 != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::Release(pFVar12);
  }
  if (*(longlong *)param_1 != 0) {
    return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)param_1;
  }
  local_88.DataPtr = (wchar_t *)0x0;
  local_88._8_8_ = (ulonglong)local_3c << 0x20;
  pFVar8 = ::FName::ToString(&local_res18,&local_58);
  if ((pFVar8->Data).ArrayNum == 0) {
    local_78 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_78 = (pFVar8->Data).AllocatorInstance.Data;
    if (local_78 == (FScriptContainerElement *)0x0) goto LAB_1443027f1;
  }
  sVar9 = wcslen((wchar_t *)local_78);
  iVar13 = (int)sVar9;
LAB_1443027f1:
  iStack_70 = iVar13;
  pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_68._12_4_ = uStack_6c;
  local_68.Size = iStack_70;
  local_68.DataPtr = (wchar_t *)local_78;
  local_res8 = (FName)StaticLoadObject(pUVar10,(UObject *)0x0,&local_68,&local_88,0,
                                       (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FVar11 = local_res8;
  if (local_res8 != (FName)0x0) {
    pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
    lVar2 = *(longlong *)((longlong)FVar11 + 0x10);
    iVar13 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar13) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar10->_padding_)) {
      if (local_res8 != (FName)0x0) {
        local_res20 = &local_res8;
        `UE::Net::Private::FInstancedStructDescriptorCache::FindOrAddDescriptor'::__l10::<lambda_1>
        ::operator()(&local_res20);
      }
    }
    else {
      FVar11 = (FName)CreateAndCacheDescriptor(this,(UScriptStruct *)&local_res10,FVar11);
      if (param_1 != FVar11) {
        pFVar12 = *(FReplicationStateDescriptor **)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)FVar11;
        *(undefined8 *)FVar11 = 0;
        if (pFVar12 != (FReplicationStateDescriptor *)0x0) {
          FReplicationStateDescriptor::Release(pFVar12);
        }
      }
      if (local_res10 != (FReplicationStateDescriptor *)0x0) {
        FReplicationStateDescriptor::Release(local_res10);
      }
    }
  }
  return (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>)param_1;
}

// IsSupportedType @ 144308cf0

bool __thiscall
UE::Net::Private::FInstancedStructDescriptorCache::IsSupportedType
          (FInstancedStructDescriptorCache *this,UScriptStruct *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  UObject *pUVar12;
  UObject *pUVar13;
  FUObjectItem *pFVar14;
  UClass *pUVar15;
  int iVar16;
  uint uVar17;
  FWeakObjectPtr *this_00;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  undefined1 local_res10 [8];
  int local_res18;
  UObject *local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1 == (UScriptStruct *)0x0) {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8078501384019770756>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\InstancedStructNetSerializer.cpp"
                       ,0x27c,"Struct != nullptr");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
LAB_144308d3f:
    bVar8 = false;
  }
  else {
    iVar16 = *(int *)&(this->SupportedTypes).Elements.field_0x34;
    iVar3 = *(int *)&(this->SupportedTypes).Elements.field_0x8;
    if (iVar3 != iVar16) {
      iVar4 = *(int *)&(this->SupportedTypes).Elements.field_0x28;
      puVar2 = &(this->SupportedTypes).Elements.field_0x10;
      iVar19 = 0;
      iVar21 = 0;
      uVar10 = 1;
      iVar11 = 0;
      if (iVar4 != 0) {
        puVar22 = *(uint **)&(this->SupportedTypes).Elements.field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)puVar2;
        }
        uVar18 = *puVar22;
        while (uVar18 == 0) {
          iVar19 = iVar19 + 1;
          iVar21 = iVar21 + 0x20;
          iVar11 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_144308ddc;
          uVar18 = puVar22[iVar19];
        }
        uVar10 = ~(uVar18 - 1) & uVar18;
        uVar1 = (ulonglong)uVar10 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        local_res18 = (int)lVar6;
        iVar11 = local_res18 + -1 + iVar21;
        if (iVar4 < iVar11) {
          iVar11 = iVar4;
        }
      }
LAB_144308ddc:
      uVar18 = *(uint *)&(this->SupportedTypes).Elements.field_0x28;
      uVar17 = uVar18 & 0xffffffe0;
      TStack_60._padding_ = CONCAT44(uVar10,iVar19);
      TStack_60.CurrentBitIndex = iVar11;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      TStack_60._28_4_ = iVar11;
      TStack_60.BaseBitIndex = iVar21;
      uStack_40 = CONCAT44(uStack_6c,iVar3 - iVar16);
      iVar16 = (int)uVar18 >> 5;
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      uVar10 = *(uint *)&(this->SupportedTypes).Elements.field_0x28;
      if (uVar18 != uVar10) {
        puVar5 = *(undefined1 **)&(this->SupportedTypes).Elements.field_0x20;
        puVar20 = puVar2;
        if (puVar5 != (undefined1 *)0x0) {
          puVar20 = puVar5;
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
        while (uVar18 == 0) {
          iVar16 = iVar16 + 1;
          uVar17 = uVar17 + 0x20;
          uVar18 = uVar10;
          if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar16)
          goto LAB_144308ed0;
          uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
        }
        uVar1 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        uVar18 = (int)lVar6 + -1 + uVar17;
        if ((int)uVar10 < (int)uVar18) {
          uVar18 = uVar10;
        }
      }
LAB_144308ed0:
      do {
        if (*(int *)&(this->SupportedTypes).Elements.field_0x8 -
            *(int *)&(this->SupportedTypes).Elements.field_0x34 != (int)uStack_40) {
          `TSparseArray<TSparseSetElement<TSoftObjectPtr<UScriptStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if ((TStack_60.CurrentBitIndex == uVar18) &&
           (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) goto LAB_144308d3f;
        this_00 = (FWeakObjectPtr *)
                  ((longlong)TStack_60.CurrentBitIndex * 0x30 +
                  *(longlong *)&(this->SupportedTypes).Elements);
        pUVar12 = FWeakObjectPtr::Get(this_00);
        if ((pUVar12 == (UObject *)0x0) && (this_00[1] != (FWeakObjectPtr)0x0)) {
          pUVar13 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)(this_00 + 1));
          if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
            GC::MarkAsReachable(pUVar13);
          }
          bVar8 = (*IsInAsyncLoadingThread)();
          if (((bVar8) && (pUVar13 != (UObject *)0x0)) &&
             (pFVar14 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar13->field_0xc),
             ((pFVar14->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_144308fa3:
            if ((*(uint *)&pUVar13->field_0x8 >> 0x1e & 1) != 0) goto LAB_144308fb1;
            bVar8 = true;
          }
          else {
            local_res20 = pUVar13;
            if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
              GC::MarkAsReachable(pUVar13);
            }
            FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res20);
            if (pUVar13 != (UObject *)0x0) goto LAB_144308fa3;
LAB_144308fb1:
            bVar8 = false;
          }
          pUVar12 = (UObject *)0x0;
          if (bVar8) {
            pUVar12 = pUVar13;
          }
        }
        if (pUVar12 != (UObject *)0x0) {
          pUVar15 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar16 = (int)pUVar15->_padding_;
          if ((iVar16 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar16 * 8) ==
              &pUVar15->_padding_)) {
            if ((*(int *)&pUVar12[1].field_0x10 <= (int)param_1->_padding_) &&
               (*(undefined1 **)(param_1->_padding_ + (longlong)*(int *)&pUVar12[1].field_0x10 * 8)
                == &pUVar12[1].field_0x8)) break;
          }
        }
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while( true );
    }
    bVar8 = true;
  }
  return bVar8;
}

// SetDebugName @ 144313190

void __thiscall
UE::Net::Private::FInstancedStructDescriptorCache::SetDebugName
          (FInstancedStructDescriptorCache *this,FString *param_1)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pFVar2 = &this->DebugName;
  if (pFVar2 != param_1) {
    iVar3 = (this->DebugName).Data.ArrayMax;
    piVar1 = &(this->DebugName).Data.ArrayMax;
    _Src = (param_1->Data).AllocatorInstance.Data;
    iVar4 = (param_1->Data).ArrayNum;
    (this->DebugName).Data.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
      return;
    }
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,iVar3,(ForAnyElementType *)pFVar2,iVar4,piVar1);
    if (iVar4 != 0) {
      memcpy((pFVar2->Data).AllocatorInstance.Data,_Src,(longlong)iVar4 * 2);
    }
  }
  return;
}

// SetMaxCachedDescriptorCount @ 144313700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FInstancedStructDescriptorCache::SetMaxCachedDescriptorCount
          (FInstancedStructDescriptorCache *this,int param_1)

{
  undefined1 *puVar1;
  TMap<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  if (param_1 < 1) {
    param_1 = 0;
  }
  else {
    if ((2 < (byte)LogIris._0_1_) &&
       (*(int *)&(this->DescriptorMap).field_0x8 != *(int *)&(this->DescriptorMap).field_0x34)) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    this_00 = &this->DescriptorMap;
    bVar3 = 1 < *(int *)&(this->DescriptorMap).field_0x48;
    if (!bVar3) {
      TSet<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->DescriptorMap).field_0x8);
    puVar1 = &(this->DescriptorMap).field_0xc;
    *(undefined4 *)&(this->DescriptorMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->DescriptorMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->DescriptorMap).field_0x34 = 0;
    iVar2 = *(int *)&(this->DescriptorMap).field_0x2c;
    *(undefined4 *)&(this->DescriptorMap).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->DescriptorMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DescriptorMap).field_0x10,0);
    }
    if (bVar3) {
      *(undefined4 *)&(this->DescriptorMap).field_0x48 = 1;
      TSet<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>,FDefaultSetAllocator>
                *)this_00);
    }
  }
  TLruCache<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,DefaultKeyComparer<FName>_>
  ::Empty(&this->DescriptorLruCache,param_1);
  this->MaxCachedDescriptorCount = param_1;
  return;
}

// operator() @ 1504baec0

bool __thiscall
`UE::Net::Private::FInstancedStructDescriptorCache::FindOrAddDescriptor'::__l10::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8078501384019770691>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8078501384019770691>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504baf2d;
    }
  }
  bVar2 = false;
LAB_1504baf2d:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

