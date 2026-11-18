// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 15

// FCoreRedirect @ 141fbcfa0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FCoreRedirect * __thiscall FCoreRedirect::FCoreRedirect(FCoreRedirect *this,FCoreRedirect *param_1)

{
  FName FVar1;
  
  this->RedirectFlags = param_1->RedirectFlags;
  FVar1 = (param_1->OldName).OuterName;
  (this->OldName).ObjectName = (param_1->OldName).ObjectName;
  (this->OldName).OuterName = FVar1;
  (this->OldName).PackageName = (param_1->OldName).PackageName;
  FVar1 = (param_1->NewName).OuterName;
  (this->NewName).ObjectName = (param_1->NewName).ObjectName;
  (this->NewName).OuterName = FVar1;
  (this->NewName).PackageName = (param_1->NewName).PackageName;
  FVar1 = (param_1->OverrideClassName).OuterName;
  (this->OverrideClassName).ObjectName = (param_1->OverrideClassName).ObjectName;
  (this->OverrideClassName).OuterName = FVar1;
  (this->OverrideClassName).PackageName = (param_1->OverrideClassName).PackageName;
  *(undefined8 *)&(this->ValueChanges).field_0x0 = 0;
  *(undefined8 *)&(this->ValueChanges).field_0x8 = 0;
  *(undefined8 *)&(this->ValueChanges).field_0x20 = 0;
  *(undefined4 *)&(this->ValueChanges).field_0x28 = 0;
  *(undefined4 *)&(this->ValueChanges).field_0x2c = 0x80;
  *(undefined4 *)&(this->ValueChanges).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ValueChanges).field_0x34 = 0;
  *(undefined8 *)&(this->ValueChanges).field_0x40 = 0;
  *(undefined4 *)&(this->ValueChanges).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->ValueChanges,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->ValueChanges);
  return this;
}

// FCoreRedirect @ 141fbd030

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FCoreRedirect * __thiscall
FCoreRedirect::FCoreRedirect
          (FCoreRedirect *this,ECoreRedirectFlags param_1,FCoreRedirectObjectName *param_2,
          FCoreRedirectObjectName *param_3)

{
  FName FVar1;
  
  this->RedirectFlags = param_1;
  FVar1 = param_2->OuterName;
  (this->OldName).ObjectName = param_2->ObjectName;
  (this->OldName).OuterName = FVar1;
  (this->OldName).PackageName = param_2->PackageName;
  FVar1 = param_3->OuterName;
  (this->NewName).ObjectName = param_3->ObjectName;
  (this->NewName).OuterName = FVar1;
  (this->NewName).PackageName = param_3->PackageName;
  (this->OverrideClassName).ObjectName.ComparisonIndex = 0;
  (this->OverrideClassName).ObjectName.Number = 0;
  (this->OverrideClassName).OuterName.ComparisonIndex = 0;
  (this->OverrideClassName).OuterName.Number = 0;
  (this->OverrideClassName).PackageName.ComparisonIndex = 0;
  (this->OverrideClassName).PackageName.Number = 0;
  *(undefined8 *)&this->ValueChanges = 0;
  *(undefined8 *)&(this->ValueChanges).field_0x8 = 0;
  *(undefined8 *)&(this->ValueChanges).field_0x20 = 0;
  *(undefined4 *)&(this->ValueChanges).field_0x28 = 0;
  *(undefined4 *)&(this->ValueChanges).field_0x2c = 0x80;
  *(undefined4 *)&(this->ValueChanges).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ValueChanges).field_0x34 = 0;
  *(undefined8 *)&(this->ValueChanges).field_0x40 = 0;
  *(undefined4 *)&(this->ValueChanges).field_0x48 = 0;
  if ((this->NewName).ObjectName == (FName)0x0) {
    (this->NewName).ObjectName = (this->OldName).ObjectName;
  }
  if ((this->NewName).OuterName == (FName)0x0) {
    (this->NewName).OuterName = (this->OldName).OuterName;
  }
  if ((this->NewName).PackageName == (FName)0x0) {
    (this->NewName).PackageName = (this->OldName).PackageName;
  }
  return this;
}

