// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GlobalConfigurationDataCore
// Functions: 6

// FGlobalConfigurationConfigRouter @ 14e9b7280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGlobalConfigurationConfigRouter * __thiscall
FGlobalConfigurationConfigRouter::FGlobalConfigurationConfigRouter
          (FGlobalConfigurationConfigRouter *this,FString *param_1,FString *param_2,int param_3)

{
  int iVar1;
  TMulticastDelegate<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
  *this_00;
  undefined1 auStackY_b8 [32];
  FString local_88;
  undefined1 local_78 [16];
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  IGlobalConfigurationRouter::IGlobalConfigurationRouter
            ((IGlobalConfigurationRouter *)this,param_2,param_3);
  local_68.MaxBits = 0x80;
  local_40.InlineData[0] = '\0';
  local_40.InlineData[1] = '\0';
  local_40.InlineData[2] = '\0';
  local_40.InlineData[3] = '\0';
  local_40._padding_ = 0;
  this->_padding_ = (longlong)&___7FGlobalConfigurationConfigRouter__6B_;
  (this->ConfigSection).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigSection).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigSection).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->ConfigSection).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  *(undefined8 *)&this->StoredData = 0;
  *(undefined8 *)&(this->StoredData).field_0x8 = 0;
  *(undefined8 *)&(this->StoredData).field_0x20 = 0;
  *(undefined4 *)&(this->StoredData).field_0x28 = 0;
  *(undefined4 *)&(this->StoredData).field_0x2c = 0x80;
  *(undefined4 *)&(this->StoredData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StoredData).field_0x34 = 0;
  *(undefined8 *)&(this->StoredData).field_0x40 = 0;
  *(undefined4 *)&(this->StoredData).field_0x48 = 0;
  local_68.AllocatorInstance.InlineData._0_8_ = (FScriptContainerElement *)0x0;
  local_68.AllocatorInstance.InlineData._8_8_ = 0;
  local_30 = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  OnConfigSectionsChanged
            (this,&local_88,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_78);
  local_30 = local_30 & 0xffffffff00000000;
  if (local_40.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  this_00 = FCoreDelegates::TSOnConfigSectionsChanged();
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
  ::AddRaw<FGlobalConfigurationConfigRouter>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
              *)this_00,(FGlobalConfigurationConfigRouter *)&local_88,(pmf_f78228d8)this);
  return this;
}

// ~FGlobalConfigurationConfigRouter @ 14e9b76c0

void __thiscall
FGlobalConfigurationConfigRouter::~FGlobalConfigurationConfigRouter
          (FGlobalConfigurationConfigRouter *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  
  this->_padding_ = (longlong)&___7FGlobalConfigurationConfigRouter__6B_;
  this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
            FCoreDelegates::TSOnConfigSectionsChanged();
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
  *(undefined4 *)&(this->StoredData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StoredData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StoredData);
  pFVar2 = (this->ConfigSection).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  IGlobalConfigurationRouter::~IGlobalConfigurationRouter((IGlobalConfigurationRouter *)this);
  return;
}

// operator() @ 14e9b7c20

void __thiscall
`FGlobalConfigurationConfigRouter::OnConfigSectionsChanged'::__l5::<lambda_1>::operator()
          (void *this,wchar_t *param_1,wchar_t *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  size_t sVar4;
  TPairInitializer<FString_&&,TSharedRef<FJsonValue,1>_&&> local_res18;
  TSharedPtr<FJsonValue,1> local_58;
  FJsonValue *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TStringView<wchar_t> local_38;
  FString *local_28;
  FJsonValue **local_20;
  FString local_18;
  
  local_38.Size = 0;
  local_38.DataPtr = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_2);
    local_38.Size = (int)sVar4;
  }
  IGlobalConfigurationRouter::TryParseString(&local_58,&local_38);
  if (local_58.Object != (FJsonValue *)0x0) {
    lVar1 = *(longlong *)this;
    if ((local_58.Object == (FJsonValue *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_48 = local_58.Object;
    pTStack_40 = local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_58.Object == (FJsonValue *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FString::FString(&local_18,param_1);
    local_28 = &local_18;
    local_20 = &local_48;
    TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,TSharedRef<FJsonValue,1>_&&>_>
              ((TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x30),&local_res18,(bool *)&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// GetAllDataFromRouter @ 14e9b8520

void __thiscall
FGlobalConfigurationConfigRouter::GetAllDataFromRouter
          (FGlobalConfigurationConfigRouter *this,
          TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>
          *param_1)

{
  TMap<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>
  ::operator=(param_1,&this->StoredData);
  return;
}

// OnConfigSectionsChanged @ 14e9b8c30

void __thiscall
FGlobalConfigurationConfigRouter::OnConfigSectionsChanged
          (FGlobalConfigurationConfigRouter *this,FString *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  bool bVar9;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  pwVar8 = L"";
  iVar4 = 0;
  if (*(int *)&(param_2->Elements).field_0x8 == *(int *)&(param_2->Elements).field_0x34)
  goto LAB_14e9b8cd2;
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == GEngineIni.Data.ArrayNum) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)GEngineIni.Data.AllocatorInstance.Data);
      bVar9 = iVar2 == 0;
      goto LAB_14e9b8c92;
    }
  }
  else {
    bVar9 = iVar2 + GEngineIni.Data.ArrayNum == 1;
LAB_14e9b8c92:
    if (!bVar9) {
      return;
    }
  }
  iVar2 = (this->ConfigSection).Data.ArrayNum;
  if (iVar2 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(this->ConfigSection).Data.AllocatorInstance.Data;
    iVar4 = iVar2 + -1;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar7);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (param_2,uVar3,&this->ConfigSection);
  if (iVar4 == -1) {
    return;
  }
LAB_14e9b8cd2:
  bVar9 = 1 < *(int *)&(this->StoredData).field_0x48;
  if (!bVar9) {
    TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
                      *)&this->StoredData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->StoredData,0,*(int *)&(this->StoredData).field_0x8);
  puVar1 = &(this->StoredData).field_0xc;
  *(undefined4 *)&(this->StoredData).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&this->StoredData,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->StoredData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StoredData).field_0x34 = 0;
  iVar4 = *(int *)&(this->StoredData).field_0x2c;
  *(undefined4 *)&(this->StoredData).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->StoredData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->StoredData).field_0x10,0);
  }
  if (bVar9) {
    *(undefined4 *)&(this->StoredData).field_0x48 = 1;
    TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)&this->StoredData);
  }
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXPEB_W0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultDelegateUserPolicy,`FGlobalConfigurationConfigRouter::OnConfigSectionsChanged'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if ((this->ConfigSection).Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)(this->ConfigSection).Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::ForEachEntry
            (GConfig,(TDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
                      *)local_58,pwVar8,&GEngineIni);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// TryGetDataFromRouter @ 14e9b9e50

TSharedPtr<FJsonValue,1> * __thiscall
FGlobalConfigurationConfigRouter::TryGetDataFromRouter
          (FGlobalConfigurationConfigRouter *this,TSharedPtr<FJsonValue,1> *__return_storage_ptr__,
          FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FJsonValue,1> *pTVar2;
  
  pTVar2 = TMapBase<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>
           ::Find((TMapBase<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>
                   *)&this->StoredData,param_1);
  if (pTVar2 == (TSharedRef<FJsonValue,1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValue *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = pTVar2->Object;
    pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

