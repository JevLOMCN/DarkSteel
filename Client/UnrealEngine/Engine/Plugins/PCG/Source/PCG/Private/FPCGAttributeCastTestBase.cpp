// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// RunTestInternal<int,double,UPCGParamData> @ 149f8eaa0

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
FPCGAttributeCastTestBase::RunTestInternal<int,double,UPCGParamData>
          (FPCGAttributeCastTestBase *this,TArrayView<int_const_,int> *param_1,
          TArrayView<double_const_,int> *param_2)

{
  double dVar1;
  double dVar2;
  UPCGMetadata *this_00;
  int *piVar3;
  code *pcVar4;
  double dVar5;
  FPCGContext *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UPCGAttributeCastSettings *pUVar10;
  UObject *pUVar11;
  UPCGParamData *pUVar12;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<int> *this_02;
  long64 lVar13;
  UClass *pUVar14;
  FPCGMetadataAttribute<double> *this_03;
  double *pdVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  FPCGDataPtrWrapper *this_04;
  longlong lVar19;
  FObjectPtr_u_0 FVar20;
  FPCGContext *local_res10;
  FObjectPtr_u_0 local_res18;
  FName local_res20;
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
  FPCGAttributeIdentifier local_158;
  FTestData local_138;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_a8 [2];
  
  local_220 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_220 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_220);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_138,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_220);
  this_02 = (FPCGMetadataAttribute<int> *)0x0;
  local_a8[0]._0_8_ = 0;
  local_a8[0]._40_8_ = 0;
  pUVar10 = PCGTestsCommon::GenerateSettings<UPCGAttributeCastSettings>(&local_138,local_a8);
  if ((pUVar10 == (UPCGAttributeCastSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                         ,0x17,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                         ,0x19,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  ::FName::FName(&local_res20,L"InAttr");
  ::FName::FName(&local_228,L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar10->InputSource,local_res20,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar10->OutputTarget,local_228,true);
  pUVar10->OutputType = Double;
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
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  local_1b8 = local_res20;
  local_1b0.Flag = PCGMetadataDomainID::Default.Flag;
  local_1b0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_1b0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_1b0.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_1b0);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    this_02 = FPCGMetadataDomain::CreateAttribute<int>
                        (this_01,local_1b8,param_1->DataPtr,true,false);
  }
  uVar18 = 1;
  if (1 < iVar9) {
    do {
      lVar13 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar12->_padding_,-1);
      uVar16 = 0;
      if ((int)uVar18 < iVar9) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      piVar3 = param_1->DataPtr;
      if ((lVar13 == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x24b,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iVar9 = FPCGMetadataAttribute<int>::AddValue(this_02,piVar3 + (int)uVar18);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)this_02,lVar13,iVar9,false);
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
  this_04 = (FPCGDataPtrWrapper *)
            (local_138.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_138.InputData.TaggedData.ArrayNum * 0x78);
  this_04[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_04[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_04[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_04[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_04[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_04->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_04->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_04[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_04[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_04[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_04[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_04[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_04[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_04[4].Data.field0_0x0 + 4) = 0;
  this_04[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_04[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_04[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_04[7].Data.field0_0x0 + 4) = 0xffffffff;
  local_138.InputData.TaggedData.ArrayNum = local_138.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_04,(UPCGData *)pUVar12);
  this_04[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_138.Settings,&local_1c8);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_138,(UPCGNode *)&local_res10);
  do {
    if ((local_1c8.Object == (IPCGElement *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    bVar7 = IPCGElement::Execute(local_1c8.Object,local_res10);
  } while (!bVar7);
  iVar9 = (local_res10->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_218,"There is one output");
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_218.Data.ArrayNum != 0) {
    FVar17.Data = local_218.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,iVar9,1)
  ;
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
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
    local_res18 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)(pFVar6->OutputData).TaggedData.AllocatorInstance.Data)->Handle
    ;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f8ef43:
      if (local_res18.Handle == (UObject *)0x0) goto LAB_149f8ef67;
      pUVar14 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar14);
      FVar20 = local_res18;
      if (!bVar7) goto LAB_149f8ef67;
    }
    else {
      if (local_res18.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_res18.Handle);
        goto LAB_149f8ef43;
      }
LAB_149f8ef67:
      FVar20.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_208,"Output is an of the same type as input");
    if (FVar20.Handle == (UObject *)0x0) {
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
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      local_198 = local_228;
      FStack_190.Flag = PCGMetadataDomainID::Default.Flag;
      FStack_190._1_3_ = PCGMetadataDomainID::Default._1_3_;
      FStack_190.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FStack_190.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_158.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_158.Name = local_228;
      local_158.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_158.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_158.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      this_03 = (FPCGMetadataAttribute<double> *)
                UPCGMetadata::GetConstAttribute
                          (*(UPCGMetadata **)&FVar20.Handle[1].field_0x10,&local_158);
      if ((this_03 == (FPCGMetadataAttribute<double> *)0x0) || ((short)this_03->_padding_ != 1)) {
        this_03 = (FPCGMetadataAttribute<double> *)0x0;
      }
      ::FString::FString(&local_1f8,"Output metadata has the expected attribute");
      if (this_03 == (FPCGMetadataAttribute<double> *)0x0) {
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
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        pdVar15 = TArrayView<double_const_,int>::operator[](param_2,0);
        dVar1 = this_03->DefaultValue;
        dVar2 = *pdVar15;
        ::FString::FString(&local_1e8,"Default value was casted correctly");
        dVar5 = __real_3f1a36e2e0000000;
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_1e8.Data.ArrayNum != 0) {
          FVar17.Data = local_1e8.Data.AllocatorInstance.Data;
        }
        bVar7 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,dVar1,dVar2,
                           __real_3f1a36e2e0000000);
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          iVar9 = param_2->ArrayNum;
          uVar18 = 1;
          if (1 < iVar9) {
            lVar19 = 8;
            do {
              uVar16 = 0;
              if ((int)uVar18 < iVar9) {
                uVar16 = ~uVar18 >> 0x1f;
              }
              if ((uVar16 == 0) &&
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
              dVar1 = *(double *)(lVar19 + (longlong)param_2->DataPtr);
              iVar9 = FPCGMetadataAttributeBase::GetValueKey
                                ((FPCGMetadataAttributeBase *)this_03,(longlong)(int)(uVar18 - 1));
              dVar2 = FPCGMetadataAttribute<double>::GetValue(this_03,iVar9);
              ::FString::PrintfImpl(&local_1d8,L"Entry %d was casted correctly");
              FVar17.Data = (FScriptContainerElement *)L"";
              if (local_1d8.Data.ArrayNum != 0) {
                FVar17.Data = local_1d8.Data.AllocatorInstance.Data;
              }
              bVar7 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,dVar2,dVar1,
                                 dVar5);
              if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
              }
              if (!bVar7) goto LAB_149f8f205;
              iVar9 = param_2->ArrayNum;
              uVar18 = uVar18 + 1;
              lVar19 = lVar19 + 8;
            } while ((int)uVar18 < iVar9);
          }
          bVar7 = true;
          goto LAB_149f8f207;
        }
      }
    }
  }
LAB_149f8f205:
  bVar7 = false;
LAB_149f8f207:
  if (local_res10 != (FPCGContext *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_138);
  return bVar7;
}

// RunTestInternal<int,double,UPCGPointArrayData> @ 149f8f290

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
FPCGAttributeCastTestBase::RunTestInternal<int,double,UPCGPointArrayData>
          (FPCGAttributeCastTestBase *this,TArrayView<int_const_,int> *param_1,
          TArrayView<double_const_,int> *param_2)

{
  double dVar1;
  double dVar2;
  UPCGMetadata *this_00;
  int *piVar3;
  code *pcVar4;
  double dVar5;
  FPCGContext *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  UPCGAttributeCastSettings *pUVar13;
  UObject *pUVar14;
  UPCGPointArrayData *pUVar15;
  longlong *plVar16;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<int> *this_02;
  long64 lVar17;
  UClass *pUVar18;
  FPCGMetadataAttribute<double> *this_03;
  double *pdVar19;
  undefined4 *puVar20;
  uint uVar21;
  long64 *plVar22;
  ForAnyElementType FVar23;
  FPCGDataPtrWrapper *this_04;
  uint uVar24;
  FObjectPtr_u_0 FVar25;
  undefined8 uVar26;
  undefined7 uVar27;
  longlong lVar28;
  UPCGPointArrayData *pUVar29;
  FPCGContext *local_res10;
  TArrayView<double_const_,int> *local_res18;
  FObjectPtr_u_0 local_res20;
  FName local_2a8;
  UPCGPointArrayData *local_2a0;
  FName local_298;
  UClass *local_290;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  TSharedPtr<IPCGElement,1> local_228;
  longlong local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  FName local_1f8;
  FPCGMetadataDomainID local_1f0;
  FString local_1d8;
  FString local_1c8;
  FName local_1b8;
  FPCGMetadataDomainID FStack_1b0;
  undefined4 local_198;
  undefined4 uStack_194;
  int iStack_190;
  int iStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  FPCGAttributeIdentifier local_178;
  FTestData local_158;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_c8;
  undefined1 local_98 [88];
  
  local_res18 = param_2;
  local_290 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_290 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_290);
  }
  uVar26 = 0;
  PCGTestsCommon::FTestData::FTestData
            (&local_158,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_290);
  this_02 = (FPCGMetadataAttribute<int> *)0x0;
  local_c8._0_8_ = 0;
  local_c8._40_8_ = 0;
  pUVar13 = PCGTestsCommon::GenerateSettings<UPCGAttributeCastSettings>(&local_158,&local_c8);
  if (pUVar13 == (UPCGAttributeCastSettings *)0x0) {
    uVar26 = 0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                       ,0x17,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
  }
  if ((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) {
    uVar26 = 0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                       ,0x19,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
  }
  ::FName::FName(&local_2a8,L"InAttr");
  ::FName::FName(&local_298,L"OutAttr");
  uVar27 = (undefined7)((ulonglong)uVar26 >> 8);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar13->InputSource,local_2a8,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar13->OutputTarget,local_298,true);
  pUVar13->OutputType = Double;
  pUVar14 = GetTransientPackageAsObject();
  pUVar15 = NewObject<UPCGPointArrayData>(pUVar14);
  iVar9 = param_1->ArrayNum;
  local_2a0 = pUVar15;
  (**(code **)(pUVar15->_padding_ + 0x490))(pUVar15,iVar9 + -1,CONCAT71(uVar27,1));
  plVar16 = (longlong *)(**(code **)(pUVar15->_padding_ + 0x4f8))(pUVar15,local_98,1);
  this_00 = (UPCGMetadata *)pUVar15->_padding_;
  local_218 = *plVar16;
  uStack_210 = plVar16[1];
  local_208 = plVar16[2];
  lStack_200 = plVar16[3];
  if ((iVar9 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  local_1f8 = local_2a8;
  local_1f0.Flag = PCGMetadataDomainID::Default.Flag;
  local_1f0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_1f0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_1f0.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_1f0);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    this_02 = FPCGMetadataDomain::CreateAttribute<int>
                        (this_01,local_1f8,param_1->DataPtr,true,false);
  }
  uVar11 = 0;
  pUVar29 = pUVar15;
  if (1 < iVar9) {
    do {
      lVar17 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar15->_padding_,-1);
      uVar24 = uVar11 + 1;
      uVar21 = 0;
      if ((int)uVar24 < iVar9) {
        uVar21 = ~uVar24 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      piVar3 = param_1->DataPtr;
      if ((lVar17 == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x24b,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iVar9 = FPCGMetadataAttribute<int>::AddValue(this_02,piVar3 + (int)uVar24);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)this_02,lVar17,iVar9,false);
      uVar21 = 0;
      if ((int)uVar11 < (int)local_208) {
        uVar21 = ~uVar11 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      if (uVar11 == (int)uVar11 % uStack_210._4_4_) {
        plVar22 = (long64 *)
                  ((longlong)(int)uStack_210 * (longlong)((int)uVar11 % uStack_210._4_4_) +
                  local_218);
      }
      else {
        plVar22 = &lStack_200;
      }
      iVar9 = param_1->ArrayNum;
      iVar10 = uVar11 + 2;
      *plVar22 = lVar17;
      param_2 = local_res18;
      pUVar29 = local_2a0;
      uVar11 = uVar24;
    } while (iVar10 < iVar9);
  }
  FVar25.Handle = (UObject *)0x0;
  if (local_158.InputData.TaggedData.ArrayNum == local_158.InputData.TaggedData.ArrayMax) {
    local_158.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_158.InputData,
                    &local_158.InputData.TaggedData.ArrayMax);
  }
  this_04 = (FPCGDataPtrWrapper *)
            (local_158.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_158.InputData.TaggedData.ArrayNum * 0x78);
  this_04[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_04[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_04[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_04[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_04[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_04->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_04->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_04[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_04[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_04[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_04[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_04[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_04[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_04[4].Data.field0_0x0 + 4) = 0;
  this_04[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_04[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_04[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_04[7].Data.field0_0x0 + 4) = 0xffffffff;
  local_158.InputData.TaggedData.ArrayNum = local_158.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_04,(UPCGData *)pUVar29);
  this_04[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_158.Settings,&local_228);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_158,(UPCGNode *)&local_res10);
  do {
    if ((local_228.Object == (IPCGElement *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    bVar7 = IPCGElement::Execute(local_228.Object,local_res10);
  } while (!bVar7);
  iVar9 = (local_res10->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_288,"There is one output");
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_288.Data.ArrayNum != 0) {
    FVar23.Data = local_288.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,iVar9,1)
  ;
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
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
LAB_149f8f7f4:
      if (local_res20.Handle != (UObject *)0x0) {
        pUVar18 = Z_Construct_UClass_UPCGPointArrayData_NoRegister();
        bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar18);
        if (bVar7) {
          FVar25 = local_res20;
        }
      }
    }
    else if (local_res20.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res20.Handle);
      goto LAB_149f8f7f4;
    }
    ::FString::FString(&local_278,"Output is an of the same type as input");
    if (FVar25.Handle == (UObject *)0x0) {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_1d8,L"Expected \'%s\' to be not null.");
      (*pcVar4)(this,&local_1d8,0);
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      iVar9 = (**(code **)(*(longlong *)FVar25.Handle + 0x488))(FVar25.Handle);
      iVar10 = (**(code **)(pUVar29->_padding_ + 0x488))(pUVar29);
      ::FString::FString(&local_268,"Output has the same number of points");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_268.Data.ArrayNum != 0) {
        FVar23.Data = local_268.Data.AllocatorInstance.Data;
      }
      bVar7 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,iVar10,iVar9);
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        local_1b8 = local_298;
        FStack_1b0.Flag = PCGMetadataDomainID::Default.Flag;
        FStack_1b0._1_3_ = PCGMetadataDomainID::Default._1_3_;
        FStack_1b0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
        FStack_1b0.DebugName = PCGMetadataDomainID::Default.DebugName;
        local_178.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
        local_178.Name = local_298;
        local_178.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
        local_178.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
        local_178.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
        this_03 = (FPCGMetadataAttribute<double> *)
                  UPCGMetadata::GetConstAttribute
                            (*(UPCGMetadata **)&FVar25.Handle[1].field_0x10,&local_178);
        if ((this_03 == (FPCGMetadataAttribute<double> *)0x0) || ((short)this_03->_padding_ != 1)) {
          this_03 = (FPCGMetadataAttribute<double> *)0x0;
        }
        ::FString::FString(&local_258,"Output metadata has the expected attribute");
        if (this_03 == (FPCGMetadataAttribute<double> *)0x0) {
          pcVar4 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_1c8,L"Expected \'%s\' to be not null.");
          (*pcVar4)(this,&local_1c8,0);
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
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
          pdVar19 = TArrayView<double_const_,int>::operator[](param_2,0);
          dVar1 = this_03->DefaultValue;
          dVar2 = *pdVar19;
          ::FString::FString(&local_248,"Default value was casted correctly");
          dVar5 = __real_3f1a36e2e0000000;
          FVar23.Data = (FScriptContainerElement *)L"";
          if (local_248.Data.ArrayNum != 0) {
            FVar23.Data = local_248.Data.AllocatorInstance.Data;
          }
          bVar7 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,dVar1,dVar2,
                             __real_3f1a36e2e0000000);
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          if (bVar7) {
            puVar20 = (undefined4 *)
                      (**(code **)(*(longlong *)FVar25.Handle + 0x538))(FVar25.Handle,&local_1b8);
            iVar9 = 1;
            local_198 = *puVar20;
            uStack_194 = puVar20[1];
            iStack_190 = puVar20[2];
            iStack_18c = puVar20[3];
            local_188 = *(undefined8 *)(puVar20 + 4);
            uStack_180 = *(undefined8 *)(puVar20 + 6);
            if (1 < param_2->ArrayNum) {
              iVar10 = (int)local_188;
              lVar28 = (longlong)iStack_190;
              do {
                uVar11 = 0;
                if (iVar9 + -1 < iVar10) {
                  uVar11 = (uint)-iVar9 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < NumElements)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                       ,0x8b,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
                lVar17 = *(long64 *)
                          (((iVar9 + -1) % iStack_18c) * lVar28 + CONCAT44(uStack_194,local_198));
                pdVar19 = TArrayView<double_const_,int>::operator[](param_2,iVar9);
                dVar1 = *pdVar19;
                iVar12 = FPCGMetadataAttributeBase::GetValueKey
                                   ((FPCGMetadataAttributeBase *)this_03,lVar17);
                dVar2 = FPCGMetadataAttribute<double>::GetValue(this_03,iVar12);
                ::FString::PrintfImpl(&local_238,L"Entry %d was casted correctly");
                FVar23.Data = (FScriptContainerElement *)L"";
                if (local_238.Data.ArrayNum != 0) {
                  FVar23.Data = local_238.Data.AllocatorInstance.Data;
                }
                bVar7 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,dVar2,dVar1,
                                   dVar5);
                if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_238.Data.AllocatorInstance.Data);
                }
                if (!bVar7) goto LAB_149f8fb60;
                iVar9 = iVar9 + 1;
              } while (iVar9 < param_2->ArrayNum);
            }
            bVar7 = true;
            goto LAB_149f8fb62;
          }
        }
      }
    }
  }
LAB_149f8fb60:
  bVar7 = false;
LAB_149f8fb62:
  if (local_res10 != (FPCGContext *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_158);
  return bVar7;
}

// RunTestInternal<int,double,UPCGPointData> @ 149f8fbf0

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
FPCGAttributeCastTestBase::RunTestInternal<int,double,UPCGPointData>
          (FPCGAttributeCastTestBase *this,TArrayView<int_const_,int> *param_1,
          TArrayView<double_const_,int> *param_2)

{
  double dVar1;
  double dVar2;
  UPCGMetadata *this_00;
  int *piVar3;
  code *pcVar4;
  double dVar5;
  FPCGContext *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  UPCGAttributeCastSettings *pUVar13;
  UObject *pUVar14;
  UPCGPointData *pUVar15;
  longlong *plVar16;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<int> *this_02;
  long64 lVar17;
  UClass *pUVar18;
  FPCGMetadataAttribute<double> *this_03;
  double *pdVar19;
  undefined4 *puVar20;
  uint uVar21;
  long64 *plVar22;
  ForAnyElementType FVar23;
  FPCGDataPtrWrapper *this_04;
  uint uVar24;
  FObjectPtr_u_0 FVar25;
  undefined8 uVar26;
  undefined7 uVar27;
  longlong lVar28;
  UPCGPointData *pUVar29;
  FPCGContext *local_res10;
  TArrayView<double_const_,int> *local_res18;
  FObjectPtr_u_0 local_res20;
  FName local_2a8;
  UPCGPointData *local_2a0;
  FName local_298;
  UClass *local_290;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  TSharedPtr<IPCGElement,1> local_228;
  longlong local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  FName local_1f8;
  FPCGMetadataDomainID local_1f0;
  FString local_1d8;
  FString local_1c8;
  FName local_1b8;
  FPCGMetadataDomainID FStack_1b0;
  undefined4 local_198;
  undefined4 uStack_194;
  int iStack_190;
  int iStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  FPCGAttributeIdentifier local_178;
  FTestData local_158;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_c8;
  undefined1 local_98 [88];
  
  local_res18 = param_2;
  local_290 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_290 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_290);
  }
  uVar26 = 0;
  PCGTestsCommon::FTestData::FTestData
            (&local_158,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_290);
  this_02 = (FPCGMetadataAttribute<int> *)0x0;
  local_c8._0_8_ = 0;
  local_c8._40_8_ = 0;
  pUVar13 = PCGTestsCommon::GenerateSettings<UPCGAttributeCastSettings>(&local_158,&local_c8);
  if (pUVar13 == (UPCGAttributeCastSettings *)0x0) {
    uVar26 = 0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                       ,0x17,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
  }
  if ((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) {
    uVar26 = 0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                       ,0x19,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
  }
  ::FName::FName(&local_2a8,L"InAttr");
  ::FName::FName(&local_298,L"OutAttr");
  uVar27 = (undefined7)((ulonglong)uVar26 >> 8);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar13->InputSource,local_2a8,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar13->OutputTarget,local_298,true);
  pUVar13->OutputType = Double;
  pUVar14 = GetTransientPackageAsObject();
  pUVar15 = NewObject<UPCGPointData>(pUVar14);
  iVar9 = param_1->ArrayNum;
  local_2a0 = pUVar15;
  (**(code **)(pUVar15->_padding_ + 0x490))(pUVar15,iVar9 + -1,CONCAT71(uVar27,1));
  plVar16 = (longlong *)(**(code **)(pUVar15->_padding_ + 0x4f8))(pUVar15,local_98,1);
  this_00 = (UPCGMetadata *)pUVar15->_padding_;
  local_218 = *plVar16;
  uStack_210 = plVar16[1];
  local_208 = plVar16[2];
  lStack_200 = plVar16[3];
  if ((iVar9 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  local_1f8 = local_2a8;
  local_1f0.Flag = PCGMetadataDomainID::Default.Flag;
  local_1f0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_1f0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_1f0.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_1f0);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    this_02 = FPCGMetadataDomain::CreateAttribute<int>
                        (this_01,local_1f8,param_1->DataPtr,true,false);
  }
  uVar11 = 0;
  pUVar29 = pUVar15;
  if (1 < iVar9) {
    do {
      lVar17 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar15->_padding_,-1);
      uVar24 = uVar11 + 1;
      uVar21 = 0;
      if ((int)uVar24 < iVar9) {
        uVar21 = ~uVar24 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      piVar3 = param_1->DataPtr;
      if ((lVar17 == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x24b,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iVar9 = FPCGMetadataAttribute<int>::AddValue(this_02,piVar3 + (int)uVar24);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)this_02,lVar17,iVar9,false);
      uVar21 = 0;
      if ((int)uVar11 < (int)local_208) {
        uVar21 = ~uVar11 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      if (uVar11 == (int)uVar11 % uStack_210._4_4_) {
        plVar22 = (long64 *)
                  ((longlong)(int)uStack_210 * (longlong)((int)uVar11 % uStack_210._4_4_) +
                  local_218);
      }
      else {
        plVar22 = &lStack_200;
      }
      iVar9 = param_1->ArrayNum;
      iVar10 = uVar11 + 2;
      *plVar22 = lVar17;
      param_2 = local_res18;
      pUVar29 = local_2a0;
      uVar11 = uVar24;
    } while (iVar10 < iVar9);
  }
  FVar25.Handle = (UObject *)0x0;
  if (local_158.InputData.TaggedData.ArrayNum == local_158.InputData.TaggedData.ArrayMax) {
    local_158.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_158.InputData,
                    &local_158.InputData.TaggedData.ArrayMax);
  }
  this_04 = (FPCGDataPtrWrapper *)
            (local_158.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_158.InputData.TaggedData.ArrayNum * 0x78);
  this_04[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_04[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_04[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_04[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_04[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_04->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_04->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_04[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_04[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_04[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_04[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_04[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_04[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_04[4].Data.field0_0x0 + 4) = 0;
  this_04[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_04[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_04[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_04[7].Data.field0_0x0 + 4) = 0xffffffff;
  local_158.InputData.TaggedData.ArrayNum = local_158.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_04,(UPCGData *)pUVar29);
  this_04[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_158.Settings,&local_228);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_158,(UPCGNode *)&local_res10);
  do {
    if ((local_228.Object == (IPCGElement *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    bVar7 = IPCGElement::Execute(local_228.Object,local_res10);
  } while (!bVar7);
  iVar9 = (local_res10->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_288,"There is one output");
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_288.Data.ArrayNum != 0) {
    FVar23.Data = local_288.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,iVar9,1)
  ;
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
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
LAB_149f90154:
      if (local_res20.Handle != (UObject *)0x0) {
        pUVar18 = Z_Construct_UClass_UPCGPointData_NoRegister();
        bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar18);
        if (bVar7) {
          FVar25 = local_res20;
        }
      }
    }
    else if (local_res20.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res20.Handle);
      goto LAB_149f90154;
    }
    ::FString::FString(&local_278,"Output is an of the same type as input");
    if (FVar25.Handle == (UObject *)0x0) {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_1d8,L"Expected \'%s\' to be not null.");
      (*pcVar4)(this,&local_1d8,0);
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      iVar9 = (**(code **)(*(longlong *)FVar25.Handle + 0x488))(FVar25.Handle);
      iVar10 = (**(code **)(pUVar29->_padding_ + 0x488))(pUVar29);
      ::FString::FString(&local_268,"Output has the same number of points");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_268.Data.ArrayNum != 0) {
        FVar23.Data = local_268.Data.AllocatorInstance.Data;
      }
      bVar7 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,iVar10,iVar9);
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        local_1b8 = local_298;
        FStack_1b0.Flag = PCGMetadataDomainID::Default.Flag;
        FStack_1b0._1_3_ = PCGMetadataDomainID::Default._1_3_;
        FStack_1b0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
        FStack_1b0.DebugName = PCGMetadataDomainID::Default.DebugName;
        local_178.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
        local_178.Name = local_298;
        local_178.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
        local_178.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
        local_178.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
        this_03 = (FPCGMetadataAttribute<double> *)
                  UPCGMetadata::GetConstAttribute
                            (*(UPCGMetadata **)&FVar25.Handle[1].field_0x10,&local_178);
        if ((this_03 == (FPCGMetadataAttribute<double> *)0x0) || ((short)this_03->_padding_ != 1)) {
          this_03 = (FPCGMetadataAttribute<double> *)0x0;
        }
        ::FString::FString(&local_258,"Output metadata has the expected attribute");
        if (this_03 == (FPCGMetadataAttribute<double> *)0x0) {
          pcVar4 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_1c8,L"Expected \'%s\' to be not null.");
          (*pcVar4)(this,&local_1c8,0);
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
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
          pdVar19 = TArrayView<double_const_,int>::operator[](param_2,0);
          dVar1 = this_03->DefaultValue;
          dVar2 = *pdVar19;
          ::FString::FString(&local_248,"Default value was casted correctly");
          dVar5 = __real_3f1a36e2e0000000;
          FVar23.Data = (FScriptContainerElement *)L"";
          if (local_248.Data.ArrayNum != 0) {
            FVar23.Data = local_248.Data.AllocatorInstance.Data;
          }
          bVar7 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,dVar1,dVar2,
                             __real_3f1a36e2e0000000);
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          if (bVar7) {
            puVar20 = (undefined4 *)
                      (**(code **)(*(longlong *)FVar25.Handle + 0x538))(FVar25.Handle,&local_1b8);
            iVar9 = 1;
            local_198 = *puVar20;
            uStack_194 = puVar20[1];
            iStack_190 = puVar20[2];
            iStack_18c = puVar20[3];
            local_188 = *(undefined8 *)(puVar20 + 4);
            uStack_180 = *(undefined8 *)(puVar20 + 6);
            if (1 < param_2->ArrayNum) {
              iVar10 = (int)local_188;
              lVar28 = (longlong)iStack_190;
              do {
                uVar11 = 0;
                if (iVar9 + -1 < iVar10) {
                  uVar11 = (uint)-iVar9 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < NumElements)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                       ,0x8b,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
                lVar17 = *(long64 *)
                          (((iVar9 + -1) % iStack_18c) * lVar28 + CONCAT44(uStack_194,local_198));
                pdVar19 = TArrayView<double_const_,int>::operator[](param_2,iVar9);
                dVar1 = *pdVar19;
                iVar12 = FPCGMetadataAttributeBase::GetValueKey
                                   ((FPCGMetadataAttributeBase *)this_03,lVar17);
                dVar2 = FPCGMetadataAttribute<double>::GetValue(this_03,iVar12);
                ::FString::PrintfImpl(&local_238,L"Entry %d was casted correctly");
                FVar23.Data = (FScriptContainerElement *)L"";
                if (local_238.Data.ArrayNum != 0) {
                  FVar23.Data = local_238.Data.AllocatorInstance.Data;
                }
                bVar7 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar23.Data,dVar2,dVar1,
                                   dVar5);
                if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_238.Data.AllocatorInstance.Data);
                }
                if (!bVar7) goto LAB_149f904c0;
                iVar9 = iVar9 + 1;
              } while (iVar9 < param_2->ArrayNum);
            }
            bVar7 = true;
            goto LAB_149f904c2;
          }
        }
      }
    }
  }
