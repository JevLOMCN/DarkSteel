// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// GetTestFlags @ 141cc08d0

EAutomationTestFlags __thiscall FPathViewsAncestorTest::GetTestFlags(FPathViewsAncestorTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc08e0

bool __thiscall FPathViewsAncestorTest::IsStressTest(FPathViewsAncestorTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc08f0

uint __thiscall FPathViewsAncestorTest::GetRequiredDeviceNum(FPathViewsAncestorTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc0900

FString * __thiscall
FPathViewsAncestorTest::GetTestSourceFileName
          (FPathViewsAncestorTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\PathViewsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc0930

int __thiscall FPathViewsAncestorTest::GetTestSourceFileLine(FPathViewsAncestorTest *this)

{
  return 0x24b;
}

// GetTests @ 141cc0940

/* WARNING: Removing unreachable block (ram,0x000141cc0abe) */

void __thiscall
FPathViewsAncestorTest::GetTests
          (FPathViewsAncestorTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141cc0ae0

bool __thiscall FPathViewsAncestorTest::RunTest(FPathViewsAncestorTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc0b10

FString * __thiscall
FPathViewsAncestorTest::GetBeautifiedTestName
          (FPathViewsAncestorTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// operator()<TStringView<wchar_t>_> @ 141cd6cf0

void __thiscall
`FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
          (void *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  undefined8 uVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  void *pvVar8;
  TStringBuilderBase<wchar_t> *pTVar9;
  FAutomationTestFramework *pFVar10;
  wchar_t *pwVar11;
  ulong64 uVar12;
  undefined8 *puVar13;
  ForAnyElementType FVar14;
  int iVar15;
  undefined8 *puVar16;
  FScriptContainerElement *pFVar17;
  undefined8 **local_res10;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  TStringBuilderBase<wchar_t> local_58;
  
  pwVar11 = param_2->DataPtr;
  uVar2 = *(undefined8 *)&param_2->Size;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_88,1,&local_7c);
  local_58.Base = param_1->DataPtr;
  local_58.CurPos = *(wchar_t **)&param_1->Size;
  *(wchar_t **)local_88.Data = pwVar11;
  *(undefined8 *)(local_88.Data + 8) = uVar2;
  local_res10 = &local_78;
  local_68._8_8_ = &local_res10;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>'::__l2::<lambda_1>,bool,TStringView<wchar_t>_>
       ::Call;
  FPathViews::IterateAncestors
            ((TStringView<wchar_t> *)&local_58,
             (TFunctionRef<bool___cdecl(TStringView<wchar_t>)> *)local_68);
  lVar7 = (longlong)(int)local_70;
  if ((int)local_70 == local_80) {
    FVar14.Data = local_88.Data;
    puVar13 = local_78;
    if ((int)local_70 != 0) {
      do {
        iVar1 = *(int *)(puVar13 + 1);
        iVar15 = (int)*(undefined8 *)(FVar14.Data + 8);
        if (iVar1 != iVar15) goto LAB_141cd6e21;
        if ((iVar1 != 0) && (iVar15 != 0)) {
          iVar6 = iVar15;
          if (iVar1 < iVar15) {
            iVar6 = iVar1;
          }
          iVar6 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar13,*(wchar_t **)FVar14.Data,(longlong)iVar6);
          if (iVar6 != 0) goto LAB_141cd6e21;
        }
        if (iVar1 != iVar15) goto LAB_141cd6e21;
        lVar7 = lVar7 + -1;
        FVar14.Data = FVar14.Data + 0x10;
        puVar13 = puVar13 + 2;
      } while (lVar7 != 0);
    }
  }
  else {
LAB_141cd6e21:
    local_58.End = (wchar_t *)0x0;
    local_58.bIsDynamic = false;
    local_58.bIsExternal = false;
    local_58.Base = (wchar_t *)0x0;
    local_58.CurPos = (wchar_t *)0x0;
    TStringBuilderBase<wchar_t>::Extend(&local_58,0x1e);
    pvVar8 = FGenericPlatformString::Memcpy(local_58.CurPos,L"Incorrect ancestors splitting ",0x3c);
    local_58.CurPos = (wchar_t *)((longlong)pvVar8 + 0x3c);
    pTVar9 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                       (&local_58,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    pTVar9 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar9,L"- got ",6);
    pTVar9 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar9,L"%d");
    pTVar9 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar9,L", expected ",0xb);
    TStringBuilderBase<wchar_t>::AppendfImpl(pTVar9,L"%d");
    if (local_58.End < local_58.CurPos + 0x16) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,0x16);
    }
    pvVar8 = FGenericPlatformString::Memcpy(local_58.CurPos,L"\r\nGot ancestors      (",0x2c);
    iVar1 = (int)local_70;
    bVar5 = true;
    pwVar11 = (wchar_t *)((longlong)pvVar8 + 0x2c);
    puVar16 = local_78 + (longlong)(int)local_70 * 2;
    puVar13 = local_78;
    local_58.CurPos = pwVar11;
    while( true ) {
      if ((int)local_70 != iVar1) {
        `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
        pwVar11 = local_58.CurPos;
      }
      if (puVar13 == puVar16) break;
      if (bVar5) {
        bVar5 = false;
      }
      else {
        if (local_58.End < pwVar11 + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_58,1);
          pwVar11 = local_58.CurPos;
        }
        pvVar8 = FGenericPlatformString::Memcpy(pwVar11,L",",2);
        pwVar11 = (wchar_t *)((longlong)pvVar8 + 2);
        local_58.CurPos = pwVar11;
      }
      uVar2 = puVar13[1];
      pvVar8 = (void *)*puVar13;
      uVar12 = (ulong64)(int)uVar2;
      if (local_58.End < pwVar11 + uVar12) {
        TStringBuilderBase<wchar_t>::Extend(&local_58,uVar12);
        pwVar11 = local_58.CurPos;
      }
      if ((int)uVar2 != 0) {
        pvVar8 = FGenericPlatformString::Memcpy(pwVar11,pvVar8,uVar12 * 2);
        pwVar11 = (wchar_t *)((longlong)pvVar8 + uVar12 * 2);
        local_58.CurPos = pwVar11;
      }
      puVar13 = puVar13 + 2;
    }
    if (local_58.End < pwVar11 + 0x16) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,0x16);
      pwVar11 = local_58.CurPos;
    }
    pvVar8 = FGenericPlatformString::Memcpy(pwVar11,L"\r\nExpected ancestors (",0x2c);
    iVar1 = local_80;
    bVar5 = true;
    pwVar11 = (wchar_t *)((longlong)pvVar8 + 0x2c);
    pFVar17 = local_88.Data + (longlong)local_80 * 0x10;
    FVar14.Data = local_88.Data;
    local_58.CurPos = pwVar11;
    while( true ) {
      if (local_80 != iVar1) {
        `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
        pwVar11 = local_58.CurPos;
      }
      if (FVar14.Data == pFVar17) break;
      if (bVar5) {
        bVar5 = false;
      }
      else {
        if (local_58.End < pwVar11 + 2) {
          TStringBuilderBase<wchar_t>::Extend(&local_58,2);
          pwVar11 = local_58.CurPos;
        }
        pvVar8 = FGenericPlatformString::Memcpy(pwVar11,L", ",4);
        pwVar11 = (wchar_t *)((longlong)pvVar8 + 4);
        local_58.CurPos = pwVar11;
      }
      uVar2 = *(undefined8 *)(FVar14.Data + 8);
      pvVar8 = *(void **)FVar14.Data;
      uVar12 = (ulong64)(int)uVar2;
      if (local_58.End < pwVar11 + uVar12) {
        TStringBuilderBase<wchar_t>::Extend(&local_58,uVar12);
        pwVar11 = local_58.CurPos;
      }
      if ((int)uVar2 != 0) {
        pvVar8 = FGenericPlatformString::Memcpy(pwVar11,pvVar8,uVar12 * 2);
        pwVar11 = (wchar_t *)((longlong)pvVar8 + uVar12 * 2);
        local_58.CurPos = pwVar11;
      }
      FVar14.Data = FVar14.Data + 0x10;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_58,L")",1);
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    if (local_58.End < local_58.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,1);
    }
    *local_58.CurPos = L'\0';
    ::FString::FString((FString *)local_68,local_58.Base);
    (*pcVar4)(pFVar3,local_68,0);
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_78 != (undefined8 *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// operator()<TStringView<wchar_t>,wchar_t_const_(&)[2]> @ 141cd7190

void __thiscall
`FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
operator()<TStringView<wchar_t>,wchar_t_const_(&)[2]>
          (void *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          wchar_t (*param_3) [2])

{
  int iVar1;
  undefined8 uVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  size_t sVar8;
  longlong lVar9;
  void *pvVar10;
  TStringBuilderBase<wchar_t> *pTVar11;
  FAutomationTestFramework *pFVar12;
  wchar_t *pwVar13;
  ulong64 uVar14;
  undefined8 *puVar15;
  ForAnyElementType FVar16;
  int iVar17;
  undefined8 *puVar18;
  FScriptContainerElement *pFVar19;
  undefined8 **local_res10;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  TStringBuilderBase<wchar_t> local_58;
  
  local_58.Base = param_2->DataPtr;
  local_58.CurPos = *(wchar_t **)&param_2->Size;
  local_78 = (undefined8 *)0x0;
  uVar6 = 0;
  local_70 = 0;
  local_58.End = *param_3;
  if (param_3 != (wchar_t (*) [2])0x0) {
    sVar8 = wcslen(*param_3);
    uVar6 = (undefined4)sVar8;
  }
  local_58._24_2_ = SUB42(uVar6,0);
  local_58._26_2_ = SUB42((uint)uVar6 >> 0x10,0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_88,2,&local_7c);
  *(wchar_t **)local_88.Data = local_58.Base;
  *(wchar_t **)(local_88.Data + 8) = local_58.CurPos;
  local_58.Base = param_1->DataPtr;
  local_58.CurPos = *(wchar_t **)&param_1->Size;
  *(wchar_t **)(local_88.Data + 0x10) = local_58.End;
  *(ulonglong *)(local_88.Data + 0x18) =
       CONCAT44(local_58._28_4_,CONCAT22(local_58._26_2_,local_58._24_2_));
  local_res10 = &local_78;
  local_68._8_8_ = &local_res10;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>,wchar_t_const_(&)[2]>'::__l2::<lambda_1>,bool,TStringView<wchar_t>_>
       ::Call;
  FPathViews::IterateAncestors
            ((TStringView<wchar_t> *)&local_58,
             (TFunctionRef<bool___cdecl(TStringView<wchar_t>)> *)local_68);
  lVar9 = (longlong)(int)local_70;
  if ((int)local_70 == local_80) {
    FVar16.Data = local_88.Data;
    puVar15 = local_78;
    if ((int)local_70 != 0) {
      do {
        iVar1 = *(int *)(puVar15 + 1);
        iVar17 = (int)*(undefined8 *)(FVar16.Data + 8);
        if (iVar1 != iVar17) goto LAB_141cd72f1;
        if ((iVar1 != 0) && (iVar17 != 0)) {
          iVar7 = iVar17;
          if (iVar1 < iVar17) {
            iVar7 = iVar1;
          }
          iVar7 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar15,*(wchar_t **)FVar16.Data,(longlong)iVar7);
          if (iVar7 != 0) goto LAB_141cd72f1;
        }
        if (iVar1 != iVar17) goto LAB_141cd72f1;
        lVar9 = lVar9 + -1;
        FVar16.Data = FVar16.Data + 0x10;
        puVar15 = puVar15 + 2;
      } while (lVar9 != 0);
    }
  }
  else {
LAB_141cd72f1:
    local_58.End = (wchar_t *)0x0;
    local_58.bIsDynamic = false;
    local_58.bIsExternal = false;
    local_58.Base = (wchar_t *)0x0;
    local_58.CurPos = (wchar_t *)0x0;
    TStringBuilderBase<wchar_t>::Extend(&local_58,0x1e);
    pvVar10 = FGenericPlatformString::Memcpy(local_58.CurPos,L"Incorrect ancestors splitting ",0x3c)
    ;
    local_58.CurPos = (wchar_t *)((longlong)pvVar10 + 0x3c);
    pTVar11 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (&local_58,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    pTVar11 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar11,L"- got ",6);
    pTVar11 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar11,L"%d");
    pTVar11 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar11,L", expected ",0xb);
    TStringBuilderBase<wchar_t>::AppendfImpl(pTVar11,L"%d");
    if (local_58.End < (wchar_t (*) [2])(local_58.CurPos + 0x16)) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,0x16);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_58.CurPos,L"\r\nGot ancestors      (",0x2c);
    iVar1 = (int)local_70;
    bVar5 = true;
    pwVar13 = (wchar_t *)((longlong)pvVar10 + 0x2c);
    puVar18 = local_78 + (longlong)(int)local_70 * 2;
    puVar15 = local_78;
    local_58.CurPos = pwVar13;
    while( true ) {
      if ((int)local_70 != iVar1) {
        `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
        pwVar13 = local_58.CurPos;
      }
      if (puVar15 == puVar18) break;
      if (bVar5) {
        bVar5 = false;
      }
      else {
        if (local_58.End < (wchar_t (*) [2])(pwVar13 + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_58,1);
          pwVar13 = local_58.CurPos;
        }
        pvVar10 = FGenericPlatformString::Memcpy(pwVar13,L",",2);
        pwVar13 = (wchar_t *)((longlong)pvVar10 + 2);
        local_58.CurPos = pwVar13;
      }
      uVar2 = puVar15[1];
      pvVar10 = (void *)*puVar15;
      uVar14 = (ulong64)(int)uVar2;
      if (local_58.End < (wchar_t (*) [2])(pwVar13 + uVar14)) {
        TStringBuilderBase<wchar_t>::Extend(&local_58,uVar14);
        pwVar13 = local_58.CurPos;
      }
      if ((int)uVar2 != 0) {
        pvVar10 = FGenericPlatformString::Memcpy(pwVar13,pvVar10,uVar14 * 2);
        pwVar13 = (wchar_t *)((longlong)pvVar10 + uVar14 * 2);
        local_58.CurPos = pwVar13;
      }
      puVar15 = puVar15 + 2;
    }
    if (local_58.End < (wchar_t (*) [2])(pwVar13 + 0x16)) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,0x16);
      pwVar13 = local_58.CurPos;
    }
    pvVar10 = FGenericPlatformString::Memcpy(pwVar13,L"\r\nExpected ancestors (",0x2c);
    iVar1 = local_80;
    bVar5 = true;
    pwVar13 = (wchar_t *)((longlong)pvVar10 + 0x2c);
    pFVar19 = local_88.Data + (longlong)local_80 * 0x10;
    FVar16.Data = local_88.Data;
    local_58.CurPos = pwVar13;
    while( true ) {
      if (local_80 != iVar1) {
        `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
        pwVar13 = local_58.CurPos;
      }
      if (FVar16.Data == pFVar19) break;
      if (bVar5) {
        bVar5 = false;
      }
      else {
        if (local_58.End < (wchar_t (*) [2])(pwVar13 + 2)) {
          TStringBuilderBase<wchar_t>::Extend(&local_58,2);
          pwVar13 = local_58.CurPos;
        }
        pvVar10 = FGenericPlatformString::Memcpy(pwVar13,L", ",4);
        pwVar13 = (wchar_t *)((longlong)pvVar10 + 4);
        local_58.CurPos = pwVar13;
      }
      uVar2 = *(undefined8 *)(FVar16.Data + 8);
      pvVar10 = *(void **)FVar16.Data;
      uVar14 = (ulong64)(int)uVar2;
      if (local_58.End < (wchar_t (*) [2])(pwVar13 + uVar14)) {
        TStringBuilderBase<wchar_t>::Extend(&local_58,uVar14);
        pwVar13 = local_58.CurPos;
      }
      if ((int)uVar2 != 0) {
        pvVar10 = FGenericPlatformString::Memcpy(pwVar13,pvVar10,uVar14 * 2);
        pwVar13 = (wchar_t *)((longlong)pvVar10 + uVar14 * 2);
        local_58.CurPos = pwVar13;
      }
      FVar16.Data = FVar16.Data + 0x10;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_58,L")",1);
    pFVar12 = FAutomationTestFramework::Get();
    pFVar3 = pFVar12->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    if (local_58.End < (wchar_t (*) [2])(local_58.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,1);
    }
    *local_58.CurPos = L'\0';
    ::FString::FString((FString *)local_68,local_58.Base);
    (*pcVar4)(pFVar3,local_68,0);
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_78 != (undefined8 *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// operator()<TStringView<wchar_t>,TStringView<wchar_t>_> @ 141cd7670

void __thiscall
`FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
operator()<TStringView<wchar_t>,TStringView<wchar_t>_>
          (void *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3)

{
  int iVar1;
  undefined8 uVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  void *pvVar10;
  TStringBuilderBase<wchar_t> *pTVar11;
  FAutomationTestFramework *pFVar12;
  wchar_t *pwVar13;
  ulong64 uVar14;
  undefined8 *puVar15;
  ForAnyElementType FVar16;
  int iVar17;
  undefined8 *puVar18;
  FScriptContainerElement *pFVar19;
  undefined8 **local_res10;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  undefined8 *local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  TStringBuilderBase<wchar_t> local_68 [2];
  
  pwVar13 = param_2->DataPtr;
  uVar2 = *(undefined8 *)&param_2->Size;
  local_88 = (undefined8 *)0x0;
  pwVar6 = param_3->DataPtr;
  uVar7 = *(ulonglong *)&param_3->Size;
  local_80 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_98,2,&local_8c);
  local_68[0].Base = param_1->DataPtr;
  local_68[0].CurPos = *(wchar_t **)&param_1->Size;
  *(wchar_t **)local_98.Data = pwVar13;
  *(undefined8 *)(local_98.Data + 8) = uVar2;
  *(wchar_t **)(local_98.Data + 0x10) = pwVar6;
  *(ulonglong *)(local_98.Data + 0x18) = uVar7;
  local_res10 = &local_88;
  local_78._8_8_ = &local_res10;
  local_78._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>,TStringView<wchar_t>_>'::__l2::<lambda_1>,bool,TStringView<wchar_t>_>
       ::Call;
  local_68[0].End = pwVar6;
  local_68[0]._24_8_ = uVar7;
  FPathViews::IterateAncestors
            ((TStringView<wchar_t> *)local_68,
             (TFunctionRef<bool___cdecl(TStringView<wchar_t>)> *)local_78);
  lVar9 = (longlong)(int)local_80;
  if ((int)local_80 == local_90) {
    FVar16.Data = local_98.Data;
    puVar15 = local_88;
    if ((int)local_80 != 0) {
      do {
        iVar1 = *(int *)(puVar15 + 1);
        iVar17 = (int)*(undefined8 *)(FVar16.Data + 8);
        if (iVar1 != iVar17) goto LAB_141cd77b1;
        if ((iVar1 != 0) && (iVar17 != 0)) {
          iVar8 = iVar17;
          if (iVar1 < iVar17) {
            iVar8 = iVar1;
          }
          iVar8 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)*puVar15,*(wchar_t **)FVar16.Data,(longlong)iVar8);
          if (iVar8 != 0) goto LAB_141cd77b1;
        }
        if (iVar1 != iVar17) goto LAB_141cd77b1;
        lVar9 = lVar9 + -1;
        FVar16.Data = FVar16.Data + 0x10;
        puVar15 = puVar15 + 2;
      } while (lVar9 != 0);
    }
  }
  else {
LAB_141cd77b1:
    local_68[0].End = (wchar_t *)0x0;
    local_68[0]._24_8_ = local_68[0]._24_8_ & 0xffffffffffff0000;
    local_68[0].Base = (wchar_t *)0x0;
    local_68[0].CurPos = (wchar_t *)0x0;
    TStringBuilderBase<wchar_t>::Extend(local_68,0x1e);
    pvVar10 = FGenericPlatformString::Memcpy
                        (local_68[0].CurPos,L"Incorrect ancestors splitting ",0x3c);
    local_68[0].CurPos = (wchar_t *)((longlong)pvVar10 + 0x3c);
    pTVar11 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (local_68,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    pTVar11 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar11,L"- got ",6);
    pTVar11 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar11,L"%d");
    pTVar11 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar11,L", expected ",0xb);
    TStringBuilderBase<wchar_t>::AppendfImpl(pTVar11,L"%d");
    if (local_68[0].End < local_68[0].CurPos + 0x16) {
      TStringBuilderBase<wchar_t>::Extend(local_68,0x16);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_68[0].CurPos,L"\r\nGot ancestors      (",0x2c);
    iVar1 = (int)local_80;
    bVar5 = true;
    pwVar13 = (wchar_t *)((longlong)pvVar10 + 0x2c);
    puVar18 = local_88 + (longlong)(int)local_80 * 2;
    puVar15 = local_88;
    local_68[0].CurPos = pwVar13;
    while( true ) {
      if ((int)local_80 != iVar1) {
        `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
        pwVar13 = local_68[0].CurPos;
      }
      if (puVar15 == puVar18) break;
      if (bVar5) {
        bVar5 = false;
      }
      else {
        if (local_68[0].End < pwVar13 + 1) {
          TStringBuilderBase<wchar_t>::Extend(local_68,1);
          pwVar13 = local_68[0].CurPos;
        }
        pvVar10 = FGenericPlatformString::Memcpy(pwVar13,L",",2);
        pwVar13 = (wchar_t *)((longlong)pvVar10 + 2);
        local_68[0].CurPos = pwVar13;
      }
      uVar2 = puVar15[1];
      pvVar10 = (void *)*puVar15;
      uVar14 = (ulong64)(int)uVar2;
      if (local_68[0].End < pwVar13 + uVar14) {
        TStringBuilderBase<wchar_t>::Extend(local_68,uVar14);
        pwVar13 = local_68[0].CurPos;
      }
      if ((int)uVar2 != 0) {
        pvVar10 = FGenericPlatformString::Memcpy(pwVar13,pvVar10,uVar14 * 2);
        pwVar13 = (wchar_t *)((longlong)pvVar10 + uVar14 * 2);
        local_68[0].CurPos = pwVar13;
      }
      puVar15 = puVar15 + 2;
    }
    if (local_68[0].End < pwVar13 + 0x16) {
      TStringBuilderBase<wchar_t>::Extend(local_68,0x16);
      pwVar13 = local_68[0].CurPos;
    }
    pvVar10 = FGenericPlatformString::Memcpy(pwVar13,L"\r\nExpected ancestors (",0x2c);
    iVar1 = local_90;
    bVar5 = true;
    pwVar13 = (wchar_t *)((longlong)pvVar10 + 0x2c);
    pFVar19 = local_98.Data + (longlong)local_90 * 0x10;
    FVar16.Data = local_98.Data;
    local_68[0].CurPos = pwVar13;
    while( true ) {
      if (local_90 != iVar1) {
        `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
        pwVar13 = local_68[0].CurPos;
      }
      if (FVar16.Data == pFVar19) break;
      if (bVar5) {
        bVar5 = false;
      }
      else {
        if (local_68[0].End < pwVar13 + 2) {
          TStringBuilderBase<wchar_t>::Extend(local_68,2);
          pwVar13 = local_68[0].CurPos;
        }
        pvVar10 = FGenericPlatformString::Memcpy(pwVar13,L", ",4);
        pwVar13 = (wchar_t *)((longlong)pvVar10 + 4);
        local_68[0].CurPos = pwVar13;
      }
      uVar2 = *(undefined8 *)(FVar16.Data + 8);
      pvVar10 = *(void **)FVar16.Data;
      uVar14 = (ulong64)(int)uVar2;
      if (local_68[0].End < pwVar13 + uVar14) {
        TStringBuilderBase<wchar_t>::Extend(local_68,uVar14);
        pwVar13 = local_68[0].CurPos;
      }
      if ((int)uVar2 != 0) {
        pvVar10 = FGenericPlatformString::Memcpy(pwVar13,pvVar10,uVar14 * 2);
        pwVar13 = (wchar_t *)((longlong)pvVar10 + uVar14 * 2);
        local_68[0].CurPos = pwVar13;
      }
      FVar16.Data = FVar16.Data + 0x10;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(local_68,L")",1);
    pFVar12 = FAutomationTestFramework::Get();
    pFVar3 = pFVar12->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    if (local_68[0].End < local_68[0].CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(local_68,1);
    }
    *local_68[0].CurPos = L'\0';
    ::FString::FString((FString *)local_78,local_68[0].Base);
    (*pcVar4)(pFVar3,local_78,0);
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(local_68);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_88 != (undefined8 *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_> @ 141cd7b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
          (void *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3,TStringView<wchar_t> *param_4)

{
  int iVar1;
  undefined8 uVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  void *pvVar12;
  TStringBuilderBase<wchar_t> *pTVar13;
  FAutomationTestFramework *pFVar14;
  wchar_t *pwVar15;
  ulong64 uVar16;
  undefined8 *puVar17;
  ForAnyElementType FVar18;
  int iVar19;
  undefined8 *puVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  int local_c8;
  int local_c4;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined8 **local_a0;
  TStringBuilderBase<wchar_t> local_98;
  wchar_t *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pwVar15 = param_2->DataPtr;
  uVar2 = *(undefined8 *)&param_2->Size;
  local_c0 = (undefined8 *)0x0;
  pwVar6 = param_3->DataPtr;
  uVar7 = *(ulonglong *)&param_3->Size;
  local_b8 = 0;
  pwVar8 = param_4->DataPtr;
  uVar9 = *(undefined8 *)&param_4->Size;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d0,3,&local_c4);
  local_98.Base = param_1->DataPtr;
  local_98.CurPos = *(wchar_t **)&param_1->Size;
  *(wchar_t **)local_d0.Data = pwVar15;
  *(undefined8 *)(local_d0.Data + 8) = uVar2;
  *(wchar_t **)(local_d0.Data + 0x10) = pwVar6;
  *(ulonglong *)(local_d0.Data + 0x18) = uVar7;
  *(wchar_t **)(local_d0.Data + 0x20) = pwVar8;
  *(undefined8 *)(local_d0.Data + 0x28) = uVar9;
  local_a0 = &local_c0;
  local_b0._8_8_ = &local_a0;
  local_b0._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>'::__l2::<lambda_1>,bool,TStringView<wchar_t>_>
       ::Call;
  local_98.End = pwVar6;
  local_98._24_8_ = uVar7;
  local_78 = pwVar8;
  uStack_70 = uVar9;
  FPathViews::IterateAncestors
            ((TStringView<wchar_t> *)&local_98,
             (TFunctionRef<bool___cdecl(TStringView<wchar_t>)> *)local_b0);
  lVar11 = (longlong)(int)local_b8;
  if ((int)local_b8 == local_c8) {
    FVar18.Data = local_d0.Data;
    puVar17 = local_c0;
    if ((int)local_b8 != 0) {
      do {
        iVar1 = *(int *)(puVar17 + 1);
        iVar19 = (int)*(undefined8 *)(FVar18.Data + 8);
        if (iVar1 != iVar19) goto LAB_141cd7ca1;
        if ((iVar1 != 0) && (iVar19 != 0)) {
          iVar10 = iVar19;
          if (iVar1 < iVar19) {
            iVar10 = iVar1;
          }
          iVar10 = FGenericPlatformStricmp::Strnicmp
                             ((wchar_t *)*puVar17,*(wchar_t **)FVar18.Data,(longlong)iVar10);
          if (iVar10 != 0) goto LAB_141cd7ca1;
        }
        if (iVar1 != iVar19) goto LAB_141cd7ca1;
        lVar11 = lVar11 + -1;
        FVar18.Data = FVar18.Data + 0x10;
        puVar17 = puVar17 + 2;
      } while (lVar11 != 0);
    }
  }
  else {
LAB_141cd7ca1:
    local_98.End = (wchar_t *)0x0;
    local_98._24_8_ = local_98._24_8_ & 0xffffffffffff0000;
    local_98.Base = (wchar_t *)0x0;
    local_98.CurPos = (wchar_t *)0x0;
    TStringBuilderBase<wchar_t>::Extend(&local_98,0x1e);
    pvVar12 = FGenericPlatformString::Memcpy(local_98.CurPos,L"Incorrect ancestors splitting ",0x3c)
    ;
    local_98.CurPos = (wchar_t *)((longlong)pvVar12 + 0x3c);
    pTVar13 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (&local_98,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    pTVar13 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar13,L"- got ",6);
    pTVar13 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar13,L"%d");
    pTVar13 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar13,L", expected ",0xb);
    TStringBuilderBase<wchar_t>::AppendfImpl(pTVar13,L"%d");
    if (local_98.End < local_98.CurPos + 0x16) {
      TStringBuilderBase<wchar_t>::Extend(&local_98,0x16);
    }
    pvVar12 = FGenericPlatformString::Memcpy(local_98.CurPos,L"\r\nGot ancestors      (",0x2c);
    iVar1 = (int)local_b8;
    bVar5 = true;
    pwVar15 = (wchar_t *)((longlong)pvVar12 + 0x2c);
    puVar20 = local_c0 + (longlong)(int)local_b8 * 2;
    puVar17 = local_c0;
    local_98.CurPos = pwVar15;
    while( true ) {
      if ((int)local_b8 != iVar1) {
        `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
        pwVar15 = local_98.CurPos;
      }
      if (puVar17 == puVar20) break;
      if (bVar5) {
        bVar5 = false;
      }
      else {
        if (local_98.End < pwVar15 + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_98,1);
          pwVar15 = local_98.CurPos;
        }
        pvVar12 = FGenericPlatformString::Memcpy(pwVar15,L",",2);
        pwVar15 = (wchar_t *)((longlong)pvVar12 + 2);
        local_98.CurPos = pwVar15;
      }
      uVar2 = puVar17[1];
      pvVar12 = (void *)*puVar17;
      uVar16 = (ulong64)(int)uVar2;
      if (local_98.End < pwVar15 + uVar16) {
        TStringBuilderBase<wchar_t>::Extend(&local_98,uVar16);
        pwVar15 = local_98.CurPos;
      }
      if ((int)uVar2 != 0) {
        pvVar12 = FGenericPlatformString::Memcpy(pwVar15,pvVar12,uVar16 * 2);
        pwVar15 = (wchar_t *)((longlong)pvVar12 + uVar16 * 2);
        local_98.CurPos = pwVar15;
      }
      puVar17 = puVar17 + 2;
    }
    if (local_98.End < pwVar15 + 0x16) {
      TStringBuilderBase<wchar_t>::Extend(&local_98,0x16);
      pwVar15 = local_98.CurPos;
    }
    pvVar12 = FGenericPlatformString::Memcpy(pwVar15,L"\r\nExpected ancestors (",0x2c);
    iVar1 = local_c8;
    bVar5 = true;
    pwVar15 = (wchar_t *)((longlong)pvVar12 + 0x2c);
    pFVar21 = local_d0.Data + (longlong)local_c8 * 0x10;
    FVar18.Data = local_d0.Data;
    local_98.CurPos = pwVar15;
    while( true ) {
      if (local_c8 != iVar1) {
        `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
        pwVar15 = local_98.CurPos;
      }
      if (FVar18.Data == pFVar21) break;
      if (bVar5) {
        bVar5 = false;
      }
      else {
        if (local_98.End < pwVar15 + 2) {
          TStringBuilderBase<wchar_t>::Extend(&local_98,2);
          pwVar15 = local_98.CurPos;
        }
        pvVar12 = FGenericPlatformString::Memcpy(pwVar15,L", ",4);
        pwVar15 = (wchar_t *)((longlong)pvVar12 + 4);
        local_98.CurPos = pwVar15;
      }
      uVar2 = *(undefined8 *)(FVar18.Data + 8);
      pvVar12 = *(void **)FVar18.Data;
      uVar16 = (ulong64)(int)uVar2;
      if (local_98.End < pwVar15 + uVar16) {
        TStringBuilderBase<wchar_t>::Extend(&local_98,uVar16);
        pwVar15 = local_98.CurPos;
      }
      if ((int)uVar2 != 0) {
        pvVar12 = FGenericPlatformString::Memcpy(pwVar15,pvVar12,uVar16 * 2);
        pwVar15 = (wchar_t *)((longlong)pvVar12 + uVar16 * 2);
        local_98.CurPos = pwVar15;
      }
      FVar18.Data = FVar18.Data + 0x10;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_98,L")",1);
    pFVar14 = FAutomationTestFramework::Get();
    pFVar3 = pFVar14->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    if (local_98.End < local_98.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_98,1);
    }
    *local_98.CurPos = L'\0';
    ::FString::FString((FString *)local_b0,local_98.Base);
    (*pcVar4)(pFVar3,local_b0,0);
    if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_b0._0_8_);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  if (local_c0 != (undefined8 *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}

// operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_> @ 141cd8030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
          (void *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3,TStringView<wchar_t> *param_4,TStringView<wchar_t> *param_5)

{
  int iVar1;
  undefined8 uVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  void *pvVar14;
  TStringBuilderBase<wchar_t> *pTVar15;
  FAutomationTestFramework *pFVar16;
  wchar_t *pwVar17;
  ulong64 uVar18;
  undefined8 *puVar19;
  ForAnyElementType FVar20;
  int iVar21;
  undefined8 *puVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStackY_138 [32];
  undefined1 local_f8 [8];
  ForAnyElementType local_f0;
  int local_e8;
  int local_e4;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 **local_c0;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t *local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pwVar17 = param_2->DataPtr;
  uVar2 = *(undefined8 *)&param_2->Size;
  local_e0 = (undefined8 *)0x0;
  pwVar6 = param_3->DataPtr;
  uVar7 = *(ulonglong *)&param_3->Size;
  local_d8 = 0;
  pwVar8 = param_4->DataPtr;
  uVar9 = *(undefined8 *)&param_4->Size;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 4;
  pwVar10 = param_5->DataPtr;
  uVar11 = *(undefined8 *)&param_5->Size;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_f0,4,&local_e4);
  local_b8.Base = param_1->DataPtr;
  local_b8.CurPos = *(wchar_t **)&param_1->Size;
  *(wchar_t **)local_f0.Data = pwVar17;
  *(undefined8 *)(local_f0.Data + 8) = uVar2;
  *(wchar_t **)(local_f0.Data + 0x10) = pwVar6;
  *(ulonglong *)(local_f0.Data + 0x18) = uVar7;
  *(wchar_t **)(local_f0.Data + 0x20) = pwVar8;
  *(undefined8 *)(local_f0.Data + 0x28) = uVar9;
  *(wchar_t **)(local_f0.Data + 0x30) = pwVar10;
  *(undefined8 *)(local_f0.Data + 0x38) = uVar11;
  local_c0 = &local_e0;
  local_d0._8_8_ = &local_c0;
  local_d0._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>'::__l2::<lambda_1>,bool,TStringView<wchar_t>_>
       ::Call;
  local_b8.End = pwVar6;
  local_b8._24_8_ = uVar7;
  local_98 = pwVar8;
  uStack_90 = uVar9;
  local_88 = pwVar10;
  uStack_80 = uVar11;
  FPathViews::IterateAncestors
            ((TStringView<wchar_t> *)&local_b8,
             (TFunctionRef<bool___cdecl(TStringView<wchar_t>)> *)local_d0);
  lVar13 = (longlong)(int)local_d8;
  if ((int)local_d8 == local_e8) {
    FVar20.Data = local_f0.Data;
    puVar19 = local_e0;
    if ((int)local_d8 != 0) {
      do {
        iVar1 = *(int *)(puVar19 + 1);
        iVar21 = (int)*(undefined8 *)(FVar20.Data + 8);
        if (iVar1 != iVar21) goto LAB_141cd81d1;
        if ((iVar1 != 0) && (iVar21 != 0)) {
          iVar12 = iVar21;
          if (iVar1 < iVar21) {
            iVar12 = iVar1;
          }
          iVar12 = FGenericPlatformStricmp::Strnicmp
                             ((wchar_t *)*puVar19,*(wchar_t **)FVar20.Data,(longlong)iVar12);
          if (iVar12 != 0) goto LAB_141cd81d1;
        }
        if (iVar1 != iVar21) goto LAB_141cd81d1;
        lVar13 = lVar13 + -1;
        FVar20.Data = FVar20.Data + 0x10;
        puVar19 = puVar19 + 2;
      } while (lVar13 != 0);
    }
  }
  else {
LAB_141cd81d1:
    local_b8.End = (wchar_t *)0x0;
    local_b8._24_8_ = local_b8._24_8_ & 0xffffffffffff0000;
    local_b8.Base = (wchar_t *)0x0;
    local_b8.CurPos = (wchar_t *)0x0;
    TStringBuilderBase<wchar_t>::Extend(&local_b8,0x1e);
    pvVar14 = FGenericPlatformString::Memcpy(local_b8.CurPos,L"Incorrect ancestors splitting ",0x3c)
    ;
    local_b8.CurPos = (wchar_t *)((longlong)pvVar14 + 0x3c);
    pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (&local_b8,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar15,L"- got ",6);
    pTVar15 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar15,L"%d");
    pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar15,L", expected ",0xb);
    TStringBuilderBase<wchar_t>::AppendfImpl(pTVar15,L"%d");
    if (local_b8.End < local_b8.CurPos + 0x16) {
      TStringBuilderBase<wchar_t>::Extend(&local_b8,0x16);
    }
    pvVar14 = FGenericPlatformString::Memcpy(local_b8.CurPos,L"\r\nGot ancestors      (",0x2c);
    iVar1 = (int)local_d8;
    bVar5 = true;
    pwVar17 = (wchar_t *)((longlong)pvVar14 + 0x2c);
    puVar22 = local_e0 + (longlong)(int)local_d8 * 2;
    puVar19 = local_e0;
    local_b8.CurPos = pwVar17;
    while( true ) {
      if ((int)local_d8 != iVar1) {
        `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
        pwVar17 = local_b8.CurPos;
      }
      if (puVar19 == puVar22) break;
      if (bVar5) {
        bVar5 = false;
      }
      else {
        if (local_b8.End < pwVar17 + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
          pwVar17 = local_b8.CurPos;
        }
        pvVar14 = FGenericPlatformString::Memcpy(pwVar17,L",",2);
        pwVar17 = (wchar_t *)((longlong)pvVar14 + 2);
        local_b8.CurPos = pwVar17;
      }
      uVar2 = puVar19[1];
      pvVar14 = (void *)*puVar19;
      uVar18 = (ulong64)(int)uVar2;
      if (local_b8.End < pwVar17 + uVar18) {
        TStringBuilderBase<wchar_t>::Extend(&local_b8,uVar18);
        pwVar17 = local_b8.CurPos;
      }
      if ((int)uVar2 != 0) {
        pvVar14 = FGenericPlatformString::Memcpy(pwVar17,pvVar14,uVar18 * 2);
        pwVar17 = (wchar_t *)((longlong)pvVar14 + uVar18 * 2);
        local_b8.CurPos = pwVar17;
      }
      puVar19 = puVar19 + 2;
    }
    if (local_b8.End < pwVar17 + 0x16) {
      TStringBuilderBase<wchar_t>::Extend(&local_b8,0x16);
      pwVar17 = local_b8.CurPos;
    }
    pvVar14 = FGenericPlatformString::Memcpy(pwVar17,L"\r\nExpected ancestors (",0x2c);
    iVar1 = local_e8;
    bVar5 = true;
    pwVar17 = (wchar_t *)((longlong)pvVar14 + 0x2c);
    pFVar23 = local_f0.Data + (longlong)local_e8 * 0x10;
    FVar20.Data = local_f0.Data;
    local_b8.CurPos = pwVar17;
    while( true ) {
      if (local_e8 != iVar1) {
        `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
        pwVar17 = local_b8.CurPos;
      }
      if (FVar20.Data == pFVar23) break;
      if (bVar5) {
        bVar5 = false;
      }
      else {
        if (local_b8.End < pwVar17 + 2) {
          TStringBuilderBase<wchar_t>::Extend(&local_b8,2);
          pwVar17 = local_b8.CurPos;
        }
        pvVar14 = FGenericPlatformString::Memcpy(pwVar17,L", ",4);
        pwVar17 = (wchar_t *)((longlong)pvVar14 + 4);
        local_b8.CurPos = pwVar17;
      }
      uVar2 = *(undefined8 *)(FVar20.Data + 8);
      pvVar14 = *(void **)FVar20.Data;
      uVar18 = (ulong64)(int)uVar2;
      if (local_b8.End < pwVar17 + uVar18) {
        TStringBuilderBase<wchar_t>::Extend(&local_b8,uVar18);
        pwVar17 = local_b8.CurPos;
      }
      if ((int)uVar2 != 0) {
        pvVar14 = FGenericPlatformString::Memcpy(pwVar17,pvVar14,uVar18 * 2);
        pwVar17 = (wchar_t *)((longlong)pvVar14 + uVar18 * 2);
        local_b8.CurPos = pwVar17;
      }
      FVar20.Data = FVar20.Data + 0x10;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_b8,L")",1);
    pFVar16 = FAutomationTestFramework::Get();
    pFVar3 = pFVar16->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    if (local_b8.End < local_b8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
    }
    *local_b8.CurPos = L'\0';
    ::FString::FString((FString *)local_d0,local_b8.Base);
    (*pcVar4)(pFVar3,local_d0,0);
    if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d0._0_8_);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (local_e0 != (undefined8 *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}

// FPathViewsAncestorTest @ 141ce8710

FPathViewsAncestorTest * __thiscall
FPathViewsAncestorTest::FPathViewsAncestorTest(FPathViewsAncestorTest *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FPathViewsAncestorTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::PathViews::IterateAncestors");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// TestBody @ 141d344e0

void __thiscall FPathViewsAncestorTest::TestBody(FPathViewsAncestorTest *this,FString *param_1)

{
  undefined1 local_res18 [16];
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  local_78.DataPtr = L"";
  local_78.Size = 0;
  local_38._8_8_ = (ulonglong)(uint)local_78._12_4_ << 0x20;
  local_68.DataPtr = L"";
  local_38.DataPtr = L"";
  local_68.Size = 0;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_68);
  local_68.Size = 1;
  local_68.DataPtr = L"/";
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = 1;
  local_38.DataPtr = L"/";
  local_78.DataPtr = L"/";
  local_78.Size = 1;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78);
  local_68.Size = 1;
  local_68.DataPtr = L"\\";
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = 1;
  local_38.DataPtr = L"\\";
  local_78.DataPtr = L"\\";
  local_78.Size = 1;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78);
  local_68.Size = 4;
  local_68.DataPtr = L".txt";
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = 4;
  local_38.DataPtr = L".txt";
  local_78.DataPtr = L".txt";
  local_78.Size = 4;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78);
  local_68.Size = 7;
  local_68.DataPtr = L".tar.gz";
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = 7;
  local_38.DataPtr = L".tar.gz";
  local_78.DataPtr = L".tar.gz";
  local_78.Size = 7;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78);
  local_68.Size = 8;
  local_68.DataPtr = L".tar.gz/";
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = 8;
  local_38.DataPtr = L".tar.gz/";
  local_78.DataPtr = L".tar.gz";
  local_78.Size = 7;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78);
  local_68.Size = 8;
  local_68.DataPtr = L".tar.gz\\";
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = 8;
  local_38.DataPtr = L".tar.gz\\";
  local_78.DataPtr = L".tar.gz";
  local_78.Size = 7;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78);
  local_78.Size = 1;
  local_78.DataPtr = L".";
  local_68.DataPtr = L".";
  local_68.Size = 1;
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = 1;
  local_38.DataPtr = L".";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78);
  local_68.Size = 2;
  local_68.DataPtr = L"..";
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = 2;
  local_38.DataPtr = L"..";
  local_78.DataPtr = L"..";
  local_78.Size = 2;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78);
  local_68.Size = 4;
  local_68.DataPtr = L"File";
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = 4;
  local_38.DataPtr = L"File";
  local_78.DataPtr = L"File";
  local_78.Size = 4;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78);
  local_68.Size = 5;
  local_68.DataPtr = L"File/";
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = 5;
  local_38.DataPtr = L"File/";
  local_78.DataPtr = L"File";
  local_78.Size = 4;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78);
  local_68.Size = 8;
  local_68.DataPtr = L"File.txt";
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = 8;
  local_38.DataPtr = L"File.txt";
  local_78.DataPtr = L"File.txt";
  local_78.Size = 8;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78);
  local_68.Size = 0xb;
  local_68.DataPtr = L"File.tar.gz";
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = 0xb;
  local_38.DataPtr = L"File.tar.gz";
  local_78.DataPtr = L"File.tar.gz";
  local_78.Size = 0xb;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78);
  local_68.Size = 0xc;
  local_68.DataPtr = L"File.tar.gz/";
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = 0xc;
  local_38.DataPtr = L"File.tar.gz/";
  local_78.DataPtr = L"File.tar.gz";
  local_78.Size = 0xb;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78);
  local_68.Size = 0xc;
  local_68.DataPtr = L"File.tar.gz\\";
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = 0xc;
  local_38.DataPtr = L"File.tar.gz\\";
  local_78.DataPtr = L"File.tar.gz";
  local_78.Size = 0xb;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78);
  local_68.Size = 9;
  local_68.DataPtr = L"C:/Folder";
  local_38._12_4_ = local_68._12_4_;
  local_38.Size = 9;
  local_38.DataPtr = L"C:/Folder";
  local_78.DataPtr = L"C:/";
  local_78.Size = 3;
  local_58.DataPtr = L"C:/Folder";
  local_58.Size = 9;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>_>(local_res18,&local_38,&local_58,&local_78);
  local_58.Size = 10;
  local_58.DataPtr = L"C:/Folder/";
  local_38._12_4_ = local_58._12_4_;
  local_38.Size = 10;
  local_38.DataPtr = L"C:/Folder/";
  local_68.DataPtr = L"C:/";
  local_68.Size = 3;
  local_78.DataPtr = L"C:/Folder";
  local_78.Size = 9;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>_>(local_res18,&local_38,&local_78,&local_68);
  local_58.Size = 0xe;
  local_58.DataPtr = L"C:/Folder/File";
  local_38._12_4_ = local_58._12_4_;
  local_38.Size = 0xe;
  local_48.DataPtr = L"C:/Folder/File";
  local_38.DataPtr = L"C:/Folder/File";
  local_68.DataPtr = L"C:/";
  local_68.Size = 3;
  local_78.DataPtr = L"C:/Folder";
  local_78.Size = 9;
  local_48.Size = 0xe;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_48,&local_78,&local_68);
  local_48.Size = 0x12;
  local_48.DataPtr = L"C:/Folder/File.txt";
  local_78.DataPtr = L"C:/Folder/File.txt";
  local_38.DataPtr = L"C:/Folder/File.txt";
  local_38.Size = 0x12;
  local_38._12_4_ = local_48._12_4_;
  local_58.DataPtr = L"C:/";
  local_58.Size = 3;
  local_68.DataPtr = L"C:/Folder";
  local_68.Size = 9;
  local_78.Size = 0x12;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58);
  local_48.Size = 0x15;
  local_48.DataPtr = L"C:/Folder/File.tar.gz";
  local_78.DataPtr = L"C:/Folder/File.tar.gz";
  local_38.DataPtr = L"C:/Folder/File.tar.gz";
  local_38.Size = 0x15;
  local_38._12_4_ = local_48._12_4_;
  local_58.DataPtr = L"C:/";
  local_58.Size = 3;
  local_68.DataPtr = L"C:/Folder";
  local_68.Size = 9;
  local_78.Size = 0x15;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58);
  local_48.Size = 0x19;
  local_38.DataPtr = L"C:/Folder/First.Last/File";
  local_58.DataPtr = L"C:/";
  local_58.Size = 3;
  local_68.DataPtr = L"C:/Folder";
  local_68.Size = 9;
  local_78.DataPtr = L"C:/Folder/First.Last";
  local_78.Size = 0x14;
  local_38.Size = 0x19;
  local_48.DataPtr = L"C:/Folder/First.Last/File";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_48,&local_38,&local_78,&local_68,&local_58);
  local_38.Size = 0x1d;
  local_78.DataPtr = L"C:/Folder/First.Last/File.txt";
  local_48.DataPtr = L"C:/";
  local_48.Size = 3;
  local_58.DataPtr = L"C:/Folder";
  local_58.Size = 9;
  local_68.DataPtr = L"C:/Folder/First.Last";
  local_68.Size = 0x14;
  local_78.Size = 0x1d;
  local_38.DataPtr = L"C:/Folder/First.Last/File.txt";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_38.Size = 0x20;
  local_78.DataPtr = L"C:/Folder/First.Last/File.tar.gz";
  local_48.DataPtr = L"C:/";
  local_48.Size = 3;
  local_58.DataPtr = L"C:/Folder";
  local_58.Size = 9;
  local_68.DataPtr = L"C:/Folder/First.Last";
  local_68.Size = 0x14;
  local_78.Size = 0x20;
  local_38.DataPtr = L"C:/Folder/First.Last/File.tar.gz";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_48.Size = 2;
  local_48.DataPtr = L"C:";
  local_58.DataPtr = L"C:Folder";
  local_68.DataPtr = L"C:Folder/File";
  local_58.Size = 8;
  local_38.Size = 0xd;
  local_38.DataPtr = L"C:Folder/File";
  local_68.Size = 0xd;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_68,&local_58,&local_48);
  local_38.Size = 9;
  local_38.DataPtr = L"C:\\Folder";
  local_48.DataPtr = L"C:\\";
  local_48.Size = 3;
  local_58.DataPtr = L"C:\\Folder";
  local_58.Size = 9;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>_>(local_res18,&local_38,&local_58,&local_48);
  local_38.Size = 10;
  local_38.DataPtr = L"C:\\Folder\\";
  local_48.DataPtr = L"C:\\";
  local_48.Size = 3;
  local_58.DataPtr = L"C:\\Folder";
  local_58.Size = 9;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>_>(local_res18,&local_38,&local_58,&local_48);
  local_38.Size = 0xe;
  local_68.DataPtr = L"C:\\Folder\\File";
  local_38.DataPtr = L"C:\\Folder\\File";
  local_48.DataPtr = L"C:\\";
  local_48.Size = 3;
  local_58.DataPtr = L"C:\\Folder";
  local_58.Size = 9;
  local_68.Size = 0xe;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_68,&local_58,&local_48);
  local_38.Size = 0x15;
  local_38.DataPtr = L"C:\\Folder\\First.Last\\";
  local_48.DataPtr = L"C:\\";
  local_48.Size = 3;
  local_58.DataPtr = L"C:\\Folder";
  local_58.Size = 9;
  local_68.DataPtr = L"C:\\Folder\\First.Last";
  local_68.Size = 0x14;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_68,&local_58,&local_48);
  local_48.DataPtr = L"C:\\";
  local_48.Size = 3;
  local_58.DataPtr = L"C:\\Folder";
  local_38.Size = 0x19;
  local_78.DataPtr = L"C:\\Folder\\First.Last\\File";
  local_58.Size = 9;
  local_68.DataPtr = L"C:\\Folder\\First.Last";
  local_68.Size = 0x14;
  local_78.Size = 0x19;
  local_38.DataPtr = L"C:\\Folder\\First.Last\\File";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_38.Size = 0x1d;
  local_78.DataPtr = L"C:\\Folder\\First.Last\\File.txt";
  local_48.DataPtr = L"C:\\";
  local_48.Size = 3;
  local_58.DataPtr = L"C:\\Folder";
  local_58.Size = 9;
  local_68.DataPtr = L"C:\\Folder\\First.Last";
  local_68.Size = 0x14;
  local_78.Size = 0x1d;
  local_38.DataPtr = L"C:\\Folder\\First.Last\\File.txt";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_38.Size = 0x20;
  local_78.DataPtr = L"C:\\Folder\\First.Last\\File.tar.gz";
  local_48.DataPtr = L"C:\\";
  local_48.Size = 3;
  local_58.DataPtr = L"C:\\Folder";
  local_58.Size = 9;
  local_68.DataPtr = L"C:\\Folder\\First.Last";
  local_68.Size = 0x14;
  local_78.Size = 0x20;
  local_38.DataPtr = L"C:\\Folder\\First.Last\\File.tar.gz";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_38.Size = 0xb;
  local_38.DataPtr = L"/MountPoint";
  local_48.DataPtr = L"/";
  local_48.Size = 1;
  local_58.DataPtr = L"/MountPoint";
  local_58.Size = 0xb;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>_>(local_res18,&local_38,&local_58,&local_48);
  local_48.DataPtr = L"/";
  local_48.Size = 1;
  local_58.DataPtr = L"/MountPoint";
  local_58.Size = 0xb;
  local_38.Size = 0xc;
  local_38.DataPtr = L"/MountPoint/";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>_>(local_res18,&local_38,&local_58,&local_48);
  local_38.Size = 0xf;
  local_38.DataPtr = L"/MountPoint/Sub";
  local_48.DataPtr = L"/";
  local_48.Size = 1;
  local_58.DataPtr = L"/MountPoint";
  local_58.Size = 0xb;
  local_68.DataPtr = L"/MountPoint/Sub";
  local_68.Size = 0xf;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_68,&local_58,&local_48);
  local_38.Size = 0x14;
  local_78.DataPtr = L"/MountPoint/Sub/File";
  local_48.DataPtr = L"/";
  local_48.Size = 1;
  local_58.DataPtr = L"/MountPoint";
  local_58.Size = 0xb;
  local_68.DataPtr = L"/MountPoint/Sub";
  local_68.Size = 0xf;
  local_78.Size = 0x14;
  local_38.DataPtr = L"/MountPoint/Sub/File";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_38.Size = 0x18;
  local_78.DataPtr = L"/MountPoint/Sub/File.txt";
  local_48.DataPtr = L"/";
  local_48.Size = 1;
  local_58.DataPtr = L"/MountPoint";
  local_58.Size = 0xb;
  local_68.DataPtr = L"/MountPoint/Sub";
  local_68.Size = 0xf;
  local_78.Size = 0x18;
  local_38.DataPtr = L"/MountPoint/Sub/File.txt";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_48.DataPtr = L"/";
  local_78.DataPtr = L"/MountPoint/Sub/File.tar.gz";
  local_48.Size = 1;
  local_58.DataPtr = L"/MountPoint";
  local_58.Size = 0xb;
  local_68.DataPtr = L"/MountPoint/Sub";
  local_68.Size = 0xf;
  local_78.Size = 0x1b;
  local_38.Size = 0x1b;
  local_38.DataPtr = L"/MountPoint/Sub/File.tar.gz";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_38.Size = 0x10;
  local_38.DataPtr = L"\\\\ShareName/Path";
  local_48.DataPtr = L"\\\\ShareName";
  local_48.Size = 0xb;
  local_58.DataPtr = L"\\\\ShareName/Path";
  local_58.Size = 0x10;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>_>(local_res18,&local_38,&local_58,&local_48);
  local_38.Size = 0x11;
  local_38.DataPtr = L"\\\\ShareName/Path/";
  local_48.DataPtr = L"\\\\ShareName";
  local_48.Size = 0xb;
  local_58.DataPtr = L"\\\\ShareName/Path";
  local_58.Size = 0x10;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>_>(local_res18,&local_38,&local_58,&local_48);
  local_38.Size = 0x14;
  local_38.DataPtr = L"\\\\ShareName/Path/Sub";
  local_48.DataPtr = L"\\\\ShareName";
  local_48.Size = 0xb;
  local_58.DataPtr = L"\\\\ShareName/Path";
  local_58.Size = 0x10;
  local_68.DataPtr = L"\\\\ShareName/Path/Sub";
  local_68.Size = 0x14;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_68,&local_58,&local_48);
  local_38.Size = 0x19;
  local_78.DataPtr = L"\\\\ShareName/Path/Sub/File";
  local_48.DataPtr = L"\\\\ShareName";
  local_48.Size = 0xb;
  local_58.DataPtr = L"\\\\ShareName/Path";
  local_58.Size = 0x10;
  local_68.DataPtr = L"\\\\ShareName/Path/Sub";
  local_68.Size = 0x14;
  local_78.Size = 0x19;
  local_38.DataPtr = L"\\\\ShareName/Path/Sub/File";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_38.Size = 0x1d;
  local_78.DataPtr = L"\\\\ShareName/Path/Sub/File.txt";
  local_48.DataPtr = L"\\\\ShareName";
  local_48.Size = 0xb;
  local_58.DataPtr = L"\\\\ShareName/Path";
  local_58.Size = 0x10;
  local_68.DataPtr = L"\\\\ShareName/Path/Sub";
  local_68.Size = 0x14;
  local_78.Size = 0x1d;
  local_38.DataPtr = L"\\\\ShareName/Path/Sub/File.txt";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_38.Size = 0x20;
  local_78.DataPtr = L"\\\\ShareName/Path/Sub/File.tar.gz";
  local_48.DataPtr = L"\\\\ShareName";
  local_48.Size = 0xb;
  local_58.DataPtr = L"\\\\ShareName/Path";
  local_58.Size = 0x10;
  local_68.DataPtr = L"\\\\ShareName/Path/Sub";
  local_68.Size = 0x14;
  local_78.Size = 0x20;
  local_38.DataPtr = L"\\\\ShareName/Path/Sub/File.tar.gz";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_38.Size = 0x14;
  local_78.DataPtr = L"/MountPoint/Sub/ファイル";
  local_48.DataPtr = L"/";
  local_48.Size = 1;
  local_58.DataPtr = L"/MountPoint";
  local_58.Size = 0xb;
  local_68.DataPtr = L"/MountPoint/Sub";
  local_68.Size = 0xf;
  local_78.Size = 0x14;
  local_38.DataPtr = L"/MountPoint/Sub/ファイル";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_38.Size = 0x18;
  local_78.DataPtr = L"/MountPoint/Sub/ファイル.txt";
  local_38.DataPtr = L"/MountPoint/Sub/ファイル.txt";
  local_48.DataPtr = L"/";
  local_48.Size = 1;
  local_58.DataPtr = L"/MountPoint";
  local_58.Size = 0xb;
  local_68.DataPtr = L"/MountPoint/Sub";
  local_68.Size = 0xf;
  local_78.Size = 0x18;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_38.Size = 0x1b;
  local_78.DataPtr = L"/MountPoint/Sub/ファイル.tar.gz";
  local_48.DataPtr = L"/";
  local_48.Size = 1;
  local_58.DataPtr = L"/MountPoint";
  local_58.Size = 0xb;
  local_68.DataPtr = L"/MountPoint/Sub";
  local_68.Size = 0xf;
  local_78.Size = 0x1b;
  local_38.DataPtr = L"/MountPoint/Sub/ファイル.tar.gz";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_38.Size = 0x13;
  local_68.DataPtr = L"/MountPoint/サブ";
  local_48.DataPtr = L"/";
  local_78.DataPtr = L"/MountPoint/サブ/File";
  local_48.Size = 1;
  local_58.DataPtr = L"/MountPoint";
  local_58.Size = 0xb;
  local_68.Size = 0xe;
  local_78.Size = 0x13;
  local_38.DataPtr = L"/MountPoint/サブ/File";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_38.Size = 0xb;
  local_68.DataPtr = L"/根/Sub";
  local_48.DataPtr = L"/";
  local_78.DataPtr = L"/根/Sub/File";
  local_48.Size = 1;
  local_58.DataPtr = L"/根";
  local_58.Size = 2;
  local_68.Size = 6;
  local_78.Size = 0xb;
  local_38.DataPtr = L"/根/Sub/File";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_48.DataPtr = L"/";
  local_48.Size = 1;
  local_58.DataPtr = L"/根";
  local_58.Size = 2;
  local_38.Size = 10;
  local_68.DataPtr = L"/根/サブ";
  local_68.Size = 5;
  local_78.DataPtr = L"/根/サブ/ファイル";
  local_78.Size = 10;
  local_38.DataPtr = L"/根/サブ/ファイル";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_38.Size = 0xc;
  local_38.DataPtr = L"//MountPoint";
  local_48.DataPtr = L"//MountPoint";
  local_48.Size = 0xc;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_48);
  local_38.Size = 0xd;
  local_38.DataPtr = L"//\\MountPoint";
  local_48.DataPtr = L"//\\MountPoint";
  local_48.Size = 0xd;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_48);
  local_38.Size = 0xc;
  local_38.DataPtr = L"/\\MountPoint";
  local_48.DataPtr = L"/\\MountPoint";
  local_48.Size = 0xc;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::operator()<TStringView<wchar_t>_>
            (local_res18,&local_38,&local_48);
  local_38.Size = 0xd;
  local_38.DataPtr = L"/MountPoint//";
  local_48.DataPtr = L"/MountPoint";
  local_48.Size = 0xb;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,wchar_t_const_(&)[2]>
            (local_res18,&local_38,&local_48,(wchar_t (*) [2])&u__);
  local_38.Size = 0x10;
  local_68.DataPtr = L"/MountPoint//Sub";
  local_38.DataPtr = L"/MountPoint//Sub";
  local_48.DataPtr = L"/";
  local_48.Size = 1;
  local_58.DataPtr = L"/MountPoint";
  local_58.Size = 0xb;
  local_68.Size = 0x10;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_68,&local_58,&local_48);
  local_38.Size = 0x15;
  local_78.DataPtr = L"/MountPoint/Sub//File";
  local_48.DataPtr = L"/";
  local_48.Size = 1;
  local_58.DataPtr = L"/MountPoint";
  local_58.Size = 0xb;
  local_68.DataPtr = L"/MountPoint/Sub";
  local_68.Size = 0xf;
  local_78.Size = 0x15;
  local_38.DataPtr = L"/MountPoint/Sub//File";
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>,TStringView<wchar_t>_>
            (local_res18,&local_38,&local_78,&local_68,&local_58,&local_48);
  local_38.Size = 0x14;
  local_48.DataPtr = L"\\\\\\NotShareName";
  local_48.Size = 0xf;
  local_38.DataPtr = L"\\\\\\NotShareName/Path";
  local_58.DataPtr = L"\\\\\\NotShareName/Path";
  local_58.Size = 0x14;
  `FPathViewsAncestorTest::TestBody'::__l2::<lambda_1>::
  operator()<TStringView<wchar_t>,TStringView<wchar_t>_>(local_res18,&local_38,&local_58,&local_48);
  return;
}

