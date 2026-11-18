// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 8

// GetTestFlags @ 1441c65c0

EAutomationTestFlags __thiscall FNetCloseResultEnumTest::GetTestFlags(FNetCloseResultEnumTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1441c65d0

bool __thiscall FNetCloseResultEnumTest::IsStressTest(FNetCloseResultEnumTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1441c65e0

uint __thiscall FNetCloseResultEnumTest::GetRequiredDeviceNum(FNetCloseResultEnumTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1441c65f0

FString * __thiscall
FNetCloseResultEnumTest::GetTestSourceFileName
          (FNetCloseResultEnumTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Connection\\NetCloseResult.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1441c6620

int __thiscall FNetCloseResultEnumTest::GetTestSourceFileLine(FNetCloseResultEnumTest *this)

{
  return 0x57;
}

// GetTests @ 1441c6630

/* WARNING: Removing unreachable block (ram,0x0001441c671d) */
/* WARNING: Removing unreachable block (ram,0x0001441c67e8) */

void __thiscall
FNetCloseResultEnumTest::GetTests
          (FNetCloseResultEnumTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Networking.FNetCloseResult.EnumTest");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 1441c6810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FNetCloseResultEnumTest::RunTest(FNetCloseResultEnumTest *this,FString *param_1)

{
  UEnum *this_00;
  UEnum *this_01;
  FAutomationTestBase *this_02;
  bool bVar1;
  int iVar2;
  UPackage *pUVar3;
  long64 lVar4;
  FString *pFVar5;
  FString *pFVar6;
  void *pvVar7;
  size_t sVar8;
  uint uVar9;
  wchar_t *pwVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStackY_2e8 [32];
  FString local_2b0;
  FAutomationTestBase *local_2a0;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  uVar12 = 0;
  local_2a0 = (FAutomationTestBase *)this;
  if (Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NetCore_ENetworkFailure,(UObject *)pUVar3,
                       L"ENetworkFailure");
  }
  this_01 = Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton;
  if (Z_Registration_Info_UEnum_ENetCloseResult.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UEnum_ENetCloseResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NetCore_ENetCloseResult,(UObject *)pUVar3,
                       L"ENetCloseResult");
  }
  this_00 = Z_Registration_Info_UEnum_ENetCloseResult.OuterSingleton;
  bVar1 = FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,L"ENetworkFailure must exist",
                     this_01 != (UEnum *)0x0);
  if (bVar1) {
    if (this_01 == (UEnum *)0x0) {
      return true;
    }
    lVar4 = UEnum::GetMaxEnumValue(this_01);
    uVar15 = lVar4 - 1;
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,
               L"ENetCloseResult must contain (start with) all ENetworkFailure elements",
               uVar15 == 10);
    if (this_00 != (UEnum *)0x0) {
      bVar1 = false;
      uVar13 = uVar12;
      if (-1 < (longlong)uVar15) {
        do {
          if (bVar1 != false) break;
          pFVar5 = UEnum::GetNameStringByValue(this_01,&local_298,uVar13);
          if (Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton == (UEnum *)0x0) {
            pUVar3 = Z_Construct_UPackage__Script_NetCore();
            Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton =
                 GetStaticEnum(Z_Construct_UEnum_NetCore_ENetworkFailure,(UObject *)pUVar3,
                               L"ENetworkFailure");
            if (Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton != (UEnum *)0x0)
            goto LAB_1441c6976;
LAB_1441c6984:
            uVar9 = 0xe;
          }
          else {
LAB_1441c6976:
            lVar4 = UEnum::GetMaxEnumValue(Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton)
            ;
            uVar9 = (uint)uVar13;
            if ((uint)lVar4 <= uVar9) goto LAB_1441c6984;
          }
          pFVar6 = UEnum::GetNameStringByValue(this_00,&local_2b0,(ulonglong)uVar9);
          iVar2 = (pFVar5->Data).ArrayNum;
          iVar14 = (pFVar6->Data).ArrayNum;
          if (iVar14 == iVar2) {
            if (iVar14 < 2) {
              bVar1 = false;
            }
            else {
              iVar2 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,
                                 (wchar_t *)(pFVar5->Data).AllocatorInstance.Data);
              bVar1 = iVar2 != 0;
            }
          }
          else {
            bVar1 = iVar2 + iVar14 != 1;
          }
          if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
          }
          if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
          }
          uVar13 = uVar13 + 1;
        } while ((longlong)uVar13 <= (longlong)uVar15);
      }
      FAutomationTestBase::TestFalse
                ((FAutomationTestBase *)this,
                 L"Start of ENetCloseResult entries must match ENetworkFailure entries",bVar1);
      FAutomationTestBase::TestTrue
                ((FAutomationTestBase *)this,L"Tests must cover all ESecurityEvent entries",true);
      goto LAB_1441c6a41;
    }
  }
  else {
    uVar15 = uVar12;
    if (this_01 == (UEnum *)0x0) {
      return true;
    }
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Tests must cover all ESecurityEvent entries",true);
  if (this_00 == (UEnum *)0x0) {
    return true;
  }
LAB_1441c6a41:
  lVar16 = 0;
  bVar18 = false;
  bVar1 = false;
LAB_1441c6a50:
  do {
    iVar2 = 0;
    if (bVar18 == false) {
      local_258.Base = local_238;
      local_258.bIsDynamic = false;
      local_258.bIsExternal = false;
      local_258.CurPos = local_238;
      local_258.End = (wchar_t *)local_38;
      pvVar7 = FGenericPlatformString::Memcpy(local_238,L"Security",0x10);
      local_258.CurPos = (wchar_t *)((longlong)pvVar7 + 0x10);
      iVar14 = (int)lVar16;
      if (iVar14 == 0) {
        pwVar10 = L"Malformed_Packet";
      }
      else if (iVar14 == 1) {
        pwVar10 = L"Invalid_Data";
      }
      else if (iVar14 == 2) {
        pwVar10 = L"Closed";
      }
      else {
        pwVar10 = L"";
      }
      pFVar5 = ::FString::FString(&local_278,pwVar10);
      pFVar5 = ::FString::Replace(pFVar5,&local_288,L"_",L"",IgnoreCase);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar10 = L"";
LAB_1441c6b13:
        sVar8 = wcslen(pwVar10);
        iVar2 = (int)sVar8;
      }
      else {
        pwVar10 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        if ((FScriptContainerElement *)pwVar10 != (FScriptContainerElement *)0x0)
        goto LAB_1441c6b13;
      }
      uVar11 = (ulong64)iVar2;
      if (local_258.End < local_258.CurPos + uVar11) {
        TStringBuilderBase<wchar_t>::Extend(&local_258,uVar11);
      }
      if (iVar2 != 0) {
        pvVar7 = FGenericPlatformString::Memcpy(local_258.CurPos,pwVar10,uVar11 * 2);
        local_258.CurPos = (wchar_t *)((longlong)pvVar7 + uVar11 * 2);
      }
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      if (local_258.End < local_258.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_258,1);
      }
      *local_258.CurPos = L'\0';
      ::FString::FString(&local_2b0,local_258.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
      uVar12 = 3;
      pFVar5 = UEnum::GetNameStringByValue(this_00,&local_268,lVar16 + uVar15 + 1);
      iVar2 = (pFVar5->Data).ArrayNum;
      if (iVar2 == local_2b0.Data.ArrayNum) {
        if (1 < iVar2) {
          iVar2 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,
                             (wchar_t *)local_2b0.Data.AllocatorInstance.Data);
          bVar18 = iVar2 == 0;
          goto LAB_1441c6bee;
        }
      }
      else {
        bVar18 = local_2b0.Data.ArrayNum + iVar2 == 1;
LAB_1441c6bee:
        if (!bVar18) goto LAB_1441c6bf9;
      }
      bVar18 = false;
    }
    else {
LAB_1441c6bf9:
      bVar18 = true;
    }
    lVar17 = 0;
    if (((uVar12 & 2) != 0) &&
       (uVar12 = (ulonglong)((uint)uVar12 & 0xfffffffd),
       local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    if (((uVar12 & 1) != 0) &&
       (uVar12 = (ulonglong)((uint)uVar12 & 0xfffffffe),
       local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    this_02 = local_2a0;
    if (lVar16 == 0) {
      lVar16 = 1;
      bVar1 = bVar18;
      goto LAB_1441c6a50;
    }
    lVar16 = lVar16 + 1;
  } while (lVar16 < 3);
  FAutomationTestBase::TestFalse
            (local_2a0,
             L"ENetCloseResult must contain ESecurityEvent entries, after ENetworkFailure entries",
             bVar1);
  FAutomationTestBase::TestFalse
            (this_02,L"ENetCloseResult must contain all ESecurityEvent entries",bVar18);
  bVar1 = false;
  do {
    iVar2 = 0;
    if (bVar1 != false) break;
    local_258.Base = local_238;
    local_258.bIsDynamic = false;
    local_258.bIsExternal = false;
    local_258.CurPos = local_238;
    local_258.End = (wchar_t *)local_38;
    pvVar7 = FGenericPlatformString::Memcpy(local_238,L"Security",0x10);
    local_258.CurPos = (wchar_t *)((longlong)pvVar7 + 0x10);
    iVar14 = (int)lVar17;
    if (iVar14 == 0) {
      pwVar10 = L"Malformed_Packet";
    }
    else if (iVar14 == 1) {
      pwVar10 = L"Invalid_Data";
    }
    else if (iVar14 == 2) {
      pwVar10 = L"Closed";
    }
    else {
      pwVar10 = L"";
    }
    pFVar5 = ::FString::FString(&local_278,pwVar10);
    pFVar5 = ::FString::Replace(pFVar5,&local_268,L"_",L"",IgnoreCase);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar10 = L"";
LAB_1441c6d3e:
      sVar8 = wcslen(pwVar10);
      iVar2 = (int)sVar8;
    }
    else {
      pwVar10 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      if ((FScriptContainerElement *)pwVar10 != (FScriptContainerElement *)0x0) goto LAB_1441c6d3e;
    }
    uVar11 = (ulong64)iVar2;
    if (local_258.End < local_258.CurPos + uVar11) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,uVar11);
    }
    if (iVar2 != 0) {
      pvVar7 = FGenericPlatformString::Memcpy(local_258.CurPos,pwVar10,uVar11 * 2);
      local_258.CurPos = (wchar_t *)((longlong)pvVar7 + uVar11 * 2);
    }
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if (local_258.End < local_258.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,1);
    }
    bVar1 = false;
    *local_258.CurPos = L'\0';
    ::FString::FString(&local_2b0,local_258.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
    if (Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton == (UEnum *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_NetCore();
      Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_NetCore_ENetworkFailure,(UObject *)pUVar3,
                         L"ENetworkFailure");
      if (Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton != (UEnum *)0x0)
      goto LAB_1441c6e0d;
LAB_1441c6e1e:
      uVar9 = 0xe;
    }
    else {
LAB_1441c6e0d:
      lVar4 = UEnum::GetMaxEnumValue(Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton);
      uVar9 = (int)lVar4 + iVar14;
      if (0xd < uVar9) goto LAB_1441c6e1e;
    }
    pFVar5 = UEnum::GetNameStringByValue(this_00,&local_288,(ulonglong)uVar9);
    iVar2 = (pFVar5->Data).ArrayNum;
    if (iVar2 == local_2b0.Data.ArrayNum) {
      if (1 < iVar2) {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,
                           (wchar_t *)local_2b0.Data.AllocatorInstance.Data);
        bVar1 = iVar2 != 0;
      }
    }
    else {
      bVar1 = local_2b0.Data.ArrayNum + iVar2 != 1;
    }
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    lVar17 = lVar17 + 1;
  } while (lVar17 < 3);
  FAutomationTestBase::TestFalse
            (this_02,L"Start of ENetCloseResult entries must match ESecurityEvent entries",bVar1);
  return true;
}

// GetBeautifiedTestName @ 1441c6ef0

FString * __thiscall
FNetCloseResultEnumTest::GetBeautifiedTestName
          (FNetCloseResultEnumTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Networking.FNetCloseResult.EnumTest");
  return __return_storage_ptr__;
}

