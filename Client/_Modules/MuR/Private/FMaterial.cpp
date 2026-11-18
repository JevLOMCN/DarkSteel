// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 9

// ~FMaterial @ 14a978330

void __thiscall UE::Mutable::Private::FMaterial::~FMaterial(FMaterial *this)

{
  void *pvVar1;
  UObject *pUVar2;
  
  *(undefined4 *)&(this->ScalarParameters).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ScalarParameters).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScalarParameters);
  *(undefined4 *)&(this->ColorParameters).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColorParameters).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector4<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector4<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector4<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColorParameters);
  *(undefined4 *)&(this->ImageParameters).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ImageParameters).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ImageParameters);
  pUVar2 = (this->Material).Object;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->Material).Object = (UObject *)0x0;
  }
  this->_padding_ = (longlong)&___7FResource_Private_Mutable_UE__6B_;
  return;
}

// GetDataSize @ 14a9a5be0

int __thiscall UE::Mutable::Private::FMaterial::GetDataSize(FMaterial *this)

{
  return 0;
}

// operator== @ 14aa94ef0

bool __thiscall UE::Mutable::Private::FMaterial::operator==(FMaterial *this,FMaterial *param_1)

{
  bool bVar1;
  
  if ((this->ReferenceID == param_1->ReferenceID) &&
     ((this->Material).Object == (param_1->Material).Object)) {
    bVar1 = TMapBase<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>_>
            ::OrderIndependentCompareEqual
                      ((TMapBase<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>_>
                        *)&this->ImageParameters,
                       (TMapBase<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>_>
                        *)&param_1->ImageParameters);
    if (bVar1) {
      bVar1 = TMapBase<FName,UE::Math::TVector4<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector4<float>,0>_>
              ::OrderIndependentCompareEqual
                        ((TMapBase<FName,UE::Math::TVector4<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector4<float>,0>_>
                          *)&this->ColorParameters,
                         (TMapBase<FName,UE::Math::TVector4<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector4<float>,0>_>
                          *)&param_1->ColorParameters);
      if (bVar1) {
        bVar1 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                ::OrderIndependentCompareEqual
                          ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                            *)&this->ScalarParameters,
                           (TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                            *)&param_1->ScalarParameters);
        if (bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// Clone @ 14aabe4a0

TSharedPtr<UE::Mutable::Private::FMaterial,1> * __thiscall
UE::Mutable::Private::FMaterial::Clone
          (FMaterial *this,TSharedPtr<UE::Mutable::Private::FMaterial,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMaterial *pFVar5;
  UObjectBase *this_00;
  UObjectBase *pUVar6;
  code *pcVar7;
  bool bVar8;
  TSharedRef<UE::Mutable::Private::FMaterial,1> *pTVar9;
  TSharedPtr<UE::Mutable::Private::FMaterial,1> *pTVar10;
  TMap<FName,UE::Math::TVector4<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector4<float>,0>_>
  *this_01;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *this_02;
  TSharedRef<UE::Mutable::Private::FMaterial,1> local_18;
  
  pTVar9 = MakeShared<UE::Mutable::Private::FMaterial,1>(&local_18);
  __return_storage_ptr__->Object = pTVar9->Object;
  pTVar4 = (pTVar9->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (__return_storage_ptr__->Object == (FMaterial *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<UE::Mutable::Private::FMaterial,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = __return_storage_ptr__->Object;
  this_00 = (UObjectBase *)(this->Material).Object;
  pUVar6 = (UObjectBase *)(pFVar5->Material).Object;
  if (this_00 == (UObjectBase *)0x0) {
    if (pUVar6 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar6);
      (pFVar5->Material).Object = (UObject *)0x0;
    }
  }
  else if (pUVar6 != this_00) {
    if (pUVar6 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar6);
    }
    UObjectBase::AddRef(this_00);
    (pFVar5->Material).Object = (UObject *)this_00;
  }
  iVar3 = this->ReferenceID;
  if (__return_storage_ptr__->Object == (FMaterial *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<UE::Mutable::Private::FMaterial,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object->ReferenceID = iVar3;
  if (__return_storage_ptr__->Object == (FMaterial *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<UE::Mutable::Private::FMaterial,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = __return_storage_ptr__->Object;
  if (&pFVar5->ImageParameters != &this->ImageParameters) {
    Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(pFVar5->ImageParameters).field_0x38,
               (int *)&(pFVar5->ImageParameters).field_0x48,
               (ForElementType<FSetElementId> *)&(this->ImageParameters).field_0x38,
               *(int *)&(this->ImageParameters).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&pFVar5->ImageParameters,
                (TSparseArray<TSparseSetElement<TTuple<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->ImageParameters);
  }
  if (__return_storage_ptr__->Object == (FMaterial *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<UE::Mutable::Private::FMaterial,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = __return_storage_ptr__->Object;
  this_01 = &pFVar5->ColorParameters;
  if (this_01 != &this->ColorParameters) {
    Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(pFVar5->ColorParameters).field_0x38,
               (int *)&(pFVar5->ColorParameters).field_0x48,
               (ForElementType<FSetElementId> *)&(this->ColorParameters).field_0x38,
               *(int *)&(this->ColorParameters).field_0x48);
    iVar3 = *(int *)&(this->ColorParameters).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector4<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector4<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,iVar3);
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,iVar3,(ForAnyElementType *)this_01,
               (int *)&(pFVar5->ColorParameters).field_0x8,
               (int *)&(pFVar5->ColorParameters).field_0xc);
    puVar1 = &(this->ColorParameters).field_0x10;
    puVar2 = &(pFVar5->ColorParameters).field_0x10;
    *(undefined4 *)&(pFVar5->ColorParameters).field_0x30 =
         *(undefined4 *)&(this->ColorParameters).field_0x30;
    *(undefined4 *)&(pFVar5->ColorParameters).field_0x34 =
         *(undefined4 *)&(this->ColorParameters).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_01,*(void **)&this->ColorParameters,(longlong)iVar3 * 0x30);
    }
  }
  if (__return_storage_ptr__->Object == (FMaterial *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<UE::Mutable::Private::FMaterial,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = __return_storage_ptr__->Object;
  this_02 = &pFVar5->ScalarParameters;
  if (this_02 != &this->ScalarParameters) {
    Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(pFVar5->ScalarParameters).field_0x38,
               (int *)&(pFVar5->ScalarParameters).field_0x48,
               (ForElementType<FSetElementId> *)&(this->ScalarParameters).field_0x38,
               *(int *)&(this->ScalarParameters).field_0x48);
    iVar3 = *(int *)&(this->ScalarParameters).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_02,iVar3);
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar3,(ForAnyElementType *)this_02,
               (int *)&(pFVar5->ScalarParameters).field_0x8,
               (int *)&(pFVar5->ScalarParameters).field_0xc);
    puVar1 = &(this->ScalarParameters).field_0x10;
    puVar2 = &(pFVar5->ScalarParameters).field_0x10;
    *(undefined4 *)&(pFVar5->ScalarParameters).field_0x30 =
         *(undefined4 *)&(this->ScalarParameters).field_0x30;
    *(undefined4 *)&(pFVar5->ScalarParameters).field_0x34 =
         *(undefined4 *)&(this->ScalarParameters).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_02,*(void **)&this->ScalarParameters,(longlong)iVar3 * 0x14);
    }
  }
  return __return_storage_ptr__;
}

// Serialise @ 14aaf4410

void __thiscall UE::Mutable::Private::FMaterial::Serialise(FMaterial *this,FOutputArchive *param_1)

{
  Private::operator<<(param_1,&this->ReferenceID);
  operator<<<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const__1>_>_>
            (param_1,&this->ImageParameters);
  operator<<<FName,UE::Math::TVector4<float>_>(param_1,&this->ColorParameters);
  operator<<<FName,float>(param_1,&this->ScalarParameters);
  return;
}

// Serialise @ 14aaf4470

void __cdecl UE::Mutable::Private::FMaterial::Serialise(FMaterial *param_1,FOutputArchive *param_2)

{
  Private::operator<<(param_2,&param_1->ReferenceID);
  operator<<<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const__1>_>_>
            (param_2,&param_1->ImageParameters);
  operator<<<FName,UE::Math::TVector4<float>_>(param_2,&param_1->ColorParameters);
  operator<<<FName,float>(param_2,&param_1->ScalarParameters);
  return;
}

// StaticUnserialise @ 14aafa510

TSharedPtr<UE::Mutable::Private::FMaterial,1> * __cdecl
UE::Mutable::Private::FMaterial::StaticUnserialise
          (TSharedPtr<UE::Mutable::Private::FMaterial,1> *__return_storage_ptr__,
          FInputArchive *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<UE::Mutable::Private::FMaterial,1> *pTVar4;
  TSharedPtr<UE::Mutable::Private::FMaterial,1> *pTVar5;
  bool bVar6;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  TSharedRef<UE::Mutable::Private::FMaterial,1> local_18;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId23,"Mutable_MaterialUnserialise",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Material.cpp"
               ,0x17);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId23);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name24,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name24,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,&LLMScope_Name24,true);
  pTVar4 = MakeShared<UE::Mutable::Private::FMaterial,1>(&local_18);
  __return_storage_ptr__->Object = pTVar4->Object;
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((__return_storage_ptr__->Object == (FMaterial *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedPtr<UE::Mutable::Private::FMaterial,1> *)(*pcVar2)();
    return pTVar5;
  }
  Unserialise(__return_storage_ptr__->Object,param_1);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// Unserialise @ 14aafcf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UE::Mutable::Private::FMaterial::Unserialise(FMaterial *this,FInputArchive *param_1)

{
  TMap<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>_>
  *this_00;
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_118 [32];
  byte local_f8 [4];
  uint local_f4;
  uint local_f0;
  uint local_ec;
  float local_e8 [2];
  FName local_e0;
  FName local_d8;
  FName local_d0;
  undefined1 local_c8 [8];
  TPairInitializer<FName_&&,float_&&> local_c0;
  FName *local_b0;
  undefined4 *local_a8;
  TVector4<float>_u_0 local_98;
  FName *local_88;
  TVector4<float>_u_0 *local_80;
  FName *local_78;
  float *local_70;
  undefined4 local_68 [4];
  byte local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_c0.Value = (float *)this;
  Private::operator>>(param_1,&this->ReferenceID);
  this_00 = &this->ImageParameters;
  Private::operator>>(param_1,&local_f4);
  uVar6 = 0;
  uVar5 = uVar6;
  if (local_f4 != 0) {
    do {
      local_e0.ComparisonIndex.Value = 0;
      local_e0.Number = 0;
      local_68[0] = 0;
      local_58 = 0;
      Private::operator>>(param_1,&local_e0);
      Private::operator>>(param_1,local_f8);
      if ((1 < local_f8[0]) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < sizeof...(Ts)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SerialisationPrivate.h"
                             ,0x8b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = (ulonglong)local_f8[0];
      if ((1 < uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Loaders)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SerialisationPrivate.h"
                             ,0x80,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Mutable::Private::TVariantLoadFromInputArchiveLookup<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>::Load(unsigned___int64,UE::Mutable::Private::FInputArchive&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>&___ptr64)'
                  ::__l2::Loaders)[uVar7])(param_1,local_68);
      local_b0 = &local_e0;
      local_a8 = local_68;
      TSet<TTuple<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FName_&&,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_&&>_>
                ((TSet<TTuple<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>,FDefaultSetAllocator>
                  *)this_00,
                 (TPairInitializer<FName_&&,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_&&>
                  *)local_c8,(bool *)&local_b0);
      uVar7 = (ulonglong)local_58;
      if ((1 < uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] !=
          Core::Private::TDestructorCaller<unsigned_int>::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_68);
      }
      uVar5 = uVar5 + 1;
      this = (FMaterial *)local_c0.Value;
    } while (uVar5 < local_f4);
  }
  Private::operator>>(param_1,&local_f0);
  uVar3 = _UNK_150689648;
  uVar2 = ___xmm_3f800000000000000000000000000000;
  if (local_f0 != 0) {
    local_88 = &local_d8;
    local_80 = &local_98;
    uVar5 = uVar6;
    do {
      local_d8.ComparisonIndex.Value = 0;
      local_d8.Number = 0;
      local_98._0_8_ = uVar2;
      local_98._8_8_ = uVar3;
      Private::operator>>(param_1,&local_d8);
      Private::operator>>(param_1,(TVector4<float> *)&local_98._s_0);
      TSet<TTuple<FName,UE::Math::TVector4<float>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector4<float>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,UE::Math::TVector4<float>_&&>_>
                ((TSet<TTuple<FName,UE::Math::TVector4<float>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector4<float>,0>,FDefaultSetAllocator>
                  *)&this->ColorParameters,
                 (TPairInitializer<FName_&&,UE::Math::TVector4<float>_&&> *)(local_c8 + 4),
                 (bool *)&local_88);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_f0);
  }
  Private::operator>>(param_1,&local_ec);
  if (local_ec != 0) {
    local_78 = &local_d0;
    local_70 = local_e8;
    do {
      local_d0.ComparisonIndex.Value = 0;
      local_d0.Number = 0;
      Private::operator>>(param_1,&local_d0);
      Private::operator>>(param_1,local_e8);
      TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_&&,float_&&>_>
                ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                  *)&this->ScalarParameters,&local_c0,(bool *)&local_78);
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_ec);
  }
  return;
}

