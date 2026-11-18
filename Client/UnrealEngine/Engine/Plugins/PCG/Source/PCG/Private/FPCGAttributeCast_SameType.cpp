// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f786e0

EAutomationTestFlags __thiscall
FPCGAttributeCast_SameType::GetTestFlags(FPCGAttributeCast_SameType *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f786f0

bool __thiscall FPCGAttributeCast_SameType::IsStressTest(FPCGAttributeCast_SameType *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f78700

uint __thiscall FPCGAttributeCast_SameType::GetRequiredDeviceNum(FPCGAttributeCast_SameType *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f78710

FString * __thiscall
FPCGAttributeCast_SameType::GetTestSourceFileName
          (FPCGAttributeCast_SameType *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f78740

int __thiscall FPCGAttributeCast_SameType::GetTestSourceFileLine(FPCGAttributeCast_SameType *this)

{
  return 0x70;
}

// GetTests @ 149f78750

/* WARNING: Removing unreachable block (ram,0x000149f7883d) */
/* WARNING: Removing unreachable block (ram,0x000149f78908) */

void __thiscall
FPCGAttributeCast_SameType::GetTests
          (FPCGAttributeCast_SameType *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeCast.SameType");
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

// RunTest @ 149f78930

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
FPCGAttributeCast_SameType::RunTest(FPCGAttributeCast_SameType *this,FString *param_1)

{
  UPCGParamData *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UPCGAttributeCastSettings *pUVar7;
  UObject *pUVar8;
  UPCGParamData *pUVar9;
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<int> *this_01;
  long64 lVar10;
  wchar_t *pwVar11;
  FPCGDataPtrWrapper *this_02;
  int local_res18 [2];
  int local_res20 [2];
  undefined1 local_168 [40];
  FNameEntryId local_140;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_138 [2];
  TSharedPtr<IPCGElement,1> local_128;
  FName local_118;
  ForAnyElementType local_110;
  FName local_108;
  FString local_f8;
  FTestData local_e8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_58;
  
  local_168._24_8_ = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_168._24_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_168._24_8_);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_e8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)((longlong)local_168 + 0x18));
  this_01 = (FPCGMetadataAttribute<int> *)0x0;
  local_58._0_8_ = 0;
  local_58._40_8_ = 0;
  pUVar7 = PCGTestsCommon::GenerateSettings<UPCGAttributeCastSettings>(&local_e8,&local_58);
  if ((pUVar7 == (UPCGAttributeCastSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                         ,0xdc,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  ::FName::FName((FName *)(local_168 + 0x10),L"Int");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar7->InputSource,(FName)local_168._16_8_,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar7->OutputTarget,(FName)local_168._16_8_,true);
  pUVar7->OutputType = Integer32;
  pUVar8 = GetTransientPackageAsObject();
  pUVar9 = NewObject<UPCGParamData>(pUVar8);
  local_118.ComparisonIndex.Value = local_168._16_4_;
  local_118.Number = local_168._20_4_;
  local_110.Data = (FScriptContainerElement *)PCGMetadataDomainID::Default._0_8_;
  local_108 = PCGMetadataDomainID::Default.DebugName;
  local_res18[0] = 5;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain
                      ((UPCGMetadata *)pUVar9->_padding_,(FPCGMetadataDomainID *)&local_110);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    this_01 = FPCGMetadataDomain::CreateAttribute<int>(this_00,local_118,local_res18,true,false);
  }
  local_res20[0] = 1;
  lVar10 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar9->_padding_,-1);
  if ((lVar10 == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemKey != PCGInvalidEntryKey",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                         ,0x24b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  iVar6 = FPCGMetadataAttribute<int>::AddValue(this_01,local_res20);
  FPCGMetadataAttributeBase::SetValueFromValueKey
            ((FPCGMetadataAttributeBase *)this_01,lVar10,iVar6,false);
  local_168._8_4_ = 2;
  lVar10 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar9->_padding_,-1);
  if ((lVar10 == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemKey != PCGInvalidEntryKey",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                         ,0x24b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  iVar6 = FPCGMetadataAttribute<int>::AddValue(this_01,(int *)(local_168 + 8));
  FPCGMetadataAttributeBase::SetValueFromValueKey
            ((FPCGMetadataAttributeBase *)this_01,lVar10,iVar6,false);
  if (local_e8.InputData.TaggedData.ArrayNum == local_e8.InputData.TaggedData.ArrayMax) {
    local_e8.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_e8.InputData,
                    &local_e8.InputData.TaggedData.ArrayMax);
  }
  this_02 = (FPCGDataPtrWrapper *)
            (local_e8.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_e8.InputData.TaggedData.ArrayNum * 0x78);
  this_02[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_02[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_02[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_02[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_02[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_02->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_02->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_02[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_02[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_02[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_02[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_02[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_02[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_02[4].Data.field0_0x0 + 4) = 0;
  this_02[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_02[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_02[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_02[7].Data.field0_0x0 + 4) = 0xffffffff;
  local_e8.InputData.TaggedData.ArrayNum = local_e8.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar9);
  this_02[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_e8.Settings,&local_128);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_e8,(UPCGNode *)local_168);
  do {
    if ((local_128.Object == (IPCGElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar4 = IPCGElement::Execute(local_128.Object,(FPCGContext *)local_168._0_8_);
  } while (!bVar4);
  iVar6 = (((FPCGDataCollection *)(local_168._0_8_ + 0x38))->TaggedData).ArrayNum;
  ::FString::FString((FString *)(local_168 + 0x20),"There is one output");
  pwVar11 = L"";
  if (local_140.Value != 0) {
    pwVar11 = (wchar_t *)local_168._32_8_;
  }
  bVar4 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar11,iVar6,1);
  if ((wchar_t *)local_168._32_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_168._32_8_);
  }
  uVar3 = local_168._0_8_;
  if (bVar4) {
    if (((((FPCGDataCollection *)(local_168._0_8_ + 0x38))->TaggedData).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pUVar1 = *(UPCGParamData **)
              (((FPCGDataCollection *)(uVar3 + 0x38))->TaggedData).AllocatorInstance.Data;
    ::FString::FString((FString *)&local_138[0].ObjectPtr,"Output is same as input");
    if (pUVar1 == pUVar9) {
      bVar4 = false;
    }
    else {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
      (*pcVar2)(this,&local_f8,0);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      bVar4 = true;
    }
    if (local_138[0].DebugPtr != (UPCGSettingsInterface *)0x0) {
      FMemory::Free(local_138[0].DebugPtr);
    }
    if (!bVar4) {
      bVar4 = true;
      goto LAB_149f78d40;
    }
  }
  bVar4 = false;
LAB_149f78d40:
  if ((FPCGContext *)local_168._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_168._0_8_)(local_168._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_e8);
  return bVar4;
}

// GetBeautifiedTestName @ 149f78d90

FString * __thiscall
FPCGAttributeCast_SameType::GetBeautifiedTestName
          (FPCGAttributeCast_SameType *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeCast.SameType");
  return __return_storage_ptr__;
}

