// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FConfigHistoryHelper @ 141855100

FConfigHistoryHelper * __thiscall
UE::ConfigUtilities::FConfigHistoryHelper::FConfigHistoryHelper(FConfigHistoryHelper *this)

{
  TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
  *this_00;
  TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
  *pTVar1;
  
  *(undefined8 *)&(this->History).Elements = 0;
  *(undefined8 *)&(this->History).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->History).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->History).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->History).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->History).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->History).Elements.field_0x34 = 0;
  (this->History).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->History).HashSize = 0;
  this_00 = FCoreDelegates::TSOnConfigValueRead();
  TMulticastDelegateRegistration<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
  ::AddRaw<UE::ConfigUtilities::FConfigHistoryHelper>
            ((TMulticastDelegateRegistration<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
              *)this_00,(FConfigHistoryHelper *)&stack0x00000008,(pmf_f999411f)this);
  pTVar1 = FCoreDelegates::TSOnConfigSectionRead();
  TMulticastDelegateRegistration<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
  ::AddRaw<UE::ConfigUtilities::FConfigHistoryHelper>
            ((TMulticastDelegateRegistration<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
              *)pTVar1,(FConfigHistoryHelper *)&stack0x00000008,(pmf_32b267fa)this);
  pTVar1 = FCoreDelegates::TSOnConfigSectionNameRead();
  TMulticastDelegateRegistration<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
  ::AddRaw<UE::ConfigUtilities::FConfigHistoryHelper>
            ((TMulticastDelegateRegistration<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
              *)pTVar1,(FConfigHistoryHelper *)&stack0x00000008,(pmf_32b267fa)this);
  return this;
}

// operator() @ 14185a190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::ConfigUtilities::FConfigHistoryHelper::DumpHistory'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  uint uVar1;
  size_t sVar2;
  ForAnyElementType _Str;
  uint uVar3;
  undefined1 auStack_f8 [32];
  FString local_d8;
  FScriptContainerElement local_c8 [128];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (3 < (byte)LogConfig._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:___cdecl_`public:_void___cdecl_UE::ConfigUtilities::FConfigHistoryHelper::DumpHistory(void)___ptr64'::`2'::<lambda_1>::operator()(FString&&___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogConfig);
  }
  ::FString::ConcatFC(&local_d8,param_1,L"\r\n");
  local_48.Data = (FScriptContainerElement *)0x0;
  _Str.Data = (FScriptContainerElement *)L"";
  if ((local_d8.Data.ArrayNum != 0) &&
     (_Str.Data = local_d8.Data.AllocatorInstance.Data,
     local_d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)) {
    local_40 = (FScriptContainerElement *)0x0;
    local_38 = 0;
    goto LAB_14185a2c4;
  }
  sVar2 = wcslen((wchar_t *)_Str.Data);
  local_38 = UE::Core::Private::GetConvertedLength((uchar *)0x0,(wchar_t *)_Str.Data,(int)sVar2);
  uVar1 = local_38 + 1;
  uVar3 = uVar1;
  if (uVar1 < 0x81) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      uVar3 = 0;
      goto LAB_14185a278;
    }
  }
  else {
LAB_14185a278:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar3,1);
  }
  local_40 = local_c8;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    local_40 = local_48.Data;
  }
  UE::Core::Private::Convert((uchar *)local_40,uVar1,(wchar_t *)_Str.Data,(int)sVar2 + 1);
