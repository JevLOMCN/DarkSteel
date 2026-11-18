// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 4

// GetV2Unsafe @ 144617100

TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> * __thiscall
FUniqueNetIdWrapper::GetV2Unsafe(FUniqueNetIdWrapper *this)

{
  code *pcVar1;
  bool bVar2;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar3;
  
  if ((this->Variant).TypeIndex != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)&this->Variant;
}

// IsValid @ 144617360

bool __thiscall FUniqueNetIdWrapper::IsValid(FUniqueNetIdWrapper *this)

{
  uchar uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)(this->Variant).TypeIndex;
  if (1 < uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar1 = (this->Variant).TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7 + 4) != '\0') {
    if (uVar1 != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    plVar2 = (longlong *)(this->Variant)._padding_;
    if (plVar2 != (longlong *)0x0) {
      cVar6 = (**(code **)(*plVar2 + 0x28))();
      if (cVar6 != '\0') {
        return true;
      }
    }
    return false;
  }
  if (uVar1 != '\x01') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return ((this->Variant)._padding_ & 0xffffff) != 0;
}

// ToDebugString @ 14461a150

FString * __thiscall
FUniqueNetIdWrapper::ToDebugString(FUniqueNetIdWrapper *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *pIVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  FName *this_00;
  FOnlineIdRegistryRegistry *this_01;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  TReferenceControllerBase<1> *pTVar10;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> local_res10 [2];
  undefined1 local_res18 [16];
  FString local_a8;
  FString local_98;
  FString local_88;
  void *local_78 [2];
  FScriptContainerElement *local_68 [2];
  FString local_58;
  FString local_48;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar4 = IsValid(this);
  if (!bVar4) {
    ::FString::operator=(__return_storage_ptr__,L"INVALID");
    return __return_storage_ptr__;
  }
  uVar9 = (ulonglong)(this->Variant).TypeIndex;
  if ((1 < uVar9) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  uVar8 = (ulonglong)(this->Variant).TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar9 + 4) == '\0') {
    local_res10[0].Value = 0;
    if ((1 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8) == '\0') {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8098327459864248889>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Public\\Online\\CoreOnline.h"
                         ,0x239,"IsV2()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar3)();
        return pFVar5;
      }
    }
    else {
      if (((this->Variant).TypeIndex != '\x01') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar3)();
        return pFVar5;
      }
      local_res10[0].Value = (uint)(this->Variant)._padding_;
    }
    this_01 = UE::Online::FOnlineIdRegistryRegistry::Get();
    pFVar6 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>_>
             ::Find(this_01,(EOnlineServices)(local_res10[0].Value >> 0x18));
    if ((pFVar6 == (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0) ||
       (pIVar2 = pFVar6->Registry,
       pIVar2 == (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *)0x0)) {
      pFVar5 = UE::Online::FOnlineForeignAccountIdRegistry::ToLogString
                         ((this_01->ForeignAccountIdRegistry).Ptr,&local_48,local_res10);
      if (&local_58 != pFVar5) {
        pTVar7 = (TReferenceControllerBase<1> *)(pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
    }
    else {
      pFVar5 = (FString *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,local_68,local_res10);
      local_48.Data.AllocatorInstance.Data = local_68[0];
      if (&local_58 != pFVar5) {
        pTVar7 = (TReferenceControllerBase<1> *)(pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    UE::Online::LexToString((EOnlineServices)(local_res10[0].Value >> 0x18));
    ::FString::PrintfImpl(&local_98,L"%s:%d (%s)");
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(pTVar7);
    }
    if (__return_storage_ptr__ != &local_98) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_98.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_98.Data.ArrayMax;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_98.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  if ((1 < uVar8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8 + 4) == '\0') {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8098327459864248868>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Public\\Online\\CoreOnline.h"
                       ,0x224,"IsV1()");
    pTVar10 = pTVar7;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    if (((this->Variant).TypeIndex != '\0') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
    pTVar7 = (TReferenceControllerBase<1> *)(this->Variant)._padding_;
    pTVar10 = (TReferenceControllerBase<1> *)(this->Variant)._padding_;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) goto LAB_14461a2c1;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
LAB_14461a2c1:
  (**(code **)(pTVar10->_padding_ + 0x38))(pTVar10,local_78);
  if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  this_00 = (FName *)(**(code **)(pTVar10->_padding_ + 0x10))(pTVar10,local_res18);
  ::FName::ToString(this_00,&local_88);
  ::FString::PrintfImpl(&local_a8,L"%s:%s");
  if (__return_storage_ptr__ != &local_a8) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_a8.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_a8.Data.ArrayMax;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78[0] != (void *)0x0) {
    FMemory::Free(local_78[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// ToString @ 14461b590

FString * __thiscall
FUniqueNetIdWrapper::ToString(FUniqueNetIdWrapper *this,FString *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FString *pFVar7;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar8;
  FOnlineIdRegistryRegistry *this_00;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *pFVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FString local_58;
  FScriptContainerElement *local_48 [2];
  FScriptContainerElement *local_38 [2];
  FString local_28;
  
  pFVar14 = (FScriptContainerElement *)0x0;
  iVar11 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar6 = IsValid(this);
  if (bVar6) {
    uVar12 = (ulonglong)(this->Variant).TypeIndex;
    if ((1 < uVar12) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar5)();
      return pFVar7;
    }
    bVar1 = (this->Variant).TypeIndex;
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar12 + 4) == '\0') {
      if ((1 < (ulonglong)bVar1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar5)();
        return pFVar7;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
        return __return_storage_ptr__;
      }
      pTVar8 = GetV2Unsafe(this);
      this_00 = UE::Online::FOnlineIdRegistryRegistry::Get();
      pFVar9 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>_>
               ::Find(this_00,*(EOnlineServices *)((longlong)&pTVar8->Value + 3));
      pFVar13 = pFVar14;
      iVar10 = iVar11;
      if ((pFVar9 == (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0)
         || (pIVar3 = pFVar9->Registry,
            pIVar3 == (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *)0x0)) {
        pFVar7 = UE::Online::FOnlineForeignAccountIdRegistry::ToString
                           ((this_00->ForeignAccountIdRegistry).Ptr,&local_28,pTVar8);
        if (&local_58 != pFVar7) {
          pFVar13 = (pFVar7->Data).AllocatorInstance.Data;
          (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar11 = (pFVar7->Data).ArrayNum;
          iVar10 = (pFVar7->Data).ArrayMax;
          (pFVar7->Data).ArrayNum = 0;
          (pFVar7->Data).ArrayMax = 0;
        }
      }
      else {
        pFVar7 = (FString *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_38,pTVar8);
        local_28.Data.AllocatorInstance.Data = local_38[0];
        if (&local_58 != pFVar7) {
          pFVar13 = (pFVar7->Data).AllocatorInstance.Data;
          (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar11 = (pFVar7->Data).ArrayNum;
          iVar10 = (pFVar7->Data).ArrayMax;
          (pFVar7->Data).ArrayNum = 0;
          (pFVar7->Data).ArrayMax = 0;
        }
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      local_48[0] = pFVar13;
      if (__return_storage_ptr__ != &local_58) {
        pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data = pFVar13;
        (__return_storage_ptr__->Data).ArrayNum = iVar11;
        (__return_storage_ptr__->Data).ArrayMax = iVar10;
        local_48[0] = pFVar14;
      }
    }
    else {
      if ((bVar1 != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar5)();
        return pFVar7;
      }
      if (((this->Variant)._padding_ == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar5)();
        return pFVar7;
      }
      plVar2 = (longlong *)(this->Variant)._padding_;
      pFVar7 = (FString *)(**(code **)(*plVar2 + 0x30))(plVar2,local_48);
      if (__return_storage_ptr__ != pFVar7) {
        pFVar14 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar14);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
    }
    if (local_48[0] != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return __return_storage_ptr__;
}

