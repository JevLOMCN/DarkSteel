// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 145

// GetTestFlags @ 14f13a910

EAutomationTestFlags __thiscall
UE::WorldMetrics::WorldMetricsTestZeroState::GetTestFlags(WorldMetricsTestZeroState *this)

{
  return this->TestFlags;
}

// IsStressTest @ 14f13a920

bool __thiscall
UE::WorldMetrics::WorldMetricsTestZeroState::IsStressTest(WorldMetricsTestZeroState *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14f13a930

uint __thiscall
UE::WorldMetrics::WorldMetricsTestZeroState::GetRequiredDeviceNum(WorldMetricsTestZeroState *this)

{
  return 1;
}

// GetTestSourceFileName @ 14f13a940

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestZeroState::GetTestSourceFileName
          (WorldMetricsTestZeroState *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsTest\\Private\\WorldMetricsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14f13a970

int __thiscall
UE::WorldMetrics::WorldMetricsTestZeroState::GetTestSourceFileLine(WorldMetricsTestZeroState *this)

{
  return 0x339;
}

// GetTests @ 14f13a980

/* WARNING: Removing unreachable block (ram,0x00014f13aafe) */

void __thiscall
UE::WorldMetrics::WorldMetricsTestZeroState::GetTests
          (WorldMetricsTestZeroState *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 14f13ab20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::WorldMetrics::WorldMetricsTestZeroState::RunTest
          (WorldMetricsTestZeroState *this,FString *param_1)

{
  bool bVar1;
  WorldMetricsTestZeroState *local_res8 [4];
  code *local_18;
  WorldMetricsTestZeroState **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestZeroState::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 14f13ab70

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestZeroState::GetBeautifiedTestName
          (WorldMetricsTestZeroState *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// GetTestFlags @ 14f13ae70

EAutomationTestFlags __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricAddRemove::GetTestFlags
          (WorldMetricsTestSingleMetricAddRemove *this)

{
  return this->TestFlags;
}

// IsStressTest @ 14f13ae80

bool __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricAddRemove::IsStressTest
          (WorldMetricsTestSingleMetricAddRemove *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14f13ae90

uint __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricAddRemove::GetRequiredDeviceNum
          (WorldMetricsTestSingleMetricAddRemove *this)

{
  return 1;
}

// GetTestSourceFileName @ 14f13aea0

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricAddRemove::GetTestSourceFileName
          (WorldMetricsTestSingleMetricAddRemove *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsTest\\Private\\WorldMetricsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14f13aed0

int __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricAddRemove::GetTestSourceFileLine
          (WorldMetricsTestSingleMetricAddRemove *this)

{
  return 0x341;
}

// GetTests @ 14f13aee0

/* WARNING: Removing unreachable block (ram,0x00014f13b05e) */

void __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricAddRemove::GetTests
          (WorldMetricsTestSingleMetricAddRemove *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 14f13b080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricAddRemove::RunTest
          (WorldMetricsTestSingleMetricAddRemove *this,FString *param_1)

{
  bool bVar1;
  WorldMetricsTestSingleMetricAddRemove *local_res8 [4];
  code *local_18;
  WorldMetricsTestSingleMetricAddRemove **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestSingleMetricAddRemove::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 14f13b0d0

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricAddRemove::GetBeautifiedTestName
          (WorldMetricsTestSingleMetricAddRemove *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// GetTestFlags @ 14f13b2d0

EAutomationTestFlags __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsAddRemove::GetTestFlags
          (WorldMetricsTestMultipleMetricsAddRemove *this)

{
  return this->TestFlags;
}

// IsStressTest @ 14f13b2e0

bool __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsAddRemove::IsStressTest
          (WorldMetricsTestMultipleMetricsAddRemove *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14f13b2f0

uint __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsAddRemove::GetRequiredDeviceNum
          (WorldMetricsTestMultipleMetricsAddRemove *this)

{
  return 1;
}

// GetTestSourceFileName @ 14f13b300

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsAddRemove::GetTestSourceFileName
          (WorldMetricsTestMultipleMetricsAddRemove *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsTest\\Private\\WorldMetricsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14f13b330

int __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsAddRemove::GetTestSourceFileLine
          (WorldMetricsTestMultipleMetricsAddRemove *this)

{
  return 0x349;
}

// GetTests @ 14f13b340

/* WARNING: Removing unreachable block (ram,0x00014f13b4be) */

void __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsAddRemove::GetTests
          (WorldMetricsTestMultipleMetricsAddRemove *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 14f13b4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsAddRemove::RunTest
          (WorldMetricsTestMultipleMetricsAddRemove *this,FString *param_1)

{
  bool bVar1;
  WorldMetricsTestMultipleMetricsAddRemove *local_res8 [4];
  code *local_18;
  WorldMetricsTestMultipleMetricsAddRemove **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestMultipleMetricsAddRemove::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 14f13b530

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsAddRemove::GetBeautifiedTestName
          (WorldMetricsTestMultipleMetricsAddRemove *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// GetTestFlags @ 14f13b7f0

EAutomationTestFlags __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricIteration::GetTestFlags
          (WorldMetricsTestMultipleMetricIteration *this)

{
  return this->TestFlags;
}

// IsStressTest @ 14f13b800

bool __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricIteration::IsStressTest
          (WorldMetricsTestMultipleMetricIteration *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14f13b810

uint __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricIteration::GetRequiredDeviceNum
          (WorldMetricsTestMultipleMetricIteration *this)

{
  return 1;
}

// GetTestSourceFileName @ 14f13b820

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricIteration::GetTestSourceFileName
          (WorldMetricsTestMultipleMetricIteration *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsTest\\Private\\WorldMetricsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14f13b850

int __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricIteration::GetTestSourceFileLine
          (WorldMetricsTestMultipleMetricIteration *this)

{
  return 0x357;
}

// GetTests @ 14f13b860

/* WARNING: Removing unreachable block (ram,0x00014f13b9de) */

void __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricIteration::GetTests
          (WorldMetricsTestMultipleMetricIteration *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 14f13ba00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricIteration::RunTest
          (WorldMetricsTestMultipleMetricIteration *this,FString *param_1)

{
  bool bVar1;
  WorldMetricsTestMultipleMetricIteration *local_res8 [4];
  code *local_18;
  WorldMetricsTestMultipleMetricIteration **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestMultipleMetricIteration::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 14f13ba50

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricIteration::GetBeautifiedTestName
          (WorldMetricsTestMultipleMetricIteration *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// GetTestFlags @ 14f13bc50

EAutomationTestFlags __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAcquireRelease::GetTestFlags
          (WorldMetricsTestSingleMetricSingleExtensionAcquireRelease *this)

{
  return this->TestFlags;
}

// IsStressTest @ 14f13bc60

bool __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAcquireRelease::IsStressTest
          (WorldMetricsTestSingleMetricSingleExtensionAcquireRelease *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14f13bc70

uint __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAcquireRelease::GetRequiredDeviceNum
          (WorldMetricsTestSingleMetricSingleExtensionAcquireRelease *this)

{
  return 1;
}

// GetTestSourceFileName @ 14f13bc80

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAcquireRelease::GetTestSourceFileName
          (WorldMetricsTestSingleMetricSingleExtensionAcquireRelease *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsTest\\Private\\WorldMetricsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14f13bcb0

int __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAcquireRelease::GetTestSourceFileLine
          (WorldMetricsTestSingleMetricSingleExtensionAcquireRelease *this)

{
  return 0x365;
}

// GetTests @ 14f13bcc0

/* WARNING: Removing unreachable block (ram,0x00014f13be3e) */

void __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAcquireRelease::GetTests
          (WorldMetricsTestSingleMetricSingleExtensionAcquireRelease *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 14f13be60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAcquireRelease::RunTest
          (WorldMetricsTestSingleMetricSingleExtensionAcquireRelease *this,FString *param_1)

{
  bool bVar1;
  WorldMetricsTestSingleMetricSingleExtensionAcquireRelease *local_res8 [4];
  code *local_18;
  WorldMetricsTestSingleMetricSingleExtensionAcquireRelease **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAcquireRelease::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 14f13beb0

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAcquireRelease::GetBeautifiedTestName
          (WorldMetricsTestSingleMetricSingleExtensionAcquireRelease *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// GetTestFlags @ 14f13c170

EAutomationTestFlags __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease::GetTestFlags
          (WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease *this)

{
  return this->TestFlags;
}

// IsStressTest @ 14f13c180

bool __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease::IsStressTest
          (WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14f13c190

uint __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease::GetRequiredDeviceNum
          (WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease *this)

{
  return 1;
}

// GetTestSourceFileName @ 14f13c1a0

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease::
GetTestSourceFileName
          (WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsTest\\Private\\WorldMetricsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14f13c1d0

int __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease::
GetTestSourceFileLine(WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease *this)

{
  return 0x36e;
}

// GetTests @ 14f13c1e0

/* WARNING: Removing unreachable block (ram,0x00014f13c35e) */

void __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease::GetTests
          (WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 14f13c380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease::RunTest
          (WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease *this,FString *param_1)

{
  bool bVar1;
  WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease *local_res8 [4];
  code *local_18;
  WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 14f13c3d0

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease::
GetBeautifiedTestName
          (WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// GetTestFlags @ 14f13c5d0

EAutomationTestFlags __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension::
GetTestFlags(WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension *this)

{
  return this->TestFlags;
}

// IsStressTest @ 14f13c5e0

bool __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension::
IsStressTest(WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14f13c5f0

uint __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension::
GetRequiredDeviceNum
          (WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension *this)

{
  return 1;
}

// GetTestSourceFileName @ 14f13c600

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension::
GetTestSourceFileName
          (WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsTest\\Private\\WorldMetricsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14f13c630

int __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension::
GetTestSourceFileLine
          (WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension *this)

{
  return 0x37c;
}

// GetTests @ 14f13c640

/* WARNING: Removing unreachable block (ram,0x00014f13c7be) */

void __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension::
GetTests(WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension *this,
        TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 14f13c7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension::
RunTest(WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension *this,
       FString *param_1)

{
  bool bVar1;
  WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension *local_res8 [4];
  code *local_18;
  WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 14f13c830

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension::
GetBeautifiedTestName
          (WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// GetTestFlags @ 14f13caf0

EAutomationTestFlags __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease::GetTestFlags
          (WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease *this)

{
  return this->TestFlags;
}

// IsStressTest @ 14f13cb00

bool __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease::IsStressTest
          (WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14f13cb10

uint __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease::
GetRequiredDeviceNum(WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease *this)

{
  return 1;
}

// GetTestSourceFileName @ 14f13cb20

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease::
GetTestSourceFileName
          (WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsTest\\Private\\WorldMetricsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14f13cb50

int __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease::
GetTestSourceFileLine(WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease *this)

{
  return 0x389;
}

// GetTests @ 14f13cb60

/* WARNING: Removing unreachable block (ram,0x00014f13ccde) */

void __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease::GetTests
          (WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 14f13cd00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease::RunTest
          (WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease *this,FString *param_1)

{
  bool bVar1;
  WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease *local_res8 [4];
  code *local_18;
  WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 14f13cd50

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease::
GetBeautifiedTestName
          (WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// GetTestFlags @ 14f13cdd0

EAutomationTestFlags __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval::GetTestFlags
          (WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval *this)

{
  return this->TestFlags;
}

// IsStressTest @ 14f13cde0

bool __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval::IsStressTest
          (WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14f13cdf0

uint __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval::
GetRequiredDeviceNum(WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval *this)

{
  return 1;
}

// GetTestSourceFileName @ 14f13ce00

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval::
GetTestSourceFileName
          (WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsTest\\Private\\WorldMetricsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14f13ce30

int __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval::
GetTestSourceFileLine(WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval *this)

{
  return 0x397;
}

// GetTests @ 14f13ce40

/* WARNING: Removing unreachable block (ram,0x00014f13cfbe) */

void __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval::GetTests
          (WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 14f13cfe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval::RunTest
          (WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval *this,FString *param_1)

{
  bool bVar1;
  WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval *local_res8 [4];
  code *local_18;
  WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 14f13d030

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval::
GetBeautifiedTestName
          (WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// GetTestFlags @ 14f13d0b0

EAutomationTestFlags __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval::GetTestFlags
          (WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval *this)

{
  return this->TestFlags;
}

// IsStressTest @ 14f13d0c0

bool __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval::IsStressTest
          (WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14f13d0d0

uint __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval::
GetRequiredDeviceNum(WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval *this)

{
  return 1;
}

// GetTestSourceFileName @ 14f13d0e0

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval::
GetTestSourceFileName
          (WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsTest\\Private\\WorldMetricsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14f13d110

int __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval::
GetTestSourceFileLine(WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval *this)

{
  return 0x3a1;
}

// GetTests @ 14f13d120

/* WARNING: Removing unreachable block (ram,0x00014f13d29e) */

void __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval::GetTests
          (WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 14f13d2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval::RunTest
          (WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval *this,
          FString *param_1)

{
  bool bVar1;
  WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval *local_res8 [4];
  code *local_18;
  WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 14f13d310

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval::
GetBeautifiedTestName
          (WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// GetTestFlags @ 14f13d390

EAutomationTestFlags __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval::GetTestFlags
          (WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval *this)

{
  return this->TestFlags;
}

// IsStressTest @ 14f13d3a0

bool __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval::IsStressTest
          (WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14f13d3b0

uint __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval::GetRequiredDeviceNum
          (WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval *this)

{
  return 1;
}

// GetTestSourceFileName @ 14f13d3c0

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval::GetTestSourceFileName
          (WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsTest\\Private\\WorldMetricsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14f13d3f0

int __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval::GetTestSourceFileLine
          (WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval *this)

{
  return 0x3af;
}

// GetTests @ 14f13d400

/* WARNING: Removing unreachable block (ram,0x00014f13d57e) */

void __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval::GetTests
          (WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 14f13d5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval::RunTest
          (WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval *this,FString *param_1)

{
  bool bVar1;
  WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval *local_res8 [4];
  code *local_18;
  WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 14f13d5f0

FString * __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval::GetBeautifiedTestName
          (WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// GetTestFlags @ 14f13d670

EAutomationTestFlags __thiscall
UE::WorldMetrics::TestMetricCollection::GetTestFlags(TestMetricCollection *this)

{
  return this->TestFlags;
}

// IsStressTest @ 14f13d680

bool __thiscall UE::WorldMetrics::TestMetricCollection::IsStressTest(TestMetricCollection *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14f13d690

uint __thiscall
UE::WorldMetrics::TestMetricCollection::GetRequiredDeviceNum(TestMetricCollection *this)

{
  return 1;
}

// GetTestSourceFileName @ 14f13d6a0

FString * __thiscall
UE::WorldMetrics::TestMetricCollection::GetTestSourceFileName
          (TestMetricCollection *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsTest\\Private\\WorldMetricsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14f13d6d0

int __thiscall
UE::WorldMetrics::TestMetricCollection::GetTestSourceFileLine(TestMetricCollection *this)

{
  return 0x3b8;
}

// GetTests @ 14f13d6e0

/* WARNING: Removing unreachable block (ram,0x00014f13d85e) */

void __thiscall
UE::WorldMetrics::TestMetricCollection::GetTests
          (TestMetricCollection *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 14f13d880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::WorldMetrics::TestMetricCollection::RunTest(TestMetricCollection *this,FString *param_1)

{
  bool bVar1;
  TestMetricCollection *local_res8 [4];
  code *local_18;
  TestMetricCollection **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::TestMetricCollection::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 14f13d8d0

FString * __thiscall
UE::WorldMetrics::TestMetricCollection::GetBeautifiedTestName
          (TestMetricCollection *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// MakeRandomSubset<int> @ 14f13fc60

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
UE::WorldMetrics::MakeRandomSubset<int>
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<int,int> *param_1,int param_2)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  if ((param_2 == 0) && (param_2 = param_1->ArrayNum / 2, param_2 < 1)) {
    param_2 = 1;
  }
  uVar4 = param_1->ArrayNum;
  if (uVar4 == param_2) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = uVar4;
    if (uVar4 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar4,0,&__return_storage_ptr__->AllocatorInstance,uVar4,
                 &__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,param_1->DataPtr,
             (longlong)(int)uVar4 << 2);
    }
  }
  else {
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    if ((1 < (int)uVar4) && (param_2 < (int)uVar4)) {
      if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
      }
      if (0 < param_2) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,param_2,&local_38,0,(int *)((longlong)&local_30 + 4));
      }
      fVar2 = __real_38000100;
      while ((int)local_30 < param_2) {
        iVar6 = param_1->ArrayNum;
        uVar4 = 0;
        if (0 < iVar6) {
          uVar4 = rand();
          uVar5 = (uint)((float)(uVar4 & 0x7fff) * (float)iVar6 * fVar2);
          uVar4 = iVar6 - 1U;
          if ((int)uVar5 < (int)(iVar6 - 1U)) {
            uVar4 = uVar5;
          }
        }
        uVar5 = 0;
        if ((int)uVar4 < iVar6) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar7;
        }
        if (local_38.Data != local_38.Data + (longlong)(int)local_30 * 4) {
          FVar9.Data = local_38.Data;
          do {
            if (*(int *)FVar9.Data == param_1->DataPtr[(int)uVar4]) {
              if ((int)((longlong)FVar9.Data - (longlong)local_38.Data >> 2) != -1)
              goto LAB_14f13febb;
              break;
            }
            FVar9.Data = FVar9.Data + 4;
          } while (FVar9.Data != local_38.Data + (longlong)(int)local_30 * 4);
        }
        pFVar8 = (FScriptContainerElement *)TArrayView<int,int>::operator[](param_1,uVar4);
        if (((local_38.Data <= pFVar8) && (pFVar8 < local_38.Data + (longlong)local_30._4_4_ * 4))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar7;
        }
        iVar6 = (int)local_30;
        if ((int)local_30 == local_30._4_4_) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_38,(int *)((longlong)&local_30 + 4));
        }
        local_30 = CONCAT44(local_30._4_4_,iVar6 + 1);
        *(int *)(local_38.Data + (longlong)iVar6 * 4) = *(int *)pFVar8;
LAB_14f13febb:
      }
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_38.Data;
    __return_storage_ptr__->ArrayNum = (int)local_30;
    __return_storage_ptr__->ArrayMax = local_30._4_4_;
  }
  return __return_storage_ptr__;
}

// Shuffle<int> @ 14f13ff80

void __cdecl UE::WorldMetrics::Shuffle<int>(TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  fVar4 = __real_38000100;
  iVar8 = param_1->ArrayNum;
  if (1 < iVar8) {
    iVar11 = 0;
    lVar10 = 0;
    do {
      iVar8 = iVar8 - iVar11;
      if (iVar8 < 1) {
        iVar9 = 0;
      }
      else {
        uVar6 = rand();
        iVar7 = (int)((float)(uVar6 & 0x7fff) * (float)iVar8 * fVar4);
        iVar9 = iVar8 + -1;
        if (iVar7 < iVar8 + -1) {
          iVar9 = iVar7;
        }
      }
      iVar9 = iVar9 + iVar11;
      if (iVar11 != iVar9) {
        if (((lVar10 < 0) || (iVar9 < 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0xce6,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((param_1->ArrayNum <= iVar11) || (param_1->ArrayNum <= iVar9)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0xce7,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        uVar1 = *(undefined4 *)(pFVar2 + lVar10 * 4);
        *(undefined4 *)(pFVar2 + lVar10 * 4) = *(undefined4 *)(pFVar2 + (longlong)iVar9 * 4);
        *(undefined4 *)(pFVar2 + (longlong)iVar9 * 4) = uVar1;
      }
      iVar8 = param_1->ArrayNum;
      iVar11 = iVar11 + 1;
      lVar10 = lVar10 + 1;
    } while (iVar11 < iVar8);
  }
  return;
}

// Shuffle<UMockWorldMetricBase_*> @ 14f1400c0

void __cdecl
UE::WorldMetrics::Shuffle<UMockWorldMetricBase_*>
          (TArray<UMockWorldMetricBase_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  fVar4 = __real_38000100;
  iVar8 = param_1->ArrayNum;
  if (1 < iVar8) {
    iVar11 = 0;
    lVar10 = 0;
    do {
      iVar8 = iVar8 - iVar11;
      if (iVar8 < 1) {
        iVar9 = 0;
      }
      else {
        uVar6 = rand();
        iVar7 = (int)((float)(uVar6 & 0x7fff) * (float)iVar8 * fVar4);
        iVar9 = iVar8 + -1;
        if (iVar7 < iVar8 + -1) {
          iVar9 = iVar7;
        }
      }
      iVar9 = iVar9 + iVar11;
      if (iVar11 != iVar9) {
        if (((lVar10 < 0) || (iVar9 < 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0xce6,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((param_1->ArrayNum <= iVar11) || (param_1->ArrayNum <= iVar9)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0xce7,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        uVar2 = *(undefined8 *)(pFVar1 + lVar10 * 8);
        *(undefined8 *)(pFVar1 + lVar10 * 8) = *(undefined8 *)(pFVar1 + (longlong)iVar9 * 8);
        *(undefined8 *)(pFVar1 + (longlong)iVar9 * 8) = uVar2;
      }
      iVar8 = param_1->ArrayNum;
      iVar11 = iVar11 + 1;
      lVar10 = lVar10 + 1;
    } while (iVar11 < iVar8);
  }
  return;
}

// TestMetricCollection @ 14f140200

TestMetricCollection * __thiscall
UE::WorldMetrics::TestMetricCollection::TestMetricCollection
          (TestMetricCollection *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7TestMetricCollection_WorldMetrics_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"WorldMetrics::TestMetricCollection");
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
  ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// WorldMetricsTestMultipleMetricIteration @ 14f140fd0

WorldMetricsTestMultipleMetricIteration * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricIteration::WorldMetricsTestMultipleMetricIteration
          (WorldMetricsTestMultipleMetricIteration *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7WorldMetricsTestMultipleMetricIteration_WorldMetrics_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"WorldMetrics::TestMultipleMetricIteration");
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
  ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// WorldMetricsTestMultipleMetricsAddRemove @ 14f1411a0

WorldMetricsTestMultipleMetricsAddRemove * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsAddRemove::WorldMetricsTestMultipleMetricsAddRemove
          (WorldMetricsTestMultipleMetricsAddRemove *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7WorldMetricsTestMultipleMetricsAddRemove_WorldMetrics_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"WorldMetrics::TestMultipleMetricsAddRemove");
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
  ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease @ 14f141370

WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease::
WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease
          (WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease *this,FString *param_1)

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
  this->_padding_ =
       (longlong)
       &___7WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease_WorldMetrics_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "WorldMetrics::TestMultipleMetricsMultipleExtensionAcquireRelease");
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
  ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval @ 14f141540

WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval::
WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval
          (WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval *this,
          FString *param_1)

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
  this->_padding_ =
       (longlong)
       &
       ___7WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval_WorldMetrics_UE__6B_
  ;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "WorldMetrics::TestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval"
                             );
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
  ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease @ 14f141710

WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease::
WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease
          (WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease *this,FString *param_1)

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
  this->_padding_ =
       (longlong)
       &___7WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease_WorldMetrics_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "WorldMetrics::TestMultipleMetricsSingleExtensionAcquireRelease");
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
  ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension @ 14f1418e0

WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension * __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension::
WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension
          (WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension *this,
          FString *param_1)

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
  this->_padding_ =
       (longlong)
       &
       ___7WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension_WorldMetrics_UE__6B_
  ;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "WorldMetrics::TestMultipleMetricsSingleExtensionAcquireReleaseChildExtension"
                             );
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
  ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// WorldMetricsTestSingleMetricAddRemove @ 14f141ab0

WorldMetricsTestSingleMetricAddRemove * __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricAddRemove::WorldMetricsTestSingleMetricAddRemove
          (WorldMetricsTestSingleMetricAddRemove *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7WorldMetricsTestSingleMetricAddRemove_WorldMetrics_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"WorldMetrics::TestSingleMetricAddRemove");
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
  ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval @ 14f141c80

WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval * __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval::
WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval
          (WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval *this,FString *param_1)

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
  this->_padding_ =
       (longlong)&___7WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval_WorldMetrics_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"WorldMetrics::TestSingleMetricOrphanExtensionAutoRemoval");
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
  ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// WorldMetricsTestSingleMetricSingleExtensionAcquireRelease @ 14f141e50

WorldMetricsTestSingleMetricSingleExtensionAcquireRelease * __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAcquireRelease::
WorldMetricsTestSingleMetricSingleExtensionAcquireRelease
          (WorldMetricsTestSingleMetricSingleExtensionAcquireRelease *this,FString *param_1)

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
  this->_padding_ =
       (longlong)&___7WorldMetricsTestSingleMetricSingleExtensionAcquireRelease_WorldMetrics_UE__6B_
  ;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "WorldMetrics::TestSingleMetricSingleExtensionAcquireRelease");
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
  ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval @ 14f142020

WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval * __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval::
WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval
          (WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval *this,FString *param_1)

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
  this->_padding_ =
       (longlong)
       &___7WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval_WorldMetrics_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "WorldMetrics::TestSingleMetricSingleExtensionAutoReleaseOnRemoval");
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
  ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// WorldMetricsTestZeroState @ 14f1421f0

WorldMetricsTestZeroState * __thiscall
UE::WorldMetrics::WorldMetricsTestZeroState::WorldMetricsTestZeroState
          (WorldMetricsTestZeroState *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7WorldMetricsTestZeroState_WorldMetrics_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"WorldMetrics::TestZeroState");
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
  ::FString::FString(&local_18,"[WorldMetrics][Core][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// operator() @ 14f142860

void __thiscall
`UE::WorldMetrics::Private::TestMultipleMetricsSingleExtensionAcquireReleaseChildExtension'::__l2::
<lambda_1>::operator()(void *this,UWorldMetricsExtension *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  UWorldMetricsExtension *pUVar6;
  UWorldMetricsSubsystem *pUVar7;
  TObjectPtr<UClass>_u_0 local_res10;
  TObjectPtr<UClass>_u_0 local_res20;
  
  pUVar5 = UMockWorldMetricsExtensionB::StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar5->_padding_)) {
    uVar4 = *(uint *)&param_1->field_0x8 >> 4;
    if (param_2) {
      if ((uVar4 & 1) == 0) {
        pUVar7 = *(UWorldMetricsSubsystem **)&param_1->field_0x20;
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6210496549370200042>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Public\\WorldMetricsExtension.h"
                           ,0x16,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar7 = (UWorldMetricsSubsystem *)0x0;
      }
      local_res10.DebugPtr = UMockWorldMetricsExtensionC::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res10.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
      }
      pUVar6 = UWorldMetricsSubsystem::AcquireExtension
                         (pUVar7,param_1,
                          (TSubclassOf<UWorldMetricsExtension> *)&local_res10.ObjectPtr);
      **(undefined8 **)this = pUVar6;
      return;
    }
    if ((uVar4 & 1) == 0) {
      pUVar7 = *(UWorldMetricsSubsystem **)&param_1->field_0x20;
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6210496549370200042>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Public\\WorldMetricsExtension.h"
                         ,0x16,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar7 = (UWorldMetricsSubsystem *)0x0;
    }
    local_res20.DebugPtr = UMockWorldMetricsExtensionC::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
    }
    UWorldMetricsSubsystem::ReleaseExtension
              (pUVar7,param_1,(TSubclassOf<UWorldMetricsExtension> *)&local_res20.ObjectPtr);
  }
  return;
}

// operator() @ 14f1429b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::WorldMetrics::Private::<lambda_24>::operator()
          (<lambda_24> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  code *pcVar1;
  bool bVar2;
  UWorldMetricsSubsystem *this_00;
  
  this_00 = UWorldMetricsSubsystem::Get(param_2);
  if (this_00 == (UWorldMetricsSubsystem *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4843118218048438303>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsTest\\Private\\WorldMetricsTest.cpp"
                       ,0x1f,"Subsystem");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (2 < (byte)LogWorldMetrics._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
      return;
    }
  }
  else {
    bVar2 = UWorldMetricsSubsystem::HasAnyMetric(this_00);
    if (!bVar2) {
      TestZeroState(param_2);
      TestSingleMetricAddRemove(param_2);
      TestMultipleMetricsAddRemove(param_2,false);
      TestMultipleMetricsAddRemove(param_2,true);
      TestMultipleMetricIteration(param_2,false);
      TestMultipleMetricIteration(param_2,true);
      TestSingleMetricSingleExtensionAcquireRelease(param_2);
      TestMultipleMetricsSingleExtensionAcquireRelease(param_2,false);
      TestMultipleMetricsSingleExtensionAcquireRelease(param_2,true);
      TestMultipleMetricsSingleExtensionAcquireReleaseChildExtension(param_2);
      TestMultipleMetricsMultipleExtensionAcquireRelease(param_2,false);
      TestMultipleMetricsMultipleExtensionAcquireRelease(param_2,true);
      TestSingleMetricSingleExtensionAutoReleaseOnRemoval(param_2);
      TestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval(param_2,false);
      TestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval(param_2,true);
      TestSingleMetricOrphanExtensionAutoRemoval(param_2);
      TestMetricCollection(param_2,true);
      TestMetricCollection(param_2,false);
      return;
    }
    if (2 < (byte)LogWorldMetrics._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldMetrics);
      return;
    }
  }
  return;
}

// AcquireMockMetricExtensions @ 14f143570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TSubclassOf<UMockWorldMetricsExtensionBase>,TSizedDefaultAllocator<32>_> * __cdecl
UE::WorldMetrics::Private::AcquireMockMetricExtensions
          (TArray<TSubclassOf<UMockWorldMetricsExtensionBase>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,UMockWorldMetricBase *param_1,int param_2,bool param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<UClass>_u_0 TVar4;
  int iVar5;
  UWorld *pUVar6;
  UWorldMetricsSubsystem *this;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  TArrayView<int,int> *pTVar8;
  UWorldMetricsExtension *pUVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *local_res8;
  TObjectPtr<UClass>_u_0 local_res10;
  TArrayView<int,int> local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<int,int> local_48;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (param_1 != (UMockWorldMetricBase *)0x0) {
    pUVar6 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))(param_1);
    this = UWorldMetricsSubsystem::Get(pUVar6);
    if (this != (UWorldMetricsSubsystem *)0x0) {
      uVar11 = 10;
      if (param_2 < 10) {
        uVar11 = param_2;
      }
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      if (*piVar1 < (int)uVar11) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar11,&__return_storage_ptr__->AllocatorInstance,
                   __return_storage_ptr__->ArrayNum,piVar1);
      }
      if (param_3) {
        pTVar7 = MakeIndexArray(&local_68,10);
        pTVar8 = TArrayView<int,int>::
                 TArrayView<int,int><TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                           (&local_48,pTVar7);
        local_88.DataPtr = pTVar8->DataPtr;
        local_88.ArrayNum = pTVar8->ArrayNum;
        local_88._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
        pTVar7 = MakeRandomSubset<int>(&local_78,&local_88,uVar11);
        local_res8 = (pTVar7->AllocatorInstance).Data;
        (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar10 = pTVar7->ArrayNum;
        pTVar7->ArrayNum = 0;
        pTVar7->ArrayMax = 0;
        if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.AllocatorInstance.Data);
        }
        if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
      }
      else {
        pTVar7 = MakeIndexArray(&local_58,uVar11);
        local_res8 = (pTVar7->AllocatorInstance).Data;
        (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar10 = pTVar7->ArrayNum;
        pTVar7->ArrayNum = 0;
        pTVar7->ArrayMax = 0;
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
      }
      for (pFVar12 = local_res8; pFVar12 != local_res8 + (longlong)iVar10 * 4; pFVar12 = pFVar12 + 4
          ) {
        iVar2 = *(int *)pFVar12;
        local_res10 = (TObjectPtr<UClass>_u_0)
                      ((TObjectPtr<UClass>_u_0 *)(MockExtensionClasses + iVar2))->DebugPtr;
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           ((TObjectPtr<UClass>_u_0)local_res10.DebugPtr != (TObjectPtr<UClass>_u_0)0x0)) {
          GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
        }
        pUVar9 = UWorldMetricsSubsystem::AcquireExtension
                           (this,(UWorldMetricInterface *)param_1,
                            (TSubclassOf<UWorldMetricsExtension> *)&local_res10.ObjectPtr);
        if (pUVar9 != (UWorldMetricsExtension *)0x0) {
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          TVar4 = (TObjectPtr<UClass>_u_0)
                  ((TObjectPtr<UClass>_u_0 *)(MockExtensionClasses + iVar2))->DebugPtr;
          *(TObjectPtr<UClass>_u_0 *)(pFVar3 + (longlong)iVar5 * 8) = TVar4;
          if ((GC::GIsIncrementalReachabilityPending != false) &&
             (TVar4 != (TObjectPtr<UClass>_u_0)0x0)) {
            GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
          }
        }
      }
      if (local_res8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res8);
      }
    }
  }
  return __return_storage_ptr__;
}

// AddMockMetrics @ 14f1437a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UMockWorldMetricBase_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::WorldMetrics::Private::AddMockMetrics
          (TArray<UMockWorldMetricBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UWorld *param_1,TArrayView<TSubclassOf<UMockWorldMetricBase>,int> *param_2)

{
  int *piVar1;
  TObjectPtr<UClass>_u_0 *pTVar2;
  uint uVar3;
  int iVar4;
  UWorldMetricsSubsystem *this;
  UWorldMetricInterface *pUVar5;
  TObjectPtr<UClass>_u_0 *pTVar6;
  TObjectPtr<UClass>_u_0 local_res8;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  this = UWorldMetricsSubsystem::Get(param_1);
  if (this != (UWorldMetricsSubsystem *)0x0) {
    uVar3 = param_2->ArrayNum;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (*piVar1 < (int)uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    pTVar6 = (TObjectPtr<UClass>_u_0 *)param_2->DataPtr;
    pTVar2 = pTVar6 + (int)uVar3;
    for (; pTVar6 != pTVar2; pTVar6 = pTVar6 + 1) {
      local_res8 = (TObjectPtr<UClass>_u_0)pTVar6->DebugPtr;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((TObjectPtr<UClass>_u_0)local_res8.DebugPtr != (TObjectPtr<UClass>_u_0)0x0)) {
        GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
      }
      pUVar5 = UWorldMetricsSubsystem::AddMetric
                         (this,(TSubclassOf<UWorldMetricInterface> *)&local_res8.ObjectPtr);
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(UWorldMetricInterface **)
       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) = pUVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetMockMetricClasses @ 14f143d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TSubclassOf<UMockWorldMetricBase>,TSizedDefaultAllocator<32>_> * __cdecl
UE::WorldMetrics::Private::GetMockMetricClasses
          (TArray<TSubclassOf<UMockWorldMetricBase>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,UWorld *param_1,int param_2,bool param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<UClass>_u_0 TVar4;
  int iVar5;
  UWorldMetricsSubsystem *pUVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  TArrayView<int,int> *pTVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  TArrayView<int,int> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  TArrayView<int,int> local_38;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  pUVar6 = UWorldMetricsSubsystem::Get(param_1);
  if (pUVar6 != (UWorldMetricsSubsystem *)0x0) {
    uVar10 = 10;
    if (param_2 < 10) {
      uVar10 = param_2;
    }
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if (*piVar1 < (int)uVar10) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar10,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    if (param_3) {
      pTVar7 = MakeIndexArray(&local_58,10);
      pTVar8 = TArrayView<int,int>::
               TArrayView<int,int><TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                         (&local_38,pTVar7);
      local_78.DataPtr = pTVar8->DataPtr;
      local_78.ArrayNum = pTVar8->ArrayNum;
      local_78._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
      pTVar7 = MakeRandomSubset<int>(&local_68,&local_78,uVar10);
      pFVar12 = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar9 = pTVar7->ArrayNum;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
      local_48.AllocatorInstance.Data = local_58.AllocatorInstance.Data;
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
        local_48.AllocatorInstance.Data = local_58.AllocatorInstance.Data;
      }
    }
    else {
      pTVar7 = MakeIndexArray(&local_48,uVar10);
      pFVar12 = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar9 = pTVar7->ArrayNum;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    for (pFVar11 = pFVar12; pFVar11 != pFVar12 + (longlong)iVar9 * 4; pFVar11 = pFVar11 + 4) {
      iVar5 = __return_storage_ptr__->ArrayNum;
      iVar2 = *(int *)pFVar11;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      TVar4 = (TObjectPtr<UClass>_u_0)
              ((TObjectPtr<UClass>_u_0 *)(MockMetricClasses + iVar2))->DebugPtr;
      *(TObjectPtr<UClass>_u_0 *)(pFVar3 + (longlong)iVar5 * 8) = TVar4;
      if ((GC::GIsIncrementalReachabilityPending != false) && (TVar4 != (TObjectPtr<UClass>_u_0)0x0)
         ) {
        GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
      }
    }
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
  }
  return __return_storage_ptr__;
}

// MakeIndexArray @ 14f1451f0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
UE::WorldMetrics::MakeIndexArray
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  longlong lVar8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 < 1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
  }
  else {
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_1,&__return_storage_ptr__->AllocatorInstance,piVar1,
                       &__return_storage_ptr__->ArrayMax);
    memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 4,0,
           (longlong)param_1 << 2);
    uVar7 = 0;
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < *piVar1) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + lVar8) = uVar7;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar7 < param_1);
  }
  return __return_storage_ptr__;
}

// ReleaseMockMetricExtensions @ 14f145320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
UE::WorldMetrics::Private::ReleaseMockMetricExtensions
          (UMockWorldMetricBase *param_1,
          TArrayView<TSubclassOf<UMockWorldMetricsExtensionBase>,int> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UWorld *pUVar8;
  UWorldMetricsSubsystem *this;
  int iVar9;
  int iVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  TObjectPtr<UClass>_u_0 local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  
  if (param_1 != (UMockWorldMetricBase *)0x0) {
    pUVar8 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))();
    this = UWorldMetricsSubsystem::Get(pUVar8);
    if (this != (UWorldMetricsSubsystem *)0x0) {
      iVar7 = param_2->ArrayNum;
      MakeIndexArray(&local_48,iVar7);
      if (param_3) {
        Shuffle<int>(&local_48);
      }
      iVar9 = local_48.ArrayNum;
      pFVar1 = local_48.AllocatorInstance.Data + (longlong)iVar9 * 4;
      FVar11.Data = local_48.AllocatorInstance.Data;
      iVar4 = 0;
      while( true ) {
        iVar10 = iVar4;
        if (local_48.ArrayNum != iVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (FVar11.Data == pFVar1) {
          if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.AllocatorInstance.Data);
          }
          return iVar10;
        }
        uVar2 = *(uint *)FVar11.Data;
        uVar6 = 0;
        if ((int)uVar2 < iVar7) {
          uVar6 = ~uVar2 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) break;
        local_res20 = (TObjectPtr<UClass>_u_0)
                      ((TObjectPtr<UClass>_u_0 *)(param_2->DataPtr + (int)uVar2))->DebugPtr;
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           ((TObjectPtr<UClass>_u_0)local_res20.DebugPtr != (TObjectPtr<UClass>_u_0)0x0)) {
          GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
        }
        FVar11.Data = FVar11.Data + 4;
        bVar5 = UWorldMetricsSubsystem::ReleaseExtension
                          (this,(UWorldMetricInterface *)param_1,
                           (TSubclassOf<UWorldMetricsExtension> *)&local_res20.ObjectPtr);
        iVar4 = iVar10 + 1;
        if (!bVar5) {
          iVar4 = iVar10;
        }
      }
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
  }
  return 0;
}

// RemoveMockMetrics @ 14f1454d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
UE::WorldMetrics::Private::RemoveMockMetrics
          (UWorld *param_1,TArrayView<UMockWorldMetricBase_*,int> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UWorldMetricsSubsystem *this;
  int iVar8;
  int iVar9;
  ForAnyElementType FVar10;
  undefined1 local_res20 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_40;
  
  this = UWorldMetricsSubsystem::Get(param_1);
  if (this == (UWorldMetricsSubsystem *)0x0) {
    return 0;
  }
  iVar7 = param_2->ArrayNum;
  MakeIndexArray(&local_40,iVar7);
  if (param_3) {
    Shuffle<int>(&local_40);
  }
  iVar8 = local_40.ArrayNum;
  pFVar1 = local_40.AllocatorInstance.Data + (longlong)iVar8 * 4;
  FVar10.Data = local_40.AllocatorInstance.Data;
  iVar4 = 0;
  while( true ) {
    iVar9 = iVar4;
    if (local_40.ArrayNum != iVar8) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (FVar10.Data == pFVar1) break;
    uVar2 = *(uint *)FVar10.Data;
    uVar6 = 0;
    if ((int)uVar2 < iVar7) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
    FVar10.Data = FVar10.Data + 4;
    bVar5 = UWorldMetricsSubsystem::RemoveMetric
                      (this,(UWorldMetricInterface *)param_2->DataPtr[(int)uVar2]);
    iVar4 = iVar9 + 1;
    if (!bVar5) {
      iVar4 = iVar9;
    }
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return iVar9;
}

// ScopedWorldTest @ 14f145630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::WorldMetrics::Private::ScopedWorldTest
          (Type param_1,TFunctionRef<void___cdecl(UWorld_*)> *param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  UWorld *this;
  FAutomationTestFramework *pFVar3;
  FWorldContext *this_00;
  UWorld *local_res18 [2];
  FString local_88;
  FURL local_78;
  
  local_res18[0] = (UWorld *)0x0;
  this = UWorld::CreateWorld(param_1,false,(FName)0x0,(UPackage *)0x0,true,Num,
                             (FWorldInitializationValues *)0x0,false);
  if (this == (UWorld *)0x0) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_88,L"World could not be created.");
    (*pcVar2)(pFVar1,&local_88,0);
  }
  else {
    this_00 = UEngine::CreateNewWorldContext(GEngine,param_1);
    FWorldContext::SetCurrentWorld(this_00,this);
    FURL::FURL(&local_78,(wchar_t *)0x0);
    UWorld::InitializeActorsForPlay(this,&local_78,true,(FRegisterComponentContext *)0x0);
    UWorld::BeginPlay(this);
    local_res18[0] = this;
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res18);
    UWorld::EndPlay(this,Quit);
    (**(code **)(GEngine->_padding_ + 0x530))();
    UWorld::DestroyWorld(this,false,(UWorld *)0x0);
    if (local_78.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Portal.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_78.Op.AllocatorInstance.Data,local_78.Op.ArrayNum);
    if (local_78.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Op.AllocatorInstance.Data);
    }
    if (local_78.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.RedirectURL.Data.AllocatorInstance.Data);
    }
    if (local_78.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Map.Data.AllocatorInstance.Data);
    }
    local_88.Data.AllocatorInstance.Data = local_78.Protocol.Data.AllocatorInstance.Data;
    if (local_78.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Host.Data.AllocatorInstance.Data);
      local_88.Data.AllocatorInstance.Data = local_78.Protocol.Data.AllocatorInstance.Data;
    }
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// TestAll @ 14f145950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::WorldMetrics::Private::TestAll(UWorld *param_1)

{
  TestZeroState(param_1);
  TestSingleMetricAddRemove(param_1);
  TestMultipleMetricsAddRemove(param_1,false);
  TestMultipleMetricsAddRemove(param_1,true);
  TestMultipleMetricIteration(param_1,false);
  TestMultipleMetricIteration(param_1,true);
  TestSingleMetricSingleExtensionAcquireRelease(param_1);
  TestMultipleMetricsSingleExtensionAcquireRelease(param_1,false);
  TestMultipleMetricsSingleExtensionAcquireRelease(param_1,true);
  TestMultipleMetricsSingleExtensionAcquireReleaseChildExtension(param_1);
  TestMultipleMetricsMultipleExtensionAcquireRelease(param_1,false);
  TestMultipleMetricsMultipleExtensionAcquireRelease(param_1,true);
  TestSingleMetricSingleExtensionAutoReleaseOnRemoval(param_1);
  TestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval(param_1,false);
  TestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval(param_1,true);
  TestSingleMetricOrphanExtensionAutoRemoval(param_1);
  TestMetricCollection(param_1,true);
  TestMetricCollection(param_1,false);
  return;
}

// TestBody @ 14f145a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::WorldMetrics::TestMetricCollection::TestBody(TestMetricCollection *this,FString *param_1)

{
  TestMetricCollection *local_res8 [4];
  code *local_18;
  TestMetricCollection **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::TestMetricCollection::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  return;
}

// TestBody @ 14f145a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricIteration::TestBody
          (WorldMetricsTestMultipleMetricIteration *this,FString *param_1)

{
  WorldMetricsTestMultipleMetricIteration *local_res8 [4];
  code *local_18;
  WorldMetricsTestMultipleMetricIteration **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestMultipleMetricIteration::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  return;
}

// TestBody @ 14f145a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsAddRemove::TestBody
          (WorldMetricsTestMultipleMetricsAddRemove *this,FString *param_1)

{
  WorldMetricsTestMultipleMetricsAddRemove *local_res8 [4];
  code *local_18;
  WorldMetricsTestMultipleMetricsAddRemove **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestMultipleMetricsAddRemove::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  return;
}

// TestBody @ 14f145ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease::TestBody
          (WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease *this,FString *param_1)

{
  WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease *local_res8 [4];
  code *local_18;
  WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAcquireRelease::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  return;
}

// TestBody @ 14f145b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval::TestBody
          (WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval *this,
          FString *param_1)

{
  WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval *local_res8 [4];
  code *local_18;
  WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  return;
}

// TestBody @ 14f145b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease::TestBody
          (WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease *this,FString *param_1)

{
  WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease *local_res8 [4];
  code *local_18;
  WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireRelease::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  return;
}

// TestBody @ 14f145b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension::
TestBody(WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension *this,
        FString *param_1)

{
  WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension *local_res8 [4];
  code *local_18;
  WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestMultipleMetricsSingleExtensionAcquireReleaseChildExtension::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  return;
}

// TestBody @ 14f145bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricAddRemove::TestBody
          (WorldMetricsTestSingleMetricAddRemove *this,FString *param_1)

{
  WorldMetricsTestSingleMetricAddRemove *local_res8 [4];
  code *local_18;
  WorldMetricsTestSingleMetricAddRemove **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestSingleMetricAddRemove::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  return;
}

// TestBody @ 14f145c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval::TestBody
          (WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval *this,FString *param_1)

{
  WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval *local_res8 [4];
  code *local_18;
  WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestSingleMetricOrphanExtensionAutoRemoval::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  return;
}

// TestBody @ 14f145c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAcquireRelease::TestBody
          (WorldMetricsTestSingleMetricSingleExtensionAcquireRelease *this,FString *param_1)

{
  WorldMetricsTestSingleMetricSingleExtensionAcquireRelease *local_res8 [4];
  code *local_18;
  WorldMetricsTestSingleMetricSingleExtensionAcquireRelease **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAcquireRelease::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  return;
}

// TestBody @ 14f145c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval::TestBody
          (WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval *this,FString *param_1)

{
  WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval *local_res8 [4];
  code *local_18;
  WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestSingleMetricSingleExtensionAutoReleaseOnRemoval::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  return;
}

// TestBody @ 14f145cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::WorldMetrics::WorldMetricsTestZeroState::TestBody
          (WorldMetricsTestZeroState *this,FString *param_1)

{
  WorldMetricsTestZeroState *local_res8 [4];
  code *local_18;
  WorldMetricsTestZeroState **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::WorldMetrics::WorldMetricsTestZeroState::TestBody'::__l2::<lambda_1>,void,UWorld_*>
             ::Call;
  local_res8[0] = this;
  WorldMetrics::Private::ScopedWorldTest(Editor,(TFunctionRef<void___cdecl(UWorld_*)> *)&local_18);
  return;
}

// TestMetricCollection @ 14f145d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::WorldMetrics::Private::TestMetricCollection(UWorld *param_1,bool param_2)

{
  TObjectPtr<UClass>_u_0 *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FAutomationTestBase *pFVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  ForAnyElementType this;
  int iVar8;
  bool bVar9;
  uint uVar10;
  FAutomationTestFramework *pFVar11;
  UWorldMetricInterface *pUVar12;
  UClass *pUVar13;
  UWorldMetricInterface *pUVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  ForAnyElementType FVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  FString local_80;
  TArray<TSubclassOf<UMockWorldMetricBase>,TSizedDefaultAllocator<32>_> local_70;
  FWorldMetricCollection local_60;
  
  TestZeroState(param_1);
  local_80.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)UWorldMetricsSubsystem::Get(param_1);
  GetMockMetricClasses(&local_70,param_1,8,param_2);
  iVar18 = 0;
  iVar19 = 0;
  local_60.Metrics.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Metrics.ArrayNum = 0;
  local_60.Metrics.ArrayMax = 0;
  local_60.Subsystem.WeakPtr.ObjectIndex = 0;
  local_60.Subsystem.WeakPtr.ObjectSerialNumber = 0;
  local_60.bIsEnabled = false;
  FWorldMetricCollection::Initialize(&local_60,(UObject *)param_1);
  iVar8 = local_70.ArrayNum;
  uVar15 = (ulonglong)local_70.ArrayNum;
  pTVar1 = (TObjectPtr<UClass>_u_0 *)(local_70.AllocatorInstance.Data + uVar15 * 8);
  FVar17.Data = local_70.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar15 != iVar8) {
      `TCheckedPointerIterator<TSubclassOf<UMockWorldMetricBase>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if ((TObjectPtr<UClass>_u_0 *)FVar17.Data == pTVar1) {
      bVar9 = FWorldMetricCollection::IsEmpty(&local_60);
      iVar8 = local_70.ArrayNum;
      if (bVar9) {
        pFVar11 = FAutomationTestFramework::Get();
        pwVar16 = L"Unexpected empty metrics list.";
        goto LAB_14f145ec7;
      }
      uVar10 = FWorldMetricCollection::Num(&local_60);
      iVar20 = local_70.ArrayNum;
      if (uVar10 == iVar8) {
        uVar15 = (ulonglong)local_70.ArrayNum;
        pFVar2 = local_70.AllocatorInstance.Data + uVar15 * 8;
        FVar17.Data = local_70.AllocatorInstance.Data;
        goto LAB_14f145e37;
      }
      pFVar11 = FAutomationTestFramework::Get();
      pwVar16 = L"Unexpected metrics count mismatch.";
      goto LAB_14f145ec7;
    }
    local_res18[0] = (TObjectPtr<UClass>_u_0)*(TObjectPtr<UClass>_u_0 *)FVar17.Data;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18[0].DebugPtr != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
    }
    bVar9 = FWorldMetricCollection::Add
                      (&local_60,(TSubclassOf<UWorldMetricInterface> *)&local_res18[0].ObjectPtr);
    if (!bVar9) break;
    uVar15 = (ulonglong)(uint)local_70.ArrayNum;
    FVar17.Data = FVar17.Data + 8;
  }
  pFVar11 = FAutomationTestFramework::Get();
  pwVar16 = L"Unexpected metric collection \'Add\' failure.";
LAB_14f145ec7:
  pFVar4 = pFVar11->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
  ::FString::FString(&local_80,pwVar16);
  (*pcVar5)(pFVar4,&local_80,0);
  if ((UWorldMetricsSubsystem *)local_80.Data.AllocatorInstance.Data !=
      (UWorldMetricsSubsystem *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
LAB_14f1463a6:
  FWorldMetricCollection::~FWorldMetricCollection(&local_60);
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return;
LAB_14f145e37:
  if ((uint)uVar15 != iVar20) {
    `TCheckedPointerIterator<TSubclassOf<UMockWorldMetricBase>,int,0>::operator!='::__l2::<lambda_1>
    ::operator()(local_res18);
  }
  if (FVar17.Data != pFVar2) {
    local_res18[0].DebugPtr = *(UClass **)FVar17.Data;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18[0].DebugPtr != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
    }
    bVar9 = FWorldMetricCollection::Contains
                      (&local_60,(TSubclassOf<UWorldMetricInterface> *)&local_res18[0].ObjectPtr);
    if (!bVar9) {
      pFVar11 = FAutomationTestFramework::Get();
      pwVar16 = L"Unexpected metric collection \'Contains\' failure.";
      goto LAB_14f145ec7;
    }
    local_res18[0].DebugPtr = *(UClass **)FVar17.Data;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18[0].DebugPtr != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
    }
    pUVar12 = FWorldMetricCollection::Get
                        (&local_60,(TSubclassOf<UWorldMetricInterface> *)&local_res18[0].ObjectPtr);
    if (pUVar12 == (UWorldMetricInterface *)0x0) goto LAB_14f145ead;
    uVar15 = (ulonglong)(uint)local_70.ArrayNum;
    FVar17.Data = FVar17.Data + 8;
    goto LAB_14f145e37;
  }
  iVar8 = local_60.Metrics.ArrayNum;
  pFVar2 = local_60.Metrics.AllocatorInstance.Data + (longlong)local_60.Metrics.ArrayNum * 8;
  FVar17.Data = local_60.Metrics.AllocatorInstance.Data;
  iVar20 = iVar18;
  iVar21 = iVar18;
  while( true ) {
    if (local_60.Metrics.ArrayNum != iVar8) {
      `TCheckedPointerIterator<TObjectPtr<UWorldMetricInterface>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (FVar17.Data == pFVar2) break;
    lVar6 = *(longlong *)FVar17.Data;
    iVar18 = iVar18 + 1;
    pUVar13 = UMockWorldMetricFooBase::StaticClass();
    lVar7 = *(longlong *)(lVar6 + 0x10);
    iVar3 = (int)pUVar13->_padding_;
    if ((iVar3 <= *(int *)(lVar7 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar13->_padding_)) {
      iVar21 = iVar21 + 1;
    }
    pUVar13 = UMockWorldMetricBarBase::StaticClass();
    lVar6 = *(longlong *)(lVar6 + 0x10);
    iVar3 = (int)pUVar13->_padding_;
    if ((iVar3 <= *(int *)(lVar6 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar13->_padding_)) {
      iVar20 = iVar20 + 1;
    }
    FVar17.Data = FVar17.Data + 8;
  }
  if (iVar18 == 8) {
    iVar18 = 0;
    iVar8 = local_60.Metrics.ArrayNum;
    pFVar2 = local_60.Metrics.AllocatorInstance.Data + (longlong)local_60.Metrics.ArrayNum * 8;
    FVar17.Data = local_60.Metrics.AllocatorInstance.Data;
    while( true ) {
      if (local_60.Metrics.ArrayNum != iVar8) {
        `TCheckedPointerIterator<TObjectPtr<UWorldMetricInterface>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (FVar17.Data == pFVar2) break;
      lVar6 = *(longlong *)FVar17.Data;
      if (lVar6 != 0) {
        pUVar13 = UMockWorldMetricFooBase::StaticClass();
        lVar6 = *(longlong *)(lVar6 + 0x10);
        iVar3 = (int)pUVar13->_padding_;
        if ((iVar3 <= *(int *)(lVar6 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar13->_padding_)) {
          iVar18 = iVar18 + 1;
        }
      }
      FVar17.Data = FVar17.Data + 8;
    }
    if (iVar18 == iVar21) {
      iVar8 = local_60.Metrics.ArrayNum;
      pFVar2 = local_60.Metrics.AllocatorInstance.Data + (longlong)local_60.Metrics.ArrayNum * 8;
      FVar17.Data = local_60.Metrics.AllocatorInstance.Data;
      while( true ) {
        if (local_60.Metrics.ArrayNum != iVar8) {
          `TCheckedPointerIterator<TObjectPtr<UWorldMetricInterface>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        this.Data = local_80.Data.AllocatorInstance.Data;
        if (FVar17.Data == pFVar2) break;
        lVar6 = *(longlong *)FVar17.Data;
        if (lVar6 == 0) {
LAB_14f146082:
          FVar17.Data = FVar17.Data + 8;
        }
        else {
          pUVar13 = UMockWorldMetricBarBase::StaticClass();
          lVar6 = *(longlong *)(lVar6 + 0x10);
          iVar18 = (int)pUVar13->_padding_;
          if ((*(int *)(lVar6 + 0x38) < iVar18) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar18 * 8) !=
              &pUVar13->_padding_)) goto LAB_14f146082;
          iVar19 = iVar19 + 1;
          FVar17.Data = FVar17.Data + 8;
        }
      }
      if (iVar19 == iVar20) {
        bVar9 = UWorldMetricsSubsystem::HasAnyMetric
                          ((UWorldMetricsSubsystem *)local_80.Data.AllocatorInstance.Data);
        if (bVar9) {
          pFVar11 = FAutomationTestFramework::Get();
          pwVar16 = L"Unexpected existing metrics in WorldMetricsSubsystem";
        }
        else {
          FWorldMetricCollection::Enable(&local_60,true);
          bVar9 = UWorldMetricsSubsystem::HasAnyMetric((UWorldMetricsSubsystem *)this.Data);
          if (bVar9) {
            iVar19 = UWorldMetricsSubsystem::NumMetrics((UWorldMetricsSubsystem *)this.Data);
            if (iVar19 == 8) {
              FWorldMetricCollection::Enable(&local_60,false);
              bVar9 = UWorldMetricsSubsystem::HasAnyMetric((UWorldMetricsSubsystem *)this.Data);
              iVar19 = local_70.ArrayNum;
              if (bVar9) {
                pFVar11 = FAutomationTestFramework::Get();
                pwVar16 = L"Unexpected existing metrics in WorldMetricsSubsystem";
              }
              else {
                uVar15 = (ulonglong)local_70.ArrayNum;
                pTVar1 = (TObjectPtr<UClass>_u_0 *)(local_70.AllocatorInstance.Data + uVar15 * 8);
                FVar17.Data = local_70.AllocatorInstance.Data;
                while( true ) {
                  if ((uint)uVar15 != iVar19) {
                    `TCheckedPointerIterator<TSubclassOf<UMockWorldMetricBase>,int,0>::operator!='::
                    __l2::<lambda_1>::operator()(local_res18);
                  }
                  if ((TObjectPtr<UClass>_u_0 *)FVar17.Data == pTVar1) {
                    bVar9 = FWorldMetricCollection::IsEmpty(&local_60);
                    if (bVar9) {
                      local_res18[0].DebugPtr = UMockWorldMetricA::StaticClass();
                      if ((GC::GIsIncrementalReachabilityPending != false) &&
                         (local_res18[0].DebugPtr != (UClass *)0x0)) {
                        GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
                      }
                      bVar9 = FWorldMetricCollection::Add
                                        (&local_60,
                                         (TSubclassOf<UWorldMetricInterface> *)
                                         &local_res18[0].ObjectPtr);
                      if (bVar9) {
                        local_res18[0].DebugPtr = UMockWorldMetricA::StaticClass();
                        if ((GC::GIsIncrementalReachabilityPending != false) &&
                           (local_res18[0].DebugPtr != (UClass *)0x0)) {
                          GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
                        }
                        bVar9 = FWorldMetricCollection::Contains
                                          (&local_60,
                                           (TSubclassOf<UWorldMetricInterface> *)
                                           &local_res18[0].ObjectPtr);
                        if (bVar9) {
                          local_res18[0].DebugPtr = UMockWorldMetricA::StaticClass();
                          if ((GC::GIsIncrementalReachabilityPending != false) &&
                             (local_res18[0].DebugPtr != (UClass *)0x0)) {
                            GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
                          }
                          pUVar12 = FWorldMetricCollection::Get
                                              (&local_60,
                                               (TSubclassOf<UWorldMetricInterface> *)
                                               &local_res18[0].ObjectPtr);
                          if (pUVar12 == (UWorldMetricInterface *)0x0) {
                            pFVar11 = FAutomationTestFramework::Get();
                            pwVar16 = 
                            L"Unexpected metric collection \'Get<UMockWorldMetricA>\' failure.";
                          }
                          else {
                            local_res18[0].DebugPtr = UMockWorldMetricA::StaticClass();
                            if ((GC::GIsIncrementalReachabilityPending != false) &&
                               (local_res18[0].DebugPtr != (UClass *)0x0)) {
                              GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
                            }
                            bVar9 = FWorldMetricCollection::Remove
                                              (&local_60,
                                               (TSubclassOf<UWorldMetricInterface> *)
                                               &local_res18[0].ObjectPtr);
                            if (bVar9) {
                              local_res18[0].DebugPtr = UMockWorldMetricA::StaticClass();
                              if ((GC::GIsIncrementalReachabilityPending != false) &&
                                 (local_res18[0].DebugPtr != (UClass *)0x0)) {
                                GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
                              }
                              pUVar12 = FWorldMetricCollection::GetOrAdd
                                                  (&local_60,
                                                   (TSubclassOf<UWorldMetricInterface> *)
                                                   &local_res18[0].ObjectPtr);
                              if (pUVar12 == (UWorldMetricInterface *)0x0) {
                                pFVar11 = FAutomationTestFramework::Get();
                                pwVar16 = 
                                L"Unexpected metric collection \'GetOrAdd<UMockWorldMetricA>\' failure."
                                ;
                              }
                              else {
                                local_res18[0].DebugPtr = UMockWorldMetricA::StaticClass();
                                if ((GC::GIsIncrementalReachabilityPending != false) &&
                                   (local_res18[0].DebugPtr != (UClass *)0x0)) {
                                  GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
                                }
                                pUVar14 = FWorldMetricCollection::GetOrAdd
                                                    (&local_60,
                                                     (TSubclassOf<UWorldMetricInterface> *)
                                                     &local_res18[0].ObjectPtr);
                                if (pUVar14 == (UWorldMetricInterface *)0x0) {
                                  pFVar11 = FAutomationTestFramework::Get();
                                  pwVar16 = 
                                  L"Unexpected metric collection \'GetOrAdd<UMockWorldMetricA>\' failure."
                                  ;
                                }
                                else {
                                  if (pUVar12 == pUVar14) {
                                    FWorldMetricCollection::Reset(&local_60);
                                    TestZeroState(param_1);
                                    goto LAB_14f1463a6;
                                  }
                                  pFVar11 = FAutomationTestFramework::Get();
                                  pwVar16 = L"Unexpected different metric instances.";
                                }
                              }
                            }
                            else {
                              pFVar11 = FAutomationTestFramework::Get();
                              pwVar16 = 
                              L"Unexpected metric collection \'Remove<UMockWorldMetricA>\' failure."
                              ;
                            }
                          }
                        }
                        else {
                          pFVar11 = FAutomationTestFramework::Get();
                          pwVar16 = 
                          L"Unexpected metric collection \'Contains<UMockWorldMetricA>\' failure.";
                        }
                      }
                      else {
                        pFVar11 = FAutomationTestFramework::Get();
                        pwVar16 = 
                        L"Unexpected metric collection \'Add<UMockWorldMetricA>\' failure.";
                      }
                    }
                    else {
                      pFVar11 = FAutomationTestFramework::Get();
                      pwVar16 = L"Unexpected populated metrics collection.";
                    }
                    goto LAB_14f14634c;
                  }
                  local_res18[0] = (TObjectPtr<UClass>_u_0)*(TObjectPtr<UClass>_u_0 *)FVar17.Data;
                  if ((GC::GIsIncrementalReachabilityPending != false) &&
                     (local_res18[0].DebugPtr != (UClass *)0x0)) {
                    GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
                  }
                  bVar9 = FWorldMetricCollection::Remove
                                    (&local_60,
                                     (TSubclassOf<UWorldMetricInterface> *)&local_res18[0].ObjectPtr
                                    );
                  if (!bVar9) break;
                  uVar15 = (ulonglong)(uint)local_70.ArrayNum;
                  FVar17.Data = FVar17.Data + 8;
                }
                pFVar11 = FAutomationTestFramework::Get();
                pwVar16 = L"Unexpected metric collection \'Remove\' failure.";
              }
            }
            else {
              pFVar11 = FAutomationTestFramework::Get();
              pwVar16 = L"Unexpected number of metrics in WorldMetricsSubsystem.";
            }
          }
          else {
            pFVar11 = FAutomationTestFramework::Get();
            pwVar16 = L"Unexpected non-existing metrics in WorldMetricsSubsystem";
          }
        }
      }
      else {
        pFVar11 = FAutomationTestFramework::Get();
        pwVar16 = L"Check count failed";
      }
    }
    else {
      pFVar11 = FAutomationTestFramework::Get();
      pwVar16 = L"Check count failed";
    }
  }
  else {
    pFVar11 = FAutomationTestFramework::Get();
    pwVar16 = L"Check count failed";
  }
LAB_14f14634c:
  pFVar4 = pFVar11->CurrentTest;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
  ::FString::FString(&local_80,pwVar16);
  (*pcVar5)(pFVar4,&local_80,0);
  if ((UWorldMetricsSubsystem *)local_80.Data.AllocatorInstance.Data !=
      (UWorldMetricsSubsystem *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  goto LAB_14f1463a6;
LAB_14f145ead:
  pFVar11 = FAutomationTestFramework::Get();
  pwVar16 = L"Unexpected metric collection \'Get\' failure.";
  goto LAB_14f145ec7;
}

// TestMultipleMetricIteration @ 14f1463f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::WorldMetrics::Private::TestMultipleMetricIteration(UWorld *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FAutomationTestBase *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FAutomationTestFramework *pFVar8;
  UWorldMetricsSubsystem *this;
  UClass *pUVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_118;
  int local_114;
  int local_110 [2];
  TArray<UMockWorldMetricBase_*,TSizedDefaultAllocator<32>_> local_108;
  TArray<TSubclassOf<UMockWorldMetricBase>,TSizedDefaultAllocator<32>_> local_f8;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  FString local_d8;
  code *local_c8;
  int **local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  int *local_78;
  int *local_70;
  int *local_68;
  TArrayView<TSubclassOf<UMockWorldMetricBase>,int> local_58;
  TArrayView<UMockWorldMetricBase_*,int> local_48;
  
  TestZeroState(param_1);
  GetMockMetricClasses(&local_f8,param_1,8,param_2);
  local_e8 = local_f8.AllocatorInstance.Data;
  if ((local_f8.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iStack_e0 = local_f8.ArrayNum;
  local_58.DataPtr = (TSubclassOf<UMockWorldMetricBase> *)local_e8;
  AddMockMetrics(&local_108,param_1,&local_58);
  if (local_108.ArrayNum == 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar4 = pFVar8->CurrentTest;
    pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
    ::FString::FString(&local_d8,L"Unexpected empty metrics list.");
    (*pcVar6)(pFVar4,&local_d8,0);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  else {
    this = UWorldMetricsSubsystem::Get(param_1);
    local_78 = &local_118;
    local_70 = &local_114;
    local_118 = 0;
    local_68 = local_110;
    local_c0 = &local_78;
    local_c8 = Core::Private::Function::
               TFunctionRefCaller<`UE::WorldMetrics::Private::TestMultipleMetricIteration'::__l6::<lambda_1>,bool,UWorldMetricInterface_const_*>
               ::Call;
    local_114 = 0;
    local_110[0] = 0;
    UWorldMetricsSubsystem::ForEachMetric
              (this,(TFunctionRef<bool___cdecl(UWorldMetricInterface_const_*)> *)&local_c8);
    if (local_118 == 8) {
      local_118 = 0;
      pFVar10 = (this->Metrics).AllocatorInstance.Data;
      iVar2 = (this->Metrics).ArrayNum;
      pFVar1 = pFVar10 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->Metrics).ArrayNum != iVar2) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UWorldMetricInterface>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar10 == pFVar1) break;
        lVar5 = *(longlong *)pFVar10;
        if (lVar5 != 0) {
          pUVar9 = UMockWorldMetricFooBase::StaticClass();
          lVar5 = *(longlong *)(lVar5 + 0x10);
          iVar3 = (int)pUVar9->_padding_;
          if ((iVar3 <= *(int *)(lVar5 + 0x38)) &&
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar9->_padding_)) {
            local_118 = local_118 + 1;
          }
        }
        pFVar10 = pFVar10 + 8;
      }
      if (local_118 == local_114) {
        local_118 = 0;
        pFVar10 = (this->Metrics).AllocatorInstance.Data;
        iVar2 = (this->Metrics).ArrayNum;
        pFVar1 = pFVar10 + (longlong)iVar2 * 8;
        while( true ) {
          if ((this->Metrics).ArrayNum != iVar2) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UWorldMetricInterface>_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res20);
          }
          if (pFVar10 == pFVar1) break;
          lVar5 = *(longlong *)pFVar10;
          if (lVar5 != 0) {
            pUVar9 = UMockWorldMetricBarBase::StaticClass();
            lVar5 = *(longlong *)(lVar5 + 0x10);
            iVar3 = (int)pUVar9->_padding_;
            if ((iVar3 <= *(int *)(lVar5 + 0x38)) &&
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) ==
                &pUVar9->_padding_)) {
              local_118 = local_118 + 1;
            }
          }
          pFVar10 = pFVar10 + 8;
        }
        if (local_118 == local_110[0]) {
          local_88 = local_108.AllocatorInstance.Data;
          if ((local_108.ArrayNum < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iStack_80 = local_108.ArrayNum;
          local_48.DataPtr = (UMockWorldMetricBase **)local_88;
          RemoveMockMetrics(param_1,&local_48,param_2);
          TestZeroState(param_1);
        }
        else {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar4 = pFVar8->CurrentTest;
          pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::FString(&local_98,L"Check count failed");
          (*pcVar6)(pFVar4,&local_98,0);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar4 = pFVar8->CurrentTest;
        pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::FString(&local_a8,L"Check count failed");
        (*pcVar6)(pFVar4,&local_a8,0);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar4 = pFVar8->CurrentTest;
      pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_b8,L"Check count failed");
      (*pcVar6)(pFVar4,&local_b8,0);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// TestMultipleMetricsAddRemove @ 14f1467c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::WorldMetrics::Private::TestMultipleMetricsAddRemove(UWorld *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestBase *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UWorldMetricsSubsystem *this;
  FAutomationTestFramework *pFVar8;
  ForAnyElementType FVar9;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<UMockWorldMetricBase_*,TSizedDefaultAllocator<32>_> local_f8;
  TArray<TSubclassOf<UMockWorldMetricBase>,TSizedDefaultAllocator<32>_> local_e8;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FScriptContainerElement *local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  TArrayView<TSubclassOf<UMockWorldMetricBase>,int> local_48;
  TArrayView<UMockWorldMetricBase_*,int> local_38;
  
  TestZeroState(param_1);
  this = UWorldMetricsSubsystem::Get(param_1);
  GetMockMetricClasses(&local_e8,param_1,5,param_2);
  local_d8 = local_e8.AllocatorInstance.Data;
  if (local_e8.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iStack_d0 = local_e8.ArrayNum;
  local_48.DataPtr = (TSubclassOf<UMockWorldMetricBase> *)local_d8;
  AddMockMetrics(&local_f8,param_1,&local_48);
  if (local_f8.ArrayNum == 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"Unexpected empty metrics list.");
    (*pcVar4)(pFVar2,&local_c8,0);
  }
  else if ((((this->UpdateTickerHandle).Object == (FElement *)0x0) ||
           (pTVar3 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
           pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)
          ) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar2 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_58,
                       L"WorldMetricsSubsystem should be enabled by default if there are metrics.");
    (*pcVar4)(pFVar2,&local_58,0);
    local_c8.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  }
  else {
    bVar6 = UWorldMetricsSubsystem::HasAnyMetric(this);
    if (bVar6) {
      iVar7 = UWorldMetricsSubsystem::NumMetrics(this);
      iVar5 = local_f8.ArrayNum;
      if (iVar7 == 5) {
        pFVar1 = local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayNum * 8;
        FVar9.Data = local_f8.AllocatorInstance.Data;
        iVar7 = local_f8.ArrayNum;
        while( true ) {
          if (iVar7 != iVar5) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<UMockWorldMetricBase_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
            iVar7 = local_f8.ArrayNum;
          }
          if (FVar9.Data == pFVar1) {
            local_88 = local_f8.AllocatorInstance.Data;
            if (iVar7 < 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L"");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            local_38.DataPtr = (UMockWorldMetricBase **)local_88;
            iVar7 = RemoveMockMetrics(param_1,&local_38,param_2);
            iVar5 = local_f8.ArrayNum;
            if (iVar7 != 5) {
              pFVar8 = FAutomationTestFramework::Get();
              pFVar2 = pFVar8->CurrentTest;
              pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_78,L"Unexpected metric remove count");
              (*pcVar4)(pFVar2,&local_78,0);
              local_c8.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
              goto LAB_14f146b18;
            }
            pFVar1 = local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayNum * 8;
            FVar9.Data = local_f8.AllocatorInstance.Data;
            iVar7 = local_f8.ArrayNum;
            goto LAB_14f146a80;
          }
          if (*(int *)(*(longlong *)FVar9.Data + 0x38) != 1) break;
          FVar9.Data = FVar9.Data + 8;
        }
        pFVar8 = FAutomationTestFramework::Get();
        pFVar2 = pFVar8->CurrentTest;
        pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_98,L"Test Metric initialization failed");
        (*pcVar4)(pFVar2,&local_98,0);
        local_c8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      }
      else {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar2 = pFVar8->CurrentTest;
        pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_a8,L"WorldMetricsSubsystem should have one metric.");
        (*pcVar4)(pFVar2,&local_a8,0);
        local_c8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      }
    }
    else {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar2 = pFVar8->CurrentTest;
      pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_b8,L"WorldMetricsSubsystem should have metrics.");
      (*pcVar4)(pFVar2,&local_b8,0);
      local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    }
  }
LAB_14f146b18:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
LAB_14f146b22:
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
LAB_14f146a80:
  if (iVar7 != iVar5) {
    `TCheckedPointerIterator<UMockWorldMetricBase_*,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res20);
    iVar7 = local_f8.ArrayNum;
  }
  if (FVar9.Data == pFVar1) {
    TestZeroState(param_1);
    goto LAB_14f146b22;
  }
  if (*(int *)(*(longlong *)FVar9.Data + 0x3c) != 1) goto LAB_14f146aa6;
  FVar9.Data = FVar9.Data + 8;
  goto LAB_14f146a80;
LAB_14f146aa6:
  pFVar8 = FAutomationTestFramework::Get();
  pFVar2 = pFVar8->CurrentTest;
  pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString(&local_68,L"Test Metric initialization failed");
  (*pcVar4)(pFVar2,&local_68,0);
  local_c8.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
  goto LAB_14f146b18;
}

// TestMultipleMetricsMultipleExtensionAcquireRelease @ 14f146b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::WorldMetrics::Private::TestMultipleMetricsMultipleExtensionAcquireRelease
          (UWorld *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FAutomationTestBase *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  UWorldMetricInterface *pUVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  FAutomationTestFramework *pFVar13;
  TArray<TSubclassOf<UMockWorldMetricsExtensionBase>,TSizedDefaultAllocator<32>_> *pTVar14;
  UWorld *pUVar15;
  UWorldMetricsSubsystem *pUVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  TArray<UMockWorldMetricBase_*,TSizedDefaultAllocator<32>_> local_140;
  longlong local_130;
  longlong local_128;
  TArray<int,TSizedDefaultAllocator<32>_> local_120;
  longlong local_110;
  TObjectPtr<UClass>_u_0 local_108;
  UWorldMetricsSubsystem *local_100;
  TArray<TSubclassOf<UMockWorldMetricBase>,TSizedDefaultAllocator<32>_> local_f8;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FScriptContainerElement *local_98;
  int iStack_90;
  FString local_88;
  TArrayView<TSubclassOf<UMockWorldMetricBase>,int> local_78;
  TArray<TSubclassOf<UMockWorldMetricsExtensionBase>,TSizedDefaultAllocator<32>_> local_68;
  TArrayView<UMockWorldMetricBase_*,int> local_58;
  
  TestZeroState(param_1);
  GetMockMetricClasses(&local_f8,param_1,5,param_2);
  local_e8 = local_f8.AllocatorInstance.Data;
  if ((local_f8.ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iStack_e0 = local_f8.ArrayNum;
  local_78.DataPtr = (TSubclassOf<UMockWorldMetricBase> *)local_e8;
  AddMockMetrics(&local_140,param_1,&local_78);
  if (local_140.ArrayNum == 0) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar6 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_d8,L"Unexpected empty metrics list.");
    (*pcVar6)(pFVar3,&local_d8,0);
    goto LAB_14f14714a;
  }
  local_150.Data = (FScriptContainerElement *)0x0;
  local_148 = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,5,&local_150,0,(int *)((longlong)&local_148 + 4));
  iVar12 = local_140.ArrayNum;
  pFVar1 = local_140.AllocatorInstance.Data + (longlong)local_140.ArrayNum * 8;
  FVar18.Data = local_140.AllocatorInstance.Data;
  while( true ) {
    if (local_140.ArrayNum != iVar12) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UMockWorldMetricBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (FVar18.Data == pFVar1) break;
    pTVar14 = AcquireMockMetricExtensions(&local_68,*(UMockWorldMetricBase **)FVar18.Data,5,param_2)
    ;
    iVar10 = (int)local_148;
    if ((int)local_148 == local_148._4_4_) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_150,(int *)((longlong)&local_148 + 4));
    }
    local_148 = CONCAT44(local_148._4_4_,iVar10 + 1);
    pFVar17 = local_150.Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)&pFVar17->field_0x0 = 0;
    *(FScriptContainerElement **)&pFVar17->field_0x0 = (pTVar14->AllocatorInstance).Data;
    (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar17 + 8) = pTVar14->ArrayNum;
    *(int *)(pFVar17 + 0xc) = pTVar14->ArrayMax;
    pTVar14->ArrayNum = 0;
    pTVar14->ArrayMax = 0;
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    FVar18.Data = FVar18.Data + 8;
  }
  local_100 = UWorldMetricsSubsystem::Get(param_1);
  if ((((local_100->UpdateTickerHandle).Object == (FElement *)0x0) ||
      (pTVar4 = (local_100->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    pFVar13 = FAutomationTestFramework::Get();
    pFVar3 = pFVar13->CurrentTest;
    pcVar6 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_88,
                       L"WorldMetricsSubsystem should be enabled by default if there are metrics.");
    (*pcVar6)(pFVar3,&local_88,0);
    local_c8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
LAB_14f147115:
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar9 = UWorldMetricsSubsystem::HasAnyExtension(local_100);
    if (!bVar9) {
      pFVar13 = FAutomationTestFramework::Get();
      pFVar3 = pFVar13->CurrentTest;
      pcVar6 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_c8,L"WorldMetricsSubsystem should have extensions.");
      (*pcVar6)(pFVar3,&local_c8,0);
      goto LAB_14f147115;
    }
    local_158 = 0;
    local_128 = 0;
    local_130 = 0;
    do {
      lVar8 = local_128;
      lVar7 = local_130;
      if (((int)local_148 <= local_158) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_110 = *(longlong *)(local_150.Data + lVar8);
      iVar12 = *(int *)(local_150.Data + lVar8 + 8);
      if ((iVar12 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((local_140.ArrayNum <= local_158) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar5 = *(UWorldMetricInterface **)(local_140.AllocatorInstance.Data + lVar7 * 8);
      if (pUVar5 != (UWorldMetricInterface *)0x0) {
        pUVar15 = (UWorld *)(**(code **)(*(longlong *)&pUVar5->field_0x0 + 0x180))(pUVar5);
        pUVar16 = UWorldMetricsSubsystem::Get(pUVar15);
        if (pUVar16 != (UWorldMetricsSubsystem *)0x0) {
          MakeIndexArray(&local_120,iVar12);
          if (param_2) {
            Shuffle<int>(&local_120);
          }
          iVar10 = local_120.ArrayNum;
          pFVar1 = local_120.AllocatorInstance.Data + (longlong)iVar10 * 4;
          FVar18.Data = local_120.AllocatorInstance.Data;
          while( true ) {
            if (local_120.ArrayNum != iVar10) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res20);
            }
            if (FVar18.Data == pFVar1) break;
            uVar2 = *(uint *)FVar18.Data;
            uVar11 = 0;
            if ((int)uVar2 < iVar12) {
              uVar11 = ~uVar2 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_108 = (TObjectPtr<UClass>_u_0)
                        ((TObjectPtr<UClass>_u_0 *)(local_110 + (longlong)(int)uVar2 * 8))->DebugPtr
            ;
            if ((GC::GIsIncrementalReachabilityPending != false) &&
               (local_108.DebugPtr != (UClass *)0x0)) {
              GC::MarkAsReachable((UObject *)local_108.DebugPtr);
            }
            UWorldMetricsSubsystem::ReleaseExtension
                      (pUVar16,pUVar5,(TSubclassOf<UWorldMetricsExtension> *)&local_108.ObjectPtr);
            FVar18.Data = FVar18.Data + 4;
          }
          if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.AllocatorInstance.Data);
          }
        }
      }
      pUVar16 = local_100;
      local_158 = local_158 + 1;
      local_130 = local_130 + 1;
      local_128 = local_128 + 0x10;
    } while (local_158 < 5);
    bVar9 = UWorldMetricsSubsystem::HasAnyExtension(local_100);
    if (bVar9) {
      pFVar13 = FAutomationTestFramework::Get();
      pFVar3 = pFVar13->CurrentTest;
      pcVar6 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_b8,L"WorldMetricsSubsystem shouldn\'t be have any extension.");
      (*pcVar6)(pFVar3,&local_b8,0);
      local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      goto LAB_14f147115;
    }
    iVar12 = UWorldMetricsSubsystem::NumExtensions(pUVar16);
    if (iVar12 != 0) {
      pFVar13 = FAutomationTestFramework::Get();
      pFVar3 = pFVar13->CurrentTest;
      pcVar6 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_a8,L"WorldMetricsSubsystem should have zero extensions.");
      (*pcVar6)(pFVar3,&local_a8,0);
      local_c8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      goto LAB_14f147115;
    }
    local_98 = local_140.AllocatorInstance.Data;
    if ((local_140.ArrayNum < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iStack_90 = local_140.ArrayNum;
    local_58.DataPtr = (UMockWorldMetricBase **)local_98;
    RemoveMockMetrics(param_1,&local_58,param_2);
    TestZeroState(param_1);
  }
  DestructItems<TArray<TSubclassOf<UMockWorldMetricsExtensionBase>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TSubclassOf<UMockWorldMetricsExtensionBase>,TSizedDefaultAllocator<32>_> *)
             local_150.Data,(int)local_148);
  local_d8.Data.AllocatorInstance.Data = local_150.Data;
LAB_14f14714a:
  if ((TArray<TSubclassOf<UMockWorldMetricsExtensionBase>,TSizedDefaultAllocator<32>_> *)
      local_d8.Data.AllocatorInstance.Data !=
      (TArray<TSubclassOf<UMockWorldMetricsExtensionBase>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// TestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval @ 14f1471a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::WorldMetrics::Private::TestMultipleMetricsMultipleExtensionAutoReleaseOnRemoval
          (UWorld *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestBase *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  FAutomationTestFramework *pFVar7;
  UWorldMetricsSubsystem *this;
  ForAnyElementType FVar8;
  undefined1 local_res18 [8];
  TArray<UMockWorldMetricBase_*,TSizedDefaultAllocator<32>_> local_b8;
  TArray<TSubclassOf<UMockWorldMetricBase>,TSizedDefaultAllocator<32>_> local_a8;
  FScriptContainerElement *local_98;
  int iStack_90;
  FString local_88;
  FString local_78;
  FScriptContainerElement *local_68;
  int iStack_60;
  FString local_58;
  TArrayView<TSubclassOf<UMockWorldMetricBase>,int> local_48;
  TArray<TSubclassOf<UMockWorldMetricsExtensionBase>,TSizedDefaultAllocator<32>_> local_38;
  TArrayView<UMockWorldMetricBase_*,int> local_28;
  
  TestZeroState(param_1);
  GetMockMetricClasses(&local_a8,param_1,5,param_2);
  local_98 = local_a8.AllocatorInstance.Data;
  if (local_a8.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iStack_90 = local_a8.ArrayNum;
  local_48.DataPtr = (TSubclassOf<UMockWorldMetricBase> *)local_98;
  AddMockMetrics(&local_b8,param_1,&local_48);
  iVar5 = local_b8.ArrayNum;
  if (local_b8.ArrayNum == 0) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_88,L"Unexpected empty metrics list.");
    (*pcVar4)(pFVar2,&local_88,0);
  }
  else {
    pFVar1 = local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayNum * 8;
    FVar8.Data = local_b8.AllocatorInstance.Data;
    while( true ) {
      if (local_b8.ArrayNum != iVar5) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UMockWorldMetricBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (FVar8.Data == pFVar1) break;
      AcquireMockMetricExtensions(&local_38,*(UMockWorldMetricBase **)FVar8.Data,5,param_2);
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      FVar8.Data = FVar8.Data + 8;
    }
    this = UWorldMetricsSubsystem::Get(param_1);
    if ((((this->UpdateTickerHandle).Object == (FElement *)0x0) ||
        (pTVar3 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
        pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar2 = pFVar7->CurrentTest;
      pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_58,
                         L"WorldMetricsSubsystem should be enabled by default if there are metrics."
                        );
      (*pcVar4)(pFVar2,&local_58,0);
      local_88.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
    else {
      bVar6 = UWorldMetricsSubsystem::HasAnyExtension(this);
      if (bVar6) {
        local_68 = local_b8.AllocatorInstance.Data;
        if (local_b8.ArrayNum < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iStack_60 = local_b8.ArrayNum;
        local_28.DataPtr = (UMockWorldMetricBase **)local_68;
        RemoveMockMetrics(param_1,&local_28,param_2);
        TestZeroState(param_1);
        goto LAB_14f1473e3;
      }
      pFVar7 = FAutomationTestFramework::Get();
      pFVar2 = pFVar7->CurrentTest;
      pcVar4 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_78,L"WorldMetricsSubsystem should have extensions.");
      (*pcVar4)(pFVar2,&local_78,0);
      local_88.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    }
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_14f1473e3:
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// TestMultipleMetricsSingleExtensionAcquireRelease @ 14f147430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::WorldMetrics::Private::TestMultipleMetricsSingleExtensionAcquireRelease
          (UWorld *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestBase *pFVar2;
  UWorldMetricInterface *pUVar3;
  undefined8 uVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FAutomationTestFramework *pFVar10;
  UWorldMetricsSubsystem *this;
  UWorldMetricsExtension *pUVar11;
  int iVar12;
  int iVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<UMockWorldMetricBase_*,TSizedDefaultAllocator<32>_> local_168;
  UWorldMetricsSubsystem *local_158;
  TObjectPtr<UClass>_u_0 local_150;
  TObjectPtr<UClass>_u_0 local_148;
  TObjectPtr<UClass>_u_0 local_140;
  TArray<TSubclassOf<UMockWorldMetricBase>,TSizedDefaultAllocator<32>_> local_138;
  FScriptContainerElement *local_128;
  int iStack_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FScriptContainerElement *local_88;
  TArrayView<TSubclassOf<UMockWorldMetricBase>,int> local_78;
  TArrayView<UMockWorldMetricBase_*,int> local_68 [2];
  
  TestZeroState(param_1);
  GetMockMetricClasses(&local_138,param_1,5,param_2);
  local_128 = local_138.AllocatorInstance.Data;
  if ((local_138.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iStack_120 = local_138.ArrayNum;
  local_78.DataPtr = (TSubclassOf<UMockWorldMetricBase> *)local_128;
  AddMockMetrics(&local_168,param_1,&local_78);
  if (local_168.ArrayNum == 0) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar2 = pFVar10->CurrentTest;
    pcVar5 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_118,L"Unexpected empty metrics list.");
    (*pcVar5)(pFVar2,&local_118,0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  else {
    this = UWorldMetricsSubsystem::Get(param_1);
    uVar17 = 0;
    local_158 = this;
    if ((local_168.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar3 = *(UWorldMetricInterface **)local_168.AllocatorInstance.Data;
    local_150.DebugPtr = UMockWorldMetricsExtensionA::StaticClass();
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_150.DebugPtr != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)local_150.DebugPtr);
    }
    pUVar11 = UWorldMetricsSubsystem::AcquireExtension
                        (this,pUVar3,(TSubclassOf<UWorldMetricsExtension> *)&local_150.ObjectPtr);
    iVar12 = local_168.ArrayNum;
    iVar18 = 1;
    pFVar1 = local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 8;
    FVar14.Data = local_168.AllocatorInstance.Data;
    while( true ) {
      if (local_168.ArrayNum != iVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UMockWorldMetricBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      fVar6 = __real_38000100;
      if (FVar14.Data == pFVar1) break;
      pUVar3 = *(UWorldMetricInterface **)FVar14.Data;
      local_148.DebugPtr = UMockWorldMetricsExtensionA::StaticClass();
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_148.DebugPtr != (UClass *)0x0))
      {
        GC::MarkAsReachable((UObject *)local_148.DebugPtr);
      }
      UWorldMetricsSubsystem::AcquireExtension
                (local_158,pUVar3,(TSubclassOf<UWorldMetricsExtension> *)&local_148.ObjectPtr);
      if (pUVar11 == (UWorldMetricsExtension *)0x0) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar2 = pFVar10->CurrentTest;
        pcVar5 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_e8,L"Acquire Test Extension failed.");
        (*pcVar5)(pFVar2,&local_e8,0);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        goto LAB_14f147adf;
      }
      if (*(int *)(pUVar11 + 1) != 1) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar2 = pFVar10->CurrentTest;
        pcVar5 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_f8,L"Test Extension initialization failed");
        (*pcVar5)(pFVar2,&local_f8,0);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        goto LAB_14f147adf;
      }
      iVar18 = iVar18 + 1;
      if (*(int *)&pUVar11[1].field_0x8 != iVar18) goto LAB_14f14765e;
      FVar14.Data = FVar14.Data + 8;
    }
    iVar12 = local_168.ArrayNum;
    if (((param_2) && (1 < local_168.ArrayNum)) &&
       (uVar15 = uVar17, uVar16 = uVar17, 0 < local_168.ArrayNum)) {
      do {
        iVar13 = (int)uVar15;
        iVar19 = iVar12 - iVar13;
        iVar18 = 0;
        if (0 < iVar19) {
          uVar8 = rand();
          iVar9 = (int)((float)(uVar8 & 0x7fff) * (float)iVar19 * fVar6);
          iVar18 = iVar19 + -1;
          iVar12 = local_168.ArrayNum;
          if (iVar9 < iVar19 + -1) {
            iVar18 = iVar9;
          }
        }
        iVar18 = iVar18 + iVar13;
        if (iVar13 != iVar18) {
          if ((((longlong)uVar16 < 0) || (iVar18 < 0)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0xce6,L""), iVar12 = local_168.ArrayNum, bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((iVar12 <= iVar13) || (iVar12 <= iVar18)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0xce7,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar4 = *(undefined8 *)(local_168.AllocatorInstance.Data + uVar16 * 8);
          *(undefined8 *)(local_168.AllocatorInstance.Data + uVar16 * 8) =
               *(undefined8 *)(local_168.AllocatorInstance.Data + (longlong)iVar18 * 8);
          *(undefined8 *)(local_168.AllocatorInstance.Data + (longlong)iVar18 * 8) = uVar4;
          iVar12 = local_168.ArrayNum;
        }
        uVar15 = (ulonglong)(iVar13 + 1U);
        uVar16 = uVar16 + 1;
      } while ((int)(iVar13 + 1U) < iVar12);
    }
    pFVar1 = local_168.AllocatorInstance.Data + (longlong)iVar12 * 8;
    FVar14.Data = local_168.AllocatorInstance.Data;
    iVar18 = iVar12;
    while( true ) {
      if (iVar18 != iVar12) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UMockWorldMetricBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
        iVar18 = local_168.ArrayNum;
      }
      if (FVar14.Data == pFVar1) break;
      pUVar3 = *(UWorldMetricInterface **)FVar14.Data;
      if (*(int *)&pUVar11[1].field_0x4 != 0) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar2 = pFVar10->CurrentTest;
        pcVar5 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_a8,L"Test Extension unexpected deinitialization");
        (*pcVar5)(pFVar2,&local_a8,0);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        goto LAB_14f147adf;
      }
      local_140.DebugPtr = UMockWorldMetricsExtensionA::StaticClass();
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_140.DebugPtr != (UClass *)0x0))
      {
        GC::MarkAsReachable((UObject *)local_140.DebugPtr);
      }
      UWorldMetricsSubsystem::ReleaseExtension
                (local_158,pUVar3,(TSubclassOf<UWorldMetricsExtension> *)&local_140.ObjectPtr);
      if (pUVar11 == (UWorldMetricsExtension *)0x0) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar2 = pFVar10->CurrentTest;
        pcVar5 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_b8,L"Acquire Test Extension failed.");
        (*pcVar5)(pFVar2,&local_b8,0);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        goto LAB_14f147adf;
      }
      if (*(int *)(pUVar11 + 1) != 1) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar2 = pFVar10->CurrentTest;
        pcVar5 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_c8,L"Test Extension initialization failed");
        (*pcVar5)(pFVar2,&local_c8,0);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        goto LAB_14f147adf;
      }
      uVar8 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar8;
      if (*(uint *)&pUVar11[1].field_0xc != uVar8) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar2 = pFVar10->CurrentTest;
        pcVar5 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_d8,L"Test Extension initialization failed");
        (*pcVar5)(pFVar2,&local_d8,0);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        goto LAB_14f147adf;
      }
      FVar14.Data = FVar14.Data + 8;
      iVar18 = local_168.ArrayNum;
    }
    if (*(int *)&pUVar11[1].field_0x4 == 1) {
      local_88 = local_168.AllocatorInstance.Data;
      if ((iVar18 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_68[0].DataPtr = (UMockWorldMetricBase **)local_88;
      RemoveMockMetrics(param_1,local_68,param_2);
      TestZeroState(param_1);
    }
    else {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar2 = pFVar10->CurrentTest;
      pcVar5 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_98,L"Test Extension initialization failed");
      (*pcVar5)(pFVar2,&local_98,0);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_14f147adf:
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  return;
LAB_14f14765e:
  pFVar10 = FAutomationTestFramework::Get();
  pFVar2 = pFVar10->CurrentTest;
  pcVar5 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString(&local_108,L"Test Extension initialization failed");
  (*pcVar5)(pFVar2,&local_108,0);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  goto LAB_14f147adf;
}

// TestMultipleMetricsSingleExtensionAcquireReleaseChildExtension @ 14f147b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::WorldMetrics::Private::TestMultipleMetricsSingleExtensionAcquireReleaseChildExtension
          (UWorld *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  UWorldMetricsSubsystem *this;
  UWorldMetricInterface *this_00;
  FAutomationTestFramework *pFVar6;
  UWorldMetricInterface *this_01;
  undefined8 *puVar7;
  ulong64 uVar8;
  UWorldMetricsSubsystem *pUVar9;
  UMockWorldMetricsExtensionA *pUVar10;
  UWorldMetricsExtension *pUVar11;
  wchar_t *pwVar12;
  longlong local_res10;
  TObjectPtr<UClass>_u_0 local_res18;
  TObjectPtr<UClass>_u_0 local_res20;
  TObjectPtr<UClass>_u_0 local_98;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  TDelegate<void___cdecl(UWorldMetricsExtension_*,bool),FDefaultDelegateUserPolicy> *local_58;
  undefined1 local_50 [8];
  ForAnyElementType FStack_48;
  int local_40;
  
  TestZeroState(param_1);
  this = UWorldMetricsSubsystem::Get(param_1);
  local_res18.DebugPtr = UMockWorldMetricA::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res18.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  this_00 = UWorldMetricsSubsystem::AddMetric
                      (this,(TSubclassOf<UWorldMetricInterface> *)&local_res18.ObjectPtr);
  bVar4 = UWorldMetricsSubsystem::ContainsMetric(this,this_00);
  if (!bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_90,L"ContainsMetric failed");
    (*pcVar2)(pFVar1,local_90,0);
    if ((atomic<unsigned___int64>)local_90 == (atomic<unsigned___int64>)0x0) {
      return;
    }
    FMemory::Free((void *)local_90);
    return;
  }
  local_res20.DebugPtr = UMockWorldMetricB::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res20.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
  }
  this_01 = UWorldMetricsSubsystem::AddMetric
                      (this,(TSubclassOf<UWorldMetricInterface> *)&local_res20.ObjectPtr);
  bVar4 = UWorldMetricsSubsystem::ContainsMetric(this,this_01);
  if (!bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pwVar12 = L"ContainsMetric failed";
LAB_14f14804f:
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)local_90,pwVar12);
    (*pcVar2)(pFVar1,local_90,0);
    if ((atomic<unsigned___int64>)local_90 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_90);
    }
    return;
  }
  if ((((this->UpdateTickerHandle).Object == (FElement *)0x0) ||
      (pTVar3 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    pFVar6 = FAutomationTestFramework::Get();
    pwVar12 = L"WorldMetricsSubsystem should be enabled by default if there are metrics.";
    goto LAB_14f14804f;
  }
  local_res10 = 0;
  local_90 = (undefined1  [8])0x0;
  local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_88.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_78);
  local_60 = &local_88;
  puVar7 = Core::Private::DelegateAllocate(0x20,&local_88);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorldMetricsExtension___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(UWorldMetricsExtension_*,bool),FDefaultDelegateUserPolicy,`UE::WorldMetrics::Private::TestMultipleMetricsSingleExtensionAcquireReleaseChildExtension'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = &local_res10;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  local_40 = 0;
  local_58 = &UMockWorldMetricsExtensionBase::OnInitializeDeinitialize;
  local_50 = (undefined1  [8])0x0;
  FStack_48.Data = (FScriptContainerElement *)0x0;
  TDelegate<void___cdecl(UWorldMetricsExtension_*,bool),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(UWorldMetricsExtension_*,bool),FDefaultDelegateUserPolicy> *)
             local_50,&UMockWorldMetricsExtensionBase::OnInitializeDeinitialize);
  TDelegate<void___cdecl(UWorldMetricsExtension_*,bool),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (local_58,(TDelegate<void___cdecl(UWorldMetricsExtension_*,bool),FDefaultDelegateUserPolicy>
                       *)local_90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_78);
  if ((local_88.DelegateSize != 0) &&
     (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_88,0,0,0x10);
    local_88.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_88.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  pUVar9 = UWorldMetricInterface::GetOwner(this_00);
  pUVar10 = UWorldMetricsSubsystem::AcquireExtension<UMockWorldMetricsExtensionA>(pUVar9,this_00);
  if (pUVar10 == (UMockWorldMetricsExtensionA *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pwVar12 = L"Acquire Test Extension A failed.";
  }
  else if (*(int *)&pUVar10->field_0x28 == 1) {
    bVar4 = UWorldMetricsSubsystem::HasAnyExtension(this);
    if (bVar4) {
      iVar5 = UWorldMetricsSubsystem::NumExtensions(this);
      if (iVar5 == 1) {
        pUVar9 = UWorldMetricInterface::GetOwner(this_01);
        local_98.DebugPtr = UMockWorldMetricsExtensionB::StaticClass();
        if ((GC::GIsIncrementalReachabilityPending != false) && (local_98.DebugPtr != (UClass *)0x0)
           ) {
          GC::MarkAsReachable((UObject *)local_98.DebugPtr);
        }
        pUVar11 = UWorldMetricsSubsystem::AcquireExtension
                            (pUVar9,this_01,
                             (TSubclassOf<UWorldMetricsExtension> *)&local_98.ObjectPtr);
        if (pUVar11 == (UWorldMetricsExtension *)0x0) {
          pFVar6 = FAutomationTestFramework::Get();
          pwVar12 = L"Acquire Test Extension B failed.";
        }
        else if (*(int *)(pUVar11 + 1) == 1) {
          if (local_res10 == 0) {
            pFVar6 = FAutomationTestFramework::Get();
            pwVar12 = L"Acquire Test Extension C failed.";
          }
          else if (*(int *)(local_res10 + 0x28) == 1) {
            bVar4 = UWorldMetricsSubsystem::HasAnyExtension(this);
            if (bVar4) {
              iVar5 = UWorldMetricsSubsystem::NumExtensions(this);
              if (iVar5 == 3) {
                pUVar9 = UWorldMetricInterface::GetOwner(this_00);
                bVar4 = UWorldMetricsSubsystem::ReleaseExtension<UMockWorldMetricsExtensionA>
                                  (pUVar9,this_00);
                if (bVar4) {
                  if (*(int *)&pUVar10->field_0x2c == 1) {
                    pUVar9 = UWorldMetricInterface::GetOwner(this_01);
                    local_90 = (undefined1  [8])UMockWorldMetricsExtensionB::StaticClass();
                    if ((GC::GIsIncrementalReachabilityPending != false) &&
                       ((atomic<unsigned___int64>)local_90 != (atomic<unsigned___int64>)0x0)) {
                      GC::MarkAsReachable((UObject *)local_90);
                    }
                    bVar4 = UWorldMetricsSubsystem::ReleaseExtension
                                      (pUVar9,this_01,
                                       (TSubclassOf<UWorldMetricsExtension> *)local_90);
                    if (bVar4) {
                      if (*(int *)&pUVar11[1].field_0x4 == 1) {
                        if (*(int *)(local_res10 + 0x2c) == 1) {
                          UWorldMetricsSubsystem::RemoveMetric(this,this_01);
                          UWorldMetricsSubsystem::RemoveMetric(this,this_00);
                          TestZeroState(param_1);
                          goto LAB_14f147fbb;
                        }
                        pFVar6 = FAutomationTestFramework::Get();
                        pwVar12 = L"Test Extension C deinitialization failed after release.";
                      }
                      else {
                        pFVar6 = FAutomationTestFramework::Get();
                        pwVar12 = L"Test Extension B deinitialization failed after release.";
                      }
                    }
                    else {
                      pFVar6 = FAutomationTestFramework::Get();
                      pwVar12 = L"Test Extension B release failed.";
                    }
                  }
                  else {
                    pFVar6 = FAutomationTestFramework::Get();
                    pwVar12 = L"Test Extension deinitialization failed after release.";
                  }
                }
                else {
                  pFVar6 = FAutomationTestFramework::Get();
                  pwVar12 = L"Test Extension release failed.";
                }
              }
              else {
                pFVar6 = FAutomationTestFramework::Get();
                pwVar12 = L"WorldMetricsSubsystem should have 3 extensions.";
              }
            }
            else {
              pFVar6 = FAutomationTestFramework::Get();
              pwVar12 = L"WorldMetricsSubsystem should have extensions.";
            }
          }
          else {
            pFVar6 = FAutomationTestFramework::Get();
            pwVar12 = L"Test Extension C initialization failed";
          }
        }
        else {
          pFVar6 = FAutomationTestFramework::Get();
          pwVar12 = L"Test Extension B initialization failed";
        }
      }
      else {
        pFVar6 = FAutomationTestFramework::Get();
        pwVar12 = L"WorldMetricsSubsystem should have 1 extension.";
      }
    }
    else {
      pFVar6 = FAutomationTestFramework::Get();
      pwVar12 = L"WorldMetricsSubsystem should have extensions.";
    }
  }
  else {
    pFVar6 = FAutomationTestFramework::Get();
    pwVar12 = L"Test Extension A initialization failed";
  }
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString((FString *)local_90,pwVar12);
  (*pcVar2)(pFVar1,local_90);
  if ((atomic<unsigned___int64>)local_90 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_90);
  }
LAB_14f147fbb:
  TDelegate<void___cdecl(UWorldMetricsExtension_*,bool),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (local_58,(TDelegate<void___cdecl(UWorldMetricsExtension_*,bool),FDefaultDelegateUserPolicy>
                       *)local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
             (FWriteAccessScope *)&local_78);
  if ((local_40 != 0) && (FStack_48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_50);
  return;
}

// TestSingleMetricAddRemove @ 14f1480b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::WorldMetrics::Private::TestSingleMetricAddRemove(UWorld *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  UWorldMetricsSubsystem *this;
  UWorldMetricInterface *pUVar6;
  FAutomationTestFramework *pFVar7;
  UMockWorldMetricA *pUVar8;
  wchar_t *pwVar9;
  TObjectPtr<UClass>_u_0 local_res10;
  FString local_28;
  
  TestZeroState(param_1);
  this = UWorldMetricsSubsystem::Get(param_1);
  local_res10.DebugPtr = Z_Construct_UClass_UObject_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res10.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
  }
  pUVar6 = UWorldMetricsSubsystem::AddMetric
                     (this,(TSubclassOf<UWorldMetricInterface> *)&local_res10.ObjectPtr);
  if (pUVar6 == (UWorldMetricInterface *)0x0) {
    local_res10.DebugPtr = UMockWorldMetricA::StaticClass();
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_res10.DebugPtr != (UClass *)0x0))
    {
      GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
    }
    pUVar6 = UWorldMetricsSubsystem::AddMetric
                       (this,(TSubclassOf<UWorldMetricInterface> *)&local_res10.ObjectPtr);
    bVar4 = UWorldMetricsSubsystem::ContainsMetric(this,pUVar6);
    if (bVar4) {
      if (*(int *)&pUVar6[1].field_0x10 == 1) {
        if ((((this->UpdateTickerHandle).Object == (FElement *)0x0) ||
            (pTVar3 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
            pTVar3 == (TReferenceControllerBase<1> *)0x0)) ||
           ((int)pTVar3->SharedReferenceCount < 1)) {
          pFVar7 = FAutomationTestFramework::Get();
          pwVar9 = L"WorldMetricsSubsystem should be enabled by default if there are metrics.";
        }
        else {
          bVar4 = UWorldMetricsSubsystem::HasAnyMetric(this);
          if (bVar4) {
            iVar5 = UWorldMetricsSubsystem::NumMetrics(this);
            if (iVar5 == 1) {
              bVar4 = UWorldMetricsSubsystem::AddMetric(this,pUVar6);
              if (!bVar4) {
                pUVar8 = UWorldMetricsSubsystem::AddMetric<UMockWorldMetricA>(this);
                bVar4 = UWorldMetricsSubsystem::ContainsMetric(this,(UWorldMetricInterface *)pUVar8)
                ;
                if (bVar4) {
                  iVar5 = UWorldMetricsSubsystem::NumMetrics(this);
                  if (iVar5 == 2) {
                    bVar4 = UWorldMetricsSubsystem::RemoveMetric(this,pUVar6);
                    if (bVar4) {
                      if (*(int *)&pUVar6[1].field_0x14 == 1) {
                        bVar4 = UWorldMetricsSubsystem::RemoveMetric(this,pUVar6);
                        if ((!bVar4) &&
                           (bVar4 = UWorldMetricsSubsystem::RemoveMetric
                                              (this,(UWorldMetricInterface *)pUVar8), bVar4)) {
                          if (*(int *)&pUVar8->field_0x3c != 1) {
                            pFVar7 = FAutomationTestFramework::Get();
                            pwVar9 = L"Test Metric deinitialization failed after release.";
                            goto LAB_14f1482ff;
                          }
                          bVar4 = UWorldMetricsSubsystem::RemoveMetric
                                            (this,(UWorldMetricInterface *)pUVar8);
                          if (!bVar4) {
                            TestZeroState(param_1);
                            return;
                          }
                        }
                        pFVar7 = FAutomationTestFramework::Get();
                        pwVar9 = L"Unexpected RemoveMetric.";
                      }
                      else {
                        pFVar7 = FAutomationTestFramework::Get();
                        pwVar9 = L"Test Metric deinitialization failed after release.";
                      }
                    }
                    else {
                      pFVar7 = FAutomationTestFramework::Get();
                      pwVar9 = L"RemoveMetric failed.";
                    }
                  }
                  else {
                    pFVar7 = FAutomationTestFramework::Get();
                    pwVar9 = L"WorldMetricsSubsystem should have one metric.";
                  }
                }
                else {
                  pFVar7 = FAutomationTestFramework::Get();
                  pwVar9 = L"ContainsMetric failed";
                }
LAB_14f1482ff:
                pFVar1 = pFVar7->CurrentTest;
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::FString(&local_28,pwVar9);
                (*pcVar2)(pFVar1,&local_28,0);
                if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                  return;
                }
                FMemory::Free(local_28.Data.AllocatorInstance.Data);
                return;
              }
              pFVar7 = FAutomationTestFramework::Get();
              pwVar9 = L"Unexpected AddMetric";
            }
            else {
              pFVar7 = FAutomationTestFramework::Get();
              pwVar9 = L"WorldMetricsSubsystem should have one metric.";
            }
          }
          else {
            pFVar7 = FAutomationTestFramework::Get();
            pwVar9 = L"WorldMetricsSubsystem should have metrics.";
          }
        }
      }
      else {
        pFVar7 = FAutomationTestFramework::Get();
        pwVar9 = L"Test Metric initialization failed";
      }
    }
    else {
      pFVar7 = FAutomationTestFramework::Get();
      pwVar9 = L"ContainsMetric failed";
    }
  }
  else {
    pFVar7 = FAutomationTestFramework::Get();
    pwVar9 = L"AddMetric should fail";
  }
  pFVar1 = pFVar7->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_28,pwVar9);
  (*pcVar2)(pFVar1,&local_28,0);
  if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_28.Data.AllocatorInstance.Data);
  return;
}

// TestSingleMetricOrphanExtensionAutoRemoval @ 14f148370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::WorldMetrics::Private::TestSingleMetricOrphanExtensionAutoRemoval(UWorld *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  UWorldMetricsSubsystem *this;
  UWorldMetricInterface *pUVar6;
  FAutomationTestFramework *pFVar7;
  UWorldMetricsExtension *pUVar8;
  UWorldMetricsExtension *pUVar9;
  wchar_t *pwVar10;
  TObjectPtr<UClass>_u_0 local_res10;
  TObjectPtr<UClass>_u_0 local_res18;
  TObjectPtr<UClass>_u_0 local_res20;
  FString local_38;
  
  TestZeroState(param_1);
  this = UWorldMetricsSubsystem::Get(param_1);
  local_res10.DebugPtr = UMockWorldMetricA::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res10.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
  }
  pUVar6 = UWorldMetricsSubsystem::AddMetric
                     (this,(TSubclassOf<UWorldMetricInterface> *)&local_res10.ObjectPtr);
  bVar4 = UWorldMetricsSubsystem::ContainsMetric(this,pUVar6);
  if (bVar4) {
    local_res18.DebugPtr = UMockWorldMetricsExtensionA::StaticClass();
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_res18.DebugPtr != (UClass *)0x0))
    {
      GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
    }
    pUVar8 = UWorldMetricsSubsystem::AcquireExtension
                       (this,pUVar6,(TSubclassOf<UWorldMetricsExtension> *)&local_res18.ObjectPtr);
    if (pUVar8 == (UWorldMetricsExtension *)0x0) {
      pFVar7 = FAutomationTestFramework::Get();
      pwVar10 = L"Acquire Test Extension failed.";
    }
    else {
      if (*(int *)(pUVar8 + 1) == 1) {
        local_res20.DebugPtr = UMockWorldMetricsExtensionB::StaticClass();
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (local_res20.DebugPtr != (UClass *)0x0)) {
          GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
        }
        pUVar9 = UWorldMetricsSubsystem::AcquireExtension
                           (this,pUVar8,
                            (TSubclassOf<UWorldMetricsExtension> *)&local_res20.ObjectPtr);
        if (pUVar9 == (UWorldMetricsExtension *)0x0) {
          pFVar7 = FAutomationTestFramework::Get();
          pwVar10 = L"Acquire Test Extension failed.";
        }
        else if (*(int *)(pUVar9 + 1) == 1) {
          if ((((this->UpdateTickerHandle).Object == (FElement *)0x0) ||
              (pTVar3 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
              pTVar3 == (TReferenceControllerBase<1> *)0x0)) ||
             ((int)pTVar3->SharedReferenceCount < 1)) {
            pFVar7 = FAutomationTestFramework::Get();
            pwVar10 = L"WorldMetricsSubsystem should be enabled by default if there are metrics.";
          }
          else {
            bVar4 = UWorldMetricsSubsystem::HasAnyExtension(this);
            if (bVar4) {
              iVar5 = UWorldMetricsSubsystem::NumExtensions(this);
              if (iVar5 == 2) {
                UWorldMetricsSubsystem::RemoveMetric(this,pUVar6);
                if (*(int *)&pUVar8[1].field_0x4 == 1) {
                  if (*(int *)&pUVar9[1].field_0x4 == 1) {
                    bVar4 = UWorldMetricsSubsystem::HasAnyExtension(this);
                    if (!bVar4) {
                      TestZeroState(param_1);
                      return;
                    }
                    pFVar7 = FAutomationTestFramework::Get();
                    pwVar10 = L"WorldMetricsSubsystem shouldn\'t have any extensions.";
                  }
                  else {
                    pFVar7 = FAutomationTestFramework::Get();
                    pwVar10 = L"Test Extension deinitialization failed after release.";
                  }
                }
                else {
                  pFVar7 = FAutomationTestFramework::Get();
                  pwVar10 = L"Test Extension deinitialization failed after release.";
                }
              }
              else {
                pFVar7 = FAutomationTestFramework::Get();
                pwVar10 = L"WorldMetricsSubsystem should have one extension.";
              }
            }
            else {
              pFVar7 = FAutomationTestFramework::Get();
              pwVar10 = L"WorldMetricsSubsystem should have extensions.";
            }
          }
        }
        else {
          pFVar7 = FAutomationTestFramework::Get();
          pwVar10 = L"Test Extension initialization failed";
        }
        pFVar1 = pFVar7->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_38,pwVar10);
        (*pcVar2)(pFVar1,&local_38,0);
        if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        return;
      }
      pFVar7 = FAutomationTestFramework::Get();
      pwVar10 = L"Test Extension initialization failed";
    }
  }
  else {
    pFVar7 = FAutomationTestFramework::Get();
    pwVar10 = L"ContainsMetric failed";
  }
  pFVar1 = pFVar7->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_38,pwVar10);
  (*pcVar2)(pFVar1,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_38.Data.AllocatorInstance.Data);
  return;
}

// TestSingleMetricSingleExtensionAcquireRelease @ 14f1485f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::WorldMetrics::Private::TestSingleMetricSingleExtensionAcquireRelease(UWorld *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  UWorldMetricsSubsystem *this;
  UWorldMetricInterface *this_00;
  FAutomationTestFramework *pFVar6;
  UWorldMetricsExtension *pUVar7;
  UWorldMetricsSubsystem *pUVar8;
  UMockWorldMetricsExtensionA *pUVar9;
  wchar_t *pwVar10;
  TObjectPtr<UClass>_u_0 local_res10;
  TObjectPtr<UClass>_u_0 local_res18;
  TObjectPtr<UClass>_u_0 local_res20;
  FString local_38;
  
  TestZeroState(param_1);
  this = UWorldMetricsSubsystem::Get(param_1);
  local_res10.DebugPtr = UMockWorldMetricA::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res10.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
  }
  this_00 = UWorldMetricsSubsystem::AddMetric
                      (this,(TSubclassOf<UWorldMetricInterface> *)&local_res10.ObjectPtr);
  bVar4 = UWorldMetricsSubsystem::ContainsMetric(this,this_00);
  if (bVar4) {
    local_res18.DebugPtr = Z_Construct_UClass_UObject_NoRegister();
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_res18.DebugPtr != (UClass *)0x0))
    {
      GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
    }
    pUVar7 = UWorldMetricsSubsystem::AcquireExtension
                       (this,this_00,(TSubclassOf<UWorldMetricsExtension> *)&local_res18.ObjectPtr);
    if (pUVar7 == (UWorldMetricsExtension *)0x0) {
      local_res18.DebugPtr = UMockWorldMetricsExtensionA::StaticClass();
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (local_res18.DebugPtr != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
      }
      pUVar7 = UWorldMetricsSubsystem::AcquireExtension
                         (this,this_00,(TSubclassOf<UWorldMetricsExtension> *)&local_res18.ObjectPtr
                         );
      if (pUVar7 == (UWorldMetricsExtension *)0x0) {
        pFVar6 = FAutomationTestFramework::Get();
        pwVar10 = L"Acquire Test Extension failed.";
      }
      else if (*(int *)(pUVar7 + 1) == 1) {
        if ((((this->UpdateTickerHandle).Object != (FElement *)0x0) &&
            (pTVar3 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
            pTVar3 != (TReferenceControllerBase<1> *)0x0)) &&
           (0 < (int)pTVar3->SharedReferenceCount)) {
          bVar4 = UWorldMetricsSubsystem::HasAnyExtension(this);
          if (!bVar4) {
            pFVar6 = FAutomationTestFramework::Get();
            pwVar10 = L"WorldMetricsSubsystem should have extensions.";
            goto LAB_14f148918;
          }
          iVar5 = UWorldMetricsSubsystem::NumExtensions(this);
          if (iVar5 != 1) {
            pFVar6 = FAutomationTestFramework::Get();
            pwVar10 = L"WorldMetricsSubsystem should have one extension.";
            goto LAB_14f148918;
          }
          local_res20.DebugPtr = Z_Construct_UClass_UObject_NoRegister();
          if ((GC::GIsIncrementalReachabilityPending != false) &&
             (local_res20.DebugPtr != (UClass *)0x0)) {
            GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
          }
          bVar4 = UWorldMetricsSubsystem::ReleaseExtension
                            (this,this_00,
                             (TSubclassOf<UWorldMetricsExtension> *)&local_res20.ObjectPtr);
          if (bVar4) {
            pFVar6 = FAutomationTestFramework::Get();
            pwVar10 = L"ReleaseExtension should fail";
            goto LAB_14f148918;
          }
          bVar4 = UWorldMetricsSubsystem::ReleaseExtension<UMockWorldMetricsExtensionA>
                            (this,this_00);
          if (!bVar4) {
            pFVar6 = FAutomationTestFramework::Get();
            pwVar10 = L"Test Extension release failed.";
            goto LAB_14f148918;
          }
          if (*(int *)&pUVar7[1].field_0x4 != 1) {
            pFVar6 = FAutomationTestFramework::Get();
            pwVar10 = L"Test Extension deinitialization failed after release.";
            goto LAB_14f148918;
          }
          pUVar8 = UWorldMetricInterface::GetOwner(this_00);
          pUVar9 = UWorldMetricsSubsystem::AcquireExtension<UMockWorldMetricsExtensionA>
                             (pUVar8,this_00);
          if (pUVar9 == (UMockWorldMetricsExtensionA *)0x0) {
            pFVar6 = FAutomationTestFramework::Get();
            pwVar10 = L"Acquire Test Extension failed.";
            goto LAB_14f148918;
          }
          if (*(int *)&pUVar9->field_0x28 != 1) {
            pFVar6 = FAutomationTestFramework::Get();
            pwVar10 = L"Test Extension initialization failed";
            goto LAB_14f148918;
          }
          if ((((this->UpdateTickerHandle).Object != (FElement *)0x0) &&
              (pTVar3 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
              pTVar3 != (TReferenceControllerBase<1> *)0x0)) &&
             (0 < (int)pTVar3->SharedReferenceCount)) {
            bVar4 = UWorldMetricsSubsystem::HasAnyExtension(this);
            if (bVar4) {
              iVar5 = UWorldMetricsSubsystem::NumExtensions(this);
              if (iVar5 == 1) {
                pUVar8 = UWorldMetricInterface::GetOwner(this_00);
                bVar4 = UWorldMetricsSubsystem::ReleaseExtension<UMockWorldMetricsExtensionA>
                                  (pUVar8,this_00);
                if (bVar4) {
                  if (*(int *)&pUVar9->field_0x2c == 1) {
                    UWorldMetricsSubsystem::RemoveMetric(this,this_00);
                    TestZeroState(param_1);
                    return;
                  }
                  pFVar6 = FAutomationTestFramework::Get();
                  pwVar10 = L"Test Extension deinitialization failed after release.";
                }
                else {
                  pFVar6 = FAutomationTestFramework::Get();
                  pwVar10 = L"Test Extension release failed.";
                }
              }
              else {
                pFVar6 = FAutomationTestFramework::Get();
                pwVar10 = L"WorldMetricsSubsystem should have one extension.";
              }
            }
            else {
              pFVar6 = FAutomationTestFramework::Get();
              pwVar10 = L"WorldMetricsSubsystem should have extensions.";
            }
            goto LAB_14f148918;
          }
        }
        pFVar6 = FAutomationTestFramework::Get();
        pwVar10 = L"WorldMetricsSubsystem should be enabled by default if there are metrics.";
      }
      else {
        pFVar6 = FAutomationTestFramework::Get();
        pwVar10 = L"Test Extension initialization failed";
      }
LAB_14f148918:
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_38,pwVar10);
      (*pcVar2)(pFVar1,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return;
    }
    pFVar6 = FAutomationTestFramework::Get();
    pwVar10 = L"AcquireExtension should fail";
  }
  else {
    pFVar6 = FAutomationTestFramework::Get();
    pwVar10 = L"ContainsMetric failed";
  }
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_38,pwVar10);
  (*pcVar2)(pFVar1,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_38.Data.AllocatorInstance.Data);
  return;
}

// TestSingleMetricSingleExtensionAutoReleaseOnRemoval @ 14f148960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::WorldMetrics::Private::TestSingleMetricSingleExtensionAutoReleaseOnRemoval(UWorld *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UWorldMetricsSubsystem *this;
  UWorldMetricInterface *pUVar6;
  FAutomationTestFramework *pFVar7;
  UWorldMetricsExtension *pUVar8;
  wchar_t *pwVar9;
  TObjectPtr<UClass>_u_0 local_res10;
  TObjectPtr<UClass>_u_0 local_res18;
  FString local_28;
  
  TestZeroState(param_1);
  this = UWorldMetricsSubsystem::Get(param_1);
  local_res10.DebugPtr = UMockWorldMetricA::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res10.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
  }
  pUVar6 = UWorldMetricsSubsystem::AddMetric
                     (this,(TSubclassOf<UWorldMetricInterface> *)&local_res10.ObjectPtr);
  bVar4 = UWorldMetricsSubsystem::ContainsMetric(this,pUVar6);
  if (bVar4) {
    local_res18.DebugPtr = UMockWorldMetricsExtensionA::StaticClass();
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_res18.DebugPtr != (UClass *)0x0))
    {
      GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
    }
    pUVar8 = UWorldMetricsSubsystem::AcquireExtension
                       (this,pUVar6,(TSubclassOf<UWorldMetricsExtension> *)&local_res18.ObjectPtr);
    if (pUVar8 == (UWorldMetricsExtension *)0x0) {
      pFVar7 = FAutomationTestFramework::Get();
      pwVar9 = L"Acquire Test Extension failed.";
    }
    else if (*(int *)(pUVar8 + 1) == 1) {
      if ((((this->UpdateTickerHandle).Object == (FElement *)0x0) ||
          (pTVar1 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
          pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1))
      {
        pFVar7 = FAutomationTestFramework::Get();
        pwVar9 = L"WorldMetricsSubsystem should be enabled by default if there are metrics.";
      }
      else {
        bVar4 = UWorldMetricsSubsystem::HasAnyExtension(this);
        if (bVar4) {
          iVar5 = UWorldMetricsSubsystem::NumExtensions(this);
          if (iVar5 == 1) {
            UWorldMetricsSubsystem::RemoveMetric(this,pUVar6);
            if (*(int *)&pUVar8[1].field_0x4 == 1) {
              bVar4 = UWorldMetricsSubsystem::HasAnyExtension(this);
              if (!bVar4) {
                TestZeroState(param_1);
                return;
              }
              pFVar7 = FAutomationTestFramework::Get();
              pwVar9 = L"WorldMetricsSubsystem shouldn\'t have any extensions.";
            }
            else {
              pFVar7 = FAutomationTestFramework::Get();
              pwVar9 = L"Test Extension deinitialization failed after release.";
            }
          }
          else {
            pFVar7 = FAutomationTestFramework::Get();
            pwVar9 = L"WorldMetricsSubsystem should have one extension.";
          }
        }
        else {
          pFVar7 = FAutomationTestFramework::Get();
          pwVar9 = L"WorldMetricsSubsystem should have extensions.";
        }
      }
    }
    else {
      pFVar7 = FAutomationTestFramework::Get();
      pwVar9 = L"Test Extension initialization failed";
    }
  }
  else {
    pFVar7 = FAutomationTestFramework::Get();
    pwVar9 = L"ContainsMetric failed";
  }
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString(&local_28,pwVar9);
  (*pcVar3)(pFVar2,&local_28,0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// TestZeroState @ 14f148b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::WorldMetrics::Private::TestZeroState(UWorld *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UWorldMetricsSubsystem *this;
  FAutomationTestFramework *pFVar6;
  wchar_t *pwVar7;
  FString local_18;
  
  this = UWorldMetricsSubsystem::Get(param_1);
  if (this == (UWorldMetricsSubsystem *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pwVar7 = L"WorldMetricsSubsystem is valid after GetSubsystem.";
  }
  else if ((((this->UpdateTickerHandle).Object == (FElement *)0x0) ||
           (pTVar1 = (this->UpdateTickerHandle).WeakReferenceCount.ReferenceController,
           pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)
          ) {
    bVar4 = UWorldMetricsSubsystem::HasAnyMetric(this);
    if (bVar4) {
      pFVar6 = FAutomationTestFramework::Get();
      pwVar7 = L"Unexpected existing metrics in WorldMetricsSubsystem";
    }
    else {
      iVar5 = UWorldMetricsSubsystem::NumMetrics(this);
      if (iVar5 == 0) {
        bVar4 = UWorldMetricsSubsystem::HasAnyExtension(this);
        if (bVar4) {
          pFVar6 = FAutomationTestFramework::Get();
          pwVar7 = L"WorldMetricsSubsystem shouldn\'t be have any extension.";
        }
        else {
          iVar5 = UWorldMetricsSubsystem::NumExtensions(this);
          if (iVar5 == 0) {
            return;
          }
          pFVar6 = FAutomationTestFramework::Get();
          pwVar7 = L"WorldMetricsSubsystem should have zero extensions.";
        }
      }
      else {
        pFVar6 = FAutomationTestFramework::Get();
        pwVar7 = L"WorldMetricsSubsystem should zero metrics.";
      }
    }
  }
  else {
    pFVar6 = FAutomationTestFramework::Get();
    pwVar7 = L"WorldMetricsSubsystem shouldn\'t be enabled if there are no metrics.";
  }
  pFVar2 = pFVar6->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString(&local_18,pwVar7);
  (*pcVar3)(pFVar2,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

