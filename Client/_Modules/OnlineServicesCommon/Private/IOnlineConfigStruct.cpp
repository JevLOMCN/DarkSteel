// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 11

// GetValue<int> @ 14edca820

bool __thiscall
UE::Online::IOnlineConfigStruct::GetValue<int>
          (IOnlineConfigStruct *this,wchar_t *param_1,int *param_2)

{
  char cVar1;
  ulong uVar2;
  wchar_t *_Str;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  cVar1 = (**(code **)((longlong)*this + 0x20))(this,param_1,&local_18);
  if (cVar1 != '\0') {
    _Str = L"";
    if ((int)local_10 != 0) {
      _Str = local_18;
    }
    uVar2 = wcstoul(_Str,(wchar_t **)0x0,10);
    *param_2 = uVar2;
    if (local_18 != (wchar_t *)0x0) {
      FMemory::Free(local_18);
    }
    return true;
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return false;
}

// GetValue<float> @ 14edca8a0

bool __thiscall
UE::Online::IOnlineConfigStruct::GetValue<float>
          (IOnlineConfigStruct *this,wchar_t *param_1,float *param_2)

{
  char cVar1;
  wchar_t *_Str;
  double dVar2;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  cVar1 = (**(code **)((longlong)*this + 0x20))(this,param_1,&local_18);
  if (cVar1 != '\0') {
    _Str = L"";
    if ((int)local_10 != 0) {
      _Str = local_18;
    }
    dVar2 = _wtof(_Str);
    *param_2 = (float)dVar2;
    if (local_18 != (wchar_t *)0x0) {
      FMemory::Free(local_18);
    }
    return true;
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return false;
}

// GetValue<UE::Online::FAchievementUnlockCondition> @ 14edca920

int __thiscall
UE::Online::IOnlineConfigStruct::GetValue<UE::Online::FAchievementUnlockCondition>
          (IOnlineConfigStruct *this,wchar_t *param_1,
          TArray<UE::Online::FAchievementUnlockCondition,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar8;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar9;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_res8;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_58;
  ulonglong local_50;
  FScriptContainerElement *local_48;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> **local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  wchar_t *pwStack_30;
  
  DestructItems<UE::Online::FAchievementUnlockCondition,int>
            ((FAchievementUnlockCondition *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  local_58 = (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0;
  local_50 = 0;
  iVar5 = (**(code **)((longlong)*this + 8))(this,param_1,&local_58);
  iVar6 = (int)local_50;
  if (0 < iVar5) {
    uVar7 = local_50 & 0xffffffff;
    if ((int)local_50 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar7);
    }
    if (*piVar1 < (int)local_50) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,(int)local_50,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
      uVar7 = local_50 & 0xffffffff;
    }
    uVar4 = uStack_34;
    iVar5 = (int)uVar7;
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pTVar9 = local_58 + iVar5;
    pTVar8 = local_58;
    while( true ) {
      iVar6 = (int)uVar7;
      if ((int)uVar7 != iVar5) {
        `TCheckedPointerIterator<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res8);
        iVar6 = (int)local_50;
      }
      if (pTVar8 == pTVar9) break;
      iVar6 = param_2->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar6 + 1;
      local_40 = &local_res8;
      local_48 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
      lVar3 = *plVar2;
      *(undefined8 *)local_48 = 0;
      *(undefined8 *)(local_48 + 8) = 0;
      *(undefined8 *)(local_48 + 0x10) = 0;
      *(undefined8 *)(local_48 + 0x18) = 0;
      *(undefined8 *)(local_48 + 0x20) = 0;
      *(undefined8 *)(local_48 + 0x28) = 0;
      local_res8 = pTVar8;
      if ((*(int *)(lVar3 + 0x9d4c) <
           `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockCondition>::Fields(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockCondition>::Fields(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockCondition>::Fields(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        local_38 = 0x10;
        pwStack_30 = L"UnlockThreshold";
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockCondition>::Fields(void)'
        ::__l2::Fields._20_4_ = uStack_34;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockCondition>::Fields(void)'
        ::__l2::Fields._16_4_ = 0x10;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockCondition>::Fields(void)'
        ::__l2::Fields._0_4_ = 0;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockCondition>::Fields(void)'
        ::__l2::Fields._4_4_ = uVar4;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockCondition>::Fields(void)'
        ::__l2::Fields._24_8_ = u_UnlockThreshold;
        `public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockCondition>::Fields(void)'
        ::__l2::Fields._8_8_ = u_StatName;
        _Init_thread_footer(&`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockCondition>::Fields(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      `UE::Online::Meta::
      VisitFields<UE::Online::FAchievementUnlockCondition_&,`UE::Online::IOnlineConfigStruct::GetValue<UE::Online::FAchievementUnlockCondition>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FAchievementUnlockCondition,FString>_>
                (&local_48,
                 (TField<UE::Online::FAchievementUnlockCondition,FString> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockCondition>::Fields(void)'
                  ::__l2::Fields);
      `UE::Online::Meta::
      VisitFields<UE::Online::FAchievementUnlockCondition_&,`UE::Online::IOnlineConfigStruct::GetValue<UE::Online::FAchievementUnlockCondition>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<UE::Online::FAchievementUnlockCondition,UE::Online::FSchemaVariant>_>
                (&local_48,
                 (TField<UE::Online::FAchievementUnlockCondition,UE::Online::FSchemaVariant> *)
                 &`public:_static___cdecl_UE::Online::Meta::TStructDetails<UE::Online::FAchievementUnlockCondition>::Fields(void)'
                  ::__l2::Fields.field_0x10);
      uVar7 = local_50 & 0xffffffff;
      pTVar8 = pTVar8 + 1;
    }
  }
  DestructItems<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int>(local_58,iVar6);
  if (local_58 != (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0) {
    FMemory::Free(local_58);
  }
  return param_2->ArrayNum;
}

// GetValue<FTestConfigInner> @ 14edcc0f0

int __thiscall
UE::Online::IOnlineConfigStruct::GetValue<FTestConfigInner>
          (IOnlineConfigStruct *this,wchar_t *param_1,
          TArray<FTestConfigInner,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TTuple<UE::Online::Meta::Private::TField<FTestConfigInner,float>,UE::Online::Meta::Private::TField<FTestConfigInner,FTestConfigInnerInner>,UE::Online::Meta::Private::TField<FTestConfigInner,TArray<FTestConfigInnerInner,TSizedDefaultAllocator<32>_>_>,UE::Online::Meta::Private::TField<FTestConfigInner,EConfigTestEnum>,UE::Online::Meta::Private::TField<FTestConfigInner,TArray<EConfigTestEnum,TSizedDefaultAllocator<32>_>_>,UE::Online::Meta::Private::TField<FTestConfigInner,TArray<FString,TSizedDefaultAllocator<32>_>_>_>
  *pTVar4;
  ulonglong uVar5;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar6;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar7;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_res8;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_48;
  ulonglong local_40;
  FScriptContainerElement *local_38;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> **local_30;
  
  DestructItems<FTestConfigInner,int>
            ((FTestConfigInner *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  local_48 = (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0;
  local_40 = 0;
  iVar2 = (**(code **)((longlong)*this + 8))(this,param_1,&local_48);
  iVar3 = (int)local_40;
  if (0 < iVar2) {
    uVar5 = local_40 & 0xffffffff;
    if ((int)local_40 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar5);
    }
    if (*piVar1 < (int)local_40) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,(int)local_40,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
      uVar5 = local_40 & 0xffffffff;
    }
    iVar2 = (int)uVar5;
    pTVar6 = local_48 + iVar2;
    pTVar7 = local_48;
    while( true ) {
      iVar3 = (int)uVar5;
      if ((int)uVar5 != iVar2) {
        `TCheckedPointerIterator<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res8);
        iVar3 = (int)local_40;
      }
      if (pTVar7 == pTVar6) break;
      iVar3 = param_2->ArrayNum;
      if (iVar3 == *piVar1) {
        iVar3 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar3 + 1;
      local_30 = &local_res8;
      local_38 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x40;
      *(undefined8 *)local_38 = 0;
      *(undefined8 *)(local_38 + 0x18) = 0;
      *(undefined8 *)(local_38 + 8) = 0;
      *(undefined8 *)(local_38 + 0x10) = 0;
      *(undefined8 *)(local_38 + 0x20) = 0;
      *(undefined8 *)(local_38 + 0x28) = 0;
      *(undefined8 *)(local_38 + 0x30) = 0;
      *(undefined8 *)(local_38 + 0x38) = 0;
      local_res8 = pTVar7;
      pTVar4 = Meta::TStructDetails<FTestConfigInner>::Fields();
      `UE::Online::Meta::
      VisitFields<FTestConfigInner_&,`UE::Online::IOnlineConfigStruct::GetValue<FTestConfigInner>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::operator()<UE::Online::Meta::Private::TField<FTestConfigInner,float>_>
                (&local_38,(TField<FTestConfigInner,float> *)pTVar4);
      `UE::Online::Meta::
      VisitFields<FTestConfigInner_&,`UE::Online::IOnlineConfigStruct::GetValue<FTestConfigInner>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<FTestConfigInner,FTestConfigInnerInner>_>
                (&local_38,(TField<FTestConfigInner,FTestConfigInnerInner> *)&pTVar4->field_0x10);
      `UE::Online::Meta::
      VisitFields<FTestConfigInner_&,`UE::Online::IOnlineConfigStruct::GetValue<FTestConfigInner>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<FTestConfigInner,TArray<FTestConfigInnerInner,TSizedDefaultAllocator<32>_>_>_>
                (&local_38,
                 (TField<FTestConfigInner,TArray<FTestConfigInnerInner,TSizedDefaultAllocator<32>_>_>
                  *)&pTVar4->field_0x20);
      `UE::Online::Meta::
      VisitFields<FTestConfigInner_&,`UE::Online::IOnlineConfigStruct::GetValue<FTestConfigInner>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<FTestConfigInner,enum_EConfigTestEnum>_>
                (&local_38,(TField<FTestConfigInner,EConfigTestEnum> *)&pTVar4->field_0x30);
      `UE::Online::Meta::
      VisitFields<FTestConfigInner_&,`UE::Online::IOnlineConfigStruct::GetValue<FTestConfigInner>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<FTestConfigInner,TArray<enum_EConfigTestEnum,TSizedDefaultAllocator<32>_>_>_>
                (&local_38,
                 (TField<FTestConfigInner,TArray<EConfigTestEnum,TSizedDefaultAllocator<32>_>_> *)
                 &pTVar4->field_0x40);
      `UE::Online::Meta::
      VisitFields<FTestConfigInner_&,`UE::Online::IOnlineConfigStruct::GetValue<FTestConfigInner>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<FTestConfigInner,TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                (&local_38,
                 (TField<FTestConfigInner,TArray<FString,TSizedDefaultAllocator<32>_>_> *)
                 &pTVar4->field_0x50);
      uVar5 = local_40 & 0xffffffff;
      pTVar7 = pTVar7 + 1;
    }
  }
  DestructItems<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int>(local_48,iVar3);
  if (local_48 != (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0) {
    FMemory::Free(local_48);
  }
  return param_2->ArrayNum;
}

// GetValue<FTestConfigInnerInner> @ 14edcc300

int __thiscall
UE::Online::IOnlineConfigStruct::GetValue<FTestConfigInnerInner>
          (IOnlineConfigStruct *this,wchar_t *param_1,
          TArray<FTestConfigInnerInner,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TField<FTestConfigInnerInner,float> *pTVar4;
  ulonglong uVar5;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar6;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *pTVar7;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_res8;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> *local_38;
  ulonglong local_30;
  FScriptContainerElement *local_28;
  TSharedPtr<UE::Online::IOnlineConfigStruct,1> **local_20;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  local_38 = (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0;
  local_30 = 0;
  iVar2 = (**(code **)((longlong)*this + 8))(this,param_1,&local_38);
  iVar3 = (int)local_30;
  if (0 < iVar2) {
    uVar5 = local_30 & 0xffffffff;
    if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar5);
    }
    if (*piVar1 < (int)local_30) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_30,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
      uVar5 = local_30 & 0xffffffff;
    }
    iVar2 = (int)uVar5;
    pTVar6 = local_38 + iVar2;
    pTVar7 = local_38;
    while( true ) {
      iVar3 = (int)uVar5;
      if ((int)uVar5 != iVar2) {
        `TCheckedPointerIterator<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res8);
        iVar3 = (int)local_30;
      }
      if (pTVar7 == pTVar6) break;
      iVar3 = param_2->ArrayNum;
      if (iVar3 == *piVar1) {
        iVar3 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar3 + 1;
      local_28 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 4;
      *(undefined4 *)local_28 = 0;
      local_20 = &local_res8;
      local_res8 = pTVar7;
      pTVar4 = (TField<FTestConfigInnerInner,float> *)
               Meta::TStructDetails<FTestConfigInnerInner>::Fields();
      `UE::Online::Meta::
      VisitFields<FTestConfigInnerInner_&,`UE::Online::IOnlineConfigStruct::GetValue<FTestConfigInnerInner>'::__l10::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<UE::Online::Meta::Private::TField<FTestConfigInnerInner,float>_>(&local_28,pTVar4);
      uVar5 = local_30 & 0xffffffff;
      pTVar7 = pTVar7 + 1;
    }
  }
  DestructItems<TSharedPtr<UE::Online::IOnlineConfigStruct,1>,int>(local_38,iVar3);
  if (local_38 != (TSharedPtr<UE::Online::IOnlineConfigStruct,1> *)0x0) {
    FMemory::Free(local_38);
  }
  return param_2->ArrayNum;
}

// GetValue<FTestConfigInnerInner> @ 14edcc470

bool __thiscall
UE::Online::IOnlineConfigStruct::GetValue<FTestConfigInnerInner>
          (IOnlineConfigStruct *this,wchar_t *param_1,FTestConfigInnerInner *param_2)

{
  char cVar1;
  TField<FTestConfigInnerInner,float> *pTVar2;
  FTestConfigInnerInner local_res8 [6];
  undefined8 *local_res20;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  FTestConfigInnerInner *local_18;
  undefined8 **local_10;
  
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  cVar1 = (**(code **)((longlong)*this + 0x10))(0,param_1,&local_28);
  if (cVar1 != '\0') {
    local_res20 = &local_28;
    local_18 = local_res8;
    local_10 = &local_res20;
    pTVar2 = (TField<FTestConfigInnerInner,float> *)
             Meta::TStructDetails<FTestConfigInnerInner>::Fields();
    `UE::Online::Meta::
    VisitFields<FTestConfigInnerInner_&,`UE::Online::IOnlineConfigStruct::GetValue<FTestConfigInnerInner>'::__l6::<lambda_1>_>'
    ::__l2::<lambda_1>::operator()<UE::Online::Meta::Private::TField<FTestConfigInnerInner,float>_>
              (&local_18,pTVar2);
    param_2->Float = (float)local_res8[0];
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return false;
}

// GetValue<FName> @ 14edcc500

int __thiscall
UE::Online::IOnlineConfigStruct::GetValue<FName>
          (IOnlineConfigStruct *this,wchar_t *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  FString *pFVar7;
  undefined1 local_res8 [8];
  FName local_res18;
  FString *local_28;
  ulonglong local_20;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  local_28 = (FString *)0x0;
  local_20 = 0;
  iVar2 = (**(code **)((longlong)*this + 0x18))(this,param_1,&local_28);
  iVar3 = (int)local_20;
  if (0 < iVar2) {
    uVar4 = local_20 & 0xffffffff;
    if ((int)local_20 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar4);
    }
    if (*piVar1 < (int)local_20) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,(int)local_20,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
      uVar4 = local_20 & 0xffffffff;
    }
    iVar2 = (int)uVar4;
    pFVar7 = local_28 + iVar2;
    pFVar6 = local_28;
    while( true ) {
      iVar3 = (int)uVar4;
      if ((int)uVar4 != iVar2) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        iVar3 = (int)local_20;
      }
      if (pFVar6 == pFVar7) break;
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_res18,pwVar5);
      iVar3 = param_2->ArrayNum;
      if (iVar3 == *piVar1) {
        iVar3 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_2->AllocatorInstance,piVar1);
      }
      pFVar6 = pFVar6 + 1;
      param_2->ArrayNum = iVar3 + 1;
      *(FName *)((param_2->AllocatorInstance).Data + (longlong)iVar3 * 8) = local_res18;
      uVar4 = local_20 & 0xffffffff;
    }
  }
  DestructItems<FString,int>(local_28,iVar3);
  if (local_28 != (FString *)0x0) {
    FMemory::Free(local_28);
  }
  return param_2->ArrayNum;
}

// GetValue<FName> @ 14edcc660

bool __thiscall
UE::Online::IOnlineConfigStruct::GetValue<FName>
          (IOnlineConfigStruct *this,wchar_t *param_1,FName *param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  FName local_res8 [4];
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  cVar1 = (**(code **)((longlong)*this + 0x20))(this,param_1,&local_18);
  if (cVar1 != '\0') {
    pwVar2 = L"";
    if ((int)local_10 != 0) {
      pwVar2 = local_18;
    }
    ::FName::FName(local_res8,pwVar2);
    *param_2 = local_res8[0];
    if (local_18 != (wchar_t *)0x0) {
      FMemory::Free(local_18);
    }
    return true;
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return false;
}

// GetValue<enum_EConfigTestEnum> @ 14edcc6e0

int __thiscall
UE::Online::IOnlineConfigStruct::GetValue<enum_EConfigTestEnum>
          (IOnlineConfigStruct *this,wchar_t *param_1,
          TArray<EConfigTestEnum,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  FString *pFVar7;
  wchar_t *_Str1;
  FString *pFVar8;
  undefined4 local_res8 [2];
  FString *local_38;
  ulonglong local_30;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  local_38 = (FString *)0x0;
  local_30 = 0;
  iVar3 = (**(code **)((longlong)*this + 0x18))(this,param_1,&local_38);
  iVar4 = (int)local_30;
  if (0 < iVar3) {
    uVar5 = local_30 & 0xffffffff;
    if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar5);
    }
    if (*piVar1 < (int)local_30) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_30,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
      uVar5 = local_30 & 0xffffffff;
    }
    iVar3 = (int)uVar5;
    pFVar8 = local_38 + iVar3;
    pFVar7 = local_38;
    uVar6 = local_res8[0];
    while( true ) {
      iVar4 = (int)uVar5;
      if ((int)uVar5 != iVar3) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        iVar4 = (int)local_30;
      }
      if (pFVar7 == pFVar8) break;
      if ((pFVar7->Data).ArrayNum == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      iVar4 = wcscmp(_Str1,L"A");
      uVar2 = 0;
      if ((iVar4 != 0) && (iVar4 = wcscmp(_Str1,L"B"), uVar2 = uVar6, iVar4 == 0)) {
        uVar2 = 1;
      }
      uVar6 = uVar2;
      iVar4 = param_2->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,piVar1);
      }
      pFVar7 = pFVar7 + 1;
      param_2->ArrayNum = iVar4 + 1;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = uVar6;
      uVar5 = local_30 & 0xffffffff;
    }
  }
  DestructItems<FString,int>(local_38,iVar4);
  if (local_38 != (FString *)0x0) {
    FMemory::Free(local_38);
  }
  return param_2->ArrayNum;
}

// GetValue<enum_EConfigTestEnum> @ 14edcc890

bool __thiscall
UE::Online::IOnlineConfigStruct::GetValue<enum_EConfigTestEnum>
          (IOnlineConfigStruct *this,wchar_t *param_1,EConfigTestEnum *param_2)

{
  char cVar1;
  int iVar2;
  EConfigTestEnum EVar3;
  wchar_t *_Str1;
  EConfigTestEnum local_res8;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  cVar1 = (**(code **)((longlong)*this + 0x20))(this,param_1,&local_18);
  if (cVar1 != '\0') {
    _Str1 = L"";
    if ((int)local_10 != 0) {
      _Str1 = local_18;
    }
    iVar2 = wcscmp(_Str1,L"A");
    EVar3 = A;
    if (iVar2 != 0) {
      iVar2 = wcscmp(_Str1,L"B");
      EVar3 = local_res8;
      if (iVar2 == 0) {
        EVar3 = B;
      }
    }
    *param_2 = EVar3;
    if (local_18 != (wchar_t *)0x0) {
      FMemory::Free(local_18);
    }
    return true;
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return false;
}

// ~IOnlineConfigStruct @ 14ee25400

void __thiscall UE::Online::IOnlineConfigStruct::~IOnlineConfigStruct(IOnlineConfigStruct *this)

{
  return;
}

