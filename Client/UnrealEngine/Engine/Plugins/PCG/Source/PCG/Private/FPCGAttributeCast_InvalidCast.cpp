// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f78e00

EAutomationTestFlags __thiscall
FPCGAttributeCast_InvalidCast::GetTestFlags(FPCGAttributeCast_InvalidCast *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f78e10

bool __thiscall FPCGAttributeCast_InvalidCast::IsStressTest(FPCGAttributeCast_InvalidCast *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f78e20

uint __thiscall
FPCGAttributeCast_InvalidCast::GetRequiredDeviceNum(FPCGAttributeCast_InvalidCast *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f78e30

FString * __thiscall
FPCGAttributeCast_InvalidCast::GetTestSourceFileName
          (FPCGAttributeCast_InvalidCast *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f78e60

int __thiscall
FPCGAttributeCast_InvalidCast::GetTestSourceFileLine(FPCGAttributeCast_InvalidCast *this)

{
  return 0x71;
}

// GetTests @ 149f78e70

/* WARNING: Removing unreachable block (ram,0x000149f78f5d) */
/* WARNING: Removing unreachable block (ram,0x000149f79028) */

void __thiscall
FPCGAttributeCast_InvalidCast::GetTests
          (FPCGAttributeCast_InvalidCast *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeCast.InvalidCast");
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

// RunTest @ 149f79050

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
FPCGAttributeCast_InvalidCast::RunTest(FPCGAttributeCast_InvalidCast *this,FString *param_1)

{
  UPCGMetadata *this_00;
  UPCGParamData *pUVar1;
  code *pcVar2;
  FPCGContext *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UPCGAttributeCastSettings *pUVar7;
  UObject *pUVar8;
  UPCGParamData *pUVar9;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<FString> *this_02;
  long64 lVar10;
  FString *pFVar11;
  ForAnyElementType FVar12;
  FPCGDataPtrWrapper *this_03;
  FPCGContext *local_res18;
  FName local_res20;
  UClass *local_198;
  FString local_190;
  FString local_180;
  TSharedPtr<IPCGElement,1> local_170;
  FName local_158;
  FPCGMetadataDomainID local_150;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FTestData local_f8;
  FString local_68;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_58;
  
  local_198 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_198 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_198);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_f8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_198);
  this_02 = (FPCGMetadataAttribute<FString> *)0x0;
  local_58._0_8_ = 0;
  local_58._40_8_ = 0;
  pUVar7 = PCGTestsCommon::GenerateSettings<UPCGAttributeCastSettings>(&local_f8,&local_58);
  if ((pUVar7 == (UPCGAttributeCastSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                         ,0xfb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  ::FName::FName(&local_res20,L"String");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar7->InputSource,local_res20,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar7->OutputTarget,local_res20,true);
  pUVar7->OutputType = Integer32;
  pUVar8 = GetTransientPackageAsObject();
  pUVar9 = NewObject<UPCGParamData>(pUVar8);
  this_00 = (UPCGMetadata *)pUVar9->_padding_;
  ::FString::FString(&local_138,L"Hello");
  local_158 = local_res20;
  local_150.Flag = PCGMetadataDomainID::Default.Flag;
  local_150._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_150.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_150.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_150);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    this_02 = FPCGMetadataDomain::CreateAttribute<FString>(this_01,local_158,&local_138,true,false);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  lVar10 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar9->_padding_,-1);
  if ((lVar10 == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemKey != PCGInvalidEntryKey",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                         ,0x25c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pFVar11 = ::FString::FString(&local_118,L"Hey");
  iVar6 = FPCGMetadataAttribute<FString>::AddValue(this_02,pFVar11);
  FPCGMetadataAttributeBase::SetValueFromValueKey
            ((FPCGMetadataAttributeBase *)this_02,lVar10,iVar6,false);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  lVar10 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar9->_padding_,-1);
  if ((lVar10 == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemKey != PCGInvalidEntryKey",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                         ,0x25c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pFVar11 = ::FString::FString(&local_108,L"Hi");
  iVar6 = FPCGMetadataAttribute<FString>::AddValue(this_02,pFVar11);
  FPCGMetadataAttributeBase::SetValueFromValueKey
            ((FPCGMetadataAttributeBase *)this_02,lVar10,iVar6,false);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_f8.InputData.TaggedData.ArrayNum == local_f8.InputData.TaggedData.ArrayMax) {
    local_f8.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_f8.InputData,
                    &local_f8.InputData.TaggedData.ArrayMax);
  }
  this_03 = (FPCGDataPtrWrapper *)
            (local_f8.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_f8.InputData.TaggedData.ArrayNum * 0x78);
  this_03[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_03[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_03[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_03[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_03[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_03->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_03->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_03[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_03[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_03[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_03[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_03[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_03[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_03[4].Data.field0_0x0 + 4) = 0;
  this_03[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_03[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_03[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_03[7].Data.field0_0x0 + 4) = 0xffffffff;
  local_f8.InputData.TaggedData.ArrayNum = local_f8.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)pUVar9);
  this_03[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_f8.Settings,&local_170);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_f8,(UPCGNode *)&local_res18);
  pFVar11 = ::FString::FString(&local_68,
                               L"Cannot convert InputAttribute \'String\' of type String into Integer32"
                              );
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar11,Contains,1,true);
  do {
    if ((local_170.Object == (IPCGElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar4 = IPCGElement::Execute(local_170.Object,local_res18);
  } while (!bVar4);
  iVar6 = (local_res18->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_190,"There is one output");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_190.Data.ArrayNum != 0) {
    FVar12.Data = local_190.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar6,1)
  ;
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  pFVar3 = local_res18;
  if (bVar4) {
    if (((local_res18->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pUVar1 = *(UPCGParamData **)(pFVar3->OutputData).TaggedData.AllocatorInstance.Data;
    ::FString::FString(&local_180,"Output is same as input");
    if (pUVar1 == pUVar9) {
      bVar4 = false;
    }
    else {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_128,L"%s: The two values are not equal.");
      (*pcVar2)(this,&local_128,0);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      bVar4 = true;
    }
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    if (!bVar4) {
      bVar4 = true;
      goto LAB_149f794df;
    }
  }
  bVar4 = false;
LAB_149f794df:
  if (local_res18 != (FPCGContext *)0x0) {
    (**(code **)local_res18->_padding_)(local_res18,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_170.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_f8);
  return bVar4;
}

// GetBeautifiedTestName @ 149f79530

FString * __thiscall
FPCGAttributeCast_InvalidCast::GetBeautifiedTestName
          (FPCGAttributeCast_InvalidCast *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeCast.InvalidCast");
  return __return_storage_ptr__;
}

