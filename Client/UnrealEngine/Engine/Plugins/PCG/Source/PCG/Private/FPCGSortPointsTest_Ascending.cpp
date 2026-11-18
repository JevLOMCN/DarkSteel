// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 14a0022e0

EAutomationTestFlags __thiscall
FPCGSortPointsTest_Ascending::GetTestFlags(FPCGSortPointsTest_Ascending *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a0022f0

bool __thiscall FPCGSortPointsTest_Ascending::IsStressTest(FPCGSortPointsTest_Ascending *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a002300

uint __thiscall
FPCGSortPointsTest_Ascending::GetRequiredDeviceNum(FPCGSortPointsTest_Ascending *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a002310

FString * __thiscall
FPCGSortPointsTest_Ascending::GetTestSourceFileName
          (FPCGSortPointsTest_Ascending *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSortAttributesTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a002340

int __thiscall
FPCGSortPointsTest_Ascending::GetTestSourceFileLine(FPCGSortPointsTest_Ascending *this)

{
  return 0x36;
}

// GetTests @ 14a002350

/* WARNING: Removing unreachable block (ram,0x00014a00243d) */
/* WARNING: Removing unreachable block (ram,0x00014a002508) */

void __thiscall
FPCGSortPointsTest_Ascending::GetTests
          (FPCGSortPointsTest_Ascending *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.SortAttributes.Points.Ascending");
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

// RunTest @ 14a002530

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
FPCGSortPointsTest_Ascending::RunTest(FPCGSortPointsTest_Ascending *this,FString *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar5;
  code *pcVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  UPCGPointData *pUVar12;
  UClass *pUVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  FObjectPtr_u_0 FVar16;
  FObjectPtr_u_0 FVar17;
  uint uVar18;
  FObjectPtr_u_0 local_res18;
  undefined8 local_res20;
  longlong local_138;
  int local_130;
  int local_12c;
  int local_128;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_120;
  undefined8 *local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FPCGAttributePropertySelector local_d8;
  FString local_98;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  float fVar4;
  
  FVar16.Handle = (UObject *)0x0;
  local_res20 = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_d8);
  FPCGAttributePropertySelector::SetDomainName(&local_d8,(FName)0x0,true);
  FPCGAttributePropertySelector::SetPointProperty(&local_d8,Density,true);
  DestructItems<FString,int>
            ((FString *)local_d8.ExtraNames.AllocatorInstance.Data,local_d8.ExtraNames.ArrayNum);
  local_d8.ExtraNames.ArrayNum = 0;
  if (local_d8.ExtraNames.ArrayMax == 0) {
    local_d8.ExtraNames.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,local_d8.ExtraNames.ArrayMax,&local_d8.ExtraNames.AllocatorInstance,0,
               &local_d8.ExtraNames.ArrayMax);
    ConstructItems<FString,FString,int>(local_d8.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0)
    ;
  }
  pUVar12 = PCGTestsCommon::CreateRandomPointData<UPCGPointData,0>(100,0x2a,true);
  SortCommonTestData::RunSortElementOnData
            ((EPCGSortMethod)&local_110,(UPCGData *)0x0,
             (FPCGAttributePropertyInputSelector *)pUVar12);
  DestructItems<FString,int>
            ((FString *)local_d8.ExtraNames.AllocatorInstance.Data,local_d8.ExtraNames.ArrayNum);
  if (local_d8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.ExtraNames.AllocatorInstance.Data);
  }
  puVar7 = local_110;
  iVar5 = *(int *)(local_110 + 8);
  ::FString::FString(&local_108,"Output count");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar14.Data = local_108.Data.AllocatorInstance.Data;
  }
  bVar8 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar5,1)
  ;
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    if ((*(int *)(puVar7 + 8) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    local_res18 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)puVar7[7])->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14a0026ed:
      if (local_res18.Handle == (UObject *)0x0) goto LAB_14a002711;
      pUVar13 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar8 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar13);
      FVar17 = local_res18;
      if (!bVar8) goto LAB_14a002711;
    }
    else {
      if (local_res18.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_res18.Handle);
        goto LAB_14a0026ed;
      }
LAB_14a002711:
      FVar17.Handle = FVar16.Handle;
    }
    ::FString::FString(&local_f8,"Output is a point data");
    if (FVar17.Handle == (UObject *)0x0) {
      pcVar6 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_98,L"Expected \'%s\' to be not null.");
      (*pcVar6)(this,&local_98,0);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (!bVar8) {
      if ((FVar17.Handle == (UObject *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutPointData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSortAttributesTest.cpp"
                             ,0x46,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      (**(code **)(*(longlong *)FVar17.Handle + 0x508))(FVar17.Handle,&local_138);
      if (0 < local_128 + -1) {
        do {
          uVar15 = FVar16._0_4_;
          uVar10 = 0;
          if ((int)uVar15 < local_128) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          uVar18 = uVar15 + 1;
          fVar2 = *(float *)((longlong)((int)uVar15 % local_12c) * (longlong)local_130 + local_138);
          uVar11 = 0;
          uVar10 = uVar11;
          if ((int)uVar18 < local_128) {
            uVar10 = ~uVar18 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          pfVar1 = (float *)((longlong)((int)uVar18 % local_12c) * (longlong)local_130 + local_138);
          fVar3 = *pfVar1;
          fVar4 = *pfVar1;
          uVar10 = uVar11;
          if ((int)uVar15 < local_128) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          FStringFormatArg::FStringFormatArg
                    (&local_88,
                     *(float *)((longlong)((int)uVar15 % local_12c) * (longlong)local_130 +
                               local_138));
          if ((int)uVar18 < local_128) {
            uVar11 = ~uVar18 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          FStringFormatArg::FStringFormatArg
                    (&local_68,
                     *(float *)((longlong)((int)uVar18 % local_12c) * (longlong)local_130 +
                               local_138));
          local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_120.ArrayNum = 2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,&local_120.AllocatorInstance,2,&local_120.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_120.AllocatorInstance.Data,&local_88,2);
          ::FString::FormatImpl(&local_e8,L"{0} is less than/equal to {1}",&local_120);
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_e8.Data.ArrayNum != 0) {
            FVar14.Data = local_e8.Data.AllocatorInstance.Data;
          }
          bVar8 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,
                             fVar2 < fVar4 || fVar2 == fVar3);
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_120.AllocatorInstance.Data,local_120.ArrayNum);
          if ((FStringFormatArg *)local_120.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_120.AllocatorInstance.Data);
          }
          if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
          }
          if (!bVar8) goto LAB_14a002a8c;
          FVar16._4_4_ = 0;
          FVar16._0_4_ = uVar18;
        } while ((int)uVar18 < local_128 + -1);
      }
      bVar8 = true;
      goto LAB_14a002a8e;
    }
  }
LAB_14a002a8c:
  bVar8 = false;
LAB_14a002a8e:
  if (local_110 != (undefined8 *)0x0) {
    (**(code **)*local_110)(local_110,1);
  }
  return bVar8;
}

// GetBeautifiedTestName @ 14a002af0

FString * __thiscall
FPCGSortPointsTest_Ascending::GetBeautifiedTestName
          (FPCGSortPointsTest_Ascending *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.SortAttributes.Points.Ascending");
  return __return_storage_ptr__;
}

