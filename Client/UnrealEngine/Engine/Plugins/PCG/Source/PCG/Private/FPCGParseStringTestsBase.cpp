// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// RunTestInternal<int> @ 149fe79d0

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
FPCGParseStringTestsBase::RunTestInternal<int>
          (FPCGParseStringTestsBase *this,TArrayView<FString_const_,int> *param_1,
          TArrayView<int_const_,int> *param_2)

{
  UPCGMetadata *this_00;
  FString *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  UPCGParseStringSettings *pUVar9;
  UObject *pUVar10;
  UPCGParamData *pUVar11;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<FString> *this_02;
  long64 lVar12;
  UClass *pUVar13;
  FPCGMetadataAttribute<int> *pFVar14;
  int *piVar15;
  FName FVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  FPCGDataPtrWrapper *this_03;
  longlong lVar19;
  undefined1 local_218 [48];
  TObjectPtr<UPCGSettingsInterface>_u_0 local_1e8;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  TSharedPtr<IPCGElement,1> local_1a0;
  FName local_188;
  FPCGMetadataDomainID local_180;
  FName local_168;
  FPCGMetadataDomainID FStack_160;
  FString local_148;
  FString local_138;
  FPCGAttributeIdentifier local_128;
  FTestData local_108;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_78;
  
  local_218._32_8_ = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_218._32_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_218._32_8_);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_108,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)((longlong)local_218 + 0x20));
  this_02 = (FPCGMetadataAttribute<FString> *)0x0;
  local_78._0_8_ = 0;
  local_78._40_8_ = 0;
  pUVar9 = PCGTestsCommon::GenerateSettings<UPCGParseStringSettings>(&local_108,&local_78);
  if ((pUVar9 == (UPCGParseStringSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                         ,0x14,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                         ,0x16,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  ::FName::FName((FName *)(local_218 + 0x10),L"InAttr");
  ::FName::FName((FName *)(local_218 + 0x18),L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar9->InputSource,(FName)local_218._16_8_,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar9->_padding_,(FName)local_218._24_8_,true);
  pUVar9->TargetType = Integer32;
  pUVar10 = GetTransientPackageAsObject();
  pUVar11 = NewObject<UPCGParamData>(pUVar10);
  iVar7 = param_1->ArrayNum;
  this_00 = (UPCGMetadata *)pUVar11->_padding_;
  if ((iVar7 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_188.ComparisonIndex.Value = local_218._16_4_;
  local_188.Number = local_218._20_4_;
  local_180.Flag = PCGMetadataDomainID::Default.Flag;
  local_180._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_180.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_180.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_180);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    this_02 = FPCGMetadataDomain::CreateAttribute<FString>
                        (this_01,local_188,param_1->DataPtr,true,false);
  }
  uVar18 = 1;
  if (1 < iVar7) {
    do {
      uVar6 = 0;
      if ((int)uVar18 < iVar7) {
        uVar6 = ~uVar18 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar1 = param_1->DataPtr;
      lVar12 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar11->_padding_,-1);
      if ((lVar12 == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x24b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      iVar7 = FPCGMetadataAttribute<FString>::AddValue(this_02,pFVar1 + (int)uVar18);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)this_02,lVar12,iVar7,false);
      iVar7 = param_1->ArrayNum;
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < iVar7);
  }
  if (local_108.InputData.TaggedData.ArrayNum == local_108.InputData.TaggedData.ArrayMax) {
    local_108.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_108.InputData,
                    &local_108.InputData.TaggedData.ArrayMax);
  }
  this_03 = (FPCGDataPtrWrapper *)
            (local_108.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_108.InputData.TaggedData.ArrayNum * 0x78);
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
  local_108.InputData.TaggedData.ArrayNum = local_108.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)pUVar11);
  this_03[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_108.Settings,&local_1a0);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_108,(UPCGNode *)local_218);
  do {
    if ((local_1a0.Object == (IPCGElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar4 = IPCGElement::Execute(local_1a0.Object,(FPCGContext *)local_218._0_8_);
  } while (!bVar4);
  iVar7 = (((FPCGDataCollection *)(local_218._0_8_ + 0x38))->TaggedData).ArrayNum;
  ::FString::FString((FString *)(local_218 + 0x28),"There is one output");
  FVar16 = (FName)L"";
  if (local_1e8._0_4_ != 0) {
    FVar16 = (FName)local_218._40_8_;
  }
  bVar4 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar16,iVar7,1);
  if ((FName)local_218._40_8_ != (FName)0x0) {
    FMemory::Free((void *)local_218._40_8_);
  }
  uVar3 = local_218._0_8_;
  if (bVar4) {
    if (((((FPCGDataCollection *)(local_218._0_8_ + 0x38))->TaggedData).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_218._8_8_ =
         *(undefined8 *)(((FPCGDataCollection *)(uVar3 + 0x38))->TaggedData).AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fe7e28:
      if ((FPCGMetadataAttribute<int> *)local_218._8_8_ == (FPCGMetadataAttribute<int> *)0x0)
      goto LAB_149fe7e48;
      pUVar13 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)(local_218 + 8),pUVar13);
      pFVar14 = (FPCGMetadataAttribute<int> *)local_218._8_8_;
      if (!bVar4) goto LAB_149fe7e48;
    }
    else {
      if ((FPCGMetadataAttribute<int> *)local_218._8_8_ != (FPCGMetadataAttribute<int> *)0x0) {
        UE::GC::MarkAsReachable((UObject *)local_218._8_8_);
        goto LAB_149fe7e28;
      }
LAB_149fe7e48:
      pFVar14 = (FPCGMetadataAttribute<int> *)0x0;
    }
    ::FString::FString(&local_1e0,"Output is an of the same type as input");
    if (pFVar14 == (FPCGMetadataAttribute<int> *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_148,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_148,0);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    if (!bVar4) {
      local_168.ComparisonIndex.Value = local_218._24_4_;
      local_168.Number = local_218._28_4_;
      FStack_160.Flag = PCGMetadataDomainID::Default.Flag;
      FStack_160._1_3_ = PCGMetadataDomainID::Default._1_3_;
      FStack_160.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FStack_160.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_128.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_128.Name.ComparisonIndex.Value = local_218._24_4_;
      local_128.Name.Number = local_218._28_4_;
      local_128.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_128.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_128.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      pFVar14 = (FPCGMetadataAttribute<int> *)
                UPCGMetadata::GetConstAttribute((UPCGMetadata *)pFVar14->_padding_,&local_128);
      if ((pFVar14 == (FPCGMetadataAttribute<int> *)0x0) || ((short)pFVar14->_padding_ != 2)) {
        pFVar14 = (FPCGMetadataAttribute<int> *)0x0;
      }
      ::FString::FString(&local_1d0,"Output metadata has the expected attribute");
      if (pFVar14 == (FPCGMetadataAttribute<int> *)0x0) {
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_138,L"Expected \'%s\' to be not null.");
        (*pcVar2)(this,&local_138,0);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        piVar15 = TArrayView<int_const_,int>::operator[](param_2,0);
        iVar7 = pFVar14->DefaultValue;
        iVar8 = *piVar15;
        TArrayView<FString_const_,int>::operator[](param_1,0);
        ::FString::PrintfImpl(&local_1c0,L"Default value %s, was parsed correctly");
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_1c0.Data.ArrayNum != 0) {
          FVar17.Data = local_1c0.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,iVar7,iVar8);
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          iVar7 = param_2->ArrayNum;
          uVar18 = 1;
          if (1 < iVar7) {
            lVar19 = 4;
            do {
              uVar6 = 0;
              if ((int)uVar18 < iVar7) {
                uVar6 = ~uVar18 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
              iVar7 = *(int *)(lVar19 + (longlong)param_2->DataPtr);
              iVar8 = FPCGMetadataAttributeBase::GetValueKey
                                ((FPCGMetadataAttributeBase *)pFVar14,(longlong)(int)(uVar18 - 1));
              iVar8 = FPCGMetadataAttribute<int>::GetValue(pFVar14,iVar8);
              uVar6 = 0;
              if ((int)uVar18 < param_1->ArrayNum) {
                uVar6 = ~uVar18 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
              ::FString::PrintfImpl(&local_1b0,L"Entry %d (%s) was parsed expectedly");
              FVar17.Data = (FScriptContainerElement *)L"";
              if (local_1b0.Data.ArrayNum != 0) {
                FVar17.Data = local_1b0.Data.AllocatorInstance.Data;
              }
              bVar4 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,iVar8,iVar7);
              if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
              }
              if (!bVar4) goto LAB_149fe8166;
              uVar18 = uVar18 + 1;
              lVar19 = lVar19 + 4;
              iVar7 = param_2->ArrayNum;
            } while ((int)uVar18 < iVar7);
          }
          bVar4 = true;
          goto LAB_149fe8168;
        }
      }
    }
  }
LAB_149fe8166:
  bVar4 = false;
LAB_149fe8168:
  if ((FPCGContext *)local_218._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_218._0_8_)(local_218._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_108);
  return bVar4;
}

// RunTestInternal<float> @ 149fe81b0

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
FPCGParseStringTestsBase::RunTestInternal<float>
          (FPCGParseStringTestsBase *this,TArrayView<FString_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2)

{
  float fVar1;
  UPCGMetadata *this_00;
  FString *pFVar2;
  code *pcVar3;
  float fVar4;
  FPCGContext *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  UPCGParseStringSettings *pUVar10;
  UObject *pUVar11;
  UPCGParamData *pUVar12;
  FPCGMetadataDomain *this_01;
  FObjectPtr_u_0 FVar13;
  long64 lVar14;
  UClass *pUVar15;
  FPCGMetadataAttribute<float> *this_02;
  float *pfVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  FPCGDataPtrWrapper *this_03;
  TArrayView<float_const_,int> *pTVar19;
  longlong lVar20;
  float fVar21;
  FPCGContext *local_res10;
  TArrayView<float_const_,int> *local_res18;
  FObjectPtr_u_0 local_res20;
  FName local_238;
  FName local_230;
  UClass *local_228;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  TSharedPtr<IPCGElement,1> local_1d0;
  FName local_1b8;
  FPCGMetadataDomainID local_1b0;
  FName local_198;
  FPCGMetadataDomainID FStack_190;
  FString local_178;
  FString local_168;
  FPCGAttributeIdentifier local_158;
  FTestData local_138;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_a8 [2];
  
  local_res18 = param_2;
  local_228 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_228 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_228);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_138,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_228);
  local_a8[0]._0_8_ = 0;
  local_a8[0]._40_8_ = 0;
  pUVar10 = PCGTestsCommon::GenerateSettings<UPCGParseStringSettings>(&local_138,local_a8);
  if ((pUVar10 == (UPCGParseStringSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                         ,0x14,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                         ,0x16,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  ::FName::FName(&local_238,L"InAttr");
  ::FName::FName(&local_230,L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar10->InputSource,local_238,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar10->_padding_,local_230,true);
  pUVar10->TargetType = Float;
  pUVar11 = GetTransientPackageAsObject();
  pUVar12 = NewObject<UPCGParamData>(pUVar11);
  iVar9 = param_1->ArrayNum;
  this_00 = (UPCGMetadata *)pUVar12->_padding_;
  if ((iVar9 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  local_1b8 = local_238;
  local_1b0.Flag = PCGMetadataDomainID::Default.Flag;
  local_1b0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_1b0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_1b0.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_1b0);
  FVar13.Handle = (UObject *)0x0;
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FVar13.Handle =
         (UObject *)
         FPCGMetadataDomain::CreateAttribute<FString>(this_01,local_1b8,param_1->DataPtr,true,false)
    ;
  }
  uVar18 = 1;
  if (1 < iVar9) {
    do {
      uVar8 = 0;
      if ((int)uVar18 < iVar9) {
        uVar8 = ~uVar18 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pFVar2 = param_1->DataPtr;
      lVar14 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar12->_padding_,-1);
      if ((lVar14 == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x24b,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      iVar9 = FPCGMetadataAttribute<FString>::AddValue
                        ((FPCGMetadataAttribute<FString> *)FVar13.Handle,pFVar2 + (int)uVar18);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)FVar13.Handle,lVar14,iVar9,false);
      iVar9 = param_1->ArrayNum;
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < iVar9);
  }
  if (local_138.InputData.TaggedData.ArrayNum == local_138.InputData.TaggedData.ArrayMax) {
    local_138.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_138.InputData,
                    &local_138.InputData.TaggedData.ArrayMax);
  }
  this_03 = (FPCGDataPtrWrapper *)
            (local_138.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_138.InputData.TaggedData.ArrayNum * 0x78);
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
  local_138.InputData.TaggedData.ArrayNum = local_138.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)pUVar12);
  this_03[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_138.Settings,&local_1d0);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_138,(UPCGNode *)&local_res10);
  do {
    if ((local_1d0.Object == (IPCGElement *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    bVar6 = IPCGElement::Execute(local_1d0.Object,local_res10);
  } while (!bVar6);
  iVar9 = (local_res10->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_220,"There is one output");
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_220.Data.ArrayNum != 0) {
    FVar17.Data = local_220.Data.AllocatorInstance.Data;
  }
  bVar6 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,iVar9,1)
  ;
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  pFVar5 = local_res10;
  if (bVar6) {
    if (((local_res10->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    local_res20 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)(pFVar5->OutputData).TaggedData.AllocatorInstance.Data)->Handle
    ;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fe864b:
      if ((FPCGMetadataAttribute<FString> *)local_res20.Handle ==
          (FPCGMetadataAttribute<FString> *)0x0) goto LAB_149fe866f;
      pUVar15 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar15);
      FVar13 = local_res20;
      if (!bVar6) goto LAB_149fe866f;
    }
    else {
      if ((FPCGMetadataAttribute<FString> *)local_res20.Handle !=
          (FPCGMetadataAttribute<FString> *)0x0) {
        UE::GC::MarkAsReachable(local_res20.Handle);
        goto LAB_149fe864b;
      }
LAB_149fe866f:
      FVar13.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_210,"Output is an of the same type as input");
    if ((FPCGMetadataAttribute<FString> *)FVar13.Handle == (FPCGMetadataAttribute<FString> *)0x0) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_178,L"Expected \'%s\' to be not null.");
      (*pcVar3)(this,&local_178,0);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    if (!bVar6) {
      local_198 = local_230;
      FStack_190.Flag = PCGMetadataDomainID::Default.Flag;
      FStack_190._1_3_ = PCGMetadataDomainID::Default._1_3_;
      FStack_190.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FStack_190.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_158.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_158.Name = local_230;
      local_158.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_158.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_158.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      this_02 = (FPCGMetadataAttribute<float> *)
                UPCGMetadata::GetConstAttribute
                          (*(UPCGMetadata **)&FVar13.Handle[1].field_0x10,&local_158);
      if ((this_02 == (FPCGMetadataAttribute<float> *)0x0) || ((short)this_02->_padding_ != 0)) {
        this_02 = (FPCGMetadataAttribute<float> *)0x0;
      }
      ::FString::FString(&local_200,"Output metadata has the expected attribute");
      if (this_02 == (FPCGMetadataAttribute<float> *)0x0) {
        pcVar3 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_168,L"Expected \'%s\' to be not null.");
        (*pcVar3)(this,&local_168,0);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      pTVar19 = local_res18;
      if (!bVar6) {
        pfVar16 = TArrayView<float_const_,int>::operator[](local_res18,0);
        fVar1 = this_02->DefaultValue;
        fVar21 = *pfVar16;
        TArrayView<FString_const_,int>::operator[](param_1,0);
        ::FString::PrintfImpl(&local_1f0,L"Default value %s, was parsed correctly");
        fVar4 = __real_38d1b717;
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_1f0.Data.ArrayNum != 0) {
          FVar17.Data = local_1f0.Data.AllocatorInstance.Data;
        }
        bVar6 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,fVar1,fVar21,
                           __real_38d1b717);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          iVar9 = pTVar19->ArrayNum;
          uVar18 = 1;
          if (1 < iVar9) {
            lVar20 = 4;
            do {
              uVar8 = 0;
              if ((int)uVar18 < iVar9) {
                uVar8 = ~uVar18 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              fVar1 = *(float *)(lVar20 + (longlong)pTVar19->DataPtr);
              iVar9 = FPCGMetadataAttributeBase::GetValueKey
                                ((FPCGMetadataAttributeBase *)this_02,(longlong)(int)(uVar18 - 1));
              fVar21 = FPCGMetadataAttribute<float>::GetValue(this_02,iVar9);
              uVar8 = 0;
              if ((int)uVar18 < param_1->ArrayNum) {
                uVar8 = ~uVar18 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              ::FString::PrintfImpl(&local_1e0,L"Entry %d (%s) was parsed expectedly");
              FVar17.Data = (FScriptContainerElement *)L"";
              if (local_1e0.Data.ArrayNum != 0) {
                FVar17.Data = local_1e0.Data.AllocatorInstance.Data;
              }
              bVar6 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,fVar21,fVar1,
                                 fVar4);
              if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
              }
              if (!bVar6) goto LAB_149fe89a2;
              uVar18 = uVar18 + 1;
              lVar20 = lVar20 + 4;
              iVar9 = local_res18->ArrayNum;
              pTVar19 = local_res18;
            } while ((int)uVar18 < iVar9);
          }
          bVar6 = true;
          goto LAB_149fe89a4;
        }
      }
    }
  }
