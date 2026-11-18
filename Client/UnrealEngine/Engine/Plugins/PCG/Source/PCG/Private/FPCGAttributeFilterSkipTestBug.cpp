// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f80c30

EAutomationTestFlags __thiscall
FPCGAttributeFilterSkipTestBug::GetTestFlags(FPCGAttributeFilterSkipTestBug *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f80c40

bool __thiscall FPCGAttributeFilterSkipTestBug::IsStressTest(FPCGAttributeFilterSkipTestBug *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f80c50

uint __thiscall
FPCGAttributeFilterSkipTestBug::GetRequiredDeviceNum(FPCGAttributeFilterSkipTestBug *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f80c60

FString * __thiscall
FPCGAttributeFilterSkipTestBug::GetTestSourceFileName
          (FPCGAttributeFilterSkipTestBug *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f80c90

int __thiscall
FPCGAttributeFilterSkipTestBug::GetTestSourceFileLine(FPCGAttributeFilterSkipTestBug *this)

{
  return 0x16;
}

// GetTests @ 149f80ca0

/* WARNING: Removing unreachable block (ram,0x000149f80d8d) */
/* WARNING: Removing unreachable block (ram,0x000149f80e58) */

void __thiscall
FPCGAttributeFilterSkipTestBug::GetTests
          (FPCGAttributeFilterSkipTestBug *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeFilter.SkipTestBug");
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

// RunTest @ 149f80e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPCGAttributeFilterSkipTestBug::RunTest(FPCGAttributeFilterSkipTestBug *this,FString *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  undefined1 uVar17;
  UPCGAttributeFilteringSettings *pUVar18;
  UPCGBasePointData *pUVar19;
  UPCGBasePointData *pUVar20;
  UClass *pUVar21;
  undefined8 *puVar22;
  FPCGDataPtrWrapper *pFVar23;
  int iVar24;
  UPCGData *pUVar25;
  UPCGData *pUVar26;
  UPCGData *pUVar27;
  undefined8 uVar28;
  undefined7 uVar29;
  int iVar30;
  UPCGData *pUVar31;
  undefined4 uVar32;
  undefined1 auStack_368 [32];
  UPCGData *local_348;
  longlong local_340;
  undefined1 local_338 [32];
  int local_318;
  undefined1 local_310 [16];
  ForAnyElementType local_300;
  UPCGBasePointData *local_2f8;
  TSharedPtr<IPCGElement,1> local_2f0;
  ForAnyElementType local_2e0;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  undefined4 local_2cc;
  FString local_2c8;
  FString local_2b8;
  FTestData local_2a8;
  undefined1 local_218 [16];
  double local_208;
  undefined1 local_200 [16];
  double local_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_1c8;
  longlong local_198;
  int local_190;
  int local_18c;
  int local_188;
  undefined8 local_178 [12];
  longlong local_118;
  int local_110;
  int local_10c;
  int local_108;
  undefined8 local_f8 [12];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_368;
  local_300.Data = (FScriptContainerElement *)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_300.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_300.Data);
  }
  uVar28 = 0;
  PCGTestsCommon::FTestData::FTestData
            (&local_2a8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_300);
  pUVar26 = (UPCGData *)0x0;
  local_1c8._0_8_ = 0;
  local_1c8._40_8_ = 0;
  pUVar18 = PCGTestsCommon::GenerateSettings<UPCGAttributeFilteringSettings>(&local_2a8,&local_1c8);
  if (pUVar18 == (UPCGAttributeFilteringSettings *)0x0) {
    uVar28 = 0x179;
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Settings",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeFilterTest.cpp"
                        ,0x179,L"");
    if (bVar16) {
      pcVar1 = (code *)swi(3);
      uVar17 = (*pcVar1)();
      return (bool)uVar17;
    }
  }
  uVar29 = (undefined7)((ulonglong)uVar28 >> 8);
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)&pUVar18->TargetAttribute,Density,true);
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)&pUVar18->ThresholdAttribute,Density,true);
  pUVar18->Operator = Equal;
  pUVar18->bUseSpatialQuery = true;
  UPCGSettings::GetElement(local_2a8.Settings,&local_2f0);
  pUVar19 = PCGTestsCommon::CreateEmptyBasePointData();
  pUVar20 = PCGTestsCommon::CreateEmptyBasePointData();
  local_2f8 = pUVar20;
  (**(code **)(pUVar19->_padding_ + 0x490))(pUVar19,0x800,CONCAT71(uVar29,1));
  (**(code **)(pUVar19->_padding_ + 0x4c0))(pUVar19,&local_198,1);
  (**(code **)(pUVar20->_padding_ + 0x490))(pUVar20,0x800,1);
  (**(code **)(pUVar20->_padding_ + 0x4c0))(pUVar20,&local_118,1);
  (**(code **)(pUVar20->_padding_ + 0x4c8))(pUVar20,&local_2e0,1);
  iVar30 = -1000;
  pUVar25 = pUVar26;
  pUVar27 = pUVar26;
  pUVar31 = pUVar26;
  do {
    iVar24 = (int)pUVar25;
    if (iVar24 < 0x400) {
      if (local_188 <= iVar24) {
        local_348 = pUVar27;
        local_340 = (longlong)local_188;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar16) {
          pcVar1 = (code *)swi(3);
          uVar17 = (*pcVar1)();
          return (bool)uVar17;
        }
      }
      if (iVar24 == iVar24 % local_18c) {
        puVar22 = (undefined8 *)((longlong)local_190 * (longlong)(iVar24 % local_18c) + local_198);
      }
      else {
        puVar22 = local_178;
      }
      local_1f0 = (double)iVar24;
      uVar32 = (undefined4)((ulonglong)local_1f0 >> 0x20);
      local_200._8_4_ = SUB84(local_1f0,0);
      local_200._0_8_ = local_1f0;
      local_200._12_4_ = uVar32;
      auVar3._8_4_ = SUB84(local_1f0,0);
      auVar3._0_8_ = local_1f0;
      auVar3._12_4_ = uVar32;
      *(undefined1 (*) [16])(puVar22 + 4) = auVar3;
      puVar22[6] = local_1f0;
      puVar22[7] = 0;
      if (local_108 <= iVar24) {
        local_348 = pUVar27;
        local_340 = (longlong)local_108;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar16) {
          pcVar1 = (code *)swi(3);
          uVar17 = (*pcVar1)();
          return (bool)uVar17;
        }
      }
      if (iVar24 == iVar24 % local_10c) {
        puVar22 = (undefined8 *)((longlong)local_110 * (longlong)(iVar24 % local_10c) + local_118);
      }
      else {
        puVar22 = local_f8;
      }
      local_1d8 = (double)iVar30;
      uVar32 = (undefined4)((ulonglong)local_1d8 >> 0x20);
      local_1e8._8_4_ = SUB84(local_1d8,0);
      local_1e8._0_8_ = local_1d8;
      local_1e8._12_4_ = uVar32;
      auVar4._8_4_ = SUB84(local_1d8,0);
      auVar4._0_8_ = local_1d8;
      auVar4._12_4_ = uVar32;
      *(undefined1 (*) [16])(puVar22 + 4) = auVar4;
      puVar22[6] = local_1d8;
      puVar22[7] = 0;
    }
    else {
      if (local_188 <= iVar24) {
        local_348 = pUVar27;
        local_340 = (longlong)local_188;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar16) {
          pcVar1 = (code *)swi(3);
          uVar17 = (*pcVar1)();
          return (bool)uVar17;
        }
      }
      if (iVar24 == iVar24 % local_18c) {
        puVar22 = (undefined8 *)((longlong)local_190 * (longlong)(iVar24 % local_18c) + local_198);
      }
      else {
        puVar22 = local_178;
      }
      local_208 = (double)(int)pUVar31;
      uVar32 = (undefined4)((ulonglong)local_208 >> 0x20);
      local_218._8_4_ = SUB84(local_208,0);
      local_218._0_8_ = local_208;
      local_218._12_4_ = uVar32;
      auVar2._8_4_ = SUB84(local_208,0);
      auVar2._0_8_ = local_208;
      auVar2._12_4_ = uVar32;
      *(undefined1 (*) [16])(puVar22 + 4) = auVar2;
      puVar22[6] = local_208;
      puVar22[7] = 0;
      if (local_188 <= iVar24) {
        local_348 = pUVar27;
        local_340 = (longlong)local_188;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar16) {
          pcVar1 = (code *)swi(3);
          uVar17 = (*pcVar1)();
          return (bool)uVar17;
        }
      }
      if (iVar24 == iVar24 % local_18c) {
        puVar22 = (undefined8 *)((longlong)local_190 * (longlong)(iVar24 % local_18c) + local_198);
      }
      else {
        puVar22 = local_178;
      }
      uVar28 = *puVar22;
      uVar5 = puVar22[1];
      uVar6 = puVar22[2];
      uVar7 = puVar22[3];
      uVar8 = puVar22[4];
      uVar9 = puVar22[5];
      uVar10 = puVar22[6];
      uVar11 = puVar22[7];
      uVar12 = puVar22[8];
      uVar13 = puVar22[9];
      uVar14 = puVar22[10];
      uVar15 = puVar22[0xb];
      if (local_108 <= iVar24) {
        local_348 = pUVar27;
        local_340 = (longlong)local_108;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar16) {
          pcVar1 = (code *)swi(3);
          uVar17 = (*pcVar1)();
          return (bool)uVar17;
        }
      }
      if (iVar24 == iVar24 % local_10c) {
        puVar22 = (undefined8 *)((longlong)local_110 * (longlong)(iVar24 % local_10c) + local_118);
      }
      else {
        puVar22 = local_f8;
      }
      *puVar22 = uVar28;
      puVar22[1] = uVar5;
      puVar22[2] = uVar6;
      puVar22[3] = uVar7;
      puVar22[4] = uVar8;
      puVar22[5] = uVar9;
      puVar22[6] = uVar10;
      puVar22[7] = uVar11;
      puVar22[8] = uVar12;
      puVar22[9] = uVar13;
      puVar22[10] = uVar14;
      puVar22[0xb] = uVar15;
      if (local_2d0 <= iVar24) {
        local_348 = pUVar27;
        local_340 = (longlong)local_2d0;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar16) {
          pcVar1 = (code *)swi(3);
          uVar17 = (*pcVar1)();
          return (bool)uVar17;
        }
      }
      if (iVar24 == iVar24 % local_2d4) {
        *(undefined4 *)(local_2e0.Data + (longlong)local_2d8 * (longlong)(iVar24 % local_2d4)) =
             0x3f000000;
      }
      else {
        local_2cc = 0x3f000000;
      }
    }
    pUVar25 = (UPCGData *)(ulonglong)(iVar24 + 1);
    pUVar31 = (UPCGData *)(ulonglong)((int)pUVar31 + 10);
    pUVar27 = (UPCGData *)((longlong)&pUVar27->_padding_ + 1);
    iVar30 = iVar30 + -10;
  } while (-0x53e8 < iVar30);
  if (local_2a8.InputData.TaggedData.ArrayNum == local_2a8.InputData.TaggedData.ArrayMax) {
    local_2a8.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_2a8.InputData,
                    &local_2a8.InputData.TaggedData.ArrayMax);
  }
  pFVar23 = (FPCGDataPtrWrapper *)
            (local_2a8.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_2a8.InputData.TaggedData.ArrayNum * 0x78);
  pFVar23[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar23[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar23[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar23[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar23[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (pFVar23->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (pFVar23->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  pFVar23[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar23[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar23[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar23[3].WeakData.WeakPtr.ObjectIndex = 0;
  pFVar23[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&pFVar23[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&pFVar23[4].Data.field0_0x0 + 4) = 0;
  pFVar23[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar23[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&pFVar23[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&pFVar23[7].Data.field0_0x0 + 4) = 0xffffffff;
  pFVar23[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  local_2a8.InputData.TaggedData.ArrayNum = local_2a8.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(pFVar23,(UPCGData *)pUVar19);
  if (local_2a8.InputData.TaggedData.ArrayNum == local_2a8.InputData.TaggedData.ArrayMax) {
    local_2a8.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_2a8.InputData,
                    &local_2a8.InputData.TaggedData.ArrayMax);
  }
  pFVar23 = (FPCGDataPtrWrapper *)
            (local_2a8.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_2a8.InputData.TaggedData.ArrayNum * 0x78);
  pFVar23[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar23[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar23[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar23[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar23[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (pFVar23->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (pFVar23->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  pFVar23[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar23[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar23[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar23[3].WeakData.WeakPtr.ObjectIndex = 0;
  pFVar23[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&pFVar23[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&pFVar23[4].Data.field0_0x0 + 4) = 0;
  pFVar23[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar23[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&pFVar23[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&pFVar23[7].Data.field0_0x0 + 4) = 0xffffffff;
  pFVar23[6].Data.field0_0x0.ObjectPtr.field0_0x0 = (FObjectPtr_u_0)PCGPointFilterTest::FilterLabel;
  local_2a8.InputData.TaggedData.ArrayNum = local_2a8.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(pFVar23,(UPCGData *)local_2f8);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_2a8,(UPCGNode *)local_338);
  do {
    if (local_2f0.Object == (IPCGElement *)0x0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar16) {
        pcVar1 = (code *)swi(3);
        uVar17 = (*pcVar1)();
        return (bool)uVar17;
      }
    }
    bVar16 = IPCGElement::Execute(local_2f0.Object,(FPCGContext *)local_338._0_8_);
  } while (!bVar16);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_338._0_8_ + 0x38),
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)local_310,
             &PCGPointFilterTest::InsideFilterLabel);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_338._0_8_ + 0x38),
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_338 + 0x18),
             &PCGPointFilterTest::OutsideFilterLabel);
  bVar16 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,L"InFilter pin has 1 output",local_310._8_4_,1);
  if (bVar16) {
    bVar16 = FAutomationTestBase::TestEqual
                       ((FAutomationTestBase *)this,L"OutFilter pin has 1 output",local_318,1);
    if (bVar16) {
      if ((int)local_310._8_4_ < 1) {
        local_340 = (longlong)(int)local_310._8_4_;
        local_348 = (UPCGData *)0x0;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar16) {
          pcVar1 = (code *)swi(3);
          uVar17 = (*pcVar1)();
          return (bool)uVar17;
        }
      }
      local_338._8_8_ = *(undefined8 *)local_310._0_8_;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f8161b:
        if ((UPCGData *)local_338._8_8_ == (UPCGData *)0x0) goto LAB_149f8163b;
        pUVar21 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
        bVar16 = FObjectPtr::IsA((FObjectPtr *)(local_338 + 8),pUVar21);
        pUVar25 = (UPCGData *)local_338._8_8_;
        if (!bVar16) goto LAB_149f8163b;
      }
      else {
        if ((UPCGData *)local_338._8_8_ != (UPCGData *)0x0) {
          UE::GC::MarkAsReachable((UObject *)local_338._8_8_);
          goto LAB_149f8161b;
        }
LAB_149f8163b:
        pUVar25 = pUVar26;
      }
      if (local_318 < 1) {
        local_340 = (longlong)local_318;
        local_348 = (UPCGData *)0x0;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar16) {
          pcVar1 = (code *)swi(3);
          uVar17 = (*pcVar1)();
          return (bool)uVar17;
        }
      }
      local_338._16_8_ = (((FPCGDataPtrWrapper *)local_338._24_8_)->Data).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f816a1:
        if ((UPCGData *)local_338._16_8_ != (UPCGData *)0x0) {
          pUVar21 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
          bVar16 = FObjectPtr::IsA((FObjectPtr *)(local_338 + 0x10),pUVar21);
          if (bVar16) {
            pUVar26 = (UPCGData *)local_338._16_8_;
          }
        }
      }
      else if ((UPCGData *)local_338._16_8_ != (UPCGData *)0x0) {
        UE::GC::MarkAsReachable((UObject *)local_338._16_8_);
        goto LAB_149f816a1;
      }
      if (pUVar25 == (UPCGData *)0x0) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_2c8,L"Expected \'%s\' to be not null.");
        (*pcVar1)(this,&local_2c8,0);
      }
      else {
        if (pUVar26 != (UPCGData *)0x0) {
          iVar30 = (**(code **)(pUVar25->_padding_ + 0x488))(pUVar25);
          bVar16 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,
                              L"InFilter data has the right number of points",iVar30,0x400);
          if (bVar16) {
            iVar30 = (**(code **)(pUVar26->_padding_ + 0x488))(pUVar26);
            bVar16 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,
                                L"OutFilter data has the right number of points",iVar30,0x400);
            if (bVar16) {
              bVar16 = true;
              goto LAB_149f81705;
            }
          }
          goto LAB_149f81703;
        }
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_2b8,L"Expected \'%s\' to be not null.");
        (*pcVar1)(this,&local_2b8,0);
        local_2c8.Data.AllocatorInstance.Data = local_2b8.Data.AllocatorInstance.Data;
      }
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_149f81703:
  bVar16 = false;
LAB_149f81705:
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_338._24_8_,local_318);
  if ((FPCGTaggedData *)local_338._24_8_ != (FPCGTaggedData *)0x0) {
    FMemory::Free((void *)local_338._24_8_);
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_310._0_8_,local_310._8_4_);
  if ((FName)local_310._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_310._0_8_);
  }
  if ((FPCGContext *)local_338._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_338._0_8_)(local_338._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f0.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_2a8);
  return bVar16;
}

// GetBeautifiedTestName @ 149f81830

FString * __thiscall
FPCGAttributeFilterSkipTestBug::GetBeautifiedTestName
          (FPCGAttributeFilterSkipTestBug *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeFilter.SkipTestBug");
  return __return_storage_ptr__;
}

