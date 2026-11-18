// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 9

// From<UE::Math::TIntVector4<int>_> @ 144411f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FDataflowConverter<FString>::From<UE::Math::TIntVector4<int>_>
          (TIntVector4<int> *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  TStringBuilderBase<wchar_t> *pTVar2;
  wchar_t *pwVar3;
  undefined1 auStack_178 [32];
  FString local_158;
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_178;
  local_148.Base = local_128;
  local_148.CurPos = local_128;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.End = (wchar_t *)local_28;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_148.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_128,2,"X=",2);
  pTVar2 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_148,L"%d");
  if (pTVar2->End < pTVar2->CurPos + 3) {
    TStringBuilderBase<wchar_t>::Extend(pTVar2,3);
  }
  pwVar3 = FGenericPlatformString::Convert<char,wchar_t>(pTVar2->CurPos,3," Y=",3);
  pTVar2->CurPos = pwVar3;
  pTVar2 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar2,L"%d");
  if (pTVar2->End < pTVar2->CurPos + 3) {
    TStringBuilderBase<wchar_t>::Extend(pTVar2,3);
  }
  pwVar3 = FGenericPlatformString::Convert<char,wchar_t>(pTVar2->CurPos,3," Z=",3);
  pTVar2->CurPos = pwVar3;
  pTVar2 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar2,L"%d");
  if (pTVar2->End < pTVar2->CurPos + 3) {
    TStringBuilderBase<wchar_t>::Extend(pTVar2,3);
  }
  pwVar3 = FGenericPlatformString::Convert<char,wchar_t>(pTVar2->CurPos,3," W=",3);
  pTVar2->CurPos = pwVar3;
  TStringBuilderBase<wchar_t>::AppendfImpl(pTVar2,L"%d");
  ::FString::AppendChars
            (&local_158,local_148.Base,
             (int)((longlong)local_148.CurPos - (longlong)local_148.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  if (param_2 != &local_158) {
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_2->Data).AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
    (param_2->Data).ArrayNum = local_158.Data.ArrayNum;
    (param_2->Data).ArrayMax = local_158.Data.ArrayMax;
    local_158.Data.ArrayNum = 0;
    local_158.Data.ArrayMax = 0;
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return;
}

// To<TArray<signed_char,TSizedDefaultAllocator<32>_>_> @ 14441f450

void __cdecl
FDataflowConverter<TArray<double,TSizedDefaultAllocator<32>_>_>::
To<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
          (TArray<double,TSizedDefaultAllocator<32>_> *param_1,
          TArray<signed_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar7 = param_1->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < (int)uVar7) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar7 - iVar5,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + iVar4,0,(longlong)(int)(uVar7 - iVar5));
  }
  else {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < iVar5) {
      uVar9 = iVar5 - uVar7;
      if (((int)(uVar9 | uVar7) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar9 != 0) {
        pFVar6 = (param_2->AllocatorInstance).Data + (int)uVar7;
        iVar5 = (*piVar1 - uVar7) - uVar9;
        if (iVar5 != 0) {
          memmove(pFVar6,pFVar6 + (int)uVar9,(longlong)iVar5);
        }
        *piVar1 = *piVar1 - uVar9;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar7 = 0;
  if (0 < param_1->ArrayNum) {
    lVar8 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar7 < *piVar1) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = (param_2->AllocatorInstance).Data;
      uVar9 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar7 + 1;
      pFVar6[lVar8] = SUB41((int)*(double *)((param_1->AllocatorInstance).Data + lVar8 * 8),0);
      lVar8 = lVar8 + 1;
    } while ((int)uVar7 < param_1->ArrayNum);
  }
  return;
}

// To<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> @ 14441f640

void __cdecl
FDataflowConverter<TArray<double,TSizedDefaultAllocator<32>_>_>::
To<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
          (TArray<double,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar7 = param_1->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < (int)uVar7) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar7 - iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,0,
           (longlong)(int)(uVar7 - iVar6) << 2);
  }
  else {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < iVar6) {
      uVar9 = iVar6 - uVar7;
      if (((int)(uVar9 | uVar7) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar9 != 0) {
        pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 4;
        iVar6 = (*piVar1 - uVar7) - uVar9;
        if (iVar6 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)(int)uVar9 * 4,(longlong)iVar6 << 2);
        }
        *piVar1 = *piVar1 - uVar9;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar7 = 0;
  if (0 < param_1->ArrayNum) {
    lVar8 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar7 < *piVar1) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      uVar9 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = uVar7 + 1;
      *(int *)(pFVar2 + lVar8 * 4) =
           (int)(longlong)*(double *)((param_1->AllocatorInstance).Data + lVar8 * 8);
      lVar8 = lVar8 + 1;
    } while ((int)uVar7 < param_1->ArrayNum);
  }
  return;
}

