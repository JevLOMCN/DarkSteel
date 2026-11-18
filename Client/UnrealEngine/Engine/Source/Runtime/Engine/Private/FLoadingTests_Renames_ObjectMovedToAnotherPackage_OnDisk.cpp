// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1488760c0

EAutomationTestFlags __thiscall
FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk::GetTestFlags
          (FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1488760d0

bool __thiscall
FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk::IsStressTest
          (FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1488760e0

uint __thiscall
FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk::GetRequiredDeviceNum
          (FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk *this)

{
  return 1;
}

// GetTestSourceFileName @ 1488760f0

FString * __thiscall
FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk::GetTestSourceFileName
          (FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_Renames.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148876120

int __thiscall
FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk::GetTestSourceFileLine
          (FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk *this)

{
  return 0x6b;
}

// GetTests @ 148876130

/* WARNING: Removing unreachable block (ram,0x00014887621d) */
/* WARNING: Removing unreachable block (ram,0x0001488762e8) */

void __thiscall
FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk::GetTests
          (FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"System.Engine.Loading.Renames.ObjectMovedToAnotherPackage.OnDisk");
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

// RunTest @ 148876310

bool __thiscall
FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk::RunTest
          (FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk *this,FString *param_1)

{
  FLoadingTests_Renames_Base::DoRenameTest((FLoadingTests_Renames_Base *)this,true,false);
  return true;
}

// GetBeautifiedTestName @ 148876330

FString * __thiscall
FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk::GetBeautifiedTestName
          (FLoadingTests_Renames_ObjectMovedToAnotherPackage_OnDisk *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"System.Engine.Loading.Renames.ObjectMovedToAnotherPackage.OnDisk");
  return __return_storage_ptr__;
}