// FCoreRedirect @ 141fbd0d0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FCoreRedirect * __thiscall
FCoreRedirect::FCoreRedirect
          (FCoreRedirect *this,ECoreRedirectFlags param_1,FString *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  
  this->RedirectFlags = param_1;
  FCoreRedirectObjectName::FCoreRedirectObjectName(&this->OldName,param_2);
  FCoreRedirectObjectName::FCoreRedirectObjectName(&this->NewName,param_3);
  (this->OverrideClassName).ObjectName.ComparisonIndex = 0;
  (this->OverrideClassName).ObjectName.Number = 0;
  (this->OverrideClassName).OuterName.ComparisonIndex = 0;
  (this->OverrideClassName).OuterName.Number = 0;
  (this->OverrideClassName).PackageName.ComparisonIndex = 0;
  (this->OverrideClassName).PackageName.Number = 0;
  *(undefined8 *)&this->ValueChanges = 0;
  *(undefined8 *)&(this->ValueChanges).field_0x8 = 0;
  *(undefined8 *)&(this->ValueChanges).field_0x20 = 0;
  *(undefined4 *)&(this->ValueChanges).field_0x28 = 0;
  *(undefined4 *)&(this->ValueChanges).field_0x2c = 0x80;
  *(undefined4 *)&(this->ValueChanges).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ValueChanges).field_0x34 = 0;
  *(undefined8 *)&(this->ValueChanges).field_0x40 = 0;
  *(undefined4 *)&(this->ValueChanges).field_0x48 = 0;
  if ((this->NewName).ObjectName == (FName)0x0) {
    (this->NewName).ObjectName = (this->OldName).ObjectName;
  }
  if ((this->NewName).OuterName == (FName)0x0) {
    (this->NewName).OuterName = (this->OldName).OuterName;
  }
  if ((this->NewName).PackageName == (FName)0x0) {
    (this->NewName).PackageName = (this->OldName).PackageName;
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// operator() @ 141fc2240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __thiscall
`FCoreRedirect::RedirectName'::__l2::<lambda_1>::operator()
          (void *this,FName param_1,FName param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FName FVar4;
  FName *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uchar *puVar9;
  FName in_stack_00000028;
  undefined1 auStack_26b8 [32];
  FName local_2698;
  int iStack_2690;
  undefined4 uStack_268c;
  FName local_2688;
  int iStack_2680;
  undefined4 uStack_267c;
  FName local_2678;
  FName local_2670;
  FName local_2668;
  FName local_2660;
  FName local_2658;
  FName local_2650;
  FName local_2648;
  FName local_2640;
  FName local_2638;
  FName local_2630;
  TStringView<char8_t> local_2628;
  TStringView<char8_t> local_2618;
  TStringView<char8_t> local_2608;
  TStringView<char8_t> local_25f8;
  TStringView<char8_t> local_25e8;
  TStringBuilderBase<char8_t> local_25d8;
  uchar local_25b8 [1035];
  uchar local_21ad [5];
  TStringBuilderBase<char8_t> local_21a8;
  uchar local_2188 [1035];
  uchar local_1d7d [5];
  TStringBuilderBase<char8_t> local_1d78;
  uchar local_1d58 [1035];
  uchar local_194d [5];
  TStringBuilderBase<char8_t> local_1948;
  uchar local_1928 [1035];
  uchar local_151d [5];
  TStringBuilderBase<char8_t> local_1518;
  uchar local_14f8 [1035];
  uchar local_10ed [5];
  TStringBuilderBase<char8_t> local_10e8;
  uchar local_10c8 [1035];
  uchar local_cbd [5];
  TStringBuilderBase<char8_t> local_cb8;
  uchar local_c98 [1035];
  uchar local_88d [5];
  TStringBuilderBase<char8_t> local_888;
  uchar local_868 [1035];
  uchar local_45d [5];
  TStringBuilderBase<char8_t> local_458;
  uchar local_438 [1035];
  uchar local_2d [5];
  ulonglong local_28;
  undefined8 local_20;
  
  local_25d8.Base = local_25b8;
  local_20 = 0x141fc2266;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_26b8;
  if ((param_3 == in_stack_00000028) || (param_2 == (FName)0x0)) {
    *(FName *)param_1 = param_2;
    return param_1;
  }
  if (param_3 == (FName)0x0) {
LAB_141fc28fb:
    *(FName *)param_1 = in_stack_00000028;
    return param_1;
  }
  if (*(char *)this != '\0') {
    local_1518.Base = local_14f8;
    local_1518.CurPos = local_14f8;
    local_1518.bIsDynamic = false;
    local_1518.bIsExternal = false;
    local_1518.End = local_10ed;
    local_2678 = param_2;
    ::FName::AppendString(&local_2678,&local_1518);
    local_10e8.Base = local_10c8;
    local_10e8.CurPos = local_10c8;
    local_10e8.bIsDynamic = false;
    local_10e8.bIsExternal = false;
    local_10e8.End = local_cbd;
    local_2670 = param_3;
    ::FName::AppendString(&local_2670,&local_10e8);
    local_cb8.Base = local_c98;
    local_cb8.CurPos = local_c98;
    local_cb8.End = local_88d;
    local_cb8.bIsDynamic = false;
    local_cb8.bIsExternal = false;
    if (in_stack_00000028 != (FName)0x0) {
      ::FName::AppendString(&local_2668,&local_cb8);
    }
    iStack_2690 = (int)local_10e8.CurPos - (uint)local_10e8.Base;
    local_2698 = (FName)local_10e8.Base;
    local_2628._12_4_ = uStack_268c;
    local_2628.Size = iStack_2690;
    iStack_2680 = (int)local_1518.CurPos - (uint)local_1518.Base;
    local_2688 = (FName)local_1518.Base;
    local_2618._12_4_ = uStack_267c;
    local_2618.Size = iStack_2680;
    local_2618.DataPtr = local_1518.Base;
    local_2628.DataPtr = local_10e8.Base;
    iVar3 = UE::String::FindFirst(&local_2618,&local_2628,IgnoreCase);
    if (*(char *)((longlong)this + 3) == '\0') {
      if (iVar3 == -1) {
        *(FName *)param_1 = param_2;
        goto LAB_141fc23f9;
      }
    }
    else if ((iVar3 == -1) &&
            (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("ReplacePos != INDEX_NONE",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreRedirects.cpp"
                                ,0x590,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
    iStack_2690 = (int)local_cb8.CurPos - (uint)local_cb8.Base;
    local_2698 = (FName)local_cb8.Base;
    local_2608._12_4_ = uStack_268c;
    local_2608.Size = iStack_2690;
    local_2608.DataPtr = local_cb8.Base;
    TStringBuilderBase<char8_t>::ReplaceAt
              (&local_1518,iVar3,(int)local_10e8.CurPos - local_10e8.Base._0_4_,&local_2608);
    pFVar5 = ::FName::FName(&local_2630,(int)local_1518.CurPos - (uint)local_1518.Base,
                            local_1518.Base,FNAME_Add);
    *(FName *)param_1 = *pFVar5;
LAB_141fc23f9:
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_cb8);
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_10e8);
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_1518);
    return param_1;
  }
  if (*(char *)((longlong)this + 1) == '\0') {
    if (*(char *)((longlong)this + 2) == '\0') goto LAB_141fc28fb;
    local_25d8.bIsDynamic = false;
    local_25d8.bIsExternal = false;
    local_25d8.End = local_21ad;
    local_2648 = param_2;
    local_25d8.CurPos = local_25d8.Base;
    ::FName::AppendString(&local_2648,&local_25d8);
    local_1948.Base = local_1928;
    local_1948.CurPos = local_1928;
    local_1948.bIsDynamic = false;
    local_1948.bIsExternal = false;
    local_1948.End = local_151d;
    local_2640 = param_3;
    ::FName::AppendString(&local_2640,&local_1948);
    local_458.Base = local_438;
    local_458.CurPos = local_438;
    local_458.End = local_2d;
    local_458.bIsDynamic = false;
    local_458.bIsExternal = false;
    if (in_stack_00000028 != (FName)0x0) {
      ::FName::AppendString(&local_2638,&local_458);
    }
    iVar3 = (int)local_1948.Base;
    if (*(char *)((longlong)this + 3) == '\0') {
      iVar7 = (int)local_1948.CurPos - (int)local_1948.Base;
      iVar6 = (int)local_25d8.CurPos - (int)local_25d8.Base;
      iVar3 = iVar6;
      if (iVar7 < iVar6) {
        iVar3 = iVar7;
      }
      iVar8 = 0;
      if (0 < iVar3) {
        iVar8 = iVar3;
      }
      if (iVar7 == iVar8) {
        puVar9 = local_1948.Base;
        if ((iVar7 != 0) && (iVar8 != 0)) {
          iVar3 = FGenericPlatformStricmp::Strnicmp
                            (local_1948.Base,local_25d8.Base + ((longlong)iVar6 - (longlong)iVar8),
                             (longlong)iVar8);
          if (iVar3 != 0) goto LAB_141fc281e;
          puVar9 = (uchar *)((ulonglong)local_1948.Base & 0xffffffff);
        }
        iVar3 = (int)puVar9;
        if (iVar7 == iVar8) goto LAB_141fc284e;
      }
LAB_141fc281e:
      *(FName *)param_1 = param_2;
    }
    else {
LAB_141fc284e:
      if ((int)local_25d8.CurPos - (int)local_25d8.Base < (int)local_1948.CurPos - iVar3) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutName.Len() >= Suffix.Len()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreRedirects.cpp"
                           ,0x5b2,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          FVar4 = (FName)(*pcVar1)();
          return FVar4;
        }
        iVar3 = (int)local_1948.Base;
      }
      iStack_2680 = (int)local_458.CurPos - (uint)local_458.Base;
      local_2688 = (FName)local_458.Base;
      local_25e8._12_4_ = uStack_267c;
      local_25e8.Size = iStack_2680;
      local_25e8.DataPtr = local_458.Base;
      TStringBuilderBase<char8_t>::ReplaceAt
                (&local_25d8,
                 (((int)local_25d8.CurPos - (int)local_25d8.Base) - (int)local_1948.CurPos) + iVar3,
                 (int)local_1948.CurPos - iVar3,&local_25e8);
      pFVar5 = ::FName::FName(&local_2698,(int)local_25d8.CurPos - (int)local_25d8.Base,
                              local_25d8.Base,FNAME_Add);
      *(FName *)param_1 = *pFVar5;
    }
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_458);
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_1948);
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_25d8);
    return param_1;
  }
  local_1d78.Base = local_1d58;
  local_1d78.CurPos = local_1d58;
  local_1d78.bIsDynamic = false;
  local_1d78.bIsExternal = false;
  local_1d78.End = local_194d;
  local_2660 = param_2;
  ::FName::AppendString(&local_2660,&local_1d78);
  local_21a8.Base = local_2188;
  local_21a8.CurPos = local_2188;
  local_21a8.bIsDynamic = false;
  local_21a8.bIsExternal = false;
  local_21a8.End = local_1d7d;
  local_2658 = param_3;
  ::FName::AppendString(&local_2658,&local_21a8);
  local_888.Base = local_868;
  local_888.CurPos = local_868;
  local_888.End = local_45d;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  if (in_stack_00000028 != (FName)0x0) {
    ::FName::AppendString(&local_2650,&local_888);
  }
  iVar3 = (int)local_21a8.Base;
  if (*(char *)((longlong)this + 3) == '\0') {
    iVar6 = (int)local_21a8.CurPos - (int)local_21a8.Base;
    iVar3 = (int)local_1d78.CurPos - (int)local_1d78.Base;
    if (iVar6 < (int)local_1d78.CurPos - (int)local_1d78.Base) {
      iVar3 = iVar6;
    }
    iVar7 = 0;
    if (0 < iVar3) {
      iVar7 = iVar3;
    }
    if (iVar6 == iVar7) {
      puVar9 = local_21a8.Base;
      if ((iVar6 != 0) && (iVar7 != 0)) {
        iVar3 = FGenericPlatformStricmp::Strnicmp(local_21a8.Base,local_1d78.Base,(longlong)iVar7);
        if (iVar3 != 0) goto LAB_141fc2605;
        puVar9 = (uchar *)((ulonglong)local_21a8.Base & 0xffffffff);
      }
      iVar3 = (int)puVar9;
      if (iVar6 == iVar7) goto LAB_141fc2638;
    }
LAB_141fc2605:
    *(FName *)param_1 = param_2;
  }
  else {
LAB_141fc2638:
    if ((int)local_1d78.CurPos - (int)local_1d78.Base < (int)local_21a8.CurPos - iVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutName.Len() >= Prefix.Len()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreRedirects.cpp"
                         ,0x5a1,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FName)(*pcVar1)();
        return FVar4;
      }
      iVar3 = (int)local_21a8.Base;
    }
    iStack_2690 = (int)local_888.CurPos - (uint)local_888.Base;
    local_2698 = (FName)local_888.Base;
    local_25f8._12_4_ = uStack_268c;
    local_25f8.Size = iStack_2690;
    local_25f8.DataPtr = local_888.Base;
    TStringBuilderBase<char8_t>::ReplaceAt(&local_1d78,0,(int)local_21a8.CurPos - iVar3,&local_25f8)
    ;
    pFVar5 = ::FName::FName(&local_2688,(int)local_1d78.CurPos - (int)local_1d78.Base,
                            local_1d78.Base,FNAME_Add);
    *(FName *)param_1 = *pFVar5;
  }
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_888);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_21a8);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_1d78);
  return param_1;
}

// AppendHash @ 141fc5900

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __thiscall FCoreRedirect::AppendHash(FCoreRedirect *this,FBlake3 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FIdentityFunctor local_res8 [8];
  TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> local_28;
  
  FBlake3::Update(param_1,this,4);
  FCoreRedirectObjectName::AppendHash(&this->OldName,param_1);
  FCoreRedirectObjectName::AppendHash(&this->NewName,param_1);
  FCoreRedirectObjectName::AppendHash(&this->OverrideClassName,param_1);
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Array((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)&this->ValueChanges,&local_28);
  AlgoImpl::IntroSortInternal<TTuple<FString,FString>,int,FIdentityFunctor,TLess<void>_>
            ((TTuple<FString,FString> *)local_28.AllocatorInstance.Data,local_28.ArrayNum,
             local_res8[0],(TLess<void>)local_res8[0]);
  iVar2 = local_28.ArrayNum;
  pFVar6 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x20;
  pFVar5 = local_28.AllocatorInstance.Data + 0x18;
  while( true ) {
    if (local_28.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 + -0x18 == pFVar6) break;
    iVar3 = 0;
    if (*(int *)(pFVar5 + -0x10) == 0) {
      pwVar4 = L"";
      iVar1 = iVar3;
    }
    else {
      pwVar4 = *(wchar_t **)(pFVar5 + -0x18);
      iVar1 = *(int *)(pFVar5 + -0x10) + -1;
    }
    FBlake3::Update(param_1,pwVar4,(longlong)iVar1 * 2);
    if (*(int *)pFVar5 == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)(pFVar5 + -8);
      iVar3 = *(int *)pFVar5 + -1;
    }
    FBlake3::Update(param_1,pwVar4,(longlong)iVar3 * 2);
    pFVar5 = pFVar5 + 0x20;
  }
  DestructItems<TTuple<FString,FString>,int>
            ((TTuple<FString,FString> *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((TTuple<FString,FString> *)local_28.AllocatorInstance.Data != (TTuple<FString,FString> *)0x0)
  {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// Compare @ 141fc7260

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

int __thiscall FCoreRedirect::Compare(FCoreRedirect *this,FCoreRedirect *param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  TLess<void> local_res8;
  
  if (this->RedirectFlags != param_1->RedirectFlags) {
    iVar1 = 1;
    if (this->RedirectFlags < param_1->RedirectFlags) {
      iVar1 = -1;
    }
    return iVar1;
  }
  pFVar3 = &(param_1->OldName).PackageName;
  pFVar2 = &(this->OldName).PackageName;
  if (*pFVar2 == (param_1->OldName).PackageName) {
    pFVar3 = &(param_1->OldName).OuterName;
    pFVar2 = &(this->OldName).OuterName;
    if ((this->OldName).OuterName != (param_1->OldName).OuterName) goto LAB_141fc72c5;
    if ((this->OldName).ObjectName != (param_1->OldName).ObjectName) {
      pFVar2 = &(this->OldName).ObjectName;
      pFVar3 = &(param_1->OldName).ObjectName;
      goto LAB_141fc72c5;
    }
  }
  else {
LAB_141fc72c5:
    iVar1 = ::FName::Compare(pFVar2,pFVar3);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  pFVar3 = &(param_1->NewName).PackageName;
  pFVar2 = &(this->NewName).PackageName;
  if ((this->NewName).PackageName == (param_1->NewName).PackageName) {
    pFVar3 = &(param_1->NewName).OuterName;
    pFVar2 = &(this->NewName).OuterName;
    if ((this->NewName).OuterName != (param_1->NewName).OuterName) goto LAB_141fc7308;
    if ((this->NewName).ObjectName != (param_1->NewName).ObjectName) {
      pFVar2 = &(this->NewName).ObjectName;
      pFVar3 = &(param_1->NewName).ObjectName;
      goto LAB_141fc7308;
    }
  }
  else {
LAB_141fc7308:
    iVar1 = ::FName::Compare(pFVar2,pFVar3);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  pFVar3 = &(param_1->OverrideClassName).PackageName;
  pFVar2 = &(this->OverrideClassName).PackageName;
  if ((this->OverrideClassName).PackageName == (param_1->OverrideClassName).PackageName) {
    pFVar3 = &(param_1->OverrideClassName).OuterName;
    pFVar2 = &(this->OverrideClassName).OuterName;
    if ((this->OverrideClassName).OuterName == (param_1->OverrideClassName).OuterName) {
      if ((this->OverrideClassName).ObjectName == (param_1->OverrideClassName).ObjectName)
      goto LAB_141fc7350;
      pFVar2 = &(this->OverrideClassName).ObjectName;
      pFVar3 = &(param_1->OverrideClassName).ObjectName;
    }
  }
  iVar1 = ::FName::Compare(pFVar2,pFVar3);
  if (iVar1 != 0) {
    return iVar1;
  }
LAB_141fc7350:
  iVar1 = Algo::
          CompareMap<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>,TLess<void>,TLess<void>_>
                    (&this->ValueChanges,&param_1->ValueChanges,local_res8,local_res8);
  return iVar1;
}

// HasValueChanges @ 141fd41b0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __thiscall FCoreRedirect::HasValueChanges(FCoreRedirect *this)

{
  return 0 < *(int *)&(this->ValueChanges).field_0x8 - *(int *)&(this->ValueChanges).field_0x34;
}

// IdenticalMatchRules @ 141fd4270

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __thiscall FCoreRedirect::IdenticalMatchRules(FCoreRedirect *this,FCoreRedirect *param_1)

{
  if ((((this->RedirectFlags == param_1->RedirectFlags) &&
       ((this->OldName).ObjectName == (param_1->OldName).ObjectName)) &&
      ((this->OldName).OuterName == (param_1->OldName).OuterName)) &&
     ((this->OldName).PackageName == (param_1->OldName).PackageName)) {
    return true;
  }
  return false;
}

// IsSubstringMatch @ 141fd5e00

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __thiscall FCoreRedirect::IsSubstringMatch(FCoreRedirect *this)

{
  return (this->RedirectFlags & Option_MatchSubstring) == Option_MatchSubstring;
}

// Matches @ 141fd7c90

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __thiscall
FCoreRedirect::Matches
          (FCoreRedirect *this,FCoreRedirectObjectName *param_1,ECoreRedirectMatchFlags param_2)

{
  ECoreRedirectFlags EVar1;
  EMatchFlags EVar2;
  bool bVar3;
  EMatchFlags EVar4;
  
  EVar1 = this->RedirectFlags;
  EVar2 = (param_2 & AllowPartialMatch) * 2;
  EVar4 = EVar2 | DisallowPartialLHSMatch;
  if ((param_2 & DisallowPartialLHSMatch) == None) {
    EVar4 = EVar2;
  }
  if ((EVar1 & Option_MatchSubstring) == Option_MatchSubstring) {
    bVar3 = FCoreRedirectObjectName::Matches(&this->OldName,param_1,EVar4 | CheckSubString);
    return bVar3;
  }
  if ((EVar1 >> 0x18 & 1) != 0) {
    bVar3 = FCoreRedirectObjectName::Matches(&this->OldName,param_1,EVar4 | CheckPrefix);
    return bVar3;
  }
  if ((EVar1 >> 0x19 & 1) != 0) {
    EVar4 = EVar4 | CheckSuffix;
  }
  bVar3 = FCoreRedirectObjectName::Matches(&this->OldName,param_1,EVar4);
  return bVar3;
}

// Matches @ 141fd7d00

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __thiscall
FCoreRedirect::Matches
          (FCoreRedirect *this,ECoreRedirectFlags param_1,FCoreRedirectObjectName *param_2,
          ECoreRedirectMatchFlags param_3)

{
  bool bVar1;
  ECoreRedirectMatchFlags EVar2;
  
  if (((this->RedirectFlags & param_1 & Type_AllMask) != None) &&
     (((this->RedirectFlags ^ param_1) & Category_AllMask) == None)) {
    EVar2 = param_3 | DisallowPartialLHSMatch;
    if ((param_1 & Type_Asset) == None) {
      EVar2 = param_3;
    }
    bVar1 = Matches(this,param_2,EVar2);
    return bVar1;
  }
  return false;
}

// NormalizeNewName @ 141fd8930

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __thiscall FCoreRedirect::NormalizeNewName(FCoreRedirect *this)

{
  if ((this->NewName).ObjectName == (FName)0x0) {
    (this->NewName).ObjectName = (this->OldName).ObjectName;
  }
  if ((this->NewName).OuterName == (FName)0x0) {
    (this->NewName).OuterName = (this->OldName).OuterName;
  }
  if ((this->NewName).PackageName == (FName)0x0) {
    (this->NewName).PackageName = (this->OldName).PackageName;
  }
  return;
}

// ParseValueChanges @ 141fd8ca0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

wchar_t * __thiscall FCoreRedirect::ParseValueChanges(FCoreRedirect *this,wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = param_1 + 1;
  if (*param_1 == L'(') {
    SkipWhitespace(&local_res10);
    if (*local_res10 == L')') {
      return local_res10 + 1;
    }
    SkipWhitespace(&local_res10);
    if (*local_res10 == L'(') {
      pwVar2 = (wchar_t *)0x0;
      do {
        local_res10 = local_res10 + 1;
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.Data.ArrayNum = 0;
        local_18.Data.ArrayMax = 0;
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
        local_res10 = FPropertyHelpers::ReadToken(local_res10,&local_18,true);
        pwVar3 = pwVar2;
        if (local_res10 == (wchar_t *)0x0) {
LAB_141fd8e1e:
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          return pwVar3;
        }
        SkipWhitespace(&local_res10);
        wVar1 = *local_res10;
        local_res10 = local_res10 + 1;
        if (wVar1 != L',') goto LAB_141fd8e1e;
        SkipWhitespace(&local_res10);
        local_res10 = FPropertyHelpers::ReadToken(local_res10,&local_28,true);
        if (local_res10 == (wchar_t *)0x0) goto LAB_141fd8e1e;
        SkipWhitespace(&local_res10);
        wVar1 = *local_res10;
        local_res10 = local_res10 + 1;
        pwVar3 = (wchar_t *)0x0;
        if (wVar1 != L')') goto LAB_141fd8e1e;
        TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
        ::Emplace<FString_const_&,FString_const_&>
                  ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                    *)&this->ValueChanges,&local_18,&local_28);
        wVar1 = *local_res10;
        local_res10 = local_res10 + 1;
        pwVar3 = local_res10;
        if ((wVar1 == L')') || (pwVar3 = (wchar_t *)0x0, wVar1 != L',')) goto LAB_141fd8e1e;
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        SkipWhitespace(&local_res10);
      } while (*local_res10 == L'(');
    }
  }
  return (wchar_t *)0x0;
}

// RedirectName @ 141fdb270

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FCoreRedirectObjectName * __thiscall
FCoreRedirect::RedirectName
          (FCoreRedirect *this,FCoreRedirectObjectName *__return_storage_ptr__,
          FCoreRedirectObjectName *param_1,bool param_2)

{
  FName FVar1;
  byte bVar2;
  FName FVar3;
  FName FVar4;
  undefined1 local_res8 [8];
  undefined1 local_res20;
  byte local_res21;
  byte local_res22;
  undefined1 local_res23;
  
  FVar1 = param_1->OuterName;
  FVar4 = param_1->PackageName;
  FVar3 = param_1->ObjectName;
  local_res20 = (this->RedirectFlags & Option_MatchSubstring) == Option_MatchSubstring;
  bVar2 = (byte)(this->RedirectFlags >> 0x18);
  local_res21 = bVar2 & 1;
  local_res22 = bVar2 >> 1 & 1;
  __return_storage_ptr__->ObjectName = param_1->ObjectName;
  __return_storage_ptr__->OuterName = FVar1;
  FVar1 = (this->OldName).ObjectName;
  __return_storage_ptr__->PackageName = FVar4;
  local_res23 = param_2;
  FVar3 = `FCoreRedirect::RedirectName'::__l2::<lambda_1>::operator()
                    (&local_res20,(FName)local_res8,FVar3,FVar1);
  FVar4 = (this->OldName).OuterName;
  __return_storage_ptr__->ObjectName = *(FName *)FVar3;
  FVar3 = (this->NewName).OuterName;
  if (FVar4 == FVar3) {
    if ((((FVar4 != (FName)0x0) || ((this->NewName).PackageName == (FName)0x0)) ||
        ((this->NewName).ObjectName == (FName)0x0)) ||
       (__return_storage_ptr__->OuterName == (FName)0x0)) goto LAB_141fdb336;
  }
  else {
    FVar3 = `FCoreRedirect::RedirectName'::__l2::<lambda_1>::operator()
                      (&local_res20,(FName)local_res8,param_1->OuterName,FVar4);
    FVar3 = *(FName *)FVar3;
  }
  __return_storage_ptr__->OuterName = FVar3;
LAB_141fdb336:
  FVar4 = `FCoreRedirect::RedirectName'::__l2::<lambda_1>::operator()
                    (&local_res20,(FName)local_res8,param_1->PackageName,(this->OldName).PackageName
                    );
  __return_storage_ptr__->PackageName = *(FName *)FVar4;
  return __return_storage_ptr__;
}

// RedirectName @ 141fdb380

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FCoreRedirectObjectName * __thiscall
FCoreRedirect::RedirectName
          (FCoreRedirect *this,FCoreRedirectObjectName *__return_storage_ptr__,
          FCoreRedirectObjectName *param_1)

{
  RedirectName(this,__return_storage_ptr__,param_1,false);
  return __return_storage_ptr__;
}