LAB_149fe89a2:
  bVar6 = false;
LAB_149fe89a4:
  if (local_res10 != (FPCGContext *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d0.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_138);
  return bVar6;
}

// RunTestInternal<double> @ 149fe8a30

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
FPCGParseStringTestsBase::RunTestInternal<double>
          (FPCGParseStringTestsBase *this,TArrayView<FString_const_,int> *param_1,
          TArrayView<double_const_,int> *param_2)

{
  double dVar1;
  double dVar2;
  UPCGMetadata *this_00;
  FString *pFVar3;
  code *pcVar4;
  double dVar5;
  FPCGContext *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  UPCGParseStringSettings *pUVar11;
  UObject *pUVar12;
  UPCGParamData *pUVar13;
  FPCGMetadataDomain *this_01;
  FObjectPtr_u_0 FVar14;
  long64 lVar15;
  UClass *pUVar16;
  FPCGMetadataAttribute<double> *this_02;
  double *pdVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  FPCGDataPtrWrapper *this_03;
  TArrayView<double_const_,int> *pTVar20;
  longlong lVar21;
  FPCGContext *local_res10;
  TArrayView<double_const_,int> *local_res18;
  FObjectPtr_u_0 local_res20;
  FName local_238;
  FName local_230;
  UClass *local_228;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  TSharedPtr<IPCGElement,1> local_1d0;
  FName local_1b8;
  FPCGMetadataDomainID local_1b0;
  FName local_198;
  FPCGMetadataDomainID FStack_190;
  FString local_178;
  FString local_168;
  FPCGAttributeIdentifier local_158;
  FTestData local_138;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_a8 [2];
  
  local_res18 = param_2;
  local_228 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_228 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_228);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_138,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_228);
  local_a8[0]._0_8_ = 0;
  local_a8[0]._40_8_ = 0;
  pUVar11 = PCGTestsCommon::GenerateSettings<UPCGParseStringSettings>(&local_138,local_a8);
  if ((pUVar11 == (UPCGParseStringSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                         ,0x14,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                         ,0x16,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  ::FName::FName(&local_238,L"InAttr");
  ::FName::FName(&local_230,L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar11->InputSource,local_238,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar11->_padding_,local_230,true);
  pUVar11->TargetType = Double;
  pUVar12 = GetTransientPackageAsObject();
  pUVar13 = NewObject<UPCGParamData>(pUVar12);
  iVar10 = param_1->ArrayNum;
  this_00 = (UPCGMetadata *)pUVar13->_padding_;
  if ((iVar10 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  local_1b8 = local_238;
  local_1b0.Flag = PCGMetadataDomainID::Default.Flag;
  local_1b0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_1b0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_1b0.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_1b0);
  FVar14.Handle = (UObject *)0x0;
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FVar14.Handle =
         (UObject *)
         FPCGMetadataDomain::CreateAttribute<FString>(this_01,local_1b8,param_1->DataPtr,true,false)
    ;
  }
  uVar19 = 1;
  if (1 < iVar10) {
    do {
      uVar9 = 0;
      if ((int)uVar19 < iVar10) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pFVar3 = param_1->DataPtr;
      lVar15 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar13->_padding_,-1);
      if ((lVar15 == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x24b,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iVar10 = FPCGMetadataAttribute<FString>::AddValue
                         ((FPCGMetadataAttribute<FString> *)FVar14.Handle,pFVar3 + (int)uVar19);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)FVar14.Handle,lVar15,iVar10,false);
      iVar10 = param_1->ArrayNum;
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < iVar10);
  }
  if (local_138.InputData.TaggedData.ArrayNum == local_138.InputData.TaggedData.ArrayMax) {
    local_138.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_138.InputData,
                    &local_138.InputData.TaggedData.ArrayMax);
  }
  this_03 = (FPCGDataPtrWrapper *)
            (local_138.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_138.InputData.TaggedData.ArrayNum * 0x78);
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
  local_138.InputData.TaggedData.ArrayNum = local_138.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)pUVar13);
  this_03[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_138.Settings,&local_1d0);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_138,(UPCGNode *)&local_res10);
  do {
    if ((local_1d0.Object == (IPCGElement *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    bVar7 = IPCGElement::Execute(local_1d0.Object,local_res10);
  } while (!bVar7);
  iVar10 = (local_res10->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_220,"There is one output");
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_220.Data.ArrayNum != 0) {
    FVar18.Data = local_220.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,iVar10,1);
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  pFVar6 = local_res10;
  if (bVar7) {
    if (((local_res10->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    local_res20 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)(pFVar6->OutputData).TaggedData.AllocatorInstance.Data)->Handle
    ;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fe8ecb:
      if ((FPCGMetadataAttribute<FString> *)local_res20.Handle ==
          (FPCGMetadataAttribute<FString> *)0x0) goto LAB_149fe8eef;
      pUVar16 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar16);
      FVar14 = local_res20;
      if (!bVar7) goto LAB_149fe8eef;
    }
    else {
      if ((FPCGMetadataAttribute<FString> *)local_res20.Handle !=
          (FPCGMetadataAttribute<FString> *)0x0) {
        UE::GC::MarkAsReachable(local_res20.Handle);
        goto LAB_149fe8ecb;
      }
LAB_149fe8eef:
      FVar14.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_210,"Output is an of the same type as input");
    if ((FPCGMetadataAttribute<FString> *)FVar14.Handle == (FPCGMetadataAttribute<FString> *)0x0) {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_178,L"Expected \'%s\' to be not null.");
      (*pcVar4)(this,&local_178,0);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      local_198 = local_230;
      FStack_190.Flag = PCGMetadataDomainID::Default.Flag;
      FStack_190._1_3_ = PCGMetadataDomainID::Default._1_3_;
      FStack_190.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FStack_190.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_158.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_158.Name = local_230;
      local_158.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_158.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_158.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      this_02 = (FPCGMetadataAttribute<double> *)
                UPCGMetadata::GetConstAttribute
                          (*(UPCGMetadata **)&FVar14.Handle[1].field_0x10,&local_158);
      if ((this_02 == (FPCGMetadataAttribute<double> *)0x0) || ((short)this_02->_padding_ != 1)) {
        this_02 = (FPCGMetadataAttribute<double> *)0x0;
      }
      ::FString::FString(&local_200,"Output metadata has the expected attribute");
      if (this_02 == (FPCGMetadataAttribute<double> *)0x0) {
        pcVar4 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_168,L"Expected \'%s\' to be not null.");
        (*pcVar4)(this,&local_168,0);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      pTVar20 = local_res18;
      if (!bVar7) {
        pdVar17 = TArrayView<double_const_,int>::operator[](local_res18,0);
        dVar1 = this_02->DefaultValue;
        dVar2 = *pdVar17;
        TArrayView<FString_const_,int>::operator[](param_1,0);
        ::FString::PrintfImpl(&local_1f0,L"Default value %s, was parsed correctly");
        dVar5 = __real_3f1a36e2e0000000;
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_1f0.Data.ArrayNum != 0) {
          FVar18.Data = local_1f0.Data.AllocatorInstance.Data;
        }
        bVar7 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,dVar1,dVar2,
                           __real_3f1a36e2e0000000);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          iVar10 = pTVar20->ArrayNum;
          uVar19 = 1;
          if (1 < iVar10) {
            lVar21 = 8;
            do {
              uVar9 = 0;
              if ((int)uVar19 < iVar10) {
                uVar9 = ~uVar19 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              dVar1 = *(double *)(lVar21 + (longlong)pTVar20->DataPtr);
              iVar10 = FPCGMetadataAttributeBase::GetValueKey
                                 ((FPCGMetadataAttributeBase *)this_02,(longlong)(int)(uVar19 - 1));
              dVar2 = FPCGMetadataAttribute<double>::GetValue(this_02,iVar10);
              uVar9 = 0;
              if ((int)uVar19 < param_1->ArrayNum) {
                uVar9 = ~uVar19 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              ::FString::PrintfImpl(&local_1e0,L"Entry %d (%s) was parsed expectedly");
              FVar18.Data = (FScriptContainerElement *)L"";
              if (local_1e0.Data.ArrayNum != 0) {
                FVar18.Data = local_1e0.Data.AllocatorInstance.Data;
              }
              bVar7 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,dVar2,dVar1,
                                 dVar5);
              if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
              }
              if (!bVar7) goto LAB_149fe9222;
              uVar19 = uVar19 + 1;
              lVar21 = lVar21 + 8;
              iVar10 = local_res18->ArrayNum;
              pTVar20 = local_res18;
            } while ((int)uVar19 < iVar10);
          }
          bVar7 = true;
          goto LAB_149fe9224;
        }
      }
    }
  }
LAB_149fe9222:
  bVar7 = false;
LAB_149fe9224:
  if (local_res10 != (FPCGContext *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d0.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_138);
  return bVar7;
}

// RunTestInternal<UE::Math::TQuat<double>_> @ 149fe92b0

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
FPCGParseStringTestsBase::RunTestInternal<UE::Math::TQuat<double>_>
          (FPCGParseStringTestsBase *this,TArrayView<FString_const_,int> *param_1,
          TArrayView<UE::Math::TQuat<double>_const_,int> *param_2)

