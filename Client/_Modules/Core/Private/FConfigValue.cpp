// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// FConfigValue @ 14161d180

FConfigValue * __thiscall
FConfigValue::FConfigValue(FConfigValue *this,FString *param_1,EValueType param_2)

{
  bool bVar1;
  uint uVar2;
  wchar_t *pwVar3;
  
  ::FString::FString(&this->SavedValue,param_1);
  this->ValueType = param_2;
  this->bExpandOnDemand = false;
  if ((this->SavedValue).Data.ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(this->SavedValue).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::StrCrc32<wchar_t>(pwVar3,0);
  this->SavedValueHash = uVar2;
  bVar1 = NeedsToExpandValue(this);
  this->bExpandOnDemand = bVar1;
  return this;
}

// GetValue @ 1417622e0

FString * __thiscall FConfigValue::GetValue(FConfigValue *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *_Src;
  FString *pFVar1;
  longlong lVar2;
  FString local_28;
  FString local_18;
  
  if (this->bExpandOnDemand == false) {
    _Src = (this->SavedValue).Data.AllocatorInstance.Data;
    local_28.Data.ArrayNum = (this->SavedValue).Data.ArrayNum;
    lVar2 = (longlong)local_28.Data.ArrayNum;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_28);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    pFVar1 = ExpandValue(&local_18,&this->SavedValue);
    ::FString::FString(__return_storage_ptr__,pFVar1);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FConfigValue @ 1418553a0

FConfigValue * __thiscall
FConfigValue::FConfigValue
          (FConfigValue *this,FConfigSection *param_1,FName param_2,FString *param_3,
          EValueType param_4)

{
  uint uVar1;
  FConfigExpansion *pFVar2;
  wchar_t *pwVar3;
  wchar_t *local_res8;
  
  (this->SavedValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedValue).Data.AllocatorInstance.Data = (param_3->Data).AllocatorInstance.Data;
  (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedValue).Data.ArrayNum = (param_3->Data).ArrayNum;
  (this->SavedValue).Data.ArrayMax = (param_3->Data).ArrayMax;
  (param_3->Data).ArrayNum = 0;
  (param_3->Data).ArrayMax = 0;
  this->ValueType = param_4;
  this->bExpandOnDemand = false;
  if ((this->SavedValue).Data.ArrayNum == 0) {
    pwVar3 = L"";
    uVar1 = FCrc::StrCrc32<wchar_t>(L"",0);
    this->SavedValueHash = uVar1;
  }
  else {
    uVar1 = FCrc::StrCrc32<wchar_t>((wchar_t *)(this->SavedValue).Data.AllocatorInstance.Data,0);
    this->SavedValueHash = uVar1;
    pwVar3 = (wchar_t *)(this->SavedValue).Data.AllocatorInstance.Data;
  }
  pFVar2 = FindNextExpansion(pwVar3,&local_res8);
  this->bExpandOnDemand = pFVar2 != (FConfigExpansion *)0x0;
  return this;
}

// operator= @ 141858cc0

FConfigValue * __thiscall FConfigValue::operator=(FConfigValue *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FConfigExpansion *pFVar3;
  wchar_t *pwVar4;
  wchar_t *local_res8;
  
  if (this != (FConfigValue *)param_1) {
    pFVar1 = (this->SavedValue).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->SavedValue).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SavedValue).Data.ArrayNum = (param_1->Data).ArrayNum;
    (this->SavedValue).Data.ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  if ((this->SavedValue).Data.ArrayNum == 0) {
    pwVar4 = L"";
    uVar2 = FCrc::StrCrc32<wchar_t>(L"",0);
    this->SavedValueHash = uVar2;
  }
  else {
    uVar2 = FCrc::StrCrc32<wchar_t>((wchar_t *)(this->SavedValue).Data.AllocatorInstance.Data,0);
    this->SavedValueHash = uVar2;
    pwVar4 = (wchar_t *)(this->SavedValue).Data.AllocatorInstance.Data;
  }
  pFVar3 = FindNextExpansion(pwVar4,&local_res8);
  this->bExpandOnDemand = pFVar3 != (FConfigExpansion *)0x0;
  return this;
}

// operator() @ 14185a080

void __thiscall
`FConfigValue::CollapseValue'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,wchar_t *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_18;
  
  iVar1 = (param_1->Data).ArrayNum;
  pwVar6 = L"";
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = ::FString::StartsWith(*(FString **)this,pwVar5,iVar4,CaseSensitive);
  if (bVar3) {
    if ((param_1->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar4 = ::FString::ReplaceInline(*(FString **)this,pwVar6,param_2,CaseSensitive);
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + iVar4;
  }
  else {
    bVar3 = FPaths::IsRelative(param_1);
    if (bVar3) {
      FPaths::ConvertRelativePathToFull(&local_18,param_1);
      iVar4 = local_18.Data.ArrayNum + -1;
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
      if (local_18.Data.ArrayNum == 0) {
        iVar4 = 0;
        FVar2.Data = (FScriptContainerElement *)L"";
      }
      bVar3 = ::FString::StartsWith(*(FString **)this,(wchar_t *)FVar2.Data,iVar4,CaseSensitive);
      if (bVar3) {
        if (local_18.Data.ArrayNum != 0) {
          pwVar6 = (wchar_t *)local_18.Data.AllocatorInstance.Data;
        }
        iVar4 = ::FString::ReplaceInline(*(FString **)this,pwVar6,param_2,CaseSensitive);
        **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + iVar4;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// CollapseValue @ 141867030

FString * __cdecl FConfigValue::CollapseValue(FString *__return_storage_ptr__,FString *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  CollapseValue(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CollapseValue @ 141867060

bool __cdecl FConfigValue::CollapseValue(FString *param_1,FString *param_2)

{
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  int local_res10 [2];
  FString local_38;
  undefined1 local_28 [16];
  FString local_18;
  
  local_res10[0] = 0;
  ::FString::operator=(param_2,param_1);
  local_28._8_8_ = local_res10;
  local_28._0_8_ = param_2;
  pFVar3 = FPaths::ProjectDir(&local_18);
  `FConfigValue::CollapseValue'::__l2::<lambda_1>::operator()(local_28,pFVar3,L"%GAMEDIR%");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar3 = FPaths::EngineUserDir(&local_18);
  `FConfigValue::CollapseValue'::__l2::<lambda_1>::operator()(local_28,pFVar3,L"%ENGINEUSERDIR%");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar3 = FPaths::EngineVersionAgnosticUserDir(&local_18);
  `FConfigValue::CollapseValue'::__l2::<lambda_1>::operator()
            (local_28,pFVar3,L"%ENGINEVERSIONAGNOSTICUSERDIR%");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar4 = FWindowsPlatformProcess::ApplicationSettingsDir();
  ::FString::FString(&local_38,pwVar4);
  FPaths::NormalizeFilename(&local_38);
  iVar2 = local_38.Data.ArrayNum + -1;
  FVar5.Data = local_38.Data.AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    iVar2 = 0;
    FVar5.Data = (FScriptContainerElement *)L"";
  }
  bVar1 = ::FString::StartsWith(param_2,(wchar_t *)FVar5.Data,iVar2,CaseSensitive);
  if (bVar1) {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar2 = ::FString::ReplaceInline
                      (param_2,(wchar_t *)FVar5.Data,L"%APPSETTINGSDIR%",CaseSensitive);
    local_res10[0] = local_res10[0] + iVar2;
  }
  else {
    bVar1 = FPaths::IsRelative(&local_38);
    if (bVar1) {
      FPaths::ConvertRelativePathToFull((FString *)local_28,&local_38);
      iVar2 = (int)local_28._8_8_ + -1;
      pFVar6 = (FScriptContainerElement *)local_28._0_8_;
      if ((int)local_28._8_8_ == 0) {
        iVar2 = 0;
        pFVar6 = (FScriptContainerElement *)L"";
      }
      bVar1 = ::FString::StartsWith(param_2,(wchar_t *)pFVar6,iVar2,CaseSensitive);
      if (bVar1) {
        pFVar6 = (FScriptContainerElement *)L"";
        if (local_28._8_4_ != 0) {
          pFVar6 = (FScriptContainerElement *)local_28._0_8_;
        }
        iVar2 = ::FString::ReplaceInline
                          (param_2,(wchar_t *)pFVar6,L"%APPSETTINGSDIR%",CaseSensitive);
        local_res10[0] = local_res10[0] + iVar2;
      }
      if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_28._0_8_);
      }
    }
  }
  bVar1 = 0 < local_res10[0];
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// ExpandValue @ 14186cc20