LAB_14185a2c4:
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  (**(code **)(**(longlong **)this + 0x188))(*(longlong **)this,local_40,(longlong)local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// DumpHistory @ 14186b690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::ConfigUtilities::FConfigHistoryHelper::DumpHistory(FConfigHistoryHelper *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  FConfigHistoryHelper *pFVar6;
  bool bVar7;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar8;
  IFileManager *pIVar9;
  size_t sVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  wchar_t *pwVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 auStack_298 [32];
  wchar_t *local_278;
  wchar_t *local_270;
  undefined1 local_268 [8];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_260;
  longlong *local_250;
  FString local_248;
  FString local_238;
  FConfigHistoryHelper *local_228;
  int iStack_220;
  uint uStack_21c;
  undefined1 *local_218;
  undefined4 uStack_210;
  int iStack_20c;
  int local_208;
  int iStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  int local_1f8;
  longlong *local_1f0;
  FString local_1e8;
  FString local_1d8;
  FConfigHistoryHelper *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  FString local_198;
  FString local_188;
  FScriptContainerElement local_178 [128];
  ForAnyElementType local_f8;
  FScriptContainerElement *local_f0;
  int local_e8;
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_298;
  pTVar8 = &FPaths::ProjectLogDir(&local_188)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_260,pTVar8,0x13 - (uint)(pTVar8->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_260,L"ConfigHistory.csv",0x11);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  pIVar9 = IFileManager::Get();
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_260.ArrayNum != 0) {
    FVar12.Data = local_260.AllocatorInstance.Data;
  }
  local_250 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar12.Data,1);
  local_1f0 = local_250;
  if (((3 < (byte)LogConfig._0_1_) &&
      (Logging::Private::BasicLog<4>
                 (&`public:_void___cdecl_UE::ConfigUtilities::FConfigHistoryHelper::DumpHistory(void)___ptr64'
                   ::__l3::LOG_Static,(FLogCategoryBase *)&LogConfig), 3 < (byte)LogConfig._0_1_))
     && (Logging::Private::BasicLog<4>
                   (&`public:_void___cdecl_UE::ConfigUtilities::FConfigHistoryHelper::DumpHistory(void)___ptr64'
                     ::__l21::LOG_Static,(FLogCategoryBase *)&LogConfig), 3 < (byte)LogConfig._0_1_)
     ) {
    Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_UE::ConfigUtilities::FConfigHistoryHelper::DumpHistory(void)___ptr64'
                ::__l39::LOG_Static,(FLogCategoryBase *)&LogConfig);
  }
  ::FString::PrintfImpl(&local_198,L"Type, File, Section, Key");
  `UE::ConfigUtilities::FConfigHistoryHelper::DumpHistory'::__l2::<lambda_1>::operator()
            (&local_250,&local_198);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  iVar3 = *(int *)&(this->History).Elements.field_0x28;
  puVar2 = &(this->History).Elements.field_0x10;
  uStack_21c = 1;
  iStack_220 = 0;
  local_208 = 0;
  iStack_20c = iStack_220;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->History).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar16 = *puVar20;
    local_208 = 0;
    iStack_220 = 0;
    while (uVar16 == 0) {
      lVar11 = (longlong)iStack_220;
      local_208 = local_208 + 0x20;
      iStack_220 = iStack_220 + 1;
      iStack_20c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_220) goto LAB_14186b86d;
      uVar16 = puVar20[lVar11 + 1];
    }
    uStack_21c = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_21c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1f8 = (int)lVar11;
    iStack_20c = local_208 + -1 + local_1f8;
    if (iVar3 < iStack_20c) {
      iStack_20c = iVar3;
    }
  }
LAB_14186b86d:
  uVar16 = *(uint *)&(this->History).Elements.field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  iStack_200 = *(int *)&(this->History).Elements.field_0x8 -
               *(int *)&(this->History).Elements.field_0x34;
  uStack_210 = 0xffffffff;
  TStack_1c0._padding_ = CONCAT44(uStack_21c,iStack_220);
  TStack_1c0.CurrentBitIndex = iStack_20c;
  TStack_1c0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_1c0._28_4_ = iStack_20c;
  TStack_1c0.BaseBitIndex = local_208;
  uStack_1a0 = CONCAT44(uStack_1fc,iStack_200);
  local_228 = this;
  local_218 = puVar2;
  iStack_204 = iStack_20c;
  local_1c8 = this;
  TStack_1c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar5 = local_250;
  uVar18 = *(uint *)&(this->History).Elements.field_0x28;
  if (uVar16 != uVar18) {
    puVar19 = *(undefined1 **)&(this->History).Elements.field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar2;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14186b96e;
      uVar16 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar16 = (int)lVar11 + -1 + uVar15;
    if ((int)uVar18 < (int)uVar16) {
      uVar16 = uVar18;
    }
  }
LAB_14186b96e:
  do {
    pFVar6 = local_1c8;
    if (*(int *)&(local_1c8->History).Elements.field_0x8 -
        *(int *)&(local_1c8->History).Elements.field_0x34 != (int)uStack_1a0) {
      `TSparseArray<TSparseSetElement<UE::ConfigUtilities::FConfigHistoryHelper::FConfigHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_268);
    }
    if (((TStack_1c0.CurrentBitIndex == uVar16) &&
        (TStack_1c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pFVar6 == this)) {
      if ((3 < (byte)LogConfig._0_1_) &&
         (Logging::Private::BasicLog<4>
                    (&`public:_void___cdecl_UE::ConfigUtilities::FConfigHistoryHelper::DumpHistory(void)___ptr64'
                      ::__l63::LOG_Static,(FLogCategoryBase *)&LogConfig), 3 < (byte)LogConfig._0_1_
         )) {
        Logging::Private::BasicLog<4>
                  (&`public:_void___cdecl_UE::ConfigUtilities::FConfigHistoryHelper::DumpHistory(void)___ptr64'
                    ::__l81::LOG_Static,(FLogCategoryBase *)&LogConfig);
      }
      if (local_1f0 != (longlong *)0x0) {
        (**(code **)*local_1f0)(local_1f0,1);
      }
      if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.AllocatorInstance.Data);
      }
      return;
    }
    piVar13 = (int *)((longlong)TStack_1c0.CurrentBitIndex * 0x40 +
                     *(longlong *)&(pFVar6->History).Elements);
    iVar3 = *piVar13;
    if (iVar3 == 0) {
      if (piVar13[0xc] == 0) {
        local_270 = L"";
      }
      else {
        local_270 = *(wchar_t **)(piVar13 + 10);
      }
      if (piVar13[8] == 0) {
        local_278 = L"";
      }
      else {
        local_278 = *(wchar_t **)(piVar13 + 6);
      }
      ::FString::PrintfImpl(&local_238,L"%s, %s, %s, %s");
      if (3 < (byte)LogConfig._0_1_) {
        Logging::Private::BasicLog<4>
                  (&`public:___cdecl_`public:_void___cdecl_UE::ConfigUtilities::FConfigHistoryHelper::DumpHistory(void)___ptr64'::`2'::<lambda_1>::operator()(FString&&___ptr64)const___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogConfig);
      }
      ::FString::ConcatFC(&local_1d8,&local_238,L"\r\n");
      local_58.Data = (FScriptContainerElement *)0x0;
      if (local_1d8.Data.ArrayNum == 0) {
        pwVar17 = L"";
LAB_14186bc16:
        sVar10 = wcslen(pwVar17);
        local_48 = Core::Private::GetConvertedLength((uchar *)0x0,pwVar17,(int)sVar10);
        uVar15 = local_48 + 1;
        uVar18 = uVar15;
        if (uVar15 < 0x81) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar18 = 0;
            goto LAB_14186bc53;
          }
        }
        else {
LAB_14186bc53:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar18,1)
          ;
        }
        local_50 = local_d8;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          local_50 = local_58.Data;
        }
        Core::Private::Convert((uchar *)local_50,uVar15,pwVar17,(int)sVar10 + 1);
      }
      else {
        pwVar17 = (wchar_t *)local_1d8.Data.AllocatorInstance.Data;
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14186bc16;
        local_50 = (FScriptContainerElement *)0x0;
        local_48 = 0;
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      (**(code **)(*plVar5 + 0x188))(plVar5,local_50,(longlong)local_48);
      FVar12.Data = local_238.Data.AllocatorInstance.Data;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
        FVar12.Data = local_238.Data.AllocatorInstance.Data;
      }
