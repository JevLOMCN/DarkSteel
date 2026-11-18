// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// operator() @ 145e489d0

void __thiscall
`FCompactFullName::ParseFromString'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1)

{
  undefined8 *puVar1;
  ForElementType<TStringView<wchar_t>_> FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TStringView<wchar_t>_> FVar7;
  
  if (param_1->Size != 0) {
    FVar2 = *(ForElementType<TStringView<wchar_t>_> *)this;
    FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x400);
    if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x400) ==
        (ForElementType<TStringView<wchar_t>_>)0x0) {
      FVar7 = FVar2;
    }
    if (((ulonglong)FVar7 <= param_1) &&
       (param_1 < (TStringView<wchar_t> *)
                  ((longlong)*(int *)((longlong)FVar2 + 0x40c) * 0x10 + (longlong)FVar7))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = *(int *)((longlong)FVar2 + 0x408);
    if (iVar6 == *(int *)((longlong)FVar2 + 0x40c)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
                        (0x810,(ForElementType<TStringView<wchar_t>_> *)FVar2,
                         (int *)((longlong)FVar2 + 0x40c));
    }
    *(int *)((longlong)FVar2 + 0x408) = iVar6 + 1;
    uVar4 = *(undefined8 *)&param_1->Size;
    FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x400);
    if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x400) ==
        (ForElementType<TStringView<wchar_t>_>)0x0) {
      FVar7 = FVar2;
    }
    puVar1 = (undefined8 *)((longlong)FVar7 + (longlong)iVar6 * 0x10);
    *puVar1 = param_1->DataPtr;
    puVar1[1] = uVar4;
  }
  return;
}

// AppendString @ 145e4c600

void __thiscall
FCompactFullName::AppendString(FCompactFullName *this,TStringBuilderBase<char> *param_1)

{
  int iVar1;
  ForElementType<FName> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  ForElementType<FName> FVar7;
  uint uVar8;
  ulonglong uVar9;
  
  iVar1 = (this->ObjectClassAndPath).ArrayNum;
  if (iVar1 == 0) {
    if (param_1->End < param_1->CurPos + 5) {
      TStringBuilderBase<char>::Extend(param_1,5);
    }
    pvVar6 = FGenericPlatformString::Memcpy(param_1->CurPos,"empty",5);
    param_1->CurPos = (char *)((longlong)pvVar6 + 5);
    return;
  }
  uVar9 = 0;
  if (0 < iVar1) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->ObjectClassAndPath).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = (this->ObjectClassAndPath).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FName>)this;
      if (FVar2 != (ForElementType<FName>)0x0) {
        FVar7 = FVar2;
      }
      AppendFNameAsUTF8(param_1,(FName *)((longlong)FVar7 + uVar9 * 8));
      if (uVar8 == 0) {
        if (param_1->End < param_1->CurPos + 1) {
          TStringBuilderBase<char>::Extend(param_1,1);
        }
        *param_1->CurPos = ' ';
LAB_145e4c75c:
        param_1->CurPos = param_1->CurPos + 1;
      }
      else if ((int)uVar8 < iVar1 + -1) {
        if (uVar8 == iVar1 - 2U) {
          if (param_1->End < param_1->CurPos + 1) {
            TStringBuilderBase<char>::Extend(param_1,1);
          }
          *param_1->CurPos = '.';
        }
        else {
          if (param_1->End < param_1->CurPos + 1) {
            TStringBuilderBase<char>::Extend(param_1,1);
          }
          *param_1->CurPos = '/';
        }
        goto LAB_145e4c75c;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
    } while ((int)(uVar8 + 1) < iVar1);
  }
  return;
}

// AppendString @ 145e4c790

void __thiscall
FCompactFullName::AppendString(FCompactFullName *this,TStringBuilderBase<wchar_t> *param_1)

{
  int iVar1;
  ForElementType<FName> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<FName> FVar6;
  uint uVar7;
  ulonglong uVar8;
  
  iVar1 = (this->ObjectClassAndPath).ArrayNum;
  if (iVar1 == 0) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"empty",5);
    return;
  }
  uVar8 = 0;
  if (0 < iVar1) {
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < (this->ObjectClassAndPath).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = (this->ObjectClassAndPath).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<FName>)this;
      if (FVar2 != (ForElementType<FName>)0x0) {
        FVar6 = FVar2;
      }
      ::FName::AppendString((FName *)((longlong)FVar6 + uVar8 * 8),param_1);
      if (uVar7 == 0) {
        if (param_1->End < param_1->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_1,1);
        }
        *param_1->CurPos = L' ';
LAB_145e4c8d4:
        param_1->CurPos = param_1->CurPos + 1;
      }
      else if ((int)uVar7 < iVar1 + -1) {
        if (uVar7 == iVar1 - 2U) {
          if (param_1->End < param_1->CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(param_1,1);
          }
          *param_1->CurPos = L'.';
        }
        else {
          if (param_1->End < param_1->CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(param_1,1);
          }
          *param_1->CurPos = L'/';
        }
        goto LAB_145e4c8d4;
      }
      uVar8 = (ulonglong)(uVar7 + 1);
    } while ((int)(uVar7 + 1) < iVar1);
  }
  return;
}

// ParseFromString @ 145e65880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCompactFullName::ParseFromString(FCompactFullName *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FName> FVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  ForElementType<FName> FVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 auStackY_538 [32];
  undefined1 local_508 [16];
  FString local_4f8;
  undefined8 *local_4e8 [2];
  wchar_t *local_4d8;
  int iStack_4d0;
  undefined4 uStack_4cc;
  code *local_4c8;
  undefined8 **local_4c0;
  FName local_4b8;
  FName local_4b0;
  FName local_4a8;
  FName local_4a0;
  TArrayView<wchar_t_const_,int> local_498;
  TStringView<wchar_t> local_488;
  wchar_t *local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined4 local_458;
  undefined2 local_454;
  undefined8 local_450 [128];
  undefined8 *local_50;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_538;
  pwVar11 = param_1->DataPtr;
  local_4e8[0] = local_450;
  local_4c0 = local_4e8;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  local_4c8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FCompactFullName::ParseFromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
              ::Call;
  local_44 = 0x40;
  local_454 = 9;
  local_4d8 = (wchar_t *)&local_458;
  local_458 = 0x2e0020;
  iStack_4d0 = 3;
  pwVar2 = pwVar11 + param_1->Size;
  iVar13 = 0;
  while ((pwVar11 != pwVar2 && (iVar8 = iswspace(*pwVar11), iVar8 != 0))) {
    iVar13 = iVar13 + 1;
    pwVar11 = pwVar11 + 1;
  }
  pFVar3 = (FScriptContainerElement *)(param_1->DataPtr + iVar13);
  iVar13 = param_1->Size - iVar13;
  if (iVar13 != 0) {
    lVar14 = (longlong)iVar13;
    do {
      iVar8 = iswspace(*(wint_t *)(pFVar3 + lVar14 * 2 + -2));
      if (iVar8 == 0) break;
      iVar13 = iVar13 + -1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  local_498._12_4_ = uStack_4cc;
  local_498.ArrayNum = iStack_4d0;
  local_488._12_4_ = local_4f8.Data.ArrayMax;
  local_488.Size = iVar13;
  local_498.DataPtr = local_4d8;
  local_4f8.Data.AllocatorInstance.Data = pFVar3;
  local_4f8.Data.ArrayNum = iVar13;
  local_488.DataPtr = (wchar_t *)pFVar3;
  UE::String::ParseTokensMultiple
            (&local_488,&local_498,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_4c8,
             None);
  if (local_48 == 1) {
    puVar10 = local_450;
    if (local_50 != (undefined8 *)0x0) {
      puVar10 = local_50;
    }
    if ((*(int *)(puVar10 + 1) == 5) &&
       (iVar13 = FGenericPlatformStricmp::Strnicmp((wchar_t *)*puVar10,L"empty",5), iVar13 == 0)) {
      piVar1 = &(this->ObjectClassAndPath).ArrayMax;
      (this->ObjectClassAndPath).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                  (8,4,0,(ForElementType<FName> *)this,0,piVar1);
      }
      goto LAB_145e65e08;
    }
  }
  if (local_48 == 3) {
    puVar10 = local_450;
    if (local_50 != (undefined8 *)0x0) {
      puVar10 = local_50;
    }
    if ((*(int *)(puVar10 + 3) < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(short *)puVar10[2] != 0x2f) {
      piVar1 = &(this->ObjectClassAndPath).ArrayMax;
      (this->ObjectClassAndPath).ArrayNum = 0;
      if (*piVar1 != 3) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                  (8,4,3,(ForElementType<FName> *)this,0,piVar1);
      }
      if (((int)local_48 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar13 = (this->ObjectClassAndPath).ArrayNum;
      puVar10 = local_450;
      if (local_50 != (undefined8 *)0x0) {
        puVar10 = local_50;
      }
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                           (0x408,(ForElementType<FName> *)this,piVar1);
      }
      (this->ObjectClassAndPath).ArrayNum = iVar13 + 1;
      FVar4 = (this->ObjectClassAndPath).AllocatorInstance.SecondaryData;
      local_478 = (wchar_t *)*puVar10;
      uStack_470 = puVar10[1];
      FVar12 = (ForElementType<FName>)this;
      if (FVar4 != (ForElementType<FName>)0x0) {
        FVar12 = FVar4;
      }
      pFVar9 = ::FName::FName(&local_4b8,(int)puVar10[1],local_478,FNAME_Add);
      *(FName *)((longlong)FVar12 + (longlong)iVar13 * 8) = *pFVar9;
      ::FString::FString(&local_4f8,L"/");
      if (((int)local_48 < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar10 = local_450;
      if (local_50 != (undefined8 *)0x0) {
        puVar10 = local_50;
      }
      local_468 = puVar10[2];
      uStack_460 = puVar10[3];
      ::FString::AppendChars(&local_4f8,(wchar_t *)puVar10[2],(int)puVar10[3]);
      iVar13 = (this->ObjectClassAndPath).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                           (0x408,(ForElementType<FName> *)this,piVar1);
      }
      (this->ObjectClassAndPath).ArrayNum = iVar13 + 1;
      FVar4 = (this->ObjectClassAndPath).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FName>)this;
      if (FVar4 != (ForElementType<FName>)0x0) {
        FVar12 = FVar4;
      }
      iVar8 = local_4f8.Data.ArrayNum + -1;
      if (local_4f8.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      pFVar9 = ::FName::FName(&local_4b0,iVar8,(wchar_t *)local_4f8.Data.AllocatorInstance.Data,
                              FNAME_Add);
      *(FName *)((longlong)FVar12 + (longlong)iVar13 * 8) = *pFVar9;
      if (((int)local_48 < 3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar13 = (this->ObjectClassAndPath).ArrayNum;
      puVar10 = local_450;
      if (local_50 != (undefined8 *)0x0) {
        puVar10 = local_50;
      }
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                           (0x408,(ForElementType<FName> *)this,piVar1);
      }
      (this->ObjectClassAndPath).ArrayNum = iVar13 + 1;
      FVar4 = (this->ObjectClassAndPath).AllocatorInstance.SecondaryData;
      if (FVar4 != (ForElementType<FName>)0x0) {
        this = (FCompactFullName *)FVar4;
      }
      pFVar9 = ::FName::FName(&local_4a8,(int)puVar10[5],(wchar_t *)puVar10[4],FNAME_Add);
      *(FName *)((longlong)this + (longlong)iVar13 * 8) = *pFVar9;
      if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
      }
      goto LAB_145e65e08;
    }
  }
  if ((int)local_48 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_48);
  }
  piVar1 = &(this->ObjectClassAndPath).ArrayMax;
  (this->ObjectClassAndPath).ArrayNum = 0;
  if (*piVar1 != local_48) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,local_48,(ForElementType<FName> *)this,0,piVar1);
  }
  uVar6 = local_48;
  puVar10 = local_450;
  if (local_50 != (undefined8 *)0x0) {
    puVar10 = local_50;
  }
  puVar15 = puVar10 + (longlong)(int)local_48 * 2;
  while( true ) {
    if (local_48 != uVar6) {
      `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_508);
    }
    if (puVar10 == puVar15) break;
    iVar13 = (this->ObjectClassAndPath).ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                         (0x408,(ForElementType<FName> *)this,piVar1);
    }
    (this->ObjectClassAndPath).ArrayNum = iVar13 + 1;
    FVar4 = (this->ObjectClassAndPath).AllocatorInstance.SecondaryData;
    FVar12 = (ForElementType<FName>)this;
    if (FVar4 != (ForElementType<FName>)0x0) {
      FVar12 = FVar4;
    }
    pFVar9 = ::FName::FName(&local_4a0,(int)puVar10[1],(wchar_t *)*puVar10,FNAME_Add);
    puVar10 = puVar10 + 2;
    *(FName *)((longlong)FVar12 + (longlong)iVar13 * 8) = *pFVar9;
  }
