// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 23

// ~FPCGMetadataAttributeBase @ 1497e2aa0

void __thiscall
FPCGMetadataAttributeBase::~FPCGMetadataAttributeBase(FPCGMetadataAttributeBase *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->EntryMapLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->EntryMapLock);
  }
  *(undefined4 *)&(this->EntryToValueKeyMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EntryToValueKeyMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EntryToValueKeyMap);
  return;
}

// FPCGMetadataAttributeBase @ 149e35590

FPCGMetadataAttributeBase * __thiscall
FPCGMetadataAttributeBase::FPCGMetadataAttributeBase
          (FPCGMetadataAttributeBase *this,FPCGMetadataDomain *param_1,FName param_2,
          FPCGMetadataAttributeBase *param_3,bool param_4)

{
  *(undefined8 *)&this->EntryToValueKeyMap = 0;
  *(undefined8 *)&(this->EntryToValueKeyMap).field_0x8 = 0;
  *(undefined8 *)&(this->EntryToValueKeyMap).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FPCGMetadataAttributeBase__6B_;
  *(undefined4 *)&(this->EntryToValueKeyMap).field_0x28 = 0;
  *(undefined4 *)&(this->EntryToValueKeyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntryToValueKeyMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntryToValueKeyMap).field_0x34 = 0;
  *(undefined8 *)&(this->EntryToValueKeyMap).field_0x40 = 0;
  *(undefined4 *)&(this->EntryToValueKeyMap).field_0x48 = 0;
  (this->EntryMapLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->bAllowsInterpolation = param_4;
  this->Metadata = param_1;
  this->Parent = param_3;
  this->TypeId = 0;
  this->Name = param_2;
  this->AttributeId = -1;
  return this;
}

// FPCGMetadataAttributeBase @ 149e35600

FPCGMetadataAttributeBase * __thiscall
FPCGMetadataAttributeBase::FPCGMetadataAttributeBase
          (FPCGMetadataAttributeBase *this,UPCGMetadata *param_1,FName param_2,
          FPCGMetadataAttributeBase *param_3,bool param_4)

{
  FPCGMetadataDomain *pFVar1;
  
  pFVar1 = (FPCGMetadataDomain *)0x0;
  if ((param_1 != (UPCGMetadata *)0x0) && (PCGMetadataDomainID::Default.Flag != Invalid)) {
    pFVar1 = UPCGMetadata::FindOrCreateMetadataDomain(param_1,&PCGMetadataDomainID::Default);
  }
  *(undefined8 *)&this->EntryToValueKeyMap = 0;
  *(undefined8 *)&(this->EntryToValueKeyMap).field_0x20 = 0;
  *(undefined8 *)&(this->EntryToValueKeyMap).field_0x8 = 0;
  *(undefined4 *)&(this->EntryToValueKeyMap).field_0x28 = 0;
  *(undefined4 *)&(this->EntryToValueKeyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntryToValueKeyMap).field_0x34 = 0;
  *(undefined4 *)&(this->EntryToValueKeyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EntryToValueKeyMap).field_0x40 = 0;
  *(undefined4 *)&(this->EntryToValueKeyMap).field_0x48 = 0;
  (this->EntryMapLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->Metadata = pFVar1;
  this->bAllowsInterpolation = param_4;
  this->_padding_ = (longlong)&___7FPCGMetadataAttributeBase__6B_;
  this->Parent = param_3;
  this->TypeId = 0;
  this->Name = param_2;
  this->AttributeId = -1;
  return this;
}

// operator() @ 149e3fef0

void __thiscall
`FPCGMetadataAttributeBase::GetValueKeys_Internal'::__l30::<lambda_2>::operator()
          (void *this,TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *param_1)

{
  ulonglong uVar1;
  FPCGMetadataDomain *this_00;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  code *pcVar3;
  int iVar4;
  long64 *plVar5;
  bool bVar6;
  undefined4 local_88;
  undefined4 uStack_84;
  TArrayView<int,int> local_78;
  long64 *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TPCGValueRange<__int64,TStridedView<__int64,int>_> local_48;
  TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> local_28;
  
  iVar4 = param_1->NumElements;
  uStack_54 = *(undefined4 *)&param_1->field_0x14;
  uStack_50 = (undefined4)param_1->StubValue;
  uStack_4c = *(undefined4 *)((longlong)&param_1->StubValue + 4);
  uVar1._0_4_ = (param_1->ElementView).BytesBetweenElements;
  uVar1._4_4_ = (param_1->ElementView).NumElements;
  plVar5 = (param_1->ElementView).FirstElementPtr;
  uStack_60._0_4_ = (param_1->ElementView).BytesBetweenElements;
  uStack_60._4_4_ = (param_1->ElementView).NumElements;
  this_00 = *(FPCGMetadataDomain **)(*(longlong *)this + 0x60);
  pTVar2 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x10);
  local_68 = plVar5;
  local_58 = iVar4;
  if (iVar4 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((int)(undefined4)uVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((uVar1 & 7) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_88 = SUB84(plVar5,0);
  uStack_84 = (undefined4)((ulonglong)plVar5 >> 0x20);
  local_48.ElementView.FirstElementPtr._0_4_ = local_88;
  local_48.ElementView.FirstElementPtr._4_4_ = uStack_84;
  local_28.NumElements = iVar4;
  local_48.NumElements = iVar4;
  local_48._20_4_ = local_28._20_4_;
  local_48.StubValue = local_28.StubValue;
  local_48.ElementView.BytesBetweenElements = (undefined4)uVar1;
  local_48.ElementView.NumElements = iVar4;
  FPCGMetadataDomain::GetParentKeysWithRange(this_00,&local_48,pTVar2);
  local_28.ElementView.FirstElementPtr = (param_1->ElementView).FirstElementPtr;
  local_28.ElementView.BytesBetweenElements = (param_1->ElementView).BytesBetweenElements;
  local_28.ElementView.NumElements = (param_1->ElementView).NumElements;
  local_78.DataPtr = (int *)**(undefined8 **)((longlong)this + 8);
  local_78._8_8_ = (*(undefined8 **)((longlong)this + 8))[1];
  local_28.NumElements = param_1->NumElements;
  local_28._20_4_ = *(undefined4 *)&param_1->field_0x14;
  local_28.StubValue = param_1->StubValue;
  FPCGMetadataAttributeBase::GetValueKeys_Internal
            (*(FPCGMetadataAttributeBase **)(*(longlong *)this + 0x68),&local_28,&local_78,
             *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x10),true);
  return;
}

// ClearEntries @ 149e4cb10

void __thiscall FPCGMetadataAttributeBase::ClearEntries(FPCGMetadataAttributeBase *this)

{
  TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
              *)&this->EntryToValueKeyMap);
  return;
}

// GetMetadata @ 149e5b400

UPCGMetadata * __thiscall FPCGMetadataAttributeBase::GetMetadata(FPCGMetadataAttributeBase *this)

{
  if (this->Metadata != (FPCGMetadataDomain *)0x0) {
    return this->Metadata->TopMetadata;
  }
  return (UPCGMetadata *)0x0;
}

// GetValueKey @ 149e6b270

int __thiscall
FPCGMetadataAttributeBase::GetValueKey(FPCGMetadataAttributeBase *this,long64 param_1)

{
  FPCGMetadataAttributeBase *pFVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = -1;
  if (param_1 != -1) {
    while( true ) {
      AcquireSRWLockShared((PSRWLOCK)&this->EntryMapLock);
      piVar2 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
               ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                       *)&this->EntryToValueKeyMap,param_1);
      if (piVar2 != (int *)0x0) break;
      ReleaseSRWLockShared((PSRWLOCK)&this->EntryMapLock);
      pFVar1 = this->Parent;
      if (pFVar1 == (FPCGMetadataAttributeBase *)0x0) {
        return -1;
      }
      param_1 = FPCGMetadataDomain::GetParentKey(this->Metadata,param_1);
      this = pFVar1;
      if (param_1 == -1) {
        return -1;
      }
    }
    iVar3 = *piVar2;
    ReleaseSRWLockShared((PSRWLOCK)&this->EntryMapLock);
  }
  return iVar3;
}

// GetValueKeys @ 149e6b310

void __thiscall
FPCGMetadataAttributeBase::GetValueKeys
          (FPCGMetadataAttributeBase *this,TArrayView<__int64_const_,int> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  long64 *plVar2;
  bool bVar3;
  int iVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_34;
  TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> local_28;
  
  plVar2 = param_1->DataPtr;
  iVar4 = (int)*(undefined8 *)&param_1->ArrayNum;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_58 = SUB84(plVar2,0);
  uStack_54 = (undefined4)((ulonglong)plVar2 >> 0x20);
  local_28.ElementView.FirstElementPtr._0_4_ = local_58;
  local_28.ElementView.FirstElementPtr._4_4_ = uStack_54;
  local_28.ElementView.BytesBetweenElements = 8;
  local_28._20_4_ = uStack_34;
  local_28.NumElements = iVar4;
  local_28.ElementView.NumElements = iVar4;
  GetValueKeys(this,&local_28,param_2);
  return;
}

// GetValueKeys @ 149e6b3c0

void __thiscall
FPCGMetadataAttributeBase::GetValueKeys
          (FPCGMetadataAttributeBase *this,TArrayView<__int64,int> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  long64 *plVar2;
  bool bVar3;
  int iVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_34;
  TPCGValueRange<__int64,TStridedView<__int64,int>_> local_28;
  
  plVar2 = param_1->DataPtr;
  iVar4 = (int)*(undefined8 *)&param_1->ArrayNum;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_58 = SUB84(plVar2,0);
  uStack_54 = (undefined4)((ulonglong)plVar2 >> 0x20);
  local_28.ElementView.FirstElementPtr._0_4_ = local_58;
  local_28.ElementView.FirstElementPtr._4_4_ = uStack_54;
  local_28.ElementView.BytesBetweenElements = 8;
  local_28._20_4_ = uStack_34;
  local_28.NumElements = iVar4;
  local_28.ElementView.NumElements = iVar4;
  GetValueKeys(this,&local_28,param_2);
  return;
}

// GetValueKeys @ 149e6b470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPCGMetadataAttributeBase::GetValueKeys
          (FPCGMetadataAttributeBase *this,
          TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  uint *puVar1;
  TArrayView<int,int> *pTVar2;
  ForElementType<unsigned_int> FVar3;
  int _Val;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_c8 [32];
  TArrayView<int,int> local_98;
  TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> local_88;
  TArrayView<int,int> local_68;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar5 = param_1->NumElements;
  if (uVar5 != 0) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_2,uVar5,Default);
    local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    uVar4 = uVar5 + 0x1f >> 5;
    local_58.MaxBits = 0x80;
    local_58.NumBits = uVar5;
    if (uVar5 + 0x1f >> 5 != 0) {
      if (4 < uVar4) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_58.AllocatorInstance,0,uVar4,4);
        local_58.MaxBits = uVar4 << 5;
      }
      FVar3 = (ForElementType<unsigned_int>)&local_58;
      if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar3 = local_58.AllocatorInstance.SecondaryData;
      }
      if (uVar4 < 9) {
        _Val = -1;
      }
      else {
        _Val = 0xff;
      }
      memset((void *)FVar3,_Val,(ulonglong)uVar4 << 2);
      uVar5 = local_58.NumBits & 0x8000001f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
      }
      if (uVar5 != 0) {
        FVar3 = (ForElementType<unsigned_int>)&local_58;
        if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar3 = local_58.AllocatorInstance.SecondaryData;
        }
        puVar1 = (uint *)((longlong)FVar3 +
                         (longlong)
                         ((int)(local_58.NumBits + (local_58.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar5 & 0x1f);
      }
    }
    pTVar2 = TArrayView<int,int>::
             TArrayView<int,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                       (&local_68,param_2);
    local_88.ElementView.FirstElementPtr = (param_1->ElementView).FirstElementPtr;
    local_88.ElementView.BytesBetweenElements = (param_1->ElementView).BytesBetweenElements;
    local_88.ElementView.NumElements = (param_1->ElementView).NumElements;
    local_98.DataPtr = pTVar2->DataPtr;
    local_98.ArrayNum = pTVar2->ArrayNum;
    local_98._12_4_ = *(undefined4 *)&pTVar2->field_0xc;
    local_88.NumElements = param_1->NumElements;
    local_88._20_4_ = *(undefined4 *)&param_1->field_0x14;
    local_88.StubValue = param_1->StubValue;
    GetValueKeys_Internal(this,&local_88,&local_98,&local_58,false);
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// GetValueKeys @ 149e6b610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPCGMetadataAttributeBase::GetValueKeys
          (FPCGMetadataAttributeBase *this,
          TPCGValueRange<__int64,TStridedView<__int64,int>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  long64 *plVar4;
  bool bVar5;
  TArrayView<int,int> *pTVar6;
  ForElementType<unsigned_int> FVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_108 [32];
  TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> local_a8;
  int *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<int,int> local_78;
  TArrayView<int,int> local_68;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  uVar10 = param_1->NumElements;
  if (uVar10 != 0) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_2,uVar10,Default);
    local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    uVar9 = uVar10 + 0x1f >> 5;
    local_58.MaxBits = 0x80;
    local_58.NumBits = uVar10;
    if (uVar10 + 0x1f >> 5 != 0) {
      if (4 < uVar9) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_58.AllocatorInstance,0,uVar9,4);
        local_58.MaxBits = uVar9 << 5;
      }
      FVar7 = (ForElementType<unsigned_int>)&local_58;
      if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_58.AllocatorInstance.SecondaryData;
      }
      if (uVar9 < 9) {
        iVar8 = -1;
      }
      else {
        iVar8 = 0xff;
      }
      memset((void *)FVar7,iVar8,(ulonglong)uVar9 << 2);
      uVar10 = local_58.NumBits & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      if (uVar10 != 0) {
        FVar7 = (ForElementType<unsigned_int>)&local_58;
        if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar7 = local_58.AllocatorInstance.SecondaryData;
        }
        puVar1 = (uint *)((longlong)FVar7 +
                         (longlong)
                         ((int)(local_58.NumBits + (local_58.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar10 & 0x1f);
      }
    }
    pTVar6 = TArrayView<int,int>::
             TArrayView<int,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                       (&local_68,param_2);
    iVar8 = param_1->NumElements;
    uVar2._0_4_ = (param_1->ElementView).BytesBetweenElements;
    uVar2._4_4_ = (param_1->ElementView).NumElements;
    local_88 = pTVar6->DataPtr;
    iStack_80 = pTVar6->ArrayNum;
    uStack_7c = *(undefined4 *)&pTVar6->field_0xc;
    plVar4 = (param_1->ElementView).FirstElementPtr;
    if ((iVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumElements >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                           ,0x3f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((int)(undefined4)uVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BytesBetweenElements >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                           ,0x40,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((uVar2 & 7) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BytesBetweenElements % alignof(ElementType) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                           ,0x41,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_a8.ElementView.NumElements = iVar8;
    local_a8.ElementView.BytesBetweenElements = (undefined4)uVar2;
    local_78.DataPtr = local_88;
    local_78.ArrayNum = iStack_80;
    local_78._12_4_ = uStack_7c;
    local_a8.ElementView.FirstElementPtr = plVar4;
    local_a8.NumElements = iVar8;
    GetValueKeys_Internal(this,&local_a8,&local_78,&local_58,true);
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// GetValueKeys_Internal @ 149e6b860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPCGMetadataAttributeBase::GetValueKeys_Internal
          (FPCGMetadataAttributeBase *this,
          TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *param_1,
          TArrayView<int,int> *param_2,TBitArray<FDefaultBitArrayAllocator> *param_3,bool param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long64 *plVar9;
  int *piVar10;
  ForElementType<__int64> FVar11;
  longlong lVar12;
  ForElementType<unsigned_int> FVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  undefined1 auStackY_948 [32];
  uint local_8f4;
  undefined4 local_8e0;
  undefined4 uStack_8dc;
  long64 local_8c8;
  int local_8c0;
  int local_8bc;
  FPCGMetadataAttributeBase *local_8b8;
  TArrayView<int,int> *local_8b0;
  TBitArray<FDefaultBitArrayAllocator> *local_8a8;
  TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> local_898;
  TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> local_878;
  ForElementType<__int64> local_858;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_948;
  if (((param_1->NumElements != param_2->ArrayNum) || (param_2->ArrayNum != param_3->NumBits)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntryKeys.Num() == OutValueKeys.Num() && OutValueKeys.Num() == UnsetValues.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataAttribute.cpp"
                         ,0xd3,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar3 = param_3->NumBits;
  iVar17 = 0;
  bVar6 = true;
  uVar8 = 1;
  iVar16 = iVar17;
  iVar19 = iVar17;
  if (iVar3 != 0) {
    FVar14 = (param_3->AllocatorInstance).SecondaryData;
    FVar13 = (ForElementType<unsigned_int>)param_3;
    if (FVar14 != (ForElementType<unsigned_int>)0x0) {
      FVar13 = FVar14;
    }
    uVar15 = *(uint *)FVar13;
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_149e6b977;
      uVar15 = *(uint *)((uchar *)((longlong)FVar13 + 4) + lVar12 * 4);
    }
    uVar8 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_8c0 = (int)lVar12;
    iVar16 = local_8c0 + -1 + iVar19;
    if (iVar3 < iVar16) {
LAB_149e6b977:
      iVar16 = iVar3;
    }
  }
  local_8f4 = 0xffffffff;
  piVar18 = &param_3->NumBits;
  if (iVar16 < *piVar18) {
    AcquireSRWLockShared((PSRWLOCK)&this->EntryMapLock);
    if (iVar16 < *piVar18) {
      do {
        plVar9 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                           (param_1,iVar16);
        bVar5 = (byte)iVar16;
        FVar14 = (ForElementType<unsigned_int>)param_3;
        if (*plVar9 == -1) {
          piVar10 = TArrayView<int,int>::operator[](param_2,iVar16);
          *piVar10 = -1;
          if (((iVar16 < 0) || (*piVar18 <= iVar16)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar13 = (param_3->AllocatorInstance).SecondaryData;
          if (FVar13 != (ForElementType<unsigned_int>)0x0) {
            FVar14 = FVar13;
          }
          if (iVar16 < 0) {
            puVar1 = (uint *)((longlong)FVar14 + (longlong)(iVar16 + 0x1f >> 5) * 4);
            *puVar1 = *puVar1 & ~(1 << (bVar5 & 0x1f));
          }
          else {
LAB_149e6bb2f:
            puVar1 = (uint *)((longlong)FVar14 + (longlong)(iVar16 >> 5) * 4);
            *puVar1 = *puVar1 & ~(1 << (bVar5 & 0x1f));
          }
        }
        else {
          piVar10 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                    ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                            *)&this->EntryToValueKeyMap,*plVar9);
          if (piVar10 == (int *)0x0) {
            if (this->Parent == (FPCGMetadataAttributeBase *)0x0) {
              piVar10 = TArrayView<int,int>::operator[](param_2,iVar16);
              *piVar10 = -1;
              if (((iVar16 < 0) || (*piVar18 <= iVar16)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar13 = (param_3->AllocatorInstance).SecondaryData;
              if (FVar13 != (ForElementType<unsigned_int>)0x0) {
                FVar14 = FVar13;
              }
              if (iVar16 < 0) {
                iVar16 = iVar16 + 0x1f;
              }
              goto LAB_149e6bb2f;
            }
            bVar6 = false;
          }
          else {
            iVar3 = *piVar10;
            piVar10 = TArrayView<int,int>::operator[](param_2,iVar16);
            *piVar10 = iVar3;
            if (((iVar16 < 0) || (*piVar18 <= iVar16)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar14 = (param_3->AllocatorInstance).SecondaryData;
            FVar13 = (ForElementType<unsigned_int>)param_3;
            if (FVar14 != (ForElementType<unsigned_int>)0x0) {
              FVar13 = FVar14;
            }
            if (iVar16 < 0) {
              iVar16 = iVar16 + 0x1f;
            }
            puVar1 = (uint *)((longlong)FVar13 + (longlong)(iVar16 >> 5) * 4);
            *puVar1 = *puVar1 & ~(1 << (bVar5 & 0x1f));
          }
        }
        iVar3 = *piVar18;
        local_8f4 = local_8f4 & ~uVar8;
        FVar14 = (param_3->AllocatorInstance).SecondaryData;
        FVar13 = (ForElementType<unsigned_int>)param_3;
        if (FVar14 != (ForElementType<unsigned_int>)0x0) {
          FVar13 = FVar14;
        }
        uVar15 = local_8f4 & *(uint *)((longlong)FVar13 + (longlong)iVar17 * 4);
        while (uVar15 == 0) {
          lVar12 = (longlong)iVar17;
          iVar19 = iVar19 + 0x20;
          iVar17 = iVar17 + 1;
          iVar16 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_149e6bbd5;
          uVar15 = *(uint *)((uchar *)((longlong)FVar13 + 4) + lVar12 * 4);
          local_8f4 = 0xffffffff;
        }
        uVar8 = -uVar15 & uVar15;
        uVar2 = (ulonglong)uVar8 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_8bc = (int)lVar12;
        iVar16 = local_8bc + -1 + iVar19;
        if (iVar3 < iVar16) {
          iVar16 = iVar3;
        }
LAB_149e6bbd5:
      } while (iVar16 < *piVar18);
    }
    uVar8 = 0;
    ReleaseSRWLockShared((PSRWLOCK)&this->EntryMapLock);
    if (this->Parent == (FPCGMetadataAttributeBase *)0x0) {
      if ((!bVar6) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1572022072593350909>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataAttribute.cpp"
                             ,0xfd,"Parent || bFoundAllKeys"), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (this->Parent == (FPCGMetadataAttributeBase *)0x0) {
        return;
      }
    }
    if (!bVar6) {
      local_8b8 = this;
      local_8b0 = param_2;
      local_8a8 = param_3;
      if (param_4) {
        local_898.ElementView.FirstElementPtr = (param_1->ElementView).FirstElementPtr;
        local_898.ElementView.BytesBetweenElements = (param_1->ElementView).BytesBetweenElements;
        local_898.ElementView.NumElements = (param_1->ElementView).NumElements;
        local_898.NumElements = param_1->NumElements;
        local_898._20_4_ = *(undefined4 *)&param_1->field_0x14;
        local_898.StubValue = param_1->StubValue;
        `FPCGMetadataAttributeBase::GetValueKeys_Internal'::__l30::<lambda_2>::operator()
                  (&local_8b8,&local_898);
      }
      else {
        local_858.SecondaryData = (ForElementType<__int64>)0x0;
        local_50 = 0;
        local_4c = 0x100;
        uVar15 = param_1->NumElements;
        if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
        }
        if (0x100 < (int)uVar15) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                    (8,8,uVar15,&local_858,0,&local_4c);
        }
        for (; iVar3 = local_50, uVar8 != uVar15; uVar8 = uVar8 + 1) {
          local_8c8 = *(long64 *)
                       ((longlong)((int)uVar8 % (param_1->ElementView).NumElements) *
                        (longlong)(param_1->ElementView).BytesBetweenElements +
                       (longlong)(param_1->ElementView).FirstElementPtr);
          FVar11 = (ForElementType<__int64>)&local_858;
          if (local_858.SecondaryData != (ForElementType<__int64>)0x0) {
            FVar11 = local_858.SecondaryData;
          }
          if ((ulonglong)FVar11 <= &local_8c8) {
            FVar11 = (ForElementType<__int64>)&local_858;
            if (local_858.SecondaryData != (ForElementType<__int64>)0x0) {
              FVar11 = local_858.SecondaryData;
            }
            if ((&local_8c8 < (long64 *)((longlong)FVar11 + (longlong)local_4c * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (local_50 == local_4c) {
            local_50 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                                 (0x808,&local_858,&local_4c);
          }
          lVar12 = (longlong)local_50;
          FVar11 = (ForElementType<__int64>)&local_858;
          if (local_858.SecondaryData != (ForElementType<__int64>)0x0) {
            FVar11 = local_858.SecondaryData;
          }
          local_50 = local_50 + 1;
          *(long64 *)((longlong)FVar11 + lVar12 * 8) = local_8c8;
        }
        FVar11 = (ForElementType<__int64>)&local_858;
        if (local_858.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar11 = local_858.SecondaryData;
        }
        if ((local_50 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((iVar3 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumElements >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                               ,0x3f,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_8e0 = FVar11._0_4_;
        uStack_8dc = FVar11._4_4_;
        local_878.ElementView.FirstElementPtr._0_4_ = local_8e0;
        local_878.ElementView.FirstElementPtr._4_4_ = uStack_8dc;
        local_878.ElementView.BytesBetweenElements = 8;
        local_898.NumElements = iVar3;
        local_878.NumElements = iVar3;
        local_878._20_4_ = local_898._20_4_;
        local_878.StubValue = local_898.StubValue;
        local_878.ElementView.NumElements = iVar3;
        `FPCGMetadataAttributeBase::GetValueKeys_Internal'::__l30::<lambda_2>::operator()
                  (&local_8b8,&local_878);
        if (local_858.SecondaryData != (ForElementType<__int64>)0x0) {
          FMemory::Free((void *)local_858.SecondaryData);
        }
      }
    }
  }
  return;
}

// HasNonDefaultValue @ 149e732a0

bool __thiscall
FPCGMetadataAttributeBase::HasNonDefaultValue(FPCGMetadataAttributeBase *this,long64 param_1)

{
  int iVar1;
  
  iVar1 = GetValueKey(this,param_1);
  return iVar1 != -1;
}

// IsValidName @ 149e781e0

bool __cdecl FPCGMetadataAttributeBase::IsValidName(FName *param_1)

{
  wint_t _C;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  FString local_38;
  
  uVar7 = 0;
  if (*param_1 != (FName)0x0) {
    pFVar5 = ::FName::ToString(param_1,&local_38);
    uVar9 = uVar7;
    while( true ) {
      iVar8 = (pFVar5->Data).ArrayNum;
      iVar4 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar4 = 0;
      }
      iVar8 = (int)uVar7;
      if (iVar4 <= iVar8) break;
      if (iVar8 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      _C = *(wint_t *)((pFVar5->Data).AllocatorInstance.Data + uVar9);
      iVar4 = iswalpha(_C);
      if (iVar4 == 0) {
        iVar4 = iswdigit(_C);
        if (iVar4 == 0) {
          pwVar6 = L" _-/";
          while (*pwVar6 != _C) {
            pwVar6 = (wchar_t *)((longlong)pwVar6 + 2);
            if ((undefined **)pwVar6 ==
                &
                _Value___TStructOpsFakeVTableForTypeImpl_UFPCGSkinnedMeshInstanceList___0A__MP6AXPEAX_Z1___Construct_UFPCGSkinnedMeshInstanceList___Private_CoreUObject_UE__YAX0_Z_MP6AX0_Z1___ConstructForTests_UFPCGSkinnedMeshInstanceList___234_YAX0_Z_MP6AX0_Z1___Destruct_UFPCGSkinnedMeshInstanceList___234_YAX0_Z_MP6A_N0PEBXH_Z1___Copy_UFPCGSkinnedMeshInstanceList___234_YA_N01H_Z_Private_CoreUObject_UE__2QEBUFStructOpsFakeVTable_234_EB
               ) {
              bVar2 = false;
              uVar7 = 1;
              goto LAB_149e782c0;
            }
          }
        }
      }
      uVar7 = (ulonglong)(iVar8 + 1);
      uVar9 = uVar9 + 2;
    }
    uVar7 = 1;
  }
  bVar2 = true;
LAB_149e782c0:
  if ((uVar7 != 0) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// IsValidName @ 149e78310

bool __cdecl FPCGMetadataAttributeBase::IsValidName(FString *param_1)

{
  wint_t _C;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = 0;
  lVar7 = 0;
  while( true ) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    if (iVar5 <= iVar8) break;
    if ((iVar8 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    _C = *(wint_t *)((param_1->Data).AllocatorInstance.Data + lVar7);
    iVar5 = iswalpha(_C);
    if ((iVar5 == 0) && (iVar5 = iswdigit(_C), iVar5 == 0)) {
      pwVar6 = L" _-/";
      while (*pwVar6 != _C) {
        pwVar6 = (wchar_t *)((longlong)pwVar6 + 2);
        if ((undefined **)pwVar6 ==
            &
            _Value___TStructOpsFakeVTableForTypeImpl_UFPCGSkinnedMeshInstanceList___0A__MP6AXPEAX_Z1___Construct_UFPCGSkinnedMeshInstanceList___Private_CoreUObject_UE__YAX0_Z_MP6AX0_Z1___ConstructForTests_UFPCGSkinnedMeshInstanceList___234_YAX0_Z_MP6AX0_Z1___Destruct_UFPCGSkinnedMeshInstanceList___234_YAX0_Z_MP6A_N0PEBXH_Z1___Copy_UFPCGSkinnedMeshInstanceList___234_YA_N01H_Z_Private_CoreUObject_UE__2QEBUFStructOpsFakeVTable_234_EB
           ) {
          return false;
        }
      }
    }
    iVar8 = iVar8 + 1;
    lVar7 = lVar7 + 2;
  }
  return true;
}

// SanitizeName @ 149e865e0

bool __cdecl FPCGMetadataAttributeBase::SanitizeName(FString *param_1)

{
  wint_t _C;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  int iVar8;
  longlong lVar9;
  
  bVar4 = false;
  iVar8 = 0;
  lVar9 = 0;
  do {
    iVar6 = (param_1->Data).ArrayNum;
    iVar5 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar5 = 0;
    }
    if (iVar5 <= iVar8) {
      return bVar4;
    }
    if ((((iVar8 < 0) || (iVar6 == 0)) || (iVar6 + -1 <= iVar8)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    _C = *(wint_t *)((param_1->Data).AllocatorInstance.Data + lVar9);
    iVar6 = iswalpha(_C);
    if ((iVar6 == 0) && (iVar6 = iswdigit(_C), iVar6 == 0)) {
      pwVar7 = L" _-/";
      do {
        if (*pwVar7 == _C) goto LAB_149e86709;
        pwVar7 = (wchar_t *)((longlong)pwVar7 + 2);
      } while ((undefined **)pwVar7 !=
               &
               _Value___TStructOpsFakeVTableForTypeImpl_UFPCGSkinnedMeshInstanceList___0A__MP6AXPEAX_Z1___Construct_UFPCGSkinnedMeshInstanceList___Private_CoreUObject_UE__YAX0_Z_MP6AX0_Z1___ConstructForTests_UFPCGSkinnedMeshInstanceList___234_YAX0_Z_MP6AX0_Z1___Destruct_UFPCGSkinnedMeshInstanceList___234_YAX0_Z_MP6A_N0PEBXH_Z1___Copy_UFPCGSkinnedMeshInstanceList___234_YA_N01H_Z_Private_CoreUObject_UE__2QEBUFStructOpsFakeVTable_234_EB
              );
      if (iVar8 < 0) {
code_r0x000149e866e2:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      else {
        iVar5 = (param_1->Data).ArrayNum;
        iVar6 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar6 = 0;
        }
        if (iVar6 <= iVar8) goto code_r0x000149e866e2;
      }
      bVar4 = true;
      *(undefined2 *)((param_1->Data).AllocatorInstance.Data + lVar9) = 0x5f;
    }
LAB_149e86709:
    iVar8 = iVar8 + 1;
    lVar9 = lVar9 + 2;
  } while( true );
}

// Serialize @ 149e8cc50

void __thiscall
FPCGMetadataAttributeBase::Serialize
          (FPCGMetadataAttributeBase *this,FPCGMetadataDomain *param_1,FArchive *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FPCGMetadataDomain *this_00;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  FPCGMetadataAttributeBase *pFVar6;
  uint local_res8 [2];
  
  TSetPrivateFriend::
  Serialize<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
            (param_2,(TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                      *)&this->EntryToValueKeyMap);
  this->Metadata = param_1;
  if (this->Parent == (FPCGMetadataAttributeBase *)0x0) {
    local_res8[0] = 0xffffffff;
  }
  else {
    local_res8[0] = this->Parent->AttributeId;
  }
  plVar2 = *(longlong **)&param_2->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (((param_2->field_0x28 & 1) != 0) && (-1 < (int)local_res8[0])) {
    if ((this->Metadata->Parent == (FPCGMetadataDomain *)0x0) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1572022072593350720>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataAttribute.cpp"
                           ,0x40,"ParentAttributeId < 0 || Metadata->GetParent()"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((-1 < (int)local_res8[0]) &&
       (this_00 = this->Metadata->Parent, this_00 != (FPCGMetadataDomain *)0x0)) {
      pFVar6 = FPCGMetadataDomain::GetConstAttributeById(this_00,local_res8[0]);
      this->Parent = pFVar6;
      if ((pFVar6 == (FPCGMetadataAttributeBase *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Parent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataAttribute.cpp"
                             ,0x44,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&this->Name);
  piVar1 = &this->AttributeId;
  piVar3 = (int *)**(undefined8 **)&param_2->field_0x8;
  if (piVar3 + 1 <= (int *)(*(undefined8 **)&param_2->field_0x8)[1]) {
    *piVar1 = *piVar3;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
    return;
  }
  if ((param_2->field_0x2a & 1) != 0) {
    FArchive::SerializeByteOrderSwapped(param_2,(uint *)piVar1);
    return;
  }
  (**(code **)(*(longlong *)param_2 + 0x188))(param_2,piVar1,4);
  return;
}

// Serialize @ 149e8cdf0

void __thiscall
FPCGMetadataAttributeBase::Serialize
          (FPCGMetadataAttributeBase *this,UPCGMetadata *param_1,FArchive *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  FPCGMetadataDomain *pFVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x10);
  if ((param_1 == (UPCGMetadata *)0x0) || (PCGMetadataDomainID::Default.Flag == Invalid)) {
    pFVar1 = (FPCGMetadataDomain *)0x0;
  }
  else {
    pFVar1 = UPCGMetadata::FindOrCreateMetadataDomain(param_1,&PCGMetadataDomainID::Default);
  }
                    /* WARNING: Could not recover jumptable at 0x000149e8ce4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pFVar1,param_2);
  return;
}

// SetValueFromValueKey @ 149ec0d20

void __thiscall
FPCGMetadataAttributeBase::SetValueFromValueKey
          (FPCGMetadataAttributeBase *this,long64 param_1,int param_2,bool param_3)

{
  AcquireSRWLockExclusive((PSRWLOCK)&this->EntryMapLock);
  SetValueFromValueKey_Unsafe(this,param_1,param_2,param_3,false);
                    /* WARNING: Could not recover jumptable at 0x000149ec0d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->EntryMapLock);
  return;
}

// SetValueFromValueKey_Unsafe @ 149ec0da0

void __thiscall
FPCGMetadataAttributeBase::SetValueFromValueKey_Unsafe
          (FPCGMetadataAttributeBase *this,long64 param_1,int param_2,bool param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long64 local_res10 [3];
  long64 local_18 [2];
  
  local_res10[0] = param_1;
  if (param_1 == -1) {
    if (!param_4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bAllowInvalidEntries",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataAttribute.cpp"
                         ,0x57,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    iVar3 = (int)((ulonglong)param_1 >> 0x20);
    if ((param_2 == -1) && (param_3)) {
      if (*(int *)&(this->EntryToValueKeyMap).field_0x8 !=
          *(int *)&(this->EntryToValueKeyMap).field_0x34) {
        local_18[0] = param_1;
        TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
        RemoveImpl<__int64>((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                             *)&this->EntryToValueKeyMap,iVar3 * 0x17 + (int)param_1,local_18);
        return;
      }
    }
    else {
      piVar4 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
               ::FindOrAddImpl<__int64_const_&>
                         ((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                           *)&this->EntryToValueKeyMap,iVar3 * 0x17 + (int)param_1,local_res10);
      *piVar4 = param_2;
    }
  }
  return;
}

// SetValuesFromValueKeys @ 149ec0e50

void __thiscall
FPCGMetadataAttributeBase::SetValuesFromValueKeys
          (FPCGMetadataAttributeBase *this,TArrayView<TTuple<__int64,int>_const_,int> *param_1,
          bool param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  TTuple<__int64,int> *pTVar4;
  TTuple<__int64,int> *pTVar5;
  longlong local_res10 [2];
  longlong local_res20;
  
  if (param_1->ArrayNum != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->EntryMapLock);
    pTVar4 = param_1->DataPtr;
    pTVar5 = pTVar4 + param_1->ArrayNum;
    for (; pTVar4 != pTVar5; pTVar4 = pTVar4 + 1) {
      local_res20 = *(longlong *)pTVar4;
      iVar1 = *(int *)&pTVar4->field_0x8;
      if (local_res20 != -1) {
        iVar2 = (int)((ulonglong)local_res20 >> 0x20);
        if ((iVar1 == -1) && (param_2)) {
          local_res10[0] = local_res20;
          if (*(int *)&(this->EntryToValueKeyMap).field_0x8 !=
              *(int *)&(this->EntryToValueKeyMap).field_0x34) {
            TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
            ::RemoveImpl<__int64>
                      ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                        *)&this->EntryToValueKeyMap,iVar2 * 0x17 + (int)local_res20,local_res10);
          }
        }
        else {
          piVar3 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                   ::FindOrAddImpl<__int64_const_&>
                             ((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                               *)&this->EntryToValueKeyMap,iVar2 * 0x17 + (int)local_res20,
                              &local_res20);
          *piVar3 = iVar1;
        }
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->EntryMapLock);
  }
  return;
}

// SetValuesFromValueKeys @ 149ec0f40

void __thiscall
FPCGMetadataAttributeBase::SetValuesFromValueKeys
          (FPCGMetadataAttributeBase *this,TArrayView<__int64_const_,int> *param_1,
          TArrayView<int_const_,int> *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  TArrayView<int_const_,int> *pTVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  FPlatformRWLock *SRWLock;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_res10;
  TArrayView<int_const_,int> *local_res18;
  char local_res20;
  longlong local_48;
  FPlatformRWLock *local_40;
  
  if ((param_1->ArrayNum != 0) && (param_1->ArrayNum == param_2->ArrayNum)) {
    SRWLock = &this->EntryMapLock;
    local_res18 = param_2;
    local_res20 = param_3;
    local_40 = SRWLock;
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pTVar3 = local_res18;
    uVar8 = 0;
    if (0 < param_1->ArrayNum) {
      lVar9 = 0;
      lVar10 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < pTVar3->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar1 = *(int *)((longlong)pTVar3->DataPtr + lVar10);
        uVar5 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_48 = *(longlong *)(lVar9 + (longlong)param_1->DataPtr);
        if (local_48 != -1) {
          iVar6 = (int)((ulonglong)local_48 >> 0x20);
          if ((iVar1 == -1) && (local_res20 != '\0')) {
            local_res10 = local_48;
            if (*(int *)&(this->EntryToValueKeyMap).field_0x8 !=
                *(int *)&(this->EntryToValueKeyMap).field_0x34) {
              TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
              ::RemoveImpl<__int64>
                        ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                          *)&this->EntryToValueKeyMap,iVar6 * 0x17 + (int)local_48,&local_res10);
            }
          }
          else {
            piVar7 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                     ::FindOrAddImpl<__int64_const_&>
                               ((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                                 *)&this->EntryToValueKeyMap,iVar6 * 0x17 + (int)local_48,&local_48)
            ;
            *piVar7 = iVar1;
          }
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 4;
        lVar9 = lVar9 + 8;
        SRWLock = local_40;
      } while ((int)uVar8 < param_1->ArrayNum);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// SetValuesFromValueKeys @ 149ec1120

void __thiscall
FPCGMetadataAttributeBase::SetValuesFromValueKeys
          (FPCGMetadataAttributeBase *this,TArrayView<__int64_const_*_const,int> *param_1,
          TArrayView<int_const_,int> *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  TArrayView<int_const_,int> *pTVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  FPlatformRWLock *SRWLock;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_res10;
  TArrayView<int_const_,int> *local_res18;
  char local_res20;
  longlong local_48;
  FPlatformRWLock *local_40;
  
  if ((param_1->ArrayNum != 0) && (param_1->ArrayNum == param_2->ArrayNum)) {
    SRWLock = &this->EntryMapLock;
    local_res18 = param_2;
    local_res20 = param_3;
    local_40 = SRWLock;
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pTVar3 = local_res18;
    uVar8 = 0;
    if (0 < param_1->ArrayNum) {
      lVar10 = 0;
      lVar9 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < pTVar3->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar1 = *(int *)(lVar9 + (longlong)pTVar3->DataPtr);
        uVar5 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_48 = **(longlong **)((longlong)param_1->DataPtr + lVar10);
        if (local_48 != -1) {
          iVar6 = (int)((ulonglong)local_48 >> 0x20);
          if ((iVar1 == -1) && (local_res20 != '\0')) {
            local_res10 = local_48;
            if (*(int *)&(this->EntryToValueKeyMap).field_0x8 !=
                *(int *)&(this->EntryToValueKeyMap).field_0x34) {
              TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
              ::RemoveImpl<__int64>
                        ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                          *)&this->EntryToValueKeyMap,iVar6 * 0x17 + (int)local_48,&local_res10);
            }
          }
          else {
            piVar7 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                     ::FindOrAddImpl<__int64_const_&>
                               ((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                                 *)&this->EntryToValueKeyMap,iVar6 * 0x17 + (int)local_48,&local_48)
            ;
            *piVar7 = iVar1;
          }
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 4;
        lVar10 = lVar10 + 8;
        SRWLock = local_40;
      } while ((int)uVar8 < param_1->ArrayNum);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

