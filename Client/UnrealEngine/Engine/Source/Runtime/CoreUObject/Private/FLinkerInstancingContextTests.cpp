// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// GetTestFlags @ 142093ea0

EAutomationTestFlags __thiscall
FLinkerInstancingContextTests::GetTestFlags(FLinkerInstancingContextTests *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 142093eb0

bool __thiscall FLinkerInstancingContextTests::IsStressTest(FLinkerInstancingContextTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142093ec0

uint __thiscall
FLinkerInstancingContextTests::GetRequiredDeviceNum(FLinkerInstancingContextTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 142093ed0

FString * __thiscall
FLinkerInstancingContextTests::GetTestSourceFileName
          (FLinkerInstancingContextTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerInstancingContext.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142093f00

int __thiscall
FLinkerInstancingContextTests::GetTestSourceFileLine(FLinkerInstancingContextTests *this)

{
  return 0x1d4;
}

// GetTests @ 142093f10

/* WARNING: Removing unreachable block (ram,0x000142093ffd) */
/* WARNING: Removing unreachable block (ram,0x0001420940c8) */

void __thiscall
FLinkerInstancingContextTests::GetTests
          (FLinkerInstancingContextTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.CoreUObject.LinkerInstancingContext");
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

// RunTest @ 1420940f0

bool __thiscall
FLinkerInstancingContextTests::RunTest(FLinkerInstancingContextTests *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *pFVar4;
  FName FVar5;
  FString *pFVar6;
  FUtf8String *pFVar7;
  ForAnyElementType FVar8;
  size_t sVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FLinkerInstancingContext local_4a8;
  FLinkerInstancingContext local_498;
  FLinkerInstancingContextTests *local_488;
  FUtf8String local_480;
  FUtf8String local_470;
  FSoftObjectPath local_460;
  FSoftObjectPath local_440;
  FSoftObjectPath local_420;
  FSoftObjectPath local_400;
  FName local_3e0;
  FName local_3d8;
  FName local_3d0;
  FTopLevelAssetPath local_3c8;
  FTopLevelAssetPath local_3b8;
  FTopLevelAssetPath local_3a8;
  FTopLevelAssetPath local_398;
  FTopLevelAssetPath local_388;
  FTopLevelAssetPath local_378;
  FSoftObjectPath local_368;
  FSoftObjectPath local_348;
  FSoftObjectPath local_328;
  FSoftObjectPath local_308;
  FSoftObjectPath local_2e8;
  FSoftObjectPath local_2c8;
  FName local_2a8;
  FName local_2a0;
  FName local_298;
  FName local_290;
  FName local_288;
  FName local_280;
  FName local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  TStringOverload<FUtf8String> local_258;
  FString local_248;
  FName local_238;
  FString local_230;
  FString local_220;
  TStringOverload<FUtf8String> local_210;
  TStringOverload<FUtf8String> local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FName local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FTopLevelAssetPath local_128;
  FName local_118 [2];
  FTopLevelAssetPath local_108;
  FTopLevelAssetPath local_f8;
  FTopLevelAssetPath local_e8;
  FString local_d8;
  FUtf8String local_c8;
  FTopLevelAssetPath local_b8;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78 [2];
  FTopLevelAssetPath local_68;
  FString local_58;
  FUtf8String local_48;
  
  ::FName::FName(&local_res8,L"/Game/PathA/PathB/PackageName");
  ::FName::FName(&local_3d8,L"/Game/PathA/PathB/PackageNameOther");
  ::FName::FName(&local_3e0,L"/Game/PathA/PathB/PackageName_Instance");
  pFVar4 = ::FName::FName(local_78,L"PackageName");
  pFVar13 = (FScriptContainerElement *)0x0;
  local_3c8.PackageName.ComparisonIndex.Value = 0;
  local_3c8.PackageName.Number = 0;
  local_3c8.AssetName.ComparisonIndex.Value = 0;
  local_3c8.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_3c8,local_res8,*pFVar4);
  local_128.PackageName = local_3c8.PackageName;
  local_128.AssetName = local_3c8.AssetName;
  local_420.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_420.AssetPath.PackageName.Number = 0;
  local_420.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_420.AssetPath.AssetName.Number = 0;
  local_420.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_420.SubPathString.Data.ArrayNum = 0;
  local_420.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_420,&local_128);
  FUtf8String::FUtf8String(&local_480,"PersistentLevel.Actor.Component");
  pFVar4 = ::FName::FName(&local_80,L"PackageName");
  local_3b8.PackageName.ComparisonIndex.Value = 0;
  local_3b8.PackageName.Number = 0;
  local_3b8.AssetName.ComparisonIndex.Value = 0;
  local_3b8.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_3b8,local_res8,*pFVar4);
  local_258.String.Data.AllocatorInstance.Data = local_480.Data.AllocatorInstance.Data;
  local_258.String.Data.ArrayNum = local_480.Data.ArrayNum;
  local_258.String.Data.ArrayMax = local_480.Data.ArrayMax;
  local_480.Data.ArrayNum = 0;
  local_480.Data.ArrayMax = 0;
  local_68.PackageName = local_3b8.PackageName;
  local_68.AssetName = local_3b8.AssetName;
  local_400.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_400.AssetPath.PackageName.Number = 0;
  local_400.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_400.AssetPath.AssetName.Number = 0;
  local_400.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_400.SubPathString.Data.ArrayNum = 0;
  local_400.SubPathString.Data.ArrayMax = 0;
  local_480.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FSoftObjectPath::SetPath(&local_400,&local_68,&local_258);
  if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_480.Data.AllocatorInstance.Data);
  }
  FLinkerInstancingContext::FLinkerInstancingContext(&local_4a8,false);
  if (local_4a8.SharedData.Object == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)local_4a8.SharedData.Object);
  ((local_4a8.SharedData.Object)->InstancedPackageMap).bEnableNonEditorPath = true;
  if (local_4a8.SharedData.Object != (FSharedLinkerInstancingContextData *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)local_4a8.SharedData.Object);
  }
  FLinkerInstancingContext::BuildPackageMapping(&local_4a8,local_res8,local_3e0);
  FVar5 = FLinkerInstancingContext::RemapPackage(&local_4a8,&local_88);
  ::FString::FString(&local_248,
                     "RemapPackage with existing mapping - bSoftObjectPathRemappingEnabled(false)");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_248.Data.ArrayNum != 0) {
    FVar8.Data = local_248.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,*(FName *)FVar5,local_3e0);
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  FVar5 = FLinkerInstancingContext::RemapPackage(&local_4a8,&local_90);
  ::FString::FString(&local_1b0,
                     "RemapPackage without mapping - bSoftObjectPathRemappingEnabled(false)");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_1b0.Data.ArrayNum != 0) {
    FVar8.Data = local_1b0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,*(FName *)FVar5,local_3d8);
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  FVar8.Data = local_420.SubPathString.Data.AllocatorInstance.Data;
  sVar9 = (size_t)local_420.SubPathString.Data.ArrayNum;
  local_308.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_308.SubPathString.Data.ArrayNum = local_420.SubPathString.Data.ArrayNum;
  local_308.AssetPath.PackageName = local_420.AssetPath.PackageName;
  local_308.AssetPath.AssetName = local_420.AssetPath.AssetName;
  if (local_420.SubPathString.Data.ArrayNum == 0) {
    local_308.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_420.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_308.SubPathString,local_420.SubPathString.Data.ArrayNum,
               &local_308.SubPathString.Data.ArrayMax);
    memcpy(local_308.SubPathString.Data.AllocatorInstance.Data,FVar8.Data,sVar9);
  }
  FLinkerInstancingContext::FixupSoftObjectPath(&local_4a8,&local_308);
  ::FString::FString(&local_230,
                     "FixupSoftObjectPath with no SubPathString - bSoftObjectPathRemappingEnabled(false)"
                    );
  bVar2 = FSoftObjectPath::operator==(&local_308,&local_420);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  FVar8.Data = local_400.SubPathString.Data.AllocatorInstance.Data;
  sVar9 = (size_t)local_400.SubPathString.Data.ArrayNum;
  local_2e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.SubPathString.Data.ArrayNum = local_400.SubPathString.Data.ArrayNum;
  local_2e8.AssetPath.PackageName = local_400.AssetPath.PackageName;
  local_2e8.AssetPath.AssetName = local_400.AssetPath.AssetName;
  if (local_400.SubPathString.Data.ArrayNum == 0) {
    local_2e8.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_400.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_2e8.SubPathString,local_400.SubPathString.Data.ArrayNum,
               &local_2e8.SubPathString.Data.ArrayMax);
    memcpy(local_2e8.SubPathString.Data.AllocatorInstance.Data,FVar8.Data,sVar9);
  }
  FLinkerInstancingContext::FixupSoftObjectPath(&local_4a8,&local_2e8);
  ::FString::FString(&local_220,
                     "FixupSoftObjectPath with SubPathString - bSoftObjectPathRemappingEnabled(false)"
                    );
  bVar2 = FSoftObjectPath::operator==(&local_2e8,&local_400);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_138,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_138,0);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  if (local_2e8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_308.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.SubPathString.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a8.SharedData.SharedReferenceCount.ReferenceController);
  if (local_400.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_420.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.SubPathString.Data.AllocatorInstance.Data);
  }
  ::FName::FName(&local_res18,L"/Game/PathA/PathB/PackageName");
  ::FName::FName(&local_3d0,L"/Game/PathA/PathB/PackageNameOther");
  ::FName::FName(&local_res20,L"/Game/PathA/PathB/PackageName_Instance");
  pFVar4 = ::FName::FName(&local_98,L"PackageName");
  local_3a8.PackageName.ComparisonIndex.Value = 0;
  local_3a8.PackageName.Number = 0;
  local_3a8.AssetName.ComparisonIndex.Value = 0;
  local_3a8.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_3a8,local_res18,*pFVar4);
  local_108.PackageName = local_3a8.PackageName;
  local_108.AssetName = local_3a8.AssetName;
  local_440.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_440.AssetPath.PackageName.Number = 0;
  local_440.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_440.AssetPath.AssetName.Number = 0;
  local_440.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_440.SubPathString.Data.ArrayNum = 0;
  local_440.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_440,&local_108);
  local_398.PackageName.ComparisonIndex.Value = 0;
  local_398.PackageName.Number = 0;
  local_398.AssetName.ComparisonIndex.Value = 0;
  local_398.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_398,local_res20,local_440.AssetPath.AssetName);
  local_f8.PackageName = local_398.PackageName;
  local_f8.AssetName = local_398.AssetName;
  local_368.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_368.AssetPath.PackageName.Number = 0;
  local_368.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_368.AssetPath.AssetName.Number = 0;
  local_368.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.SubPathString.Data.ArrayNum = 0;
  local_368.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_368,&local_f8);
  FUtf8String::FUtf8String(&local_470,"PersistentLevel.Actor.Component");
  pFVar4 = ::FName::FName(&local_a0,L"PackageName");
  local_388.PackageName.ComparisonIndex.Value = 0;
  local_388.PackageName.Number = 0;
  local_388.AssetName.ComparisonIndex.Value = 0;
  local_388.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_388,local_res18,*pFVar4);
  local_210.String.Data.AllocatorInstance.Data = local_470.Data.AllocatorInstance.Data;
  local_210.String.Data.ArrayNum = local_470.Data.ArrayNum;
  local_210.String.Data.ArrayMax = local_470.Data.ArrayMax;
  local_470.Data.ArrayNum = 0;
  local_470.Data.ArrayMax = 0;
  local_e8.PackageName = local_388.PackageName;
  local_e8.AssetName = local_388.AssetName;
  local_460.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_460.AssetPath.PackageName.Number = 0;
  local_460.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_460.AssetPath.AssetName.Number = 0;
  local_460.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_460.SubPathString.Data.ArrayNum = 0;
  local_460.SubPathString.Data.ArrayMax = 0;
  local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FSoftObjectPath::SetPath(&local_460,&local_e8,&local_210);
  if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.Data.AllocatorInstance.Data);
  }
  iVar11 = local_460.SubPathString.Data.ArrayNum + -1;
  if (local_460.SubPathString.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  pFVar6 = ::FString::ConstructFromPtrSize
                     (&local_d8,(uchar *)local_460.SubPathString.Data.AllocatorInstance.Data,iVar11)
  ;
  iVar14 = 0;
  pFVar10 = pFVar13;
  iVar11 = iVar14;
  if (&local_58 != pFVar6) {
    pFVar10 = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar11 = (pFVar6->Data).ArrayNum;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  local_378.PackageName.ComparisonIndex.Value = 0;
  local_378.PackageName.Number = 0;
  local_378.AssetName.ComparisonIndex.Value = 0;
  local_378.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_378,local_res20,local_460.AssetPath.AssetName);
  local_b8.PackageName = local_378.PackageName;
  local_b8.AssetName = local_378.AssetName;
  local_2c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_2c8.AssetPath.PackageName.Number = 0;
  iVar12 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar12 = 0;
  }
  local_2c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_2c8.AssetPath.AssetName.Number = 0;
  local_2c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.SubPathString.Data.ArrayNum = 0;
  local_2c8.SubPathString.Data.ArrayMax = 0;
  pFVar7 = FUtf8String::ConstructFromPtrSize(&local_c8,(wchar_t *)pFVar10,iVar12);
  local_200.String.Data.ArrayMax = iVar14;
  if (&local_48 != pFVar7) {
    pFVar13 = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar14 = (pFVar7->Data).ArrayNum;
    local_200.String.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_200.String.Data.AllocatorInstance.Data = pFVar13;
  local_200.String.Data.ArrayNum = iVar14;
  FSoftObjectPath::SetPath(&local_2c8,&local_b8,&local_200);
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  FLinkerInstancingContext::FLinkerInstancingContext(&local_498,true);
  if (local_498.SharedData.Object == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)local_498.SharedData.Object);
  ((local_498.SharedData.Object)->InstancedPackageMap).bEnableNonEditorPath = true;
  if (local_498.SharedData.Object != (FSharedLinkerInstancingContextData *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)local_498.SharedData.Object);
  }
  FLinkerInstancingContext::BuildPackageMapping(&local_498,local_res18,local_res20);
  FVar5 = FLinkerInstancingContext::RemapPackage(&local_498,&local_a8);
  ::FString::FString(&local_1f0,
                     "RemapPackage with existing mapping - bSoftObjectPathRemappingEnabled(true)");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_1f0.Data.ArrayNum != 0) {
    FVar8.Data = local_1f0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,*(FName *)FVar5,local_res20);
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  FVar5 = FLinkerInstancingContext::RemapPackage(&local_498,local_118);
  ::FString::FString(&local_1e0,
                     "RemapPackage without mapping - bSoftObjectPathRemappingEnabled(true)");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_1e0.Data.ArrayNum != 0) {
    FVar8.Data = local_1e0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,(wchar_t *)FVar8.Data,*(FName *)FVar5,local_3d0);
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  FVar8.Data = local_440.SubPathString.Data.AllocatorInstance.Data;
  sVar9 = (size_t)local_440.SubPathString.Data.ArrayNum;
  local_348.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.SubPathString.Data.ArrayNum = local_440.SubPathString.Data.ArrayNum;
  local_348.AssetPath.PackageName = local_440.AssetPath.PackageName;
  local_348.AssetPath.AssetName = local_440.AssetPath.AssetName;
  if (local_440.SubPathString.Data.ArrayNum == 0) {
    local_348.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_440.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_348.SubPathString,local_440.SubPathString.Data.ArrayNum,
               &local_348.SubPathString.Data.ArrayMax);
    memcpy(local_348.SubPathString.Data.AllocatorInstance.Data,FVar8.Data,sVar9);
  }
  FLinkerInstancingContext::FixupSoftObjectPath(&local_498,&local_348);
  ::FString::FString(&local_1d0,
                     "FixupSoftObjectPath with no SubPathString - bSoftObjectPathRemappingEnabled(true)"
                    );
  bVar2 = FSoftObjectPath::operator==(&local_348,&local_368);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_198,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_198,0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  FVar8.Data = local_460.SubPathString.Data.AllocatorInstance.Data;
  sVar9 = (size_t)local_460.SubPathString.Data.ArrayNum;
  local_328.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.SubPathString.Data.ArrayNum = local_460.SubPathString.Data.ArrayNum;
  local_328.AssetPath.PackageName = local_460.AssetPath.PackageName;
  local_328.AssetPath.AssetName = local_460.AssetPath.AssetName;
  if (local_460.SubPathString.Data.ArrayNum == 0) {
    local_328.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_460.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_328.SubPathString,local_460.SubPathString.Data.ArrayNum,
               &local_328.SubPathString.Data.ArrayMax);
    memcpy(local_328.SubPathString.Data.AllocatorInstance.Data,FVar8.Data,sVar9);
  }
  FLinkerInstancingContext::FixupSoftObjectPath(&local_498,&local_328);
  ::FString::FString(&local_1c0,
                     "FixupSoftObjectPath with SubPathString - bSoftObjectPathRemappingEnabled(true)"
                    );
  bVar2 = FSoftObjectPath::operator==(&local_328,&local_2c8);
  if (!bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_188,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_188,0);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
  }
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  if (local_328.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_348.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.SubPathString.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_498.SharedData.SharedReferenceCount.ReferenceController);
  if (local_2c8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_460.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_368.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_440.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.SubPathString.Data.AllocatorInstance.Data);
  }
  local_488 = this;
  ::FName::FName(&local_298,L"/Game/PathA/PathB/PackageName");
  ::FName::FName(&local_2a0,L"/Game/PathA/PathB/PackageName_LevelInstance1");
  ::FName::FName(&local_2a8,L"/Game/PathA/PathB/PackageName/_Generated_/1AEHCD0PRR98XVM12PU4N1D8X");
  ::FName::FName(&local_1a0,
                 L"/Game/PathA/PathB/PackageName/_Generated_/1AEHCD0PRR98XVM12PU4N1D8X_LevelInstance1"
                );
  ::FString::FString(&local_178,L"Suffix");
  `FLinkerInstancingContextTests::RunTest'::__l2::<lambda_1>::operator()
            (&local_488,local_298,local_2a0,local_2a8,local_1a0,&local_178);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  ::FName::FName(&local_280,L"/Game/PathA/PathB/PackageName");
  ::FName::FName(&local_288,L"/Temp/Game/PathA/PathB/PackageName");
  ::FName::FName(&local_238,L"/Game/PathA/PathB/PackageName/_Generated_/1AEHCD0PRR98XVM12PU4N1D8X");
  ::FName::FName(&local_290,
                 L"/Temp/Game/PathA/PathB/PackageName/_Generated_/1AEHCD0PRR98XVM12PU4N1D8X");
  ::FString::FString(&local_168,L"Prefix");
  `FLinkerInstancingContextTests::RunTest'::__l2::<lambda_1>::operator()
            (&local_488,local_280,local_288,local_238,local_290,&local_168);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  ::FName::FName(&local_260,L"/Game/PathA/PathB/PackageName");
  ::FName::FName(&local_268,L"/Temp/Game/PathA/PathB/PackageName_LevelInstance1");
  ::FName::FName(&local_270,L"/Game/PathA/PathB/PackageName/_Generated_/1AEHCD0PRR98XVM12PU4N1D8X");
  ::FName::FName(&local_278,
                 L"/Temp/Game/PathA/PathB/PackageName/_Generated_/1AEHCD0PRR98XVM12PU4N1D8X_LevelInstance1"
                );
  ::FString::FString(&local_158,L"Suffix+Prefix");
  `FLinkerInstancingContextTests::RunTest'::__l2::<lambda_1>::operator()
            (&local_488,local_260,local_268,local_270,local_278,&local_158);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 142094ea0

FString * __thiscall
FLinkerInstancingContextTests::GetBeautifiedTestName
          (FLinkerInstancingContextTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.CoreUObject.LinkerInstancingContext");
  return __return_storage_ptr__;
}

// operator() @ 1420a6b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FLinkerInstancingContextTests::RunTest'::__l2::<lambda_1>::operator()
          (void *this,FName param_1,FName param_2,FName param_3,FName param_4,FString *param_5)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FString *pFVar4;
  FName *pFVar5;
  FString *pFVar6;
  FUtf8String *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  ForAnyElementType FVar12;
  int iVar13;
  int iVar14;
  undefined1 auStackY_4b8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_478;
  FUtf8String local_468;
  FUtf8String local_458;
  FLinkerInstancingContext local_448;
  FSoftObjectPath local_438;
  FSoftObjectPath local_418;
  FString *local_3f8;
  FTopLevelAssetPath local_3e8;
  FTopLevelAssetPath local_3d8;
  FTopLevelAssetPath local_3c8;
  FTopLevelAssetPath local_3b8;
  FTopLevelAssetPath local_3a8;
  FTopLevelAssetPath local_398;
  FTopLevelAssetPath local_388;
  FTopLevelAssetPath local_378;
  FSoftObjectPath local_368;
  FSoftObjectPath local_348;
  FSoftObjectPath local_328;
  FSoftObjectPath local_308;
  FSoftObjectPath local_2e8;
  FSoftObjectPath local_2c8;
  undefined8 local_2a8;
  FLinkerInstancingContext *local_2a0;
  undefined1 *local_298;
  undefined8 *local_290;
  FString local_288;
  TStringOverload<FUtf8String> local_278;
  TStringOverload<FUtf8String> local_268;
  TStringOverload<FUtf8String> local_258;
  TStringOverload<FUtf8String> local_248;
  FUtf8String local_238;
  FTopLevelAssetPath local_228;
  FTopLevelAssetPath local_218;
  FTopLevelAssetPath local_208;
  FTopLevelAssetPath local_1f8;
  FString local_1e8;
  FUtf8String local_1d8;
  FTopLevelAssetPath local_1c8;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198 [2];
  FTopLevelAssetPath local_188;
  FTopLevelAssetPath local_178;
  FTopLevelAssetPath local_168;
  FString local_158;
  FStringFormatArg local_148;
  FString local_128;
  FString local_118;
  FUtf8String local_108;
  FString local_f8;
  FUtf8String local_e8;
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_98;
  undefined4 local_90;
  EInstanceMappingDirection local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  local_3f8 = param_5;
  local_290 = this;
  FLinkerInstancingContext::FLinkerInstancingContext(&local_448,true);
  if (local_448.SharedData.Object == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_448.SharedData.Object == (FSharedLinkerInstancingContextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)local_448.SharedData.Object);
  ((local_448.SharedData.Object)->InstancedPackageMap).bEnableNonEditorPath = true;
  if (local_448.SharedData.Object != (FSharedLinkerInstancingContextData *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)local_448.SharedData.Object);
  }
  FLinkerInstancingContext::BuildPackageMapping(&local_448,param_3,param_4);
  local_ac = 0x80;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a4 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  local_a8 = 0xffffffff;
  local_88 = InstancedToOriginal;
  local_50._0_1_ = false;
  local_50._1_1_ = true;
  FLinkerInstancedPackageMap::BuildPackageMapping
            ((FLinkerInstancedPackageMap *)local_d8,param_3,param_4,true);
  this_00 = *(FAutomationTestBase **)this;
  FVar3 = FLinkerInstancingContext::RemapPackage(&local_448,&local_1b8);
  pFVar4 = ::FString::FString(&local_f8,local_3f8);
  FStringFormatArg::FStringFormatArg(&local_148,pFVar4);
  local_478.ArrayNum = 1;
  local_478.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_478.AllocatorInstance,1,&local_478.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_478.AllocatorInstance.Data,&local_148,1);
  ::FString::FormatImpl
            (&local_288,L"{0} - RemapPackage - _Generated_ Package with Suffix",&local_478);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_288.Data.ArrayNum != 0) {
    FVar12.Data = local_288.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual(this_00,(wchar_t *)FVar12.Data,*(FName *)FVar3,param_4);
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_478.AllocatorInstance.Data,local_478.ArrayNum);
  if ((FStringFormatArg *)local_478.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_478.AllocatorInstance.Data);
  }
  if (local_148.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.StringValue.Data.AllocatorInstance.Data);
  }
  local_2a8 = *local_290;
  local_2a0 = &local_448;
  local_298 = local_d8;
  pFVar5 = ::FName::FName(&local_1b0,L"PackageName");
  pFVar9 = (FScriptContainerElement *)0x0;
  iVar14 = 0;
  local_3d8.PackageName.ComparisonIndex.Value = 0;
  local_3d8.PackageName.Number = 0;
  local_3d8.AssetName.ComparisonIndex.Value = 0;
  local_3d8.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_3d8,param_1,*pFVar5);
  local_188.PackageName = local_3d8.PackageName;
  local_188.AssetName = local_3d8.AssetName;
  local_368.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_368.AssetPath.PackageName.Number = 0;
  local_368.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_368.AssetPath.AssetName.Number = 0;
  local_368.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.SubPathString.Data.ArrayNum = 0;
  local_368.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_368,&local_188);
  local_3e8.PackageName.ComparisonIndex.Value = 0;
  local_3e8.PackageName.Number = 0;
  local_3e8.AssetName.ComparisonIndex.Value = 0;
  local_3e8.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_3e8,param_2,local_368.AssetPath.AssetName);
  local_178.PackageName = local_3e8.PackageName;
  local_178.AssetName = local_3e8.AssetName;
  local_2c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_2c8.AssetPath.PackageName.Number = 0;
  local_2c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_2c8.AssetPath.AssetName.Number = 0;
  local_2c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.SubPathString.Data.ArrayNum = 0;
  local_2c8.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_2c8,&local_178);
  pFVar4 = local_3f8;
  ``FLinkerInstancingContextTests::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
  operator()(&local_2a8,&local_368,&local_2c8,local_3f8);
  FUtf8String::FUtf8String(&local_468,"PersistentLevel.Actor.Component");
  pFVar5 = ::FName::FName(&local_1a8,L"PackageName");
  local_3c8.PackageName.ComparisonIndex.Value = 0;
  local_3c8.PackageName.Number = 0;
  local_3c8.AssetName.ComparisonIndex.Value = 0;
  local_3c8.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_3c8,param_1,*pFVar5);
  local_278.String.Data.AllocatorInstance.Data = local_468.Data.AllocatorInstance.Data;
  local_278.String.Data.ArrayNum = local_468.Data.ArrayNum;
  local_278.String.Data.ArrayMax = local_468.Data.ArrayMax;
  local_468.Data.ArrayNum = 0;
  local_468.Data.ArrayMax = 0;
  local_168.PackageName = local_3c8.PackageName;
  local_168.AssetName = local_3c8.AssetName;
  local_418.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_418.AssetPath.PackageName.Number = 0;
  local_418.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_418.AssetPath.AssetName.Number = 0;
  local_418.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_418.SubPathString.Data.ArrayNum = 0;
  local_418.SubPathString.Data.ArrayMax = 0;
  local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FSoftObjectPath::SetPath(&local_418,&local_168,&local_278);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  iVar10 = local_418.SubPathString.Data.ArrayNum + -1;
  if (local_418.SubPathString.Data.ArrayNum == 0) {
    iVar10 = iVar14;
  }
  pFVar6 = ::FString::ConstructFromPtrSize
                     (&local_158,(uchar *)local_418.SubPathString.Data.AllocatorInstance.Data,iVar10
                     );
  iVar13 = 0;
  pFVar8 = pFVar9;
  iVar10 = iVar13;
  if (&local_118 != pFVar6) {
    pFVar8 = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = (pFVar6->Data).ArrayNum;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  local_3b8.PackageName.ComparisonIndex.Value = 0;
  local_3b8.PackageName.Number = 0;
  local_3b8.AssetName.ComparisonIndex.Value = 0;
  local_3b8.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_3b8,param_2,local_418.AssetPath.AssetName);
  local_228.PackageName = local_3b8.PackageName;
  local_228.AssetName = local_3b8.AssetName;
  local_2e8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_2e8.AssetPath.PackageName.Number = 0;
  iVar11 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar11 = iVar14;
  }
  local_2e8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_2e8.AssetPath.AssetName.Number = 0;
  local_2e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.SubPathString.Data.ArrayNum = 0;
  local_2e8.SubPathString.Data.ArrayMax = 0;
  pFVar7 = FUtf8String::ConstructFromPtrSize(&local_238,(wchar_t *)pFVar8,iVar11);
  if (&local_108 != pFVar7) {
    pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar13 = (pFVar7->Data).ArrayNum;
    iVar14 = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  local_268.String.Data.AllocatorInstance.Data = pFVar9;
  local_268.String.Data.ArrayNum = iVar13;
  local_268.String.Data.ArrayMax = iVar14;
  FSoftObjectPath::SetPath(&local_2e8,&local_228,&local_268);
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  ``FLinkerInstancingContextTests::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
  operator()(&local_2a8,&local_418,&local_2e8,pFVar4);
  pFVar5 = ::FName::FName(&local_1a0,L"PackageName");
  iVar14 = 0;
  pFVar9 = (FScriptContainerElement *)0x0;
  local_3a8.PackageName.ComparisonIndex.Value = 0;
  local_3a8.PackageName.Number = 0;
  local_3a8.AssetName.ComparisonIndex.Value = 0;
  local_3a8.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_3a8,param_3,*pFVar5);
  local_218.PackageName = local_3a8.PackageName;
  local_218.AssetName = local_3a8.AssetName;
  local_348.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_348.AssetPath.PackageName.Number = 0;
  local_348.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_348.AssetPath.AssetName.Number = 0;
  local_348.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.SubPathString.Data.ArrayNum = 0;
  local_348.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_348,&local_218);
  local_398.PackageName.ComparisonIndex.Value = 0;
  local_398.PackageName.Number = 0;
  local_398.AssetName.ComparisonIndex.Value = 0;
  local_398.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_398,param_4,local_348.AssetPath.AssetName);
  local_208.PackageName = local_398.PackageName;
  local_208.AssetName = local_398.AssetName;
  local_308.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_308.AssetPath.PackageName.Number = 0;
  local_308.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_308.AssetPath.AssetName.Number = 0;
  local_308.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_308.SubPathString.Data.ArrayNum = 0;
  local_308.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_308,&local_208);
  ``FLinkerInstancingContextTests::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
  operator()(&local_2a8,&local_348,&local_308,pFVar4);
  FUtf8String::FUtf8String(&local_458,"PersistentLevel.Actor.Component");
  pFVar5 = ::FName::FName(local_198,L"PackageName");
  local_388.PackageName.ComparisonIndex.Value = 0;
  local_388.PackageName.Number = 0;
  local_388.AssetName.ComparisonIndex.Value = 0;
  local_388.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_388,param_3,*pFVar5);
  local_258.String.Data.AllocatorInstance.Data = local_458.Data.AllocatorInstance.Data;
  local_258.String.Data.ArrayNum = local_458.Data.ArrayNum;
  local_258.String.Data.ArrayMax = local_458.Data.ArrayMax;
  local_458.Data.ArrayNum = 0;
  local_458.Data.ArrayMax = 0;
  local_1f8.PackageName = local_388.PackageName;
  local_1f8.AssetName = local_388.AssetName;
  local_438.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_438.AssetPath.PackageName.Number = 0;
  local_438.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_438.AssetPath.AssetName.Number = 0;
  local_438.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_438.SubPathString.Data.ArrayNum = 0;
  local_438.SubPathString.Data.ArrayMax = 0;
  local_458.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FSoftObjectPath::SetPath(&local_438,&local_1f8,&local_258);
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  iVar10 = local_438.SubPathString.Data.ArrayNum + -1;
  if (local_438.SubPathString.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  pFVar6 = ::FString::ConstructFromPtrSize
                     (&local_1e8,(uchar *)local_438.SubPathString.Data.AllocatorInstance.Data,iVar10
                     );
  pFVar8 = pFVar9;
  iVar10 = iVar14;
  if (&local_128 != pFVar6) {
    pFVar8 = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = (pFVar6->Data).ArrayNum;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  local_378.PackageName.ComparisonIndex.Value = 0;
  local_378.PackageName.Number = 0;
  local_378.AssetName.ComparisonIndex.Value = 0;
  local_378.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_378,param_4,local_438.AssetPath.AssetName);
  iVar13 = iVar10 + -1;
  local_1c8.PackageName = local_378.PackageName;
  local_1c8.AssetName = local_378.AssetName;
  local_328.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_328.AssetPath.PackageName.Number = 0;
  if (iVar10 == 0) {
    iVar13 = 0;
  }
  local_328.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_328.AssetPath.AssetName.Number = 0;
  local_328.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.SubPathString.Data.ArrayNum = 0;
  local_328.SubPathString.Data.ArrayMax = 0;
  pFVar7 = FUtf8String::ConstructFromPtrSize(&local_1d8,(wchar_t *)pFVar8,iVar13);
  local_248.String.Data.ArrayMax = iVar14;
  if (&local_e8 != pFVar7) {
    pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar14 = (pFVar7->Data).ArrayNum;
    local_248.String.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  local_248.String.Data.AllocatorInstance.Data = pFVar9;
  local_248.String.Data.ArrayNum = iVar14;
  FSoftObjectPath::SetPath(&local_328,&local_1c8,&local_248);
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  ``FLinkerInstancingContextTests::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
  operator()(&local_2a8,&local_438,&local_328,pFVar4);
  if (local_328.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_438.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_308.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_348.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_2e8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_418.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_2c8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_368.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  iVar14 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar14 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_448.SharedData.SharedReferenceCount.ReferenceController);
  return;
}