{
  double *pdVar1;
  UPCGMetadata *this_00;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  FPCGContext *pFVar5;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UPCGParseStringSettings *pUVar10;
  UObject *pUVar11;
  UPCGParamData *pUVar12;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<FString> *this_02;
  long64 lVar13;
  UClass *pUVar14;
  TQuat<double> *pTVar15;
  FString *pFVar16;
  uint uVar17;
  FString *pFVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  FPCGDataPtrWrapper *this_03;
  FObjectPtr_u_0 FVar21;
  longlong lVar22;
  longlong lVar23;
  FPCGContext *local_res20;
  FObjectPtr_u_0 local_248;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *local_240;
  FName local_238;
  FName local_230;
  UClass *local_228;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  TSharedPtr<IPCGElement,1> local_1d0;
  TQuat<double> local_1b8;
  FName local_198;
  FPCGMetadataDomainID local_190;
  FString local_178;
  FString local_168;
  FString local_158;
  FPCGAttributeIdentifier local_148;
  TQuat<double> local_128;
  FTestData local_108;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_78;
  
  local_228 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_228 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_228);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_108,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_228);
  this_02 = (FPCGMetadataAttribute<FString> *)0x0;
  local_78._0_8_ = 0;
  local_78._40_8_ = 0;
  pUVar10 = PCGTestsCommon::GenerateSettings<UPCGParseStringSettings>(&local_108,&local_78);
  if ((pUVar10 == (UPCGParseStringSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                         ,0x14,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                         ,0x16,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  ::FName::FName(&local_238,L"InAttr");
  ::FName::FName(&local_230,L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar10->InputSource,local_238,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar10->_padding_,local_230,true);
  pUVar10->TargetType = Quaternion;
  pUVar11 = GetTransientPackageAsObject();
  pUVar12 = NewObject<UPCGParamData>(pUVar11);
  iVar9 = param_1->ArrayNum;
  this_00 = (UPCGMetadata *)pUVar12->_padding_;
  if ((iVar9 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  local_198 = local_238;
  local_190.Flag = PCGMetadataDomainID::Default.Flag;
  local_190._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_190.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_190.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_190);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    this_02 = FPCGMetadataDomain::CreateAttribute<FString>
                        (this_01,local_198,param_1->DataPtr,true,false);
  }
  uVar20 = 1;
  if (1 < iVar9) {
    do {
      uVar17 = 0;
      if ((int)uVar20 < iVar9) {
        uVar17 = ~uVar20 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      pFVar18 = param_1->DataPtr;
      lVar13 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar12->_padding_,-1);
      if ((lVar13 == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x24b,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      iVar9 = FPCGMetadataAttribute<FString>::AddValue(this_02,pFVar18 + (int)uVar20);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)this_02,lVar13,iVar9,false);
      iVar9 = param_1->ArrayNum;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar9);
  }
  if (local_108.InputData.TaggedData.ArrayNum == local_108.InputData.TaggedData.ArrayMax) {
    local_108.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_108.InputData,
                    &local_108.InputData.TaggedData.ArrayMax);
  }
  this_03 = (FPCGDataPtrWrapper *)
            (local_108.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_108.InputData.TaggedData.ArrayNum * 0x78);
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
  local_108.InputData.TaggedData.ArrayNum = local_108.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)pUVar12);
  this_03[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_108.Settings,&local_1d0);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_108,(UPCGNode *)&local_res20);
  do {
    if ((local_1d0.Object == (IPCGElement *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    bVar7 = IPCGElement::Execute(local_1d0.Object,local_res20);
  } while (!bVar7);
  iVar9 = (local_res20->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_220,"There is one output");
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_220.Data.ArrayNum != 0) {
    FVar19.Data = local_220.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar19.Data,iVar9,1)
  ;
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  pFVar5 = local_res20;
  if (bVar7) {
    if (((local_res20->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    local_248 = (FObjectPtr_u_0)
                ((FObjectPtr_u_0 *)(pFVar5->OutputData).TaggedData.AllocatorInstance.Data)->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fe9736:
      if (local_248.Handle == (UObject *)0x0) goto LAB_149fe9756;
      pUVar14 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_248,pUVar14);
      FVar21 = local_248;
      if (!bVar7) goto LAB_149fe9756;
    }
    else {
      if (local_248.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_248.Handle);
        goto LAB_149fe9736;
      }
LAB_149fe9756:
      FVar21.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_210,"Output is an of the same type as input");
    if (FVar21.Handle == (UObject *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_178,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_178,0);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      local_1b8.X = (double)local_230;
      local_1b8.Y = (double)PCGMetadataDomainID::Default._0_8_;
      local_1b8.Z = (double)PCGMetadataDomainID::Default.DebugName;
      local_148.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_148.Name = local_230;
      local_148.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_148.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_148.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      local_240 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)
                  UPCGMetadata::GetConstAttribute
                            (*(UPCGMetadata **)&FVar21.Handle[1].field_0x10,&local_148);
      if ((local_240 == (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) ||
         (*(short *)&local_240->field_0x70 != 7)) {
        local_240 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0;
      }
      pFVar6 = local_240;
      ::FString::FString(&local_200,"Output metadata has the expected attribute");
      if (pFVar6 == (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) {
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_168,L"Expected \'%s\' to be not null.");
        (*pcVar2)(this,&local_168,0);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        pTVar15 = TArrayView<UE::Math::TQuat<double>_const_,int>::operator[](param_2,0);
        local_1b8.X = (pFVar6->DefaultValue).X;
        local_1b8.Y = (pFVar6->DefaultValue).Y;
        local_1b8.Z = (pFVar6->DefaultValue).Z;
        local_1b8.W = (pFVar6->DefaultValue).W;
        TArrayView<FString_const_,int>::operator[](param_1,0);
        ::FString::PrintfImpl(&local_1f0,L"Default value %s, was parsed correctly");
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_1f0.Data.ArrayNum != 0) {
          FVar19.Data = local_1f0.Data.AllocatorInstance.Data;
        }
        bVar7 = FAutomationTestBase::TestEqual<UE::Math::TQuat<double>_>
                          ((FAutomationTestBase *)this,(wchar_t *)FVar19.Data,&local_1b8,pTVar15);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          iVar9 = param_2->ArrayNum;
          uVar20 = 1;
          if (1 < iVar9) {
            lVar22 = 0x20;
            do {
              uVar17 = 0;
              if ((int)uVar20 < iVar9) {
                uVar17 = ~uVar20 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
              pTVar15 = param_2->DataPtr;
              iVar9 = FPCGMetadataAttributeBase::GetValueKey
                                ((FPCGMetadataAttributeBase *)local_240,(longlong)(int)(uVar20 - 1))
              ;
              FPCGMetadataAttribute<UE::Math::TQuat<double>_>::GetValue(local_240,&local_128,iVar9);
              uVar17 = 0;
              if ((int)uVar20 < param_1->ArrayNum) {
                uVar17 = ~uVar20 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
              pFVar18 = &local_1e0;
              pFVar16 = ::FString::PrintfImpl(pFVar18,L"Entry %d (%s) was parsed expectedly");
              pdVar1 = (double *)((longlong)&pTVar15->Z + lVar22);
              lVar23 = -(ulonglong)(pdVar1[1] != local_128.W);
              auVar3._8_4_ = (int)lVar23;
              auVar3._0_8_ = -(ulonglong)(*pdVar1 != local_128.Z);
              auVar3._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
              uVar17 = movmskpd((int)pFVar18,auVar3);
              pdVar1 = (double *)((longlong)&pTVar15->X + lVar22);
              lVar23 = -(ulonglong)(local_128.Y != pdVar1[1]);
              auVar4._8_4_ = (int)lVar23;
              auVar4._0_8_ = -(ulonglong)(local_128.X != *pdVar1);
              auVar4._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
              iVar9 = movmskpd((int)pFVar16,auVar4);
              if ((uVar17 & 0x3fffffff) == 0 && iVar9 == 0) {
                bVar7 = false;
              }
              else {
                pcVar2 = *(code **)(*(longlong *)this + 0x28);
                ::FString::PrintfImpl(&local_158,L"%s: The two values are not equal.");
                (*pcVar2)(this,&local_158,0);
                if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_158.Data.AllocatorInstance.Data);
                }
                bVar7 = true;
              }
              if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
              }
              if (bVar7) goto LAB_149fe9aea;
              uVar20 = uVar20 + 1;
              lVar22 = lVar22 + 0x20;
              iVar9 = param_2->ArrayNum;
            } while ((int)uVar20 < iVar9);
          }
          bVar7 = true;
          goto LAB_149fe9aec;
        }
      }
    }
  }
LAB_149fe9aea:
  bVar7 = false;
LAB_149fe9aec:
  if (local_res20 != (FPCGContext *)0x0) {
    (**(code **)local_res20->_padding_)(local_res20,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d0.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_108);
  return bVar7;
}

// RunTestInternal<UE::Math::TRotator<double>_> @ 149fe9b60

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
FPCGParseStringTestsBase::RunTestInternal<UE::Math::TRotator<double>_>
          (FPCGParseStringTestsBase *this,TArrayView<FString_const_,int> *param_1,
          TArrayView<UE::Math::TRotator<double>_const_,int> *param_2)

{
  double *pdVar1;
  double dVar2;
  FName FVar3;
  UPCGMetadata *this_00;
  FString *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  FName FVar8;
  double dVar9;
  float fVar10;
  FPCGContext *pFVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  UPCGParseStringSettings *pUVar18;
  UObject *pUVar19;
  UPCGParamData *pUVar20;
  FPCGMetadataDomain *this_01;
  FObjectPtr_u_0 FVar21;
  long64 lVar22;
  UClass *pUVar23;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *this_02;
  TRotator<double> *pTVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  FPCGDataPtrWrapper *this_03;
  TArrayView<UE::Math::TRotator<double>_const_,int> *pTVar27;
  longlong lVar28;
  FPCGContext *local_res10;
  TArrayView<UE::Math::TRotator<double>_const_,int> *local_res18;
  FObjectPtr_u_0 local_res20;
  FName local_2d8;
  FName local_2d0;
  TRotator<double> local_2c8;
  UClass *local_2a8;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  TSharedPtr<IPCGElement,1> local_250;
  FName local_238;
  FPCGMetadataDomainID local_230;
  FString local_218;
  FString local_208;
  FPCGAttributeIdentifier local_1f8;
  TRotator<double> local_1d8;
  TRotator<double> local_1b8;
  TRotator<double> local_198;
  TRotator<double> local_178;
  FTestData local_158;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_c8 [2];
  
  local_res18 = param_2;
  local_2a8 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2a8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2a8);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_158,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_2a8);
  local_c8[0]._0_8_ = 0;
  local_c8[0]._40_8_ = 0;
  pUVar18 = PCGTestsCommon::GenerateSettings<UPCGParseStringSettings>(&local_158,local_c8);
  if ((pUVar18 == (UPCGParseStringSettings *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                          ,0x14,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                          ,0x16,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  ::FName::FName(&local_2d8,L"InAttr");
  ::FName::FName(&local_2d0,L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar18->InputSource,local_2d8,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar18->_padding_,local_2d0,true);
  pUVar18->TargetType = Rotator;
  pUVar19 = GetTransientPackageAsObject();
  pUVar20 = NewObject<UPCGParamData>(pUVar19);
  iVar17 = param_1->ArrayNum;
  this_00 = (UPCGMetadata *)pUVar20->_padding_;
  if ((iVar17 < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  local_238 = local_2d8;
  local_230.Flag = PCGMetadataDomainID::Default.Flag;
  local_230._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_230.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_230.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_230);
  FVar21.Handle = (UObject *)0x0;
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FVar21.Handle =
         (UObject *)
         FPCGMetadataDomain::CreateAttribute<FString>(this_01,local_238,param_1->DataPtr,true,false)
    ;
  }
  uVar26 = 1;
  if (1 < iVar17) {
    do {
      uVar16 = 0;
      if ((int)uVar26 < iVar17) {
        uVar16 = ~uVar26 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        uVar15 = (*pcVar5)();
        return (bool)uVar15;
      }
      pFVar4 = param_1->DataPtr;
      lVar22 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar20->_padding_,-1);
      if ((lVar22 == -1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ItemKey != PCGInvalidEntryKey",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                              ,0x24b,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        uVar15 = (*pcVar5)();
        return (bool)uVar15;
      }
      iVar17 = FPCGMetadataAttribute<FString>::AddValue
                         ((FPCGMetadataAttribute<FString> *)FVar21.Handle,pFVar4 + (int)uVar26);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)FVar21.Handle,lVar22,iVar17,false);
      iVar17 = param_1->ArrayNum;
      uVar26 = uVar26 + 1;
    } while ((int)uVar26 < iVar17);
  }
  if (local_158.InputData.TaggedData.ArrayNum == local_158.InputData.TaggedData.ArrayMax) {
    local_158.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_158.InputData,
                    &local_158.InputData.TaggedData.ArrayMax);
  }
  this_03 = (FPCGDataPtrWrapper *)
            (local_158.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_158.InputData.TaggedData.ArrayNum * 0x78);
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
  local_158.InputData.TaggedData.ArrayNum = local_158.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)pUVar20);
  this_03[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_158.Settings,&local_250);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_158,(UPCGNode *)&local_res10);
  do {
    if ((local_250.Object == (IPCGElement *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return (bool)uVar15;
    }
    bVar14 = IPCGElement::Execute(local_250.Object,local_res10);
  } while (!bVar14);
  iVar17 = (local_res10->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_2a0,"There is one output");
  FVar25.Data = (FScriptContainerElement *)L"";
  if (local_2a0.Data.ArrayNum != 0) {
    FVar25.Data = local_2a0.Data.AllocatorInstance.Data;
  }
  bVar14 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar25.Data,iVar17,1);
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  pFVar11 = local_res10;
  if (bVar14) {
    if (((local_res10->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return (bool)uVar15;
    }
    local_res20 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)(pFVar11->OutputData).TaggedData.AllocatorInstance.Data)->
                  Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fea01d:
      if ((FPCGMetadataAttribute<FString> *)local_res20.Handle ==
          (FPCGMetadataAttribute<FString> *)0x0) goto LAB_149fea041;
      pUVar23 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar14 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar23);
      FVar21 = local_res20;
      if (!bVar14) goto LAB_149fea041;
    }
    else {
      if ((FPCGMetadataAttribute<FString> *)local_res20.Handle !=
          (FPCGMetadataAttribute<FString> *)0x0) {
        UE::GC::MarkAsReachable(local_res20.Handle);
        goto LAB_149fea01d;
      }
LAB_149fea041:
      FVar21.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_290,"Output is an of the same type as input");
    if ((FPCGMetadataAttribute<FString> *)FVar21.Handle == (FPCGMetadataAttribute<FString> *)0x0) {
      pcVar5 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_218,L"Expected \'%s\' to be not null.");
      (*pcVar5)(this,&local_218,0);
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    if (!bVar14) {
      local_2c8.Pitch = (double)local_2d0;
      local_2c8.Yaw = (double)PCGMetadataDomainID::Default._0_8_;
      local_2c8.Roll = (double)PCGMetadataDomainID::Default.DebugName;
      local_1f8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_1f8.Name = local_2d0;
      local_1f8.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_1f8.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_1f8.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      this_02 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)
                UPCGMetadata::GetConstAttribute
                          (*(UPCGMetadata **)&FVar21.Handle[1].field_0x10,&local_1f8);
      if ((this_02 == (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) ||
         ((short)this_02->_padding_ != 0xb)) {
        this_02 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0;
      }
      ::FString::FString(&local_280,"Output metadata has the expected attribute");
      if (this_02 == (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) {
        pcVar5 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_208,L"Expected \'%s\' to be not null.");
        (*pcVar5)(this,&local_208,0);
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        bVar14 = true;
      }
      else {
        bVar14 = false;
      }
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
      pTVar27 = local_res18;
      if (!bVar14) {
        pTVar24 = TArrayView<UE::Math::TRotator<double>_const_,int>::operator[](local_res18,0);
        dVar6 = (this_02->DefaultValue).Pitch;
        dVar7 = (this_02->DefaultValue).Yaw;
        dVar2 = (this_02->DefaultValue).Roll;
        FVar8 = (FName)pTVar24->Pitch;
        dVar9 = pTVar24->Yaw;
        FVar3 = (FName)pTVar24->Roll;
        TArrayView<FString_const_,int>::operator[](param_1,0);
        ::FString::PrintfImpl(&local_270,L"Default value %s, was parsed correctly");
        fVar10 = __real_38d1b717;
        FVar25.Data = (FScriptContainerElement *)L"";
        if (local_270.Data.ArrayNum != 0) {
          FVar25.Data = local_270.Data.AllocatorInstance.Data;
        }
        local_2c8.Pitch = (double)FVar8;
        local_2c8.Yaw = dVar9;
        local_2c8.Roll = (double)FVar3;
        local_1d8.Pitch = dVar6;
        local_1d8.Yaw = dVar7;
        local_1d8.Roll = dVar2;
        bVar14 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar25.Data,&local_1d8,&local_2c8
                            ,__real_38d1b717);
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        if (bVar14) {
          iVar17 = pTVar27->ArrayNum;
          uVar26 = 1;
          if (1 < iVar17) {
            lVar28 = 0x18;
            do {
              uVar16 = 0;
              if ((int)uVar26 < iVar17) {
                uVar16 = ~uVar26 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar14)) {
                pcVar5 = (code *)swi(3);
                uVar15 = (*pcVar5)();
                return (bool)uVar15;
              }
              pdVar1 = (double *)((longlong)&pTVar27->DataPtr->Pitch + lVar28);
              dVar6 = *pdVar1;
              dVar7 = pdVar1[1];
              dVar2 = *(double *)((longlong)&pTVar27->DataPtr->Roll + lVar28);
              iVar17 = FPCGMetadataAttributeBase::GetValueKey
                                 ((FPCGMetadataAttributeBase *)this_02,(longlong)(int)(uVar26 - 1));
              FPCGMetadataAttribute<UE::Math::TRotator<double>_>::GetValue
                        (this_02,&local_1b8,iVar17);
              dVar13 = local_1b8.Roll;
              dVar12 = local_1b8.Yaw;
              dVar9 = local_1b8.Pitch;
              uVar16 = 0;
              if ((int)uVar26 < param_1->ArrayNum) {
                uVar16 = ~uVar26 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar14)) {
                pcVar5 = (code *)swi(3);
                uVar15 = (*pcVar5)();
                return (bool)uVar15;
              }
              ::FString::PrintfImpl(&local_260,L"Entry %d (%s) was parsed expectedly");
              FVar25.Data = (FScriptContainerElement *)L"";
              if (local_260.Data.ArrayNum != 0) {
                FVar25.Data = local_260.Data.AllocatorInstance.Data;
              }
              local_178.Pitch = dVar9;
              local_178.Yaw = dVar12;
              local_178.Roll = dVar13;
              local_198.Pitch = dVar6;
              local_198.Yaw = dVar7;
              local_198.Roll = dVar2;
              bVar14 = FAutomationTestBase::TestEqual
                                 ((FAutomationTestBase *)this,(wchar_t *)FVar25.Data,&local_178,
                                  &local_198,fVar10);
              if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_260.Data.AllocatorInstance.Data);
              }
              if (!bVar14) goto LAB_149fea3d2;
              uVar26 = uVar26 + 1;
              lVar28 = lVar28 + 0x18;
              iVar17 = local_res18->ArrayNum;
              pTVar27 = local_res18;
            } while ((int)uVar26 < iVar17);
          }
          bVar14 = true;
          goto LAB_149fea3d4;
        }
      }
    }
  }
