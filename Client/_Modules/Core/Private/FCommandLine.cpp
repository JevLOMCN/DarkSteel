// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 23

// operator() @ 141817150

void __thiscall
`FCommandLine::FilterCLIUsingGrammarBasedParser'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  size_t _Size;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  wchar_t *local_48;
  int iStack_40;
  
  iVar1 = param_1->Size;
  pwVar2 = param_1->DataPtr;
  iVar3 = iVar1;
  if (1 < iVar1) {
    iVar3 = 1;
  }
  iVar7 = 0;
  iVar4 = iVar7;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  if ((iVar4 == 1) && (iVar3 = FGenericPlatformStricmp::Strnicmp(L"-",pwVar2,1), iVar3 == 0)) {
    iVar3 = iVar1;
    if (iVar1 + -1 < iVar1) {
      iVar3 = iVar1 + -1;
    }
    iStack_40 = iVar7;
    if (0 < iVar3) {
      iStack_40 = iVar3;
    }
    local_48 = pwVar2 + ((longlong)iVar1 - (longlong)iStack_40);
  }
  else {
    local_48 = param_1->DataPtr;
    iStack_40 = (int)*(undefined8 *)&param_1->Size;
  }
  puVar6 = (undefined8 *)**(longlong **)((longlong)this + 0x20);
  puVar5 = puVar6 + (longlong)(int)(*(longlong **)((longlong)this + 0x20))[1] * 2;
  do {
    if (puVar6 == puVar5) {
      return;
    }
    iVar3 = *(int *)(puVar6 + 1) + -1;
    if (*(int *)(puVar6 + 1) == 0) {
      iVar3 = iVar7;
    }
    if (iStack_40 == iVar3) {
      if ((iStack_40 != 0) && (iVar3 != 0)) {
        iVar4 = iVar3;
        if (iStack_40 < iVar3) {
          iVar4 = iStack_40;
        }
        iVar4 = FGenericPlatformStricmp::Strnicmp(local_48,(wchar_t *)*puVar6,(longlong)iVar4);
        if (iVar4 != 0) goto LAB_141817259;
      }
      if (iStack_40 == iVar3) {
        iVar3 = param_2->Size;
        iVar4 = iVar3 + (uint)(**(longlong **)((longlong)this + 0x18) != *(longlong *)this) + iVar1;
        **(byte **)((longlong)this + 0x10) =
             **(byte **)((longlong)this + 0x10) | *(int *)((longlong)this + 8) <= iVar4;
        if (**(char **)((longlong)this + 0x10) != '\0') {
          return;
        }
        *(int *)((longlong)this + 8) = *(int *)((longlong)this + 8) - iVar4;
        if ((undefined2 *)**(undefined8 **)((longlong)this + 0x18) != *(undefined2 **)this) {
          *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 0x20;
          **(longlong **)((longlong)this + 0x18) = **(longlong **)((longlong)this + 0x18) + 2;
        }
        _Size = (longlong)iVar1 * 2;
        memmove((void *)**(undefined8 **)((longlong)this + 0x18),pwVar2,_Size);
        **(longlong **)((longlong)this + 0x18) = **(longlong **)((longlong)this + 0x18) + _Size;
        if (iVar3 == 0) {
          return;
        }
        pwVar2 = param_2->DataPtr;
        *(undefined2 *)**(undefined8 **)((longlong)this + 0x18) = 0x3d;
        **(longlong **)((longlong)this + 0x18) = **(longlong **)((longlong)this + 0x18) + 2;
        memmove((void *)**(undefined8 **)((longlong)this + 0x18),pwVar2,(longlong)iVar3 * 2);
        **(longlong **)((longlong)this + 0x18) =
             **(longlong **)((longlong)this + 0x18) + (longlong)iVar3 * 2;
        return;
      }
    }
LAB_141817259:
    puVar6 = puVar6 + 2;
  } while( true );
}

// AddToSubprocessCommandLine @ 141819cb0

void __cdecl
FCommandLine::AddToSubprocessCommandLine(wchar_t *param_1,ECommandLineArgumentFlags param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *this;
  size_t sVar3;
  
  if ((param_2 & AllContexts) != None) {
    this = GetSubprocessCommandLine_Internal(param_2);
    if (param_1 == (wchar_t *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CommandLine.cpp"
                         ,0x171,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*param_1 != L' ') {
      ::FString::AppendChars(this,L" ",1);
    }
    sVar3 = wcslen(param_1);
    ::FString::AppendChars(this,param_1,(int)sVar3);
  }
  return;
}

// AddToSubprocessCommandLine_Internal @ 141819d40

void __cdecl
FCommandLine::AddToSubprocessCommandLine_Internal
          (wchar_t *param_1,ECommandLineArgumentFlags param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *this;
  size_t sVar3;
  
  this = GetSubprocessCommandLine_Internal(param_2);
  if (param_1 == (wchar_t *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Param != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CommandLine.cpp"
                       ,0x171,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*param_1 != L' ') {
    ::FString::AppendChars(this,L" ",1);
  }
  sVar3 = wcslen(param_1);
  ::FString::AppendChars(this,param_1,(int)sVar3);
  return;
}

// AddToSubprocessCommandline @ 141819dd0

void __cdecl FCommandLine::AddToSubprocessCommandline(wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *this;
  size_t sVar3;
  
  this = GetSubprocessCommandLine_Internal(AllContexts);
  if (param_1 == (wchar_t *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Param != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CommandLine.cpp"
                       ,0x171,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*param_1 != L' ') {
    ::FString::AppendChars(this,L" ",1);
  }
  sVar3 = wcslen(param_1);
  ::FString::AppendChars(this,param_1,(int)sVar3);
  return;
}

// Append @ 14181c0e0

void __cdecl FCommandLine::Append(wchar_t *param_1)

{
  size_t sVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t wVar4;
  
  wVar4 = *param_1;
  if (wVar4 == L'\0') {
    CmdLineVersion = CmdLineVersion + 1;
    return;
  }
  sVar1 = wcslen(CmdLine);
  iVar3 = (int)sVar1 + 1;
  if (iVar3 < 0x4000) {
    pwVar2 = CmdLine + (int)sVar1;
    do {
      *pwVar2 = wVar4;
      param_1 = param_1 + 1;
      wVar4 = *param_1;
      pwVar2 = pwVar2 + 1;
      iVar3 = iVar3 + 1;
      if (wVar4 == L'\0') break;
    } while (iVar3 < 0x4000);
    *pwVar2 = L'\0';
  }
  CmdLineVersion = CmdLineVersion + 1;
  return;
}

// BuildFromArgV @ 14181d200

FString * __cdecl
FCommandLine::BuildFromArgV
          (FString *__return_storage_ptr__,char *param_1,int param_2,char **param_3,char *param_4)

{
  BuildFromArgVImpl<char>(__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// BuildFromArgV @ 14181d230

FString * __cdecl
FCommandLine::BuildFromArgV
          (FString *__return_storage_ptr__,wchar_t *param_1,int param_2,wchar_t **param_3,
          wchar_t *param_4)

{
  BuildFromArgVImpl<wchar_t>(__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// BuildSubprocessCommandLine @ 14181d260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FCommandLine::BuildSubprocessCommandLine
          (ECommandLineArgumentFlags param_1,bool param_2,TStringBuilderBase<wchar_t> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  byte bVar3;
  ForAnyElementType FVar4;
  TMap<FString,FCommandLine::FRegisteredArgData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FCommandLine::FRegisteredArgData,0>_>
  *pTVar5;
  bool bVar6;
  FString *pFVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  ulong64 uVar12;
  ECommandLineArgumentFlags EVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 local_res20 [8];
  FString local_d8;
  wchar_t *local_c8;
  int local_c0;
  int local_bc;
  TMap<FString,FCommandLine::FRegisteredArgData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FCommandLine::FRegisteredArgData,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<FString,FCommandLine::FRegisteredArgData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FCommandLine::FRegisteredArgData,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  if ((param_1 & AllContexts) != None) {
    if (!param_2) {
      EVar13 = EditorContext;
      do {
        if ((param_1 & EVar13) != None) {
          pFVar7 = GetSubprocessCommandLine_Internal(EVar13);
          TStringBuilderBase<wchar_t>::Append<FString_&>(param_3,pFVar7);
        }
        EVar13 = EVar13 + EditorContext;
      } while ((int)EVar13 < 0x1f);
      pFVar7 = GetSubprocessCommandLine_Internal(AllContexts);
      TStringBuilderBase<wchar_t>::Append<FString_&>(param_3,pFVar7);
    }
    if (bIsInitialized == false) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    local_c8 = CmdLine;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    bVar6 = FParse::Token(&local_c8,&local_d8,false,L'\0');
    if (bVar6) {
LAB_14181d340:
      iVar14 = 0;
      uVar15 = 0;
      bVar6 = ::FString::StartsWith(&local_d8,L"-",1,IgnoreCase);
      if (bVar6) {
        uStack_ac = 1;
        uVar17 = local_d8.Data.ArrayNum - 1;
        if (local_d8.Data.ArrayNum == 0) {
          uVar17 = uVar15;
        }
        uVar19 = uVar17;
        if ((int)(uVar17 - 1) < (int)uVar17) {
          uVar19 = uVar17 - 1;
        }
        uVar20 = uVar15;
        if (0 < (int)uVar19) {
          uVar20 = uVar19;
        }
        pFVar1 = local_d8.Data.AllocatorInstance.Data +
                 ((longlong)(int)uVar17 - (longlong)(int)uVar20) * 2;
        uVar17 = RegisteredArgs._40_4_;
        uStack_9c = uVar15;
        iStack_b0 = iVar14;
        local_98 = iVar14;
        if (uVar17 != 0) {
          puVar18 = (uint *)&RegisteredArgs.field_0x10;
          if (RegisteredArgs._32_8_ != 0) {
            puVar18 = (uint *)RegisteredArgs._32_8_;
          }
          uVar15 = *puVar18;
          while (uVar15 == 0) {
            lVar9 = (longlong)iStack_b0;
            local_98 = local_98 + 0x20;
            iStack_b0 = iStack_b0 + 1;
            uStack_9c = uVar17;
            if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_b0)
            goto LAB_14181d41d;
            uVar15 = puVar18[lVar9 + 1];
          }
          uStack_ac = -uVar15 & uVar15;
          uVar21 = (ulonglong)uStack_ac * 2 + 1;
          lVar9 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          local_c0 = (int)lVar9;
          uStack_9c = local_98 + -1 + local_c0;
          if ((int)uVar17 < (int)uStack_9c) {
            uStack_9c = uVar17;
          }
        }
LAB_14181d41d:
        local_b8 = &RegisteredArgs;
        bVar3 = RegisteredArgs._40_1_;
        uStack_94 = local_3c;
        uVar21 = RegisteredArgs._40_8_ & 0xffffffff;
        iStack_90 = RegisteredArgs._8_4_ - RegisteredArgs._52_4_;
        local_a8 = 0x154b78980;
        uVar15 = uVar17 & 0xffffffe0;
        TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
        uStack_a0 = 0xffffffff;
        TStack_80.CurrentBitIndex = uStack_9c;
        TStack_80.UnvisitedBitMask = 0xffffffff;
        local_88 = &RegisteredArgs;
        iVar14 = (int)uVar17 >> 5;
        TStack_80._28_4_ = local_3c;
        TStack_80.BaseBitIndex = local_98;
        uStack_60 = CONCAT44(uStack_8c,iStack_90);
        TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&RegisteredArgs.field_0x10;
        if (((int)uVar17 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar19 = RegisteredArgs._40_4_;
        if (uVar17 != uVar19) {
          uVar21 = RegisteredArgs._40_8_ & 0xffffffff;
          lVar9 = 0x154b78980;
          if (RegisteredArgs._32_8_ != 0) {
            lVar9 = RegisteredArgs._32_8_;
          }
          uVar17 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar9 + (longlong)iVar14 * 4);
          while (uVar17 == 0) {
            lVar10 = (longlong)iVar14;
            uVar15 = uVar15 + 0x20;
            iVar14 = iVar14 + 1;
            if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
            goto LAB_14181d530;
            uVar17 = *(uint *)(lVar9 + 4 + lVar10 * 4);
          }
          uVar21 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
          lVar9 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          local_bc = (int)lVar9;
          uVar15 = local_bc + -1 + uVar15;
          if ((int)uVar19 < (int)uVar15) {
            uVar15 = uVar19;
          }
          uVar21 = (ulonglong)uVar15;
        }
LAB_14181d530:
        do {
          pTVar5 = local_88;
          if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
            local_res20[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FString,FCommandLine::FRegisteredArgData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (((TStack_80.CurrentBitIndex == (int)uVar21) &&
              (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)&RegisteredArgs.field_0x10
              )) && (pTVar5 == &RegisteredArgs)) break;
          puVar16 = (undefined8 *)((longlong)TStack_80.CurrentBitIndex * 0x30 + *(longlong *)pTVar5)
          ;
          if (((*(ECommandLineArgumentFlags *)(puVar16 + 2) & Inherit) != None) &&
             ((param_1 & *(ECommandLineArgumentFlags *)(puVar16 + 2)) != None)) {
            uVar15 = *(int *)(puVar16 + 1) - 1;
            if (*(int *)(puVar16 + 1) == 0) {
              uVar15 = 0;
            }
            uVar17 = uVar20;
            if ((int)uVar15 < (int)uVar20) {
              uVar17 = uVar15;
            }
            uVar19 = 0;
            if (0 < (int)uVar17) {
              uVar19 = uVar17;
            }
            if ((uVar15 == uVar19) &&
               ((((uVar15 == 0 || (uVar19 == 0)) ||
                 (iVar14 = FGenericPlatformStricmp::Strnicmp
                                     ((wchar_t *)*puVar16,(wchar_t *)pFVar1,(longlong)(int)uVar19),
                 iVar14 == 0)) && (uVar15 == uVar19)))) {
              iVar14 = *(int *)(puVar16 + 1);
              uVar15 = iVar14 - 1;
              uVar17 = uVar15;
              if (iVar14 == 0) {
                uVar17 = 0;
              }
              if (uVar20 == uVar17) goto LAB_14181d652;
              uVar17 = 0;
              if ((((iVar14 != 0) && (uVar17 = uVar15, (int)uVar15 < 0)) ||
                  (uVar15 = uVar17, (int)uVar20 <= (int)uVar15)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index >= 0 && Index < Size",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                     ,0x234,
                                     L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                    ), bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (*(short *)(pFVar1 + (longlong)(int)uVar15 * 2) == 0x3d) goto LAB_14181d652;
            }
          }
          TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
        } while( true );
      }
      goto LAB_14181d6e4;
    }
LAB_14181d71f:
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  return;
LAB_14181d652:
  pwVar11 = param_3->CurPos;
  if ((int)((longlong)pwVar11 - (longlong)param_3->Base >> 1) != 0) {
    if (param_3->End < pwVar11 + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_3,1);
    }
    *param_3->CurPos = L' ';
    param_3->CurPos = param_3->CurPos + 1;
    pwVar11 = param_3->CurPos;
  }
  FVar4.Data = local_d8.Data.AllocatorInstance.Data;
  iVar14 = local_d8.Data.ArrayNum + -1;
  if (local_d8.Data.ArrayNum == 0) {
    iVar14 = 0;
  }
  uVar12 = (ulong64)iVar14;
  if (param_3->End < pwVar11 + uVar12) {
    TStringBuilderBase<wchar_t>::Extend(param_3,uVar12);
  }
  if (iVar14 != 0) {
    pvVar8 = FGenericPlatformString::Memcpy(param_3->CurPos,FVar4.Data,uVar12 * 2);
    param_3->CurPos = (wchar_t *)((longlong)pvVar8 + uVar12 * 2);
  }
LAB_14181d6e4:
  bVar6 = FParse::Token(&local_c8,&local_d8,false,L'\0');
  if (!bVar6) goto LAB_14181d71f;
  goto LAB_14181d340;
}

// FilterCLIUsingGrammarBasedParser @ 1418234d0

bool __cdecl
FCommandLine::FilterCLIUsingGrammarBasedParser
          (wchar_t *param_1,int param_2,wchar_t *param_3,TArrayView<FString,int> *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char local_res10 [8];
  wchar_t *local_58;
  code *local_50;
  wchar_t **local_48;
  FGrammarBasedParseResult local_40;
  wchar_t *local_30;
  int local_28;
  char *local_20;
  wchar_t **local_18;
  TArrayView<FString,int> *local_10;
  
  if (param_2 != 0) {
    if (((param_1 == (wchar_t *)0x0) || (param_2 < 1)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutLine && MaxLen > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CommandLine.cpp"
                           ,0xa1,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (param_4->ArrayNum == 0) {
      *param_1 = L'\0';
      return true;
    }
    local_20 = local_res10;
    local_18 = &local_58;
    local_res10[0] = '\0';
    local_48 = &local_30;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<`FCommandLine::FilterCLIUsingGrammarBasedParser'::__l2::<lambda_1>,void,TStringView<wchar_t>,TStringView<wchar_t>_>
               ::Call;
    local_58 = param_1;
    local_30 = param_1;
    local_28 = param_2;
    local_10 = param_4;
    FParse::GrammarBasedCLIParse
              (&local_40,param_3,
               (TFunctionRef<void___cdecl(TStringView<wchar_t>,TStringView<wchar_t>)> *)&local_50,
               AllowQuotedCommands);
    if (local_res10[0] == '\0') {
      *local_58 = L'\0';
      return true;
    }
  }
  return false;
}

