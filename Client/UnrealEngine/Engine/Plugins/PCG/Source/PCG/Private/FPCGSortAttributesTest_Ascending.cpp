// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 14a0058d0

EAutomationTestFlags __thiscall
FPCGSortAttributesTest_Ascending::GetTestFlags(FPCGSortAttributesTest_Ascending *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a0058e0

bool __thiscall
FPCGSortAttributesTest_Ascending::IsStressTest(FPCGSortAttributesTest_Ascending *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a0058f0

uint __thiscall
FPCGSortAttributesTest_Ascending::GetRequiredDeviceNum(FPCGSortAttributesTest_Ascending *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a005900

FString * __thiscall
FPCGSortAttributesTest_Ascending::GetTestSourceFileName
          (FPCGSortAttributesTest_Ascending *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSortAttributesTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a005930

int __thiscall
FPCGSortAttributesTest_Ascending::GetTestSourceFileLine(FPCGSortAttributesTest_Ascending *this)

{
  return 0x52;
}

// GetTests @ 14a005940

/* WARNING: Removing unreachable block (ram,0x00014a005a2d) */
/* WARNING: Removing unreachable block (ram,0x00014a005af8) */

void __thiscall
FPCGSortAttributesTest_Ascending::GetTests
          (FPCGSortAttributesTest_Ascending *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.SortAttributes.AttributeSet.Ascending");
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

// RunTest @ 14a005b20

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
FPCGSortAttributesTest_Ascending::RunTest(FPCGSortAttributesTest_Ascending *this,FString *param_1)

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
  long64 lVar10;
  ForAnyElementType FVar11;
  int iVar12;
  FObjectPtr_u_0 FVar13;
  FObjectPtr_u_0 FVar14;
  FObjectPtr_u_0 local_res18;
  undefined8 local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_178;
  undefined8 *local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FPCGAttributePropertySelector local_120;
  FName local_d8;
  FPCGMetadataDomainID FStack_d0;
  FString local_b8;
  FString local_a8;
  FPCGAttributeIdentifier local_98;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  FVar2 = SortCommonTestData::AttributeName;
  FVar13.Handle = (UObject *)0x0;
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
  pUVar8 = SortCommonTestData::GenerateParamData(100,0x2a,true);
  SortCommonTestData::RunSortElementOnData
            ((EPCGSortMethod)&local_168,(UPCGData *)0x0,(FPCGAttributePropertyInputSelector *)pUVar8
            );
  DestructItems<FString,int>
            ((FString *)local_120.ExtraNames.AllocatorInstance.Data,local_120.ExtraNames.ArrayNum);
  if (local_120.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.ExtraNames.AllocatorInstance.Data);
  }
  puVar3 = local_168;
  iVar6 = *(int *)(local_168 + 8);
  ::FString::FString(&local_160,"Output count");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_160.Data.ArrayNum != 0) {
    FVar11.Data = local_160.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar6,1)
  ;
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
LAB_14a005ce0:
      if ((FPCGMetadataAttribute<int> *)local_res18.Handle == (FPCGMetadataAttribute<int> *)0x0)
      goto LAB_14a005d04;
      pUVar9 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar9);
      FVar14 = local_res18;
      if (!bVar4) goto LAB_14a005d04;
    }
    else {
      if ((FPCGMetadataAttribute<int> *)local_res18.Handle != (FPCGMetadataAttribute<int> *)0x0) {
        UE::GC::MarkAsReachable(local_res18.Handle);
        goto LAB_14a005ce0;
      }
LAB_14a005d04:
      FVar14.Handle = FVar13.Handle;
    }
    ::FString::FString(&local_150,"Output is an attribute set data");
    if ((FPCGMetadataAttribute<int> *)FVar14.Handle == (FPCGMetadataAttribute<int> *)0x0) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_b8,L"Expected \'%s\' to be not null.");
      (*pcVar1)(this,&local_b8,0);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
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
      if ((((FPCGMetadataAttribute<int> *)FVar14.Handle == (FPCGMetadataAttribute<int> *)0x0) ||
          (*(longlong *)&FVar14.Handle[1].field_0x10 == 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutParamData && OutParamData->Metadata",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSortAttributesTest.cpp"
                             ,0x61,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      local_d8 = SortCommonTestData::AttributeName;
      FStack_d0.Flag = PCGMetadataDomainID::Default.Flag;
      FStack_d0._1_3_ = PCGMetadataDomainID::Default._1_3_;
      FStack_d0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      FStack_d0.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_98.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      local_98.Name = SortCommonTestData::AttributeName;
      local_98.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
      local_98.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
      local_98.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
      this_00.Handle =
           (UObject *)
           UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)&FVar14.Handle[1].field_0x10,&local_98)
      ;
      if (((FPCGMetadataAttribute<int> *)this_00.Handle == (FPCGMetadataAttribute<int> *)0x0) ||
         ((short)*(longlong *)&this_00.Handle[2].field_0x20 != 2)) {
        this_00.Handle = FVar13.Handle;
      }
      ::FString::FString(&local_140,"Output has the sorted attribute");
      if ((FPCGMetadataAttribute<int> *)this_00.Handle == (FPCGMetadataAttribute<int> *)0x0) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_a8,L"Expected \'%s\' to be not null.");
        (*pcVar1)(this,&local_a8,0);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
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
        if (((FPCGMetadataAttribute<int> *)this_00.Handle == (FPCGMetadataAttribute<int> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Attribute",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSortAttributesTest.cpp"
                               ,0x65,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        lVar10 = UPCGMetadata::GetLocalItemCount(*(UPCGMetadata **)&FVar14.Handle[1].field_0x10);
        if (lVar10 != 1 && -1 < lVar10 + -1) {
          do {
            iVar12 = FVar13._0_4_;
            iVar6 = FPCGMetadataAttribute<int>::GetValue
                              ((FPCGMetadataAttribute<int> *)this_00.Handle,iVar12);
            iVar7 = FPCGMetadataAttribute<int>::GetValue
                              ((FPCGMetadataAttribute<int> *)this_00.Handle,iVar12 + 1);
            FStringFormatArg::FStringFormatArg(&local_78,iVar6);
            FStringFormatArg::FStringFormatArg(&local_58,iVar7);
            local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_178.ArrayNum = 2;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,2,0,&local_178.AllocatorInstance,2,&local_178.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_178.AllocatorInstance.Data,&local_78,2);
            ::FString::FormatImpl(&local_130,L"{0} is less than/equal to {1}",&local_178);
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_130.Data.ArrayNum != 0) {
              FVar11.Data = local_130.Data.AllocatorInstance.Data;
            }
            bVar4 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar6 <= iVar7);
            if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_130.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
            if ((FStringFormatArg *)local_178.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_178.AllocatorInstance.Data);
            }
            if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
            }
            if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
            }
            if (!bVar4) goto LAB_14a005fe3;
            FVar13._0_4_ = iVar12 + 1;
            FVar13._4_4_ = 0;
            lVar10 = UPCGMetadata::GetLocalItemCount(*(UPCGMetadata **)&FVar14.Handle[1].field_0x10)
            ;
          } while ((longlong)(int)FVar13._0_4_ < lVar10 + -1);
        }
        bVar4 = true;
        goto LAB_14a005fe5;
      }
    }
  }
LAB_14a005fe3:
  bVar4 = false;
LAB_14a005fe5:
  if (local_168 != (undefined8 *)0x0) {
    (**(code **)*local_168)(local_168,1);
  }
  return bVar4;
}

// GetBeautifiedTestName @ 14a006040

FString * __thiscall
FPCGSortAttributesTest_Ascending::GetBeautifiedTestName
          (FPCGSortAttributesTest_Ascending *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.SortAttributes.AttributeSet.Ascending");
  return __return_storage_ptr__;
}