LAB_149fea3d2:
  bVar14 = false;
LAB_149fea3d4:
  if (local_res10 != (FPCGContext *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_250.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_158);
  return bVar14;
}

// RunTestInternal<UE::Math::TTransform<double>_> @ 149fea470

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
FPCGParseStringTestsBase::RunTestInternal<UE::Math::TTransform<double>_>
          (FPCGParseStringTestsBase *this,TArrayView<FString_const_,int> *param_1,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_2)

{
  double *pdVar1;
  UPCGMetadata *this_00;
  FString *pFVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  bool bVar26;
  undefined1 uVar27;
  uint uVar28;
  int iVar29;
  UPCGParseStringSettings *pUVar30;
  UObject *pUVar31;
  UPCGParamData *pUVar32;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<FString> *pFVar33;
  long64 lVar34;
  UClass *pUVar35;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *this_02;
  TTransform<double> *pTVar36;
  ForAnyElementType FVar37;
  uint uVar38;
  FPCGDataPtrWrapper *this_03;
  FName FVar39;
  longlong lVar40;
  undefined1 auStackY_4e8 [32];
  undefined1 local_4b8 [80];
  UClass *local_468;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  TSharedPtr<IPCGElement,1> local_410;
  double local_400;
  double dStack_3f8;
  FName local_3e8;
  FPCGMetadataDomainID local_3e0;
  FString local_3c8;
  FString local_3b8;
  FPCGAttributeIdentifier local_3a8;
  FTestData local_388;
  TTransform<double> local_2f8;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_178;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_4b8._32_8_ = this;
  local_4b8._40_8_ = param_2;
  local_468 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_468 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_468);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_388,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_468);
  local_178._0_8_ = 0;
  local_178._40_8_ = 0;
  pUVar30 = PCGTestsCommon::GenerateSettings<UPCGParseStringSettings>(&local_388,&local_178);
  if ((pUVar30 == (UPCGParseStringSettings *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                          ,0x14,L""), bVar26)) {
    pcVar4 = (code *)swi(3);
    uVar27 = (*pcVar4)();
    return (bool)uVar27;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                          ,0x16,L""), bVar26)) {
    pcVar4 = (code *)swi(3);
    uVar27 = (*pcVar4)();
    return (bool)uVar27;
  }
  ::FName::FName((FName *)(local_4b8 + 0x10),L"InAttr");
  ::FName::FName((FName *)(local_4b8 + 0x18),L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar30->InputSource,(FName)local_4b8._16_8_,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar30->_padding_,(FName)local_4b8._24_8_,true);
  pUVar30->TargetType = Transform;
  pUVar31 = GetTransientPackageAsObject();
  pUVar32 = NewObject<UPCGParamData>(pUVar31);
  iVar29 = param_1->ArrayNum;
  this_00 = (UPCGMetadata *)pUVar32->_padding_;
  if ((iVar29 < 1) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar26)) {
    pcVar4 = (code *)swi(3);
    uVar27 = (*pcVar4)();
    return (bool)uVar27;
  }
  local_3e8.ComparisonIndex.Value = local_4b8._16_4_;
  local_3e8.Number = local_4b8._20_4_;
  local_3e0.Flag = PCGMetadataDomainID::Default.Flag;
  local_3e0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_3e0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_3e0.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_3e0);
  pFVar33 = (FPCGMetadataAttribute<FString> *)0x0;
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    pFVar33 = FPCGMetadataDomain::CreateAttribute<FString>
                        (this_01,local_3e8,param_1->DataPtr,true,false);
  }
  uVar38 = 1;
  if (1 < iVar29) {
    do {
      uVar28 = 0;
      if ((int)uVar38 < iVar29) {
        uVar28 = ~uVar38 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar26)) {
        pcVar4 = (code *)swi(3);
        uVar27 = (*pcVar4)();
        return (bool)uVar27;
      }
      pFVar2 = param_1->DataPtr;
      lVar34 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar32->_padding_,-1);
      if ((lVar34 == -1) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("ItemKey != PCGInvalidEntryKey",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                              ,0x24b,L""), bVar26)) {
        pcVar4 = (code *)swi(3);
        uVar27 = (*pcVar4)();
        return (bool)uVar27;
      }
      iVar29 = FPCGMetadataAttribute<FString>::AddValue(pFVar33,pFVar2 + (int)uVar38);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)pFVar33,lVar34,iVar29,false);
      iVar29 = param_1->ArrayNum;
      uVar38 = uVar38 + 1;
      this = (FPCGParseStringTestsBase *)local_4b8._32_8_;
    } while ((int)uVar38 < iVar29);
  }
  if (local_388.InputData.TaggedData.ArrayNum == local_388.InputData.TaggedData.ArrayMax) {
    local_388.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_388.InputData,
                    &local_388.InputData.TaggedData.ArrayMax);
  }
  this_03 = (FPCGDataPtrWrapper *)
            (local_388.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_388.InputData.TaggedData.ArrayNum * 0x78);
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
  local_388.InputData.TaggedData.ArrayNum = local_388.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)pUVar32);
  this_03[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_388.Settings,&local_410);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_388,(UPCGNode *)local_4b8);
  do {
    if ((local_410.Object == (IPCGElement *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar4 = (code *)swi(3);
      uVar27 = (*pcVar4)();
      return (bool)uVar27;
    }
    bVar26 = IPCGElement::Execute(local_410.Object,(FPCGContext *)local_4b8._0_8_);
  } while (!bVar26);
  iVar29 = (((FPCGDataCollection *)(local_4b8._0_8_ + 0x38))->TaggedData).ArrayNum;
  ::FString::FString(&local_460,"There is one output");
  FVar37.Data = (FScriptContainerElement *)L"";
  if (local_460.Data.ArrayNum != 0) {
    FVar37.Data = local_460.Data.AllocatorInstance.Data;
  }
  bVar26 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar37.Data,iVar29,1);
  if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.Data.AllocatorInstance.Data);
  }
  uVar25 = local_4b8._0_8_;
  if (bVar26) {
    if (((((FPCGDataCollection *)(local_4b8._0_8_ + 0x38))->TaggedData).ArrayNum < 1) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar4 = (code *)swi(3);
      uVar27 = (*pcVar4)();
      return (bool)uVar27;
    }
    local_4b8._8_8_ =
         *(undefined8 *)(((FPCGDataCollection *)(uVar25 + 0x38))->TaggedData).AllocatorInstance.Data
    ;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fea942:
      if ((FPCGMetadataAttribute<FString> *)local_4b8._8_8_ == (FPCGMetadataAttribute<FString> *)0x0
         ) goto LAB_149fea962;
      pUVar35 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar26 = FObjectPtr::IsA((FObjectPtr *)(local_4b8 + 8),pUVar35);
      pFVar33 = (FPCGMetadataAttribute<FString> *)local_4b8._8_8_;
      if (!bVar26) goto LAB_149fea962;
    }
    else {
      if ((FPCGMetadataAttribute<FString> *)local_4b8._8_8_ != (FPCGMetadataAttribute<FString> *)0x0
         ) {
        UE::GC::MarkAsReachable((UObject *)local_4b8._8_8_);
        goto LAB_149fea942;
      }
LAB_149fea962:
      pFVar33 = (FPCGMetadataAttribute<FString> *)0x0;
    }
    ::FString::FString(&local_450,"Output is an of the same type as input");
    if (pFVar33 == (FPCGMetadataAttribute<FString> *)0x0) {
      pcVar4 = *(code **)(((FAutomationTestBase *)this)->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_3c8,L"Expected \'%s\' to be not null.");
      (*pcVar4)(this,&local_3c8,0);
      if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
      }
      bVar26 = true;
    }
    else {
      bVar26 = false;
    }
    if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.Data.AllocatorInstance.Data);
    }
    if (!bVar26) {
      local_4b8._48_8_ = local_4b8._24_8_;
      local_4b8[0x38] = PCGMetadataDomainID::Default.Flag;
      local_4b8._57_3_ = PCGMetadataDomainID::Default._1_3_;
      local_4b8._60_4_ = PCGMetadataDomainID::Default.CustomFlag;
      local_4b8._64_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
      local_4b8._68_4_ = PCGMetadataDomainID::Default.DebugName.Number;
      local_3a8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_3a8.Name.ComparisonIndex.Value = local_4b8._24_4_;
      local_3a8.Name.Number = local_4b8._28_4_;
      local_3a8.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_3a8.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_3a8.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      this_02 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)
                UPCGMetadata::GetConstAttribute((UPCGMetadata *)pFVar33->_padding_,&local_3a8);
      if ((this_02 == (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) ||
         (*(short *)&this_02->field_0x70 != 8)) {
        this_02 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
      }
      ::FString::FString(&local_440,"Output metadata has the expected attribute");
      if (this_02 == (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) {
        pcVar4 = *(code **)(((FAutomationTestBase *)this)->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_3b8,L"Expected \'%s\' to be not null.");
        (*pcVar4)(this,&local_3b8,0);
        if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
        }
        bVar26 = true;
      }
      else {
        bVar26 = false;
      }
      if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_440.Data.AllocatorInstance.Data);
      }
      FVar39 = (FName)local_4b8._40_8_;
      if (!bVar26) {
        pTVar36 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[]
                            ((TArrayView<UE::Math::TTransform<double>_const_,int> *)local_4b8._40_8_
                             ,0);
        local_400 = (this_02->DefaultValue).Scale3D.XY.m128d_f64[0];
        dStack_3f8 = (this_02->DefaultValue).Scale3D.XY.m128d_f64[1];
        dVar5 = (this_02->DefaultValue).Rotation.XY.m128d_f64[0];
        dVar6 = (this_02->DefaultValue).Rotation.XY.m128d_f64[1];
        dVar7 = (pTVar36->Rotation).XY.m128d_f64[0];
        dVar8 = (pTVar36->Rotation).XY.m128d_f64[1];
        dVar9 = (pTVar36->Rotation).ZW.m128d_f64[0];
        dVar10 = (pTVar36->Rotation).ZW.m128d_f64[1];
        dVar11 = (pTVar36->Translation).XY.m128d_f64[0];
        dVar12 = (pTVar36->Translation).XY.m128d_f64[1];
        dVar13 = (pTVar36->Translation).ZW.m128d_f64[0];
        dVar14 = (pTVar36->Translation).ZW.m128d_f64[1];
        dVar15 = (pTVar36->Scale3D).XY.m128d_f64[0];
        dVar16 = (pTVar36->Scale3D).XY.m128d_f64[1];
        dVar17 = (pTVar36->Scale3D).ZW.m128d_f64[0];
        dVar18 = (pTVar36->Scale3D).ZW.m128d_f64[1];
        dVar19 = (this_02->DefaultValue).Rotation.ZW.m128d_f64[0];
        dVar20 = (this_02->DefaultValue).Rotation.ZW.m128d_f64[1];
        dVar21 = (this_02->DefaultValue).Translation.XY.m128d_f64[0];
        dVar22 = (this_02->DefaultValue).Translation.XY.m128d_f64[1];
        dVar23 = (this_02->DefaultValue).Translation.ZW.m128d_f64[0];
        dVar24 = (this_02->DefaultValue).Translation.ZW.m128d_f64[1];
        local_4b8._48_8_ = (this_02->DefaultValue).Scale3D.ZW.m128d_f64[0];
        local_4b8._56_8_ = (this_02->DefaultValue).Scale3D.ZW.m128d_f64[1];
        TArrayView<FString_const_,int>::operator[](param_1,0);
        ::FString::PrintfImpl(&local_430,L"Default value %s, was parsed correctly");
        FVar37.Data = (FScriptContainerElement *)L"";
        if (local_430.Data.ArrayNum != 0) {
          FVar37.Data = local_430.Data.AllocatorInstance.Data;
        }
        local_298.Scale3D.XY.m128d_f64[0] = local_400;
        local_298.Scale3D.XY.m128d_f64[1] = dStack_3f8;
        local_298.Scale3D.ZW.m128d_f64[0] = (double)local_4b8._48_8_;
        local_298.Scale3D.ZW.m128d_f64[1] = (double)local_4b8._56_8_;
        local_2f8.Rotation.XY.m128d_f64[0] = dVar7;
        local_2f8.Rotation.XY.m128d_f64[1] = dVar8;
        local_2f8.Rotation.ZW.m128d_f64[0] = dVar9;
        local_2f8.Rotation.ZW.m128d_f64[1] = dVar10;
        local_2f8.Translation.XY.m128d_f64[0] = dVar11;
        local_2f8.Translation.XY.m128d_f64[1] = dVar12;
        local_2f8.Translation.ZW.m128d_f64[0] = dVar13;
        local_2f8.Translation.ZW.m128d_f64[1] = dVar14;
        local_2f8.Scale3D.XY.m128d_f64[0] = dVar15;
        local_2f8.Scale3D.XY.m128d_f64[1] = dVar16;
        local_2f8.Scale3D.ZW.m128d_f64[0] = dVar17;
        local_2f8.Scale3D.ZW.m128d_f64[1] = dVar18;
        local_298.Rotation.XY.m128d_f64[0] = dVar5;
        local_298.Rotation.XY.m128d_f64[1] = dVar6;
        local_298.Rotation.ZW.m128d_f64[0] = dVar19;
        local_298.Rotation.ZW.m128d_f64[1] = dVar20;
        local_298.Translation.XY.m128d_f64[0] = dVar21;
        local_298.Translation.XY.m128d_f64[1] = dVar22;
        local_298.Translation.ZW.m128d_f64[0] = dVar23;
        local_298.Translation.ZW.m128d_f64[1] = dVar24;
        bVar26 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar37.Data,&local_298,&local_2f8
                            ,__real_38d1b717);
        if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_430.Data.AllocatorInstance.Data);
        }
        if (bVar26) {
          iVar29 = *(int *)((longlong)FVar39 + 8);
          uVar38 = 1;
          if (1 < iVar29) {
            lVar40 = 0x60;
            do {
              uVar28 = 0;
              if ((int)uVar38 < iVar29) {
                uVar28 = ~uVar38 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar26)) {
                pcVar4 = (code *)swi(3);
                uVar27 = (*pcVar4)();
                return (bool)uVar27;
              }
              lVar3 = *(longlong *)FVar39;
              dVar5 = *(double *)(lVar3 + lVar40);
              dVar6 = ((double *)(lVar3 + lVar40))[1];
              pdVar1 = (double *)(lVar3 + 0x10 + lVar40);
              dVar7 = *pdVar1;
              dVar8 = pdVar1[1];
              pdVar1 = (double *)(lVar3 + 0x20 + lVar40);
              dVar9 = *pdVar1;
              dVar10 = pdVar1[1];
              pdVar1 = (double *)(lVar3 + 0x30 + lVar40);
              dVar11 = *pdVar1;
              dVar12 = pdVar1[1];
              pdVar1 = (double *)(lVar3 + 0x40 + lVar40);
              dVar13 = *pdVar1;
              dVar14 = pdVar1[1];
              pdVar1 = (double *)(lVar3 + 0x50 + lVar40);
              dVar15 = *pdVar1;
              dVar16 = pdVar1[1];
              iVar29 = FPCGMetadataAttributeBase::GetValueKey
                                 ((FPCGMetadataAttributeBase *)this_02,(longlong)(int)(uVar38 - 1));
              FPCGMetadataAttribute<UE::Math::TTransform<double>_>::GetValue
                        (this_02,&local_148,iVar29);
              dVar24 = local_148.Translation.ZW.m128d_f64[1];
              dVar23 = local_148.Translation.ZW.m128d_f64[0];
              dVar22 = local_148.Translation.XY.m128d_f64[1];
              dVar21 = local_148.Translation.XY.m128d_f64[0];
              dVar20 = local_148.Rotation.ZW.m128d_f64[1];
              dVar19 = local_148.Rotation.ZW.m128d_f64[0];
              dVar18 = local_148.Rotation.XY.m128d_f64[1];
              dVar17 = local_148.Rotation.XY.m128d_f64[0];
              uVar28 = 0;
              if ((int)uVar38 < param_1->ArrayNum) {
                uVar28 = ~uVar38 >> 0x1f;
              }
              local_4b8._48_8_ = local_148.Scale3D.XY.m128d_f64[0];
              local_4b8._56_8_ = local_148.Scale3D.XY.m128d_f64[1];
              local_400 = local_148.Scale3D.ZW.m128d_f64[0];
              dStack_3f8 = local_148.Scale3D.ZW.m128d_f64[1];
              if ((uVar28 == 0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar26)) {
                pcVar4 = (code *)swi(3);
                uVar27 = (*pcVar4)();
                return (bool)uVar27;
              }
              ::FString::PrintfImpl(&local_420,L"Entry %d (%s) was parsed expectedly");
              FVar37.Data = (FScriptContainerElement *)L"";
              if (local_420.Data.ArrayNum != 0) {
                FVar37.Data = local_420.Data.AllocatorInstance.Data;
              }
              local_1d8.Scale3D.XY.m128d_f64[0] = (double)local_4b8._48_8_;
              local_1d8.Scale3D.XY.m128d_f64[1] = (double)local_4b8._56_8_;
              local_1d8.Rotation.XY.m128d_f64[0] = dVar17;
              local_1d8.Rotation.XY.m128d_f64[1] = dVar18;
              local_1d8.Rotation.ZW.m128d_f64[0] = dVar19;
              local_1d8.Rotation.ZW.m128d_f64[1] = dVar20;
              local_1d8.Translation.XY.m128d_f64[0] = dVar21;
              local_1d8.Translation.XY.m128d_f64[1] = dVar22;
              local_1d8.Translation.ZW.m128d_f64[0] = dVar23;
              local_1d8.Translation.ZW.m128d_f64[1] = dVar24;
              local_1d8.Scale3D.ZW.m128d_f64[0] = local_400;
              local_1d8.Scale3D.ZW.m128d_f64[1] = dStack_3f8;
              local_238.Rotation.XY.m128d_f64[0] = dVar5;
              local_238.Rotation.XY.m128d_f64[1] = dVar6;
              local_238.Rotation.ZW.m128d_f64[0] = dVar7;
              local_238.Rotation.ZW.m128d_f64[1] = dVar8;
              local_238.Translation.XY.m128d_f64[0] = dVar9;
              local_238.Translation.XY.m128d_f64[1] = dVar10;
              local_238.Translation.ZW.m128d_f64[0] = dVar11;
              local_238.Translation.ZW.m128d_f64[1] = dVar12;
              local_238.Scale3D.XY.m128d_f64[0] = dVar13;
              local_238.Scale3D.XY.m128d_f64[1] = dVar14;
              local_238.Scale3D.ZW.m128d_f64[0] = dVar15;
              local_238.Scale3D.ZW.m128d_f64[1] = dVar16;
              bVar26 = FAutomationTestBase::TestEqual
                                 ((FAutomationTestBase *)local_4b8._32_8_,(wchar_t *)FVar37.Data,
                                  &local_1d8,&local_238,__real_38d1b717);
              if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_420.Data.AllocatorInstance.Data);
              }
              if (!bVar26) goto LAB_149feae16;
              uVar38 = uVar38 + 1;
              lVar40 = lVar40 + 0x60;
              iVar29 = *(int *)(local_4b8._40_8_ + 8);
              FVar39 = (FName)local_4b8._40_8_;
            } while ((int)uVar38 < iVar29);
          }
          bVar26 = true;
          goto LAB_149feae18;
        }
      }
    }
  }
