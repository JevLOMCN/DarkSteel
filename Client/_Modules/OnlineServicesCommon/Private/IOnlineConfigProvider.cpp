// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 14

// operator()<TArray<enum_UE::Online::ESchemaAttributeFlags,TSizedDefaultAllocator<32>_>_> @ 14ed4bcf0

void __thiscall
`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaAttributeDescriptor>'::__l10::
<lambda_1>::operator()<TArray<enum_UE::Online::ESchemaAttributeFlags,TSizedDefaultAllocator<32>_>_>
          (void *this,wchar_t *param_1,
          TArray<UE::Online::ESchemaAttributeFlags,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  FString *pFVar9;
  FString *pFVar10;
  FScriptContainerElement local_res8 [8];
  undefined1 local_res18 [8];
  FString *local_28;
  ulonglong local_20;
  
  plVar2 = *(longlong **)this;
  if ((*plVar2 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar2 = (longlong *)*plVar2;
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_2->AllocatorInstance,0,piVar1);
  }
  local_28 = (FString *)0x0;
  local_20 = 0;
  iVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1,&local_28);
  iVar6 = (int)local_20;
  if (0 < iVar5) {
    uVar7 = local_20 & 0xffffffff;
    if ((int)local_20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar7);
    }
    if (*piVar1 < (int)local_20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_20,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
      uVar7 = local_20 & 0xffffffff;
    }
    iVar5 = (int)uVar7;
    pFVar10 = local_28 + iVar5;
    pFVar9 = local_28;
    while( true ) {
      iVar6 = (int)uVar7;
      if ((int)uVar7 != iVar5) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
        iVar6 = (int)local_20;
      }
      if (pFVar9 == pFVar10) break;
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      UE::Online::LexFromString((ESchemaAttributeFlags *)local_res8,pwVar8);
      iVar6 = param_2->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&param_2->AllocatorInstance,piVar1);
      }
      pFVar9 = pFVar9 + 1;
      param_2->ArrayNum = iVar6 + 1;
      (param_2->AllocatorInstance).Data[iVar6] = local_res8[0];
      uVar7 = local_20 & 0xffffffff;
    }
  }
  DestructItems<FString,int>(local_28,iVar6);
  if (local_28 != (FString *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// operator()<TArray<enum_UE::Online::ESchemaServiceAttributeFlags,TSizedDefaultAllocator<32>_>_> @ 14ed4be80

void __thiscall
`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaServiceAttributeDescriptor>'::__l10
::<lambda_1>::
operator()<TArray<enum_UE::Online::ESchemaServiceAttributeFlags,TSizedDefaultAllocator<32>_>_>
          (void *this,wchar_t *param_1,
          TArray<UE::Online::ESchemaServiceAttributeFlags,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  FString *pFVar9;
  FString *pFVar10;
  FScriptContainerElement local_res8 [8];
  undefined1 local_res18 [8];
  FString *local_28;
  ulonglong local_20;
  
  plVar2 = *(longlong **)this;
  if ((*plVar2 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar2 = (longlong *)*plVar2;
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_2->AllocatorInstance,0,piVar1);
  }
  local_28 = (FString *)0x0;
  local_20 = 0;
  iVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1,&local_28);
  iVar6 = (int)local_20;
  if (0 < iVar5) {
    uVar7 = local_20 & 0xffffffff;
    if ((int)local_20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar7);
    }
    if (*piVar1 < (int)local_20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_20,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
      uVar7 = local_20 & 0xffffffff;
    }
    iVar5 = (int)uVar7;
    pFVar10 = local_28 + iVar5;
    pFVar9 = local_28;
    while( true ) {
      iVar6 = (int)uVar7;
      if ((int)uVar7 != iVar5) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
        iVar6 = (int)local_20;
      }
      if (pFVar9 == pFVar10) break;
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      UE::Online::LexFromString((ESchemaServiceAttributeFlags *)local_res8,pwVar8);
      iVar6 = param_2->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&param_2->AllocatorInstance,piVar1);
      }
      pFVar9 = pFVar9 + 1;
      param_2->ArrayNum = iVar6 + 1;
      (param_2->AllocatorInstance).Data[iVar6] = local_res8[0];
      uVar7 = local_20 & 0xffffffff;
    }
  }
  DestructItems<FString,int>(local_28,iVar6);
  if (local_28 != (FString *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// operator()<TArray<enum_UE::Online::ESchemaServiceAttributeSupportedTypeFlags,TSizedDefaultAllocator<32>_>_> @ 14ed4c010

void __thiscall
`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaServiceAttributeDescriptor>'::__l10
::<lambda_1>::
operator()<TArray<enum_UE::Online::ESchemaServiceAttributeSupportedTypeFlags,TSizedDefaultAllocator<32>_>_>
          (void *this,wchar_t *param_1,
          TArray<UE::Online::ESchemaServiceAttributeSupportedTypeFlags,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  FString *pFVar9;
  FString *pFVar10;
  FScriptContainerElement local_res8 [8];
  undefined1 local_res18 [8];
  FString *local_28;
  ulonglong local_20;
  
  plVar2 = *(longlong **)this;
  if ((*plVar2 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar2 = (longlong *)*plVar2;
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_2->AllocatorInstance,0,piVar1);
  }
  local_28 = (FString *)0x0;
  local_20 = 0;
  iVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1,&local_28);
  iVar6 = (int)local_20;
  if (0 < iVar5) {
    uVar7 = local_20 & 0xffffffff;
    if ((int)local_20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar7);
    }
    if (*piVar1 < (int)local_20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_20,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
      uVar7 = local_20 & 0xffffffff;
    }
    iVar5 = (int)uVar7;
    pFVar10 = local_28 + iVar5;
    pFVar9 = local_28;
    while( true ) {
      iVar6 = (int)uVar7;
      if ((int)uVar7 != iVar5) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
        iVar6 = (int)local_20;
      }
      if (pFVar9 == pFVar10) break;
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      UE::Online::LexFromString((ESchemaServiceAttributeSupportedTypeFlags *)local_res8,pwVar8);
      iVar6 = param_2->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&param_2->AllocatorInstance,piVar1);
      }
      pFVar9 = pFVar9 + 1;
      param_2->ArrayNum = iVar6 + 1;
      (param_2->AllocatorInstance).Data[iVar6] = local_res8[0];
      uVar7 = local_20 & 0xffffffff;
    }
  }
  DestructItems<FString,int>(local_28,iVar6);
  if (local_28 != (FString *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// GetValue<UE::Online::FAchievementUnlockRule> @ 14edcab80

/* WARNING: Removing unreachable block (ram,0x00014edcac4c) */
/* WARNING: Removing unreachable block (ram,0x00014edcad3c) */

int __thiscall
UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FAchievementUnlockRule>
          (IOnlineConfigProvider *this,wchar_t *param_1,wchar_t *param_2,
          TArray<UE::Online::FAchievementUnlockRule,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong local_res8;
  FScriptContainerElement *local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  wchar_t *pwStack_40;
  
  uVar3 = param_3->ArrayNum;
  iVar5 = (**(code **)((longlong)*this + 8))();
  if (0 < iVar5) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < (int)uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar3,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    uVar4 = uStack_44;
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    for (lVar6 = 0; lVar6 != 0; lVar6 = lVar6 + 0x10) {
      iVar5 = param_3->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar5 + 1;
      local_58 = (param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
      *(undefined8 *)local_58 = 0;
      *(undefined8 *)(local_58 + 8) = 0;
      *(undefined8 *)(local_58 + 0x10) = 0;
      *(undefined8 *)(local_58 + 0x18) = 0;
      local_50 = &local_res8;
      local_res8 = lVar6;
      if ((*(int *)(*plVar2 + 0x9d4c) <
           `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockRule>::Fields(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockRule>::Fields(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockRule>::Fields(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        local_48 = 0x10;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockRule>::Fields(void)'
        ::__l2::Fields._0_4_ = 0;
        pwStack_40 = L"Conditions";
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockRule>::Fields(void)'
        ::__l2::Fields._20_4_ = uStack_44;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockRule>::Fields(void)'
        ::__l2::Fields._16_4_ = 0x10;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockRule>::Fields(void)'
        ::__l2::Fields._8_8_ = u_AchievementId;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockRule>::Fields(void)'
        ::__l2::Fields._4_4_ = uVar4;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockRule>::Fields(void)'
        ::__l2::Fields._24_8_ = u_Conditions;
        _Init_thread_footer(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockRule>::Fields(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      `UE::Online::Meta::
      VisitFields<UE::Online::FAchievementUnlockRule_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FAchievementUnlockRule>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FAchievementUnlockRule,FString>_>
                (&local_58,
                 (TField<UE::Online::FAchievementUnlockRule,FString> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockRule>::Fields(void)'
                  ::__l2::Fields);
      `UE::Online::Meta::
      VisitFields<UE::Online::FAchievementUnlockRule_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FAchievementUnlockRule>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FAchievementUnlockRule,TArray<UE::Online::FAchievementUnlockCondition,TSizedDefaultAllocator<32>_>_>_>
                (&local_58,
                 (TField<UE::Online::FAchievementUnlockRule,TArray<UE::Online::FAchievementUnlockCondition,TSizedDefaultAllocator<32>_>_>
                  *)&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockRule>::Fields(void)'
                     ::__l2::Fields.field_0x10);
    }
  }
  DestructItems<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int>
            ((TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0,0);
  return param_3->ArrayNum - uVar3;
}

// GetValue<UE::Online::FLeaderboardDefinition> @ 14edcadc0

int __thiscall
UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FLeaderboardDefinition>
          (IOnlineConfigProvider *this,wchar_t *param_1,wchar_t *param_2,
          TArray<UE::Online::FLeaderboardDefinition,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar8;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar9;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_res8;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  wchar_t *pwStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  wchar_t *pwStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  wchar_t *pwStack_40;
  
  iVar3 = param_3->ArrayNum;
  local_88 = (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0;
  local_80 = 0;
  iVar5 = (**(code **)((longlong)*this + 8))(this,param_1,param_2,&local_88);
  if (0 < iVar5) {
    uVar7 = (int)local_80 + iVar3;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < (int)uVar7) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar7,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    uVar4 = uStack_44;
    iVar5 = (int)local_80;
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pTVar9 = local_88 + (int)local_80;
    pTVar8 = local_88;
    while( true ) {
      if ((int)local_80 != iVar5) {
        `TCheckedPointerIterator<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res8);
      }
      if (pTVar8 == pTVar9) break;
      iVar6 = param_3->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar6 + 1;
      local_78 = (param_3->AllocatorInstance).Data;
      *(undefined4 *)(local_78 + (longlong)iVar6 * 0x18 + 0x14) = 0x101;
      local_78 = local_78 + (longlong)iVar6 * 0x18;
      *(undefined8 *)local_78 = 0;
      *(undefined8 *)(local_78 + 8) = 0;
      *(undefined4 *)(local_78 + 0x10) = 0;
      local_70 = &local_res8;
      local_res8 = pTVar8;
      if ((*(int *)(*plVar2 + 0x9d4c) <
           `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        local_68 = 0x10;
        pwStack_40 = L"OrderMethod";
        local_48 = 0x15;
        pwStack_50 = L"UpdateMethod";
        pwStack_60 = L"Id";
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
        ::__l2::Fields._20_4_ = uStack_64;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
        ::__l2::Fields._16_4_ = 0x10;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
        ::__l2::Fields._0_4_ = 0;
        local_58 = 0x14;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
        ::__l2::Fields._36_4_ = uStack_54;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
        ::__l2::Fields._32_4_ = 0x14;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
        ::__l2::Fields._4_4_ = uVar4;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
        ::__l2::Fields._24_8_ = u_Id;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
        ::__l2::Fields._52_4_ = uStack_44;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
        ::__l2::Fields._48_4_ = 0x15;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
        ::__l2::Fields._8_8_ = u_Name;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
        ::__l2::Fields._40_8_ = u_UpdateMethod;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
        ::__l2::Fields._56_8_ = u_OrderMethod;
        _Init_thread_footer(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      `UE::Online::Meta::
      VisitFields<UE::Online::FLeaderboardDefinition_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FLeaderboardDefinition>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FLeaderboardDefinition,FString>_>
                (&local_78,
                 (TField<UE::Online::FLeaderboardDefinition,FString> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
                  ::__l2::Fields);
      `UE::Online::Meta::
      VisitFields<UE::Online::FLeaderboardDefinition_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FLeaderboardDefinition>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FLeaderboardDefinition,int>_>
                (&local_78,
                 (TField<UE::Online::FLeaderboardDefinition,int> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
                  ::__l2::Fields.field_0x10);
      `UE::Online::Meta::
      VisitFields<UE::Online::FLeaderboardDefinition_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FLeaderboardDefinition>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FLeaderboardDefinition,enum_UE::Online::ELeaderboardUpdateMethod>_>
                (&local_78,
                 (TField<UE::Online::FLeaderboardDefinition,UE::Online::ELeaderboardUpdateMethod> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
                  ::__l2::Fields.field_0x20);
      `UE::Online::Meta::
      VisitFields<UE::Online::FLeaderboardDefinition_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FLeaderboardDefinition>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FLeaderboardDefinition,enum_UE::Online::ELeaderboardOrderMethod>_>
                (&local_78,
                 (TField<UE::Online::FLeaderboardDefinition,UE::Online::ELeaderboardOrderMethod> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FLeaderboardDefinition>::Fields(void)'
                  ::__l2::Fields.field_0x30);
      pTVar8 = pTVar8 + 1;
    }
  }
  DestructItems<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int>(local_88,(int)local_80);
  if (local_88 != (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0) {
    FMemory::Free(local_88);
  }
  return param_3->ArrayNum - iVar3;
}

// GetValue<UE::Online::FSchemaAttributeDescriptor> @ 14edcb050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaAttributeDescriptor>
          (IOnlineConfigProvider *this,wchar_t *param_1,wchar_t *param_2,
          TArray<UE::Online::FSchemaAttributeDescriptor,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar9;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar10;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_res8;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_a0;
  undefined8 local_98;
  FScriptContainerElement *local_90;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> **local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  wchar_t *pwStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  wchar_t *pwStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  wchar_t *pwStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  wchar_t *pwStack_48;
  
  iVar4 = param_3->ArrayNum;
  local_a0 = (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0;
  local_98 = 0;
  iVar6 = (**(code **)((longlong)*this + 8))(this,param_1,param_2,&local_a0);
  if (0 < iVar6) {
    uVar8 = (int)local_98 + iVar4;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < (int)uVar8) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar8,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    uVar5 = uStack_4c;
    iVar6 = (int)local_98;
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pTVar9 = local_a0 + (int)local_98;
    pTVar10 = local_a0;
    while( true ) {
      if ((int)local_98 != iVar6) {
        `TCheckedPointerIterator<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res8);
      }
      if (pTVar10 == pTVar9) break;
      iVar7 = param_3->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar7 + 1;
      pFVar3 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x28;
      *(undefined4 *)(pFVar3 + 9) = 0;
      *(undefined2 *)(pFVar3 + 0xd) = 0;
      pFVar3[0xf] = (FScriptContainerElement)0x0;
      *(undefined8 *)pFVar3 = 0;
      pFVar3[8] = (FScriptContainerElement)0x0;
      *(undefined8 *)(pFVar3 + 0x10) = 0;
      *(undefined8 *)(pFVar3 + 0x18) = 0;
      *(undefined8 *)(pFVar3 + 0x20) = 0;
      local_88 = &local_res8;
      local_res8 = pTVar10;
      local_90 = pFVar3;
      if ((*(int *)(*plVar2 + 0x9d4c) <
           `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaAttributeDescriptor>::Fields(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaAttributeDescriptor>::Fields(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaAttributeDescriptor>::Fields(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        local_70 = 0x10;
        pwStack_48 = L"MaxSize";
        local_80 = 8;
        pwStack_58 = L"UpdateGroupId";
        pwStack_68 = L"Flags";
        _DAT_1553aee50 = CONCAT44(uStack_6c,0x10);
        pwStack_78 = L"Type";
        _DAT_1553aee40 = CONCAT44(uStack_7c,8);
        _Fields = 0;
        DAT_1553aee58 = L"Flags";
        pwRam00000001553aee48 = L"Type";
        local_50 = 0x24;
        _DAT_1553aee70 = CONCAT44(uStack_4c,0x24);
        local_60 = 0x20;
        _DAT_1553aee60 = CONCAT44(uStack_5c,0x20);
        _DAT_1553aee34 = uVar5;
        _DAT_1553aee38 = L"Id";
        pwRam00000001553aee68 = L"UpdateGroupId";
        pwRam00000001553aee78 = L"MaxSize";
        _Init_thread_footer(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaAttributeDescriptor>::Fields(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      `UE::Online::Meta::
      VisitFields<UE::Online::FSchemaAttributeDescriptor_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaAttributeDescriptor>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FSchemaAttributeDescriptor,FName>_>
                (&local_90,
                 (TField<UE::Online::FSchemaAttributeDescriptor,FName> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaAttributeDescriptor>::Fields(void)'
                  ::__l2::Fields);
      `UE::Online::Meta::
      VisitFields<UE::Online::FSchemaAttributeDescriptor_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaAttributeDescriptor>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FSchemaAttributeDescriptor,enum_UE::Online::ESchemaAttributeType>_>
                (&local_90,
                 (TField<UE::Online::FSchemaAttributeDescriptor,UE::Online::ESchemaAttributeType> *)
                 &DAT_1553aee40);
      `UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaAttributeDescriptor>'::__l10::
      <lambda_1>::
      operator()<TArray<enum_UE::Online::ESchemaAttributeFlags,TSizedDefaultAllocator<32>_>_>
                (&local_res8,DAT_1553aee58,
                 (TArray<UE::Online::ESchemaAttributeFlags,TSizedDefaultAllocator<32>_> *)
                 (pFVar3 + DAT_1553aee50));
      `UE::Online::Meta::
      VisitFields<UE::Online::FSchemaAttributeDescriptor_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaAttributeDescriptor>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FSchemaAttributeDescriptor,int>_>
                (&local_90,(TField<UE::Online::FSchemaAttributeDescriptor,int> *)&DAT_1553aee60);
      `UE::Online::Meta::
      VisitFields<UE::Online::FSchemaAttributeDescriptor_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaAttributeDescriptor>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FSchemaAttributeDescriptor,int>_>
                (&local_90,(TField<UE::Online::FSchemaAttributeDescriptor,int> *)&DAT_1553aee70);
      pTVar10 = pTVar10 + 1;
    }
  }
  DestructItems<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int>(local_a0,(int)local_98);
  if (local_a0 != (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0) {
    FMemory::Free(local_a0);
  }
  return param_3->ArrayNum - iVar4;
}

// GetValue<UE::Online::FSchemaCategoryAttributesDescriptor> @ 14edcb320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaCategoryAttributesDescriptor>
          (IOnlineConfigProvider *this,wchar_t *param_1,wchar_t *param_2,
          TArray<UE::Online::FSchemaCategoryAttributesDescriptor,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar7;
  uint uVar8;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar9;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_res8;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_78;
  undefined8 local_70;
  FScriptContainerElement *local_68;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  wchar_t *pwStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  wchar_t *pwStack_40;
  
  iVar3 = param_3->ArrayNum;
  local_78 = (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0;
  local_70 = 0;
  iVar5 = (**(code **)((longlong)*this + 8))(this,param_1,param_2,&local_78);
  if (0 < iVar5) {
    uVar8 = (int)local_70 + iVar3;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < (int)uVar8) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar8,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    uVar4 = uStack_44;
    iVar5 = (int)local_70;
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pTVar9 = local_78 + (int)local_70;
    pTVar7 = local_78;
    while( true ) {
      if ((int)local_70 != iVar5) {
        `TCheckedPointerIterator<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res8);
      }
      if (pTVar7 == pTVar9) break;
      iVar6 = param_3->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar6 + 1;
      local_68 = (param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x20;
      *(undefined8 *)local_68 = 0;
      *(undefined8 *)(local_68 + 8) = 0;
      *(undefined8 *)(local_68 + 0x10) = 0;
      *(undefined8 *)(local_68 + 0x18) = 0;
      local_60 = &local_res8;
      local_res8 = pTVar7;
      if ((*(int *)(*plVar2 + 0x9d4c) <
           `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaCategoryAttributesDescriptor>::Fields(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaCategoryAttributesDescriptor>::Fields(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaCategoryAttributesDescriptor>::Fields(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        local_48 = 0x10;
        pwStack_40 = L"AttributeIds";
        _DAT_1553aef08 = CONCAT44(uStack_44,0x10);
        local_58 = 8;
        pwStack_50 = L"CategoryId";
        _DAT_1553aeef8 = CONCAT44(uStack_54,8);
        _Fields = 0;
        _DAT_1553aeef0 = L"SchemaId";
        _DAT_1553aeeec = uVar4;
        pwRam00000001553aef00 = L"CategoryId";
        pwRam00000001553aef10 = L"AttributeIds";
        _Init_thread_footer(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaCategoryAttributesDescriptor>::Fields(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      `UE::Online::Meta::
      VisitFields<UE::Online::FSchemaCategoryAttributesDescriptor_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaCategoryAttributesDescriptor>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FSchemaCategoryAttributesDescriptor,FName>_>
                (&local_68,
                 (TField<UE::Online::FSchemaCategoryAttributesDescriptor,FName> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaCategoryAttributesDescriptor>::Fields(void)'
                  ::__l2::Fields);
      `UE::Online::Meta::
      VisitFields<UE::Online::FSchemaCategoryAttributesDescriptor_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaCategoryAttributesDescriptor>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FSchemaCategoryAttributesDescriptor,FName>_>
                (&local_68,
                 (TField<UE::Online::FSchemaCategoryAttributesDescriptor,FName> *)&DAT_1553aeef8);
      `UE::Online::Meta::
      VisitFields<UE::Online::FSchemaCategoryAttributesDescriptor_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaCategoryAttributesDescriptor>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FSchemaCategoryAttributesDescriptor,TArray<FName,TSizedDefaultAllocator<32>_>_>_>
                (&local_68,
                 (TField<UE::Online::FSchemaCategoryAttributesDescriptor,TArray<FName,TSizedDefaultAllocator<32>_>_>
                  *)&DAT_1553aef08);
      pTVar7 = pTVar7 + 1;
    }
  }
  DestructItems<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int>(local_78,(int)local_70);
  if (local_78 != (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0) {
    FMemory::Free(local_78);
  }
  return param_3->ArrayNum - iVar3;
}

// GetValue<UE::Online::FSchemaCategoryDescriptor> @ 14edcb580

/* WARNING: Removing unreachable block (ram,0x00014edcb64c) */
/* WARNING: Removing unreachable block (ram,0x00014edcb734) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaCategoryDescriptor>
          (IOnlineConfigProvider *this,wchar_t *param_1,wchar_t *param_2,
          TArray<UE::Online::FSchemaCategoryDescriptor,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong local_res8;
  FScriptContainerElement *local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  wchar_t *pwStack_40;
  
  uVar3 = param_3->ArrayNum;
  iVar5 = (**(code **)((longlong)*this + 8))();
  if (0 < iVar5) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < (int)uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar3,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    uVar4 = uStack_44;
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    for (lVar6 = 0; lVar6 != 0; lVar6 = lVar6 + 0x10) {
      iVar5 = param_3->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar5 + 1;
      local_58 = (param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)local_58 = 0;
      *(undefined8 *)(local_58 + 8) = 0;
      local_50 = &local_res8;
      local_res8 = lVar6;
      if ((*(int *)(*plVar2 + 0x9d4c) <
           `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaCategoryDescriptor>::Fields(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaCategoryDescriptor>::Fields(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaCategoryDescriptor>::Fields(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        local_48 = 8;
        _Fields = 0;
        pwStack_40 = L"ServiceDescriptorId";
        _DAT_1553aee98 = CONCAT44(uStack_44,8);
        _DAT_1553aee90 = L"Id";
        _DAT_1553aee8c = uVar4;
        pwRam00000001553aeea0 = L"ServiceDescriptorId";
        _Init_thread_footer(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaCategoryDescriptor>::Fields(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      `UE::Online::Meta::
      VisitFields<UE::Online::FSchemaCategoryDescriptor_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaCategoryDescriptor>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FSchemaCategoryDescriptor,FName>_>
                (&local_58,
                 (TField<UE::Online::FSchemaCategoryDescriptor,FName> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaCategoryDescriptor>::Fields(void)'
                  ::__l2::Fields);
      `UE::Online::Meta::
      VisitFields<UE::Online::FSchemaCategoryDescriptor_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaCategoryDescriptor>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FSchemaCategoryDescriptor,FName>_>
                (&local_58,(TField<UE::Online::FSchemaCategoryDescriptor,FName> *)&DAT_1553aee98);
    }
  }
  DestructItems<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int>
            ((TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0,0);
  return param_3->ArrayNum - uVar3;
}

// GetValue<UE::Online::FSchemaDescriptor> @ 14edcb7c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaDescriptor>
          (IOnlineConfigProvider *this,wchar_t *param_1,wchar_t *param_2,
          TArray<UE::Online::FSchemaDescriptor,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar7;
  uint uVar8;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar9;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_res8;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_78;
  undefined8 local_70;
  FScriptContainerElement *local_68;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  wchar_t *pwStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  wchar_t *pwStack_40;
  
  iVar3 = param_3->ArrayNum;
  local_78 = (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0;
  local_70 = 0;
  iVar5 = (**(code **)((longlong)*this + 8))(this,param_1,param_2,&local_78);
  if (0 < iVar5) {
    uVar8 = (int)local_70 + iVar3;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < (int)uVar8) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar8,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    uVar4 = uStack_44;
    iVar5 = (int)local_70;
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pTVar9 = local_78 + (int)local_70;
    pTVar7 = local_78;
    while( true ) {
      if ((int)local_70 != iVar5) {
        `TCheckedPointerIterator<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res8);
      }
      if (pTVar7 == pTVar9) break;
      iVar6 = param_3->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar6 + 1;
      local_68 = (param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x20;
      *(undefined8 *)local_68 = 0;
      *(undefined8 *)(local_68 + 8) = 0;
      *(undefined8 *)(local_68 + 0x10) = 0;
      *(undefined8 *)(local_68 + 0x18) = 0;
      local_60 = &local_res8;
      local_res8 = pTVar7;
      if ((*(int *)(*plVar2 + 0x9d4c) <
           `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaDescriptor>::Fields(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaDescriptor>::Fields(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaDescriptor>::Fields(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        local_48 = 0x10;
        pwStack_40 = L"CategoryIds";
        _DAT_1553aeed0 = CONCAT44(uStack_44,0x10);
        local_58 = 8;
        pwStack_50 = L"ParentId";
        _DAT_1553aeec0 = CONCAT44(uStack_54,8);
        _Fields = 0;
        _DAT_1553aeeb8 = L"Id";
        _DAT_1553aeeb4 = uVar4;
        pwRam00000001553aeec8 = L"ParentId";
        pwRam00000001553aeed8 = L"CategoryIds";
        _Init_thread_footer(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaDescriptor>::Fields(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      `UE::Online::Meta::
      VisitFields<UE::Online::FSchemaDescriptor_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaDescriptor>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FSchemaDescriptor,FName>_>
                (&local_68,
                 (TField<UE::Online::FSchemaDescriptor,FName> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaDescriptor>::Fields(void)'
                  ::__l2::Fields);
      `UE::Online::Meta::
      VisitFields<UE::Online::FSchemaDescriptor_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaDescriptor>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FSchemaDescriptor,FName>_>
                (&local_68,(TField<UE::Online::FSchemaDescriptor,FName> *)&DAT_1553aeec0);
      `UE::Online::Meta::
      VisitFields<UE::Online::FSchemaDescriptor_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaDescriptor>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FSchemaDescriptor,TArray<FName,TSizedDefaultAllocator<32>_>_>_>
                (&local_68,
                 (TField<UE::Online::FSchemaDescriptor,TArray<FName,TSizedDefaultAllocator<32>_>_> *
                 )&DAT_1553aeed0);
      pTVar7 = pTVar7 + 1;
    }
  }
  DestructItems<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int>(local_78,(int)local_70);
  if (local_78 != (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0) {
    FMemory::Free(local_78);
  }
  return param_3->ArrayNum - iVar3;
}

// GetValue<UE::Online::FSchemaServiceAttributeDescriptor> @ 14edcba20

int __thiscall
UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaServiceAttributeDescriptor>
          (IOnlineConfigProvider *this,wchar_t *param_1,wchar_t *param_2,
          TArray<UE::Online::FSchemaServiceAttributeDescriptor,TSizedDefaultAllocator<32>_> *param_3
          )

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar9;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar10;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_res8;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_90;
  undefined8 local_88;
  FScriptContainerElement *local_80;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  wchar_t *pwStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  wchar_t *pwStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  wchar_t *pwStack_48;
  
  iVar3 = param_3->ArrayNum;
  local_90 = (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0;
  local_88 = 0;
  iVar5 = (**(code **)((longlong)*this + 8))(this,param_1,param_2,&local_90);
  if (0 < iVar5) {
    uVar8 = (int)local_88 + iVar3;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < (int)uVar8) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar8,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    uVar4 = uStack_4c;
    iVar5 = (int)local_88;
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pTVar9 = local_90 + (int)local_88;
    pTVar10 = local_90;
    while( true ) {
      if ((int)local_88 != iVar5) {
        `TCheckedPointerIterator<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res8);
      }
      if (pTVar10 == pTVar9) break;
      iVar6 = param_3->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar6 + 1;
      pFVar7 = (param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
      *(undefined8 *)(pFVar7 + 0x28) = 0;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)(pFVar7 + 8) = 0;
      *(undefined8 *)(pFVar7 + 0x10) = 0;
      *(undefined8 *)(pFVar7 + 0x18) = 0;
      *(undefined8 *)(pFVar7 + 0x20) = 0;
      local_78 = &local_res8;
      local_res8 = pTVar10;
      local_80 = pFVar7;
      if ((*(int *)(*plVar2 + 0x9d4c) <
           `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        local_70 = 8;
        pwStack_48 = L"MaxSize";
        local_50 = 0x28;
        pwStack_58 = L"Flags";
        pwStack_68 = L"SupportedTypes";
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
        ::__l2::Fields._20_4_ = uStack_6c;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
        ::__l2::Fields._16_4_ = 8;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
        ::__l2::Fields._0_4_ = 0;
        local_60 = 0x18;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
        ::__l2::Fields._36_4_ = uStack_5c;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
        ::__l2::Fields._32_4_ = 0x18;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
        ::__l2::Fields._4_4_ = uVar4;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
        ::__l2::Fields._24_8_ = u_SupportedTypes;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
        ::__l2::Fields._52_4_ = uStack_4c;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
        ::__l2::Fields._48_4_ = 0x28;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
        ::__l2::Fields._8_8_ = u_Id;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
        ::__l2::Fields._40_8_ = u_Flags;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
        ::__l2::Fields._56_8_ = u_MaxSize;
        _Init_thread_footer(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      `UE::Online::Meta::
      VisitFields<UE::Online::FSchemaServiceAttributeDescriptor_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaServiceAttributeDescriptor>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FSchemaServiceAttributeDescriptor,FName>_>
                (&local_80,
                 (TField<UE::Online::FSchemaServiceAttributeDescriptor,FName> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
                  ::__l2::Fields);
      `UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaServiceAttributeDescriptor>'::
      __l10::<lambda_1>::
      operator()<TArray<enum_UE::Online::ESchemaServiceAttributeSupportedTypeFlags,TSizedDefaultAllocator<32>_>_>
                (&local_res8,
                 (wchar_t *)
                 `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
                 ::__l2::Fields._24_8_,
                 (TArray<UE::Online::ESchemaServiceAttributeSupportedTypeFlags,TSizedDefaultAllocator<32>_>
                  *)(pFVar7 + (int)`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
                                   ::__l2::Fields._16_4_));
      `UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaServiceAttributeDescriptor>'::
      __l10::<lambda_1>::
      operator()<TArray<enum_UE::Online::ESchemaServiceAttributeFlags,TSizedDefaultAllocator<32>_>_>
                (&local_res8,
                 (wchar_t *)
                 `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
                 ::__l2::Fields._40_8_,
                 (TArray<UE::Online::ESchemaServiceAttributeFlags,TSizedDefaultAllocator<32>_> *)
                 (pFVar7 + (int)`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
                                ::__l2::Fields._32_4_));
      `UE::Online::Meta::
      VisitFields<UE::Online::FSchemaServiceAttributeDescriptor_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaServiceAttributeDescriptor>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FSchemaServiceAttributeDescriptor,int>_>
                (&local_80,
                 (TField<UE::Online::FSchemaServiceAttributeDescriptor,int> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceAttributeDescriptor>::Fields(void)'
                  ::__l2::Fields.field_0x30);
      pTVar10 = pTVar10 + 1;
    }
  }
  DestructItems<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int>(local_90,(int)local_88);
  if (local_90 != (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0) {
    FMemory::Free(local_90);
  }
  return param_3->ArrayNum - iVar3;
}

// GetValue<UE::Online::FSchemaServiceDescriptor> @ 14edcbcd0

/* WARNING: Removing unreachable block (ram,0x00014edcbd9c) */
/* WARNING: Removing unreachable block (ram,0x00014edcbe8b) */

int __thiscall
UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaServiceDescriptor>
          (IOnlineConfigProvider *this,wchar_t *param_1,wchar_t *param_2,
          TArray<UE::Online::FSchemaServiceDescriptor,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong local_res8;
  FScriptContainerElement *local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  wchar_t *pwStack_40;
  
  uVar3 = param_3->ArrayNum;
  iVar5 = (**(code **)((longlong)*this + 8))();
  if (0 < iVar5) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < (int)uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar3,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    uVar4 = uStack_44;
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    for (lVar6 = 0; lVar6 != 0; lVar6 = lVar6 + 0x10) {
      iVar5 = param_3->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar5 + 1;
      local_58 = (param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x18;
      *(undefined8 *)local_58 = 0;
      *(undefined8 *)(local_58 + 8) = 0;
      *(undefined8 *)(local_58 + 0x10) = 0;
      local_50 = &local_res8;
      local_res8 = lVar6;
      if ((*(int *)(*plVar2 + 0x9d4c) <
           `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceDescriptor>::Fields(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceDescriptor>::Fields(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceDescriptor>::Fields(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        local_48 = 8;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceDescriptor>::Fields(void)'
        ::__l2::Fields._0_4_ = 0;
        pwStack_40 = L"AttributeIds";
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceDescriptor>::Fields(void)'
        ::__l2::Fields._20_4_ = uStack_44;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceDescriptor>::Fields(void)'
        ::__l2::Fields._16_4_ = 8;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceDescriptor>::Fields(void)'
        ::__l2::Fields._8_8_ = u_Id;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceDescriptor>::Fields(void)'
        ::__l2::Fields._4_4_ = uVar4;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceDescriptor>::Fields(void)'
        ::__l2::Fields._24_8_ = u_AttributeIds;
        _Init_thread_footer(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceDescriptor>::Fields(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      `UE::Online::Meta::
      VisitFields<UE::Online::FSchemaServiceDescriptor_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaServiceDescriptor>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FSchemaServiceDescriptor,FName>_>
                (&local_58,
                 (TField<UE::Online::FSchemaServiceDescriptor,FName> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceDescriptor>::Fields(void)'
                  ::__l2::Fields);
      `UE::Online::Meta::
      VisitFields<UE::Online::FSchemaServiceDescriptor_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FSchemaServiceDescriptor>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FSchemaServiceDescriptor,TArray<FName,TSizedDefaultAllocator<32>_>_>_>
                (&local_58,
                 (TField<UE::Online::FSchemaServiceDescriptor,TArray<FName,TSizedDefaultAllocator<32>_>_>
                  *)&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FSchemaServiceDescriptor>::Fields(void)'
                     ::__l2::Fields.field_0x10);
    }
  }
  DestructItems<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int>
            ((TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0,0);
  return param_3->ArrayNum - uVar3;
}

// GetValue<FTestConfigInner> @ 14edcbf10

/* WARNING: Removing unreachable block (ram,0x00014edcbfb7) */
/* WARNING: Removing unreachable block (ram,0x00014edcc0cb) */

int __thiscall
UE::Online::IOnlineConfigProvider::GetValue<FTestConfigInner>
          (IOnlineConfigProvider *this,wchar_t *param_1,wchar_t *param_2,
          TArray<FTestConfigInner,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  TTuple<UE::Online::Meta::Private::TField<FTestConfigInner,float>,UE::Online::Meta::Private::TField<FTestConfigInner,FTestConfigInnerInner>,UE::Online::Meta::Private::TField<FTestConfigInner,TArray<FTestConfigInnerInner,TSizedDefaultAllocator<32>_>_>,UE::Online::Meta::Private::TField<FTestConfigInner,EConfigTestEnum>,UE::Online::Meta::Private::TField<FTestConfigInner,TArray<EConfigTestEnum,TSizedDefaultAllocator<32>_>_>,UE::Online::Meta::Private::TField<FTestConfigInner,TArray<FString,TSizedDefaultAllocator<32>_>_>_>
  *pTVar4;
  longlong lVar5;
  longlong local_res8;
  FScriptContainerElement *local_38;
  longlong *local_30;
  
  uVar2 = param_3->ArrayNum;
  iVar3 = (**(code **)((longlong)*this + 8))();
  if (0 < iVar3) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < (int)uVar2) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,uVar2,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    for (lVar5 = 0; lVar5 != 0; lVar5 = lVar5 + 0x10) {
      iVar3 = param_3->ArrayNum;
      if (iVar3 == *piVar1) {
        iVar3 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar3 + 1;
      local_30 = &local_res8;
      local_38 = (param_3->AllocatorInstance).Data + (longlong)iVar3 * 0x40;
      *(undefined8 *)local_38 = 0;
      *(undefined8 *)(local_38 + 0x18) = 0;
      *(undefined8 *)(local_38 + 8) = 0;
      *(undefined8 *)(local_38 + 0x10) = 0;
      *(undefined8 *)(local_38 + 0x20) = 0;
      *(undefined8 *)(local_38 + 0x28) = 0;
      *(undefined8 *)(local_38 + 0x30) = 0;
      *(undefined8 *)(local_38 + 0x38) = 0;
      local_res8 = lVar5;
      pTVar4 = Meta::TStructDetails<FTestConfigInner>::Fields();
      `UE::Online::Meta::
      VisitFields<FTestConfigInner_&,`UE::Online::IOnlineConfigProvider::GetValue<FTestConfigInner>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::operator()<UE::Online::Meta::Private::TField<FTestConfigInner,float>_>
                (&local_38,(TField<FTestConfigInner,float> *)pTVar4);
      `UE::Online::Meta::
      VisitFields<FTestConfigInner_&,`UE::Online::IOnlineConfigProvider::GetValue<FTestConfigInner>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<FTestConfigInner,FTestConfigInnerInner>_>
                (&local_38,(TField<FTestConfigInner,FTestConfigInnerInner> *)&pTVar4->field_0x10);
      `UE::Online::Meta::
      VisitFields<FTestConfigInner_&,`UE::Online::IOnlineConfigProvider::GetValue<FTestConfigInner>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<FTestConfigInner,TArray<FTestConfigInnerInner,TSizedDefaultAllocator<32>_>_>_>
                (&local_38,
                 (TField<FTestConfigInner,TArray<FTestConfigInnerInner,TSizedDefaultAllocator<32>_>_>
                  *)&pTVar4->field_0x20);
      `UE::Online::Meta::
      VisitFields<FTestConfigInner_&,`UE::Online::IOnlineConfigProvider::GetValue<FTestConfigInner>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<FTestConfigInner,enum_EConfigTestEnum>_>
                (&local_38,(TField<FTestConfigInner,EConfigTestEnum> *)&pTVar4->field_0x30);
      `UE::Online::Meta::
      VisitFields<FTestConfigInner_&,`UE::Online::IOnlineConfigProvider::GetValue<FTestConfigInner>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<FTestConfigInner,TArray<enum_EConfigTestEnum,TSizedDefaultAllocator<32>_>_>_>
                (&local_38,
                 (TField<FTestConfigInner,TArray<EConfigTestEnum,TSizedDefaultAllocator<32>_>_> *)
                 &pTVar4->field_0x40);
      `UE::Online::Meta::
      VisitFields<FTestConfigInner_&,`UE::Online::IOnlineConfigProvider::GetValue<FTestConfigInner>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<FTestConfigInner,TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                (&local_38,
                 (TField<FTestConfigInner,TArray<FString,TSizedDefaultAllocator<32>_>_> *)
                 &pTVar4->field_0x50);
    }
  }
  DestructItems<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int>
            ((TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0,0);
  return param_3->ArrayNum - uVar2;
}

// ~IOnlineConfigProvider @ 14ee253e0

void __thiscall
UE::Online::IOnlineConfigProvider::~IOnlineConfigProvider(IOnlineConfigProvider *this)

{
  *this = (IOnlineConfigProvider)0x15309c710;
  return;
}

// GetValue<UE::Online::FStatDefinition> @ 14ef5e2f0

int __thiscall
UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FStatDefinition>
          (IOnlineConfigProvider *this,wchar_t *param_1,wchar_t *param_2,
          TArray<UE::Online::FStatDefinition,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar9;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar10;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_res8;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_90;
  undefined8 local_88;
  FScriptContainerElement *local_80;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  wchar_t *pwStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  wchar_t *pwStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  wchar_t *pwStack_48;
  
  iVar3 = param_3->ArrayNum;
  local_90 = (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0;
  local_88 = 0;
  iVar5 = (**(code **)((longlong)*this + 8))(this,param_1,param_2,&local_90);
  if (0 < iVar5) {
    uVar8 = (int)local_88 + iVar3;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    piVar1 = &param_3->ArrayMax;
    if (param_3->ArrayMax < (int)uVar8) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar8,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    uVar4 = uStack_4c;
    iVar5 = (int)local_88;
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pTVar9 = local_90 + (int)local_88;
    pTVar10 = local_90;
    while( true ) {
      if ((int)local_88 != iVar5) {
        `TCheckedPointerIterator<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res8);
      }
      if (pTVar10 == pTVar9) break;
      iVar6 = param_3->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar6 + 1;
      pFVar7 = (param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x38;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)(pFVar7 + 8) = 0;
      *(undefined8 *)(pFVar7 + 0x10) = 0;
      *(undefined8 *)(pFVar7 + 0x18) = 0;
      *(undefined8 *)(pFVar7 + 0x20) = 0;
      *(undefined8 *)(pFVar7 + 0x28) = 0;
      *(undefined8 *)(pFVar7 + 0x30) = 0;
      pFVar7[0x14] = (FScriptContainerElement)0x1;
      FSchemaVariant::Set((FSchemaVariant *)(pFVar7 + 0x18),0);
      local_78 = &local_res8;
      local_res8 = pTVar10;
      local_80 = pFVar7;
      if ((*(int *)(*plVar2 + 0x9d4c) <
           `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        local_70 = 0x10;
        pwStack_48 = L"DefaultValue";
        local_50 = 0x18;
        pwStack_58 = L"ModifyMethod";
        pwStack_68 = L"Id";
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
        ::__l2::Fields._20_4_ = uStack_6c;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
        ::__l2::Fields._16_4_ = 0x10;
        local_60 = 0x14;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
        ::__l2::Fields._36_4_ = uStack_5c;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
        ::__l2::Fields._32_4_ = 0x14;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
        ::__l2::Fields._0_4_ = 0;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
        ::__l2::Fields._24_8_ = u_Id;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
        ::__l2::Fields._52_4_ = uStack_4c;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
        ::__l2::Fields._48_4_ = 0x18;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
        ::__l2::Fields._4_4_ = uVar4;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
        ::__l2::Fields._8_8_ = u_Name;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
        ::__l2::Fields._56_8_ = u_DefaultValue;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
        ::__l2::Fields._40_8_ = u_ModifyMethod;
        _Init_thread_footer(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      `UE::Online::Meta::
      VisitFields<UE::Online::FStatDefinition_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FStatDefinition>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FStatDefinition,FString>_>
                (&local_80,
                 (TField<UE::Online::FStatDefinition,FString> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
                  ::__l2::Fields);
      `UE::Online::Meta::
      VisitFields<UE::Online::FStatDefinition_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FStatDefinition>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FStatDefinition,int>_>
                (&local_80,
                 (TField<UE::Online::FStatDefinition,int> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
                  ::__l2::Fields.field_0x10);
      `UE::Online::Meta::
      VisitFields<UE::Online::FStatDefinition_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FStatDefinition>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FStatDefinition,enum_UE::Online::EStatModifyMethod>_>
                (&local_80,
                 (TField<UE::Online::FStatDefinition,UE::Online::EStatModifyMethod> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
                  ::__l2::Fields.field_0x20);
      `UE::Online::Meta::
      VisitFields<UE::Online::FStatDefinition_&,`UE::Online::IOnlineConfigProvider::GetValue<UE::Online::FStatDefinition>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FStatDefinition,UE::Online::FSchemaVariant>_>
                (&local_80,
                 (TField<UE::Online::FStatDefinition,UE::Online::FSchemaVariant> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FStatDefinition>::Fields(void)'
                  ::__l2::Fields.field_0x30);
      pTVar10 = pTVar10 + 1;
    }
  }
  DestructItems<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int>(local_90,(int)local_88);
  if (local_90 != (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0) {
    FMemory::Free(local_90);
  }
  return param_3->ArrayNum - iVar3;
}