FString * __cdecl FConfigValue::ExpandValue(FString *__return_storage_ptr__,FString *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ExpandValue(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ExpandValue @ 14186cc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FConfigValue::ExpandValue(FString *param_1,FString *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  FConfigExpansion *pFVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  TTypeCompatibleBytes<_public:_static_bool___cdecl_FConfigValue::ExpandValue(FString_const_&,FString_&)_::_2_::FSubstring>
  *pTVar13;
  wchar_t *pwVar14;
  TTypeCompatibleBytes<_public:_static_bool___cdecl_FConfigValue::ExpandValue(FString_const_&,FString_&)_::_2_::FSubstring>
  *pTVar15;
  int iVar16;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  ForElementType<_public:_static_bool___cdecl_FConfigValue::ExpandValue(FString_const_&,FString_&)_::_2_::FSubstring>
  *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined1 local_e7 [7];
  wchar_t *local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  ForElementType<_public:_static_bool___cdecl_FConfigValue::ExpandValue(FString_const_&,FString_&)_::_2_::FSubstring>
  local_a8;
  uint local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_138;
  iVar16 = 0;
  local_34 = 7;
  pwVar14 = L"";
  local_38 = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar10 = FindNextExpansion(pwVar12,&local_e0);
  lVar3 = local_108;
  lVar4 = local_100;
  pFVar5 = (FScriptContainerElement *)local_c8._0_8_;
  while (local_c8._0_8_ = pwVar12, local_100 = lVar4, pFVar10 != (FConfigExpansion *)0x0) {
    local_c8._8_8_ = local_e0;
    if ((&local_a8 <=
         (ForElementType<_public:_static_bool___cdecl_FConfigValue::ExpandValue(FString_const_&,FString_&)_::_2_::FSubstring>
          *)local_c8) &&
       (local_108 = (longlong)local_34, local_c8 < local_a8.InlineData + local_108)) {
      local_100 = (longlong)(int)local_38;
      local_f8 = 0x10;
      local_110 = &local_a8;
      local_118 = local_c8;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      lVar3 = local_108;
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
    }
    local_108 = lVar3;
    uVar8 = local_38;
    if (local_38 == local_34) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<7>::ForElementType<_FConfigValue::ExpandValue_::__l2::FSubstring>_>
                        (0x810,&local_a8,&local_34);
    }
    local_38 = uVar8 + 1;
    *(undefined8 *)local_a8.InlineData[(int)uVar8].Pad = local_c8._0_8_;
    *(undefined8 *)(local_a8.InlineData[(int)uVar8].Pad + 8) = local_c8._8_8_;
    iVar1 = (pFVar10->Value).Data.ArrayNum;
    iVar9 = iVar1 + -1;
    if (iVar1 == 0) {
      local_d8._0_8_ = L"";
      iVar9 = 0;
    }
    else {
      local_d8._0_8_ = (pFVar10->Value).Data.AllocatorInstance.Data;
    }
    local_d8._8_8_ = local_d8._0_8_ + (longlong)iVar9 * 2;
    if ((&local_a8 <=
         (ForElementType<_public:_static_bool___cdecl_FConfigValue::ExpandValue(FString_const_&,FString_&)_::_2_::FSubstring>
          *)local_d8) && (local_d8 < local_a8.InlineData + local_34)) {
      local_100 = (longlong)(int)local_38;
      local_f8 = 0x10;
      local_110 = &local_a8;
      local_118 = local_d8;
      local_108 = (longlong)local_34;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
    }
    uVar8 = local_38;
    if (local_38 == local_34) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<7>::ForElementType<_FConfigValue::ExpandValue_::__l2::FSubstring>_>
                        (0x810,&local_a8,&local_34);
    }
    local_38 = uVar8 + 1;
    *(undefined8 *)local_a8.InlineData[(int)uVar8].Pad = local_d8._0_8_;
    *(undefined8 *)(local_a8.InlineData[(int)uVar8].Pad + 8) = local_d8._8_8_;
    pwVar12 = local_e0 + pFVar10->VariableLen;
    pFVar10 = FindNextExpansion(pwVar12,&local_e0);
    lVar3 = local_108;
    lVar4 = local_100;
    pFVar5 = (FScriptContainerElement *)local_c8._0_8_;
  }
  local_100 = (longlong)(int)local_38;
  if (local_38 == 0) {
    local_108 = lVar3;
    local_100 = lVar4;
    local_c8._0_8_ = pFVar5;
    ::FString::operator=(param_2,param_1);
    bVar6 = false;
  }
  else {
    iVar1 = (param_1->Data).ArrayNum;
    iVar9 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar9 = 0;
    }
    else {
      pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    local_b8._8_8_ = (longlong)pwVar14 + (longlong)iVar9 * 2;
    local_b8._0_8_ = local_c8._0_8_;
    if ((&local_a8 <=
         (ForElementType<_public:_static_bool___cdecl_FConfigValue::ExpandValue(FString_const_&,FString_&)_::_2_::FSubstring>
          *)local_b8) &&
       (local_108 = (longlong)local_34, local_b8 < local_a8.InlineData + local_108)) {
      local_f8 = 0x10;
      local_110 = &local_a8;
      local_118 = local_b8;
      local_c8._0_8_ = pFVar5;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      lVar3 = local_108;
      lVar4 = local_100;
      pFVar5 = (FScriptContainerElement *)local_c8._0_8_;
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
    }
    local_c8._0_8_ = pFVar5;
    local_100 = lVar4;
    local_108 = lVar3;
    uVar8 = local_38;
    if (local_38 == local_34) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<7>::ForElementType<_FConfigValue::ExpandValue_::__l2::FSubstring>_>
                        (0x810,&local_a8,&local_34);
    }
    local_38 = uVar8 + 1;
    pTVar13 = local_a8.InlineData;
    *(undefined8 *)local_a8.InlineData[(int)uVar8].Pad = local_b8._0_8_;
    *(undefined8 *)(local_a8.InlineData[(int)uVar8].Pad + 8) = local_b8._8_8_;
    uVar8 = local_38;
    uVar11 = (ulonglong)(int)local_38;
    pTVar15 = local_a8.InlineData + uVar11;
    while( true ) {
      if ((uint)uVar11 != uVar8) {
        `TCheckedPointerIterator<`FConfigValue::ExpandValue'::__l2::FSubstring,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_e8);
        uVar11 = (ulonglong)local_38;
      }
      if (pTVar13 == pTVar15) break;
      iVar16 = iVar16 + (int)(*(longlong *)
                               (((TTypeCompatibleBytes<_public:_static_bool___cdecl_FConfigValue::ExpandValue(FString_const_&,FString_&)_::_2_::FSubstring>
                                  *)pTVar13->Pad)->Pad + 8) -
                              *(longlong *)
                               ((TTypeCompatibleBytes<_public:_static_bool___cdecl_FConfigValue::ExpandValue(FString_const_&,FString_&)_::_2_::FSubstring>
                                 *)pTVar13->Pad)->Pad >> 1);
      pTVar13 = pTVar13 + 1;
    }
    ::FString::Reserve(param_2,iVar16);
    uVar8 = local_38;
    uVar11 = (ulonglong)(int)local_38;
    pTVar13 = local_a8.InlineData;
    pTVar15 = local_a8.InlineData + uVar11;
    while( true ) {
      if ((uint)uVar11 != uVar8) {
        `TCheckedPointerIterator<`FConfigValue::ExpandValue'::__l2::FSubstring,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_e7);
      }
      if (pTVar13 == pTVar15) break;
      pwVar14 = *(wchar_t **)
                 ((TTypeCompatibleBytes<_public:_static_bool___cdecl_FConfigValue::ExpandValue(FString_const_&,FString_&)_::_2_::FSubstring>
                   *)pTVar13->Pad)->Pad;
      ::FString::AppendChars
                (param_2,pwVar14,
                 (int)(*(longlong *)
                        (((TTypeCompatibleBytes<_public:_static_bool___cdecl_FConfigValue::ExpandValue(FString_const_&,FString_&)_::_2_::FSubstring>
                           *)pTVar13->Pad)->Pad + 8) - (longlong)pwVar14 >> 1));
      uVar11 = (ulonglong)local_38;
      pTVar13 = pTVar13 + 1;
    }
    bVar6 = true;
  }
  return bVar6;
}

// NeedsToExpandValue @ 14187f100

bool __thiscall FConfigValue::NeedsToExpandValue(FConfigValue *this)

{
  FConfigExpansion *pFVar1;
  wchar_t *local_res8 [4];
  
  if ((this->SavedValue).Data.ArrayNum != 0) {
    pFVar1 = FindNextExpansion((wchar_t *)(this->SavedValue).Data.AllocatorInstance.Data,local_res8)
    ;
    return pFVar1 != (FConfigExpansion *)0x0;
  }
  pFVar1 = FindNextExpansion(L"",local_res8);
  return pFVar1 != (FConfigExpansion *)0x0;
}