LAB_149feae16:
  bVar26 = false;
LAB_149feae18:
  if ((FPCGContext *)local_4b8._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_4b8._0_8_)(local_4b8._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_410.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_388);
  return bVar26;
}

// RunTestInternal<UE::Math::TVector2<double>_> @ 149feaef0

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
FPCGParseStringTestsBase::RunTestInternal<UE::Math::TVector2<double>_>
          (FPCGParseStringTestsBase *this,TArrayView<FString_const_,int> *param_1,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_2)

{
  UPCGMetadata *this_00;
  FString *pFVar1;
  code *pcVar2;
  FPCGContext *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  UPCGParseStringSettings *pUVar8;
  UObject *pUVar9;
  UPCGParamData *pUVar10;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<FString> *this_02;
  long64 lVar11;
  UClass *pUVar12;
  TVector2<double> *pTVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  FPCGDataPtrWrapper *this_03;
  longlong lVar16;
  FObjectPtr_u_0 FVar17;
  TArrayView<UE::Math::TVector2<double>_const_,int> *pTVar18;
  FPCGContext *local_res10;
  TArrayView<UE::Math::TVector2<double>_const_,int> *local_res18;
  FObjectPtr_u_0 local_res20;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *local_238;
  FName local_230;
  FName local_228;
  UClass *local_220;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  TSharedPtr<IPCGElement,1> local_1c8;
  FName local_1b8;
  FPCGMetadataDomainID local_1b0;
  FName local_198;
  FPCGMetadataDomainID FStack_190;
  FString local_178;
  FString local_168;
  TVector2<double>_u_0 local_158;
  FString local_148;
  TVector2<double>_u_0 local_138;
  FPCGAttributeIdentifier local_128;
  FTestData local_108;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_78;
  
  local_res18 = param_2;
  local_220 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_220 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_220);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_108,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_220);
  this_02 = (FPCGMetadataAttribute<FString> *)0x0;
  local_78._0_8_ = 0;
  local_78._40_8_ = 0;
  pUVar8 = PCGTestsCommon::GenerateSettings<UPCGParseStringSettings>(&local_108,&local_78);
  if ((pUVar8 == (UPCGParseStringSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                         ,0x14,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                         ,0x16,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  ::FName::FName(&local_230,L"InAttr");
  ::FName::FName(&local_228,L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar8->InputSource,local_230,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar8->_padding_,local_228,true);
  pUVar8->TargetType = Vector2;
  pUVar9 = GetTransientPackageAsObject();
  pUVar10 = NewObject<UPCGParamData>(pUVar9);
  iVar7 = param_1->ArrayNum;
  this_00 = (UPCGMetadata *)pUVar10->_padding_;
  if ((iVar7 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_1b8 = local_230;
  local_1b0.Flag = PCGMetadataDomainID::Default.Flag;
  local_1b0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_1b0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_1b0.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_1b0);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    this_02 = FPCGMetadataDomain::CreateAttribute<FString>
                        (this_01,local_1b8,param_1->DataPtr,true,false);
  }
  uVar15 = 1;
  if (1 < iVar7) {
    do {
      uVar6 = 0;
      if ((int)uVar15 < iVar7) {
        uVar6 = ~uVar15 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar1 = param_1->DataPtr;
      lVar11 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar10->_padding_,-1);
      if ((lVar11 == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x24b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      iVar7 = FPCGMetadataAttribute<FString>::AddValue(this_02,pFVar1 + (int)uVar15);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)this_02,lVar11,iVar7,false);
      iVar7 = param_1->ArrayNum;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < iVar7);
  }
  if (local_108.InputData.TaggedData.ArrayNum == local_108.InputData.TaggedData.ArrayMax) {
    local_108.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_108.InputData,
                    &local_108.InputData.TaggedData.ArrayMax);
  }
  this_03 = (FPCGDataPtrWrapper *)
            (local_108.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_108.InputData.TaggedData.ArrayNum * 0x78);
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
  local_108.InputData.TaggedData.ArrayNum = local_108.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)pUVar10);
  this_03[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_108.Settings,&local_1c8);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_108,(UPCGNode *)&local_res10);
  do {
    if ((local_1c8.Object == (IPCGElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar4 = IPCGElement::Execute(local_1c8.Object,local_res10);
  } while (!bVar4);
  iVar7 = (local_res10->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_218,"There is one output");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_218.Data.ArrayNum != 0) {
    FVar14.Data = local_218.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar7,1)
  ;
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  pFVar3 = local_res10;
  if (bVar4) {
    if (((local_res10->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_res20 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)(pFVar3->OutputData).TaggedData.AllocatorInstance.Data)->Handle
    ;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149feb368:
      if (local_res20.Handle == (UObject *)0x0) goto LAB_149feb38c;
      pUVar12 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar12);
      FVar17 = local_res20;
      if (!bVar4) goto LAB_149feb38c;
    }
    else {
      if (local_res20.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_res20.Handle);
        goto LAB_149feb368;
      }
LAB_149feb38c:
      FVar17.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_208,"Output is an of the same type as input");
    if (FVar17.Handle == (UObject *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_178,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_178,0);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    if (!bVar4) {
      local_198 = local_228;
      FStack_190.Flag = PCGMetadataDomainID::Default.Flag;
      FStack_190._1_3_ = PCGMetadataDomainID::Default._1_3_;
      FStack_190.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FStack_190.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_128.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_128.Name = local_228;
      local_128.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_128.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_128.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      local_238 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)
                  UPCGMetadata::GetConstAttribute
                            (*(UPCGMetadata **)&FVar17.Handle[1].field_0x10,&local_128);
      if ((local_238 == (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) ||
         ((short)local_238->_padding_ != 4)) {
        local_238 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
      }
      ::FString::FString(&local_1f8,"Output metadata has the expected attribute");
      if (local_238 == (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) {
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_168,L"Expected \'%s\' to be not null.");
        (*pcVar2)(this,&local_168,0);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      pTVar18 = local_res18;
      if (!bVar4) {
        pTVar13 = TArrayView<UE::Math::TVector2<double>_const_,int>::operator[](local_res18,0);
        local_138._s_0.X = (local_238->DefaultValue).field0_0x0._s_0.X;
        local_138._s_0.Y = (local_238->DefaultValue).field0_0x0._s_0.Y;
        TArrayView<FString_const_,int>::operator[](param_1,0);
        ::FString::PrintfImpl(&local_1e8,L"Default value %s, was parsed correctly");
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_1e8.Data.ArrayNum != 0) {
          FVar14.Data = local_1e8.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestEqual<UE::Math::TVector2<double>_>
                          ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,
                           (TVector2<double> *)&local_138._s_0,pTVar13);
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          iVar7 = pTVar18->ArrayNum;
          uVar15 = 1;
          if (1 < iVar7) {
            lVar16 = 0x10;
            do {
              uVar6 = 0;
              if ((int)uVar15 < iVar7) {
                uVar6 = ~uVar15 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
              pTVar13 = pTVar18->DataPtr;
              iVar7 = FPCGMetadataAttributeBase::GetValueKey
                                ((FPCGMetadataAttributeBase *)local_238,(longlong)(int)(uVar15 - 1))
              ;
              FPCGMetadataAttribute<UE::Math::TVector2<double>_>::GetValue
                        (local_238,(TVector2<double> *)&local_158._s_0,iVar7);
              uVar6 = 0;
              if ((int)uVar15 < param_1->ArrayNum) {
                uVar6 = ~uVar15 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
              ::FString::PrintfImpl(&local_1d8,L"Entry %d (%s) was parsed expectedly");
              if ((local_158._s_0.X == *(double *)((longlong)&pTVar13->field0_0x0 + lVar16)) &&
                 (local_158._s_0.Y == *(double *)((longlong)&pTVar13->field0_0x0 + lVar16 + 8))) {
                bVar4 = false;
              }
              else {
                pcVar2 = *(code **)(*(longlong *)this + 0x28);
                ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
                (*pcVar2)(this,&local_148,0);
                if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_148.Data.AllocatorInstance.Data);
                }
                bVar4 = true;
              }
              if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
              }
              if (bVar4) goto LAB_149feb6f5;
              uVar15 = uVar15 + 1;
              lVar16 = lVar16 + 0x10;
              iVar7 = local_res18->ArrayNum;
              pTVar18 = local_res18;
            } while ((int)uVar15 < iVar7);
          }
          bVar4 = true;
          goto LAB_149feb6f7;
        }
      }
    }
  }