// FMaterial @ 14ab5ea60

FMaterial * __thiscall UE::Mutable::Private::FMaterial::FMaterial(FMaterial *this)

{
  this->ReferenceID = -1;
  this->_padding_ = (longlong)&___7FMaterial_Private_Mutable_UE__6B_;
  (this->Material).Object = (UObject *)0x0;
  *(undefined8 *)&this->ImageParameters = 0;
  *(undefined8 *)&(this->ImageParameters).field_0x8 = 0;
  *(undefined8 *)&(this->ImageParameters).field_0x20 = 0;
  *(undefined4 *)&(this->ImageParameters).field_0x28 = 0;
  *(undefined4 *)&(this->ImageParameters).field_0x2c = 0x80;
  *(undefined4 *)&(this->ImageParameters).field_0x34 = 0;
  *(undefined4 *)&(this->ImageParameters).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ImageParameters).field_0x40 = 0;
  *(undefined4 *)&(this->ImageParameters).field_0x48 = 0;
  *(undefined8 *)&this->ColorParameters = 0;
  *(undefined8 *)&(this->ColorParameters).field_0x8 = 0;
  *(undefined8 *)&(this->ColorParameters).field_0x20 = 0;
  *(undefined4 *)&(this->ColorParameters).field_0x28 = 0;
  *(undefined4 *)&(this->ColorParameters).field_0x2c = 0x80;
  *(undefined4 *)&(this->ColorParameters).field_0x34 = 0;
  *(undefined4 *)&(this->ColorParameters).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ColorParameters).field_0x40 = 0;
  *(undefined4 *)&(this->ColorParameters).field_0x48 = 0;
  *(undefined8 *)&this->ScalarParameters = 0;
  *(undefined8 *)&(this->ScalarParameters).field_0x8 = 0;
  *(undefined8 *)&(this->ScalarParameters).field_0x20 = 0;
  *(undefined4 *)&(this->ScalarParameters).field_0x28 = 0;
  *(undefined4 *)&(this->ScalarParameters).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalarParameters).field_0x34 = 0;
  *(undefined4 *)&(this->ScalarParameters).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ScalarParameters).field_0x40 = 0;
  *(undefined4 *)&(this->ScalarParameters).field_0x48 = 0;
  return this;
}