// Get @ 141824780

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl FCommandLine::Get(void)

{
  if (!bIsInitialized) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  return CmdLine;
}

// GetCommandLineVersion @ 1418254e0

uint __cdecl FCommandLine::GetCommandLineVersion(void)

{
  return CmdLineVersion;
}

// GetForLogging @ 1418262e0

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl FCommandLine::GetForLogging(void)

{
  if (!bIsInitialized) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  return LoggingCmdLine;
}

// GetOriginal @ 141826780

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl FCommandLine::GetOriginal(void)

{
  if (!bIsInitialized) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  return OriginalCmdLine;
}

// GetOriginalForLogging @ 1418267c0

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl FCommandLine::GetOriginalForLogging(void)

{
  if (!bIsInitialized) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  return LoggingOriginalCmdLine;
}

// GetSubprocessCommandLine_Internal @ 141827560

FString * __cdecl FCommandLine::GetSubprocessCommandLine_Internal(ECommandLineArgumentFlags param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FString *pFVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,0x1f,(ForAnyElementType *)&SubprocessCommandLines,
                         (int *)&SubprocessCommandLines.field_0x8,
                         (int *)&SubprocessCommandLines.field_0xc);
      memset((void *)((longlong)iVar5 * 0x10 + SubprocessCommandLines._0_8_),0,0x1f0);
      if (SubprocessCommandLines._8_4_ < 0x1f) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
      }
      ::FString::operator=((FString *)(SubprocessCommandLines._0_8_ + 0x1e0),L" -Multiprocess");
      atexit(`FCommandLine::GetSubprocessCommandLine_Internal'::__l2::
             _dynamic_atexit_destructor_for__SubprocessCommandLines__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  uVar1 = (param_1 & AllContexts) - EditorContext;
  if ((int)uVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CommandLine.cpp"
                       ,0x25,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
  }
  uVar4 = 0;
  if ((int)uVar1 < SubprocessCommandLines._8_4_) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
  }
  return (FString *)
         (SubprocessCommandLines._0_8_ + -0x10 + (ulonglong)(param_1 & AllContexts) * 0x10);
}

// GetSubprocessCommandline @ 141827730

FString * __cdecl FCommandLine::GetSubprocessCommandline(void)

{
  FString *pFVar1;
  
  pFVar1 = GetSubprocessCommandLine_Internal(AllContexts);
  return pFVar1;
}

// IsCommandLineLoggingFiltered @ 14182a430

bool __cdecl FCommandLine::IsCommandLineLoggingFiltered(void)

{
  return false;
}

// IsInitialized @ 14182aac0

bool __cdecl FCommandLine::IsInitialized(void)

{
  return bIsInitialized;
}

// Parse @ 14182cd80

/* WARNING: Removing unreachable block (ram,0x00014182ceca) */
/* WARNING: Removing unreachable block (ram,0x00014182cfd9) */

void __cdecl
FCommandLine::Parse(wchar_t *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
                   TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  wchar_t *local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_res8 = param_1;
  bVar3 = FParse::Token(&local_res8,&local_48,false,L'\0');
  if (bVar3) {
    do {
      if ((local_48.Data.ArrayNum == 0) ||
         (*(wchar_t *)local_48.Data.AllocatorInstance.Data != L'-')) {
        pFVar6 = (param_2->AllocatorInstance).Data;
        if ((pFVar6 <= (FScriptContainerElement *)&local_48) &&
           (((FScriptContainerElement *)&local_48 < pFVar6 + (longlong)param_2->ArrayMax * 0x10 &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)))) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = param_2->ArrayNum;
        if (iVar4 == param_2->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar4 + 1;
        pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
        *(undefined8 *)pFVar6 = 0;
        *(FScriptContainerElement **)pFVar6 = local_48.Data.AllocatorInstance.Data;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar6 + 8) = local_48.Data.ArrayNum;
        *(int *)(pFVar6 + 0xc) = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
      }
      else {
        ::FString::RightChop(&local_48,&local_38,1);
        pFVar6 = (param_3->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)param_3->ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = param_3->ArrayNum;
        if (iVar4 == param_3->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar4 + 1;
        pFVar6 = (param_3->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
        *(undefined8 *)pFVar6 = 0;
        *(FScriptContainerElement **)pFVar6 = local_38.Data.AllocatorInstance.Data;
        *(int *)(pFVar6 + 8) = local_38.Data.ArrayNum;
        *(int *)(pFVar6 + 0xc) = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar7 = local_48.Data.ArrayNum + -1;
        iVar4 = local_48.Data.ArrayNum + -2;
        FVar2.Data = local_48.Data.AllocatorInstance.Data;
        if (local_48.Data.ArrayNum == 0) {
          iVar4 = -1;
          iVar7 = 0;
          FVar2.Data = (FScriptContainerElement *)L"";
        }
        iVar5 = iVar7;
        if (iVar4 < iVar7) {
          iVar5 = iVar4;
        }
        iVar4 = 0;
        if (0 < iVar5) {
          iVar4 = iVar5;
        }
        ::FString::FString(&local_28,
                           (wchar_t *)(FVar2.Data + ((longlong)iVar7 - (longlong)iVar4) * 2));
        pFVar6 = (param_2->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_28) &&
            ((FScriptContainerElement *)&local_28 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = param_2->ArrayNum;
        if (iVar4 == param_2->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar4 + 1;
        pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
        *(undefined8 *)pFVar6 = 0;
        *(FScriptContainerElement **)pFVar6 = local_28.Data.AllocatorInstance.Data;
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar6 + 8) = local_28.Data.ArrayNum;
        *(int *)(pFVar6 + 0xc) = local_28.Data.ArrayMax;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
      }
      bVar3 = FParse::Token(&local_res8,&local_48,false,L'\0');
    } while (bVar3);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// RegisterArgument @ 14182db60

void __cdecl
FCommandLine::RegisterArgument
          (TStringView<wchar_t> *param_1,ECommandLineArgumentFlags param_2,
          TStringView<wchar_t> *param_3)

{
  ForAnyElementType FVar1;
  uint uVar2;
  FString *pFVar3;
  FRegisteredArgData *pFVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 & AllContexts) != None) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    pFVar3 = ::FString::ConstructFromPtrSize
                       (&local_18,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    if (&local_28 != pFVar3) {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      local_28.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_28.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    iVar5 = local_28.Data.ArrayNum + -1;
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.ArrayNum == 0) {
      iVar5 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar1.Data);
    pFVar4 = TMapBase<FString,FCommandLine::FRegisteredArgData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FCommandLine::FRegisteredArgData,0>_>
             ::FindOrAddImpl<FString>
                       ((TMapBase<FString,FCommandLine::FRegisteredArgData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FCommandLine::FRegisteredArgData,0>_>
                         *)&RegisteredArgs,uVar2,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar4->Flags = pFVar4->Flags | param_2;
    ::FString::AssignRange(&pFVar4->Description,param_3->DataPtr,(int)*(undefined8 *)&param_3->Size)
    ;
  }
  return;
}

// RemoveExeName @ 14182fdb0

wchar_t * __cdecl FCommandLine::RemoveExeName(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  wVar1 = *param_1;
  if (wVar1 == L'\"') {
    wVar1 = param_1[1];
    pwVar2 = param_1;
    while ((param_1 = pwVar2 + 1, wVar1 != L'\0' && (wVar1 != L'\"'))) {
      wVar1 = pwVar2[2];
      pwVar2 = param_1;
    }
    if (*param_1 == L'\0') goto LAB_14182fe04;
    wVar1 = pwVar2[2];
    param_1 = pwVar2 + 2;
  }
  if (wVar1 != L'\0') {
    wVar1 = *param_1;
    do {
      if (wVar1 == L' ') break;
      wVar1 = param_1[1];
      param_1 = param_1 + 1;
    } while (wVar1 != L'\0');
  }
LAB_14182fe04:
  wVar1 = *param_1;
  while (wVar1 == L' ') {
    param_1 = param_1 + 1;
    wVar1 = *param_1;
  }
  return param_1;
}

// Reset @ 14182fed0

void __cdecl FCommandLine::Reset(void)

{
  CmdLineVersion = CmdLineVersion + 1;
  CmdLine[0] = L'\0';
  OriginalCmdLine[0] = L'\0';
  LoggingCmdLine[0] = L'\0';
  LoggingOriginalCmdLine[0] = L'\0';
  bIsInitialized = false;
  return;
}

// Set @ 141832190

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FCommandLine::Set(wchar_t *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  size_t sVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FText *pFVar8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_128;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_118;
  FText local_108;
  FText local_f8;
  FTextFormat local_e8;
  FTextFormat local_d8;
  FFormatArgumentValue local_c8;
  undefined4 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined4 local_90;
  FFormatArgumentValue local_88;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  FText local_38;
  FTextFormat local_28;
  
  if (!bIsInitialized) {
    wcsncpy(OriginalCmdLine,param_1,0x3fff);
    OriginalCmdLine[0x3fff] = L'\0';
    wcsncpy(LoggingOriginalCmdLine,param_1,0x3fff);
    LoggingOriginalCmdLine[0x3fff] = L'\0';
  }
  wcsncpy(CmdLine,param_1,0x3fff);
  CmdLine[0x3fff] = L'\0';
  wcsncpy(LoggingCmdLine,param_1,0x3fff);
  CmdLineVersion = CmdLineVersion + 1;
  LoggingCmdLine[0x3fff] = L'\0';
  bIsInitialized = true;
  sVar5 = wcslen(param_1);
  if ((ulonglong)(longlong)(int)sVar5 < 0x4000) {
LAB_141832418:
    bVar3 = StringHasBadDashes(param_1);
    if (bVar3) {
      pFVar6 = FText::FromString(&local_38,param_1);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_58,L"Engine",L"CmdLineHasInvalidChar",
                          L"Error: Command-line contains an invalid \'-\' character, likely pasted from an email.\nCmdline = {0}"
                         );
      pFVar7 = FTextFormat::FTextFormat(&local_28,pFVar8,Default);
      local_88.Type = Text;
      FText::FText((FText *)&local_88.TextValue,pFVar6);
      if ((local_88.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_118.AllocatorInstance.Data,&local_88,1);
      local_d8.TextFormatData.Object = (pFVar7->TextFormatData).Object;
      local_d8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar7->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_d8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_f8,&local_d8,&local_118);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
      if ((FFormatArgumentValue *)local_118.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar1 = (pFVar6->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if (bIsInitialized == false) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      bVar3 = FParse::Param(CmdLine,L"UNATTENDED");
      if (!bVar3) {
        FMessageDialog::Open(Ok,&local_f8);
        local_108.TextData.Reference = local_f8.TextData.Reference;
        goto LAB_1418325bc;
      }
      FText::ToString(&local_f8);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
    }
    bVar3 = true;
  }
  else {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"Engine",L"CmdLineTooLong",
                        L"Error: Command-line exceeds internal storage limit.\nLength = {0}\nLimit={1}"
                       );
    pFVar7 = FTextFormat::FTextFormat(&local_48,pFVar6,Default);
    local_c8.Type = Int;
    local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_c8.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_a8 = 0;
    local_98 = (longlong *)0x0;
    local_90 = 0;
    local_a0 = 0x3fff;
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 2;
    local_c8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)sVar5;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_128.AllocatorInstance,2,&local_128.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_128.AllocatorInstance.Data,&local_c8,2);
    local_e8.TextFormatData.Object = (pFVar7->TextFormatData).Object;
    local_e8.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar7->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_e8.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_e8.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_108,&local_e8,&local_128);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
    if ((FFormatArgumentValue *)local_128.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
    if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (bIsInitialized == false) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    bVar3 = FParse::Param(CmdLine,L"UNATTENDED");
    if (bVar3) {
      FText::ToString(&local_108);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      goto LAB_141832418;
    }
    FMessageDialog::Open(Ok,&local_108);
LAB_1418325bc:
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    bVar3 = false;
  }
  return bVar3;
}