LAB_149feb6f5:
  bVar4 = false;
LAB_149feb6f7:
  if (local_res10 != (FPCGContext *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_108);
  return bVar4;
}

// RunTestInternal<UE::Math::TVector4<double>_> @ 149feb770

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
FPCGParseStringTestsBase::RunTestInternal<UE::Math::TVector4<double>_>
          (FPCGParseStringTestsBase *this,TArrayView<FString_const_,int> *param_1,
          TArrayView<UE::Math::TVector4<double>_const_,int> *param_2)

{
  UPCGMetadata *this_00;
  FString *pFVar1;
  code *pcVar2;
  FPCGContext *pFVar3;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  UPCGParseStringSettings *pUVar9;
  UObject *pUVar10;
  UPCGParamData *pUVar11;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<FString> *this_02;
  long64 lVar12;
  UClass *pUVar13;
  TVector4<double> *pTVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  FPCGDataPtrWrapper *this_03;
  longlong lVar17;
  FObjectPtr_u_0 FVar18;
  FPCGContext *local_res20;
  FObjectPtr_u_0 local_248;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *local_240;
  FName local_238;
  FName local_230;
  TVector4<double>_u_0 local_228;
  UClass *local_208;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  TSharedPtr<IPCGElement,1> local_1b0;
  FName local_198;
  FPCGMetadataDomainID local_190;
  FString local_178;
  FString local_168;
  FString local_158;
  FPCGAttributeIdentifier local_148;
  TVector4<double>_u_0 local_128;
  FTestData local_108;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_78;
  
  local_208 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_208 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_208);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_108,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_208);
  this_02 = (FPCGMetadataAttribute<FString> *)0x0;
  local_78._0_8_ = 0;
  local_78._40_8_ = 0;
  pUVar9 = PCGTestsCommon::GenerateSettings<UPCGParseStringSettings>(&local_108,&local_78);
  if ((pUVar9 == (UPCGParseStringSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                         ,0x14,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                         ,0x16,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  ::FName::FName(&local_238,L"InAttr");
  ::FName::FName(&local_230,L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar9->InputSource,local_238,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar9->_padding_,local_230,true);
  pUVar9->TargetType = Vector4;
  pUVar10 = GetTransientPackageAsObject();
  pUVar11 = NewObject<UPCGParamData>(pUVar10);
  iVar8 = param_1->ArrayNum;
  this_00 = (UPCGMetadata *)pUVar11->_padding_;
  if ((iVar8 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  local_198 = local_238;
  local_190.Flag = PCGMetadataDomainID::Default.Flag;
  local_190._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_190.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_190.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_190);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    this_02 = FPCGMetadataDomain::CreateAttribute<FString>
                        (this_01,local_198,param_1->DataPtr,true,false);
  }
  uVar16 = 1;
  if (1 < iVar8) {
    do {
      uVar7 = 0;
      if ((int)uVar16 < iVar8) {
        uVar7 = ~uVar16 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pFVar1 = param_1->DataPtr;
      lVar12 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar11->_padding_,-1);
      if ((lVar12 == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x24b,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      iVar8 = FPCGMetadataAttribute<FString>::AddValue(this_02,pFVar1 + (int)uVar16);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)this_02,lVar12,iVar8,false);
      iVar8 = param_1->ArrayNum;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < iVar8);
  }
  if (local_108.InputData.TaggedData.ArrayNum == local_108.InputData.TaggedData.ArrayMax) {
    local_108.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_108.InputData,
                    &local_108.InputData.TaggedData.ArrayMax);
  }
  this_03 = (FPCGDataPtrWrapper *)
            (local_108.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_108.InputData.TaggedData.ArrayNum * 0x78);
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
  local_108.InputData.TaggedData.ArrayNum = local_108.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)pUVar11);
  this_03[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_108.Settings,&local_1b0);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_108,(UPCGNode *)&local_res20);
  do {
    if ((local_1b0.Object == (IPCGElement *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    bVar5 = IPCGElement::Execute(local_1b0.Object,local_res20);
  } while (!bVar5);
  iVar8 = (local_res20->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_200,"There is one output");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_200.Data.ArrayNum != 0) {
    FVar15.Data = local_200.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,iVar8,1)
  ;
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
  pFVar3 = local_res20;
  if (bVar5) {
    if (((local_res20->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    local_248 = (FObjectPtr_u_0)
                ((FObjectPtr_u_0 *)(pFVar3->OutputData).TaggedData.AllocatorInstance.Data)->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149febbf5:
      if (local_248.Handle == (UObject *)0x0) goto LAB_149febc15;
      pUVar13 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_248,pUVar13);
      FVar18 = local_248;
      if (!bVar5) goto LAB_149febc15;
    }
    else {
      if (local_248.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_248.Handle);
        goto LAB_149febbf5;
      }
LAB_149febc15:
      FVar18.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_1f0,"Output is an of the same type as input");
    if (FVar18.Handle == (UObject *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_178,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_178,0);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
    if (!bVar5) {
      local_228._s_0.X = (double)local_230;
      local_228._s_0.Y = (double)PCGMetadataDomainID::Default._0_8_;
      local_228._s_0.Z = (double)PCGMetadataDomainID::Default.DebugName;
      local_148.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_148.Name = local_230;
      local_148.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_148.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_148.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      local_240 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)
                  UPCGMetadata::GetConstAttribute
                            (*(UPCGMetadata **)&FVar18.Handle[1].field_0x10,&local_148);
      if ((local_240 == (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) ||
         (*(short *)&local_240->field_0x70 != 6)) {
        local_240 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
      }
      pFVar4 = local_240;
      ::FString::FString(&local_1e0,"Output metadata has the expected attribute");
      if (pFVar4 == (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) {
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_168,L"Expected \'%s\' to be not null.");
        (*pcVar2)(this,&local_168,0);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        pTVar14 = TArrayView<UE::Math::TVector4<double>_const_,int>::operator[](param_2,0);
        local_128._s_0.X = (pFVar4->DefaultValue).field0_0x0._s_0.X;
        local_128._s_0.Y = (pFVar4->DefaultValue).field0_0x0._s_0.Y;
        local_128._s_0.Z = (pFVar4->DefaultValue).field0_0x0._s_0.Z;
        local_128._s_0.W = (pFVar4->DefaultValue).field0_0x0._s_0.W;
        TArrayView<FString_const_,int>::operator[](param_1,0);
        ::FString::PrintfImpl(&local_1d0,L"Default value %s, was parsed correctly");
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_1d0.Data.ArrayNum != 0) {
          FVar15.Data = local_1d0.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestEqual<UE::Math::TVector4<double>_>
                          ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,
                           (TVector4<double> *)&local_128._s_0,pTVar14);
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          iVar8 = param_2->ArrayNum;
          uVar16 = 1;
          if (1 < iVar8) {
            lVar17 = 0x20;
            do {
              uVar7 = 0;
              if ((int)uVar16 < iVar8) {
                uVar7 = ~uVar16 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              pTVar14 = param_2->DataPtr;
              iVar8 = FPCGMetadataAttributeBase::GetValueKey
                                ((FPCGMetadataAttributeBase *)local_240,(longlong)(int)(uVar16 - 1))
              ;
              FPCGMetadataAttribute<UE::Math::TVector4<double>_>::GetValue
                        (local_240,(TVector4<double> *)&local_228._s_0,iVar8);
              uVar7 = 0;
              if ((int)uVar16 < param_1->ArrayNum) {
                uVar7 = ~uVar16 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              ::FString::PrintfImpl(&local_1c0,L"Entry %d (%s) was parsed expectedly");
              if ((((local_228._s_0.X == *(double *)((longlong)&pTVar14->field0_0x0 + lVar17)) &&
                   (local_228._s_0.Y == *(double *)((longlong)&pTVar14->field0_0x0 + lVar17 + 8)))
                  && (local_228._s_0.Z ==
                      *(double *)((longlong)&pTVar14->field0_0x0 + lVar17 + 0x10))) &&
                 (local_228._s_0.W == *(double *)((longlong)&pTVar14->field0_0x0 + lVar17 + 0x18)))
              {
                bVar5 = false;
              }
              else {
                pcVar2 = *(code **)(*(longlong *)this + 0x28);
                ::FString::PrintfImpl(&local_158,L"%s: The two values are not equal.");
                (*pcVar2)(this,&local_158,0);
                if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_158.Data.AllocatorInstance.Data);
                }
                bVar5 = true;
              }
              if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
              }
              if (bVar5) goto LAB_149febfb9;
              uVar16 = uVar16 + 1;
              lVar17 = lVar17 + 0x20;
              iVar8 = param_2->ArrayNum;
            } while ((int)uVar16 < iVar8);
          }
          bVar5 = true;
          goto LAB_149febfbb;
        }
      }
    }
  }
LAB_149febfb9:
  bVar5 = false;
LAB_149febfbb:
  if (local_res20 != (FPCGContext *)0x0) {
    (**(code **)local_res20->_padding_)(local_res20,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b0.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_108);
  return bVar5;
}

// RunTestInternal<UE::Math::TVector<double>_> @ 149fec030

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
FPCGParseStringTestsBase::RunTestInternal<UE::Math::TVector<double>_>
          (FPCGParseStringTestsBase *this,TArrayView<FString_const_,int> *param_1,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_2)