LAB_145e65e08:
  if (local_50 != (undefined8 *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// ToString @ 145e70410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FCompactFullName::ToString(FCompactFullName *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined1 auStack_268 [32];
  FString local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  AppendString(this,&local_238);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_248,local_238.Base,
                      (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return __return_storage_ptr__;
}

// ToStringPathOnly @ 145e70980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FCompactFullName::ToStringPathOnly(FCompactFullName *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  ForElementType<FName> FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FString *pFVar8;
  ForElementType<FName> FVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  longlong local_280;
  FString local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2a8;
  iVar1 = (this->ObjectClassAndPath).ArrayNum;
  if (iVar1 == 0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    local_268.CurPos = local_248;
    local_268.Base = local_248;
    uVar11 = 1;
    local_268.bIsDynamic = false;
    local_268.bIsExternal = false;
    local_268.End = (wchar_t *)local_48;
    if (1 < iVar1 + -1) {
      lVar10 = 1;
      do {
        iVar2 = (this->ObjectClassAndPath).ArrayNum;
        uVar7 = 0;
        if ((int)uVar11 < iVar2) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (local_288 = lVar10, local_280 = (longlong)iVar2,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar5)();
          return pFVar8;
        }
        FVar3 = (this->ObjectClassAndPath).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<FName>)this;
        if (FVar3 != (ForElementType<FName>)0x0) {
          FVar9 = FVar3;
        }
        ::FName::AppendString((FName *)((longlong)FVar9 + lVar10 * 8),&local_268);
        if ((int)uVar11 < iVar1 + -2) {
          if (local_268.End < local_268.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_268,1);
          }
          *local_268.CurPos = L'/';
          local_268.CurPos = local_268.CurPos + 1;
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 1;
      } while ((int)uVar11 < iVar1 + -1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    pFVar8 = ::FString::ConstructFromPtrSize
                       (&local_278,local_268.Base,
                        (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
    if (__return_storage_ptr__ != pFVar8) {
      pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar8->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  }
  return __return_storage_ptr__;
}

