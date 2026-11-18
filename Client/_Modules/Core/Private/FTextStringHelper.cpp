// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// operator() @ 14173ec50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
`FTextStringHelper::ReadFromBuffer_ComplexText'::__l18::<lambda_1>::operator()
          (void *this,FText *param_1)

{
  wchar_t *_Str1;
  bool bVar1;
  int iVar2;
  TRefCountPtr<FTextHistory_AsCurrency> TVar3;
  int *piVar4;
  ITextData *pIVar5;
  ITextData *pIVar6;
  undefined8 *local_res8;
  
  _Str1 = (wchar_t *)**(undefined8 **)this;
  iVar2 = wcsncmp(_Str1,*TextStringificationUtil::NsLocTextMarker,9);
  if ((iVar2 == 0) || (iVar2 = wcsncmp(_Str1,*TextStringificationUtil::LocTextMarker,7), iVar2 == 0)
     ) {
    pIVar5 = ::operator_new(0x38);
    pIVar6 = (ITextData *)0x0;
    if (pIVar5 != (ITextData *)0x0) {
      *(undefined4 *)&pIVar5[2].field_0x1 = 0;
      *(undefined2 *)&pIVar5[2].field_0x5 = 0;
      pIVar5[2].field_0x7 = 0;
      pIVar5[1] = (ITextData)0x0;
      *(undefined1 *)(pIVar5 + 2) = 0;
      *pIVar5 = (ITextData)&___7FTextHistory_Base__6B_;
      pIVar5[3] = (ITextData)0xffffffffffffffff;
      pIVar5[4] = (ITextData)0x0;
      pIVar5[5] = (ITextData)0x0;
      pIVar5[6] = (ITextData)0x0;
      LOCK();
      *(int *)(pIVar5 + 1) = *(int *)(pIVar5 + 1) + 1;
      UNLOCK();
      pIVar6 = pIVar5;
    }
    pIVar5 = (param_1->TextData).Reference;
    (param_1->TextData).Reference = pIVar6;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))();
    }
  }
  else {
    iVar2 = wcsncmp((wchar_t *)**(undefined8 **)this,
                    *TextStringificationUtil::LocGenFormatNamedMarker,0x13);
    if (iVar2 == 0) {
      TVar3.Reference = (FTextHistory_AsCurrency *)MakeRefCount<FTextHistory_NamedFormat>();
    }
    else {
      iVar2 = wcsncmp((wchar_t *)**(undefined8 **)this,
                      *TextStringificationUtil::LocGenFormatOrderedMarker,0x15);
      if (iVar2 == 0) {
        TVar3.Reference = (FTextHistory_AsCurrency *)MakeRefCount<FTextHistory_OrderedFormat>();
      }
      else {
        iVar2 = wcsncmp((wchar_t *)**(undefined8 **)this,
                        *TextStringificationUtil::LocGenNumberMarker,0xd);
        if (iVar2 == 0) {
          TVar3.Reference = (FTextHistory_AsCurrency *)MakeRefCount<FTextHistory_AsNumber>();
        }
        else {
          iVar2 = wcsncmp((wchar_t *)**(undefined8 **)this,
                          *TextStringificationUtil::LocGenPercentMarker,0xe);
          if (iVar2 == 0) {
            TVar3.Reference = (FTextHistory_AsCurrency *)MakeRefCount<FTextHistory_AsPercent>();
          }
          else {
            iVar2 = wcsncmp((wchar_t *)**(undefined8 **)this,
                            *TextStringificationUtil::LocGenCurrencyMarker,0xf);
            if (iVar2 == 0) {
              TVar3 = MakeRefCount<FTextHistory_AsCurrency>();
            }
            else {
              iVar2 = wcsncmp((wchar_t *)**(undefined8 **)this,
                              *TextStringificationUtil::LocGenDateTimeMarker,0xf);
              if (iVar2 == 0) {
                TVar3.Reference = (FTextHistory_AsCurrency *)MakeRefCount<FTextHistory_AsDateTime>()
                ;
              }
              else {
                iVar2 = wcsncmp((wchar_t *)**(undefined8 **)this,
                                *TextStringificationUtil::LocGenDateMarker,0xb);
                if (iVar2 == 0) {
                  TVar3.Reference = (FTextHistory_AsCurrency *)MakeRefCount<FTextHistory_AsDate>();
                }
                else {
                  iVar2 = wcsncmp((wchar_t *)**(undefined8 **)this,
                                  *TextStringificationUtil::LocGenTimeMarker,0xb);
                  if (iVar2 == 0) {
                    TVar3.Reference = (FTextHistory_AsCurrency *)MakeRefCount<FTextHistory_AsTime>()
                    ;
                  }
                  else {
                    bVar1 = FTextHistory_Transform::StaticShouldReadFromBuffer
                                      ((wchar_t *)**(undefined8 **)this);
                    if (bVar1) {
                      TVar3.Reference =
                           (FTextHistory_AsCurrency *)MakeRefCount<FTextHistory_Transform>();
                    }
                    else {
                      bVar1 = FTextHistory_StringTableEntry::StaticShouldReadFromBuffer
                                        ((wchar_t *)**(undefined8 **)this);
                      if (!bVar1) {
                        return false;
                      }
                      TVar3.Reference =
                           (FTextHistory_AsCurrency *)MakeRefCount<FTextHistory_StringTableEntry>();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    pIVar6 = (param_1->TextData).Reference;
    (param_1->TextData).Reference = (ITextData *)(TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))();
    }
    if (local_res8 != (undefined8 *)0x0) {
      piVar4 = (int *)(local_res8 + 1);
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (((iVar2 == 1) && (piVar4 != (int *)0x0)) && (local_res8 != (undefined8 *)0x0)) {
        (**(code **)*local_res8)(local_res8,1);
        return true;
      }
    }
  }
  return true;
}

// CreateFromBuffer @ 14174f0c0

FText * __cdecl
FTextStringHelper::CreateFromBuffer
          (FText *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,
          bool param_4)

{
  ITextData *pIVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  FString *pFVar4;
  undefined1 local_res8 [8];
  FText local_38;
  FString local_28;
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = 0;
  pwVar3 = ReadFromBuffer(param_1,__return_storage_ptr__,param_2,param_3,param_4);
  if (pwVar3 == (wchar_t *)0x0) {
    pFVar4 = ::FString::FString(&local_28,param_1);
    FText::FromString(&local_38,pFVar4);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (__return_storage_ptr__ != &local_38) {
      pIVar1 = (__return_storage_ptr__->TextData).Reference;
      (__return_storage_ptr__->TextData).Reference = local_38.TextData.Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      __return_storage_ptr__->Flags = local_38.Flags;
      pFVar2 = FText::GetEmpty();
      pIVar1 = (pFVar2->TextData).Reference;
      local_38.TextData.Reference = (ITextData *)0x0;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
        local_38.TextData.Reference = pIVar1;
      }
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))(local_38.TextData.Reference);
    }
  }
  return __return_storage_ptr__;
}

// IsComplexText @ 141766900

bool __cdecl FTextStringHelper::IsComplexText(wchar_t *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = wcsncmp(param_1,*TextStringificationUtil::InvTextMarker,7);
  if (iVar2 != 0) {
    iVar2 = wcsncmp(param_1,*TextStringificationUtil::NsLocTextMarker,9);
    if (iVar2 != 0) {
      iVar2 = wcsncmp(param_1,*TextStringificationUtil::LocTextMarker,7);
      if (iVar2 != 0) {
        iVar2 = wcsncmp(param_1,*TextStringificationUtil::LocGenFormatNamedMarker,0x13);
        if (iVar2 != 0) {
          iVar2 = wcsncmp(param_1,*TextStringificationUtil::LocGenFormatOrderedMarker,0x15);
          if (iVar2 != 0) {
            iVar2 = wcsncmp(param_1,*TextStringificationUtil::LocGenNumberMarker,0xd);
            if (iVar2 != 0) {
              iVar2 = wcsncmp(param_1,*TextStringificationUtil::LocGenPercentMarker,0xe);
              if (iVar2 != 0) {
                iVar2 = wcsncmp(param_1,*TextStringificationUtil::LocGenCurrencyMarker,0xf);
                if (iVar2 != 0) {
                  iVar2 = wcsncmp(param_1,*TextStringificationUtil::LocGenDateTimeMarker,0xf);
                  if (iVar2 != 0) {
                    iVar2 = wcsncmp(param_1,*TextStringificationUtil::LocGenDateMarker,0xb);
                    if (iVar2 != 0) {
                      iVar2 = wcsncmp(param_1,*TextStringificationUtil::LocGenTimeMarker,0xb);
                      if (iVar2 != 0) {
                        bVar1 = FTextHistory_Transform::StaticShouldReadFromBuffer(param_1);
                        if (!bVar1) {
                          iVar2 = wcsncmp(param_1,*TextStringificationUtil::LocTableMarker,8);
                          if (iVar2 != 0) {
                            return false;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}

// ReadFromBuffer @ 141770cf0

wchar_t * __cdecl
FTextStringHelper::ReadFromBuffer
          (wchar_t *param_1,FText *param_2,wchar_t *param_3,wchar_t *param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FText *pFVar5;
  ITextData *pIVar6;
  uint uVar7;
  ITextData *pIVar8;
  uint uVar9;
  ITextData *pIVar10;
  int local_res8 [2];
  FString local_98;
  ITextData local_88;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  FText local_78;
  FString local_68;
  FText local_58;
  ITextData *local_48;
  ITextData *local_38;
  
  pIVar8 = (ITextData *)0x0;
  uVar9 = 0;
  local_res8[0] = 0;
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Text.cpp"
                         ,0x779,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pwVar4 = (wchar_t *)(*pcVar1)();
    return pwVar4;
  }
  if (*param_1 == L'\0') {
    if (param_5) {
      pIVar6 = (ITextData *)0x0;
    }
    else {
      pFVar5 = FText::GetEmpty();
      FText::operator=(param_2,pFVar5);
      pIVar6 = (ITextData *)param_1;
    }
  }
  else {
    pIVar6 = (ITextData *)ReadFromBuffer_ComplexText(param_1,param_2,param_3,param_4);
    if (pIVar6 == (ITextData *)0x0) {
      if (param_5) {
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
        local_res8[0] = 0;
        bVar3 = FParse::QuotedString(param_1,&local_98,local_res8);
        local_68.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
        pIVar6 = pIVar8;
        if (bVar3) {
          if (local_98.Data.ArrayNum < 2) {
            pFVar5 = FText::GetEmpty();
            pIVar8 = (pFVar5->TextData).Reference;
            if (pIVar8 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar8 + 8))(pIVar8,local_80);
            }
            uVar9 = pFVar5->Flags;
            bVar2 = true;
            bVar3 = false;
            pIVar6 = pIVar8;
            pIVar10 = local_48;
          }
          else {
            local_88 = (ITextData)0xffffffffffffffff;
            pIVar6 = ::operator_new(0x38);
            if (pIVar6 != (ITextData *)0x0) {
              pIVar6[1] = (ITextData)0x0;
              *(undefined1 *)(pIVar6 + 2) = 0;
              *pIVar6 = (ITextData)&___7FTextHistory_Base__6B_;
              pIVar6[3] = local_88;
              pIVar6[4] = (ITextData)local_98.Data.AllocatorInstance.Data;
              local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(pIVar6 + 5) = local_98.Data.ArrayNum;
              *(int *)&pIVar6[5].field_0x4 = local_98.Data.ArrayMax;
              local_98.Data.ArrayNum = 0;
              local_98.Data.ArrayMax = 0;
              pIVar6[6] = (ITextData)0x0;
              LOCK();
              *(int *)(pIVar6 + 1) = *(int *)(pIVar6 + 1) + 1;
              UNLOCK();
              pIVar8 = pIVar6;
            }
            bVar2 = false;
            bVar3 = true;
            pIVar6 = local_38;
            pIVar10 = pIVar8;
          }
          local_78.TextData.Reference = pIVar8;
          if (pIVar8 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar8 + 8))(pIVar8,local_7c);
          }
          if ((bVar3) && (pIVar10 != (ITextData *)0x0)) {
            (**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
          }
          if ((bVar2) && (pIVar6 != (ITextData *)0x0)) {
            (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
          }
          local_78.Flags = uVar9 | 0x12;
          FText::operator=(param_2,&local_78);
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          pIVar6 = (ITextData *)(param_1 + local_res8[0]);
          local_68.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
        }
      }
      else {
        ::FString::FString(&local_68,param_1);
        uVar7 = local_68.Data.ArrayNum - 1;
        if (local_68.Data.ArrayNum == 0) {
          uVar7 = uVar9;
        }
        pFVar5 = FText::FromString(&local_58,&local_68);
        FText::operator=(param_2,pFVar5);
        pIVar6 = (ITextData *)(param_1 + (int)uVar7);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
      }
      if ((ITextData)local_68.Data.AllocatorInstance.Data != (ITextData)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  return (wchar_t *)pIVar6;
}

// ReadFromBuffer_ComplexText @ 141770f50

wchar_t * __cdecl
FTextStringHelper::ReadFromBuffer_ComplexText
          (wchar_t *param_1,FText *param_2,wchar_t *param_3,wchar_t *param_4)

{
  short *psVar1;
  atomic<unsigned_char> *this;
  FMutex FVar2;
  atomic<unsigned_char> aVar3;
  short sVar4;
  ushort uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  wchar_t wVar10;
  int iVar11;
  short *psVar12;
  FText *pFVar13;
  ITextData *pIVar14;
  longlong *plVar15;
  FTextLocalizationManager *pFVar16;
  FTextId *pFVar17;
  ushort *puVar18;
  wchar_t *pwVar19;
  ITextData *pIVar20;
  TRefCountPtr<ITextData> TVar21;
  ITextData *pIVar22;
  uint uVar23;
  ITextData *local_res8;
  FString local_a0;
  undefined4 local_90 [2];
  FText local_88;
  ITextData local_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  ITextData **local_68;
  FText local_60;
  undefined1 local_50 [8];
  ITextData *local_48;
  ITextData *local_38;
  
  pIVar20 = (ITextData *)0x0;
  uVar23 = 0;
  local_90[0] = 0;
  local_res8 = (ITextData *)param_1;
  iVar11 = wcsncmp(param_1,*TextStringificationUtil::InvTextMarker,7);
  if (iVar11 != 0) {
    local_68 = &local_res8;
    pFVar13 = FText::GetEmpty();
    local_88.TextData.Reference = (pFVar13->TextData).Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 8))
                (local_88.TextData.Reference,local_6c);
    }
    local_88.Flags = 0;
    bVar8 = `FTextStringHelper::ReadFromBuffer_ComplexText'::__l18::<lambda_1>::operator()
                      (&local_68,&local_88);
    TVar21.Reference = local_88.TextData.Reference;
    if (!bVar8) {
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      return (wchar_t *)0x0;
    }
    plVar15 = (longlong *)
              (**(code **)((longlong)*local_88.TextData.Reference + 0x50))
                        (local_88.TextData.Reference);
    local_res8 = (ITextData *)(**(code **)(*plVar15 + 0x88))(plVar15,local_res8,param_3,param_4);
    if (local_res8 != (ITextData *)0x0) {
      if (TVar21.Reference != (ITextData *)0x0) {
        plVar15 = (longlong *)(**(code **)((longlong)*TVar21.Reference + 0x50))(TVar21.Reference);
        cVar9 = (**(code **)(*plVar15 + 0xa8))(plVar15);
        if (cVar9 != '\0') {
          pFVar16 = FTextLocalizationManager::Get();
          pFVar17 = (FTextId *)(**(code **)(*plVar15 + 0x60))(plVar15,local_50);
          AcquireSRWLockShared((PSRWLOCK)&pFVar16->TextRevisionRW);
          uVar5 = pFVar16->TextRevisionCounter;
          if ((((pFVar17->Namespace).Index != -1) || ((pFVar17->Key).Index != -1)) &&
             (puVar18 = TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
                        ::Find((TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
                                *)&pFVar16->LocalTextRevisions,pFVar17), puVar18 != (ushort *)0x0))
          {
            pIVar20 = (ITextData *)(ulonglong)*puVar18;
          }
          ReleaseSRWLockShared((PSRWLOCK)&pFVar16->TextRevisionRW);
          this = (atomic<unsigned_char> *)(plVar15 + 2);
          if ((this == (atomic<unsigned_char> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Mutex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                 ,0x1b,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            pwVar19 = (wchar_t *)(*pcVar6)();
            return pwVar19;
          }
          LOCK();
          FVar2.State = *this;
          if (FVar2.State == (atomic<unsigned_char>)0x0) {
            *this = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (FVar2.State != (atomic<unsigned_char>)0x0) {
            UE::FMutex::LockSlow((FMutex *)this);
          }
          if ((*(ushort *)((longlong)plVar15 + 0xc) != uVar5) ||
             (*(short *)((longlong)plVar15 + 0xe) != (short)pIVar20)) {
            *(ushort *)((longlong)plVar15 + 0xc) = uVar5;
            *(short *)((longlong)plVar15 + 0xe) = (short)pIVar20;
            (**(code **)(*plVar15 + 0xb0))(plVar15);
          }
          if (this != (atomic<unsigned_char> *)0x0) {
            LOCK();
            aVar3 = *this;
            *this = (atomic<unsigned_char>)((char)*this + -1);
            UNLOCK();
            if (((byte)aVar3 & 2) != 0) {
              UE::FMutex::WakeWaitingThread((FMutex *)this);
            }
          }
        }
      }
      FText::operator=(param_2,&local_88);
      TVar21.Reference = local_88.TextData.Reference;
      pIVar20 = local_res8;
    }
    if (TVar21.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar21.Reference + 0x10))(TVar21.Reference);
      return (wchar_t *)pIVar20;
    }
    return (wchar_t *)pIVar20;
  }
  psVar12 = (short *)&local_res8[1].field_0x6;
  sVar4 = *psVar12;
  while ((sVar4 != 0 && ((sVar4 == 0x20 || (sVar4 == 9))))) {
    psVar1 = psVar12 + 1;
    psVar12 = psVar12 + 1;
    sVar4 = *psVar1;
  }
  if ((psVar12 != (short *)0x0) && (*psVar12 != 0x28)) {
    return (wchar_t *)0x0;
  }
  pwVar19 = psVar12 + 1;
  if (psVar12 == (short *)0x0) {
    pwVar19 = (wchar_t *)0x0;
  }
  if (pwVar19 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  local_a0.Data.ArrayNum = 0;
  local_a0.Data.ArrayMax = 0;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  wVar10 = *pwVar19;
  if (wVar10 != L'\0') {
    do {
      if ((wVar10 != L' ') && (wVar10 != L'\t')) break;
      wVar10 = pwVar19[1];
      pwVar19 = pwVar19 + 1;
    } while (wVar10 != L'\0');
    if (pwVar19 == (wchar_t *)0x0) goto LAB_141771152;
  }
  local_res8 = (ITextData *)TextStringificationUtil::ReadQuotedStringFromBuffer(pwVar19,&local_a0);
  if ((local_res8 != (ITextData *)0x0) &&
     (local_res8 = (ITextData *)
                   TextStringificationUtil::SkipWhitespaceAndCharacter((wchar_t *)local_res8,L')'),
     local_res8 != (ITextData *)0x0)) {
    if (local_a0.Data.ArrayNum < 2) {
      pFVar13 = FText::GetEmpty();
      pIVar20 = (pFVar13->TextData).Reference;
      if (pIVar20 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar20 + 8))(pIVar20,local_90);
      }
      uVar23 = pFVar13->Flags;
      bVar7 = true;
      bVar8 = false;
      pIVar14 = pIVar20;
      pIVar22 = local_48;
    }
    else {
      local_78 = (ITextData)0xffffffffffffffff;
      pIVar14 = ::operator_new(0x38);
      if (pIVar14 != (ITextData *)0x0) {
        pIVar14[1] = (ITextData)0x0;
        *(undefined1 *)(pIVar14 + 2) = 0;
        *pIVar14 = (ITextData)&___7FTextHistory_Base__6B_;
        pIVar14[3] = local_78;
        pIVar14[4] = (ITextData)local_a0.Data.AllocatorInstance.Data;
        local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pIVar14 + 5) = local_a0.Data.ArrayNum;
        *(int *)&pIVar14[5].field_0x4 = local_a0.Data.ArrayMax;
        local_a0.Data.ArrayNum = 0;
        local_a0.Data.ArrayMax = 0;
        pIVar14[6] = (ITextData)0x0;
        LOCK();
        *(int *)(pIVar14 + 1) = *(int *)(pIVar14 + 1) + 1;
        UNLOCK();
        pIVar20 = pIVar14;
      }
      bVar7 = false;
      bVar8 = true;
      pIVar14 = local_38;
      pIVar22 = pIVar20;
    }
    local_60.TextData.Reference = pIVar20;
    if (pIVar20 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar20 + 8))(pIVar20,local_70);
    }
    if ((bVar8) && (pIVar22 != (ITextData *)0x0)) {
      (**(code **)((longlong)*pIVar22 + 0x10))(pIVar22);
    }
    if ((bVar7) && (pIVar14 != (ITextData *)0x0)) {
      (**(code **)((longlong)*pIVar14 + 0x10))(pIVar14);
    }
    local_60.Flags = uVar23 | 2;
    FText::operator=(param_2,&local_60);
    pIVar20 = local_res8;
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
      pIVar20 = local_res8;
    }
  }