{
  double *pdVar1;
  double dVar2;
  FName FVar3;
  UPCGMetadata *this_00;
  FString *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  FName FVar8;
  FName FVar9;
  float fVar10;
  FPCGContext *pFVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  UPCGParseStringSettings *pUVar19;
  UObject *pUVar20;
  UPCGParamData *pUVar21;
  FPCGMetadataDomain *this_01;
  FObjectPtr_u_0 FVar22;
  long64 lVar23;
  UClass *pUVar24;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this_02;
  FName *pFVar25;
  ForAnyElementType FVar26;
  uint uVar27;
  FPCGDataPtrWrapper *this_03;
  TArrayView<UE::Math::TVector<double>_const_,int> *pTVar28;
  longlong lVar29;
  FPCGContext *local_res10;
  TArrayView<UE::Math::TVector<double>_const_,int> *local_res18;
  FObjectPtr_u_0 local_res20;
  FName local_2d8;
  FName local_2d0;
  TVector<double>_u_0 local_2c8;
  UClass *local_2a8;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  TSharedPtr<IPCGElement,1> local_250;
  FName local_238;
  FPCGMetadataDomainID local_230;
  FString local_218;
  FString local_208;
  FPCGAttributeIdentifier local_1f8;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_178;
  FTestData local_158;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_c8 [2];
  
  local_res18 = param_2;
  local_2a8 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2a8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2a8);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_158,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_2a8);
  local_c8[0]._0_8_ = 0;
  local_c8[0]._40_8_ = 0;
  pUVar19 = PCGTestsCommon::GenerateSettings<UPCGParseStringSettings>(&local_158,local_c8);
  if ((pUVar19 == (UPCGParseStringSettings *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                          ,0x14,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    uVar16 = (*pcVar5)();
    return (bool)uVar16;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                          ,0x16,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    uVar16 = (*pcVar5)();
    return (bool)uVar16;
  }
  ::FName::FName(&local_2d8,L"InAttr");
  ::FName::FName(&local_2d0,L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar19->InputSource,local_2d8,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar19->_padding_,local_2d0,true);
  pUVar19->TargetType = Vector;
  pUVar20 = GetTransientPackageAsObject();
  pUVar21 = NewObject<UPCGParamData>(pUVar20);
  iVar18 = param_1->ArrayNum;
  this_00 = (UPCGMetadata *)pUVar21->_padding_;
  if ((iVar18 < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar15)) {
    pcVar5 = (code *)swi(3);
    uVar16 = (*pcVar5)();
    return (bool)uVar16;
  }
  local_238 = local_2d8;
  local_230.Flag = PCGMetadataDomainID::Default.Flag;
  local_230._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_230.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_230.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_230);
  FVar22.Handle = (UObject *)0x0;
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    FVar22.Handle =
         (UObject *)
         FPCGMetadataDomain::CreateAttribute<FString>(this_01,local_238,param_1->DataPtr,true,false)
    ;
  }
  uVar27 = 1;
  if (1 < iVar18) {
    do {
      uVar17 = 0;
      if ((int)uVar27 < iVar18) {
        uVar17 = ~uVar27 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      pFVar4 = param_1->DataPtr;
      lVar23 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar21->_padding_,-1);
      if ((lVar23 == -1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ItemKey != PCGInvalidEntryKey",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                              ,0x24b,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      iVar18 = FPCGMetadataAttribute<FString>::AddValue
                         ((FPCGMetadataAttribute<FString> *)FVar22.Handle,pFVar4 + (int)uVar27);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)FVar22.Handle,lVar23,iVar18,false);
      iVar18 = param_1->ArrayNum;
      uVar27 = uVar27 + 1;
    } while ((int)uVar27 < iVar18);
  }
  if (local_158.InputData.TaggedData.ArrayNum == local_158.InputData.TaggedData.ArrayMax) {
    local_158.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_158.InputData,
                    &local_158.InputData.TaggedData.ArrayMax);
  }
  this_03 = (FPCGDataPtrWrapper *)
            (local_158.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_158.InputData.TaggedData.ArrayNum * 0x78);
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
  local_158.InputData.TaggedData.ArrayNum = local_158.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)pUVar21);
  this_03[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_158.Settings,&local_250);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_158,(UPCGNode *)&local_res10);
  do {
    if ((local_250.Object == (IPCGElement *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      uVar16 = (*pcVar5)();
      return (bool)uVar16;
    }
    bVar15 = IPCGElement::Execute(local_250.Object,local_res10);
  } while (!bVar15);
  iVar18 = (local_res10->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_2a0,"There is one output");
  FVar26.Data = (FScriptContainerElement *)L"";
  if (local_2a0.Data.ArrayNum != 0) {
    FVar26.Data = local_2a0.Data.AllocatorInstance.Data;
  }
  bVar15 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,iVar18,1);
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  pFVar11 = local_res10;
  if (bVar15) {
    if (((local_res10->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      uVar16 = (*pcVar5)();
      return (bool)uVar16;
    }
    local_res20 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)(pFVar11->OutputData).TaggedData.AllocatorInstance.Data)->
                  Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fec4ed:
      if ((FPCGMetadataAttribute<FString> *)local_res20.Handle ==
          (FPCGMetadataAttribute<FString> *)0x0) goto LAB_149fec511;
      pUVar24 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar15 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar24);
      FVar22 = local_res20;
      if (!bVar15) goto LAB_149fec511;
    }
    else {
      if ((FPCGMetadataAttribute<FString> *)local_res20.Handle !=
          (FPCGMetadataAttribute<FString> *)0x0) {
        UE::GC::MarkAsReachable(local_res20.Handle);
        goto LAB_149fec4ed;
      }
LAB_149fec511:
      FVar22.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_290,"Output is an of the same type as input");
    if ((FPCGMetadataAttribute<FString> *)FVar22.Handle == (FPCGMetadataAttribute<FString> *)0x0) {
      pcVar5 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_218,L"Expected \'%s\' to be not null.");
      (*pcVar5)(this,&local_218,0);
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      bVar15 = true;
    }
    else {
      bVar15 = false;
    }
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    if (!bVar15) {
      local_2c8._s_0.X = (double)local_2d0;
      local_2c8._s_0.Y = (double)PCGMetadataDomainID::Default._0_8_;
      local_2c8._s_0.Z = (double)PCGMetadataDomainID::Default.DebugName;
      local_1f8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_1f8.Name = local_2d0;
      local_1f8.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_1f8.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_1f8.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      this_02 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
                UPCGMetadata::GetConstAttribute
                          (*(UPCGMetadata **)&FVar22.Handle[1].field_0x10,&local_1f8);
      if ((this_02 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) ||
         ((short)this_02->_padding_ != 5)) {
        this_02 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
      }
      ::FString::FString(&local_280,"Output metadata has the expected attribute");
      if (this_02 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
        pcVar5 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_208,L"Expected \'%s\' to be not null.");
        (*pcVar5)(this,&local_208,0);
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        bVar15 = true;
      }
      else {
        bVar15 = false;
      }
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
      pTVar28 = local_res18;
      if (!bVar15) {
        pFVar25 = (FName *)TArrayView<UE::Math::TVector<double>_const_,int>::operator[]
                                     (local_res18,0);
        dVar6 = (this_02->DefaultValue).field0_0x0._s_0.X;
        dVar7 = (this_02->DefaultValue).field0_0x0._s_0.Y;
        dVar2 = (this_02->DefaultValue).field0_0x0._s_0.Z;
        FVar8 = *pFVar25;
        FVar9 = pFVar25[1];
        FVar3 = pFVar25[2];
        TArrayView<FString_const_,int>::operator[](param_1,0);
        ::FString::PrintfImpl(&local_270,L"Default value %s, was parsed correctly");
        fVar10 = __real_38d1b717;
        FVar26.Data = (FScriptContainerElement *)L"";
        if (local_270.Data.ArrayNum != 0) {
          FVar26.Data = local_270.Data.AllocatorInstance.Data;
        }
        local_2c8._s_0.X = (double)FVar8;
        local_2c8._s_0.Y = (double)FVar9;
        local_2c8._s_0.Z = (double)FVar3;
        local_1d8._s_0.X = dVar6;
        local_1d8._s_0.Y = dVar7;
        local_1d8._s_0.Z = dVar2;
        bVar15 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,
                            (TVector<double> *)&local_1d8._s_0,(TVector<double> *)&local_2c8._s_0,
                            __real_38d1b717);
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        if (bVar15) {
          iVar18 = pTVar28->ArrayNum;
          uVar27 = 1;
          if (1 < iVar18) {
            lVar29 = 0x18;
            do {
              uVar17 = 0;
              if ((int)uVar27 < iVar18) {
                uVar17 = ~uVar27 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar15)) {
                pcVar5 = (code *)swi(3);
                uVar16 = (*pcVar5)();
                return (bool)uVar16;
              }
              pdVar1 = (double *)((longlong)&pTVar28->DataPtr->field0_0x0 + lVar29);
              dVar6 = *pdVar1;
              dVar7 = pdVar1[1];
              dVar2 = *(double *)((longlong)&pTVar28->DataPtr->field0_0x0 + lVar29 + 0x10);
              iVar18 = FPCGMetadataAttributeBase::GetValueKey
                                 ((FPCGMetadataAttributeBase *)this_02,(longlong)(int)(uVar27 - 1));
              FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
                        (this_02,(TVector<double> *)&local_1b8._s_0,iVar18);
              uVar14 = local_1b8._s_0.Z;
              uVar13 = local_1b8._s_0.Y;
              uVar12 = local_1b8._s_0.X;
              uVar17 = 0;
              if ((int)uVar27 < param_1->ArrayNum) {
                uVar17 = ~uVar27 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar15)) {
                pcVar5 = (code *)swi(3);
                uVar16 = (*pcVar5)();
                return (bool)uVar16;
              }
              ::FString::PrintfImpl(&local_260,L"Entry %d (%s) was parsed expectedly");
              FVar26.Data = (FScriptContainerElement *)L"";
              if (local_260.Data.ArrayNum != 0) {
                FVar26.Data = local_260.Data.AllocatorInstance.Data;
              }
              local_178._s_0.X = (double)uVar12;
              local_178._s_0.Y = (double)uVar13;
              local_178._s_0.Z = (double)uVar14;
              local_198._s_0.X = dVar6;
              local_198._s_0.Y = dVar7;
              local_198._s_0.Z = dVar2;
              bVar15 = FAutomationTestBase::TestEqual
                                 ((FAutomationTestBase *)this,(wchar_t *)FVar26.Data,
                                  (TVector<double> *)&local_178._s_0,
                                  (TVector<double> *)&local_198._s_0,fVar10);
              if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_260.Data.AllocatorInstance.Data);
              }
              if (!bVar15) goto LAB_149fec8a2;
              uVar27 = uVar27 + 1;
              lVar29 = lVar29 + 0x18;
              iVar18 = local_res18->ArrayNum;
              pTVar28 = local_res18;
            } while ((int)uVar27 < iVar18);
          }
          bVar15 = true;
          goto LAB_149fec8a4;
        }
      }
    }
  }
LAB_149fec8a2:
  bVar15 = false;
LAB_149fec8a4:
  if (local_res10 != (FPCGContext *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_250.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_158);
  return bVar15;
}

// RunTestInternal<__int64> @ 149fec940

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
FPCGParseStringTestsBase::RunTestInternal<__int64>
          (FPCGParseStringTestsBase *this,TArrayView<FString_const_,int> *param_1,
          TArrayView<__int64_const_,int> *param_2)

