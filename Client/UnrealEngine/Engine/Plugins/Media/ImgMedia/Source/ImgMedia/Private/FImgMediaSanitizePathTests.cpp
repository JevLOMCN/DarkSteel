// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 11

// GetTestFlags @ 14ea2e200

EAutomationTestFlags __thiscall
FImgMediaSanitizePathTests::GetTestFlags(FImgMediaSanitizePathTests *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14ea2e210

bool __thiscall FImgMediaSanitizePathTests::IsStressTest(FImgMediaSanitizePathTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14ea2e220

uint __thiscall FImgMediaSanitizePathTests::GetRequiredDeviceNum(FImgMediaSanitizePathTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 14ea2e230

FString * __thiscall
FImgMediaSanitizePathTests::GetTestSourceFileName
          (FImgMediaSanitizePathTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Tests\\ImgMediaTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14ea2e260

int __thiscall FImgMediaSanitizePathTests::GetTestSourceFileLine(FImgMediaSanitizePathTests *this)

{
  return 0x8a;
}

// GetTests @ 14ea2e270

/* WARNING: Removing unreachable block (ram,0x00014ea2e35d) */
/* WARNING: Removing unreachable block (ram,0x00014ea2e428) */

void __thiscall
FImgMediaSanitizePathTests::GetTests
          (FImgMediaSanitizePathTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Plugins.ImgMedia.SanitizePath");
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

// RunTest @ 14ea2e450

bool __thiscall
FImgMediaSanitizePathTests::RunTest(FImgMediaSanitizePathTests *this,FString *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  FString **local_res8;
  FString **local_res18;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  FString *local_48;
  undefined8 local_40;
  FString *local_38;
  undefined8 local_30;
  
  local_res8 = &local_38;
  local_res18 = &local_48;
  local_38 = (FString *)0x0;
  local_30 = 0;
  local_48 = (FString *)0x0;
  local_40 = 0;
  pFVar4 = FPaths::ProjectContentDir((FString *)local_58);
  local_60 = 6;
  local_68 = L"Movies";
  local_78.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  iVar5 = (pFVar4->Data).ArrayNum;
  local_78.Size = iVar5 + -1;
  if (iVar5 == 0) {
    local_78.Size = 0;
  }
  FPaths::CombineInternal(&local_b8,&local_78,2);
  FPaths::ConvertRelativePathToFull(&local_88,&local_b8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  local_78.DataPtr = (wchar_t *)local_88.Data.AllocatorInstance.Data;
  local_68 = L"ImgMediaTestSequence";
  local_60 = 0x14;
  local_78.Size = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    local_78.Size = 0;
  }
  FPaths::CombineInternal(&local_a8,&local_78,2);
  local_78.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  local_68 = L"Image0000.exr";
  local_60 = 0xd;
  iVar5 = 0;
  local_78.Size = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    local_78.Size = iVar5;
  }
  FPaths::CombineInternal(&local_c8,&local_78,2);
  `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_88);
  `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_a8);
  `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_2>::operator()(&local_res18,&local_c8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pFVar4 = FPaths::ProjectDir((FString *)local_58);
  local_68 = L"Movies";
  local_60 = 6;
  local_78.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  iVar3 = (pFVar4->Data).ArrayNum;
  local_78.Size = iVar3 + -1;
  if (iVar3 == 0) {
    local_78.Size = iVar5;
  }
  FPaths::CombineInternal(&local_b8,&local_78,2);
  FPaths::ConvertRelativePathToFull(&local_88,&local_b8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  local_78.DataPtr = (wchar_t *)local_88.Data.AllocatorInstance.Data;
  local_68 = L"ImgMediaTestSequence";
  local_60 = 0x14;
  local_78.Size = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    local_78.Size = iVar5;
  }
  FPaths::CombineInternal(&local_a8,&local_78,2);
  local_78.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  local_68 = L"Image0000.exr";
  local_60 = 0xd;
  local_78.Size = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    local_78.Size = iVar5;
  }
  FPaths::CombineInternal(&local_c8,&local_78,2);
  `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_88);
  `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_a8);
  `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_2>::operator()(&local_res18,&local_c8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pFVar4 = FPaths::EngineDir((FString *)local_58);
  local_68 = L"Movies";
  local_60 = 6;
  local_78.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  iVar3 = (pFVar4->Data).ArrayNum;
  iVar2 = 0;
  local_78.Size = iVar3 + -1;
  if (iVar3 == 0) {
    local_78.Size = iVar2;
  }
  FPaths::CombineInternal(&local_b8,&local_78,2);
  FPaths::ConvertRelativePathToFull(&local_88,&local_b8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  local_78.DataPtr = (wchar_t *)local_88.Data.AllocatorInstance.Data;
  local_68 = L"ImgMediaTestSequence";
  local_60 = 0x14;
  local_78.Size = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    local_78.Size = iVar2;
  }
  FPaths::CombineInternal(&local_a8,&local_78,2);
  local_78.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  local_68 = L"Image0000.exr";
  local_60 = 0xd;
  local_78.Size = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    local_78.Size = iVar2;
  }
  FPaths::CombineInternal(&local_c8,&local_78,2);
  `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_88);
  `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_1>::operator()(&local_res8,&local_a8);
  `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_2>::operator()(&local_res18,&local_c8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  local_58._0_8_ = &local_48;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58._8_8_ = &local_38;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_88,L"");
  ::FString::FString(&local_a8,L"");
  UImgMediaSource::SanitizeTokenizedSequencePath(&local_c8,&local_a8);
  if (local_c8.Data.ArrayNum == local_88.Data.ArrayNum) {
    if (1 < local_c8.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_c8.Data.AllocatorInstance.Data,
                         (wchar_t *)local_88.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_14ea2e891;
    }
LAB_14ea2e901:
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 1;
  }
  else {
    bVar7 = local_88.Data.ArrayNum + local_c8.Data.ArrayNum == 1;
LAB_14ea2e891:
    if (bVar7) goto LAB_14ea2e901;
    ::FString::PrintfImpl
              (&local_b8,
               L"SanitizeTokenizedSequencePath failed: Input: \"%s\" Result: \"%s\" Expected \"%s\""
              );
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_98.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    local_98.Data.ArrayMax = local_b8.Data.ArrayMax;
    local_98.Data.ArrayNum = local_b8.Data.ArrayNum;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 0;
  }
  (*pcVar1)(this,uVar6,&local_98,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_88,L"./Movies/ImgMediaTestSequence");
  ::FString::FString(&local_a8,L"./Movies/ImgMediaTestSequence");
  UImgMediaSource::SanitizeTokenizedSequencePath(&local_c8,&local_a8);
  if (local_c8.Data.ArrayNum == local_88.Data.ArrayNum) {
    if (1 < local_c8.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_c8.Data.AllocatorInstance.Data,
                         (wchar_t *)local_88.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_14ea2e9a1;
    }
LAB_14ea2ea11:
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 1;
  }
  else {
    bVar7 = local_88.Data.ArrayNum + local_c8.Data.ArrayNum == 1;
LAB_14ea2e9a1:
    if (bVar7) goto LAB_14ea2ea11;
    ::FString::PrintfImpl
              (&local_b8,
               L"SanitizeTokenizedSequencePath failed: Input: \"%s\" Result: \"%s\" Expected \"%s\""
              );
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_98.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    local_98.Data.ArrayMax = local_b8.Data.ArrayMax;
    local_98.Data.ArrayNum = local_b8.Data.ArrayNum;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 0;
  }
  (*pcVar1)(this,uVar6,&local_98,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_88,L"./Movies/ImgMediaTestSequence");
  ::FString::FString(&local_a8,L"./Movies/ImgMediaTestSequence/");
  UImgMediaSource::SanitizeTokenizedSequencePath(&local_c8,&local_a8);
  if (local_c8.Data.ArrayNum == local_88.Data.ArrayNum) {
    if (1 < local_c8.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_c8.Data.AllocatorInstance.Data,
                         (wchar_t *)local_88.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_14ea2eab1;
    }
LAB_14ea2eb21:
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 1;
  }
  else {
    bVar7 = local_88.Data.ArrayNum + local_c8.Data.ArrayNum == 1;
LAB_14ea2eab1:
    if (bVar7) goto LAB_14ea2eb21;
    ::FString::PrintfImpl
              (&local_b8,
               L"SanitizeTokenizedSequencePath failed: Input: \"%s\" Result: \"%s\" Expected \"%s\""
              );
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_98.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    local_98.Data.ArrayMax = local_b8.Data.ArrayMax;
    local_98.Data.ArrayNum = local_b8.Data.ArrayNum;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 0;
  }
  (*pcVar1)(this,uVar6,&local_98,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_88,L"./Movies/ImgMediaTestSequence");
  ::FString::FString(&local_a8,L".\\Movies\\ImgMediaTestSequence");
  UImgMediaSource::SanitizeTokenizedSequencePath(&local_c8,&local_a8);
  if (local_c8.Data.ArrayNum == local_88.Data.ArrayNum) {
    if (1 < local_c8.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_c8.Data.AllocatorInstance.Data,
                         (wchar_t *)local_88.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_14ea2ebc1;
    }
LAB_14ea2ec31:
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 1;
  }
  else {
    bVar7 = local_88.Data.ArrayNum + local_c8.Data.ArrayNum == 1;
LAB_14ea2ebc1:
    if (bVar7) goto LAB_14ea2ec31;
    ::FString::PrintfImpl
              (&local_b8,
               L"SanitizeTokenizedSequencePath failed: Input: \"%s\" Result: \"%s\" Expected \"%s\""
              );
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_98.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    local_98.Data.ArrayMax = local_b8.Data.ArrayMax;
    local_98.Data.ArrayNum = local_b8.Data.ArrayNum;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 0;
  }
  (*pcVar1)(this,uVar6,&local_98,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_88,L"./Movies/ImgMediaTestSequence");
  ::FString::FString(&local_a8,L".\\Movies\\ImgMediaTestSequence\\");
  UImgMediaSource::SanitizeTokenizedSequencePath(&local_c8,&local_a8);
  if (local_c8.Data.ArrayNum == local_88.Data.ArrayNum) {
    if (1 < local_c8.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_c8.Data.AllocatorInstance.Data,
                         (wchar_t *)local_88.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_14ea2ecd1;
    }
LAB_14ea2ed41:
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 1;
  }
  else {
    bVar7 = local_88.Data.ArrayNum + local_c8.Data.ArrayNum == 1;
LAB_14ea2ecd1:
    if (bVar7) goto LAB_14ea2ed41;
    ::FString::PrintfImpl
              (&local_b8,
               L"SanitizeTokenizedSequencePath failed: Input: \"%s\" Result: \"%s\" Expected \"%s\""
              );
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_98.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    local_98.Data.ArrayMax = local_b8.Data.ArrayMax;
    local_98.Data.ArrayNum = local_b8.Data.ArrayNum;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 0;
  }
  (*pcVar1)(this,uVar6,&local_98,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_88,L"./Movies/ImgMediaTestSequence");
  ::FString::FString(&local_a8,L"\".\\Movies\\ImgMediaTestSequence\"");
  UImgMediaSource::SanitizeTokenizedSequencePath(&local_c8,&local_a8);
  if (local_c8.Data.ArrayNum == local_88.Data.ArrayNum) {
    if (1 < local_c8.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_c8.Data.AllocatorInstance.Data,
                         (wchar_t *)local_88.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_14ea2ede1;
    }
LAB_14ea2ee51:
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 1;
  }
  else {
    bVar7 = local_88.Data.ArrayNum + local_c8.Data.ArrayNum == 1;
LAB_14ea2ede1:
    if (bVar7) goto LAB_14ea2ee51;
    ::FString::PrintfImpl
              (&local_b8,
               L"SanitizeTokenizedSequencePath failed: Input: \"%s\" Result: \"%s\" Expected \"%s\""
              );
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_98.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    local_98.Data.ArrayMax = local_b8.Data.ArrayMax;
    local_98.Data.ArrayNum = local_b8.Data.ArrayNum;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 0;
  }
  (*pcVar1)(this,uVar6,&local_98,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_88,L"./Movies/ImgMediaTestSequence");
  ::FString::FString(&local_a8,L"./Movies/ImgMediaTestSequence/Image0000.exr");
  UImgMediaSource::SanitizeTokenizedSequencePath(&local_c8,&local_a8);
  if (local_c8.Data.ArrayNum == local_88.Data.ArrayNum) {
    if (1 < local_c8.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_c8.Data.AllocatorInstance.Data,
                         (wchar_t *)local_88.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_14ea2eef1;
    }
LAB_14ea2ef61:
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 1;
  }
  else {
    bVar7 = local_88.Data.ArrayNum + local_c8.Data.ArrayNum == 1;
LAB_14ea2eef1:
    if (bVar7) goto LAB_14ea2ef61;
    ::FString::PrintfImpl
              (&local_b8,
               L"SanitizeTokenizedSequencePath failed: Input: \"%s\" Result: \"%s\" Expected \"%s\""
              );
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_98.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    local_98.Data.ArrayMax = local_b8.Data.ArrayMax;
    local_98.Data.ArrayNum = local_b8.Data.ArrayNum;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 0;
  }
  (*pcVar1)(this,uVar6,&local_98,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_88,L"./Movies/ImgMediaTestSequence");
  ::FString::FString(&local_a8,L".\\Movies\\ImgMediaTestSequence\\Image0000.exr");
  UImgMediaSource::SanitizeTokenizedSequencePath(&local_c8,&local_a8);
  if (local_c8.Data.ArrayNum == local_88.Data.ArrayNum) {
    if (1 < local_c8.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_c8.Data.AllocatorInstance.Data,
                         (wchar_t *)local_88.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_14ea2f001;
    }
LAB_14ea2f071:
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 1;
  }
  else {
    bVar7 = local_88.Data.ArrayNum + local_c8.Data.ArrayNum == 1;
LAB_14ea2f001:
    if (bVar7) goto LAB_14ea2f071;
    ::FString::PrintfImpl
              (&local_b8,
               L"SanitizeTokenizedSequencePath failed: Input: \"%s\" Result: \"%s\" Expected \"%s\""
              );
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_98.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    local_98.Data.ArrayMax = local_b8.Data.ArrayMax;
    local_98.Data.ArrayNum = local_b8.Data.ArrayNum;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 0;
  }
  (*pcVar1)(this,uVar6,&local_98,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_88,L"./Movies/ImgMediaTestSequence");
  ::FString::FString(&local_a8,L"\".\\Movies\\ImgMediaTestSequence\\Image0000.exr\"");
  UImgMediaSource::SanitizeTokenizedSequencePath(&local_c8,&local_a8);
  if (local_c8.Data.ArrayNum == local_88.Data.ArrayNum) {
    if (1 < local_c8.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_c8.Data.AllocatorInstance.Data,
                         (wchar_t *)local_88.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_14ea2f111;
    }
LAB_14ea2f181:
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 1;
  }
  else {
    bVar7 = local_88.Data.ArrayNum + local_c8.Data.ArrayNum == 1;
LAB_14ea2f111:
    if (bVar7) goto LAB_14ea2f181;
    ::FString::PrintfImpl
              (&local_b8,
               L"SanitizeTokenizedSequencePath failed: Input: \"%s\" Result: \"%s\" Expected \"%s\""
              );
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_98.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    local_98.Data.ArrayMax = local_b8.Data.ArrayMax;
    local_98.Data.ArrayNum = local_b8.Data.ArrayNum;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    uVar6 = 0;
  }
  (*pcVar1)(this,uVar6,&local_98,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pFVar4 = FPaths::ProjectDir(&local_b8);
  local_60 = 0x1b;
  local_68 = L"Movies/ImgMediaTestSequence";
  local_78.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  iVar3 = (pFVar4->Data).ArrayNum;
  local_78.Size = iVar3 + -1;
  if (iVar3 == 0) {
    local_78.Size = iVar2;
  }
  FPaths::CombineInternal(&local_c8,&local_78,2);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_a8,L"./Movies/ImgMediaTestSequence");
  UImgMediaSource::SanitizeTokenizedSequencePath(&local_88,&local_c8);
  if (local_88.Data.ArrayNum == local_a8.Data.ArrayNum) {
    if (1 < local_88.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_88.Data.AllocatorInstance.Data,
                         (wchar_t *)local_a8.Data.AllocatorInstance.Data);
      bVar7 = iVar3 == 0;
      goto LAB_14ea2f263;
    }
  }
  else {
    bVar7 = local_a8.Data.ArrayNum + local_88.Data.ArrayNum == 1;
LAB_14ea2f263:
    if (!bVar7) {
      ::FString::PrintfImpl
                (&local_b8,
                 L"SanitizeTokenizedSequencePath failed: Input: \"%s\" Result: \"%s\" Expected \"%s\""
                );
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      local_98.Data.ArrayMax = local_b8.Data.ArrayMax;
      local_98.Data.ArrayNum = local_b8.Data.ArrayNum;
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      uVar6 = 0;
      goto LAB_14ea2f2e3;
    }
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  uVar6 = 1;
LAB_14ea2f2e3:
  (*pcVar1)(this,uVar6,&local_98,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_b8,L"./Movies/ImgMediaTestSequence");
  pFVar4 = FPaths::ConvertRelativePathToFull(&local_a8,&local_c8);
  bVar7 = `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_4>::operator()
                    (&local_res8,pFVar4,&local_b8,&local_98);
  (*pcVar1)(this,bVar7,&local_98,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  local_78.DataPtr = (wchar_t *)local_c8.Data.AllocatorInstance.Data;
  local_68 = L"Image0000.exr";
  local_60 = 0xd;
  local_78.Size = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    local_78.Size = iVar2;
  }
  FPaths::CombineInternal(&local_b8,&local_78,2);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
  local_c8.Data.ArrayNum = local_b8.Data.ArrayNum;
  local_c8.Data.ArrayMax = local_b8.Data.ArrayMax;
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_b8,L"./Movies/ImgMediaTestSequence");
  bVar7 = `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_4>::operator()
                    (&local_res8,&local_c8,&local_b8,&local_98);
  (*pcVar1)(this,bVar7,&local_98,0);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_b8,L"./Movies/ImgMediaTestSequence");
  pFVar4 = FPaths::ConvertRelativePathToFull(&local_a8,&local_c8);
  bVar7 = `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_4>::operator()
                    (&local_res8,pFVar4,&local_b8,&local_98);
  (*pcVar1)(this,bVar7,&local_98,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pFVar4 = FPaths::ProjectContentDir(&local_b8);
  local_68 = L"Movies/ImgMediaTestSequence";
  local_60 = 0x1b;
  local_78.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  iVar3 = (pFVar4->Data).ArrayNum;
  local_78.Size = iVar3 + -1;
  if (iVar3 == 0) {
    local_78.Size = iVar2;
  }
  FPaths::CombineInternal(&local_c8,&local_78,2);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_b8,L"./Movies/ImgMediaTestSequence");
  bVar7 = `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_4>::operator()
                    (&local_res8,&local_c8,&local_b8,&local_98);
  (*pcVar1)(this,bVar7,&local_98,0);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_b8,L"./Movies/ImgMediaTestSequence");
  pFVar4 = FPaths::ConvertRelativePathToFull(&local_a8,&local_c8);
  bVar7 = `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_4>::operator()
                    (&local_res8,pFVar4,&local_b8,&local_98);
  (*pcVar1)(this,bVar7,&local_98,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  local_78.DataPtr = (wchar_t *)local_c8.Data.AllocatorInstance.Data;
  local_68 = L"Image0000.exr";
  local_60 = 0xd;
  local_78.Size = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    local_78.Size = iVar2;
  }
  FPaths::CombineInternal(&local_b8,&local_78,2);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
  local_c8.Data.ArrayNum = local_b8.Data.ArrayNum;
  local_c8.Data.ArrayMax = local_b8.Data.ArrayMax;
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_b8,L"./Movies/ImgMediaTestSequence");
  bVar7 = `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_4>::operator()
                    (&local_res8,&local_c8,&local_b8,&local_98);
  (*pcVar1)(this,bVar7,&local_98,0);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_b8,L"./Movies/ImgMediaTestSequence");
  pFVar4 = FPaths::ConvertRelativePathToFull(&local_a8,&local_c8);
  bVar7 = `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_4>::operator()
                    (&local_res8,pFVar4,&local_b8,&local_98);
  (*pcVar1)(this,bVar7,&local_98,0);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pFVar4 = FPaths::EngineDir(&local_b8);
  local_68 = L"Movies/ImgMediaTestSequence";
  local_60 = 0x1b;
  local_78.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  iVar3 = (pFVar4->Data).ArrayNum;
  local_78.Size = iVar3 + -1;
  if (iVar3 == 0) {
    local_78.Size = iVar2;
  }
  FPaths::CombineInternal(&local_c8,&local_78,2);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  FPaths::ConvertRelativePathToFull(&local_a8,&local_c8);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  bVar7 = `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_4>::operator()
                    (&local_res8,&local_c8,&local_a8,&local_98);
  (*pcVar1)(this,bVar7,&local_98,0);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  pFVar4 = FPaths::ConvertRelativePathToFull(&local_b8,&local_c8);
  bVar7 = `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_4>::operator()
                    (&local_res8,pFVar4,&local_a8,&local_98);
  (*pcVar1)(this,bVar7,&local_98,0);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  local_78.DataPtr = (wchar_t *)local_c8.Data.AllocatorInstance.Data;
  local_68 = L"Image0000.exr";
  local_60 = 0xd;
  local_78.Size = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    local_78.Size = iVar5;
  }
  FPaths::CombineInternal(&local_b8,&local_78,2);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
  local_c8.Data.ArrayNum = local_b8.Data.ArrayNum;
  local_c8.Data.ArrayMax = local_b8.Data.ArrayMax;
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  bVar7 = `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_4>::operator()
                    (&local_res8,&local_c8,&local_a8,&local_98);
  (*pcVar1)(this,bVar7,&local_98,0);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  pFVar4 = FPaths::ConvertRelativePathToFull(&local_b8,&local_c8);
  bVar7 = `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_4>::operator()
                    (&local_res8,pFVar4,&local_a8,&local_98);
  (*pcVar1)(this,bVar7,&local_98,0);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a8,L"{project_dir}/Movies/ImgMediaTestSequence");
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  bVar7 = `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_4>::operator()
                    (&local_res8,&local_a8,&local_a8,&local_98);
  (*pcVar1)(this,bVar7,&local_98,0);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_b8,L"{project_dir}/Movies/ImgMediaTestSequence/Image0000.exr");
  bVar7 = `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_4>::operator()
                    (&local_res8,&local_b8,&local_a8,&local_98);
  (*pcVar1)(this,bVar7,&local_98,0);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a8,L"{engine_dir}/Movies/ImgMediaTestSequence");
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  bVar7 = `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_4>::operator()
                    (&local_res8,&local_a8,&local_a8,&local_98);
  (*pcVar1)(this,bVar7,&local_98,0);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_b8,L"{engine_dir}/Movies/ImgMediaTestSequence/Image0000.exr");
  bVar7 = `FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_4>::operator()
                    (&local_res8,&local_b8,&local_a8,&local_98);
  (*pcVar1)(this,bVar7,&local_98,0);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  bVar7 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ScopeExitSupport::TScopeGuard<`FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_3>_>::
  ~TScopeGuard<_FImgMediaSanitizePathTests::RunTest_::__l2::<lambda_3>_>(local_58);
  DestructItems<FString,int>(local_48,(int)local_40);
  if (local_48 != (FString *)0x0) {
    FMemory::Free(local_48);
  }
  DestructItems<FString,int>(local_38,(int)local_30);
  if (local_38 != (FString *)0x0) {
    FMemory::Free(local_38);
  }
  return !bVar7;
}

// GetBeautifiedTestName @ 14ea2f9d0

FString * __thiscall
FImgMediaSanitizePathTests::GetBeautifiedTestName
          (FImgMediaSanitizePathTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Plugins.ImgMedia.SanitizePath");
  return __return_storage_ptr__;
}

// operator() @ 14ea3cdf0

bool __thiscall
`FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_1>::operator()(void *this,FString *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  IFileManager *pIVar8;
  wchar_t *pwVar9;
  
  bVar4 = FPaths::DirectoryExists(param_1);
  if (!bVar4) {
    pIVar8 = IFileManager::Get();
    if ((param_1->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    cVar5 = (**(code **)((longlong)*pIVar8 + 0x60))(pIVar8,pwVar9,0);
    if (cVar5 == '\0') {
      return false;
    }
    pFVar2 = *(ForAnyElementType **)this;
    if ((pFVar2->Data <= param_1) &&
       (param_1 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    ::FString::FString((FString *)(pFVar2->Data + (longlong)iVar7 * 0x10),param_1);
  }
  return true;
}

// operator() @ 14ea3e8d0

bool __thiscall
`FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_2>::operator()(void *this,FString *param_1)

{
  int *piVar1;
  uint *puVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  IFileManager *pIVar8;
  FArchive *this_00;
  wchar_t *pwVar9;
  uint local_res18 [4];
  
  bVar5 = FPaths::FileExists(param_1);
  if (bVar5) {
    return true;
  }
  pIVar8 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  this_00 = (FArchive *)(**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,pwVar9,0);
  if (this_00 != (FArchive *)0x0) {
    local_res18[0] = 0x4d2;
    puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
    if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar2 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,local_res18);
      }
    }
    else {
      local_res18[0] = *puVar2;
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    }
    pFVar3 = *(ForAnyElementType **)this;
    if ((pFVar3->Data <= param_1) &&
       (param_1 < pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    ::FString::FString((FString *)(pFVar3->Data + (longlong)iVar7 * 0x10),param_1);
    (*(code *)**(undefined8 **)this_00)(this_00,1);
    return true;
  }
  return false;
}

// operator() @ 14ea3f530

bool __thiscall
`FImgMediaSanitizePathTests::RunTest'::__l2::<lambda_4>::operator()
          (void *this,FString *param_1,FString *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FString local_28;
  FString local_18;
  
  UImgMediaSource::SanitizeTokenizedSequencePath(&local_18,param_1);
  iVar2 = (param_2->Data).ArrayNum;
  if (local_18.Data.ArrayNum == iVar2) {
    if (1 < local_18.Data.ArrayNum) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_18.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_14ea3f582;
    }
  }
  else {
    bVar3 = iVar2 + local_18.Data.ArrayNum == 1;
LAB_14ea3f582:
    if (!bVar3) {
      ::FString::PrintfImpl
                (&local_28,
                 L"SanitizeTokenizedSequencePath failed: Input: \"%s\" Result: \"%s\" Expected \"%s\""
                );
      if (param_3 != &local_28) {
        pFVar1 = (param_3->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_3->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
        (param_3->Data).ArrayNum = local_28.Data.ArrayNum;
        (param_3->Data).ArrayMax = local_28.Data.ArrayMax;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      bVar3 = false;
      goto LAB_14ea3f61c;
    }
  }
  bVar3 = true;
LAB_14ea3f61c:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