// To<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> @ 14441f840

void __cdecl
FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
To<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  
  uVar9 = param_1->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar8 = *piVar1;
  if (iVar8 < (int)uVar9) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar9 - iVar8,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar8) {
      uVar12 = iVar8 - uVar9;
      if (((int)(uVar12 | uVar9) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar12 != 0) {
        pFVar4 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8;
        iVar8 = (*piVar1 - uVar9) - uVar12;
        if (iVar8 != 0) {
          memmove(pFVar4,pFVar4 + (longlong)(int)uVar12 * 8,(longlong)iVar8 << 3);
        }
        *piVar1 = *piVar1 - uVar12;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar9 = 0;
  if (0 < param_1->ArrayNum) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (param_2->AllocatorInstance).Data;
      uVar12 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      uVar9 = uVar9 + 1;
      pFVar2 = pFVar5 + lVar11;
      lVar3 = lVar11 + 8;
      lVar11 = lVar11 + 0x20;
      *(ulonglong *)(pFVar4 + lVar10 * 8) =
           CONCAT44((int)*(double *)(pFVar5 + lVar3),(int)*(double *)pFVar2);
      lVar10 = lVar10 + 1;
    } while ((int)uVar9 < param_1->ArrayNum);
  }
  return;
}

// To<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> @ 14441fa60

void __cdecl
FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
To<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  
  iVar8 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  uVar11 = param_1->ArrayNum;
  if (iVar8 < (int)uVar11) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,uVar11 - iVar8,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  else {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if ((int)uVar11 < iVar8) {
      uVar12 = iVar8 - uVar11;
      if (((int)(uVar12 | uVar11) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar12 != 0) {
        pFVar9 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x20;
        iVar8 = (*piVar1 - uVar11) - uVar12;
        if (iVar8 != 0) {
          memmove(pFVar9,pFVar9 + (longlong)(int)uVar12 * 0x20,(longlong)iVar8 << 5);
        }
        *piVar1 = *piVar1 - uVar12;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,0x10,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar11 = 0;
  if (0 < param_1->ArrayNum) {
    lVar10 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar11 < *piVar1) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = (param_2->AllocatorInstance).Data;
      uVar12 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      uVar11 = uVar11 + 1;
      uVar5 = *(undefined8 *)(pFVar3 + lVar10 + 8);
      uVar6 = *(undefined8 *)(pFVar3 + lVar10 + 8 + 8);
      uVar2 = *(undefined8 *)(pFVar3 + lVar10 + 0x18);
      *(undefined8 *)(pFVar9 + lVar10) = *(undefined8 *)(pFVar3 + lVar10);
      *(undefined8 *)(pFVar9 + lVar10 + 8) = uVar5;
      *(undefined8 *)(pFVar9 + lVar10 + 8 + 8) = uVar6;
      *(undefined8 *)(pFVar9 + lVar10 + 0x18) = uVar2;
      lVar10 = lVar10 + 0x20;
    } while ((int)uVar11 < param_1->ArrayNum);
  }
  return;
}

// To<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> @ 14441fc70

void __cdecl
FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
To<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  
  iVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  uVar12 = param_1->ArrayNum;
  if (iVar9 < (int)uVar12) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar12 - iVar9,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar9) {
      uVar11 = iVar9 - uVar12;
      if (((int)(uVar11 | uVar12) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar11 != 0) {
        pFVar3 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x18;
        iVar9 = (*piVar1 - uVar12) - uVar11;
        if (iVar9 != 0) {
          memmove(pFVar3,pFVar3 + (longlong)(int)uVar11 * 0x18,(longlong)iVar9 * 0x18);
        }
        *piVar1 = *piVar1 - uVar11;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar12 = 0;
  if (0 < param_1->ArrayNum) {
    lVar10 = 0;
    lVar13 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar12 < *piVar1) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      uVar11 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      uVar12 = uVar12 + 1;
      pFVar2 = pFVar4 + lVar10 + 8;
      uVar6 = *(undefined8 *)pFVar2;
      uVar7 = *(undefined8 *)(pFVar2 + 8);
      pFVar4 = pFVar4 + lVar10;
      lVar10 = lVar10 + 0x20;
      *(undefined8 *)(pFVar3 + lVar13) = *(undefined8 *)pFVar4;
      pFVar3 = pFVar3 + lVar13 + 8;
      *(undefined8 *)pFVar3 = uVar6;
      *(undefined8 *)(pFVar3 + 8) = uVar7;
      lVar13 = lVar13 + 0x18;
    } while ((int)uVar12 < param_1->ArrayNum);
  }
  return;
}

