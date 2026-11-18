// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fa4f50

EAutomationTestFlags __thiscall
FPCGAttributeNoiseNotExistingAttributeTest::GetTestFlags
          (FPCGAttributeNoiseNotExistingAttributeTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fa5320

bool __thiscall
FPCGAttributeNoiseNotExistingAttributeTest::IsStressTest
          (FPCGAttributeNoiseNotExistingAttributeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fa5360

uint __thiscall
FPCGAttributeNoiseNotExistingAttributeTest::GetRequiredDeviceNum
          (FPCGAttributeNoiseNotExistingAttributeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fa5370

FString * __thiscall
FPCGAttributeNoiseNotExistingAttributeTest::GetTestSourceFileName
          (FPCGAttributeNoiseNotExistingAttributeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeNoiseTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fa53a0

int __thiscall
FPCGAttributeNoiseNotExistingAttributeTest::GetTestSourceFileLine
          (FPCGAttributeNoiseNotExistingAttributeTest *this)

{
  return 0xef;
}

// GetTests @ 149fa53b0

/* WARNING: Removing unreachable block (ram,0x000149fa549d) */
/* WARNING: Removing unreachable block (ram,0x000149fa5568) */

void __thiscall
FPCGAttributeNoiseNotExistingAttributeTest::GetTests
          (FPCGAttributeNoiseNotExistingAttributeTest *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeNoise.NotExistingAttribute");
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

// RunTest @ 149fa5590

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
FPCGAttributeNoiseNotExistingAttributeTest::RunTest
          (FPCGAttributeNoiseNotExistingAttributeTest *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UPCGAttributeNoiseSettings *pUVar5;
  FName *pFVar6;
  UPCGBasePointData *pUVar7;
  FString *pFVar8;
  FPCGDataPtrWrapper *this_00;
  ForAnyElementType FVar9;
  FPCGContext *local_res18;
  UClass *local_res20;
  FString local_128;
  TSharedPtr<IPCGElement,1> local_118;
  FName local_108 [2];
  FTestData local_f8;
  FString local_68;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_58;
  
  local_res20 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_f8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_res20);
  local_58._0_8_ = 0;
  local_58._40_8_ = 0;
  pUVar5 = PCGTestsCommon::GenerateSettings<UPCGAttributeNoiseSettings>(&local_f8,&local_58);
  if (pUVar5 == (UPCGAttributeNoiseSettings *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeNoiseTest.cpp"
                       ,0xf5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar6 = ::FName::FName(local_108,L"Hi");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar5->InputSource,*pFVar6,true);
  pUVar7 = PCGTestsCommon::CreateRandomBasePointData(5,0x2a,true);
  if (local_f8.InputData.TaggedData.ArrayNum == local_f8.InputData.TaggedData.ArrayMax) {
    local_f8.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_f8.InputData,
                    &local_f8.InputData.TaggedData.ArrayMax);
  }
  this_00 = (FPCGDataPtrWrapper *)
            (local_f8.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_f8.InputData.TaggedData.ArrayNum * 0x78);
  this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_00[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
  this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
  local_f8.InputData.TaggedData.ArrayNum = local_f8.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar7);
  this_00[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_f8.Settings,&local_118);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_f8,(UPCGNode *)&local_res18);
  pFVar8 = ::FString::FString(&local_68,
                              L"Could not create accessor. Attribute \'Hi\' was not found.");
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar8,Contains,1,true);
  do {
    if (local_118.Object == (IPCGElement *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    bVar3 = IPCGElement::Execute(local_118.Object,local_res18);
  } while (!bVar3);
  iVar1 = (local_res18->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_128,"No output");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar9.Data = local_128.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar9.Data,iVar1,0);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_res18 != (FPCGContext *)0x0) {
    (**(code **)local_res18->_padding_)(local_res18,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_f8);
  return bVar3;
}

// GetBeautifiedTestName @ 149fa5810

FString * __thiscall
FPCGAttributeNoiseNotExistingAttributeTest::GetBeautifiedTestName
          (FPCGAttributeNoiseNotExistingAttributeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeNoise.NotExistingAttribute");
  return __return_storage_ptr__;
}

