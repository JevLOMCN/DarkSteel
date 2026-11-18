// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// GetTestFlags @ 14a14c970

EAutomationTestFlags __thiscall
FRigVMFunction_NameTruncateTest::GetTestFlags(FRigVMFunction_NameTruncateTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a14ca00

bool __thiscall FRigVMFunction_NameTruncateTest::IsStressTest(FRigVMFunction_NameTruncateTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a14ca90

uint __thiscall
FRigVMFunction_NameTruncateTest::GetRequiredDeviceNum(FRigVMFunction_NameTruncateTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a14cba0

FString * __thiscall
FRigVMFunction_NameTruncateTest::GetTestSourceFileName
          (FRigVMFunction_NameTruncateTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_Name.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a14cc60

int __thiscall
FRigVMFunction_NameTruncateTest::GetTestSourceFileLine(FRigVMFunction_NameTruncateTest *this)

{
  return 0x47;
}

// GetTests @ 14a14cee0

/* WARNING: Removing unreachable block (ram,0x00014a14cfcd) */
/* WARNING: Removing unreachable block (ram,0x00014a14d098) */

void __thiscall
FRigVMFunction_NameTruncateTest::GetTests
          (FRigVMFunction_NameTruncateTest *this,
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
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_NameTruncate");
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

// RunTest @ 14a14d260

bool __thiscall
FRigVMFunction_NameTruncateTest::RunTest(FRigVMFunction_NameTruncateTest *this,FString *param_1)

{
  undefined1 uVar1;
  
  (**(code **)(*(longlong *)this + 0x100))();
  (this->Unit).Count = 1;
  (this->Unit).Name.ComparisonIndex = 0;
  (this->Unit).Name.Number = 0;
  (this->Unit).Remainder.ComparisonIndex = 0;
  (this->Unit).Remainder.Number = 0;
  (this->Unit).Chopped.ComparisonIndex = 0;
  (this->Unit).Chopped.Number = 0;
  (this->Unit).FromEnd = true;
                    /* WARNING: Could not recover jumptable at 0x00014a14d2be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar1;
}

// RunRigVMStructTest @ 14a14d2d0

bool __thiscall
FRigVMFunction_NameTruncateTest::RunRigVMStructTest
          (FRigVMFunction_NameTruncateTest *this,FString *param_1)

{
  FName *pFVar1;
  FName *this_00;
  FName *this_01;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FName FVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  FName local_res8;
  FName local_298;
  FName local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  FName local_268;
  FName local_260;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  ::FName::FName(&local_298,L"Control");
  ::FName::FName(&local_290,L"Rig");
  ::FName::FName(&local_res8,L"ControlRig");
  ::FName::FName(&local_268,L"Con");
  ::FName::FName(&local_260,L"trolRig");
  lVar2 = *(longlong *)&this->field_0x370;
  pFVar1 = &(this->Unit).Name;
  this_00 = &(this->Unit).Chopped;
  *pFVar1 = local_res8;
  this_01 = &(this->Unit).Remainder;
  (this->Unit).Count = 3;
  (this->Unit).FromEnd = true;
  if ((*(longlong *)(lVar2 + 0x50) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecuteContext.GetNameCache()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_Name.cpp"
                         ,0x2f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar6 = *pFVar1;
  *this_01 = FVar6;
  this_00->ComparisonIndex = 0;
  this_00->Number = 0;
  uVar8 = (uint)pFVar1;
  if (FVar6 != (FName)0x0) {
    FVar6 = FRigVMNameCache::LeftChop(*(FRigVMNameCache **)(lVar2 + 0x50),&local_118,uVar8);
    *this_01 = *(FName *)FVar6;
    FVar6 = FRigVMNameCache::Right(*(FRigVMNameCache **)(lVar2 + 0x50),&local_110,uVar8);
    *this_00 = *(FName *)FVar6;
  }
  pcVar3 = *(code **)(*(longlong *)this + 0x30);
  ::FName::ToString(this_00,&local_d8);
  ::FString::PrintfImpl(&local_1d8,L"unexpected name truncate result 1 \'%s\'");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_1d8.Data.ArrayNum != 0) {
    FVar7.Data = local_1d8.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_1b8,(wchar_t *)FVar7.Data);
  (*pcVar3)(this,*this_00 == local_290,&local_1b8,0);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  pcVar3 = *(code **)(*(longlong *)this + 0x30);
  ::FName::ToString(this_01,&local_c8);
  ::FString::PrintfImpl(&local_1c8,L"unexpected name truncate result 2 \'%s\'");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_1c8.Data.ArrayNum != 0) {
    FVar7.Data = local_1c8.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_1a8,(wchar_t *)FVar7.Data);
  (*pcVar3)(this,*this_01 == local_298,&local_1a8,0);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  lVar2 = *(longlong *)&this->field_0x370;
  *pFVar1 = local_res8;
  (this->Unit).Count = 7;
  (this->Unit).FromEnd = false;
  if ((*(longlong *)(lVar2 + 0x50) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecuteContext.GetNameCache()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_Name.cpp"
                         ,0x2f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar6 = *pFVar1;
  *this_01 = FVar6;
  this_00->ComparisonIndex = 0;
  this_00->Number = 0;
  if (FVar6 != (FName)0x0) {
    FVar6 = FRigVMNameCache::RightChop(*(FRigVMNameCache **)(lVar2 + 0x50),&local_108,uVar8);
    *this_01 = *(FName *)FVar6;
    FVar6 = FRigVMNameCache::Left(*(FRigVMNameCache **)(lVar2 + 0x50),&local_100,uVar8);
    *this_00 = *(FName *)FVar6;
  }
  pcVar3 = *(code **)(*(longlong *)this + 0x30);
  ::FName::ToString(this_00,&local_b8);
  ::FString::PrintfImpl(&local_258,L"unexpected name truncate result 3 \'%s\'");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_258.Data.ArrayNum != 0) {
    FVar7.Data = local_258.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_198,(wchar_t *)FVar7.Data);
  (*pcVar3)(this,*this_00 == local_298,&local_198,0);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar3 = *(code **)(*(longlong *)this + 0x30);
  ::FName::ToString(this_01,&local_a8);
  ::FString::PrintfImpl(&local_248,L"unexpected name truncate result 4 \'%s\'");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_248.Data.ArrayNum != 0) {
    FVar7.Data = local_248.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_188,(wchar_t *)FVar7.Data);
  (*pcVar3)(this,*this_01 == local_290,&local_188,0);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  lVar2 = *(longlong *)&this->field_0x370;
  *pFVar1 = local_res8;
  (this->Unit).Count = 3;
  (this->Unit).FromEnd = false;
  if ((*(longlong *)(lVar2 + 0x50) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecuteContext.GetNameCache()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_Name.cpp"
                         ,0x2f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar6 = *pFVar1;
  *this_01 = FVar6;
  this_00->ComparisonIndex = 0;
  this_00->Number = 0;
  local_288 = 0;
  if (FVar6 != (FName)0x0) {
    FVar6 = FRigVMNameCache::RightChop(*(FRigVMNameCache **)(lVar2 + 0x50),&local_f8,uVar8);
    *this_01 = *(FName *)FVar6;
    FVar6 = FRigVMNameCache::Left(*(FRigVMNameCache **)(lVar2 + 0x50),&local_f0,uVar8);
    *this_00 = *(FName *)FVar6;
  }
  pcVar3 = *(code **)(*(longlong *)this + 0x30);
  ::FName::ToString(this_00,&local_98);
  ::FString::PrintfImpl(&local_238,L"unexpected name truncate result 5 \'%s\'");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_238.Data.ArrayNum != 0) {
    FVar7.Data = local_238.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_178,(wchar_t *)FVar7.Data);
  (*pcVar3)(this,*this_00 == local_268,&local_178,0);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pcVar3 = *(code **)(*(longlong *)this + 0x30);
  ::FName::ToString(this_01,&local_88);
  ::FString::PrintfImpl(&local_228,L"unexpected name truncate result 6 \'%s\'");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_228.Data.ArrayNum != 0) {
    FVar7.Data = local_228.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_168,(wchar_t *)FVar7.Data);
  (*pcVar3)(this,*this_01 == local_260,&local_168,0);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  *pFVar1 = local_res8;
  lVar2 = *(longlong *)&this->field_0x370;
  (this->Unit).Count = 0;
  (this->Unit).FromEnd = false;
  if ((*(longlong *)(lVar2 + 0x50) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecuteContext.GetNameCache()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_Name.cpp"
                         ,0x2f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  *this_01 = *pFVar1;
  local_280 = 0;
  this_00->ComparisonIndex = 0;
  this_00->Number = 0;
  pcVar3 = *(code **)(*(longlong *)this + 0x30);
  ::FName::ToString(this_00,&local_78);
  ::FString::PrintfImpl(&local_218,L"unexpected name truncate result 7 \'%s\'");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_218.Data.ArrayNum != 0) {
    FVar7.Data = local_218.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_158,(wchar_t *)FVar7.Data);
  (*pcVar3)(this,*this_00 == (FName)0x0,&local_158,0);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pcVar3 = *(code **)(*(longlong *)this + 0x30);
  ::FName::ToString(this_01,&local_68);
  ::FString::PrintfImpl(&local_208,L"unexpected name truncate result 8 \'%s\'");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_208.Data.ArrayNum != 0) {
    FVar7.Data = local_208.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_148,(wchar_t *)FVar7.Data);
  (*pcVar3)(this,*this_01 == local_res8,&local_148,0);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  (this->Unit).FromEnd = false;
  local_278 = 0;
  lVar2 = *(longlong *)&this->field_0x370;
  pFVar1->ComparisonIndex = 0;
  pFVar1->Number = 0;
  (this->Unit).Count = 6;
  if ((*(longlong *)(lVar2 + 0x50) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecuteContext.GetNameCache()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_Name.cpp"
                         ,0x2f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar6 = *pFVar1;
  *this_01 = FVar6;
  this_00->ComparisonIndex = 0;
  this_00->Number = 0;
  local_270 = 0;
  if (FVar6 != (FName)0x0) {
    FVar6 = FRigVMNameCache::RightChop(*(FRigVMNameCache **)(lVar2 + 0x50),&local_e8,uVar8);
    *this_01 = *(FName *)FVar6;
    FVar6 = FRigVMNameCache::Left(*(FRigVMNameCache **)(lVar2 + 0x50),&local_e0,uVar8);
    *this_00 = *(FName *)FVar6;
  }
  pcVar3 = *(code **)(*(longlong *)this + 0x30);
  ::FName::ToString(this_00,&local_58);
  ::FString::PrintfImpl(&local_1f8,L"unexpected name truncate result 9 \'%s\'");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_1f8.Data.ArrayNum != 0) {
    FVar7.Data = local_1f8.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_138,(wchar_t *)FVar7.Data);
  (*pcVar3)(this,*this_00 == (FName)0x0,&local_138,0);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pcVar3 = *(code **)(*(longlong *)this + 0x30);
  ::FName::ToString(this_01,&local_48);
  ::FString::PrintfImpl(&local_1e8,L"unexpected name truncate result 10 \'%s\'");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_1e8.Data.ArrayNum != 0) {
    FVar7.Data = local_1e8.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_128,(wchar_t *)FVar7.Data);
  (*pcVar3)(this,*this_01 == (FName)0x0,&local_128,0);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a14dc80

FString * __thiscall
FRigVMFunction_NameTruncateTest::GetBeautifiedTestName
          (FRigVMFunction_NameTruncateTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"RigVM.RigVMFunctions.FRigVMFunction_NameTruncate");
  return __return_storage_ptr__;
}

