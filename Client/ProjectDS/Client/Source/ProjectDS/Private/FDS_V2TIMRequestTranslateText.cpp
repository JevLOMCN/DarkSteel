// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// AddMessageTexts @ 14b9dfc80

void __thiscall
FDS_V2TIMRequestTranslateText::AddMessageTexts
          (FDS_V2TIMRequestTranslateText *this,
          TArrayView<TTuple<unsigned___int64,FString>_const_,int> *param_1)

{
  TTuple<unsigned___int64,FString> *pTVar1;
  uint uVar2;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this_00;
  int iVar3;
  wchar_t *pwVar4;
  TTuple<unsigned___int64,FString> *pTVar5;
  
  pTVar5 = param_1->DataPtr;
  pTVar1 = pTVar5 + param_1->ArrayNum;
  if (pTVar5 != pTVar1) {
    do {
      iVar3 = *(int *)&pTVar5->field_0x10 + -1;
      if (*(int *)&pTVar5->field_0x10 == 0) {
        pwVar4 = L"";
        iVar3 = 0;
      }
      else {
        pwVar4 = *(wchar_t **)&pTVar5->field_0x8;
      }
      uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
      this_00 = TMapBase<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<FString_const_&>
                          ((TMapBase<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
                            *)&this->MessageMap,uVar2,(FString *)&pTVar5->field_0x8);
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned___int64_const_&>
                (this_00,(ulong64 *)pTVar5);
      pTVar5 = pTVar5 + 1;
    } while (pTVar5 != pTVar1);
  }
  return;
}

// GetDebugString @ 14b9efb70