LAB_149f904c0:
  bVar7 = false;
LAB_149f904c2:
  if (local_res10 != (FPCGContext *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_158);
  return bVar7;
}

// RunTestInternal<int,FString,UPCGParamData> @ 149f90550

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
FPCGAttributeCastTestBase::RunTestInternal<int,FString,UPCGParamData>
          (FPCGAttributeCastTestBase *this,TArrayView<int_const_,int> *param_1,
          TArrayView<FString_const_,int> *param_2)

{
  UPCGMetadata *this_00;
  int *piVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  FPCGContext *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UPCGAttributeCastSettings *pUVar7;
  UObject *pUVar8;
  UPCGParamData *pUVar9;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<int> *this_02;
  long64 lVar10;
  UClass *pUVar11;
  FObjectPtr_u_0 FVar12;
  FString *pFVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  FPCGDataPtrWrapper *this_03;
  longlong lVar17;
  ForAnyElementType FVar18;
  wchar_t *pwVar19;
  FPCGContext *local_res10;
  FObjectPtr_u_0 local_res18;
  FName local_res20;
  ForAnyElementType local_218;
  int local_210;
  int local_20c;
  FName local_208;
  UClass *local_200;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  TSharedPtr<IPCGElement,1> local_198;
  FName local_188;
  FPCGMetadataDomainID local_180;
  FName local_168;
  FPCGMetadataDomainID FStack_160;
  FString local_148;
  FString local_138;
  FPCGAttributeIdentifier local_128;
  FTestData local_108;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_78;
  
  local_200 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_200 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_200);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_108,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_200);
  this_02 = (FPCGMetadataAttribute<int> *)0x0;
  local_78._0_8_ = 0;
  local_78._40_8_ = 0;
  pUVar7 = PCGTestsCommon::GenerateSettings<UPCGAttributeCastSettings>(&local_108,&local_78);
  if ((pUVar7 == (UPCGAttributeCastSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                         ,0x17,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                         ,0x19,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  ::FName::FName(&local_res20,L"InAttr");
  ::FName::FName(&local_208,L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar7->InputSource,local_res20,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar7->OutputTarget,local_208,true);
  pUVar7->OutputType = String;
  pUVar8 = GetTransientPackageAsObject();
  pUVar9 = NewObject<UPCGParamData>(pUVar8);
  iVar6 = param_1->ArrayNum;
  this_00 = (UPCGMetadata *)pUVar9->_padding_;
  if ((iVar6 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_188 = local_res20;
  local_180.Flag = PCGMetadataDomainID::Default.Flag;
  local_180._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_180.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_180.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_180);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    this_02 = FPCGMetadataDomain::CreateAttribute<int>
                        (this_01,local_188,param_1->DataPtr,true,false);
  }
  uVar16 = 1;
  if (1 < iVar6) {
    do {
      lVar10 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar9->_padding_,-1);
      uVar14 = 0;
      if ((int)uVar16 < iVar6) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      piVar1 = param_1->DataPtr;
      if ((lVar10 == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x24b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      iVar6 = FPCGMetadataAttribute<int>::AddValue(this_02,piVar1 + (int)uVar16);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)this_02,lVar10,iVar6,false);
      iVar6 = param_1->ArrayNum;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < iVar6);
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
  FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)pUVar9);
  this_03[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_108.Settings,&local_198);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_108,(UPCGNode *)&local_res10);
  do {
    if ((local_198.Object == (IPCGElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar4 = IPCGElement::Execute(local_198.Object,local_res10);
  } while (!bVar4);
  iVar6 = (local_res10->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_1f8,"There is one output");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_1f8.Data.ArrayNum != 0) {
    FVar15.Data = local_1f8.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,iVar6,1)
  ;
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
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
    local_res18 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)(pFVar3->OutputData).TaggedData.AllocatorInstance.Data)->Handle
    ;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f909cb:
      if ((FPCGMetadataAttribute<FString> *)local_res18.Handle ==
          (FPCGMetadataAttribute<FString> *)0x0) goto LAB_149f909ef;
      pUVar11 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar11);
      FVar12 = local_res18;
      if (!bVar4) goto LAB_149f909ef;
    }
    else {
      if ((FPCGMetadataAttribute<FString> *)local_res18.Handle !=
          (FPCGMetadataAttribute<FString> *)0x0) {
        UE::GC::MarkAsReachable(local_res18.Handle);
        goto LAB_149f909cb;
      }
LAB_149f909ef:
      FVar12.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_1e8,"Output is an of the same type as input");
    if ((FPCGMetadataAttribute<FString> *)FVar12.Handle == (FPCGMetadataAttribute<FString> *)0x0) {
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
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    if (!bVar4) {
      local_168 = local_208;
      FStack_160.Flag = PCGMetadataDomainID::Default.Flag;
      FStack_160._1_3_ = PCGMetadataDomainID::Default._1_3_;
      FStack_160.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FStack_160.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_128.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_128.Name = local_208;
      local_128.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_128.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_128.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FVar12.Handle =
           (UObject *)
           UPCGMetadata::GetConstAttribute
                     (*(UPCGMetadata **)&FVar12.Handle[1].field_0x10,&local_128);
      if (((FPCGMetadataAttribute<FString> *)FVar12.Handle == (FPCGMetadataAttribute<FString> *)0x0)
         || ((short)*(longlong *)&FVar12.Handle[2].field_0x20 != 9)) {
        FVar12.Handle = (UObject *)0x0;
      }
      ::FString::FString(&local_1d8,"Output metadata has the expected attribute");
      if ((FPCGMetadataAttribute<FString> *)FVar12.Handle == (FPCGMetadataAttribute<FString> *)0x0)
      {
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
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        pFVar13 = TArrayView<FString_const_,int>::operator[](param_2,0);
        local_210 = *(int *)(FVar12.Handle + 4);
        lVar17 = (longlong)local_210;
        _Src = (((FString *)&FVar12.Handle[3].field_0x20)->Data).AllocatorInstance.Data;
        local_218.Data = (FScriptContainerElement *)0x0;
        if (local_210 == 0) {
          local_20c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_210,0,&local_218,local_210,&local_20c);
          memcpy(local_218.Data,_Src,lVar17 * 2);
        }
        ::FString::FString(&local_1c8,"Default value was casted correctly");
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_1c8.Data.ArrayNum != 0) {
          FVar15.Data = local_1c8.Data.AllocatorInstance.Data;
        }
        if ((pFVar13->Data).ArrayNum == 0) {
          pwVar19 = L"";
        }
        else {
          pwVar19 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_210 != 0) {
          FVar18.Data = local_218.Data;
        }
        bVar4 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,(wchar_t *)FVar18.Data
                           ,pwVar19);
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        if (local_218.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data);
        }
        if (bVar4) {
          iVar6 = param_2->ArrayNum;
          uVar16 = 1;
          if (1 < iVar6) {
            lVar17 = 0x10;
            do {
              uVar14 = 0;
              if ((int)uVar16 < iVar6) {
                uVar14 = ~uVar16 >> 0x1f;
              }
              if ((uVar14 == 0) &&
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
              pFVar13 = param_2->DataPtr;
              iVar6 = FPCGMetadataAttributeBase::GetValueKey
                                ((FPCGMetadataAttributeBase *)FVar12.Handle,
                                 (longlong)(int)(uVar16 - 1));
              FPCGMetadataAttribute<FString>::GetValue
                        ((FPCGMetadataAttribute<FString> *)FVar12.Handle,&local_1a8,iVar6);
              ::FString::PrintfImpl(&local_1b8,L"Entry %d was casted correctly");
              FVar15.Data = (FScriptContainerElement *)L"";
              if (local_1b8.Data.ArrayNum != 0) {
                FVar15.Data = local_1b8.Data.AllocatorInstance.Data;
              }
              if (*(int *)((longlong)&(pFVar13->Data).ArrayNum + lVar17) == 0) {
                pwVar19 = L"";
              }
              else {
                pwVar19 = *(wchar_t **)((longlong)&(pFVar13->Data).AllocatorInstance.Data + lVar17);
              }
              FVar18.Data = (FScriptContainerElement *)L"";
              if (local_1a8.Data.ArrayNum != 0) {
                FVar18.Data = local_1a8.Data.AllocatorInstance.Data;
              }
              bVar4 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,
                                 (wchar_t *)FVar18.Data,pwVar19);
              if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
              }
              if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
              }
              if (!bVar4) goto LAB_149f90d23;
              iVar6 = param_2->ArrayNum;
              uVar16 = uVar16 + 1;
              lVar17 = lVar17 + 0x10;
            } while ((int)uVar16 < iVar6);
          }
          bVar4 = true;
          goto LAB_149f90d25;
        }
      }
    }
  }
