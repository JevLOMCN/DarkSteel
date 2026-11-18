// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// GetTestFlags @ 141e66a80

EAutomationTestFlags __thiscall
FPackageNameTestsExtended::GetTestFlags(FPackageNameTestsExtended *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141e66a90

bool __thiscall FPackageNameTestsExtended::IsStressTest(FPackageNameTestsExtended *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141e66aa0

uint __thiscall FPackageNameTestsExtended::GetRequiredDeviceNum(FPackageNameTestsExtended *this)

{
  return 1;
}

// GetTestSourceFileName @ 141e66ab0

FString * __thiscall
FPackageNameTestsExtended::GetTestSourceFileName
          (FPackageNameTestsExtended *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141e66ae0

int __thiscall FPackageNameTestsExtended::GetTestSourceFileLine(FPackageNameTestsExtended *this)

{
  return 0xeef;
}

// GetTests @ 141e66af0

/* WARNING: Removing unreachable block (ram,0x000141e66bdd) */
/* WARNING: Removing unreachable block (ram,0x000141e66ca8) */

void __thiscall
FPackageNameTestsExtended::GetTests
          (FPackageNameTestsExtended *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Misc.PackageNamesExtended");
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

// RunTest @ 141e66cd0

/* WARNING: Enum "EMountFlags": Some values do not have unique names */

bool __thiscall FPackageNameTestsExtended::RunTest(FPackageNameTestsExtended *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FLongPackagePathsSingleton *pFVar4;
  FMountPoint *pFVar5;
  IFileManager *pIVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  int iVar11;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FMountPoint local_48;
  
  ::FString::FString(&local_78,L"/PackageNameTestDNE");
  ::FString::FString(&local_58,L"../../../Engine/Intermediate/PackageNameTestDNE");
  ::FString::FString(&local_88,L"../../../Engine/Intermediate/PackageNameTestDNE/Content");
  ::FString::FString(&local_a8,L"/PackageNameTestDNE/Package1");
  ::FString::FString(&local_68,
                     L"../../../Engine/Intermediate/PackageNameTestDNE/Content/Package1.uasset");
  ::FString::FString(&local_b8,L".uasset");
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  iVar11 = 0;
  local_c8.Size = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    local_c8.Size = iVar11;
  }
  local_c8.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  iVar8 = 0;
  local_d8.Size = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    local_d8.Size = iVar8;
  }
  local_d8.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  bVar2 = FPackageName::TryConvertLongPackageNameToFilename(&local_d8,&local_98,&local_c8);
  if (bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    pFVar3 = ::FString::FString((FString *)&local_d8,
                                L"Mounting test: TestPath is unexpectedly before Register.");
    (*pcVar1)(this,pFVar3,0);
    if ((FScriptContainerElement *)local_d8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DataPtr);
    }
  }
  pFVar4 = FLongPackagePathsSingleton::Get();
  FLongPackagePathsSingleton::InsertMountPoint(pFVar4,&local_78,&local_88);
  iVar7 = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    iVar7 = iVar11;
  }
  local_d8.Size = iVar7;
  local_d8.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  iVar7 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar7 = iVar8;
  }
  local_c8.Size = iVar7;
  local_c8.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  bVar2 = FPackageName::TryConvertLongPackageNameToFilename(&local_c8,&local_98,&local_d8);
  if (bVar2) {
    bVar2 = FPaths::IsSamePath(&local_68,&local_98);
    if (!bVar2) {
      pwVar9 = L"Mounting test: TestPath mounted to wrong location after Register.";
      goto LAB_141e66e69;
    }
  }
  else {
    pwVar9 = L"Mounting test: TestPath not mounted after Register.";
LAB_141e66e69:
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    pFVar3 = ::FString::FString((FString *)&local_d8,pwVar9);
    (*pcVar1)(this,pFVar3,0);
    if ((FScriptContainerElement *)local_d8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DataPtr);
    }
  }
  pFVar4 = FLongPackagePathsSingleton::Get();
  pFVar5 = FLongPackagePathsSingleton::ConstructMountPoint(&local_48,&local_78,&local_88,Removable);
  FLongPackagePathsSingleton::RemoveMountPoint(pFVar4,pFVar5);
  if (local_48.ContentPathAbsolute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ContentPathAbsolute.Data.AllocatorInstance.Data);
  }
  if (local_48.ContentPathRelative.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ContentPathRelative.Data.AllocatorInstance.Data);
  }
  if (local_48.RootPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.RootPath.Data.AllocatorInstance.Data);
  }
  iVar7 = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    iVar7 = iVar11;
  }
  local_d8.Size = iVar7;
  local_d8.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  iVar7 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar7 = iVar11;
  }
  local_c8.Size = iVar7;
  local_c8.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  bVar2 = FPackageName::TryConvertLongPackageNameToFilename(&local_c8,&local_98,&local_d8);
  if (bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    pFVar3 = ::FString::FString((FString *)&local_d8,
                                L"Mounting test: TestPath is unexpectedly mounted after Register, Unregister."
                               );
    (*pcVar1)(this,pFVar3,0);
    if ((FScriptContainerElement *)local_d8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DataPtr);
    }
  }
  pFVar4 = FLongPackagePathsSingleton::Get();
  FLongPackagePathsSingleton::InsertMountPoint(pFVar4,&local_78,&local_88);
  iVar7 = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    iVar7 = iVar11;
  }
  local_d8.Size = iVar7;
  local_d8.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  iVar7 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar7 = iVar8;
  }
  local_c8.Size = iVar7;
  local_c8.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  bVar2 = FPackageName::TryConvertLongPackageNameToFilename(&local_c8,&local_98,&local_d8);
  if (bVar2) {
    bVar2 = FPaths::IsSamePath(&local_68,&local_98);
    if (!bVar2) {
      pwVar9 = 
      L"Mounting test: TestPath mounted to wrong location after Register, Unregister, Register.";
      goto LAB_141e66ff6;
    }
  }
  else {
    pwVar9 = L"Mounting test: TestPath not mounted after Register, Unregister, Register.";
LAB_141e66ff6:
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    pFVar3 = ::FString::FString((FString *)&local_d8,pwVar9);
    (*pcVar1)(this,pFVar3,0);
    if ((FScriptContainerElement *)local_d8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DataPtr);
    }
  }
  pFVar4 = FLongPackagePathsSingleton::Get();
  pFVar5 = FLongPackagePathsSingleton::ConstructMountPoint(&local_48,&local_78,&local_88,Removable);
  FLongPackagePathsSingleton::RemoveMountPoint(pFVar4,pFVar5);
  if (local_48.ContentPathAbsolute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ContentPathAbsolute.Data.AllocatorInstance.Data);
  }
  if (local_48.ContentPathRelative.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ContentPathRelative.Data.AllocatorInstance.Data);
  }
  if (local_48.RootPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.RootPath.Data.AllocatorInstance.Data);
  }
  iVar7 = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    iVar7 = iVar11;
  }
  local_d8.Size = iVar7;
  local_d8.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  iVar7 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar7 = iVar8;
  }
  local_c8.Size = iVar7;
  local_c8.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  bVar2 = FPackageName::TryConvertLongPackageNameToFilename(&local_c8,&local_98,&local_d8);
  if (bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    pFVar3 = ::FString::FString((FString *)&local_d8,
                                L"Mounting test: TestPath is unexpectedly mounted after Register, Unregister, Register, Unregister."
                               );
    (*pcVar1)(this,pFVar3,0);
    if ((FScriptContainerElement *)local_d8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DataPtr);
    }
  }
  pFVar4 = FLongPackagePathsSingleton::Get();
  FLongPackagePathsSingleton::InsertMountPoint(pFVar4,&local_78,&local_88);
  iVar7 = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    iVar7 = iVar11;
  }
  local_d8.Size = iVar7;
  local_d8.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  iVar7 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar7 = iVar8;
  }
  local_c8.Size = iVar7;
  local_c8.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  bVar2 = FPackageName::TryConvertLongPackageNameToFilename(&local_c8,&local_98,&local_d8);
  if (bVar2) {
    bVar2 = FPaths::IsSamePath(&local_68,&local_98);
    if (!bVar2) {
      pwVar9 = L"Mounting test: TestPath mounted to wrong location after Register.";
      goto LAB_141e67183;
    }
  }
  else {
    pwVar9 = L"Mounting test: TestPath not mounted after Register.";
LAB_141e67183:
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    pFVar3 = ::FString::FString((FString *)&local_d8,pwVar9);
    (*pcVar1)(this,pFVar3,0);
    if ((FScriptContainerElement *)local_d8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DataPtr);
    }
  }
  pFVar4 = FLongPackagePathsSingleton::Get();
  FLongPackagePathsSingleton::InsertMountPoint(pFVar4,&local_78,&local_88);
  iVar8 = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    iVar8 = iVar11;
  }
  local_d8.Size = iVar8;
  local_d8.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  iVar8 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  local_c8.Size = iVar8;
  local_c8.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  bVar2 = FPackageName::TryConvertLongPackageNameToFilename(&local_c8,&local_98,&local_d8);
  if (bVar2) {
    bVar2 = FPaths::IsSamePath(&local_68,&local_98);
    if (bVar2) goto LAB_141e67260;
    pwVar9 = L"Mounting test: TestPath mounted to wrong location after Register, RegisterDuplicate."
    ;
  }
  else {
    pwVar9 = L"Mounting test: TestPath not mounted after Register, RegisterDuplicate.";
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x28);
  pFVar3 = ::FString::FString((FString *)&local_d8,pwVar9);
  (*pcVar1)(this,pFVar3,0);
  if ((FScriptContainerElement *)local_d8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
LAB_141e67260:
  pFVar4 = FLongPackagePathsSingleton::Get();
  pFVar5 = FLongPackagePathsSingleton::ConstructMountPoint(&local_48,&local_78,&local_88,Removable);
  FLongPackagePathsSingleton::RemoveMountPoint(pFVar4,pFVar5);
  if (local_48.ContentPathAbsolute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ContentPathAbsolute.Data.AllocatorInstance.Data);
  }
  if (local_48.ContentPathRelative.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ContentPathRelative.Data.AllocatorInstance.Data);
  }
  if (local_48.RootPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.RootPath.Data.AllocatorInstance.Data);
  }
  iVar8 = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    iVar8 = iVar11;
  }
  local_d8.Size = iVar8;
  local_d8.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  iVar11 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  local_c8.Size = iVar11;
  local_c8.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  bVar2 = FPackageName::TryConvertLongPackageNameToFilename(&local_c8,&local_98,&local_d8);
  if (bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    pFVar3 = ::FString::FString((FString *)&local_d8,
                                L"Mounting test: TestPath is unexpectedly mounted after Register, RegisterDuplicate, Unregister."
                               );
    (*pcVar1)(this,pFVar3,0);
    if ((FScriptContainerElement *)local_d8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.DataPtr);
    }
  }
  pIVar6 = IFileManager::Get();
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar10.Data = local_58.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar6 + 0x68))(pIVar6,FVar10.Data,0,1);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 141e673f0

FString * __thiscall
FPackageNameTestsExtended::GetBeautifiedTestName
          (FPackageNameTestsExtended *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Misc.PackageNamesExtended");
  return __return_storage_ptr__;
}

