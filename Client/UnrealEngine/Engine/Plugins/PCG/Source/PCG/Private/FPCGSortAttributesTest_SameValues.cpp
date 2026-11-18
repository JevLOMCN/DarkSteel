// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 14a007f20

EAutomationTestFlags __thiscall
FPCGSortAttributesTest_SameValues::GetTestFlags(FPCGSortAttributesTest_SameValues *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a007f30

bool __thiscall
FPCGSortAttributesTest_SameValues::IsStressTest(FPCGSortAttributesTest_SameValues *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a007f40

uint __thiscall
FPCGSortAttributesTest_SameValues::GetRequiredDeviceNum(FPCGSortAttributesTest_SameValues *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a007f50

FString * __thiscall
FPCGSortAttributesTest_SameValues::GetTestSourceFileName
          (FPCGSortAttributesTest_SameValues *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSortAttributesTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a007f80

int __thiscall
FPCGSortAttributesTest_SameValues::GetTestSourceFileLine(FPCGSortAttributesTest_SameValues *this)

{
  return 0xd9;
}

// GetTests @ 14a007f90

/* WARNING: Removing unreachable block (ram,0x00014a00807d) */
/* WARNING: Removing unreachable block (ram,0x00014a008148) */

void __thiscall
FPCGSortAttributesTest_SameValues::GetTests
          (FPCGSortAttributesTest_SameValues *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.SortAttributes.AttributeSet.SameValues");
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

// RunTest @ 14a008170

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
FPCGSortAttributesTest_SameValues::RunTest(FPCGSortAttributesTest_SameValues *this,FString *param_1)

{
  code *pcVar1;
  FName FVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  UPCGParamData *pUVar8;
  UClass *pUVar9;
  FObjectPtr_u_0 this_00;
  FPCGMetadataAttributeBase *this_01;
  long64 lVar10;
  long64 lVar11;
  ForAnyElementType FVar12;
  int iVar13;
  FObjectPtr_u_0 FVar14;
  FObjectPtr_u_0 local_res18;
  undefined8 local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_198;
  FName local_188;
  FPCGMetadataDomainID FStack_180;
  undefined8 *local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FPCGAttributePropertySelector local_120;
  FString local_e0;
  FString local_d0;
  FPCGAttributeIdentifier local_b8;
  FPCGAttributeIdentifier local_98;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  pUVar8 = SortCommonTestData::GenerateParamData(100,0x2a,false);
  if ((pUVar8 == (UPCGParamData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputParamData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSortAttributesTest.cpp"
                         ,0xde,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  FVar2 = SortCommonTestData::AttributeName;
  local_res20 = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_120);
  FPCGAttributePropertySelector::SetDomainName(&local_120,(FName)0x0,true);
  FPCGAttributePropertySelector::SetAttributeName(&local_120,FVar2,true);
  DestructItems<FString,int>
            ((FString *)local_120.ExtraNames.AllocatorInstance.Data,local_120.ExtraNames.ArrayNum);
  local_120.ExtraNames.ArrayNum = 0;
  if (local_120.ExtraNames.ArrayMax == 0) {
    local_120.ExtraNames.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,local_120.ExtraNames.ArrayMax,&local_120.ExtraNames.AllocatorInstance,0,
               &local_120.ExtraNames.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_120.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
  }
  SortCommonTestData::RunSortElementOnData
            ((EPCGSortMethod)&local_168,(UPCGData *)0x0,(FPCGAttributePropertyInputSelector *)pUVar8
            );
  DestructItems<FString,int>
            ((FString *)local_120.ExtraNames.AllocatorInstance.Data,local_120.ExtraNames.ArrayNum);
  if (local_120.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.ExtraNames.AllocatorInstance.Data);
  }
  puVar3 = local_168;
  iVar13 = *(int *)(local_168 + 8);
  ::FString::FString(&local_160,"Output count");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_160.Data.ArrayNum != 0) {
    FVar12.Data = local_160.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar13,1);
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    if ((*(int *)(puVar3 + 8) < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    local_res18 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)puVar3[7])->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14a008359:
      if ((FPCGMetadataAttributeBase *)local_res18.Handle == (FPCGMetadataAttributeBase *)0x0)
      goto LAB_14a00837d;
      pUVar9 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar9);
      FVar14 = local_res18;
      if (!bVar4) goto LAB_14a00837d;
    }
    else {
      if ((FPCGMetadataAttributeBase *)local_res18.Handle != (FPCGMetadataAttributeBase *)0x0) {
        UE::GC::MarkAsReachable(local_res18.Handle);
        goto LAB_14a008359;
      }
LAB_14a00837d:
      FVar14.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_150,"Output is an attribute set data");
    if ((FPCGMetadataAttributeBase *)FVar14.Handle == (FPCGMetadataAttributeBase *)0x0) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_e0,L"Expected \'%s\' to be not null.");
      (*pcVar1)(this,&local_e0,0);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (!bVar4) {
      if ((((FPCGMetadataAttributeBase *)FVar14.Handle == (FPCGMetadataAttributeBase *)0x0) ||
          (*(longlong *)&FVar14.Handle[1].field_0x10 == 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutParamData && OutParamData->Metadata",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSortAttributesTest.cpp"
                             ,0xeb,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      local_188 = SortCommonTestData::AttributeName;
      FStack_180.Flag = PCGMetadataDomainID::Default.Flag;
      FStack_180._1_3_ = PCGMetadataDomainID::Default._1_3_;
      FStack_180.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FStack_180.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_b8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_b8.Name = SortCommonTestData::AttributeName;
      local_b8.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_b8.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_b8.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      this_00.Handle =
           (UObject *)UPCGMetadata::GetConstAttribute((UPCGMetadata *)pUVar8->_padding_,&local_b8);
      if ((((FPCGMetadataAttributeBase *)this_00.Handle == (FPCGMetadataAttributeBase *)0x0) ||
          (*(short *)&this_00.Handle[2].field_0x20 != 2)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InAttribute",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSortAttributesTest.cpp"
                             ,0xef,L""), this_00.Handle = (UObject *)0x0, bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      local_188 = SortCommonTestData::AttributeName;
      FStack_180.Flag = PCGMetadataDomainID::Default.Flag;
      FStack_180._1_3_ = PCGMetadataDomainID::Default._1_3_;
      FStack_180.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FStack_180.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_98.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_98.Name = SortCommonTestData::AttributeName;
      local_98.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_98.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_98.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      this_01 = UPCGMetadata::GetConstAttribute
                          (*(UPCGMetadata **)&FVar14.Handle[1].field_0x10,&local_98);
      if ((this_01 == (FPCGMetadataAttributeBase *)0x0) || (this_01->TypeId != 2)) {
        this_01 = (FPCGMetadataAttributeBase *)0x0;
      }
      ::FString::FString(&local_140,"Output has the sorted attribute");
      if (this_01 == (FPCGMetadataAttributeBase *)0x0) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_d0,L"Expected \'%s\' to be not null.");
        (*pcVar1)(this,&local_d0,0);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        if ((this_01 == (FPCGMetadataAttributeBase *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("OutAttribute",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSortAttributesTest.cpp"
                               ,0xf3,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        iVar13 = 0;
        lVar10 = UPCGMetadata::GetLocalItemCount(*(UPCGMetadata **)&FVar14.Handle[1].field_0x10);
        if (lVar10 != 1 && -1 < lVar10 + -1) {
          lVar10 = 0;
          do {
            iVar6 = FPCGMetadataAttributeBase::GetValueKey
                              ((FPCGMetadataAttributeBase *)this_00.Handle,lVar10);
            iVar7 = FPCGMetadataAttributeBase::GetValueKey(this_01,lVar10);
            FStringFormatArg::FStringFormatArg(&local_78,iVar6);
            FStringFormatArg::FStringFormatArg(&local_58,iVar7);
            local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_198.ArrayNum = 2;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,2,0,&local_198.AllocatorInstance,2,&local_198.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_198.AllocatorInstance.Data,&local_78,2);
            ::FString::FormatImpl
                      (&local_130,
                       L"InAttribute and OutAttribute have the same value key for the same entry key ({0} vs {1})"
                       ,&local_198);
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_130.Data.ArrayNum != 0) {
              FVar12.Data = local_130.Data.AllocatorInstance.Data;
            }
            bVar4 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar6 == iVar7);
            if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_130.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
            if ((FStringFormatArg *)local_198.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_198.AllocatorInstance.Data);
            }
            if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
            }
            if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
            }
            if (!bVar4) goto LAB_14a0086e3;
            iVar13 = iVar13 + 1;
            lVar10 = (long64)iVar13;
            lVar11 = UPCGMetadata::GetLocalItemCount(*(UPCGMetadata **)&FVar14.Handle[1].field_0x10)
            ;
          } while (lVar10 < lVar11 + -1);
        }
        bVar4 = true;
        goto LAB_14a0086e5;
      }
    }
  }
LAB_14a0086e3:
  bVar4 = false;
LAB_14a0086e5:
  if (local_168 != (undefined8 *)0x0) {
    (**(code **)*local_168)(local_168,1);
  }
  return bVar4;
}

// GetBeautifiedTestName @ 14a008740

FString * __thiscall
FPCGSortAttributesTest_SameValues::GetBeautifiedTestName
          (FPCGSortAttributesTest_SameValues *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.SortAttributes.AttributeSet.SameValues");
  return __return_storage_ptr__;
}