{
  UPCGMetadata *this_00;
  FString *pFVar1;
  long64 lVar2;
  code *pcVar3;
  FPCGContext *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  UPCGParseStringSettings *pUVar9;
  UObject *pUVar10;
  UPCGParamData *pUVar11;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<FString> *this_02;
  long64 lVar12;
  UClass *pUVar13;
  FObjectPtr_u_0 FVar14;
  long64 *plVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  FPCGDataPtrWrapper *this_03;
  longlong lVar18;
  FPCGContext *local_res10;
  TArrayView<__int64_const_,int> *local_res18;
  FObjectPtr_u_0 local_res20;
  FName local_218;
  FName local_210;
  UClass *local_208;
  long64 local_200;
  long64 local_1f8;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  TSharedPtr<IPCGElement,1> local_1a0;
  FName local_188;
  FPCGMetadataDomainID local_180;
  FName local_168;
  FPCGMetadataDomainID FStack_160;
  FString local_148;
  FString local_138;
  FPCGAttributeIdentifier local_128;
  FTestData local_108;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_78;
  
  local_res18 = param_2;
  local_208 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_208 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_208);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_108,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_208);
  this_02 = (FPCGMetadataAttribute<FString> *)0x0;
  local_78._0_8_ = 0;
  local_78._40_8_ = 0;
  pUVar9 = PCGTestsCommon::GenerateSettings<UPCGParseStringSettings>(&local_108,&local_78);
  if ((pUVar9 == (UPCGParseStringSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                         ,0x14,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                         ,0x16,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  ::FName::FName(&local_218,L"InAttr");
  ::FName::FName(&local_210,L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar9->InputSource,local_218,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar9->_padding_,local_210,true);
  pUVar9->TargetType = Integer64;
  pUVar10 = GetTransientPackageAsObject();
  pUVar11 = NewObject<UPCGParamData>(pUVar10);
  iVar8 = param_1->ArrayNum;
  this_00 = (UPCGMetadata *)pUVar11->_padding_;
  if ((iVar8 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  local_188 = local_218;
  local_180.Flag = PCGMetadataDomainID::Default.Flag;
  local_180._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_180.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_180.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_180);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    this_02 = FPCGMetadataDomain::CreateAttribute<FString>
                        (this_01,local_188,param_1->DataPtr,true,false);
  }
  uVar17 = 1;
  if (1 < iVar8) {
    do {
      uVar7 = 0;
      if ((int)uVar17 < iVar8) {
        uVar7 = ~uVar17 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar1 = param_1->DataPtr;
      lVar12 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar11->_padding_,-1);
      if ((lVar12 == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x24b,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar8 = FPCGMetadataAttribute<FString>::AddValue(this_02,pFVar1 + (int)uVar17);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)this_02,lVar12,iVar8,false);
      iVar8 = param_1->ArrayNum;
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < iVar8);
  }
  if (local_108.InputData.TaggedData.ArrayNum == local_108.InputData.TaggedData.ArrayMax) {
    local_108.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_108.InputData,
                    &local_108.InputData.TaggedData.ArrayMax);
  }
  this_03 = (FPCGDataPtrWrapper *)
            (local_108.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_108.InputData.TaggedData.ArrayNum * 0x78);
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
  local_108.InputData.TaggedData.ArrayNum = local_108.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)pUVar11);
  this_03[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_108.Settings,&local_1a0);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_108,(UPCGNode *)&local_res10);
  do {
    if ((local_1a0.Object == (IPCGElement *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    bVar5 = IPCGElement::Execute(local_1a0.Object,local_res10);
  } while (!bVar5);
  iVar8 = (local_res10->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_1f0,"There is one output");
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_1f0.Data.ArrayNum != 0) {
    FVar16.Data = local_1f0.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,iVar8,1)
  ;
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  pFVar4 = local_res10;
  if (bVar5) {
    if (((local_res10->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    local_res20 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)(pFVar4->OutputData).TaggedData.AllocatorInstance.Data)->Handle
    ;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fecda2:
      if ((FPCGMetadataAttribute<__int64> *)local_res20.Handle ==
          (FPCGMetadataAttribute<__int64> *)0x0) goto LAB_149fecdc6;
      pUVar13 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar13);
      FVar14 = local_res20;
      if (!bVar5) goto LAB_149fecdc6;
    }
    else {
      if ((FPCGMetadataAttribute<__int64> *)local_res20.Handle !=
          (FPCGMetadataAttribute<__int64> *)0x0) {
        UE::GC::MarkAsReachable(local_res20.Handle);
        goto LAB_149fecda2;
      }
LAB_149fecdc6:
      FVar14.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_1e0,"Output is an of the same type as input");
    if ((FPCGMetadataAttribute<__int64> *)FVar14.Handle == (FPCGMetadataAttribute<__int64> *)0x0) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_148,L"Expected \'%s\' to be not null.");
      (*pcVar3)(this,&local_148,0);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    if (!bVar5) {
      local_168 = local_210;
      FStack_160.Flag = PCGMetadataDomainID::Default.Flag;
      FStack_160._1_3_ = PCGMetadataDomainID::Default._1_3_;
      FStack_160.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FStack_160.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_128.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_128.Name = local_210;
      local_128.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_128.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_128.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FVar14.Handle =
           (UObject *)
           UPCGMetadata::GetConstAttribute
                     (*(UPCGMetadata **)&FVar14.Handle[1].field_0x10,&local_128);
      if (((FPCGMetadataAttribute<__int64> *)FVar14.Handle == (FPCGMetadataAttribute<__int64> *)0x0)
         || ((short)*(longlong *)&FVar14.Handle[2].field_0x20 != 3)) {
        FVar14.Handle = (UObject *)0x0;
      }
      ::FString::FString(&local_1d0,"Output metadata has the expected attribute");
      if ((FPCGMetadataAttribute<__int64> *)FVar14.Handle == (FPCGMetadataAttribute<__int64> *)0x0)
      {
        pcVar3 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_138,L"Expected \'%s\' to be not null.");
        (*pcVar3)(this,&local_138,0);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        plVar15 = TArrayView<__int64_const_,int>::operator[](param_2,0);
        lVar12 = *(long64 *)&FVar14.Handle[3].field_0x20;
        lVar2 = *plVar15;
        TArrayView<FString_const_,int>::operator[](param_1,0);
        ::FString::PrintfImpl(&local_1c0,L"Default value %s, was parsed correctly");
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_1c0.Data.ArrayNum != 0) {
          FVar16.Data = local_1c0.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,lVar12,lVar2);
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          iVar8 = param_2->ArrayNum;
          uVar17 = 1;
          if (1 < iVar8) {
            lVar18 = 8;
            do {
              uVar7 = 0;
              if ((int)uVar17 < iVar8) {
                uVar7 = ~uVar17 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              local_200 = *(long64 *)(lVar18 + (longlong)param_2->DataPtr);
              iVar8 = FPCGMetadataAttributeBase::GetValueKey
                                ((FPCGMetadataAttributeBase *)FVar14.Handle,
                                 (longlong)(int)(uVar17 - 1));
              local_1f8 = FPCGMetadataAttribute<__int64>::GetValue
                                    ((FPCGMetadataAttribute<__int64> *)FVar14.Handle,iVar8);
              uVar7 = 0;
              if ((int)uVar17 < param_1->ArrayNum) {
                uVar7 = ~uVar17 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              ::FString::PrintfImpl(&local_1b0,L"Entry %d (%s) was parsed expectedly");
              FVar16.Data = (FScriptContainerElement *)L"";
              if (local_1b0.Data.ArrayNum != 0) {
                FVar16.Data = local_1b0.Data.AllocatorInstance.Data;
              }
              bVar5 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,local_1f8,
                                 local_200);
              if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
              }
              if (!bVar5) goto LAB_149fed0e0;
              uVar17 = uVar17 + 1;
              lVar18 = lVar18 + 8;
              iVar8 = local_res18->ArrayNum;
              param_2 = local_res18;
            } while ((int)uVar17 < iVar8);
          }
          bVar5 = true;
          goto LAB_149fed0e2;
        }
      }
    }
  }
LAB_149fed0e0:
  bVar5 = false;
LAB_149fed0e2:
  if (local_res10 != (FPCGContext *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_108);
  return bVar5;
}

// RunTestInternal<bool> @ 149fed130

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
FPCGParseStringTestsBase::RunTestInternal<bool>
          (FPCGParseStringTestsBase *this,TArrayView<FString_const_,int> *param_1,
          TArrayView<bool_const_,int> *param_2)

{
  UPCGMetadata *this_00;
  FString *pFVar1;
  code *pcVar2;
  FPCGContext *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UPCGParseStringSettings *pUVar9;
  UObject *pUVar10;
  UPCGParamData *pUVar11;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<FString> *this_02;
  long64 lVar12;
  UClass *pUVar13;
  bool *pbVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  FPCGDataPtrWrapper *this_03;
  longlong lVar17;
  FObjectPtr_u_0 FVar18;
  FPCGMetadataAttribute<bool> *this_04;
  FPCGContext *local_res20;
  FObjectPtr_u_0 local_238;
  FName local_230;
  FName local_228;
  FPCGMetadataAttribute<bool> *local_220;
  UClass *local_218;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  TSharedPtr<IPCGElement,1> local_1c0;
  FName local_1a8;
  FPCGMetadataDomainID local_1a0;
  FName local_188;
  FPCGMetadataDomainID FStack_180;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FPCGAttributeIdentifier local_128;
  FTestData local_108;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_78;
  
  local_218 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_218 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_218);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_108,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_218);
  this_02 = (FPCGMetadataAttribute<FString> *)0x0;
  local_78._0_8_ = 0;
  local_78._40_8_ = 0;
  pUVar9 = PCGTestsCommon::GenerateSettings<UPCGParseStringSettings>(&local_108,&local_78);
  if ((pUVar9 == (UPCGParseStringSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                         ,0x14,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                         ,0x16,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  ::FName::FName(&local_230,L"InAttr");
  ::FName::FName(&local_228,L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar9->InputSource,local_230,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar9->_padding_,local_228,true);
  pUVar9->TargetType = Boolean;
  pUVar10 = GetTransientPackageAsObject();
  pUVar11 = NewObject<UPCGParamData>(pUVar10);
  iVar8 = param_1->ArrayNum;
  this_00 = (UPCGMetadata *)pUVar11->_padding_;
  if ((iVar8 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_1a8 = local_230;
  local_1a0.Flag = PCGMetadataDomainID::Default.Flag;
  local_1a0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_1a0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_1a0.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_1a0);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    this_02 = FPCGMetadataDomain::CreateAttribute<FString>
                        (this_01,local_1a8,param_1->DataPtr,true,false);
  }
  uVar16 = 1;
  if (1 < iVar8) {
    do {
      uVar7 = 0;
      if ((int)uVar16 < iVar8) {
        uVar7 = ~uVar16 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar1 = param_1->DataPtr;
      lVar12 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar11->_padding_,-1);
      if ((lVar12 == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x24b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      iVar8 = FPCGMetadataAttribute<FString>::AddValue(this_02,pFVar1 + (int)uVar16);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)this_02,lVar12,iVar8,false);
      iVar8 = param_1->ArrayNum;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < iVar8);
  }
  if (local_108.InputData.TaggedData.ArrayNum == local_108.InputData.TaggedData.ArrayMax) {
    local_108.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_108.InputData,
                    &local_108.InputData.TaggedData.ArrayMax);
  }
  this_03 = (FPCGDataPtrWrapper *)
            (local_108.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_108.InputData.TaggedData.ArrayNum * 0x78);
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
  local_108.InputData.TaggedData.ArrayNum = local_108.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)pUVar11);
  this_03[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_108.Settings,&local_1c0);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_108,(UPCGNode *)&local_res20);
  do {
    if ((local_1c0.Object == (IPCGElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar4 = IPCGElement::Execute(local_1c0.Object,local_res20);
  } while (!bVar4);
  iVar8 = (local_res20->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_210,"There is one output");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_210.Data.ArrayNum != 0) {
    FVar15.Data = local_210.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,iVar8,1)
  ;
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  pFVar3 = local_res20;
  if (bVar4) {
    if (((local_res20->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_238 = (FObjectPtr_u_0)
                ((FObjectPtr_u_0 *)(pFVar3->OutputData).TaggedData.AllocatorInstance.Data)->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fed59e:
      if (local_238.Handle == (UObject *)0x0) goto LAB_149fed5be;
      pUVar13 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_238,pUVar13);
      FVar18 = local_238;
      if (!bVar4) goto LAB_149fed5be;
    }
    else {
      if (local_238.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_238.Handle);
        goto LAB_149fed59e;
      }
LAB_149fed5be:
      FVar18.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_200,"Output is an of the same type as input");
    if (FVar18.Handle == (UObject *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_168,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_168,0);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    if (!bVar4) {
      local_188 = local_228;
      FStack_180.Flag = PCGMetadataDomainID::Default.Flag;
      FStack_180._1_3_ = PCGMetadataDomainID::Default._1_3_;
      FStack_180.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FStack_180.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_128.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_128.Name = local_228;
      local_128.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_128.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_128.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      local_220 = (FPCGMetadataAttribute<bool> *)
                  UPCGMetadata::GetConstAttribute
                            (*(UPCGMetadata **)&FVar18.Handle[1].field_0x10,&local_128);
      if ((local_220 == (FPCGMetadataAttribute<bool> *)0x0) || ((short)local_220->_padding_ != 10))
      {
        local_220 = (FPCGMetadataAttribute<bool> *)0x0;
      }
      this_04 = local_220;
      ::FString::FString(&local_1f0,"Output metadata has the expected attribute");
      if (this_04 == (FPCGMetadataAttribute<bool> *)0x0) {
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_158,L"Expected \'%s\' to be not null.");
        (*pcVar2)(this,&local_158,0);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        pbVar14 = TArrayView<bool_const_,int>::operator[](param_2,0);
        bVar4 = this_04->DefaultValue;
        TArrayView<FString_const_,int>::operator[](param_1,0);
        ::FString::PrintfImpl(&local_1e0,L"Default value %s, was parsed correctly");
        if (bVar4 == *pbVar14) {
          bVar4 = false;
        }
        else {
          pcVar2 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
          (*pcVar2)(this,&local_148,0);
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          bVar4 = true;
        }
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
        if (!bVar4) {
          iVar8 = param_2->ArrayNum;
          uVar16 = 1;
          if (1 < iVar8) {
            lVar17 = 1;
            do {
              uVar7 = 0;
              if ((int)uVar16 < iVar8) {
                uVar7 = ~uVar16 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
              pbVar14 = param_2->DataPtr;
              iVar8 = FPCGMetadataAttributeBase::GetValueKey
                                ((FPCGMetadataAttributeBase *)this_04,(longlong)(int)(uVar16 - 1));
              bVar4 = FPCGMetadataAttribute<bool>::GetValue(this_04,iVar8);
              uVar7 = 0;
              if ((int)uVar16 < param_1->ArrayNum) {
                uVar7 = ~uVar16 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
              ::FString::PrintfImpl(&local_1d0,L"Entry %d (%s) was parsed expectedly");
              if (bVar4 == pbVar14[lVar17]) {
                bVar4 = false;
              }
              else {
                pcVar2 = *(code **)(*(longlong *)this + 0x28);
                ::FString::PrintfImpl(&local_138,L"%s: The two values are not equal.");
                (*pcVar2)(this,&local_138,0);
                if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_138.Data.AllocatorInstance.Data);
                }
                bVar4 = true;
              }
              if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
              }
              if (bVar4) goto LAB_149fed946;
              uVar16 = uVar16 + 1;
              lVar17 = lVar17 + 1;
              iVar8 = param_2->ArrayNum;
              this_04 = local_220;
            } while ((int)uVar16 < iVar8);
          }
          bVar4 = true;
          goto LAB_149fed948;
        }
      }
    }
  }
LAB_149fed946:
  bVar4 = false;
LAB_149fed948:
  if (local_res20 != (FPCGContext *)0x0) {
    (**(code **)local_res20->_padding_)(local_res20,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_108);
  return bVar4;
}

