// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// CanBeUsedOnMultipleThreads @ 14181d9e0

bool __thiscall
FAutomationTestFramework::FAutomationTestOutputDevice::CanBeUsedOnMultipleThreads
          (FAutomationTestOutputDevice *this)

{
  return true;
}

// Serialize @ 141831b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAutomationTestFramework::FAutomationTestOutputDevice::Serialize
          (FAutomationTestOutputDevice *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  atomic<FAutomationTestBase_*> aVar1;
  ForAnyElementType FVar2;
  char cVar3;
  Type TVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  wchar_t *_Str;
  FString local_78;
  FString local_68;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_44;
  ForAnyElementType local_40;
  int local_34 [7];
  
  if ((!PRIVATE_GIsRunningCommandlet) && (param_2 == SetColor)) {
    return;
  }
  aVar1 = this->CurTest;
  if (aVar1 == (atomic<FAutomationTestBase_*>)0x0) {
    return;
  }
  cVar3 = (**(code **)(*(longlong *)aVar1 + 0x80))(aVar1);
  if (((cVar3 == '\0') && ((byte)(param_2 - Error) < 3)) &&
     (cVar3 = (**(code **)(*(longlong *)aVar1 + 0x88))(aVar1,param_3), cVar3 != '\0')) {
    TVar4 = AutomationTest::GetAutomationLogLevel(param_2,*param_3,(FAutomationTestBase *)aVar1);
    if (TVar4 == NoLogging) {
      return;
    }
    ::FName::ToString(param_3,&local_68);
    ::FString::PrintfImpl(&local_78,L"%s: %s");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_68,L"log");
    FVar2.Data = local_78.Data.AllocatorInstance.Data;
    local_58[0] = 0;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_78.Data.ArrayNum == 0) {
      local_44 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,&local_50,local_78.Data.ArrayNum,&local_44);
      memcpy(local_50.Data,FVar2.Data,(longlong)local_78.Data.ArrayNum * 2);
    }
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data.ArrayNum == 0) {
      local_34[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,&local_40,local_68.Data.ArrayNum,local_34);
      memcpy(local_40.Data,FVar2.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
    local_34[1] = 0;
    local_34[2] = 0;
    local_34[3] = 0;
    local_34[4] = 0;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (TVar4 == Error) {
      local_58[0] = 2;
    }
    else if (TVar4 == Warning) {
      local_58[0] = 1;
    }
    (**(code **)(*(longlong *)aVar1 + 0x58))(aVar1,local_58,8,0);
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
    return;
  }
  ::FString::FString(&local_78,param_1);
  ::FString::FString(&local_68,L"AUTOMATIONANALYTICS");
  if (local_68.Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      iVar8 = 0;
      goto LAB_141831da7;
    }
  }
  sVar7 = wcslen(_Str);
  iVar8 = (int)sVar7;
LAB_141831da7:
  bVar5 = ::FString::StartsWith(&local_78,_Str,iVar8,IgnoreCase);
  if (bVar5) {
    iVar8 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    iVar9 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    iVar9 = (iVar9 - iVar8) + -1;
    iVar8 = 0;
    if (local_78.Data.ArrayNum != 0) {
      iVar8 = local_78.Data.ArrayNum + -1;
    }
    iVar6 = iVar8;
    if (iVar9 < iVar8) {
      iVar6 = iVar9;
    }
    iVar9 = 0;
    if (0 < iVar6) {
      iVar9 = iVar6;
    }
    ::FString::RemoveAt(&local_78,0,iVar8 - iVar9,No);
    (**(code **)(*(longlong *)aVar1 + 0x60))(aVar1,&local_78);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