LAB_14186bcd5:
      if (FVar12.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar12.Data);
      }
    }
    else if ((iVar3 == 1) || (iVar3 == 2)) {
      if (piVar13[8] == 0) {
        local_278 = L"";
      }
      else {
        local_278 = *(wchar_t **)(piVar13 + 6);
      }
      ::FString::PrintfImpl(&local_248,L"%s, %s, %s, None");
      if (3 < (byte)LogConfig._0_1_) {
        Logging::Private::BasicLog<4>
                  (&`public:___cdecl_`public:_void___cdecl_UE::ConfigUtilities::FConfigHistoryHelper::DumpHistory(void)___ptr64'::`2'::<lambda_1>::operator()(FString&&___ptr64)const___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogConfig);
      }
      ::FString::ConcatFC(&local_1e8,&local_248,L"\r\n");
      local_f8.Data = (FScriptContainerElement *)0x0;
      if (local_1e8.Data.ArrayNum == 0) {
        pwVar17 = L"";
LAB_14186ba87:
        sVar10 = wcslen(pwVar17);
        local_e8 = Core::Private::GetConvertedLength((uchar *)0x0,pwVar17,(int)sVar10);
        uVar15 = local_e8 + 1;
        uVar18 = uVar15;
        if (uVar15 < 0x81) {
          if (local_f8.Data != (FScriptContainerElement *)0x0) {
            uVar18 = 0;
            goto LAB_14186bac4;
          }
        }
        else {
LAB_14186bac4:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,uVar18,1)
          ;
        }
        local_f0 = local_178;
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          local_f0 = local_f8.Data;
        }
        Core::Private::Convert((uchar *)local_f0,uVar15,pwVar17,(int)sVar10 + 1);
      }
      else {
        pwVar17 = (wchar_t *)local_1e8.Data.AllocatorInstance.Data;
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14186ba87;
        local_f0 = (FScriptContainerElement *)0x0;
        local_e8 = 0;
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      (**(code **)(*plVar5 + 0x188))(plVar5,local_f0,(longlong)local_e8);
      FVar12.Data = local_248.Data.AllocatorInstance.Data;
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
        FVar12.Data = local_248.Data.AllocatorInstance.Data;
      }
      goto LAB_14186bcd5;
    }
    TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
  } while( true );
}

