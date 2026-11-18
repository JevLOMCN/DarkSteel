// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 5

// FFileInPakFileHistoryHelper @ 148d9c040

FFileInPakFileHistoryHelper * __thiscall
FFileInPakFileHistoryHelper::FFileInPakFileHistoryHelper(FFileInPakFileHistoryHelper *this)

{
  TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
  *this_00;
  
  *(undefined8 *)&(this->History).Elements = 0;
  *(undefined8 *)&(this->History).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->History).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->History).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->History).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->History).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->History).Elements.field_0x34 = 0;
  (this->History).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->History).HashSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->HistoryLock,4000);
  this_00 = FCoreDelegates::GetOnFileOpenedForReadFromPakFile();
  TMulticastDelegateRegistration<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
  ::AddRaw<FFileInPakFileHistoryHelper>
            ((TMulticastDelegateRegistration<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
              *)this_00,(FFileInPakFileHistoryHelper *)&stack0x00000008,(pmf_ec0223db)this);
  return this;
}

// operator() @ 148d9d220

bool __thiscall
`FFileInPakFileHistoryHelper::DumpHistory'::__l2::<lambda_1>::operator()
          (void *this,FFileInPakFileHistory *param_1,FFileInPakFileHistory *param_2)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  bool bVar5;
  
  iVar2 = (param_1->PakFileName).Data.ArrayNum;
  iVar1 = (param_2->PakFileName).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->PakFileName).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_2->PakFileName).Data.AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_148d9d254;
    }
  }
  else {
    bVar5 = iVar2 + iVar1 == 1;
LAB_148d9d254:
    if (!bVar5) {
      pwVar3 = L"";
      if ((param_2->PakFileName).Data.ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(param_2->PakFileName).Data.AllocatorInstance.Data;
      }
      if ((param_1->PakFileName).Data.ArrayNum != 0) {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->PakFileName).Data.AllocatorInstance.Data,pwVar4);
        return SUB41((uint)iVar2 >> 0x1f,0);
      }
      goto LAB_148d9d2ac;
    }
  }
  pwVar3 = L"";
  if ((param_2->FileName).Data.ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_2->FileName).Data.AllocatorInstance.Data;
  }
  if ((param_1->FileName).Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)(param_1->FileName).Data.AllocatorInstance.Data;
  }
LAB_148d9d2ac:
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
  return SUB41((uint)iVar2 >> 0x1f,0);
}

// operator() @ 148d9d780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FFileInPakFileHistoryHelper::DumpHistory'::__l2::<lambda_2>::operator()
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
  if (3 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:___cdecl_`public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)___ptr64'::`2'::<lambda_2>::operator()(FString&&___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  ::FString::ConcatFC(&local_d8,param_1,L"\r\n");
  local_48.Data = (FScriptContainerElement *)0x0;
  _Str.Data = (FScriptContainerElement *)L"";
  if ((local_d8.Data.ArrayNum != 0) &&
     (_Str.Data = local_d8.Data.AllocatorInstance.Data,
     local_d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)) {
    local_40 = (FScriptContainerElement *)0x0;
    local_38 = 0;
    goto LAB_148d9d8b4;
  }
  sVar2 = wcslen((wchar_t *)_Str.Data);
  local_38 = UE::Core::Private::GetConvertedLength((uchar *)0x0,(wchar_t *)_Str.Data,(int)sVar2);
  uVar1 = local_38 + 1;
  uVar3 = uVar1;
  if (uVar1 < 0x81) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      uVar3 = 0;
      goto LAB_148d9d868;
    }
  }
  else {
LAB_148d9d868:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar3,1);
  }
  local_40 = local_c8;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    local_40 = local_48.Data;
  }
  UE::Core::Private::Convert((uchar *)local_40,uVar1,(wchar_t *)_Str.Data,(int)sVar2 + 1);
