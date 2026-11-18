// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1414d2250

EAutomationTestFlags __thiscall FStringUnicodeTest::GetTestFlags(FStringUnicodeTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414d2260

bool __thiscall FStringUnicodeTest::IsStressTest(FStringUnicodeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414d2270

uint __thiscall FStringUnicodeTest::GetRequiredDeviceNum(FStringUnicodeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414d2280

FString * __thiscall
FStringUnicodeTest::GetTestSourceFileName(FStringUnicodeTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x57,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x57,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x57,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\StringTest.cpp"
             ,0x57);
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1414d2320

int __thiscall FStringUnicodeTest::GetTestSourceFileLine(FStringUnicodeTest *this)

{
  return 0x5e;
}

// GetTests @ 1414d2330

/* WARNING: Removing unreachable block (ram,0x0001414d2479) */
/* WARNING: Removing unreachable block (ram,0x0001414d2544) */

void __thiscall
FStringUnicodeTest::GetTests
          (FStringUnicodeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType local_28;
  int local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1b,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1b,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x1b,"System.Core.String.Unicode",0x1b);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
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
  *(FScriptContainerElement **)pFVar4 = local_28.Data;
  *(int *)(pFVar4 + 8) = local_20[0];
  *(int *)(pFVar4 + 0xc) = local_20[1];
  local_20[0] = 0;
  local_20[1] = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
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
  *(undefined8 *)pFVar4 = local_18;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar4 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 1414d2570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FStringUnicodeTest::RunTest(FStringUnicodeTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FArchiveState *pFVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  uint uVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  wchar_t *_Str;
  ForAnyElementType FVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FStringUnicodeTest *pFVar16;
  undefined1 auStackY_298 [32];
  FString local_258;
  FString local_248;
  FString local_238;
  undefined8 local_228;
  FString local_220;
  FStringUnicodeTest *local_210;
  undefined1 local_208 [128];
  ForAnyElementType local_188;
  FArchiveState *pFStack_180;
  ulonglong local_178;
  FString *local_170;
  undefined8 local_168;
  FArchiveState local_158;
  undefined8 local_c8;
  FString *local_c0;
  undefined8 local_b8;
  ForAnyElementType local_58;
  FArchiveState *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pFVar14 = (FScriptContainerElement *)0x0;
  local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.Data.ArrayNum = 0;
  local_248.Data.ArrayMax = 0;
  local_210 = this;
  bVar4 = FTextChar::ConvertCodepointToString(L'😀',&local_248);
  FVar11.Data = local_248.Data.AllocatorInstance.Data;
  if (!bVar4) goto LAB_1414d2e2a;
  lVar10 = (longlong)local_248.Data.ArrayNum;
  local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_220.Data.ArrayNum = 0;
  local_220.Data.ArrayMax = 0;
  local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.Data.ArrayNum = local_248.Data.ArrayNum;
  if (local_248.Data.ArrayNum == 0) {
    local_238.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_248.Data.ArrayNum,0,(ForAnyElementType *)&local_238,local_248.Data.ArrayNum
               ,&local_238.Data.ArrayMax);
    memcpy(local_238.Data.AllocatorInstance.Data,FVar11.Data,lVar10 * 2);
  }
  local_228 = 0;
  local_208._0_8_ = 0;
  local_208._8_8_ = (FFastPathLoadBuffer *)0x0;
  local_208._16_8_ = (uchar *)0x0;
  local_208._24_8_ = (uchar *)0x0;
  local_208._32_8_ = (uchar *)0x0;
  local_208._40_8_ = 0;
  local_208._48_4_ = 0;
  local_208._52_4_ = 0;
  local_208._56_8_ = 0;
  local_208._64_4_ = 0;
  local_208._68_4_ = 0;
  local_208._72_4_ = 0;
  local_208._76_2_ = 0;
  local_208._78_2_ = 0;
  local_208._80_2_ = 0;
  local_208._82_2_ = 0;
  local_208._84_4_ = 0;
  local_208._88_8_ = (FCustomVersionContainer *)0x0;
  local_208._96_8_ = (FCustomPropertyListNode *)0x0;
  local_208._104_8_ = (FArchiveSavePackageData *)0x0;
  local_208._112_8_ = (FProperty *)0x0;
  local_208._120_8_ = (FArchiveSerializedPropertyChain *)0x0;
  local_188.Data = (FScriptContainerElement *)0x0;
  pFStack_180 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_208);
  local_178 = 0;
  local_208._0_8_ = &___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_170 = &local_220;
  local_168 = 0;
  FArchiveState::SetIsSaving((FArchiveState *)local_208,true);
  (**(code **)(local_208._0_8_ + 0x108))(local_208,0);
  local_208._0_8_ = &___7FMemoryWriter__6B_;
  ::operator<<((FArchive *)local_208,&local_238);
  local_238.Data.ArrayNum = 0;
  if (local_238.Data.ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)&local_238,0,&local_238.Data.ArrayMax);
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    *(wchar_t *)local_238.Data.AllocatorInstance.Data = L'\0';
  }
  local_158._padding_ = 0;
  local_158.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_158.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_158.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_158.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_158._40_8_ = 0;
  local_158.ArSerializingDefaults = 0;
  local_158.ArPortFlags = 0;
  local_158.ArMaxSerializeSize = 0;
  local_158.ArUEVer.FileVersionUE4 = 0;
  local_158.ArUEVer.FileVersionUE5 = 0;
  local_158.ArLicenseeUEVer = 0;
  local_158.ArEngineVer.Major = 0;
  local_158.ArEngineVer.Minor = 0;
  local_158.ArEngineVer.Patch = 0;
  local_158.ArEngineVer._6_2_ = 0;
  local_158.ArEngineVer.Changelist = 0;
  local_158.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_158.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_158.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_158.SerializedProperty = (FProperty *)0x0;
  local_158.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_158.bCustomVersionsAreReset = false;
  local_158._129_7_ = 0;
  local_158.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_158);
  local_c8 = 0;
  local_158._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_c0 = &local_220;
  local_b8 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_158,true);
  (**(code **)(local_158._padding_ + 0x108))(&local_158,0);
  ::operator<<((FArchive *)&local_158,&local_238);
  iVar7 = 0;
  local_258.Data.ArrayNum = 0;
  local_258.Data.ArrayMax = 0;
  local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar11.Data = pFVar14;
  if (local_248.Data.ArrayNum == 0) {
    FVar12.Data = (FScriptContainerElement *)L"";
LAB_1414d27c3:
    iVar6 = 0;
    if (*(wchar_t *)FVar12.Data != L'\0') {
      sVar8 = wcslen((wchar_t *)FVar12.Data);
      uVar9 = (int)sVar8 + 1;
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if (0 < (int)uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar9,(ForAnyElementType *)&local_258,0,&local_258.Data.ArrayMax);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar9,(ForAnyElementType *)&local_258,&local_258.Data.ArrayNum,
                 &local_258.Data.ArrayMax);
      FVar11.Data = local_258.Data.AllocatorInstance.Data;
      FGenericPlatformString::Memcpy
                (local_258.Data.AllocatorInstance.Data,FVar12.Data,(longlong)(int)uVar9 * 2);
      iVar6 = local_258.Data.ArrayNum;
    }
  }
  else {
    FVar12.Data = local_248.Data.AllocatorInstance.Data;
    iVar6 = iVar7;
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_1414d27c3;
  }
  FVar12.Data = local_238.Data.AllocatorInstance.Data;
  bVar4 = false;
  if (local_238.Data.ArrayNum == iVar6) {
    bVar2 = bVar4;
    if (1 < local_238.Data.ArrayNum) {
      iVar6 = wcscmp((wchar_t *)local_238.Data.AllocatorInstance.Data,(wchar_t *)FVar11.Data);
      bVar2 = iVar6 != 0;
    }
  }
  else {
    bVar2 = iVar6 + local_238.Data.ArrayNum != 1;
  }
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  pFVar16 = local_210;
  if (bVar2) {
    pcVar1 = *(code **)(*(longlong *)local_210 + 0x28);
    ::FString::PrintfImpl(&local_258,L"\'%s\' failure: result \'%s\' (expected \'%s\')");
    (*pcVar1)(pFVar16,&local_258,0);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
  }
  FArchive::~FArchive((FArchive *)&local_158);
  FArchive::~FArchive((FArchive *)local_208);
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  local_188.Data = (FScriptContainerElement *)0x0;
  if (local_248.Data.ArrayNum == 0) {
    _Str = L"";
LAB_1414d2929:
    sVar8 = wcslen(_Str);
    iVar6 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar8);
    local_178 = CONCAT44(local_178._4_4_,iVar6);
    uVar9 = iVar6 + 1;
    uVar15 = uVar9;
    if (uVar9 < 0x81) {
      if ((FArchiveState *)local_188.Data != (FArchiveState *)0x0) {
        uVar15 = 0;
        goto LAB_1414d2960;
      }
    }
    else {
LAB_1414d2960:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_188,0,uVar15,1);
    }
    pFStack_180 = (FArchiveState *)local_208;
    if ((FArchiveState *)local_188.Data != (FArchiveState *)0x0) {
      pFStack_180 = (FArchiveState *)local_188.Data;
    }
    UE::Core::Private::Convert((uchar *)pFStack_180,uVar9,_Str,(int)sVar8 + 1);
  }
  else {
    _Str = (wchar_t *)local_248.Data.AllocatorInstance.Data;
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_1414d2929;
    local_178 = local_178 & 0xffffffff00000000;
    pFStack_180 = (FArchiveState *)0x0;
  }
  pFVar3 = pFStack_180;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (pFStack_180 == (FArchiveState *)0x0) {
    local_50 = (FArchiveState *)0x0;
    local_48 = 0;
  }
  else {
    sVar8 = strlen((char *)pFStack_180);
    local_48 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)pFVar3,(int)sVar8);
    uVar9 = local_48 + 1;
    uVar15 = uVar9;
    if (uVar9 < 0x81) {
      if ((FArchiveState *)local_58.Data != (FArchiveState *)0x0) {
        uVar15 = 0;
        goto LAB_1414d29e6;
      }
    }
    else {
LAB_1414d29e6:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar15,2);
    }
    local_50 = &local_158;
    if ((FArchiveState *)local_58.Data != (FArchiveState *)0x0) {
      local_50 = (FArchiveState *)local_58.Data;
    }
    UE::Core::Private::Convert((wchar_t *)local_50,uVar9,(uchar *)pFVar3,(int)sVar8 + 1);
  }
  pFVar3 = local_50;
  local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.Data.ArrayNum = 0;
  local_258.Data.ArrayMax = 0;
  FVar11.Data = pFVar14;
  iVar6 = iVar7;
  if ((local_50 != (FArchiveState *)0x0) && ((short)local_50->_padding_ != 0)) {
    sVar8 = wcslen((wchar_t *)local_50);
    uVar9 = (int)sVar8 + 1;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if (0 < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar9,(ForAnyElementType *)&local_258,0,&local_258.Data.ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar9,(ForAnyElementType *)&local_258,&local_258.Data.ArrayNum,
               &local_258.Data.ArrayMax);
    FVar11.Data = local_258.Data.AllocatorInstance.Data;
    FGenericPlatformString::Memcpy
              (local_258.Data.AllocatorInstance.Data,pFVar3,(longlong)(int)uVar9 * 2);
    iVar6 = local_258.Data.ArrayNum;
  }
  if ((FArchiveState *)local_58.Data != (FArchiveState *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if ((FArchiveState *)local_188.Data != (FArchiveState *)0x0) {
    FMemory::Free(local_188.Data);
  }
  local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.Data.ArrayNum = 0;
  local_258.Data.ArrayMax = 0;
  FVar12.Data = pFVar14;
  iVar5 = iVar7;
  if (local_248.Data.ArrayNum == 0) {
    FVar13.Data = (FScriptContainerElement *)L"";
LAB_1414d2b27:
    if (*(wchar_t *)FVar13.Data != L'\0') {
      sVar8 = wcslen((wchar_t *)FVar13.Data);
      uVar9 = (int)sVar8 + 1;
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if (0 < (int)uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar9,(ForAnyElementType *)&local_258,0,&local_258.Data.ArrayMax);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar9,(ForAnyElementType *)&local_258,&local_258.Data.ArrayNum,
                 &local_258.Data.ArrayMax);
      FVar12.Data = local_258.Data.AllocatorInstance.Data;
      FGenericPlatformString::Memcpy
                (local_258.Data.AllocatorInstance.Data,FVar13.Data,(longlong)(int)uVar9 * 2);
      iVar5 = local_258.Data.ArrayNum;
    }
  }
  else {
    FVar13.Data = local_248.Data.AllocatorInstance.Data;
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_1414d2b27;
  }
  if (iVar6 == iVar5) {
    if (1 < iVar6) {
      iVar6 = wcscmp((wchar_t *)FVar11.Data,(wchar_t *)FVar12.Data);
      bVar4 = iVar6 != 0;
    }
  }
  else {
    bVar4 = iVar5 + iVar6 != 1;
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  pFVar16 = local_210;
  if (bVar4) {
    pcVar1 = *(code **)(*(longlong *)local_210 + 0x28);
    ::FString::PrintfImpl(&local_220,L"\'%s\' failure: result \'%s\' (expected \'%s\')");
    pFVar16 = local_210;
    (*pcVar1)(local_210,&local_220,0);
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
  }
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.Data.ArrayNum = 0;
  local_258.Data.ArrayMax = 0;
  FVar11.Data = pFVar14;
  iVar6 = iVar7;
  if (local_248.Data.ArrayNum == 0) {
    FVar12.Data = (FScriptContainerElement *)L"";
LAB_1414d2c72:
    if (*(wchar_t *)FVar12.Data != L'\0') {
      sVar8 = wcslen((wchar_t *)FVar12.Data);
      uVar9 = (int)sVar8 + 1;
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if (0 < (int)uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar9,(ForAnyElementType *)&local_258,0,&local_258.Data.ArrayMax);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar9,(ForAnyElementType *)&local_258,&local_258.Data.ArrayNum,
                 &local_258.Data.ArrayMax);
      FVar11.Data = local_258.Data.AllocatorInstance.Data;
      FGenericPlatformString::Memcpy
                (local_258.Data.AllocatorInstance.Data,FVar12.Data,(longlong)(int)uVar9 * 2);
      iVar6 = local_258.Data.ArrayNum;
    }
  }
  else {
    FVar12.Data = local_248.Data.AllocatorInstance.Data;
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_1414d2c72;
  }
  local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.Data.ArrayNum = 0;
  local_258.Data.ArrayMax = 0;
  FVar12.Data = pFVar14;
  if (local_248.Data.ArrayNum == 0) {
    FVar13.Data = (FScriptContainerElement *)L"";
LAB_1414d2d1d:
    if (*(wchar_t *)FVar13.Data != L'\0') {
      sVar8 = wcslen((wchar_t *)FVar13.Data);
      uVar9 = (int)sVar8 + 1;
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if (0 < (int)uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar9,(ForAnyElementType *)&local_258,0,&local_258.Data.ArrayMax);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar9,(ForAnyElementType *)&local_258,&local_258.Data.ArrayNum,
                 &local_258.Data.ArrayMax);
      FVar12.Data = local_258.Data.AllocatorInstance.Data;
      FGenericPlatformString::Memcpy
                (local_258.Data.AllocatorInstance.Data,FVar13.Data,(longlong)(int)uVar9 * 2);
      iVar7 = local_258.Data.ArrayNum;
    }
  }
  else {
    FVar13.Data = local_248.Data.AllocatorInstance.Data;
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_1414d2d1d;
  }
  if (iVar6 == iVar7) {
    if (1 < iVar6) {
      iVar7 = wcscmp((wchar_t *)FVar11.Data,(wchar_t *)FVar12.Data);
      bVar4 = iVar7 == 0;
      goto LAB_1414d2dbc;
    }
  }
  else {
    bVar4 = iVar7 + iVar6 == 1;
LAB_1414d2dbc:
    pFVar14 = (FScriptContainerElement *)(ulonglong)!bVar4;
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  if ((char)pFVar14 != '\0') {
    pcVar1 = *(code **)(*(longlong *)pFVar16 + 0x28);
    ::FString::PrintfImpl(&local_220,L"\'%s\' failure: result \'%s\' (expected \'%s\')");
    (*pcVar1)(pFVar16,&local_220,0);
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
  }
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
LAB_1414d2e2a:
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1414d2ea0

FString * __thiscall
FStringUnicodeTest::GetBeautifiedTestName(FStringUnicodeTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1b,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x1b,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x1b,
             "System.Core.String.Unicode",0x1b);
  return __return_storage_ptr__;
}