LAB_149f90d23:
  bVar4 = false;
LAB_149f90d25:
  if (local_res10 != (FPCGContext *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_108);
  return bVar4;
}

// RunTestInternal<double,__int64,UPCGParamData> @ 149f90da0

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
FPCGAttributeCastTestBase::RunTestInternal<double,__int64,UPCGParamData>
          (FPCGAttributeCastTestBase *this,TArrayView<double_const_,int> *param_1,
          TArrayView<__int64_const_,int> *param_2)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  UPCGMetadata *this_00;
  FScriptContainerElement *pFVar3;
  long64 lVar4;
  code *pcVar5;
  FPCGContext *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UPCGAttributeCastSettings *pUVar10;
  UObject *pUVar11;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<double> *pFVar12;
  UClass *pUVar13;
  FObjectPtr_u_0 FVar14;
  long64 *plVar15;
  long64 lVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  FPCGDataPtrWrapper *this_02;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint uVar21;
  FPCGContext *local_res10;
  TArrayView<__int64_const_,int> *local_res18;
  FPCGMetadataAttribute<double> *local_res20;
  longlong local_228;
  FObjectPtr_u_0 local_220;
  FName local_218;
  long64 local_210;
  UPCGParamData *local_208;
  FName local_200;
  UClass *local_1f8;
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
  local_1f8 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1f8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1f8);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_108,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_1f8);
  pFVar12 = (FPCGMetadataAttribute<double> *)0x0;
  local_78._0_8_ = 0;
  local_78._40_8_ = 0;
  pUVar10 = PCGTestsCommon::GenerateSettings<UPCGAttributeCastSettings>(&local_108,&local_78);
  if ((pUVar10 == (UPCGAttributeCastSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                         ,0x17,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                         ,0x19,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  ::FName::FName(&local_218,L"InAttr");
  ::FName::FName(&local_200,L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar10->InputSource,local_218,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar10->OutputTarget,local_200,true);
  pUVar10->OutputType = Integer64;
  pUVar11 = GetTransientPackageAsObject();
  local_208 = NewObject<UPCGParamData>(pUVar11);
  iVar9 = param_1->ArrayNum;
  this_00 = (UPCGMetadata *)local_208->_padding_;
  if ((iVar9 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_188 = local_218;
  local_180.Flag = PCGMetadataDomainID::Default.Flag;
  local_180._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_180.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_180.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_180);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    pFVar12 = FPCGMetadataDomain::CreateAttribute<double>
                        (this_01,local_188,param_1->DataPtr,true,false);
  }
  uVar21 = 1;
  lVar20 = 8;
  local_res20 = pFVar12;
  if (1 < iVar9) {
    local_228 = 8;
    pTVar1 = &pFVar12->Values;
    do {
      local_210 = UPCGMetadata::AddEntry((UPCGMetadata *)local_208->_padding_,-1);
      uVar17 = 0;
      if ((int)uVar21 < iVar9) {
        uVar17 = ~uVar21 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar19 = (FScriptContainerElement *)(local_228 + (longlong)param_1->DataPtr);
      if ((local_210 == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x24b,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar12->ValueLock);
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar3 <= pFVar19) && (pFVar19 < pFVar3 + (longlong)(pFVar12->Values).ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar9 = (pFVar12->Values).ArrayNum;
      if (iVar9 == (pFVar12->Values).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,&(pFVar12->Values).ArrayMax);
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      (pFVar12->Values).ArrayNum = iVar9 + 1;
      *(undefined8 *)(pFVar3 + (longlong)iVar9 * 8) = *(undefined8 *)pFVar19;
      iVar2 = local_res20->ValueKeyOffset;
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar12->ValueLock);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)local_res20,local_210,iVar2 + iVar9,false);
      local_228 = local_228 + 8;
      uVar21 = uVar21 + 1;
      iVar9 = param_1->ArrayNum;
      param_2 = local_res18;
    } while ((int)uVar21 < iVar9);
  }
  if (local_108.InputData.TaggedData.ArrayNum == local_108.InputData.TaggedData.ArrayMax) {
    local_108.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_108.InputData,
                    &local_108.InputData.TaggedData.ArrayMax);
  }
  this_02 = (FPCGDataPtrWrapper *)
            (local_108.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_108.InputData.TaggedData.ArrayNum * 0x78);
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
  local_108.InputData.TaggedData.ArrayNum = local_108.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)local_208);
  this_02[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_108.Settings,&local_1a0);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_108,(UPCGNode *)&local_res10);
  do {
    if ((local_1a0.Object == (IPCGElement *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    bVar7 = IPCGElement::Execute(local_1a0.Object,local_res10);
  } while (!bVar7);
  iVar9 = (local_res10->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_1f0,"There is one output");
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_1f0.Data.ArrayNum != 0) {
    FVar18.Data = local_1f0.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,iVar9,1)
  ;
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  pFVar6 = local_res10;
  if (bVar7) {
    if (((local_res10->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    local_220 = (FObjectPtr_u_0)
                ((FObjectPtr_u_0 *)(pFVar6->OutputData).TaggedData.AllocatorInstance.Data)->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f912f1:
      if ((FPCGMetadataAttribute<__int64> *)local_220.Handle ==
          (FPCGMetadataAttribute<__int64> *)0x0) goto LAB_149f91311;
      pUVar13 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_220,pUVar13);
      FVar14 = local_220;
      if (!bVar7) goto LAB_149f91311;
    }
    else {
      if ((FPCGMetadataAttribute<__int64> *)local_220.Handle !=
          (FPCGMetadataAttribute<__int64> *)0x0) {
        UE::GC::MarkAsReachable(local_220.Handle);
        goto LAB_149f912f1;
      }
LAB_149f91311:
      FVar14.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_1e0,"Output is an of the same type as input");
    if ((FPCGMetadataAttribute<__int64> *)FVar14.Handle == (FPCGMetadataAttribute<__int64> *)0x0) {
      pcVar5 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_148,L"Expected \'%s\' to be not null.");
      (*pcVar5)(this,&local_148,0);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      local_168 = local_200;
      FStack_160.Flag = PCGMetadataDomainID::Default.Flag;
      FStack_160._1_3_ = PCGMetadataDomainID::Default._1_3_;
      FStack_160.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FStack_160.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_128.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_128.Name = local_200;
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
        pcVar5 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_138,L"Expected \'%s\' to be not null.");
        (*pcVar5)(this,&local_138,0);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if (!bVar7) {
        plVar15 = TArrayView<__int64_const_,int>::operator[](param_2,0);
        lVar4 = *(long64 *)&FVar14.Handle[3].field_0x20;
        ::FString::FString(&local_1c0,"Default value was casted correctly");
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_1c0.Data.ArrayNum != 0) {
          FVar18.Data = local_1c0.Data.AllocatorInstance.Data;
        }
        bVar7 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,lVar4,*plVar15);
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          iVar9 = param_2->ArrayNum;
          uVar21 = 1;
          if (1 < iVar9) {
            do {
              uVar17 = 0;
              if ((int)uVar21 < iVar9) {
                uVar17 = ~uVar21 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                uVar8 = (*pcVar5)();
                return (bool)uVar8;
              }
              lVar4 = *(long64 *)(lVar20 + (longlong)param_2->DataPtr);
              iVar9 = FPCGMetadataAttributeBase::GetValueKey
                                ((FPCGMetadataAttributeBase *)FVar14.Handle,
                                 (longlong)(int)(uVar21 - 1));
              lVar16 = FPCGMetadataAttribute<__int64>::GetValue
                                 ((FPCGMetadataAttribute<__int64> *)FVar14.Handle,iVar9);
              ::FString::PrintfImpl(&local_1b0,L"Entry %d was casted correctly");
              FVar18.Data = (FScriptContainerElement *)L"";
              if (local_1b0.Data.ArrayNum != 0) {
                FVar18.Data = local_1b0.Data.AllocatorInstance.Data;
              }
              bVar7 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,lVar16,lVar4);
              if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
              }
              if (!bVar7) goto LAB_149f91590;
              iVar9 = param_2->ArrayNum;
              uVar21 = uVar21 + 1;
              lVar20 = lVar20 + 8;
            } while ((int)uVar21 < iVar9);
          }
          bVar7 = true;
          goto LAB_149f91592;
        }
      }
    }
  }