// To<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 14441fe90

void __cdecl
FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
To<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar6 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  uVar8 = param_1->ArrayNum;
  if (iVar6 < (int)uVar8) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar8 - iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar6) {
      uVar10 = iVar6 - uVar8;
      if (((int)(uVar10 | uVar8) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar10 != 0) {
        pFVar7 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10;
        iVar6 = (*piVar1 - uVar8) - uVar10;
        if (iVar6 != 0) {
          memmove(pFVar7,pFVar7 + (longlong)(int)uVar10 * 0x10,(longlong)iVar6 << 4);
        }
        *piVar1 = *piVar1 - uVar10;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar8 = 0;
  if (0 < param_1->ArrayNum) {
    lVar9 = 0;
    lVar11 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = (param_2->AllocatorInstance).Data;
      uVar10 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      uVar8 = uVar8 + 1;
      uVar2 = *(undefined8 *)(pFVar3 + lVar9 + 8);
      pFVar3 = pFVar3 + lVar9;
      lVar9 = lVar9 + 0x20;
      *(undefined8 *)(pFVar7 + lVar11) = *(undefined8 *)pFVar3;
      *(undefined8 *)(pFVar7 + lVar11 + 8) = uVar2;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar8 < param_1->ArrayNum);
  }
  return;
}

// To<TArray<__int64,TSizedDefaultAllocator<32>_>_> @ 1444200c0

void __cdecl
FDataflowConverter<TArray<double,TSizedDefaultAllocator<32>_>_>::
To<TArray<__int64,TSizedDefaultAllocator<32>_>_>
          (TArray<double,TSizedDefaultAllocator<32>_> *param_1,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar7 = param_1->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < (int)uVar7) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar7 - iVar6,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8,0,
           (longlong)(int)(uVar7 - iVar6) << 3);
  }
  else {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < iVar6) {
      uVar9 = iVar6 - uVar7;
      if (((int)(uVar9 | uVar7) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar9 != 0) {
        pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 8;
        iVar6 = (*piVar1 - uVar7) - uVar9;
        if (iVar6 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)(int)uVar9 * 8,(longlong)iVar6 << 3);
        }
        *piVar1 = *piVar1 - uVar9;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar7 = 0;
  if (0 < param_1->ArrayNum) {
    lVar8 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar7 < *piVar1) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      uVar9 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = uVar7 + 1;
      *(longlong *)(pFVar2 + lVar8 * 8) =
           (longlong)*(double *)((param_1->AllocatorInstance).Data + lVar8 * 8);
      lVar8 = lVar8 + 1;
    } while ((int)uVar7 < param_1->ArrayNum);
  }
  return;
}

// To<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> @ 1444202c0

void __cdecl
FDataflowConverter<TArray<double,TSizedDefaultAllocator<32>_>_>::
To<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
          (TArray<double,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  
  iVar7 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  uVar9 = param_1->ArrayNum;
  if (iVar7 < (int)uVar9) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar9 - iVar7,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8,0,
           (longlong)(int)(uVar9 - iVar7) << 3);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar7) {
      uVar11 = iVar7 - uVar9;
      if (((int)(uVar11 | uVar9) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar11 != 0) {
        pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8;
        iVar7 = (*piVar1 - uVar9) - uVar11;
        if (iVar7 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)(int)uVar11 * 8,(longlong)iVar7 << 3);
        }
        *piVar1 = *piVar1 - uVar11;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  dVar4 = __real_43e0000000000000;
  uVar9 = 0;
  if (0 < param_1->ArrayNum) {
    lVar10 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      uVar11 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar8 = 0;
      dVar12 = *(double *)((param_1->AllocatorInstance).Data + lVar10 * 8);
      if ((dVar4 <= dVar12) && (dVar12 = dVar12 - dVar4, dVar12 < dVar4)) {
        lVar8 = -0x8000000000000000;
      }
      uVar9 = uVar9 + 1;
      *(longlong *)(pFVar2 + lVar10 * 8) = (longlong)dVar12 + lVar8;
      lVar10 = lVar10 + 1;
    } while ((int)uVar9 < param_1->ArrayNum);
  }
  return;
}