// OnConfigSectionNameRead @ 14187f6d0

void __thiscall
UE::ConfigUtilities::FConfigHistoryHelper::OnConfigSectionNameRead
          (FConfigHistoryHelper *this,wchar_t *param_1,wchar_t *param_2)

{
  bool local_48 [8];
  FString local_40;
  FString local_30;
  void *local_20;
  undefined8 uStack_18;
  
  local_48[0] = true;
  local_48[1] = false;
  local_48[2] = false;
  local_48[3] = false;
  ::FString::FString(&local_40,param_1);
  ::FString::FString(&local_30,param_2);
  local_20 = (void *)0x0;
  uStack_18 = 0;
  TSet<UE::ConfigUtilities::FConfigHistoryHelper::FConfigHistory,DefaultKeyFuncs<UE::ConfigUtilities::FConfigHistoryHelper::FConfigHistory,0>,FDefaultSetAllocator>
  ::Emplace<UE::ConfigUtilities::FConfigHistoryHelper::FConfigHistory>
            (&this->History,(FConfigHistory *)&stack0x00000008,local_48);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return;
}

// OnConfigSectionRead @ 14187f770

void __thiscall
UE::ConfigUtilities::FConfigHistoryHelper::OnConfigSectionRead
          (FConfigHistoryHelper *this,wchar_t *param_1,wchar_t *param_2)

{
  bool local_48 [8];
  FString local_40;
  FString local_30;
  void *local_20;
  undefined8 uStack_18;
  
  local_48[0] = true;
  local_48[1] = false;
  local_48[2] = false;
  local_48[3] = false;
  ::FString::FString(&local_40,param_1);
  ::FString::FString(&local_30,param_2);
  local_20 = (void *)0x0;
  uStack_18 = 0;
  TSet<UE::ConfigUtilities::FConfigHistoryHelper::FConfigHistory,DefaultKeyFuncs<UE::ConfigUtilities::FConfigHistoryHelper::FConfigHistory,0>,FDefaultSetAllocator>
  ::Emplace<UE::ConfigUtilities::FConfigHistoryHelper::FConfigHistory>
            (&this->History,(FConfigHistory *)&stack0x00000008,local_48);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return;
}

// OnConfigValueRead @ 14187f9c0

void __thiscall
UE::ConfigUtilities::FConfigHistoryHelper::OnConfigValueRead
          (FConfigHistoryHelper *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  bool local_48 [8];
  FString local_40;
  FString local_30;
  FString local_20;
  
  local_48[0] = false;
  local_48[1] = false;
  local_48[2] = false;
  local_48[3] = false;
  ::FString::FString(&local_40,param_1);
  ::FString::FString(&local_30,param_2);
  ::FString::FString(&local_20,param_3);
  TSet<UE::ConfigUtilities::FConfigHistoryHelper::FConfigHistory,DefaultKeyFuncs<UE::ConfigUtilities::FConfigHistoryHelper::FConfigHistory,0>,FDefaultSetAllocator>
  ::Emplace<UE::ConfigUtilities::FConfigHistoryHelper::FConfigHistory>
            (&this->History,(FConfigHistory *)&stack0x00000008,local_48);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return;
}