LAB_141771152:
  if ((ITextData)local_a0.Data.AllocatorInstance.Data != (ITextData)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    return (wchar_t *)pIVar20;
  }
  return (wchar_t *)pIVar20;
}

// ReadFromString @ 141771370

bool __cdecl
FTextStringHelper::ReadFromString
          (wchar_t *param_1,FText *param_2,wchar_t *param_3,wchar_t *param_4,int *param_5,
          bool param_6,EStringTableLoadingPolicy param_7)

{
  wchar_t *pwVar1;
  
  pwVar1 = ReadFromBuffer(param_1,param_2,param_3,param_4,param_6);
  if (pwVar1 != (wchar_t *)0x0) {
    if (param_5 != (int *)0x0) {
      *param_5 = (int)((longlong)pwVar1 - (longlong)param_1 >> 1);
    }
    return true;
  }
  return false;
}

// WriteToBuffer @ 141785900

void __cdecl
FTextStringHelper::WriteToBuffer(FString *param_1,FText *param_2,bool param_3,bool param_4)

{
  void *pvVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  int iVar7;
  FString local_18;
  
  if ((param_2->Flags & 2) == 0) {
    plVar4 = (longlong *)(**(code **)((longlong)*(param_2->TextData).Reference + 0x48))();
    cVar2 = (**(code **)(*plVar4 + 0x90))(plVar4,param_1,param_4);
    if (cVar2 != '\0') {
      return;
    }
    if (param_3) {
      ::FString::AppendChars(param_1,L"\"",1);
      FText::Rebuild(param_2);
      puVar3 = (undefined8 *)(**(code **)((longlong)*(param_2->TextData).Reference + 0x28))();
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = *(int *)(puVar3 + 1);
      lVar6 = (longlong)local_18.Data.ArrayNum;
      pvVar1 = (void *)*puVar3;
      if (local_18.Data.ArrayNum == 0) {
        local_18.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,
                   local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
        memcpy(local_18.Data.AllocatorInstance.Data,pvVar1,lVar6 * 2);
      }
      ::FString::ReplaceCharWithEscapedCharInline
                (&local_18,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
      iVar7 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars(param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar7);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      iVar7 = 1;
      pwVar5 = L"\"";
    }
    else {
      FText::Rebuild(param_2);
      puVar3 = (undefined8 *)(**(code **)((longlong)*(param_2->TextData).Reference + 0x28))();
      pwVar5 = (wchar_t *)*puVar3;
      iVar7 = *(int *)(puVar3 + 1) + -1;
      if (*(int *)(puVar3 + 1) == 0) {
        iVar7 = 0;
      }
    }
  }
  else {
    ::FString::AppendChars(param_1,L"INVTEXT(\"",9);
    FText::Rebuild(param_2);
    puVar3 = (undefined8 *)(**(code **)((longlong)*(param_2->TextData).Reference + 0x28))();
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = *(int *)(puVar3 + 1);
    lVar6 = (longlong)local_18.Data.ArrayNum;
    pvVar1 = (void *)*puVar3;
    if (local_18.Data.ArrayNum == 0) {
      local_18.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
                 &local_18.Data.ArrayMax);
      memcpy(local_18.Data.AllocatorInstance.Data,pvVar1,lVar6 * 2);
    }
    ::FString::ReplaceCharWithEscapedCharInline
              (&local_18,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar7);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    iVar7 = 2;
    pwVar5 = L"\")";
  }
  ::FString::AppendChars(param_1,pwVar5,iVar7);
  return;
}

// WriteToString @ 141785b30

bool __cdecl FTextStringHelper::WriteToString(FString *param_1,FText *param_2,bool param_3)

{
  WriteToBuffer(param_1,param_2,param_3,false);
  return true;
}

