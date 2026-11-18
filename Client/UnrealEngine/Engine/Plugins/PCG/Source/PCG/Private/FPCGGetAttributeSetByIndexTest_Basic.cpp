// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fc9bc0

EAutomationTestFlags __thiscall
FPCGGetAttributeSetByIndexTest_Basic::GetTestFlags(FPCGGetAttributeSetByIndexTest_Basic *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fc9bd0

bool __thiscall
FPCGGetAttributeSetByIndexTest_Basic::IsStressTest(FPCGGetAttributeSetByIndexTest_Basic *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fc9c20

uint __thiscall
FPCGGetAttributeSetByIndexTest_Basic::GetRequiredDeviceNum
          (FPCGGetAttributeSetByIndexTest_Basic *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fc9c30

FString * __thiscall
FPCGGetAttributeSetByIndexTest_Basic::GetTestSourceFileName
          (FPCGGetAttributeSetByIndexTest_Basic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGGetAttributeSetByIndexTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fc9c60

int __thiscall
FPCGGetAttributeSetByIndexTest_Basic::GetTestSourceFileLine
          (FPCGGetAttributeSetByIndexTest_Basic *this)

{
  return 0xb;
}

// GetTests @ 149fc9c70

/* WARNING: Removing unreachable block (ram,0x000149fc9d5d) */
/* WARNING: Removing unreachable block (ram,0x000149fc9e28) */

void __thiscall
FPCGGetAttributeSetByIndexTest_Basic::GetTests
          (FPCGGetAttributeSetByIndexTest_Basic *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.GetAttributeSetByIndex.Basic");
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

// RunTest @ 149fc9e50

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
FPCGGetAttributeSetByIndexTest_Basic::RunTest
          (FPCGGetAttributeSetByIndexTest_Basic *this,FString *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UPCGAttributeGetFromIndexSettings *pUVar10;
  UObject *pUVar11;
  UPCGParamData *pUVar12;
  long64 lVar13;
  long64 lVar14;
  FPCGMetadataDomain *pFVar15;
  FPCGMetadataAttribute<double> *pFVar16;
  FObjectPtr_u_0 this_00;
  UClass *pUVar17;
  FPCGMetadataAttribute<int> *this_01;
  FPCGDataPtrWrapper *this_02;
  ForAnyElementType FVar18;
  FObjectPtr_u_0 FVar19;
  int local_res18 [2];
  int local_res20 [2];
  int local_318 [2];
  FObjectPtr_u_0 local_310;
  undefined1 local_308 [16];
  int local_2f8;
  FName local_2e8;
  FName FStack_2e0;
  FName local_2d8;
  UClass *local_2c8;
  ForAnyElementType local_2c0;
  double local_2b8;
  ForAnyElementType local_2b0;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  TSharedPtr<IPCGElement,1> local_208;
  FName local_1f8;
  FPCGMetadataDomainID local_1f0;
  FName local_1d8;
  FPCGMetadataDomainID local_1d0;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FPCGAttributeIdentifier local_178;
  FPCGAttributeIdentifier local_158;
  FTestData local_138;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_a8 [2];
  
  local_2c8 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2c8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2c8);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_138,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_2c8);
  local_a8[0]._0_8_ = 0;
  local_a8[0]._40_8_ = 0;
  pUVar10 = PCGTestsCommon::GenerateSettings<UPCGAttributeGetFromIndexSettings>(&local_138,local_a8)
  ;
  pUVar10->Index = 1;
  UPCGSettings::GetElement(local_138.Settings,&local_208);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&DoubleAttrName,L"Double");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&IntAttrName,L"Int");
    _Init_thread_footer(&::_TSS1);
  }
  pUVar11 = GetTransientPackageAsObject();
  pUVar12 = NewObject<UPCGParamData>(pUVar11);
  plVar1 = &pUVar12->_padding_;
  if (((pUVar12 == (UPCGParamData *)0x0) || (*plVar1 == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParamData && ParamData->Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGGetAttributeSetByIndexTest.cpp"
                         ,0x1d,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  lVar13 = UPCGMetadata::AddEntry((UPCGMetadata *)*plVar1,-1);
  lVar14 = UPCGMetadata::AddEntry((UPCGMetadata *)*plVar1,-1);
  local_1f8 = DoubleAttrName;
  local_1f0.Flag = PCGMetadataDomainID::Default.Flag;
  local_1f0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_1f0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_1f0.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_2c0.Data = (FScriptContainerElement *)0x0;
  pFVar15 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)*plVar1,&local_1f0);
  if (pFVar15 == (FPCGMetadataDomain *)0x0) {
    pFVar16 = (FPCGMetadataAttribute<double> *)0x0;
LAB_149fca004:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("DoubleAttr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGGetAttributeSetByIndexTest.cpp"
                       ,0x22,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
  }
  else {
    pFVar16 = FPCGMetadataDomain::CreateAttribute<double>
                        (pFVar15,local_1f8,(double *)&local_2c0,true,false);
    if (pFVar16 == (FPCGMetadataAttribute<double> *)0x0) goto LAB_149fca004;
  }
  local_2b8 = __real_3ff0000000000000;
  FPCGMetadataAttribute<double>::SetValue(pFVar16,lVar13,&local_2b8);
  pFVar6 = __real_4000000000000000;
  local_2b0.Data = __real_4000000000000000;
  FPCGMetadataAttribute<double>::SetValue(pFVar16,lVar14,(double *)&local_2b0);
  FVar19.Handle = (UObject *)0x0;
  local_1d8 = IntAttrName;
  local_1d0.Flag = PCGMetadataDomainID::Default.Flag;
  local_1d0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_1d0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_1d0.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_res18[0] = 0;
  pFVar15 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)*plVar1,&local_1d0);
  this_00.Handle = FVar19.Handle;
  if (((pFVar15 == (FPCGMetadataDomain *)0x0) ||
      (this_00.Handle =
            (UObject *)
            FPCGMetadataDomain::CreateAttribute<int>(pFVar15,local_1d8,local_res18,true,false),
      (FPCGMetadataAttribute<int> *)this_00.Handle == (FPCGMetadataAttribute<int> *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntAttr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGGetAttributeSetByIndexTest.cpp"
                         ,0x27,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  local_res20[0] = 4;
  FPCGMetadataAttribute<int>::SetValue
            ((FPCGMetadataAttribute<int> *)this_00.Handle,lVar13,local_res20);
  local_318[0] = 3;
  FPCGMetadataAttribute<int>::SetValue
            ((FPCGMetadataAttribute<int> *)this_00.Handle,lVar14,local_318);
  if (local_138.InputData.TaggedData.ArrayNum == local_138.InputData.TaggedData.ArrayMax) {
    local_138.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_138.InputData,
                    &local_138.InputData.TaggedData.ArrayMax);
  }
  this_02 = (FPCGDataPtrWrapper *)
            (local_138.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_138.InputData.TaggedData.ArrayNum * 0x78);
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
  this_02[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  local_138.InputData.TaggedData.ArrayNum = local_138.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar12);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_138,(UPCGNode *)local_308);
  do {
    if ((local_208.Object == (IPCGElement *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    bVar7 = IPCGElement::Execute(local_208.Object,(FPCGContext *)local_308._0_8_);
  } while (!bVar7);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_308._0_8_ + 0x38),
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_308 + 8),
             &PCGPinConstants::DefaultOutputLabel);
  iVar9 = local_2f8;
  ::FString::FString(&local_2a8,"Output count");
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_2a8.Data.ArrayNum != 0) {
    FVar18.Data = local_2a8.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,iVar9,1)
  ;
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    if ((local_2f8 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    local_310 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)local_308._8_8_;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fca2f0:
      if ((FPCGMetadataAttribute<int> *)local_310.Handle != (FPCGMetadataAttribute<int> *)0x0) {
        pUVar17 = Z_Construct_UClass_UPCGParamData_NoRegister();
        bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_310,pUVar17);
        if (bVar7) {
          FVar19 = local_310;
        }
      }
    }
    else if ((FPCGMetadataAttribute<int> *)local_310.Handle != (FPCGMetadataAttribute<int> *)0x0) {
      UE::GC::MarkAsReachable(local_310.Handle);
      goto LAB_149fca2f0;
    }
    ::FString::FString(&local_298,"Output Param data");
    if ((FPCGMetadataAttribute<int> *)FVar19.Handle == (FPCGMetadataAttribute<int> *)0x0) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_1b8,L"Expected \'%s\' to be not null.");
      (*pcVar3)(this,&local_1b8,0);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      lVar2 = *(longlong *)&FVar19.Handle[1].field_0x10;
      ::FString::FString(&local_288,"Output Metadata");
      if (lVar2 == 0) {
        pcVar3 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_1a8,L"Expected \'%s\' to be not null.");
        (*pcVar3)(this,&local_1a8,0);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        if ((*(longlong *)&FVar19.Handle[1].field_0x10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("OutParamData && OutParamData->Metadata",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGGetAttributeSetByIndexTest.cpp"
                               ,0x3b,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        lVar13 = UPCGMetadata::GetLocalItemCount(*(UPCGMetadata **)&FVar19.Handle[1].field_0x10);
        ::FString::FString(&local_278,"Metadata has 1 entry");
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_278.Data.ArrayNum != 0) {
          FVar18.Data = local_278.Data.AllocatorInstance.Data;
        }
        bVar7 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,(int)lVar13,1);
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          local_2e8 = DoubleAttrName;
          FStack_2e0 = (FName)PCGMetadataDomainID::Default._0_8_;
          local_2d8 = PCGMetadataDomainID::Default.DebugName;
          local_178.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
          local_178.Name = DoubleAttrName;
          local_178.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
          local_178.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
          local_178.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
          pFVar16 = (FPCGMetadataAttribute<double> *)
                    UPCGMetadata::GetMutableAttribute
                              (*(UPCGMetadata **)&FVar19.Handle[1].field_0x10,&local_178);
          if ((pFVar16 == (FPCGMetadataAttribute<double> *)0x0) || ((short)pFVar16->_padding_ != 1))
          {
            pFVar16 = (FPCGMetadataAttribute<double> *)0x0;
          }
          ::FString::FString(&local_268,"Double attribute exists");
          if (pFVar16 == (FPCGMetadataAttribute<double> *)0x0) {
            pcVar3 = *(code **)(*(longlong *)this + 0x28);
            ::FString::PrintfImpl(&local_198,L"Expected \'%s\' to be not null.");
            (*pcVar3)(this,&local_198,0);
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_268.Data.AllocatorInstance.Data);
          }
          if (!bVar7) {
            local_2e8 = IntAttrName;
            FStack_2e0 = (FName)PCGMetadataDomainID::Default._0_8_;
            local_2d8 = PCGMetadataDomainID::Default.DebugName;
            local_158.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
            local_158.Name = IntAttrName;
            local_158.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
            local_158.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
            local_158.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
            this_01 = (FPCGMetadataAttribute<int> *)
                      UPCGMetadata::GetMutableAttribute
                                (*(UPCGMetadata **)&FVar19.Handle[1].field_0x10,&local_158);
            if ((this_01 == (FPCGMetadataAttribute<int> *)0x0) || ((short)this_01->_padding_ != 2))
            {
              this_01 = (FPCGMetadataAttribute<int> *)0x0;
            }
            ::FString::FString(&local_258,"Int attribute exists");
            if (this_01 == (FPCGMetadataAttribute<int> *)0x0) {
              pcVar3 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_188,L"Expected \'%s\' to be not null.");
              (*pcVar3)(this,&local_188,0);
              if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.Data.AllocatorInstance.Data);
              }
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_258.Data.AllocatorInstance.Data);
            }
            if (!bVar7) {
              if (((pFVar16 == (FPCGMetadataAttribute<double> *)0x0) ||
                  (this_01 == (FPCGMetadataAttribute<int> *)0x0)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("OutDoubleAttr && OutIntAttr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGGetAttributeSetByIndexTest.cpp"
                                     ,0x45,L""), bVar7)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              iVar9 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)pFVar16,0)
              ;
              dVar4 = FPCGMetadataAttribute<double>::GetValue(pFVar16,iVar9);
              ::FString::FString(&local_248,"Double attribute first entry");
              dVar5 = __real_3f1a36e2e0000000;
              FVar18.Data = (FScriptContainerElement *)L"";
              if (local_248.Data.ArrayNum != 0) {
                FVar18.Data = local_248.Data.AllocatorInstance.Data;
              }
              bVar7 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,dVar4,
                                 (double)pFVar6,__real_3f1a36e2e0000000);
              if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_248.Data.AllocatorInstance.Data);
              }
              if (bVar7) {
                iVar9 = FPCGMetadataAttributeBase::GetValueKey
                                  ((FPCGMetadataAttributeBase *)pFVar16,-1);
                dVar4 = FPCGMetadataAttribute<double>::GetValue(pFVar16,iVar9);
                ::FString::FString(&local_238,"Double attribute default value was not changed");
                FVar18.Data = (FScriptContainerElement *)L"";
                if (local_238.Data.ArrayNum != 0) {
                  FVar18.Data = local_238.Data.AllocatorInstance.Data;
                }
                bVar7 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,dVar4,0.0,
                                   dVar5);
                if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_238.Data.AllocatorInstance.Data);
                }
                if (bVar7) {
                  iVar9 = FPCGMetadataAttributeBase::GetValueKey
                                    ((FPCGMetadataAttributeBase *)this_01,0);
                  iVar9 = FPCGMetadataAttribute<int>::GetValue(this_01,iVar9);
                  ::FString::FString(&local_228,"Int attribute first entry");
                  FVar18.Data = (FScriptContainerElement *)L"";
                  if (local_228.Data.ArrayNum != 0) {
                    FVar18.Data = local_228.Data.AllocatorInstance.Data;
                  }
                  bVar7 = FAutomationTestBase::TestEqual
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,iVar9,3);
                  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_228.Data.AllocatorInstance.Data);
                  }
                  if (bVar7) {
                    iVar9 = FPCGMetadataAttributeBase::GetValueKey
                                      ((FPCGMetadataAttributeBase *)this_01,-1);
                    iVar9 = FPCGMetadataAttribute<int>::GetValue(this_01,iVar9);
                    ::FString::FString(&local_218,"Int attribute default value was not changed");
                    FVar18.Data = (FScriptContainerElement *)L"";
                    if (local_218.Data.ArrayNum != 0) {
                      FVar18.Data = local_218.Data.AllocatorInstance.Data;
                    }
                    bVar7 = FAutomationTestBase::TestEqual
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,iVar9,0);
                    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_218.Data.AllocatorInstance.Data);
                    }
                    if (bVar7) {
                      bVar7 = true;
                      goto LAB_149fca7e9;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar7 = false;
LAB_149fca7e9:
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_308._8_8_,local_2f8);
  if ((FObjectPtr_u_0 *)local_308._8_8_ != (FObjectPtr_u_0 *)0x0) {
    FMemory::Free((void *)local_308._8_8_);
  }
  if ((FPCGContext *)local_308._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_308._0_8_)(local_308._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_138);
  return bVar7;
}

// GetBeautifiedTestName @ 149fca900

FString * __thiscall
FPCGGetAttributeSetByIndexTest_Basic::GetBeautifiedTestName
          (FPCGGetAttributeSetByIndexTest_Basic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.GetAttributeSetByIndex.Basic");
  return __return_storage_ptr__;
}