FString * __thiscall
FDS_V2TIMRequestTranslateText::GetDebugString
          (FDS_V2TIMRequestTranslateText *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestTranslateText");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba084d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestTranslateText::OnSuccessInternal
          (FDS_V2TIMRequestTranslateText *this,TXV2TIMStringToV2TIMStringMap *param_1)

{
  longlong lVar1;
  ulong64 *puVar2;
  ForAnyElementType FVar3;
  uint uVar4;
  int iVar5;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar6;
  __uint64 _Var7;
  V2TIMString *this_01;
  char *pcVar8;
  longlong *plVar9;
  ulong64 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [8];
  FString local_1b0;
  TXV2TIMStringVector local_1a0;
  TXV2TIMStringToV2TIMStringMap *local_190;
  FString local_188;
  V2TIMString local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_190 = param_1;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"FDS_V2TIMRequestTranslateText::OnSuccessInternal",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x312,L"chattingManager == nullptr");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else if ((char)this_00->_padding_ != '\x01') {
    TXV2TIMStringToV2TIMStringMap::AllKeys(param_1,&local_1a0);
    plVar12 = (longlong *)0x0;
    _Var7 = TXV2TIMStringVector::Size(&local_1a0);
    if (_Var7 != 0) {
      plVar11 = plVar12;
      plVar13 = plVar12;
      do {
        this_01 = TXV2TIMStringVector::operator[](&local_1a0,(__uint64)plVar11);
        TXV2TIMStringToV2TIMStringMap::Get(param_1,&local_178,this_01);
        pcVar8 = V2TIMString::CString(this_01);
        DS_Util::ConvertUTF8ToFString(&local_1b0,pcVar8);
        pcVar8 = V2TIMString::CString(&local_178);
        DS_Util::ConvertUTF8ToFString(&local_188,pcVar8);
        iVar5 = local_1b0.Data.ArrayNum + -1;
        FVar3.Data = local_1b0.Data.AllocatorInstance.Data;
        if (local_1b0.Data.ArrayNum == 0) {
          iVar5 = 0;
          FVar3.Data = (FScriptContainerElement *)L"";
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar3.Data);
        iVar5 = TSet<TTuple<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)&this->MessageMap,uVar4,&local_1b0);
        if (iVar5 != -1) {
          lVar1 = *(longlong *)&(this->MessageMap).field_0x0 + (longlong)iVar5 * 0x28;
          plVar11 = (longlong *)(lVar1 + 0x10);
          if (lVar1 == 0) {
            plVar11 = plVar12;
          }
          if (plVar11 != (longlong *)0x0) {
            puVar10 = (ulong64 *)*plVar11;
            lVar1 = plVar11[1];
            puVar2 = puVar10 + (int)lVar1;
            while( true ) {
              if ((int)plVar11[1] != (int)lVar1) {
                `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_1b8);
              }
              param_1 = local_190;
              if (puVar10 == puVar2) break;
              UDS_ChattingManager::OnRecvTranslateMessage(this_00,*puVar10,&local_188);
              puVar10 = puVar10 + 1;
            }
          }
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        V2TIMString::~V2TIMString(&local_178);
        uVar4 = (int)plVar13 + 1;
        plVar13 = (longlong *)(ulonglong)uVar4;
        plVar11 = (longlong *)(longlong)(int)uVar4;
        plVar9 = (longlong *)TXV2TIMStringVector::Size(&local_1a0);
      } while (plVar11 < plVar9);
    }
    TXV2TIMStringVector::~TXV2TIMStringVector(&local_1a0);
  }
  return;
}

// Request @ 14ba12810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_V2TIMRequestTranslateText::Request(FDS_V2TIMRequestTranslateText *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  TMap<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  UDS_LogManager *pUVar10;
  V2TIMManager *pVVar11;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar12;
  void *pvVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  ForAnyElementType FVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 auStackY_698 [32];
  undefined1 local_668 [8];
  TMap<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
  *local_660;
  int iStack_658;
  uint uStack_654;
  undefined1 *local_650;
  undefined4 uStack_648;
  int iStack_644;
  int local_640;
  int iStack_63c;
  int iStack_638;
  undefined4 uStack_634;
  int local_630;
  TMap<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
  *local_628;
  UDS_LanguageManager *local_620;
  FDS_V2TIMRequestTranslateText *local_618;
  longlong *local_610;
  FString local_608;
  FString local_5f8;
  TXV2TIMStringVector local_5e8;
  TMap<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
  *local_5d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5d0;
  undefined8 uStack_5b0;
  V2TIMString local_5a8;
  V2TIMString local_598;
  V2TIMString local_588;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_578;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_458;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_338;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> local_218;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> local_178;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_698;
  local_618 = this;
  local_620 = UDS_LanguageManager::GetInst();
  if (local_620 == (UDS_LanguageManager *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_578._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_578,"FDS_V2TIMRequestTranslateText::Request",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Warning,local_578.Ptr,0x2e7,L"languageManager is nullptr.");
    pvVar13 = (void *)local_578._padding_;
  }
  else {
    if ((char)local_620->_padding_ == '\x01') {
      return false;
    }
    pVVar11 = V2TIMManager::GetInstance();
    if (pVVar11 == (V2TIMManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar10 = UDS_LogManager::GetInst();
      local_458._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_458,"FDS_V2TIMRequestTranslateText::Request",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar10,1,Warning,local_458.Ptr,0x2f3,L"v2TIMMng is nullptr.");
      pvVar13 = (void *)local_458._padding_;
    }
    else {
      local_610 = (longlong *)(**(code **)((longlong)*pVVar11 + 0xe8))(pVVar11);
      if (local_610 != (longlong *)0x0) {
        TXV2TIMStringVector::TXV2TIMStringVector(&local_5e8);
        iVar3 = *(int *)&(this->MessageMap).field_0x28;
        puVar1 = &(this->MessageMap).field_0x10;
        local_660 = &this->MessageMap;
        iStack_658 = 0;
        uStack_654 = 1;
        local_640 = 0;
        iStack_644 = local_640;
        if (iVar3 != 0) {
          puVar21 = *(uint **)&(this->MessageMap).field_0x20;
          if (puVar21 == (uint *)0x0) {
            puVar21 = (uint *)puVar1;
          }
          uVar19 = *puVar21;
          local_640 = 0;
          iStack_658 = 0;
          while (uVar19 == 0) {
            lVar14 = (longlong)iStack_658;
            local_640 = local_640 + 0x20;
            iStack_658 = iStack_658 + 1;
            iStack_644 = iVar3;
            if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_658)
            goto LAB_14ba12aae;
            uVar19 = puVar21[lVar14 + 1];
          }
          uStack_654 = -uVar19 & uVar19;
          uVar2 = (ulonglong)uStack_654 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_630 = (int)lVar14;
          iStack_644 = local_640 + -1 + local_630;
          if (iVar3 < iStack_644) {
            iStack_644 = iVar3;
          }
        }
LAB_14ba12aae:
        iStack_638 = *(int *)&(this->MessageMap).field_0x8 - *(int *)&(this->MessageMap).field_0x34;
        uVar19 = *(uint *)&(this->MessageMap).field_0x28;
        TStack_5d0._padding_ = CONCAT44(uStack_654,iStack_658);
        uStack_648 = 0xffffffff;
        uVar18 = uVar19 & 0xffffffe0;
        TStack_5d0.CurrentBitIndex = iStack_644;
        TStack_5d0.UnvisitedBitMask = 0xffffffff;
        iVar17 = (int)uVar19 >> 5;
        TStack_5d0._28_4_ = iStack_644;
        TStack_5d0.BaseBitIndex = local_640;
        uStack_5b0 = CONCAT44(uStack_634,iStack_638);
        local_650 = puVar1;
        iStack_63c = iStack_644;
        local_628 = local_660;
        local_5d8 = local_660;
        TStack_5d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar19 < 0) || (iVar3 < (int)uVar19)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        pTVar6 = local_628;
        uVar4 = *(uint *)&(this->MessageMap).field_0x28;
        if (uVar19 != uVar4) {
          puVar20 = *(undefined1 **)&(this->MessageMap).field_0x20;
          if (puVar20 == (undefined1 *)0x0) {
            puVar20 = puVar1;
          }
          uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar17 * 4);
          while (uVar19 == 0) {
            lVar14 = (longlong)iVar17;
            uVar18 = uVar18 + 0x20;
            iVar17 = iVar17 + 1;
            uVar19 = uVar4;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_14ba12bd0;
            uVar19 = *(uint *)(puVar20 + lVar14 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar19 = (int)lVar14 + -1 + uVar18;
          if ((int)uVar4 < (int)uVar19) {
            uVar19 = uVar4;
          }
        }
LAB_14ba12bd0:
        while( true ) {
          pTVar7 = local_5d8;
          if (*(int *)&local_5d8->field_0x8 - *(int *)&local_5d8->field_0x34 != (int)uStack_5b0) {
            `TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_668);
          }
          if (((TStack_5d0.CurrentBitIndex == uVar19) &&
              (TStack_5d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pTVar7 == pTVar6)) break;
          lVar14 = *(longlong *)pTVar7;
          if (*(int *)(lVar14 + 8 + (longlong)TStack_5d0.CurrentBitIndex * 0x28) == 0) {
            pwVar15 = L"";
          }
          else {
            pwVar15 = *(wchar_t **)(lVar14 + (longlong)TStack_5d0.CurrentBitIndex * 0x28);
          }
          pTVar12 = StringCast<char8_t,128,wchar_t>(&local_218,pwVar15);
          V2TIMString::V2TIMString(&local_5a8,(char *)pTVar12->Ptr);
          if ((void *)local_218._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_218._padding_);
          }
          TXV2TIMStringVector::PushBack(&local_5e8,&local_5a8);
          V2TIMString::~V2TIMString(&local_5a8);
          TStack_5d0.UnvisitedBitMask = TStack_5d0.UnvisitedBitMask & ~TStack_5d0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5d0);
        }
        UDS_LanguageManager::GetCurrentLanguageCodeString(local_620,&local_5f8);
        ::FString::FString(&local_608,L"auto");
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_608.Data.ArrayNum != 0) {
          FVar16.Data = local_608.Data.AllocatorInstance.Data;
        }
        pTVar12 = StringCast<char8_t,128,wchar_t>(&local_178,(wchar_t *)FVar16.Data);
        V2TIMString::V2TIMString(&local_588,(char *)pTVar12->Ptr);
        if ((void *)local_178._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_178._padding_);
        }
        if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_608.Data.AllocatorInstance.Data);
        }
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_5f8.Data.ArrayNum != 0) {
          FVar16.Data = local_5f8.Data.AllocatorInstance.Data;
        }
        pTVar12 = StringCast<char8_t,128,wchar_t>(&local_d8,(wchar_t *)FVar16.Data);
        V2TIMString::V2TIMString(&local_598,(char *)pTVar12->Ptr);
        if ((void *)local_d8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_d8._padding_);
        }
        (**(code **)(*local_610 + 0x140))(local_610,&local_5e8,&local_588,&local_598);
        V2TIMString::~V2TIMString(&local_598);
        V2TIMString::~V2TIMString(&local_588);
        if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
        }
        TXV2TIMStringVector::~TXV2TIMStringVector(&local_5e8);
        return true;
      }
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar10 = UDS_LogManager::GetInst();
      local_338._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_338,"FDS_V2TIMRequestTranslateText::Request",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar10,1,Warning,local_338.Ptr,0x2fa,L"v2TIMMessageMng is nullptr.")
      ;
      pvVar13 = (void *)local_338._padding_;
    }
  }
  if (pvVar13 != (void *)0x0) {
    FMemory::Free(pvVar13);
  }
  return false;
}