LAB_149f91590:
  bVar7 = false;
LAB_149f91592:
  if (local_res10 != (FPCGContext *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_108);
  return bVar7;
}

// RunTestInternal<double,bool,UPCGParamData> @ 149f915e0

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
FPCGAttributeCastTestBase::RunTestInternal<double,bool,UPCGParamData>
          (FPCGAttributeCastTestBase *this,TArrayView<double_const_,int> *param_1,
          TArrayView<bool_const_,int> *param_2)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  UPCGMetadata *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FPCGContext *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UPCGAttributeCastSettings *pUVar9;
  UObject *pUVar10;
  UPCGParamData *pUVar11;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<double> *this_02;
  long64 lVar12;
  UClass *pUVar13;
  FObjectPtr_u_0 FVar14;
  bool *pbVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  FPCGDataPtrWrapper *this_03;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  longlong lVar20;
  FPCGContext *local_res10;
  TArrayView<bool_const_,int> *local_res18;
  longlong local_res20;
  FObjectPtr_u_0 local_230;
  FName local_228 [2];
  FName local_218;
  UClass *local_210;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  TSharedPtr<IPCGElement,1> local_1b8;
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
  
  local_res18 = param_2;
  local_210 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_210 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_210);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_108,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_210);
  this_02 = (FPCGMetadataAttribute<double> *)0x0;
  local_78._0_8_ = 0;
  local_78._40_8_ = 0;
  pUVar9 = PCGTestsCommon::GenerateSettings<UPCGAttributeCastSettings>(&local_108,&local_78);
  if ((pUVar9 == (UPCGAttributeCastSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                         ,0x17,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                         ,0x19,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  ::FName::FName(local_228,L"InAttr");
  ::FName::FName(&local_218,L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar9->InputSource,local_228[0],true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar9->OutputTarget,local_218,true);
  pUVar9->OutputType = Boolean;
  pUVar10 = GetTransientPackageAsObject();
  pUVar11 = NewObject<UPCGParamData>(pUVar10);
  iVar8 = param_1->ArrayNum;
  this_00 = (UPCGMetadata *)pUVar11->_padding_;
  if ((iVar8 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_1a8 = local_228[0];
  local_1a0.Flag = PCGMetadataDomainID::Default.Flag;
  local_1a0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_1a0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_1a0.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_1a0);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    this_02 = FPCGMetadataDomain::CreateAttribute<double>
                        (this_01,local_1a8,param_1->DataPtr,true,false);
  }
  uVar19 = 1;
  if (1 < iVar8) {
    local_res20 = 8;
    pTVar1 = &this_02->Values;
    do {
      lVar12 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar11->_padding_,-1);
      uVar16 = 0;
      if ((int)uVar19 < iVar8) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar18 = (FScriptContainerElement *)(local_res20 + (longlong)param_1->DataPtr);
      if ((lVar12 == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x24b,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      AcquireSRWLockExclusive((PSRWLOCK)&this_02->ValueLock);
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar3 <= pFVar18) && (pFVar18 < pFVar3 + (longlong)(this_02->Values).ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      iVar8 = (this_02->Values).ArrayNum;
      if (iVar8 == (this_02->Values).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,&(this_02->Values).ArrayMax);
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      (this_02->Values).ArrayNum = iVar8 + 1;
      *(undefined8 *)(pFVar3 + (longlong)iVar8 * 8) = *(undefined8 *)pFVar18;
      iVar2 = this_02->ValueKeyOffset;
      ReleaseSRWLockExclusive((PSRWLOCK)&this_02->ValueLock);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)this_02,lVar12,iVar2 + iVar8,false);
      local_res20 = local_res20 + 8;
      uVar19 = uVar19 + 1;
      iVar8 = param_1->ArrayNum;
      param_2 = local_res18;
    } while ((int)uVar19 < iVar8);
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
  UPCGSettings::GetElement(local_108.Settings,&local_1b8);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_108,(UPCGNode *)&local_res10);
  do {
    if ((local_1b8.Object == (IPCGElement *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    bVar6 = IPCGElement::Execute(local_1b8.Object,local_res10);
  } while (!bVar6);
  iVar8 = (local_res10->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_208,"There is one output");
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_208.Data.ArrayNum != 0) {
    FVar17.Data = local_208.Data.AllocatorInstance.Data;
  }
  bVar6 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar17.Data,iVar8,1)
  ;
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  pFVar5 = local_res10;
  if (bVar6) {
    if (((local_res10->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    local_230 = (FObjectPtr_u_0)
                ((FObjectPtr_u_0 *)(pFVar5->OutputData).TaggedData.AllocatorInstance.Data)->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f91b2d:
      if ((FPCGMetadataAttribute<bool> *)local_230.Handle == (FPCGMetadataAttribute<bool> *)0x0)
      goto LAB_149f91b4d;
      pUVar13 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_230,pUVar13);
      FVar14 = local_230;
      if (!bVar6) goto LAB_149f91b4d;
    }
    else {
      if ((FPCGMetadataAttribute<bool> *)local_230.Handle != (FPCGMetadataAttribute<bool> *)0x0) {
        UE::GC::MarkAsReachable(local_230.Handle);
        goto LAB_149f91b2d;
      }
LAB_149f91b4d:
      FVar14.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_1f8,"Output is an of the same type as input");
    if ((FPCGMetadataAttribute<bool> *)FVar14.Handle == (FPCGMetadataAttribute<bool> *)0x0) {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_168,L"Expected \'%s\' to be not null.");
      (*pcVar4)(this,&local_168,0);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    if (!bVar6) {
      local_188 = local_218;
      FStack_180.Flag = PCGMetadataDomainID::Default.Flag;
      FStack_180._1_3_ = PCGMetadataDomainID::Default._1_3_;
      FStack_180.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FStack_180.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_128.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_128.Name = local_218;
      local_128.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_128.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_128.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FVar14.Handle =
           (UObject *)
           UPCGMetadata::GetConstAttribute
                     (*(UPCGMetadata **)&FVar14.Handle[1].field_0x10,&local_128);
      if (((FPCGMetadataAttribute<bool> *)FVar14.Handle == (FPCGMetadataAttribute<bool> *)0x0) ||
         ((short)*(longlong *)&FVar14.Handle[2].field_0x20 != 10)) {
        FVar14.Handle = (UObject *)0x0;
      }
      ::FString::FString(&local_1e8,"Output metadata has the expected attribute");
      if ((FPCGMetadataAttribute<bool> *)FVar14.Handle == (FPCGMetadataAttribute<bool> *)0x0) {
        pcVar4 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_158,L"Expected \'%s\' to be not null.");
        (*pcVar4)(this,&local_158,0);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      if (!bVar6) {
        pbVar15 = TArrayView<bool_const_,int>::operator[](param_2,0);
        bVar6 = (bool)FVar14.Handle[3].field_0x20;
        ::FString::FString(&local_1d8,"Default value was casted correctly");
        if (bVar6 == *pbVar15) {
          bVar6 = false;
        }
        else {
          pcVar4 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_148,L"%s: The two values are not equal.");
          (*pcVar4)(this,&local_148,0);
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          bVar6 = true;
        }
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        if (!bVar6) {
          iVar8 = param_2->ArrayNum;
          uVar19 = 1;
          if (1 < iVar8) {
            lVar20 = 1;
            do {
              uVar16 = 0;
              if ((int)uVar19 < iVar8) {
                uVar16 = ~uVar19 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              pbVar15 = param_2->DataPtr;
              iVar8 = FPCGMetadataAttributeBase::GetValueKey
                                ((FPCGMetadataAttributeBase *)FVar14.Handle,
                                 (longlong)(int)(uVar19 - 1));
              bVar6 = FPCGMetadataAttribute<bool>::GetValue
                                ((FPCGMetadataAttribute<bool> *)FVar14.Handle,iVar8);
              ::FString::PrintfImpl(&local_1c8,L"Entry %d was casted correctly");
              if (bVar6 == pbVar15[lVar20]) {
                bVar6 = false;
              }
              else {
                pcVar4 = *(code **)(*(longlong *)this + 0x28);
                ::FString::PrintfImpl(&local_138,L"%s: The two values are not equal.");
                (*pcVar4)(this,&local_138,0);
                if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_138.Data.AllocatorInstance.Data);
                }
                bVar6 = true;
              }
              if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
              }
              if (bVar6) goto LAB_149f91e2c;
              uVar19 = uVar19 + 1;
              lVar20 = lVar20 + 1;
              iVar8 = local_res18->ArrayNum;
              param_2 = local_res18;
            } while ((int)uVar19 < iVar8);
          }
          bVar6 = true;
          goto LAB_149f91e2e;
        }
      }
    }
  }
LAB_149f91e2c:
  bVar6 = false;
LAB_149f91e2e:
  if (local_res10 != (FPCGContext *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_108);
  return bVar6;
}

// RunTestInternal<UE::Math::TQuat<double>,UE::Math::TRotator<double>,UPCGParamData> @ 149f91e80

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
FPCGAttributeCastTestBase::
RunTestInternal<UE::Math::TQuat<double>,UE::Math::TRotator<double>,UPCGParamData>
          (FPCGAttributeCastTestBase *this,TArrayView<UE::Math::TQuat<double>_const_,int> *param_1,
          TArrayView<UE::Math::TRotator<double>_const_,int> *param_2)

{
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  double *pdVar2;
  double dVar3;
  FName FVar4;
  int iVar5;
  UPCGMetadata *this_00;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  FName FVar14;
  double dVar15;
  float fVar16;
  FPCGContext *pFVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  undefined1 uVar21;
  int iVar22;
  UPCGAttributeCastSettings *pUVar23;
  UObject *pUVar24;
  UPCGParamData *pUVar25;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *pFVar26;
  long64 lVar27;
  UClass *pUVar28;
  FObjectPtr_u_0 FVar29;
  TRotator<double> *pTVar30;
  uint uVar31;
  ForAnyElementType FVar32;
  FPCGDataPtrWrapper *this_02;
  longlong lVar33;
  FScriptContainerElement *pFVar34;
  uint uVar35;
  FPCGContext *local_res10;
  TArrayView<UE::Math::TRotator<double>_const_,int> *local_res18;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *local_res20;
  longlong local_2f8;
  FObjectPtr_u_0 local_2f0;
  FName local_2e8;
  UPCGParamData *local_2e0;
  FName local_2d8 [2];
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
  pFVar26 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0;
  local_c8[0]._0_8_ = 0;
  local_c8[0]._40_8_ = 0;
  pUVar23 = PCGTestsCommon::GenerateSettings<UPCGAttributeCastSettings>(&local_158,local_c8);
  if ((pUVar23 == (UPCGAttributeCastSettings *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                          ,0x17,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    uVar21 = (*pcVar8)();
    return (bool)uVar21;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                          ,0x19,L""), bVar20)) {
    pcVar8 = (code *)swi(3);
    uVar21 = (*pcVar8)();
    return (bool)uVar21;
  }
  ::FName::FName(&local_2e8,L"InAttr");
  ::FName::FName(local_2d8,L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar23->InputSource,local_2e8,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar23->OutputTarget,local_2d8[0],true);
  pUVar23->OutputType = Rotator;
  pUVar24 = GetTransientPackageAsObject();
  pUVar25 = NewObject<UPCGParamData>(pUVar24);
  iVar22 = param_1->ArrayNum;
  this_00 = (UPCGMetadata *)pUVar25->_padding_;
  local_2e0 = pUVar25;
  if ((iVar22 < 1) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar20)) {
    pcVar8 = (code *)swi(3);
    uVar21 = (*pcVar8)();
    return (bool)uVar21;
  }
  local_238 = local_2e8;
  local_230.Flag = PCGMetadataDomainID::Default.Flag;
  local_230._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_230.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_230.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_230);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    pFVar26 = FPCGMetadataDomain::CreateAttribute<UE::Math::TQuat<double>_>
                        (this_01,local_238,param_1->DataPtr,true,false);
  }
  uVar35 = 1;
  local_res20 = pFVar26;
  if (1 < iVar22) {
    local_2f8 = 0x20;
    pTVar1 = &pFVar26->Values;
    do {
      lVar27 = UPCGMetadata::AddEntry((UPCGMetadata *)pUVar25->_padding_,-1);
      uVar31 = 0;
      if ((int)uVar35 < iVar22) {
        uVar31 = ~uVar35 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        uVar21 = (*pcVar8)();
        return (bool)uVar21;
      }
      pFVar34 = (FScriptContainerElement *)((longlong)&param_1->DataPtr->X + local_2f8);
      if ((lVar27 == -1) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("ItemKey != PCGInvalidEntryKey",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                              ,0x24b,L""), bVar20)) {
        pcVar8 = (code *)swi(3);
        uVar21 = (*pcVar8)();
        return (bool)uVar21;
      }
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar26->ValueLock);
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar34) && (pFVar34 < pFVar6 + (longlong)(pFVar26->Values).ArrayMax * 0x20))
         && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar20)) {
        pcVar8 = (code *)swi(3);
        uVar21 = (*pcVar8)();
        return (bool)uVar21;
      }
      iVar22 = (pFVar26->Values).ArrayNum;
      if (iVar22 == (pFVar26->Values).ArrayMax) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1020,&pTVar1->AllocatorInstance,&(pFVar26->Values).ArrayMax);
      }
      (pFVar26->Values).ArrayNum = iVar22 + 1;
      uVar9 = *(undefined4 *)(pFVar34 + 4);
      uVar10 = *(undefined4 *)(pFVar34 + 8);
      uVar11 = *(undefined4 *)(pFVar34 + 0xc);
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar22 * 0x20;
      *(undefined4 *)pFVar6 = *(undefined4 *)pFVar34;
      *(undefined4 *)(pFVar6 + 4) = uVar9;
      *(undefined4 *)(pFVar6 + 8) = uVar10;
      *(undefined4 *)(pFVar6 + 0xc) = uVar11;
      uVar9 = *(undefined4 *)(pFVar34 + 0x14);
      uVar10 = *(undefined4 *)(pFVar34 + 0x18);
      uVar11 = *(undefined4 *)(pFVar34 + 0x1c);
      pFVar7 = pFVar7 + (longlong)iVar22 * 0x20 + 0x10;
      *(undefined4 *)pFVar7 = *(undefined4 *)(pFVar34 + 0x10);
      *(undefined4 *)(pFVar7 + 4) = uVar9;
      *(undefined4 *)(pFVar7 + 8) = uVar10;
      *(undefined4 *)(pFVar7 + 0xc) = uVar11;
      iVar5 = local_res20->ValueKeyOffset;
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar26->ValueLock);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)local_res20,lVar27,iVar5 + iVar22,false);
      local_2f8 = local_2f8 + 0x20;
      uVar35 = uVar35 + 1;
      iVar22 = param_1->ArrayNum;
      param_2 = local_res18;
      pUVar25 = local_2e0;
    } while ((int)uVar35 < iVar22);
  }
  if (local_158.InputData.TaggedData.ArrayNum == local_158.InputData.TaggedData.ArrayMax) {
    local_158.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_158.InputData,
                    &local_158.InputData.TaggedData.ArrayMax);
  }
  this_02 = (FPCGDataPtrWrapper *)
            (local_158.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_158.InputData.TaggedData.ArrayNum * 0x78);
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
  local_158.InputData.TaggedData.ArrayNum = local_158.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar25);
  this_02[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_158.Settings,&local_250);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_158,(UPCGNode *)&local_res10);
  do {
    if ((local_250.Object == (IPCGElement *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar8 = (code *)swi(3);
      uVar21 = (*pcVar8)();
      return (bool)uVar21;
    }
    bVar20 = IPCGElement::Execute(local_250.Object,local_res10);
  } while (!bVar20);
  iVar22 = (local_res10->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_2a0,"There is one output");
  FVar32.Data = (FScriptContainerElement *)L"";
  if (local_2a0.Data.ArrayNum != 0) {
    FVar32.Data = local_2a0.Data.AllocatorInstance.Data;
  }
  bVar20 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar32.Data,iVar22,1);
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  pFVar17 = local_res10;
  if (bVar20) {
    if (((local_res10->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar8 = (code *)swi(3);
      uVar21 = (*pcVar8)();
      return (bool)uVar21;
    }
    local_2f0 = (FObjectPtr_u_0)
                ((FObjectPtr_u_0 *)(pFVar17->OutputData).TaggedData.AllocatorInstance.Data)->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f92425:
      if ((FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)local_2f0.Handle ==
          (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) goto LAB_149f92445;
      pUVar28 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar20 = FObjectPtr::IsA((FObjectPtr *)&local_2f0,pUVar28);
      FVar29 = local_2f0;
      if (!bVar20) goto LAB_149f92445;
    }
    else {
      if ((FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)local_2f0.Handle !=
          (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) {
        UE::GC::MarkAsReachable(local_2f0.Handle);
        goto LAB_149f92425;
      }
LAB_149f92445:
      FVar29.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_290,"Output is an of the same type as input");
    if ((FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)FVar29.Handle ==
        (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) {
      pcVar8 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_218,L"Expected \'%s\' to be not null.");
      (*pcVar8)(this,&local_218,0);
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      bVar20 = true;
    }
    else {
      bVar20 = false;
    }
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    if (!bVar20) {
      local_2c8.Pitch = (double)local_2d8[0];
      local_2c8.Yaw = (double)PCGMetadataDomainID::Default._0_8_;
      local_2c8.Roll = (double)PCGMetadataDomainID::Default.DebugName;
      local_1f8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_1f8.Name = local_2d8[0];
      local_1f8.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_1f8.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_1f8.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FVar29.Handle =
           (UObject *)
           UPCGMetadata::GetConstAttribute
                     (*(UPCGMetadata **)&FVar29.Handle[1].field_0x10,&local_1f8);
      if (((FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)FVar29.Handle ==
           (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) ||
         ((short)*(longlong *)&FVar29.Handle[2].field_0x20 != 0xb)) {
        FVar29.Handle = (UObject *)0x0;
      }
      ::FString::FString(&local_280,"Output metadata has the expected attribute");
      if ((FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)FVar29.Handle ==
          (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) {
        pcVar8 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_208,L"Expected \'%s\' to be not null.");
        (*pcVar8)(this,&local_208,0);
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        bVar20 = true;
      }
      else {
        bVar20 = false;
      }
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
      if (!bVar20) {
        pTVar30 = TArrayView<UE::Math::TRotator<double>_const_,int>::operator[](param_2,0);
        dVar12 = ((TRotator<double> *)&FVar29.Handle[3].field_0x20)->Pitch;
        dVar13 = *(double *)(FVar29.Handle + 4);
        dVar3 = *(double *)&FVar29.Handle[4].field_0x8;
        FVar14 = (FName)pTVar30->Pitch;
        dVar15 = pTVar30->Yaw;
        FVar4 = (FName)pTVar30->Roll;
        ::FString::FString(&local_270,"Default value was casted correctly");
        fVar16 = __real_38d1b717;
        FVar32.Data = (FScriptContainerElement *)L"";
        if (local_270.Data.ArrayNum != 0) {
          FVar32.Data = local_270.Data.AllocatorInstance.Data;
        }
        local_2c8.Pitch = (double)FVar14;
        local_2c8.Yaw = dVar15;
        local_2c8.Roll = (double)FVar4;
        local_1d8.Pitch = dVar12;
        local_1d8.Yaw = dVar13;
        local_1d8.Roll = dVar3;
        bVar20 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,(wchar_t *)FVar32.Data,&local_1d8,&local_2c8
                            ,__real_38d1b717);
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        if (bVar20) {
          iVar22 = param_2->ArrayNum;
          uVar35 = 1;
          if (1 < iVar22) {
            lVar33 = 0x18;
            do {
              uVar31 = 0;
              if ((int)uVar35 < iVar22) {
                uVar31 = ~uVar35 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar20)) {
                pcVar8 = (code *)swi(3);
                uVar21 = (*pcVar8)();
                return (bool)uVar21;
              }
              pdVar2 = (double *)((longlong)&param_2->DataPtr->Pitch + lVar33);
              dVar12 = *pdVar2;
              dVar13 = pdVar2[1];
              dVar3 = *(double *)((longlong)&param_2->DataPtr->Roll + lVar33);
              iVar22 = FPCGMetadataAttributeBase::GetValueKey
                                 ((FPCGMetadataAttributeBase *)FVar29.Handle,
                                  (longlong)(int)(uVar35 - 1));
              FPCGMetadataAttribute<UE::Math::TRotator<double>_>::GetValue
                        ((FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)FVar29.Handle,
                         &local_1b8,iVar22);
              dVar19 = local_1b8.Roll;
              dVar18 = local_1b8.Yaw;
              dVar15 = local_1b8.Pitch;
              ::FString::PrintfImpl(&local_260,L"Entry %d was casted correctly");
              FVar32.Data = (FScriptContainerElement *)L"";
              if (local_260.Data.ArrayNum != 0) {
                FVar32.Data = local_260.Data.AllocatorInstance.Data;
              }
              local_178.Pitch = dVar15;
              local_178.Yaw = dVar18;
              local_178.Roll = dVar19;
              local_198.Pitch = dVar12;
              local_198.Yaw = dVar13;
              local_198.Roll = dVar3;
              bVar20 = FAutomationTestBase::TestEqual
                                 ((FAutomationTestBase *)this,(wchar_t *)FVar32.Data,&local_178,
                                  &local_198,fVar16);
              if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_260.Data.AllocatorInstance.Data);
              }
              if (!bVar20) goto LAB_149f92743;
              iVar22 = param_2->ArrayNum;
              uVar35 = uVar35 + 1;
              lVar33 = lVar33 + 0x18;
            } while ((int)uVar35 < iVar22);
          }
          bVar20 = true;
          goto LAB_149f92745;
        }
      }
    }
  }
LAB_149f92743:
  bVar20 = false;
LAB_149f92745:
  if (local_res10 != (FPCGContext *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_250.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_158);
  return bVar20;
}

// RunTestInternal<bool,double,UPCGParamData> @ 149f927e0

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
FPCGAttributeCastTestBase::RunTestInternal<bool,double,UPCGParamData>
          (FPCGAttributeCastTestBase *this,TArrayView<bool_const_,int> *param_1,
          TArrayView<double_const_,int> *param_2)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  UPCGMetadata *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  FPCGContext *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  UPCGAttributeCastSettings *pUVar12;
  UObject *pUVar13;
  UPCGParamData *pUVar14;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<bool> *pFVar15;
  long64 lVar16;
  UClass *pUVar17;
  FObjectPtr_u_0 FVar18;
  double *pdVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  FPCGDataPtrWrapper *this_02;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  FPCGContext *local_res10;
  TArrayView<double_const_,int> *local_res18;
  FPCGMetadataAttribute<bool> *local_res20;
  longlong local_248;
  FObjectPtr_u_0 local_240;
  FName local_238;
  UPCGParamData *local_230;
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
  FPCGAttributeIdentifier local_158;
  FTestData local_138;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_a8 [2];
  
  local_res18 = param_2;
  local_220 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_220 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_220);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_138,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_220);
  pFVar15 = (FPCGMetadataAttribute<bool> *)0x0;
  local_a8[0]._0_8_ = 0;
  local_a8[0]._40_8_ = 0;
  pUVar12 = PCGTestsCommon::GenerateSettings<UPCGAttributeCastSettings>(&local_138,local_a8);
  if ((pUVar12 == (UPCGAttributeCastSettings *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                         ,0x17,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  if (((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum < 2)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData.Num() == ExpectedOutData.Num() && InData.Num() > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                         ,0x19,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  ::FName::FName(&local_238,L"InAttr");
  ::FName::FName(&local_228,L"OutAttr");
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar12->InputSource,local_238,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&pUVar12->OutputTarget,local_228,true);
  pUVar12->OutputType = Double;
  pUVar13 = GetTransientPackageAsObject();
  pUVar14 = NewObject<UPCGParamData>(pUVar13);
  iVar11 = param_1->ArrayNum;
  this_00 = (UPCGMetadata *)pUVar14->_padding_;
  local_230 = pUVar14;
  if ((iVar11 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  local_1b8 = local_238;
  local_1b0.Flag = PCGMetadataDomainID::Default.Flag;
  local_1b0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_1b0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_1b0.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain(this_00,&local_1b0);
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    pFVar15 = FPCGMetadataDomain::CreateAttribute<bool>
                        (this_01,local_1b8,param_1->DataPtr,true,false);
  }
  uVar24 = 1;
  local_res20 = pFVar15;
  if (1 < iVar11) {
    local_248 = 1;
    pTVar1 = &pFVar15->Values;
    do {
      lVar16 = UPCGMetadata::AddEntry((UPCGMetadata *)local_230->_padding_,-1);
      uVar20 = 0;
      if ((int)uVar24 < iVar11) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar23 = (FScriptContainerElement *)(param_1->DataPtr + local_248);
      if ((lVar16 == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemKey != PCGInvalidEntryKey",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                             ,0x24b,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar15->ValueLock);
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar23) && (pFVar23 < pFVar5 + (pFVar15->Values).ArrayMax)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      iVar11 = (pFVar15->Values).ArrayNum;
      if (iVar11 == (pFVar15->Values).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&pTVar1->AllocatorInstance,&(pFVar15->Values).ArrayMax);
      }
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      (pFVar15->Values).ArrayNum = iVar11 + 1;
      pFVar5[iVar11] = *pFVar23;
      iVar4 = local_res20->ValueKeyOffset;
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar15->ValueLock);
      FPCGMetadataAttributeBase::SetValueFromValueKey
                ((FPCGMetadataAttributeBase *)local_res20,lVar16,iVar4 + iVar11,false);
      local_248 = local_248 + 1;
      uVar24 = uVar24 + 1;
      iVar11 = param_1->ArrayNum;
      pUVar14 = local_230;
      param_2 = local_res18;
    } while ((int)uVar24 < iVar11);
  }
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
  local_138.InputData.TaggedData.ArrayNum = local_138.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar14);
  this_02[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  UPCGSettings::GetElement(local_138.Settings,&local_1c8);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_138,(UPCGNode *)&local_res10);
  do {
    if ((local_1c8.Object == (IPCGElement *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    bVar9 = IPCGElement::Execute(local_1c8.Object,local_res10);
  } while (!bVar9);
  iVar11 = (local_res10->OutputData).TaggedData.ArrayNum;
  ::FString::FString(&local_218,"There is one output");
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_218.Data.ArrayNum != 0) {
    FVar21.Data = local_218.Data.AllocatorInstance.Data;
  }
  bVar9 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar21.Data,iVar11,1);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  pFVar8 = local_res10;
  if (bVar9) {
    if (((local_res10->OutputData).TaggedData.ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    local_240 = (FObjectPtr_u_0)
                ((FObjectPtr_u_0 *)(pFVar8->OutputData).TaggedData.AllocatorInstance.Data)->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f92d49:
      if ((FPCGMetadataAttribute<double> *)local_240.Handle == (FPCGMetadataAttribute<double> *)0x0)
      goto LAB_149f92d69;
      pUVar17 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar9 = FObjectPtr::IsA((FObjectPtr *)&local_240,pUVar17);
      FVar18 = local_240;
      if (!bVar9) goto LAB_149f92d69;
    }
    else {
      if ((FPCGMetadataAttribute<double> *)local_240.Handle != (FPCGMetadataAttribute<double> *)0x0)
      {
        UE::GC::MarkAsReachable(local_240.Handle);
        goto LAB_149f92d49;
      }
LAB_149f92d69:
      FVar18.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_208,"Output is an of the same type as input");
    if ((FPCGMetadataAttribute<double> *)FVar18.Handle == (FPCGMetadataAttribute<double> *)0x0) {
      pcVar6 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_178,L"Expected \'%s\' to be not null.");
      (*pcVar6)(this,&local_178,0);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    if (!bVar9) {
      local_198 = local_228;
      FStack_190.Flag = PCGMetadataDomainID::Default.Flag;
      FStack_190._1_3_ = PCGMetadataDomainID::Default._1_3_;
      FStack_190.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FStack_190.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_158.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_158.Name = local_228;
      local_158.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_158.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_158.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FVar18.Handle =
           (UObject *)
           UPCGMetadata::GetConstAttribute
                     (*(UPCGMetadata **)&FVar18.Handle[1].field_0x10,&local_158);
      if (((FPCGMetadataAttribute<double> *)FVar18.Handle == (FPCGMetadataAttribute<double> *)0x0)
         || ((short)*(longlong *)&FVar18.Handle[2].field_0x20 != 1)) {
        FVar18.Handle = (UObject *)0x0;
      }
      ::FString::FString(&local_1f8,"Output metadata has the expected attribute");
      if ((FPCGMetadataAttribute<double> *)FVar18.Handle == (FPCGMetadataAttribute<double> *)0x0) {
        pcVar6 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_168,L"Expected \'%s\' to be not null.");
        (*pcVar6)(this,&local_168,0);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      if (!bVar9) {
        pdVar19 = TArrayView<double_const_,int>::operator[](param_2,0);
        dVar2 = *(double *)&FVar18.Handle[3].field_0x20;
        dVar3 = *pdVar19;
        ::FString::FString(&local_1e8,"Default value was casted correctly");
        dVar7 = __real_3f1a36e2e0000000;
        FVar21.Data = (FScriptContainerElement *)L"";
        if (local_1e8.Data.ArrayNum != 0) {
          FVar21.Data = local_1e8.Data.AllocatorInstance.Data;
        }
        bVar9 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar21.Data,dVar2,dVar3,
                           __real_3f1a36e2e0000000);
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          iVar11 = param_2->ArrayNum;
          uVar24 = 1;
          if (1 < iVar11) {
            lVar22 = 8;
            do {
              uVar20 = 0;
              if ((int)uVar24 < iVar11) {
                uVar20 = ~uVar24 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                uVar10 = (*pcVar6)();
                return (bool)uVar10;
              }
              dVar2 = *(double *)(lVar22 + (longlong)param_2->DataPtr);
              iVar11 = FPCGMetadataAttributeBase::GetValueKey
                                 ((FPCGMetadataAttributeBase *)FVar18.Handle,
                                  (longlong)(int)(uVar24 - 1));
              dVar3 = FPCGMetadataAttribute<double>::GetValue
                                ((FPCGMetadataAttribute<double> *)FVar18.Handle,iVar11);
              ::FString::PrintfImpl(&local_1d8,L"Entry %d was casted correctly");
              FVar21.Data = (FScriptContainerElement *)L"";
              if (local_1d8.Data.ArrayNum != 0) {
                FVar21.Data = local_1d8.Data.AllocatorInstance.Data;
              }
              bVar9 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar21.Data,dVar3,dVar2,
                                 dVar7);
              if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
              }
              if (!bVar9) goto LAB_149f93001;
              iVar11 = param_2->ArrayNum;
              uVar24 = uVar24 + 1;
              lVar22 = lVar22 + 8;
            } while ((int)uVar24 < iVar11);
          }
          bVar9 = true;
          goto LAB_149f93003;
        }
      }
    }
  }
LAB_149f93001:
  bVar9 = false;
LAB_149f93003:
  if (local_res10 != (FPCGContext *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_138);
  return bVar9;
}