LAB_148d9d8b4:
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  (**(code **)(**(longlong **)this + 0x188))(*(longlong **)this,local_40,(longlong)local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// DumpHistory @ 148da15b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFileInPakFileHistoryHelper::DumpHistory(FFileInPakFileHistoryHelper *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  undefined1 *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar3;
  code *pcVar4;
  longlong *plVar5;
  FFileInPakFileHistoryHelper *pFVar6;
  bool bVar7;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar8;
  IFileManager *pIVar9;
  size_t sVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  wchar_t *_Str;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 auStack_1f8 [32];
  FIdentityFunctor local_1d8;
  undefined1 local_1d7 [7];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1d0;
  longlong *local_1c0;
  FString local_1b8;
  int local_1a8;
  FIdentityFunctor *local_1a0;
  longlong *local_198;
  FString local_190;
  FFileInPakFileHistoryHelper *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  FFileInPakFileHistoryHelper *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  FString local_120;
  FString local_110 [2];
  undefined4 local_e4;
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lpCriticalSection = &this->HistoryLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_1a0 = &local_1d8;
  if (0 < *(int *)&(this->History).Elements.field_0x8 - *(int *)&(this->History).Elements.field_0x34
     ) {
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar13 = *(int *)&(this->History).Elements.field_0x8 -
             *(int *)&(this->History).Elements.field_0x34;
    pTVar3 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> **)&(this->History).Elements;
    if ((iVar13 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FFileInPakFileHistoryHelper::FFileInPakFileHistory,DefaultKeyFuncs<FFileInPakFileHistoryHelper::FFileInPakFileHistory,0>,FDefaultSetAllocator>::FElementCompareClass<_FFileInPakFileHistoryHelper::DumpHistory_::__l2::<lambda_1>_>_>_>
              (pTVar3,iVar13,local_1d8,
               (FElementCompareClass<_public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)_::_2_::<lambda_1>_>
                *)&local_1a0);
  }
  TSet<FFileInPakFileHistoryHelper::FFileInPakFileHistory,DefaultKeyFuncs<FFileInPakFileHistoryHelper::FFileInPakFileHistory,0>,FDefaultSetAllocator>
  ::Rehash(&this->History);
  pTVar8 = &FPaths::ProjectLogDir(local_110)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_1d0,pTVar8,0x1d - (uint)(pTVar8->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_1d0,L"FilesLoadedFromPakFiles.csv",0x1b);
  if (local_110[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110[0].Data.AllocatorInstance.Data);
  }
  pIVar9 = IFileManager::Get();
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_1d0.ArrayNum != 0) {
    FVar12.Data = local_1d0.AllocatorInstance.Data;
  }
  local_1c0 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar12.Data);
  local_198 = local_1c0;
  if (((3 < (byte)LogInit._0_1_) &&
      (UE::Logging::Private::BasicLog<4>
                 (&`public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)___ptr64'::
                   __l3::LOG_Static,(FLogCategoryBase *)&LogInit), 3 < (byte)LogInit._0_1_)) &&
     (UE::Logging::Private::BasicLog<4>
                (&`public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)___ptr64'::
                  __l21::LOG_Static,(FLogCategoryBase *)&LogInit), 3 < (byte)LogInit._0_1_)) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)___ptr64'::__l39
                ::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  ::FString::PrintfImpl(&local_120,L"PakFile, File");
  `FFileInPakFileHistoryHelper::DumpHistory'::__l2::<lambda_2>::operator()(&local_1c0,&local_120);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  iVar13 = *(int *)&(this->History).Elements.field_0x28;
  puVar2 = &(this->History).Elements.field_0x10;
  iStack_178 = 0;
  local_160 = 0;
  uStack_174 = 1;
  iStack_164 = 0;
  if (iVar13 != 0) {
    puVar18 = *(uint **)&(this->History).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar2;
    }
    uVar15 = *puVar18;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_178;
      local_160 = local_160 + 0x20;
      iStack_178 = iStack_178 + 1;
      iStack_164 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_148da180e;
      uVar15 = puVar18[lVar11 + 1];
    }
    uStack_174 = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_174 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1a8 = (int)lVar11;
    iStack_164 = local_160 + -1 + local_1a8;
    if (iVar13 < iStack_164) {
      iStack_164 = iVar13;
    }
  }
LAB_148da180e:
  uVar15 = *(uint *)&(this->History).Elements.field_0x28;
  uStack_15c = local_e4;
  uVar19 = uVar15 & 0xffffffe0;
  iStack_158 = *(int *)&(this->History).Elements.field_0x8 -
               *(int *)&(this->History).Elements.field_0x34;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar15 >> 5;
  TStack_148._28_4_ = local_e4;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = this;
  local_170 = puVar2;
  local_150 = this;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar15 < 0) || (iVar13 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar5 = local_1c0;
  uVar16 = *(uint *)&(this->History).Elements.field_0x28;
  if (uVar15 != uVar16) {
    puVar17 = *(undefined1 **)&(this->History).Elements.field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_148da1910;
      uVar15 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar15 = (int)lVar11 + -1 + uVar19;
    if ((int)uVar16 < (int)uVar15) {
      uVar15 = uVar16;
    }
  }
LAB_148da1910:
  do {
    pFVar6 = local_150;
    if (*(int *)&(local_150->History).Elements.field_0x8 -
        *(int *)&(local_150->History).Elements.field_0x34 != (int)uStack_128) {
      `TSparseArray<TSparseSetElement<FFileInPakFileHistoryHelper::FFileInPakFileHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d7);
    }
    if (((TStack_148.CurrentBitIndex == uVar15) &&
        (TStack_148.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->History).Elements.field_0x10)) &&
       (pFVar6 == this)) {
      if ((3 < (byte)LogInit._0_1_) &&
         (UE::Logging::Private::BasicLog<4>
                    (&`public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)___ptr64'
                      ::__l61::LOG_Static,(FLogCategoryBase *)&LogInit), 3 < (byte)LogInit._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)___ptr64'::
                    __l79::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      if (local_198 != (longlong *)0x0) {
        (**(code **)*local_198)(local_198,1);
      }
      if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.AllocatorInstance.Data);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    ::FString::PrintfImpl(&local_1b8,L"%s, %s");
    if (3 < (byte)LogInit._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:___cdecl_`public:_void___cdecl_FFileInPakFileHistoryHelper::DumpHistory(void)___ptr64'::`2'::<lambda_2>::operator()(FString&&___ptr64)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    ::FString::ConcatFC(&local_190,&local_1b8,L"\r\n");
    if (local_190.Data.ArrayNum == 0) {
      _Str = L"";
LAB_148da1a04:
      local_58.Data = (FScriptContainerElement *)0x0;
      sVar10 = wcslen(_Str);
      local_48 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar10);
      uVar19 = local_48 + 1;
      uVar16 = uVar19;
      if (uVar19 < 0x81) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar16 = 0;
          goto LAB_148da1a43;
        }
      }
      else {
LAB_148da1a43:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar16,1);
      }
      local_50 = local_d8;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        local_50 = local_58.Data;
      }
      UE::Core::Private::Convert((uchar *)local_50,uVar19,_Str,(int)sVar10 + 1);
    }
    else {
      local_58.Data = (FScriptContainerElement *)0x0;
      _Str = (wchar_t *)local_190.Data.AllocatorInstance.Data;
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_148da1a04;
      local_50 = (FScriptContainerElement *)0x0;
      local_48 = 0;
    }
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    (**(code **)(*plVar5 + 0x188))(plVar5,local_50,(longlong)local_48);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// OnFileOpenedForRead @ 148da8370

void __thiscall
FFileInPakFileHistoryHelper::OnFileOpenedForRead
          (FFileInPakFileHistoryHelper *this,wchar_t *param_1,wchar_t *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FString local_28;
  FString local_18;
  
  lpCriticalSection = &this->HistoryLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::FString(&local_28,param_1);
    ::FString::FString(&local_18,param_2);
    TSet<FFileInPakFileHistoryHelper::FFileInPakFileHistory,DefaultKeyFuncs<FFileInPakFileHistoryHelper::FFileInPakFileHistory,0>,FDefaultSetAllocator>
    ::Emplace<FFileInPakFileHistoryHelper::FFileInPakFileHistory>
              (&this->History,(FFileInPakFileHistory *)&stack0x00000008,(bool *)&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
                    /* WARNING: Could not recover jumptable at 0x000148da8403. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

