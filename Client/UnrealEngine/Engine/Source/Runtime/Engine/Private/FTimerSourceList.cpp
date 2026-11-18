// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// DumpEntries @ 1488bd970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTimerSourceList::DumpEntries(FTimerSourceList *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FWorldContext *pFVar5;
  code *pcVar6;
  FTimerSourceList *pFVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  FValueComparisonClass<_public:_void___cdecl_FTimerSourceList::DumpEntries(void)_::_2_::<lambda_1>_>
  local_res20;
  FString local_b8;
  FString local_a8;
  FTimerSourceList *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FTimerSourceList *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar10 = 0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  if (((this->OwningGameInstance != (UGameInstance *)0x0) &&
      (pFVar5 = this->OwningGameInstance->WorldContext, pFVar5 != (FWorldContext *)0x0)) &&
     (pFVar5->RunAsDedicated != false)) {
    ::FString::operator=(&local_b8,L" (dedicated server)");
  }
  if ((4 < (byte)LogEngine._0_1_) &&
     (UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FTimerSourceList::DumpEntries(void)___ptr64'::__l12::
                  LOG_Static,(FLogCategoryBase *)&LogEngine), 4 < (byte)LogEngine._0_1_)) {
    if (this->OwningGameInstance == (UGameInstance *)0x0) {
      ::FString::FString(&local_a8,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)this->OwningGameInstance,&local_a8,(UObject *)0x0);
    }
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FTimerSourceList::DumpEntries(void)___ptr64'::__l30::
                LOG_Static,(FLogCategoryBase *)&LogEngine);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogEngine._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FTimerSourceList::DumpEntries(void)___ptr64'::__l48::
                  LOG_Static,(FLogCategoryBase *)&LogEngine);
    }
  }
  local_res20.Predicate.Predicate =
       (TDereferenceWrapper<FTimerSourceEntry,_public:_void___cdecl_FTimerSourceList::DumpEntries(void)_::_2_::<lambda_1>_>
        )local_res8;
  TSet<TTuple<FString,FTimerSourceEntry>,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<FString,FTimerSourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>_>::FValueComparisonClass<_FTimerSourceList::DumpEntries_::__l2::<lambda_1>_>_>
            ((TSet<TTuple<FString,FTimerSourceEntry>,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>,FDefaultSetAllocator>
              *)this,&local_res20);
  iVar3 = *(int *)&(this->Entries).field_0x28;
  puVar1 = &(this->Entries).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = local_78;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Entries).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    local_78 = 0;
    iVar10 = 0;
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar10;
      local_78 = local_78 + 0x20;
      iVar10 = iVar10 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1488bdafd;
      uVar13 = puVar15[lVar9 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iStack_7c = local_78 + -1 + local_res18;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_1488bdafd:
  uVar13 = *(uint *)&(this->Entries).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_70 = *(int *)&(this->Entries).field_0x8 - *(int *)&(this->Entries).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iVar10);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = this;
  iStack_90 = iVar10;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = this;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->Entries).field_0x28;
  if (uVar13 != uVar4) {
    puVar14 = *(undefined1 **)&(this->Entries).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1488bdc00;
      uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_1488bdc00:
  while( true ) {
    pFVar7 = local_68;
    if (*(int *)&(local_68->Entries).field_0x8 - *(int *)&(local_68->Entries).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar7 == this))
    break;
    if (4 < (byte)LogEngine._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FTimerSourceList::DumpEntries(void)___ptr64'::__l70::
                  LOG_Static,(FLogCategoryBase *)&LogEngine);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (4 < (byte)LogEngine._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FTimerSourceList::DumpEntries(void)___ptr64'::__l88::
                LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPartialDeduplicateDelegateToString @ 1488c3720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FTimerSourceList::GetPartialDeduplicateDelegateToString
          (FString *__return_storage_ptr__,FTimerUnifiedDelegate *param_1)

{
  uchar uVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  FName *pFVar5;
  ulong64 uVar6;
  size_t sVar7;
  UObject *pUVar8;
  UFunction *this;
  UClass *this_00;
  FString *this_01;
  wchar_t *pwVar9;
  TScriptDelegate<FNotThreadSafeDelegateMode> *pTVar10;
  TScriptDelegate<FNotThreadSafeDelegateMode> *pTVar11;
  undefined1 auStack_f18 [32];
  int local_ef8;
  FString local_ee8;
  FString local_ed8;
  FString local_ec8;
  FReadAccessScope local_eb8;
  FProgramCounterSymbolInfo local_e98;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f18;
  ::FString::FString(&local_ee8,L"NotBound!");
  ::FString::FString(&local_ec8,L"NotBound!");
  uVar1 = (param_1->VariantDelegate).TypeIndex;
  pTVar11 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  pTVar10 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1;
  if (uVar1 != '\x01') {
    pTVar10 = pTVar11;
  }
  if (pTVar10 == (TScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    pTVar10 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1;
    if (uVar1 != '\x02') {
      pTVar10 = pTVar11;
    }
    if (pTVar10 != (TScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(pTVar10);
      if (!bVar4) goto LAB_1488c3b4d;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar10,&local_eb8);
      local_ed8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)&pTVar10->FunctionName;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_eb8);
      pFVar5 = (FName *)::FName::ToString((FName *)&local_ed8,(FString *)&local_eb8);
      if ((FName *)&local_ee8 != pFVar5) {
        if ((FName)local_ee8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_ee8.Data.AllocatorInstance.Data);
        }
        local_ee8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar5;
        pFVar5->ComparisonIndex = 0;
        pFVar5->Number = 0;
        local_ee8.Data.ArrayNum = pFVar5[1].ComparisonIndex.Value;
        local_ee8.Data.ArrayMax = pFVar5[1].Number;
        pFVar5[1].ComparisonIndex = 0;
        pFVar5[1].Number = 0;
      }
      if ((FName)local_eb8.DestructionSentinel._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_eb8.DestructionSentinel._0_8_);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar10,&local_eb8);
      pUVar8 = FWeakObjectPtr::Get(&pTVar10->Object);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_eb8);
      if (pUVar8 == (UObject *)0x0) {
LAB_1488c3ae3:
        ::FString::FString((FString *)&local_eb8,L"None");
      }
      else {
        this_00 = *(UClass **)&pUVar8->field_0x10;
        this = UClass::FindFunctionByName
                         (this_00,(FName)local_ed8.Data.AllocatorInstance.Data,IncludeSuper);
        if (this != (UFunction *)0x0) {
          this_00 = UField::GetOwnerClass((UField *)this);
        }
        if (this_00 == (UClass *)0x0) goto LAB_1488c3ae3;
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)this_00,(FString *)&local_eb8,(UObject *)0x0);
      }
      if ((FName)local_ec8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_ec8.Data.AllocatorInstance.Data);
      }
      local_ec8.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)local_eb8.DestructionSentinel._0_8_;
      local_ec8.Data.ArrayNum = (int)local_eb8.DestructionSentinel.Accessor;
      local_ec8.Data.ArrayMax = local_eb8.DestructionSentinel.Accessor._4_4_;
      goto LAB_1488c3b4d;
    }
    if (uVar1 != '\x03') {
      param_1 = (FTimerUnifiedDelegate *)pTVar11;
    }
    if (((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1 ==
         (TScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) ||
       (*(longlong *)&((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1)->_padding_ == 0))
    goto LAB_1488c3b4d;
    ::FString::operator=(&local_ee8,L"TFunction");
    pwVar9 = L"";
    this_01 = &local_ec8;
  }
  else {
    if ((((pTVar10->Object).ObjectIndex == 0) ||
        (*(longlong **)&pTVar10->_padding_ == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(**(longlong **)&pTVar10->_padding_ + 0x38))(), cVar3 == '\0'))
    goto LAB_1488c3b4d;
    ::FString::operator=(&local_ec8,L"NonDynamicDelegate");
    if (((pTVar10->Object).ObjectIndex == 0) ||
       (plVar2 = *(longlong **)&pTVar10->_padding_, plVar2 == (longlong *)0x0)) {
      local_ed8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar5 = (FName *)&local_ed8;
    }
    else {
      pFVar5 = (FName *)(**(code **)(*plVar2 + 8))(plVar2,&local_ed8);
    }
    local_eb8.DestructionSentinel._0_8_ = *pFVar5;
    if ((FName)local_eb8.DestructionSentinel._0_8_ != (FName)0x0) {
      pFVar5 = (FName *)::FName::ToString((FName *)&local_eb8,&local_ed8);
      if ((FName *)&local_ee8 != pFVar5) {
        if ((FName)local_ee8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_ee8.Data.AllocatorInstance.Data);
        }
        local_ee8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar5;
        pFVar5->ComparisonIndex = 0;
        pFVar5->Number = 0;
        local_ee8.Data.ArrayNum = pFVar5[1].ComparisonIndex.Value;
        local_ee8.Data.ArrayMax = pFVar5[1].Number;
        pFVar5[1].ComparisonIndex = 0;
        pFVar5[1].Number = 0;
      }
      if ((FName)local_ed8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_ed8.Data.AllocatorInstance.Data);
      }
      goto LAB_1488c3b4d;
    }
    if ((((pTVar10->Object).ObjectIndex != 0) &&
        (*(longlong **)&pTVar10->_padding_ != (longlong *)0x0)) &&
       (uVar6 = (**(code **)(**(longlong **)&pTVar10->_padding_ + 0x20))(), uVar6 != 0)) {
      if (DumpTimerLogSymbolNames == 0) {
        ::FString::PrintfImpl(&local_ed8,L"func: 0x%llx");
        if ((FName)local_ee8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_ee8.Data.AllocatorInstance.Data);
        }
        local_ee8.Data.AllocatorInstance.Data = local_ed8.Data.AllocatorInstance.Data;
        local_ee8.Data.ArrayNum = local_ed8.Data.ArrayNum;
        local_ee8.Data.ArrayMax = local_ed8.Data.ArrayMax;
      }
      else {
        FProgramCounterSymbolInfo::FProgramCounterSymbolInfo(&local_e98);
        FWindowsPlatformStackWalk::ProgramCounterToSymbolInfo(uVar6,&local_e98);
        local_158._padding_ = 0;
        sVar7 = strlen(local_e98.Filename);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,local_e98.Filename,(int)sVar7,Yes);
        local_278._padding_ = 0;
        sVar7 = strlen(local_e98.FunctionName);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,local_e98.FunctionName,(int)sVar7,Yes);
        local_ef8 = local_e98.LineNumber;
        ::FString::PrintfImpl(&local_ed8,L"%s [%s:%d]");
        if ((FName)local_ee8.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_ee8.Data.AllocatorInstance.Data);
        }
        local_ee8.Data.AllocatorInstance.Data = local_ed8.Data.AllocatorInstance.Data;
        local_ee8.Data.ArrayNum = local_ed8.Data.ArrayNum;
        local_ee8.Data.ArrayMax = local_ed8.Data.ArrayMax;
        local_ed8.Data.ArrayNum = 0;
        local_ed8.Data.ArrayMax = 0;
        local_ed8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      goto LAB_1488c3b4d;
    }
    pwVar9 = L"0x0";
    this_01 = &local_ee8;
  }
  ::FString::operator=(this_01,pwVar9);
LAB_1488c3b4d:
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s,\"%s\"");
  if ((FName)local_ec8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_ec8.Data.AllocatorInstance.Data);
  }
  if ((FName)local_ee8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_ee8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

