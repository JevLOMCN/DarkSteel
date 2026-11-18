// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 18

// RunAndValidate<> @ 149fe3cb0

/* WARNING: Type propagation algorithm not settling */
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
FPCGAttributeReduceTests::RunAndValidate<>
          (FPCGAttributeReduceTests *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_1,
          EPCGAttributeReduceOperation param_2,FPCGAttributePropertyInputSelector *param_3,
          bool param_4,bool param_5)

{
  code *pcVar1;
  longlong lVar2;
  FPCGContext *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  UPCGAttributeReduceSettings *pUVar10;
  UClass *pUVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FObjectPtr_u_0 FVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  FPCGContext *local_res10;
  undefined1 local_res18 [8];
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  FObjectPtr_u_0 local_1b0;
  TSharedPtr<IPCGElement,1> local_1a8;
  undefined8 local_198;
  UClass *local_190;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FText local_128;
  FString local_118;
  FString local_108;
  FTestData local_f8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_68;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x50);
  pFVar9 = FPCGAttributePropertySelector::ToString
                     ((FPCGAttributePropertySelector *)param_3,&local_108,false);
  FText::FromString(&local_128,pFVar9);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  FText::ToString(&local_128);
  ::FString::PrintfImpl(&local_188,L"Test with \'%s\' as input attribute");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_188.Data.ArrayNum != 0) {
    FVar12.Data = local_188.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_138,(wchar_t *)FVar12.Data);
  (*pcVar1)(this,&local_138,0,0);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  local_190 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_190);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_f8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_190);
  local_68._0_8_ = 0;
  local_68._40_8_ = 0;
  pUVar10 = PCGTestsCommon::GenerateSettings<UPCGAttributeReduceSettings>(&local_f8,&local_68);
  UPCGSettings::GetElement(local_f8.Settings,&local_1a8);
  iVar8 = param_1->ArrayNum;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar17 = pFVar13 + (longlong)iVar8 * 0x78;
  while( true ) {
    if (param_1->ArrayNum != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar13 == pFVar17) break;
    *(FName *)(pFVar13 + 0x60) = PCGPinConstants::DefaultInputLabel;
    pFVar13 = pFVar13 + 0x78;
  }
  if ((&local_f8.InputData == (FPCGDataCollection *)param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = param_1->ArrayNum;
  if (iVar8 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,iVar8,(ForAnyElementType *)&local_f8.InputData,
                       &local_f8.InputData.TaggedData.ArrayNum,
                       &local_f8.InputData.TaggedData.ArrayMax);
    memmove(local_f8.InputData.TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78,
            (param_1->AllocatorInstance).Data,(longlong)iVar8 * 0x78);
    param_1->ArrayNum = 0;
  }
  FPCGAttributePropertySelector::operator=
            ((FPCGAttributePropertySelector *)&pUVar10->InputSource,
             (FPCGAttributePropertySelector *)param_3);
  pUVar10->bWriteToDataDomain = param_5;
  pUVar10->bMergeOutputAttributes = param_4;
  local_198 = 0;
  (pUVar10->OutputAttributeName).ComparisonIndex = 0;
  (pUVar10->OutputAttributeName).Number = 0;
  pUVar10->Operation = param_2;
  PCGTestsCommon::FTestData::InitializeTestContext(&local_f8,(UPCGNode *)&local_res10);
  do {
    if ((local_1a8.Object == (IPCGElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    bVar4 = IPCGElement::Execute(local_1a8.Object,local_res10);
    pFVar3 = local_res10;
  } while (!bVar4);
  iVar8 = (local_res10->OutputData).TaggedData.ArrayNum;
  if (param_4) {
    ::FString::FString(&local_178,"Merged output has a single value.");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_178.Data.ArrayNum != 0) {
      FVar12.Data = local_178.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar8,1);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
LAB_149fe3ff5:
      local_1c8.Data = (FScriptContainerElement *)0x0;
      local_1c0 = 0;
      uVar16 = (pFVar3->OutputData).TaggedData.ArrayNum;
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if (0 < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar16,&local_1c8,0,(int *)((longlong)&local_1c0 + 4));
      }
      iVar8 = (pFVar3->OutputData).TaggedData.ArrayNum;
      uVar16 = 0;
      if (0 < iVar8) {
        lVar18 = 0;
        do {
          uVar15 = ~uVar16 >> 0x1f;
          if (param_5) {
            uVar7 = 0;
            if ((int)uVar16 < iVar8) {
              uVar7 = uVar15;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            if (*(longlong *)((pFVar3->OutputData).TaggedData.AllocatorInstance.Data + lVar18) == 0)
            {
LAB_149fe4174:
              bVar4 = false;
            }
            else {
              uVar7 = 0;
              if ((int)uVar16 < (pFVar3->OutputData).TaggedData.ArrayNum) {
                uVar7 = uVar15;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return (bool)uVar5;
              }
              lVar2 = *(longlong *)((pFVar3->OutputData).TaggedData.AllocatorInstance.Data + lVar18)
              ;
              uVar7 = 0;
              if ((int)(uVar16 + 1) < local_f8.InputData.TaggedData.ArrayNum) {
                uVar7 = ~(uVar16 + 1) >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return (bool)uVar5;
              }
              pUVar11 = Z_Construct_UClass_UPCGData_NoRegister();
              lVar2 = *(longlong *)(lVar2 + 0x10);
              iVar8 = (int)pUVar11->_padding_;
              if ((*(int *)(lVar2 + 0x38) < iVar8) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar8 * 8) !=
                  &pUVar11->_padding_)) goto LAB_149fe4174;
              bVar4 = true;
            }
            ::FString::PrintfImpl(&local_158,L"Output %d is a the same type as input");
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_158.Data.ArrayNum != 0) {
              FVar12.Data = local_158.Data.AllocatorInstance.Data;
            }
            bVar4 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar4);
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
            if (!bVar4) {
LAB_149fe41c2:
              if (local_1c8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c8.Data);
              }
              goto LAB_149fe41d1;
            }
          }
          else {
            uVar7 = 0;
            if ((int)uVar16 < iVar8) {
              uVar7 = uVar15;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            local_1b0 = (FObjectPtr_u_0)
                        ((FObjectPtr_u_0 *)
                        ((pFVar3->OutputData).TaggedData.AllocatorInstance.Data + lVar18))->Handle;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fe429f:
              if (local_1b0.Handle == (UObject *)0x0) goto LAB_149fe42c1;
              pUVar11 = Z_Construct_UClass_UPCGParamData_NoRegister();
              bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_1b0,pUVar11);
              FVar14 = local_1b0;
              if (!bVar4) goto LAB_149fe42c1;
            }
            else {
              if (local_1b0.Handle != (UObject *)0x0) {
                UE::GC::MarkAsReachable(local_1b0.Handle);
                goto LAB_149fe429f;
              }
LAB_149fe42c1:
              FVar14.Handle = (UObject *)0x0;
            }
            ::FString::PrintfImpl(&local_148,L"Output %d is a param data");
            if (FVar14.Handle == (UObject *)0x0) {
              pcVar1 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_118,L"Expected \'%s\' to be not null.");
              (*pcVar1)(this,&local_118,0);
              if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data.AllocatorInstance.Data);
              }
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
            if (bVar4) goto LAB_149fe41c2;
          }
          uVar7 = 0;
          if ((int)uVar16 < (pFVar3->OutputData).TaggedData.ArrayNum) {
            uVar7 = uVar15;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          local_1b8 = *(undefined8 *)
                       ((pFVar3->OutputData).TaggedData.AllocatorInstance.Data + lVar18);
          if (((local_1c8.Data <= (FScriptContainerElement *)&local_1b8) &&
              ((FScriptContainerElement *)&local_1b8 <
               local_1c8.Data + (longlong)local_1c0._4_4_ * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          iVar8 = (int)local_1c0;
          if ((int)local_1c0 == local_1c0._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_1c8,(int *)((longlong)&local_1c0 + 4));
          }
          uVar16 = uVar16 + 1;
          local_1c0 = CONCAT44(local_1c0._4_4_,iVar8 + 1);
          lVar18 = lVar18 + 0x78;
          *(undefined8 *)(local_1c8.Data + (longlong)iVar8 * 8) = local_1b8;
          iVar8 = (pFVar3->OutputData).TaggedData.ArrayNum;
        } while ((int)uVar16 < iVar8);
      }
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
      if (local_res10 != (FPCGContext *)0x0) {
        (**(code **)local_res10->_padding_)(local_res10,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.SharedReferenceCount.ReferenceController);
      PCGTestsCommon::FTestData::~FTestData(&local_f8);
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      pFVar13 = (param_1->AllocatorInstance).Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      DestructItems<FString,int>(*(FString **)&param_3->field_0x28,*(int *)&param_3->field_0x30);
      if (*(void **)&param_3->field_0x28 != (void *)0x0) {
        FMemory::Free(*(void **)&param_3->field_0x28);
      }
      return true;
    }
  }
  else {
    ::FString::FString(&local_168,"Not Merged output is the same number of inputs.");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_168.Data.ArrayNum != 0) {
      FVar12.Data = local_168.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar8,0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if (bVar4) goto LAB_149fe3ff5;
  }
LAB_149fe41d1:
  if (local_res10 != (FPCGContext *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_f8);
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar13 = (param_1->AllocatorInstance).Data;
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  DestructItems<FString,int>(*(FString **)&param_3->field_0x28,*(int *)&param_3->field_0x30);
  if (*(void **)&param_3->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x28);
  }
  return false;
}

// RunAndValidate<int> @ 149fe4500

/* WARNING: Type propagation algorithm not settling */
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
FPCGAttributeReduceTests::RunAndValidate<int>
          (FPCGAttributeReduceTests *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_1,
          EPCGAttributeReduceOperation param_2,FPCGAttributePropertyInputSelector *param_3,
          bool param_4,bool param_5,int *param_6)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auVar3 [8];
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  UPCGAttributeReduceSettings *pUVar10;
  UClass *pUVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FObjectPtr_u_0 FVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  ForAnyElementType local_218;
  undefined8 local_210;
  undefined1 local_208 [8];
  longlong local_200;
  undefined4 local_1f8 [2];
  FObjectPtr_u_0 local_1f0;
  TSharedPtr<IPCGElement,1> local_1e8;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_1d8;
  ForAnyElementType local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FText local_168;
  FString local_158;
  undefined4 *local_148;
  FPCGAttributeReduceTests *local_140;
  undefined1 *local_138;
  bool local_130;
  ForAnyElementType *local_128;
  int *local_120;
  bool local_118;
  FString local_110;
  FTestData local_f8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_68;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x50);
  pFVar9 = FPCGAttributePropertySelector::ToString
                     ((FPCGAttributePropertySelector *)param_3,&local_110,false);
  FText::FromString(&local_168,pFVar9);
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  FText::ToString(&local_168);
  ::FString::PrintfImpl(&local_1c8,L"Test with \'%s\' as input attribute");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_1c8.Data.ArrayNum != 0) {
    FVar12.Data = local_1c8.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_178,(wchar_t *)FVar12.Data);
  (*pcVar1)(this,&local_178,0,0);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  local_1d0.Data = (FScriptContainerElement *)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_1d0.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1d0.Data);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_f8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_1d0);
  local_68._0_8_ = 0;
  local_68._40_8_ = 0;
  pUVar10 = PCGTestsCommon::GenerateSettings<UPCGAttributeReduceSettings>(&local_f8,&local_68);
  UPCGSettings::GetElement(local_f8.Settings,&local_1e8);
  iVar8 = param_1->ArrayNum;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar17 = pFVar13 + (longlong)iVar8 * 0x78;
  while( true ) {
    if (param_1->ArrayNum != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar13 == pFVar17) break;
    *(FName *)(pFVar13 + 0x60) = PCGPinConstants::DefaultInputLabel;
    pFVar13 = pFVar13 + 0x78;
  }
  if ((&local_f8.InputData == (FPCGDataCollection *)param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = param_1->ArrayNum;
  if (iVar8 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,iVar8,(ForAnyElementType *)&local_f8.InputData,
                       &local_f8.InputData.TaggedData.ArrayNum,
                       &local_f8.InputData.TaggedData.ArrayMax);
    memmove(local_f8.InputData.TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78,
            (param_1->AllocatorInstance).Data,(longlong)iVar8 * 0x78);
    param_1->ArrayNum = 0;
  }
  FPCGAttributePropertySelector::operator=
            ((FPCGAttributePropertySelector *)&pUVar10->InputSource,
             (FPCGAttributePropertySelector *)param_3);
  pUVar10->bWriteToDataDomain = param_5;
  pUVar10->bMergeOutputAttributes = param_4;
  local_1d8.DebugPtr = (UPCGSettingsInterface *)0x0;
  (pUVar10->OutputAttributeName).ComparisonIndex = 0;
  (pUVar10->OutputAttributeName).Number = 0;
  pUVar10->Operation = param_2;
  PCGTestsCommon::FTestData::InitializeTestContext(&local_f8,(UPCGNode *)local_208);
  do {
    if ((local_1e8.Object == (IPCGElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    bVar4 = IPCGElement::Execute(local_1e8.Object,(FPCGContext *)local_208);
    auVar3 = local_208;
  } while (!bVar4);
  iVar8 = (((FPCGDataCollection *)((longlong)local_208 + 0x38))->TaggedData).ArrayNum;
  if (param_4) {
    ::FString::FString(&local_1b8,"Merged output has a single value.");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_1b8.Data.ArrayNum != 0) {
      FVar12.Data = local_1b8.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar8,1);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
LAB_149fe484e:
      local_218.Data = (FScriptContainerElement *)0x0;
      local_210 = 0;
      uVar16 = (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum;
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if (0 < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar16,&local_218,0,(int *)((longlong)&local_210 + 4));
      }
      iVar8 = (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum;
      uVar16 = 0;
      if (0 < iVar8) {
        lVar18 = 0;
        do {
          uVar15 = ~uVar16 >> 0x1f;
          if (param_5) {
            uVar7 = 0;
            if ((int)uVar16 < iVar8) {
              uVar7 = uVar15;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            if (*(longlong *)
                 ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).AllocatorInstance.
                  Data + lVar18) == 0) {
LAB_149fe49d7:
              bVar4 = false;
            }
            else {
              uVar7 = 0;
              if ((int)uVar16 <
                  (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum) {
                uVar7 = uVar15;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return (bool)uVar5;
              }
              lVar2 = *(longlong *)
                       ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).
                        AllocatorInstance.Data + lVar18);
              uVar7 = 0;
              if ((int)(uVar16 + 1) < local_f8.InputData.TaggedData.ArrayNum) {
                uVar7 = ~(uVar16 + 1) >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return (bool)uVar5;
              }
              pUVar11 = Z_Construct_UClass_UPCGData_NoRegister();
              lVar2 = *(longlong *)(lVar2 + 0x10);
              iVar8 = (int)pUVar11->_padding_;
              if ((*(int *)(lVar2 + 0x38) < iVar8) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar8 * 8) !=
                  &pUVar11->_padding_)) goto LAB_149fe49d7;
              bVar4 = true;
            }
            ::FString::PrintfImpl(&local_198,L"Output %d is a the same type as input");
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_198.Data.ArrayNum != 0) {
              FVar12.Data = local_198.Data.AllocatorInstance.Data;
            }
            bVar4 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar4);
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            if (!bVar4) {
LAB_149fe4a25:
              if (local_218.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Data);
              }
              goto LAB_149fe4a34;
            }
          }
          else {
            uVar7 = 0;
            if ((int)uVar16 < iVar8) {
              uVar7 = uVar15;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            local_1f0 = (FObjectPtr_u_0)
                        ((FObjectPtr_u_0 *)
                        ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).
                         AllocatorInstance.Data + lVar18))->Handle;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fe4aff:
              if (local_1f0.Handle == (UObject *)0x0) goto LAB_149fe4b21;
              pUVar11 = Z_Construct_UClass_UPCGParamData_NoRegister();
              bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_1f0,pUVar11);
              FVar14 = local_1f0;
              if (!bVar4) goto LAB_149fe4b21;
            }
            else {
              if (local_1f0.Handle != (UObject *)0x0) {
                UE::GC::MarkAsReachable(local_1f0.Handle);
                goto LAB_149fe4aff;
              }
LAB_149fe4b21:
              FVar14.Handle = (UObject *)0x0;
            }
            ::FString::PrintfImpl(&local_188,L"Output %d is a param data");
            if (FVar14.Handle == (UObject *)0x0) {
              pcVar1 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_158,L"Expected \'%s\' to be not null.");
              (*pcVar1)(this,&local_158,0);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.Data.AllocatorInstance.Data);
            }
            if (bVar4) goto LAB_149fe4a25;
          }
          uVar7 = 0;
          if ((int)uVar16 < (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum
             ) {
            uVar7 = uVar15;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          local_200 = *(longlong *)
                       ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).
                        AllocatorInstance.Data + lVar18);
          if (((local_218.Data <= (FScriptContainerElement *)&local_200) &&
              ((FScriptContainerElement *)&local_200 <
               local_218.Data + (longlong)local_210._4_4_ * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          iVar8 = (int)local_210;
          if ((int)local_210 == local_210._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_218,(int *)((longlong)&local_210 + 4));
          }
          uVar16 = uVar16 + 1;
          local_210 = CONCAT44(local_210._4_4_,iVar8 + 1);
          lVar18 = lVar18 + 0x78;
          *(longlong *)(local_218.Data + (longlong)iVar8 * 8) = local_200;
          iVar8 = (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum;
        } while ((int)uVar16 < iVar8);
      }
      local_148 = local_1f8;
      local_1f8[0] = 0;
      local_138 = local_res18;
      local_130 = param_4;
      local_128 = &local_218;
      local_120 = param_6;
      local_118 = param_5;
      local_res18[0] = 1;
      local_140 = this;
      `FPCGAttributeReduceTests::RunAndValidate<int>'::__l2::<lambda_1>::operator()(&local_148);
      uVar5 = local_res18[0];
      if (local_218.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data);
      }
      if (local_208 != (undefined1  [8])0x0) {
        (**(code **)*(longlong *)local_208)(local_208,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
      PCGTestsCommon::FTestData::~FTestData(&local_f8);
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      pFVar13 = (param_1->AllocatorInstance).Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      DestructItems<FString,int>(*(FString **)&param_3->field_0x28,*(int *)&param_3->field_0x30);
      if (*(void **)&param_3->field_0x28 == (void *)0x0) {
        return (bool)uVar5;
      }
      FMemory::Free(*(void **)&param_3->field_0x28);
      return (bool)uVar5;
    }
  }
  else {
    ::FString::FString(&local_1a8,"Not Merged output is the same number of inputs.");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      FVar12.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar8,1);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (bVar4) goto LAB_149fe484e;
  }
LAB_149fe4a34:
  if (local_208 != (undefined1  [8])0x0) {
    (**(code **)*(longlong *)local_208)(local_208,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_f8);
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar13 = (param_1->AllocatorInstance).Data;
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  DestructItems<FString,int>(*(FString **)&param_3->field_0x28,*(int *)&param_3->field_0x30);
  if (*(void **)&param_3->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x28);
  }
  return false;
}

// RunAndValidate<double> @ 149fe4dc0

/* WARNING: Type propagation algorithm not settling */
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
FPCGAttributeReduceTests::RunAndValidate<double>
          (FPCGAttributeReduceTests *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_1,
          EPCGAttributeReduceOperation param_2,FPCGAttributePropertyInputSelector *param_3,
          bool param_4,bool param_5,double *param_6)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auVar3 [8];
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  UPCGAttributeReduceSettings *pUVar10;
  UClass *pUVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FObjectPtr_u_0 FVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  ForAnyElementType local_218;
  undefined8 local_210;
  undefined1 local_208 [8];
  longlong local_200;
  undefined4 local_1f8 [2];
  FObjectPtr_u_0 local_1f0;
  TSharedPtr<IPCGElement,1> local_1e8;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_1d8;
  ForAnyElementType local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FText local_168;
  FString local_158;
  undefined4 *local_148;
  FPCGAttributeReduceTests *local_140;
  undefined1 *local_138;
  bool local_130;
  ForAnyElementType *local_128;
  double *local_120;
  bool local_118;
  FString local_110;
  FTestData local_f8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_68;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x50);
  pFVar9 = FPCGAttributePropertySelector::ToString
                     ((FPCGAttributePropertySelector *)param_3,&local_110,false);
  FText::FromString(&local_168,pFVar9);
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  FText::ToString(&local_168);
  ::FString::PrintfImpl(&local_1c8,L"Test with \'%s\' as input attribute");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_1c8.Data.ArrayNum != 0) {
    FVar12.Data = local_1c8.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_178,(wchar_t *)FVar12.Data);
  (*pcVar1)(this,&local_178,0,0);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  local_1d0.Data = (FScriptContainerElement *)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_1d0.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1d0.Data);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_f8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_1d0);
  local_68._0_8_ = 0;
  local_68._40_8_ = 0;
  pUVar10 = PCGTestsCommon::GenerateSettings<UPCGAttributeReduceSettings>(&local_f8,&local_68);
  UPCGSettings::GetElement(local_f8.Settings,&local_1e8);
  iVar8 = param_1->ArrayNum;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar17 = pFVar13 + (longlong)iVar8 * 0x78;
  while( true ) {
    if (param_1->ArrayNum != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar13 == pFVar17) break;
    *(FName *)(pFVar13 + 0x60) = PCGPinConstants::DefaultInputLabel;
    pFVar13 = pFVar13 + 0x78;
  }
  if ((&local_f8.InputData == (FPCGDataCollection *)param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = param_1->ArrayNum;
  if (iVar8 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,iVar8,(ForAnyElementType *)&local_f8.InputData,
                       &local_f8.InputData.TaggedData.ArrayNum,
                       &local_f8.InputData.TaggedData.ArrayMax);
    memmove(local_f8.InputData.TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78,
            (param_1->AllocatorInstance).Data,(longlong)iVar8 * 0x78);
    param_1->ArrayNum = 0;
  }
  FPCGAttributePropertySelector::operator=
            ((FPCGAttributePropertySelector *)&pUVar10->InputSource,
             (FPCGAttributePropertySelector *)param_3);
  pUVar10->bWriteToDataDomain = param_5;
  pUVar10->bMergeOutputAttributes = param_4;
  local_1d8.DebugPtr = (UPCGSettingsInterface *)0x0;
  (pUVar10->OutputAttributeName).ComparisonIndex = 0;
  (pUVar10->OutputAttributeName).Number = 0;
  pUVar10->Operation = param_2;
  PCGTestsCommon::FTestData::InitializeTestContext(&local_f8,(UPCGNode *)local_208);
  do {
    if ((local_1e8.Object == (IPCGElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    bVar4 = IPCGElement::Execute(local_1e8.Object,(FPCGContext *)local_208);
    auVar3 = local_208;
  } while (!bVar4);
  iVar8 = (((FPCGDataCollection *)((longlong)local_208 + 0x38))->TaggedData).ArrayNum;
  if (param_4) {
    ::FString::FString(&local_1b8,"Merged output has a single value.");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_1b8.Data.ArrayNum != 0) {
      FVar12.Data = local_1b8.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar8,1);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
LAB_149fe510e:
      local_218.Data = (FScriptContainerElement *)0x0;
      local_210 = 0;
      uVar16 = (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum;
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if (0 < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar16,&local_218,0,(int *)((longlong)&local_210 + 4));
      }
      iVar8 = (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum;
      uVar16 = 0;
      if (0 < iVar8) {
        lVar18 = 0;
        do {
          uVar15 = ~uVar16 >> 0x1f;
          if (param_5) {
            uVar7 = 0;
            if ((int)uVar16 < iVar8) {
              uVar7 = uVar15;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            if (*(longlong *)
                 ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).AllocatorInstance.
                  Data + lVar18) == 0) {
LAB_149fe5297:
              bVar4 = false;
            }
            else {
              uVar7 = 0;
              if ((int)uVar16 <
                  (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum) {
                uVar7 = uVar15;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return (bool)uVar5;
              }
              lVar2 = *(longlong *)
                       ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).
                        AllocatorInstance.Data + lVar18);
              uVar7 = 0;
              if ((int)(uVar16 + 1) < local_f8.InputData.TaggedData.ArrayNum) {
                uVar7 = ~(uVar16 + 1) >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return (bool)uVar5;
              }
              pUVar11 = Z_Construct_UClass_UPCGData_NoRegister();
              lVar2 = *(longlong *)(lVar2 + 0x10);
              iVar8 = (int)pUVar11->_padding_;
              if ((*(int *)(lVar2 + 0x38) < iVar8) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar8 * 8) !=
                  &pUVar11->_padding_)) goto LAB_149fe5297;
              bVar4 = true;
            }
            ::FString::PrintfImpl(&local_198,L"Output %d is a the same type as input");
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_198.Data.ArrayNum != 0) {
              FVar12.Data = local_198.Data.AllocatorInstance.Data;
            }
            bVar4 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar4);
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            if (!bVar4) {
LAB_149fe52e5:
              if (local_218.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Data);
              }
              goto LAB_149fe52f4;
            }
          }
          else {
            uVar7 = 0;
            if ((int)uVar16 < iVar8) {
              uVar7 = uVar15;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            local_1f0 = (FObjectPtr_u_0)
                        ((FObjectPtr_u_0 *)
                        ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).
                         AllocatorInstance.Data + lVar18))->Handle;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fe53bf:
              if (local_1f0.Handle == (UObject *)0x0) goto LAB_149fe53e1;
              pUVar11 = Z_Construct_UClass_UPCGParamData_NoRegister();
              bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_1f0,pUVar11);
              FVar14 = local_1f0;
              if (!bVar4) goto LAB_149fe53e1;
            }
            else {
              if (local_1f0.Handle != (UObject *)0x0) {
                UE::GC::MarkAsReachable(local_1f0.Handle);
                goto LAB_149fe53bf;
              }
LAB_149fe53e1:
              FVar14.Handle = (UObject *)0x0;
            }
            ::FString::PrintfImpl(&local_188,L"Output %d is a param data");
            if (FVar14.Handle == (UObject *)0x0) {
              pcVar1 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_158,L"Expected \'%s\' to be not null.");
              (*pcVar1)(this,&local_158,0);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.Data.AllocatorInstance.Data);
            }
            if (bVar4) goto LAB_149fe52e5;
          }
          uVar7 = 0;
          if ((int)uVar16 < (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum
             ) {
            uVar7 = uVar15;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          local_200 = *(longlong *)
                       ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).
                        AllocatorInstance.Data + lVar18);
          if (((local_218.Data <= (FScriptContainerElement *)&local_200) &&
              ((FScriptContainerElement *)&local_200 <
               local_218.Data + (longlong)local_210._4_4_ * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          iVar8 = (int)local_210;
          if ((int)local_210 == local_210._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_218,(int *)((longlong)&local_210 + 4));
          }
          uVar16 = uVar16 + 1;
          local_210 = CONCAT44(local_210._4_4_,iVar8 + 1);
          lVar18 = lVar18 + 0x78;
          *(longlong *)(local_218.Data + (longlong)iVar8 * 8) = local_200;
          iVar8 = (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum;
        } while ((int)uVar16 < iVar8);
      }
      local_148 = local_1f8;
      local_1f8[0] = 0;
      local_138 = local_res18;
      local_130 = param_4;
      local_128 = &local_218;
      local_120 = param_6;
      local_118 = param_5;
      local_res18[0] = 1;
      local_140 = this;
      `FPCGAttributeReduceTests::RunAndValidate<double>'::__l2::<lambda_1>::operator()(&local_148);
      uVar5 = local_res18[0];
      if (local_218.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data);
      }
      if (local_208 != (undefined1  [8])0x0) {
        (**(code **)*(longlong *)local_208)(local_208,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
      PCGTestsCommon::FTestData::~FTestData(&local_f8);
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      pFVar13 = (param_1->AllocatorInstance).Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      DestructItems<FString,int>(*(FString **)&param_3->field_0x28,*(int *)&param_3->field_0x30);
      if (*(void **)&param_3->field_0x28 == (void *)0x0) {
        return (bool)uVar5;
      }
      FMemory::Free(*(void **)&param_3->field_0x28);
      return (bool)uVar5;
    }
  }
  else {
    ::FString::FString(&local_1a8,"Not Merged output is the same number of inputs.");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      FVar12.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar8,1);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (bVar4) goto LAB_149fe510e;
  }
LAB_149fe52f4:
  if (local_208 != (undefined1  [8])0x0) {
    (**(code **)*(longlong *)local_208)(local_208,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_f8);
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar13 = (param_1->AllocatorInstance).Data;
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  DestructItems<FString,int>(*(FString **)&param_3->field_0x28,*(int *)&param_3->field_0x30);
  if (*(void **)&param_3->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x28);
  }
  return false;
}

// RunAndValidate<double,double> @ 149fe5680

/* WARNING: Type propagation algorithm not settling */
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
FPCGAttributeReduceTests::RunAndValidate<double,double>
          (FPCGAttributeReduceTests *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_1,
          EPCGAttributeReduceOperation param_2,FPCGAttributePropertyInputSelector *param_3,
          bool param_4,bool param_5,double *param_6,double *param_7)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  UPCGAttributeReduceSettings *pUVar10;
  UClass *pUVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FObjectPtr_u_0 FVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  ForAnyElementType local_248;
  undefined8 local_240;
  undefined1 local_238 [16];
  longlong local_228;
  FObjectPtr_u_0 local_220;
  TSharedPtr<IPCGElement,1> local_218;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_208;
  ForAnyElementType local_200;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FText local_198;
  FString local_188;
  undefined4 *local_178;
  FPCGAttributeReduceTests *local_170;
  undefined1 *local_168;
  undefined1 local_160;
  ForAnyElementType *local_158;
  double *local_150;
  bool local_148;
  undefined4 *local_140;
  FPCGAttributeReduceTests *local_138;
  undefined1 *local_130;
  undefined1 local_128;
  ForAnyElementType *local_120;
  double *local_118;
  bool local_110;
  FString local_108;
  FTestData local_f8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_68;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x50);
  pFVar9 = FPCGAttributePropertySelector::ToString
                     ((FPCGAttributePropertySelector *)param_3,&local_108,false);
  FText::FromString(&local_198,pFVar9);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  FText::ToString(&local_198);
  ::FString::PrintfImpl(&local_1f8,L"Test with \'%s\' as input attribute");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_1f8.Data.ArrayNum != 0) {
    FVar12.Data = local_1f8.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_1a8,(wchar_t *)FVar12.Data);
  (*pcVar1)(this,&local_1a8,0,0);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
  }
  local_200.Data = (FScriptContainerElement *)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_200.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_200.Data);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_f8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_200);
  local_68._0_8_ = 0;
  local_68._40_8_ = 0;
  pUVar10 = PCGTestsCommon::GenerateSettings<UPCGAttributeReduceSettings>(&local_f8,&local_68);
  UPCGSettings::GetElement(local_f8.Settings,&local_218);
  iVar8 = param_1->ArrayNum;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar17 = pFVar13 + (longlong)iVar8 * 0x78;
  while( true ) {
    if (param_1->ArrayNum != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar13 == pFVar17) break;
    *(FName *)(pFVar13 + 0x60) = PCGPinConstants::DefaultInputLabel;
    pFVar13 = pFVar13 + 0x78;
  }
  if ((&local_f8.InputData == (FPCGDataCollection *)param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = param_1->ArrayNum;
  if (iVar8 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,iVar8,(ForAnyElementType *)&local_f8.InputData,
                       &local_f8.InputData.TaggedData.ArrayNum,
                       &local_f8.InputData.TaggedData.ArrayMax);
    memmove(local_f8.InputData.TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78,
            (param_1->AllocatorInstance).Data,(longlong)iVar8 * 0x78);
    param_1->ArrayNum = 0;
  }
  FPCGAttributePropertySelector::operator=
            ((FPCGAttributePropertySelector *)&pUVar10->InputSource,
             (FPCGAttributePropertySelector *)param_3);
  pUVar10->bWriteToDataDomain = param_5;
  pUVar10->bMergeOutputAttributes = param_4;
  local_208.DebugPtr = (UPCGSettingsInterface *)0x0;
  (pUVar10->OutputAttributeName).ComparisonIndex = 0;
  (pUVar10->OutputAttributeName).Number = 0;
  pUVar10->Operation = param_2;
  PCGTestsCommon::FTestData::InitializeTestContext(&local_f8,(UPCGNode *)local_238);
  do {
    if ((local_218.Object == (IPCGElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    bVar4 = IPCGElement::Execute(local_218.Object,(FPCGContext *)local_238._0_8_);
    uVar3 = local_238._0_8_;
  } while (!bVar4);
  iVar8 = (((FPCGDataCollection *)(local_238._0_8_ + 0x38))->TaggedData).ArrayNum;
  if (param_4) {
    ::FString::FString(&local_1e8,"Merged output has a single value.");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_1e8.Data.ArrayNum != 0) {
      FVar12.Data = local_1e8.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar8,1);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
LAB_149fe59dd:
      local_248.Data = (FScriptContainerElement *)0x0;
      local_240 = 0;
      uVar16 = (((FPCGDataCollection *)(uVar3 + 0x38))->TaggedData).ArrayNum;
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if (0 < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar16,&local_248,0,(int *)((longlong)&local_240 + 4));
      }
      iVar8 = (((FPCGDataCollection *)(uVar3 + 0x38))->TaggedData).ArrayNum;
      uVar16 = 0;
      if (0 < iVar8) {
        lVar18 = 0;
        do {
          uVar15 = ~uVar16 >> 0x1f;
          if (param_5) {
            uVar7 = 0;
            if ((int)uVar16 < iVar8) {
              uVar7 = uVar15;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            if (*(longlong *)
                 ((((FPCGDataCollection *)(uVar3 + 0x38))->TaggedData).AllocatorInstance.Data +
                 lVar18) == 0) {
LAB_149fe5b67:
              bVar4 = false;
            }
            else {
              uVar7 = 0;
              if ((int)uVar16 < (((FPCGDataCollection *)(uVar3 + 0x38))->TaggedData).ArrayNum) {
                uVar7 = uVar15;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return (bool)uVar5;
              }
              lVar2 = *(longlong *)
                       ((((FPCGDataCollection *)(uVar3 + 0x38))->TaggedData).AllocatorInstance.Data
                       + lVar18);
              uVar7 = 0;
              if ((int)(uVar16 + 1) < local_f8.InputData.TaggedData.ArrayNum) {
                uVar7 = ~(uVar16 + 1) >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return (bool)uVar5;
              }
              pUVar11 = Z_Construct_UClass_UPCGData_NoRegister();
              lVar2 = *(longlong *)(lVar2 + 0x10);
              iVar8 = (int)pUVar11->_padding_;
              if ((*(int *)(lVar2 + 0x38) < iVar8) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar8 * 8) !=
                  &pUVar11->_padding_)) goto LAB_149fe5b67;
              bVar4 = true;
            }
            ::FString::PrintfImpl(&local_1c8,L"Output %d is a the same type as input");
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_1c8.Data.ArrayNum != 0) {
              FVar12.Data = local_1c8.Data.AllocatorInstance.Data;
            }
            bVar4 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar4);
            if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
            }
            if (!bVar4) {
LAB_149fe5bb5:
              if (local_248.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_248.Data);
              }
              goto LAB_149fe5bc4;
            }
          }
          else {
            uVar7 = 0;
            if ((int)uVar16 < iVar8) {
              uVar7 = uVar15;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            local_220 = (FObjectPtr_u_0)
                        ((FObjectPtr_u_0 *)
                        ((((FPCGDataCollection *)(uVar3 + 0x38))->TaggedData).AllocatorInstance.Data
                        + lVar18))->Handle;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fe5c92:
              if (local_220.Handle == (UObject *)0x0) goto LAB_149fe5cb4;
              pUVar11 = Z_Construct_UClass_UPCGParamData_NoRegister();
              bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_220,pUVar11);
              FVar14 = local_220;
              if (!bVar4) goto LAB_149fe5cb4;
            }
            else {
              if (local_220.Handle != (UObject *)0x0) {
                UE::GC::MarkAsReachable(local_220.Handle);
                goto LAB_149fe5c92;
              }
LAB_149fe5cb4:
              FVar14.Handle = (UObject *)0x0;
            }
            ::FString::PrintfImpl(&local_1b8,L"Output %d is a param data");
            if (FVar14.Handle == (UObject *)0x0) {
              pcVar1 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_188,L"Expected \'%s\' to be not null.");
              (*pcVar1)(this,&local_188,0);
              if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.Data.AllocatorInstance.Data);
              }
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
            if (bVar4) goto LAB_149fe5bb5;
          }
          uVar7 = 0;
          if ((int)uVar16 < (((FPCGDataCollection *)(uVar3 + 0x38))->TaggedData).ArrayNum) {
            uVar7 = uVar15;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          local_228 = *(longlong *)
                       ((((FPCGDataCollection *)(uVar3 + 0x38))->TaggedData).AllocatorInstance.Data
                       + lVar18);
          if (((local_248.Data <= (FScriptContainerElement *)&local_228) &&
              ((FScriptContainerElement *)&local_228 <
               local_248.Data + (longlong)local_240._4_4_ * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          iVar8 = (int)local_240;
          if ((int)local_240 == local_240._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_248,(int *)((longlong)&local_240 + 4));
          }
          uVar16 = uVar16 + 1;
          local_240 = CONCAT44(local_240._4_4_,iVar8 + 1);
          lVar18 = lVar18 + 0x78;
          *(longlong *)(local_248.Data + (longlong)iVar8 * 8) = local_228;
          iVar8 = (((FPCGDataCollection *)(uVar3 + 0x38))->TaggedData).ArrayNum;
        } while ((int)uVar16 < iVar8);
      }
      local_178 = (undefined4 *)(local_238 + 8);
      local_168 = local_res18;
      local_158 = &local_248;
      local_150 = param_6;
      local_238._8_4_ = 0;
      local_res18[0] = 1;
      local_148 = param_5;
      local_170 = this;
      local_160 = param_4;
      `FPCGAttributeReduceTests::RunAndValidate<double,double>'::__l2::<lambda_1>::operator()
                (&local_178);
      local_140 = (undefined4 *)(local_238 + 8);
      local_130 = local_res18;
      local_120 = &local_248;
      local_118 = param_7;
      local_110 = param_5;
      local_138 = this;
      local_128 = param_4;
      `FPCGAttributeReduceTests::RunAndValidate<double,double>'::__l2::<lambda_2>::operator()
                (&local_140);
      uVar5 = local_res18[0];
      if (local_248.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data);
      }
      if ((FPCGContext *)local_238._0_8_ != (FPCGContext *)0x0) {
        (**(code **)*(longlong *)local_238._0_8_)(local_238._0_8_,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_218.SharedReferenceCount.ReferenceController);
      PCGTestsCommon::FTestData::~FTestData(&local_f8);
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      pFVar13 = (param_1->AllocatorInstance).Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      DestructItems<FString,int>(*(FString **)&param_3->field_0x28,*(int *)&param_3->field_0x30);
      if (*(void **)&param_3->field_0x28 == (void *)0x0) {
        return (bool)uVar5;
      }
      FMemory::Free(*(void **)&param_3->field_0x28);
      return (bool)uVar5;
    }
  }
  else {
    ::FString::FString(&local_1d8,"Not Merged output is the same number of inputs.");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_1d8.Data.ArrayNum != 0) {
      FVar12.Data = local_1d8.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar8,2);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (bVar4) goto LAB_149fe59dd;
  }
LAB_149fe5bc4:
  if ((FPCGContext *)local_238._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_238._0_8_)(local_238._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_f8);
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar13 = (param_1->AllocatorInstance).Data;
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  DestructItems<FString,int>(*(FString **)&param_3->field_0x28,*(int *)&param_3->field_0x30);
  if (*(void **)&param_3->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x28);
  }
  return false;
}

// RunAndValidate<UE::Math::TVector2<double>_> @ 149fe5f90

/* WARNING: Type propagation algorithm not settling */
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
FPCGAttributeReduceTests::RunAndValidate<UE::Math::TVector2<double>_>
          (FPCGAttributeReduceTests *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_1,
          EPCGAttributeReduceOperation param_2,FPCGAttributePropertyInputSelector *param_3,
          bool param_4,bool param_5,TVector2<double> *param_6)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auVar3 [8];
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  UPCGAttributeReduceSettings *pUVar10;
  UClass *pUVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FObjectPtr_u_0 FVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  ForAnyElementType local_218;
  undefined8 local_210;
  undefined1 local_208 [8];
  longlong local_200;
  undefined4 local_1f8 [2];
  FObjectPtr_u_0 local_1f0;
  TSharedPtr<IPCGElement,1> local_1e8;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_1d8;
  ForAnyElementType local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FText local_168;
  FString local_158;
  undefined4 *local_148;
  FPCGAttributeReduceTests *local_140;
  undefined1 *local_138;
  bool local_130;
  ForAnyElementType *local_128;
  TVector2<double> *local_120;
  bool local_118;
  FString local_110;
  FTestData local_f8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_68;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x50);
  pFVar9 = FPCGAttributePropertySelector::ToString
                     ((FPCGAttributePropertySelector *)param_3,&local_110,false);
  FText::FromString(&local_168,pFVar9);
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  FText::ToString(&local_168);
  ::FString::PrintfImpl(&local_1c8,L"Test with \'%s\' as input attribute");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_1c8.Data.ArrayNum != 0) {
    FVar12.Data = local_1c8.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_178,(wchar_t *)FVar12.Data);
  (*pcVar1)(this,&local_178,0,0);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  local_1d0.Data = (FScriptContainerElement *)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_1d0.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1d0.Data);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_f8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_1d0);
  local_68._0_8_ = 0;
  local_68._40_8_ = 0;
  pUVar10 = PCGTestsCommon::GenerateSettings<UPCGAttributeReduceSettings>(&local_f8,&local_68);
  UPCGSettings::GetElement(local_f8.Settings,&local_1e8);
  iVar8 = param_1->ArrayNum;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar17 = pFVar13 + (longlong)iVar8 * 0x78;
  while( true ) {
    if (param_1->ArrayNum != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar13 == pFVar17) break;
    *(FName *)(pFVar13 + 0x60) = PCGPinConstants::DefaultInputLabel;
    pFVar13 = pFVar13 + 0x78;
  }
  if ((&local_f8.InputData == (FPCGDataCollection *)param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = param_1->ArrayNum;
  if (iVar8 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,iVar8,(ForAnyElementType *)&local_f8.InputData,
                       &local_f8.InputData.TaggedData.ArrayNum,
                       &local_f8.InputData.TaggedData.ArrayMax);
    memmove(local_f8.InputData.TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78,
            (param_1->AllocatorInstance).Data,(longlong)iVar8 * 0x78);
    param_1->ArrayNum = 0;
  }
  FPCGAttributePropertySelector::operator=
            ((FPCGAttributePropertySelector *)&pUVar10->InputSource,
             (FPCGAttributePropertySelector *)param_3);
  pUVar10->bWriteToDataDomain = param_5;
  pUVar10->bMergeOutputAttributes = param_4;
  local_1d8.DebugPtr = (UPCGSettingsInterface *)0x0;
  (pUVar10->OutputAttributeName).ComparisonIndex = 0;
  (pUVar10->OutputAttributeName).Number = 0;
  pUVar10->Operation = param_2;
  PCGTestsCommon::FTestData::InitializeTestContext(&local_f8,(UPCGNode *)local_208);
  do {
    if ((local_1e8.Object == (IPCGElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    bVar4 = IPCGElement::Execute(local_1e8.Object,(FPCGContext *)local_208);
    auVar3 = local_208;
  } while (!bVar4);
  iVar8 = (((FPCGDataCollection *)((longlong)local_208 + 0x38))->TaggedData).ArrayNum;
  if (param_4) {
    ::FString::FString(&local_1b8,"Merged output has a single value.");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_1b8.Data.ArrayNum != 0) {
      FVar12.Data = local_1b8.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar8,1);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
LAB_149fe62de:
      local_218.Data = (FScriptContainerElement *)0x0;
      local_210 = 0;
      uVar16 = (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum;
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if (0 < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar16,&local_218,0,(int *)((longlong)&local_210 + 4));
      }
      iVar8 = (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum;
      uVar16 = 0;
      if (0 < iVar8) {
        lVar18 = 0;
        do {
          uVar15 = ~uVar16 >> 0x1f;
          if (param_5) {
            uVar7 = 0;
            if ((int)uVar16 < iVar8) {
              uVar7 = uVar15;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            if (*(longlong *)
                 ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).AllocatorInstance.
                  Data + lVar18) == 0) {
LAB_149fe6467:
              bVar4 = false;
            }
            else {
              uVar7 = 0;
              if ((int)uVar16 <
                  (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum) {
                uVar7 = uVar15;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return (bool)uVar5;
              }
              lVar2 = *(longlong *)
                       ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).
                        AllocatorInstance.Data + lVar18);
              uVar7 = 0;
              if ((int)(uVar16 + 1) < local_f8.InputData.TaggedData.ArrayNum) {
                uVar7 = ~(uVar16 + 1) >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return (bool)uVar5;
              }
              pUVar11 = Z_Construct_UClass_UPCGData_NoRegister();
              lVar2 = *(longlong *)(lVar2 + 0x10);
              iVar8 = (int)pUVar11->_padding_;
              if ((*(int *)(lVar2 + 0x38) < iVar8) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar8 * 8) !=
                  &pUVar11->_padding_)) goto LAB_149fe6467;
              bVar4 = true;
            }
            ::FString::PrintfImpl(&local_198,L"Output %d is a the same type as input");
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_198.Data.ArrayNum != 0) {
              FVar12.Data = local_198.Data.AllocatorInstance.Data;
            }
            bVar4 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar4);
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            if (!bVar4) {
LAB_149fe64b5:
              if (local_218.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Data);
              }
              goto LAB_149fe64c4;
            }
          }
          else {
            uVar7 = 0;
            if ((int)uVar16 < iVar8) {
              uVar7 = uVar15;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            local_1f0 = (FObjectPtr_u_0)
                        ((FObjectPtr_u_0 *)
                        ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).
                         AllocatorInstance.Data + lVar18))->Handle;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fe658f:
              if (local_1f0.Handle == (UObject *)0x0) goto LAB_149fe65b1;
              pUVar11 = Z_Construct_UClass_UPCGParamData_NoRegister();
              bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_1f0,pUVar11);
              FVar14 = local_1f0;
              if (!bVar4) goto LAB_149fe65b1;
            }
            else {
              if (local_1f0.Handle != (UObject *)0x0) {
                UE::GC::MarkAsReachable(local_1f0.Handle);
                goto LAB_149fe658f;
              }
LAB_149fe65b1:
              FVar14.Handle = (UObject *)0x0;
            }
            ::FString::PrintfImpl(&local_188,L"Output %d is a param data");
            if (FVar14.Handle == (UObject *)0x0) {
              pcVar1 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_158,L"Expected \'%s\' to be not null.");
              (*pcVar1)(this,&local_158,0);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.Data.AllocatorInstance.Data);
            }
            if (bVar4) goto LAB_149fe64b5;
          }
          uVar7 = 0;
          if ((int)uVar16 < (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum
             ) {
            uVar7 = uVar15;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          local_200 = *(longlong *)
                       ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).
                        AllocatorInstance.Data + lVar18);
          if (((local_218.Data <= (FScriptContainerElement *)&local_200) &&
              ((FScriptContainerElement *)&local_200 <
               local_218.Data + (longlong)local_210._4_4_ * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          iVar8 = (int)local_210;
          if ((int)local_210 == local_210._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_218,(int *)((longlong)&local_210 + 4));
          }
          uVar16 = uVar16 + 1;
          local_210 = CONCAT44(local_210._4_4_,iVar8 + 1);
          lVar18 = lVar18 + 0x78;
          *(longlong *)(local_218.Data + (longlong)iVar8 * 8) = local_200;
          iVar8 = (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum;
        } while ((int)uVar16 < iVar8);
      }
      local_148 = local_1f8;
      local_1f8[0] = 0;
      local_138 = local_res18;
      local_130 = param_4;
      local_128 = &local_218;
      local_120 = param_6;
      local_118 = param_5;
      local_res18[0] = 1;
      local_140 = this;
      `FPCGAttributeReduceTests::RunAndValidate<UE::Math::TVector2<double>_>'::__l2::<lambda_1>::
      operator()(&local_148);
      uVar5 = local_res18[0];
      if (local_218.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data);
      }
      if (local_208 != (undefined1  [8])0x0) {
        (**(code **)*(longlong *)local_208)(local_208,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
      PCGTestsCommon::FTestData::~FTestData(&local_f8);
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      pFVar13 = (param_1->AllocatorInstance).Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      DestructItems<FString,int>(*(FString **)&param_3->field_0x28,*(int *)&param_3->field_0x30);
      if (*(void **)&param_3->field_0x28 == (void *)0x0) {
        return (bool)uVar5;
      }
      FMemory::Free(*(void **)&param_3->field_0x28);
      return (bool)uVar5;
    }
  }
  else {
    ::FString::FString(&local_1a8,"Not Merged output is the same number of inputs.");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      FVar12.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar8,1);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (bVar4) goto LAB_149fe62de;
  }
LAB_149fe64c4:
  if (local_208 != (undefined1  [8])0x0) {
    (**(code **)*(longlong *)local_208)(local_208,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_f8);
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar13 = (param_1->AllocatorInstance).Data;
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  DestructItems<FString,int>(*(FString **)&param_3->field_0x28,*(int *)&param_3->field_0x30);
  if (*(void **)&param_3->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x28);
  }
  return false;
}

// RunAndValidate<UE::Math::TVector<double>_> @ 149fe6850

/* WARNING: Type propagation algorithm not settling */
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
FPCGAttributeReduceTests::RunAndValidate<UE::Math::TVector<double>_>
          (FPCGAttributeReduceTests *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_1,
          EPCGAttributeReduceOperation param_2,FPCGAttributePropertyInputSelector *param_3,
          bool param_4,bool param_5,TVector<double> *param_6)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auVar3 [8];
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  UPCGAttributeReduceSettings *pUVar10;
  UClass *pUVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FObjectPtr_u_0 FVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  ForAnyElementType local_218;
  undefined8 local_210;
  undefined1 local_208 [8];
  longlong local_200;
  undefined4 local_1f8 [2];
  FObjectPtr_u_0 local_1f0;
  TSharedPtr<IPCGElement,1> local_1e8;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_1d8;
  ForAnyElementType local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FText local_168;
  FString local_158;
  undefined4 *local_148;
  FPCGAttributeReduceTests *local_140;
  undefined1 *local_138;
  bool local_130;
  ForAnyElementType *local_128;
  TVector<double> *local_120;
  bool local_118;
  FString local_110;
  FTestData local_f8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_68;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x50);
  pFVar9 = FPCGAttributePropertySelector::ToString
                     ((FPCGAttributePropertySelector *)param_3,&local_110,false);
  FText::FromString(&local_168,pFVar9);
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  FText::ToString(&local_168);
  ::FString::PrintfImpl(&local_1c8,L"Test with \'%s\' as input attribute");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_1c8.Data.ArrayNum != 0) {
    FVar12.Data = local_1c8.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_178,(wchar_t *)FVar12.Data);
  (*pcVar1)(this,&local_178,0,0);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  local_1d0.Data = (FScriptContainerElement *)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_1d0.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1d0.Data);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_f8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_1d0);
  local_68._0_8_ = 0;
  local_68._40_8_ = 0;
  pUVar10 = PCGTestsCommon::GenerateSettings<UPCGAttributeReduceSettings>(&local_f8,&local_68);
  UPCGSettings::GetElement(local_f8.Settings,&local_1e8);
  iVar8 = param_1->ArrayNum;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar17 = pFVar13 + (longlong)iVar8 * 0x78;
  while( true ) {
    if (param_1->ArrayNum != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar13 == pFVar17) break;
    *(FName *)(pFVar13 + 0x60) = PCGPinConstants::DefaultInputLabel;
    pFVar13 = pFVar13 + 0x78;
  }
  if ((&local_f8.InputData == (FPCGDataCollection *)param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = param_1->ArrayNum;
  if (iVar8 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,iVar8,(ForAnyElementType *)&local_f8.InputData,
                       &local_f8.InputData.TaggedData.ArrayNum,
                       &local_f8.InputData.TaggedData.ArrayMax);
    memmove(local_f8.InputData.TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78,
            (param_1->AllocatorInstance).Data,(longlong)iVar8 * 0x78);
    param_1->ArrayNum = 0;
  }
  FPCGAttributePropertySelector::operator=
            ((FPCGAttributePropertySelector *)&pUVar10->InputSource,
             (FPCGAttributePropertySelector *)param_3);
  pUVar10->bWriteToDataDomain = param_5;
  pUVar10->bMergeOutputAttributes = param_4;
  local_1d8.DebugPtr = (UPCGSettingsInterface *)0x0;
  (pUVar10->OutputAttributeName).ComparisonIndex = 0;
  (pUVar10->OutputAttributeName).Number = 0;
  pUVar10->Operation = param_2;
  PCGTestsCommon::FTestData::InitializeTestContext(&local_f8,(UPCGNode *)local_208);
  do {
    if ((local_1e8.Object == (IPCGElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    bVar4 = IPCGElement::Execute(local_1e8.Object,(FPCGContext *)local_208);
    auVar3 = local_208;
  } while (!bVar4);
  iVar8 = (((FPCGDataCollection *)((longlong)local_208 + 0x38))->TaggedData).ArrayNum;
  if (param_4) {
    ::FString::FString(&local_1b8,"Merged output has a single value.");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_1b8.Data.ArrayNum != 0) {
      FVar12.Data = local_1b8.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar8,1);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
LAB_149fe6b9e:
      local_218.Data = (FScriptContainerElement *)0x0;
      local_210 = 0;
      uVar16 = (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum;
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if (0 < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar16,&local_218,0,(int *)((longlong)&local_210 + 4));
      }
      iVar8 = (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum;
      uVar16 = 0;
      if (0 < iVar8) {
        lVar18 = 0;
        do {
          uVar15 = ~uVar16 >> 0x1f;
          if (param_5) {
            uVar7 = 0;
            if ((int)uVar16 < iVar8) {
              uVar7 = uVar15;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            if (*(longlong *)
                 ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).AllocatorInstance.
                  Data + lVar18) == 0) {
LAB_149fe6d27:
              bVar4 = false;
            }
            else {
              uVar7 = 0;
              if ((int)uVar16 <
                  (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum) {
                uVar7 = uVar15;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return (bool)uVar5;
              }
              lVar2 = *(longlong *)
                       ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).
                        AllocatorInstance.Data + lVar18);
              uVar7 = 0;
              if ((int)(uVar16 + 1) < local_f8.InputData.TaggedData.ArrayNum) {
                uVar7 = ~(uVar16 + 1) >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return (bool)uVar5;
              }
              pUVar11 = Z_Construct_UClass_UPCGData_NoRegister();
              lVar2 = *(longlong *)(lVar2 + 0x10);
              iVar8 = (int)pUVar11->_padding_;
              if ((*(int *)(lVar2 + 0x38) < iVar8) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar8 * 8) !=
                  &pUVar11->_padding_)) goto LAB_149fe6d27;
              bVar4 = true;
            }
            ::FString::PrintfImpl(&local_198,L"Output %d is a the same type as input");
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_198.Data.ArrayNum != 0) {
              FVar12.Data = local_198.Data.AllocatorInstance.Data;
            }
            bVar4 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar4);
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            if (!bVar4) {
LAB_149fe6d75:
              if (local_218.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Data);
              }
              goto LAB_149fe6d84;
            }
          }
          else {
            uVar7 = 0;
            if ((int)uVar16 < iVar8) {
              uVar7 = uVar15;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            local_1f0 = (FObjectPtr_u_0)
                        ((FObjectPtr_u_0 *)
                        ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).
                         AllocatorInstance.Data + lVar18))->Handle;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fe6e4f:
              if (local_1f0.Handle == (UObject *)0x0) goto LAB_149fe6e71;
              pUVar11 = Z_Construct_UClass_UPCGParamData_NoRegister();
              bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_1f0,pUVar11);
              FVar14 = local_1f0;
              if (!bVar4) goto LAB_149fe6e71;
            }
            else {
              if (local_1f0.Handle != (UObject *)0x0) {
                UE::GC::MarkAsReachable(local_1f0.Handle);
                goto LAB_149fe6e4f;
              }
LAB_149fe6e71:
              FVar14.Handle = (UObject *)0x0;
            }
            ::FString::PrintfImpl(&local_188,L"Output %d is a param data");
            if (FVar14.Handle == (UObject *)0x0) {
              pcVar1 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_158,L"Expected \'%s\' to be not null.");
              (*pcVar1)(this,&local_158,0);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.Data.AllocatorInstance.Data);
            }
            if (bVar4) goto LAB_149fe6d75;
          }
          uVar7 = 0;
          if ((int)uVar16 < (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum
             ) {
            uVar7 = uVar15;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          local_200 = *(longlong *)
                       ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).
                        AllocatorInstance.Data + lVar18);
          if (((local_218.Data <= (FScriptContainerElement *)&local_200) &&
              ((FScriptContainerElement *)&local_200 <
               local_218.Data + (longlong)local_210._4_4_ * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          iVar8 = (int)local_210;
          if ((int)local_210 == local_210._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_218,(int *)((longlong)&local_210 + 4));
          }
          uVar16 = uVar16 + 1;
          local_210 = CONCAT44(local_210._4_4_,iVar8 + 1);
          lVar18 = lVar18 + 0x78;
          *(longlong *)(local_218.Data + (longlong)iVar8 * 8) = local_200;
          iVar8 = (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum;
        } while ((int)uVar16 < iVar8);
      }
      local_148 = local_1f8;
      local_1f8[0] = 0;
      local_138 = local_res18;
      local_130 = param_4;
      local_128 = &local_218;
      local_120 = param_6;
      local_118 = param_5;
      local_res18[0] = 1;
      local_140 = this;
      `FPCGAttributeReduceTests::RunAndValidate<UE::Math::TVector<double>_>'::__l2::<lambda_1>::
      operator()(&local_148);
      uVar5 = local_res18[0];
      if (local_218.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data);
      }
      if (local_208 != (undefined1  [8])0x0) {
        (**(code **)*(longlong *)local_208)(local_208,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
      PCGTestsCommon::FTestData::~FTestData(&local_f8);
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      pFVar13 = (param_1->AllocatorInstance).Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      DestructItems<FString,int>(*(FString **)&param_3->field_0x28,*(int *)&param_3->field_0x30);
      if (*(void **)&param_3->field_0x28 == (void *)0x0) {
        return (bool)uVar5;
      }
      FMemory::Free(*(void **)&param_3->field_0x28);
      return (bool)uVar5;
    }
  }
  else {
    ::FString::FString(&local_1a8,"Not Merged output is the same number of inputs.");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      FVar12.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar8,1);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (bVar4) goto LAB_149fe6b9e;
  }
LAB_149fe6d84:
  if (local_208 != (undefined1  [8])0x0) {
    (**(code **)*(longlong *)local_208)(local_208,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_f8);
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar13 = (param_1->AllocatorInstance).Data;
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  DestructItems<FString,int>(*(FString **)&param_3->field_0x28,*(int *)&param_3->field_0x30);
  if (*(void **)&param_3->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x28);
  }
  return false;
}

// RunAndValidate<FString> @ 149fe7110

/* WARNING: Type propagation algorithm not settling */
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
FPCGAttributeReduceTests::RunAndValidate<FString>
          (FPCGAttributeReduceTests *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_1,
          EPCGAttributeReduceOperation param_2,FPCGAttributePropertyInputSelector *param_3,
          bool param_4,bool param_5,FString *param_6)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auVar3 [8];
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  UPCGAttributeReduceSettings *pUVar10;
  UClass *pUVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FObjectPtr_u_0 FVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  ForAnyElementType local_218;
  undefined8 local_210;
  undefined1 local_208 [8];
  longlong local_200;
  undefined4 local_1f8 [2];
  FObjectPtr_u_0 local_1f0;
  TSharedPtr<IPCGElement,1> local_1e8;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_1d8;
  ForAnyElementType local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FText local_168;
  FString local_158;
  undefined4 *local_148;
  FPCGAttributeReduceTests *local_140;
  undefined1 *local_138;
  bool local_130;
  ForAnyElementType *local_128;
  FString *local_120;
  bool local_118;
  FString local_110;
  FTestData local_f8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_68;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x50);
  pFVar9 = FPCGAttributePropertySelector::ToString
                     ((FPCGAttributePropertySelector *)param_3,&local_110,false);
  FText::FromString(&local_168,pFVar9);
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  FText::ToString(&local_168);
  ::FString::PrintfImpl(&local_1c8,L"Test with \'%s\' as input attribute");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_1c8.Data.ArrayNum != 0) {
    FVar12.Data = local_1c8.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_178,(wchar_t *)FVar12.Data);
  (*pcVar1)(this,&local_178,0,0);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  local_1d0.Data = (FScriptContainerElement *)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_1d0.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1d0.Data);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_f8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_1d0);
  local_68._0_8_ = 0;
  local_68._40_8_ = 0;
  pUVar10 = PCGTestsCommon::GenerateSettings<UPCGAttributeReduceSettings>(&local_f8,&local_68);
  UPCGSettings::GetElement(local_f8.Settings,&local_1e8);
  iVar8 = param_1->ArrayNum;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar17 = pFVar13 + (longlong)iVar8 * 0x78;
  while( true ) {
    if (param_1->ArrayNum != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar13 == pFVar17) break;
    *(FName *)(pFVar13 + 0x60) = PCGPinConstants::DefaultInputLabel;
    pFVar13 = pFVar13 + 0x78;
  }
  if ((&local_f8.InputData == (FPCGDataCollection *)param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar8 = param_1->ArrayNum;
  if (iVar8 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,iVar8,(ForAnyElementType *)&local_f8.InputData,
                       &local_f8.InputData.TaggedData.ArrayNum,
                       &local_f8.InputData.TaggedData.ArrayMax);
    memmove(local_f8.InputData.TaggedData.AllocatorInstance.Data + (longlong)iVar6 * 0x78,
            (param_1->AllocatorInstance).Data,(longlong)iVar8 * 0x78);
    param_1->ArrayNum = 0;
  }
  FPCGAttributePropertySelector::operator=
            ((FPCGAttributePropertySelector *)&pUVar10->InputSource,
             (FPCGAttributePropertySelector *)param_3);
  pUVar10->bWriteToDataDomain = param_5;
  pUVar10->bMergeOutputAttributes = param_4;
  local_1d8.DebugPtr = (UPCGSettingsInterface *)0x0;
  (pUVar10->OutputAttributeName).ComparisonIndex = 0;
  (pUVar10->OutputAttributeName).Number = 0;
  pUVar10->Operation = param_2;
  PCGTestsCommon::FTestData::InitializeTestContext(&local_f8,(UPCGNode *)local_208);
  do {
    if ((local_1e8.Object == (IPCGElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    bVar4 = IPCGElement::Execute(local_1e8.Object,(FPCGContext *)local_208);
    auVar3 = local_208;
  } while (!bVar4);
  iVar8 = (((FPCGDataCollection *)((longlong)local_208 + 0x38))->TaggedData).ArrayNum;
  if (param_4) {
    ::FString::FString(&local_1b8,"Merged output has a single value.");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_1b8.Data.ArrayNum != 0) {
      FVar12.Data = local_1b8.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar8,1);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
LAB_149fe745e:
      local_218.Data = (FScriptContainerElement *)0x0;
      local_210 = 0;
      uVar16 = (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum;
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if (0 < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar16,&local_218,0,(int *)((longlong)&local_210 + 4));
      }
      iVar8 = (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum;
      uVar16 = 0;
      if (0 < iVar8) {
        lVar18 = 0;
        do {
          uVar15 = ~uVar16 >> 0x1f;
          if (param_5) {
            uVar7 = 0;
            if ((int)uVar16 < iVar8) {
              uVar7 = uVar15;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            if (*(longlong *)
                 ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).AllocatorInstance.
                  Data + lVar18) == 0) {
LAB_149fe75e7:
              bVar4 = false;
            }
            else {
              uVar7 = 0;
              if ((int)uVar16 <
                  (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum) {
                uVar7 = uVar15;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return (bool)uVar5;
              }
              lVar2 = *(longlong *)
                       ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).
                        AllocatorInstance.Data + lVar18);
              uVar7 = 0;
              if ((int)(uVar16 + 1) < local_f8.InputData.TaggedData.ArrayNum) {
                uVar7 = ~(uVar16 + 1) >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return (bool)uVar5;
              }
              pUVar11 = Z_Construct_UClass_UPCGData_NoRegister();
              lVar2 = *(longlong *)(lVar2 + 0x10);
              iVar8 = (int)pUVar11->_padding_;
              if ((*(int *)(lVar2 + 0x38) < iVar8) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar8 * 8) !=
                  &pUVar11->_padding_)) goto LAB_149fe75e7;
              bVar4 = true;
            }
            ::FString::PrintfImpl(&local_198,L"Output %d is a the same type as input");
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_198.Data.ArrayNum != 0) {
              FVar12.Data = local_198.Data.AllocatorInstance.Data;
            }
            bVar4 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar4);
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            if (!bVar4) {
LAB_149fe7635:
              if (local_218.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Data);
              }
              goto LAB_149fe7644;
            }
          }
          else {
            uVar7 = 0;
            if ((int)uVar16 < iVar8) {
              uVar7 = uVar15;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            local_1f0 = (FObjectPtr_u_0)
                        ((FObjectPtr_u_0 *)
                        ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).
                         AllocatorInstance.Data + lVar18))->Handle;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fe770f:
              if (local_1f0.Handle == (UObject *)0x0) goto LAB_149fe7731;
              pUVar11 = Z_Construct_UClass_UPCGParamData_NoRegister();
              bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_1f0,pUVar11);
              FVar14 = local_1f0;
              if (!bVar4) goto LAB_149fe7731;
            }
            else {
              if (local_1f0.Handle != (UObject *)0x0) {
                UE::GC::MarkAsReachable(local_1f0.Handle);
                goto LAB_149fe770f;
              }
LAB_149fe7731:
              FVar14.Handle = (UObject *)0x0;
            }
            ::FString::PrintfImpl(&local_188,L"Output %d is a param data");
            if (FVar14.Handle == (UObject *)0x0) {
              pcVar1 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_158,L"Expected \'%s\' to be not null.");
              (*pcVar1)(this,&local_158,0);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.Data.AllocatorInstance.Data);
            }
            if (bVar4) goto LAB_149fe7635;
          }
          uVar7 = 0;
          if ((int)uVar16 < (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum
             ) {
            uVar7 = uVar15;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          local_200 = *(longlong *)
                       ((((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).
                        AllocatorInstance.Data + lVar18);
          if (((local_218.Data <= (FScriptContainerElement *)&local_200) &&
              ((FScriptContainerElement *)&local_200 <
               local_218.Data + (longlong)local_210._4_4_ * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          iVar8 = (int)local_210;
          if ((int)local_210 == local_210._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_218,(int *)((longlong)&local_210 + 4));
          }
          uVar16 = uVar16 + 1;
          local_210 = CONCAT44(local_210._4_4_,iVar8 + 1);
          lVar18 = lVar18 + 0x78;
          *(longlong *)(local_218.Data + (longlong)iVar8 * 8) = local_200;
          iVar8 = (((FPCGDataCollection *)((longlong)auVar3 + 0x38))->TaggedData).ArrayNum;
        } while ((int)uVar16 < iVar8);
      }
      local_148 = local_1f8;
      local_1f8[0] = 0;
      local_138 = local_res18;
      local_130 = param_4;
      local_128 = &local_218;
      local_120 = param_6;
      local_118 = param_5;
      local_res18[0] = 1;
      local_140 = this;
      `FPCGAttributeReduceTests::RunAndValidate<FString>'::__l2::<lambda_1>::operator()(&local_148);
      uVar5 = local_res18[0];
      if (local_218.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data);
      }
      if (local_208 != (undefined1  [8])0x0) {
        (**(code **)*(longlong *)local_208)(local_208,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
      PCGTestsCommon::FTestData::~FTestData(&local_f8);
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      pFVar13 = (param_1->AllocatorInstance).Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      DestructItems<FString,int>(*(FString **)&param_3->field_0x28,*(int *)&param_3->field_0x30);
      if (*(void **)&param_3->field_0x28 == (void *)0x0) {
        return (bool)uVar5;
      }
      FMemory::Free(*(void **)&param_3->field_0x28);
      return (bool)uVar5;
    }
  }
  else {
    ::FString::FString(&local_1a8,"Not Merged output is the same number of inputs.");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      FVar12.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar8,1);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (bVar4) goto LAB_149fe745e;
  }
LAB_149fe7644:
  if (local_208 != (undefined1  [8])0x0) {
    (**(code **)*(longlong *)local_208)(local_208,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_f8);
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar13 = (param_1->AllocatorInstance).Data;
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  DestructItems<FString,int>(*(FString **)&param_3->field_0x28,*(int *)&param_3->field_0x30);
  if (*(void **)&param_3->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x28);
  }
  return false;
}

// operator() @ 149ff12c0

void __thiscall
`FPCGAttributeReduceTests::RunAndValidate<int>'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  FAutomationTestBase *this_00;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  UPCGMetadata *this_01;
  FPCGMetadataDomain *this_02;
  FPCGMetadataAttribute<int> *pFVar8;
  undefined1 uVar9;
  longlong *plVar10;
  FPCGMetadataDomainID *pFVar11;
  FPCGMetadataAttribute<int> *this_03;
  uint uVar12;
  ForAnyElementType FVar13;
  FString local_38;
  FString local_28;
  
  if (**(char **)((longlong)this + 0x10) != '\0') {
    plVar10 = *(longlong **)((longlong)this + 0x20);
    this_03 = (FPCGMetadataAttribute<int> *)0x0;
    uVar12 = 0;
    if (*(char *)((longlong)this + 0x18) == '\0') {
      uVar1 = **(uint **)this;
      uVar5 = uVar12;
      if ((int)uVar1 < (int)plVar10[1]) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar10 = *(longlong **)(*plVar10 + (longlong)(int)uVar1 * 8);
    }
    else {
      if ((int)plVar10[1] < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar10 = *(longlong **)*plVar10;
    }
    if (*(char *)((longlong)this + 0x30) == '\0') {
      this_01 = (UPCGMetadata *)(**(code **)(*plVar10 + 800))();
      pFVar11 = &PCGMetadataDomainID::Default;
    }
    else {
      this_01 = (UPCGMetadata *)(**(code **)(*plVar10 + 800))();
      pFVar11 = &PCGMetadataDomainID::Data;
    }
    this_02 = UPCGMetadata::GetConstMetadataDomain(this_01,pFVar11);
    pFVar8 = (FPCGMetadataAttribute<int> *)FPCGMetadataDomain::GetConstAttribute(this_02,(FName)0x0)
    ;
    if ((pFVar8 == (FPCGMetadataAttribute<int> *)0x0) || ((short)pFVar8->_padding_ != 2)) {
      plVar10 = *(longlong **)((longlong)this + 8);
      pcVar3 = *(code **)(*plVar10 + 0x28);
      ::FString::PrintfImpl(&local_28,L"Expected \'%s\' to be not null.");
      (*pcVar3)(plVar10,&local_28,0);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
      this_03 = pFVar8;
    }
    **(undefined1 **)((longlong)this + 0x10) = uVar9;
    if (**(char **)((longlong)this + 0x10) != '\0') {
      if (this_03 == (FPCGMetadataAttribute<int> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Attribute",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeReduceTest.cpp"
                           ,0x60,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(char *)((longlong)this + 0x18) != '\0') {
        uVar12 = **(uint **)this;
      }
      iVar6 = FPCGMetadataAttributeBase::GetValueKey
                        ((FPCGMetadataAttributeBase *)this_03,(longlong)(int)uVar12);
      iVar7 = FPCGMetadataAttribute<int>::GetValue(this_03,iVar6);
      this_00 = *(FAutomationTestBase **)((longlong)this + 8);
      iVar6 = **(int **)((longlong)this + 0x28);
      ::FString::PrintfImpl(&local_38,L"Value for index %d matches.");
      uVar2 = *(undefined8 *)((longlong)this + 0x10);
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar13.Data = local_38.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestEqual(this_00,(wchar_t *)FVar13.Data,iVar7,iVar6);
      *(bool *)uVar2 = bVar4;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    **(int **)this = **(int **)this + 1;
  }
  return;
}

// operator() @ 149ff1510

void __thiscall
`FPCGAttributeReduceTests::RunAndValidate<double>'::__l2::<lambda_1>::operator()(void *this)

{
  double dVar1;
  uint uVar2;
  FAutomationTestBase *this_00;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UPCGMetadata *this_01;
  FPCGMetadataDomain *this_02;
  FPCGMetadataAttribute<double> *pFVar8;
  undefined1 uVar9;
  longlong *plVar10;
  FPCGMetadataDomainID *pFVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  double dVar14;
  FString local_58;
  FString local_48 [3];
  FPCGMetadataAttribute<double> *this_03;
  
  if (**(char **)((longlong)this + 0x10) != '\0') {
    plVar10 = *(longlong **)((longlong)this + 0x20);
    this_03 = (FPCGMetadataAttribute<double> *)0x0;
    uVar12 = 0;
    if (*(char *)((longlong)this + 0x18) == '\0') {
      uVar2 = **(uint **)this;
      uVar6 = uVar12;
      if ((int)uVar2 < (int)plVar10[1]) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar10 = *(longlong **)(*plVar10 + (longlong)(int)uVar2 * 8);
    }
    else {
      if ((int)plVar10[1] < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar10 = *(longlong **)*plVar10;
    }
    if (*(char *)((longlong)this + 0x30) == '\0') {
      this_01 = (UPCGMetadata *)(**(code **)(*plVar10 + 800))();
      pFVar11 = &PCGMetadataDomainID::Default;
    }
    else {
      this_01 = (UPCGMetadata *)(**(code **)(*plVar10 + 800))();
      pFVar11 = &PCGMetadataDomainID::Data;
    }
    this_02 = UPCGMetadata::GetConstMetadataDomain(this_01,pFVar11);
    pFVar8 = (FPCGMetadataAttribute<double> *)
             FPCGMetadataDomain::GetConstAttribute(this_02,(FName)0x0);
    if ((pFVar8 == (FPCGMetadataAttribute<double> *)0x0) || ((short)pFVar8->_padding_ != 1)) {
      plVar10 = *(longlong **)((longlong)this + 8);
      pcVar4 = *(code **)(*plVar10 + 0x28);
      ::FString::PrintfImpl(local_48,L"Expected \'%s\' to be not null.");
      (*pcVar4)(plVar10,local_48,0);
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
      this_03 = pFVar8;
    }
    **(undefined1 **)((longlong)this + 0x10) = uVar9;
    if (**(char **)((longlong)this + 0x10) != '\0') {
      if (this_03 == (FPCGMetadataAttribute<double> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Attribute",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeReduceTest.cpp"
                           ,0x60,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (*(char *)((longlong)this + 0x18) != '\0') {
        uVar12 = **(uint **)this;
      }
      iVar7 = FPCGMetadataAttributeBase::GetValueKey
                        ((FPCGMetadataAttributeBase *)this_03,(longlong)(int)uVar12);
      dVar14 = FPCGMetadataAttribute<double>::GetValue(this_03,iVar7);
      this_00 = *(FAutomationTestBase **)((longlong)this + 8);
      dVar1 = **(double **)((longlong)this + 0x28);
      ::FString::PrintfImpl(&local_58,L"Value for index %d matches.");
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar13.Data = local_58.Data.AllocatorInstance.Data;
      }
      uVar3 = *(undefined8 *)((longlong)this + 0x10);
      bVar5 = FAutomationTestBase::TestEqual
                        (this_00,(wchar_t *)FVar13.Data,dVar14,dVar1,__real_3f1a36e2e0000000);
      *(bool *)uVar3 = bVar5;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    **(int **)this = **(int **)this + 1;
  }
  return;
}

// operator() @ 149ff1790

void __thiscall
`FPCGAttributeReduceTests::RunAndValidate<double,double>'::__l2::<lambda_1>::operator()(void *this)

{
  double dVar1;
  uint uVar2;
  FAutomationTestBase *this_00;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UPCGMetadata *this_01;
  FPCGMetadataDomain *this_02;
  FPCGMetadataAttribute<double> *pFVar8;
  undefined1 uVar9;
  longlong *plVar10;
  FPCGMetadataDomainID *pFVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  double dVar14;
  FString local_58;
  FString local_48 [3];
  FPCGMetadataAttribute<double> *this_03;
  
  if (**(char **)((longlong)this + 0x10) != '\0') {
    plVar10 = *(longlong **)((longlong)this + 0x20);
    this_03 = (FPCGMetadataAttribute<double> *)0x0;
    uVar12 = 0;
    if (*(char *)((longlong)this + 0x18) == '\0') {
      uVar2 = **(uint **)this;
      uVar6 = uVar12;
      if ((int)uVar2 < (int)plVar10[1]) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar10 = *(longlong **)(*plVar10 + (longlong)(int)uVar2 * 8);
    }
    else {
      if ((int)plVar10[1] < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar10 = *(longlong **)*plVar10;
    }
    if (*(char *)((longlong)this + 0x30) == '\0') {
      this_01 = (UPCGMetadata *)(**(code **)(*plVar10 + 800))();
      pFVar11 = &PCGMetadataDomainID::Default;
    }
    else {
      this_01 = (UPCGMetadata *)(**(code **)(*plVar10 + 800))();
      pFVar11 = &PCGMetadataDomainID::Data;
    }
    this_02 = UPCGMetadata::GetConstMetadataDomain(this_01,pFVar11);
    pFVar8 = (FPCGMetadataAttribute<double> *)
             FPCGMetadataDomain::GetConstAttribute(this_02,(FName)0x0);
    if ((pFVar8 == (FPCGMetadataAttribute<double> *)0x0) || ((short)pFVar8->_padding_ != 1)) {
      plVar10 = *(longlong **)((longlong)this + 8);
      pcVar4 = *(code **)(*plVar10 + 0x28);
      ::FString::PrintfImpl(local_48,L"Expected \'%s\' to be not null.");
      (*pcVar4)(plVar10,local_48,0);
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
      this_03 = pFVar8;
    }
    **(undefined1 **)((longlong)this + 0x10) = uVar9;
    if (**(char **)((longlong)this + 0x10) != '\0') {
      if (this_03 == (FPCGMetadataAttribute<double> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Attribute",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeReduceTest.cpp"
                           ,0x60,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (*(char *)((longlong)this + 0x18) != '\0') {
        uVar12 = **(uint **)this;
      }
      iVar7 = FPCGMetadataAttributeBase::GetValueKey
                        ((FPCGMetadataAttributeBase *)this_03,(longlong)(int)uVar12);
      dVar14 = FPCGMetadataAttribute<double>::GetValue(this_03,iVar7);
      this_00 = *(FAutomationTestBase **)((longlong)this + 8);
      dVar1 = **(double **)((longlong)this + 0x28);
      ::FString::PrintfImpl(&local_58,L"Value for index %d matches.");
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar13.Data = local_58.Data.AllocatorInstance.Data;
      }
      uVar3 = *(undefined8 *)((longlong)this + 0x10);
      bVar5 = FAutomationTestBase::TestEqual
                        (this_00,(wchar_t *)FVar13.Data,dVar14,dVar1,__real_3f1a36e2e0000000);
      *(bool *)uVar3 = bVar5;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    **(int **)this = **(int **)this + 1;
  }
  return;
}

// operator() @ 149ff1a10

void __thiscall
`FPCGAttributeReduceTests::RunAndValidate<UE::Math::TVector2<double>_>'::__l2::<lambda_1>::
operator()(void *this)

{
  uint uVar1;
  FAutomationTestBase *this_00;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UPCGMetadata *this_01;
  FPCGMetadataDomain *this_02;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar7;
  undefined1 uVar8;
  longlong *plVar9;
  FPCGMetadataDomainID *pFVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  double dVar13;
  FString local_48;
  FString local_38;
  TVector2<double>_u_0 local_28;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *this_03;
  
  if (**(char **)((longlong)this + 0x10) != '\0') {
    plVar9 = *(longlong **)((longlong)this + 0x20);
    this_03 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
    uVar11 = 0;
    if (*(char *)((longlong)this + 0x18) == '\0') {
      uVar1 = **(uint **)this;
      uVar5 = uVar11;
      if ((int)uVar1 < (int)plVar9[1]) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar9 = *(longlong **)(*plVar9 + (longlong)(int)uVar1 * 8);
    }
    else {
      if ((int)plVar9[1] < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar9 = *(longlong **)*plVar9;
    }
    if (*(char *)((longlong)this + 0x30) == '\0') {
      this_01 = (UPCGMetadata *)(**(code **)(*plVar9 + 800))();
      pFVar10 = &PCGMetadataDomainID::Default;
    }
    else {
      this_01 = (UPCGMetadata *)(**(code **)(*plVar9 + 800))();
      pFVar10 = &PCGMetadataDomainID::Data;
    }
    this_02 = UPCGMetadata::GetConstMetadataDomain(this_01,pFVar10);
    pFVar7 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)
             FPCGMetadataDomain::GetConstAttribute(this_02,(FName)0x0);
    if ((pFVar7 == (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) ||
       ((short)pFVar7->_padding_ != 4)) {
      plVar9 = *(longlong **)((longlong)this + 8);
      pcVar3 = *(code **)(*plVar9 + 0x28);
      ::FString::PrintfImpl(&local_38,L"Expected \'%s\' to be not null.");
      (*pcVar3)(plVar9,&local_38,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
      this_03 = pFVar7;
    }
    **(undefined1 **)((longlong)this + 0x10) = uVar8;
    if (**(char **)((longlong)this + 0x10) != '\0') {
      if (this_03 == (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Attribute",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeReduceTest.cpp"
                           ,0x60,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(char *)((longlong)this + 0x18) != '\0') {
        uVar11 = **(uint **)this;
      }
      iVar6 = FPCGMetadataAttributeBase::GetValueKey
                        ((FPCGMetadataAttributeBase *)this_03,(longlong)(int)uVar11);
      FPCGMetadataAttribute<UE::Math::TVector2<double>_>::GetValue
                (this_03,(TVector2<double> *)&local_28._s_0,iVar6);
      this_00 = *(FAutomationTestBase **)((longlong)this + 8);
      dVar13 = local_28._s_0.X - **(double **)((longlong)this + 0x28);
      if ((__real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
         (dVar13 = local_28._s_0.Y - (*(double **)((longlong)this + 0x28))[1],
         __real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      ::FString::PrintfImpl(&local_48,L"Value for index %d matches. {%f, %f} vs {%f, %f}");
      uVar2 = *(undefined8 *)((longlong)this + 0x10);
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar12.Data = local_48.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar12.Data,bVar4);
      *(bool *)uVar2 = bVar4;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    **(int **)this = **(int **)this + 1;
  }
  return;
}

// operator() @ 149ff1cd0

void __thiscall
`FPCGAttributeReduceTests::RunAndValidate<UE::Math::TVector<double>_>'::__l2::<lambda_1>::operator()
          (void *this)

{
  double dVar1;
  uint uVar2;
  double *pdVar3;
  FAutomationTestBase *this_00;
  undefined8 uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UPCGMetadata *this_01;
  FPCGMetadataDomain *this_02;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar11;
  undefined1 uVar12;
  longlong *plVar13;
  FPCGMetadataDomainID *pFVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  FString local_d8;
  FString local_c8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78 [4];
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this_03;
  
  if (**(char **)((longlong)this + 0x10) != '\0') {
    plVar13 = *(longlong **)((longlong)this + 0x20);
    this_03 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
    uVar15 = 0;
    if (*(char *)((longlong)this + 0x18) == '\0') {
      uVar2 = **(uint **)this;
      uVar9 = uVar15;
      if ((int)uVar2 < (int)plVar13[1]) {
        uVar9 = ~uVar2 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      plVar13 = *(longlong **)(*plVar13 + (longlong)(int)uVar2 * 8);
    }
    else {
      if ((int)plVar13[1] < 1) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      plVar13 = *(longlong **)*plVar13;
    }
    if (*(char *)((longlong)this + 0x30) == '\0') {
      this_01 = (UPCGMetadata *)(**(code **)(*plVar13 + 800))();
      pFVar14 = &PCGMetadataDomainID::Default;
    }
    else {
      this_01 = (UPCGMetadata *)(**(code **)(*plVar13 + 800))();
      pFVar14 = &PCGMetadataDomainID::Data;
    }
    this_02 = UPCGMetadata::GetConstMetadataDomain(this_01,pFVar14);
    pFVar11 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
              FPCGMetadataDomain::GetConstAttribute(this_02,(FName)0x0);
    if ((pFVar11 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) ||
       ((short)pFVar11->_padding_ != 5)) {
      plVar13 = *(longlong **)((longlong)this + 8);
      pcVar5 = *(code **)(*plVar13 + 0x28);
      ::FString::PrintfImpl(&local_c8,L"Expected \'%s\' to be not null.");
      (*pcVar5)(plVar13,&local_c8,0);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
      this_03 = pFVar11;
    }
    **(undefined1 **)((longlong)this + 0x10) = uVar12;
    if (**(char **)((longlong)this + 0x10) != '\0') {
      if (this_03 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Attribute",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeReduceTest.cpp"
                           ,0x60,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(char *)((longlong)this + 0x18) != '\0') {
        uVar15 = **(uint **)this;
      }
      iVar10 = FPCGMetadataAttributeBase::GetValueKey
                         ((FPCGMetadataAttributeBase *)this_03,(longlong)(int)uVar15);
      FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
                (this_03,(TVector<double> *)&local_b8._s_0,iVar10);
      pdVar3 = *(double **)((longlong)this + 0x28);
      this_00 = *(FAutomationTestBase **)((longlong)this + 8);
      dVar6 = *pdVar3;
      dVar7 = pdVar3[1];
      dVar1 = pdVar3[2];
      ::FString::PrintfImpl(&local_d8,L"Value for index %d matches.");
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_d8.Data.ArrayNum != 0) {
        FVar16.Data = local_d8.Data.AllocatorInstance.Data;
      }
      uVar4 = *(undefined8 *)((longlong)this + 0x10);
      local_78[0]._s_0.X = local_b8._s_0.X;
      local_78[0]._s_0.Y = local_b8._s_0.Y;
      local_78[0]._s_0.Z = local_b8._s_0.Z;
      local_98._s_0.X = dVar6;
      local_98._s_0.Y = dVar7;
      local_98._s_0.Z = dVar1;
      bVar8 = FAutomationTestBase::TestEqual
                        (this_00,(wchar_t *)FVar16.Data,(TVector<double> *)&local_78[0]._s_0,
                         (TVector<double> *)&local_98._s_0,__real_38d1b717);
      *(bool *)uVar4 = bVar8;
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    **(int **)this = **(int **)this + 1;
  }
  return;
}

// operator() @ 149ff1fd0

void __thiscall
`FPCGAttributeReduceTests::RunAndValidate<FString>'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  FAutomationTestBase *this_00;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UPCGMetadata *this_01;
  FPCGMetadataDomain *this_02;
  FPCGMetadataAttribute<FString> *pFVar7;
  undefined1 uVar8;
  longlong *plVar9;
  FPCGMetadataDomainID *pFVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  wchar_t *pwVar14;
  FString local_48;
  FString local_38;
  FString local_28;
  FPCGMetadataAttribute<FString> *this_03;
  
  if (**(char **)((longlong)this + 0x10) != '\0') {
    plVar9 = *(longlong **)((longlong)this + 0x20);
    this_03 = (FPCGMetadataAttribute<FString> *)0x0;
    uVar13 = 0;
    if (*(char *)((longlong)this + 0x18) == '\0') {
      uVar1 = **(uint **)this;
      uVar5 = uVar13;
      if ((int)uVar1 < (int)plVar9[1]) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar9 = *(longlong **)(*plVar9 + (longlong)(int)uVar1 * 8);
    }
    else {
      if ((int)plVar9[1] < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar9 = *(longlong **)*plVar9;
    }
    if (*(char *)((longlong)this + 0x30) == '\0') {
      this_01 = (UPCGMetadata *)(**(code **)(*plVar9 + 800))();
      pFVar10 = &PCGMetadataDomainID::Default;
    }
    else {
      this_01 = (UPCGMetadata *)(**(code **)(*plVar9 + 800))();
      pFVar10 = &PCGMetadataDomainID::Data;
    }
    this_02 = UPCGMetadata::GetConstMetadataDomain(this_01,pFVar10);
    pFVar7 = (FPCGMetadataAttribute<FString> *)
             FPCGMetadataDomain::GetConstAttribute(this_02,(FName)0x0);
    if ((pFVar7 == (FPCGMetadataAttribute<FString> *)0x0) || ((short)pFVar7->_padding_ != 9)) {
      plVar9 = *(longlong **)((longlong)this + 8);
      pcVar3 = *(code **)(*plVar9 + 0x28);
      ::FString::PrintfImpl(&local_28,L"Expected \'%s\' to be not null.");
      (*pcVar3)(plVar9,&local_28,0);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
      this_03 = pFVar7;
    }
    **(undefined1 **)((longlong)this + 0x10) = uVar8;
    if (**(char **)((longlong)this + 0x10) != '\0') {
      if (this_03 == (FPCGMetadataAttribute<FString> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Attribute",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeReduceTest.cpp"
                           ,0x60,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(char *)((longlong)this + 0x18) != '\0') {
        uVar13 = **(uint **)this;
      }
      iVar6 = FPCGMetadataAttributeBase::GetValueKey
                        ((FPCGMetadataAttributeBase *)this_03,(longlong)(int)uVar13);
      FPCGMetadataAttribute<FString>::GetValue(this_03,&local_38,iVar6);
      this_00 = *(FAutomationTestBase **)((longlong)this + 8);
      puVar2 = *(undefined8 **)((longlong)this + 0x28);
      ::FString::PrintfImpl(&local_48,L"Value for index %d matches.");
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar11.Data = local_48.Data.AllocatorInstance.Data;
      }
      if (*(int *)(puVar2 + 1) == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)*puVar2;
      }
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar12.Data = local_38.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestEqual
                        (this_00,(wchar_t *)FVar11.Data,(wchar_t *)FVar12.Data,pwVar14);
      *(bool *)*(undefined8 *)((longlong)this + 0x10) = bVar4;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    **(int **)this = **(int **)this + 1;
  }
  return;
}

// operator() @ 149ff4180

void __thiscall
`FPCGAttributeReduceTests::RunAndValidate<double,double>'::__l2::<lambda_2>::operator()(void *this)

{
  double dVar1;
  uint uVar2;
  FAutomationTestBase *this_00;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UPCGMetadata *this_01;
  FPCGMetadataDomain *this_02;
  FPCGMetadataAttribute<double> *pFVar8;
  undefined1 uVar9;
  longlong *plVar10;
  FPCGMetadataDomainID *pFVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  double dVar14;
  FString local_58;
  FString local_48 [3];
  FPCGMetadataAttribute<double> *this_03;
  
  if (**(char **)((longlong)this + 0x10) != '\0') {
    plVar10 = *(longlong **)((longlong)this + 0x20);
    this_03 = (FPCGMetadataAttribute<double> *)0x0;
    uVar12 = 0;
    if (*(char *)((longlong)this + 0x18) == '\0') {
      uVar2 = **(uint **)this;
      uVar6 = uVar12;
      if ((int)uVar2 < (int)plVar10[1]) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar10 = *(longlong **)(*plVar10 + (longlong)(int)uVar2 * 8);
    }
    else {
      if ((int)plVar10[1] < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar10 = *(longlong **)*plVar10;
    }
    if (*(char *)((longlong)this + 0x30) == '\0') {
      this_01 = (UPCGMetadata *)(**(code **)(*plVar10 + 800))();
      pFVar11 = &PCGMetadataDomainID::Default;
    }
    else {
      this_01 = (UPCGMetadata *)(**(code **)(*plVar10 + 800))();
      pFVar11 = &PCGMetadataDomainID::Data;
    }
    this_02 = UPCGMetadata::GetConstMetadataDomain(this_01,pFVar11);
    pFVar8 = (FPCGMetadataAttribute<double> *)
             FPCGMetadataDomain::GetConstAttribute(this_02,(FName)0x0);
    if ((pFVar8 == (FPCGMetadataAttribute<double> *)0x0) || ((short)pFVar8->_padding_ != 1)) {
      plVar10 = *(longlong **)((longlong)this + 8);
      pcVar4 = *(code **)(*plVar10 + 0x28);
      ::FString::PrintfImpl(local_48,L"Expected \'%s\' to be not null.");
      (*pcVar4)(plVar10,local_48,0);
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
      this_03 = pFVar8;
    }
    **(undefined1 **)((longlong)this + 0x10) = uVar9;
    if (**(char **)((longlong)this + 0x10) != '\0') {
      if (this_03 == (FPCGMetadataAttribute<double> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Attribute",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeReduceTest.cpp"
                           ,0x60,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (*(char *)((longlong)this + 0x18) != '\0') {
        uVar12 = **(uint **)this;
      }
      iVar7 = FPCGMetadataAttributeBase::GetValueKey
                        ((FPCGMetadataAttributeBase *)this_03,(longlong)(int)uVar12);
      dVar14 = FPCGMetadataAttribute<double>::GetValue(this_03,iVar7);
      this_00 = *(FAutomationTestBase **)((longlong)this + 8);
      dVar1 = **(double **)((longlong)this + 0x28);
      ::FString::PrintfImpl(&local_58,L"Value for index %d matches.");
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar13.Data = local_58.Data.AllocatorInstance.Data;
      }
      uVar3 = *(undefined8 *)((longlong)this + 0x10);
      bVar5 = FAutomationTestBase::TestEqual
                        (this_00,(wchar_t *)FVar13.Data,dVar14,dVar1,__real_3f1a36e2e0000000);
      *(bool *)uVar3 = bVar5;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    **(int **)this = **(int **)this + 1;
  }
  return;
}

// PrepareMixedAndSelector @ 149ff7db0

/* WARNING: Type propagation algorithm not settling */

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
FPCGAttributeReduceTests::PrepareMixedAndSelector
          (FPCGAttributeReduceTests *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGAttributePropertyInputSelector *param_1)

{
  int iVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UPCGMetadata *this_00;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  UPCGBasePointData *pUVar11;
  FPCGMetadataDomain *pFVar12;
  FPCGMetadataAttribute<double> *pFVar13;
  UObject *pUVar14;
  FPCGMetadataAttribute<double> *pFVar15;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar16;
  long64 lVar17;
  longlong *plVar18;
  long64 *plVar19;
  FPCGDataPtrWrapper *this_01;
  FPCGDataPtrWrapper *this_02;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar20;
  double local_118;
  double local_110;
  FPCGMetadataAttribute<double> *local_108;
  FPCGMetadataAttribute<double> *local_100;
  longlong local_f8;
  FName local_f0;
  UPCGBasePointData *local_e8;
  UPCGParamData *local_e0;
  longlong local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  long64 local_c0;
  double local_b8 [2];
  FName local_a8;
  FPCGMetadataDomainID local_a0;
  FName local_88;
  FPCGMetadataDomainID local_80 [4];
  
  ::FName::FName(&local_f0,L"double");
  pUVar11 = PCGTestsCommon::CreateEmptyBasePointData();
  local_a8 = local_f0;
  local_a0.Flag = PCGMetadataDomainID::Default.Flag;
  local_a0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_a0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_a0.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_b8[0] = 0.0;
  local_e8 = pUVar11;
  pFVar12 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)pUVar11->_padding_,&local_a0);
  if (pFVar12 == (FPCGMetadataDomain *)0x0) {
    pFVar13 = (FPCGMetadataAttribute<double> *)0x0;
  }
  else {
    pFVar13 = FPCGMetadataDomain::CreateAttribute<double>(pFVar12,local_a8,local_b8,true,false);
  }
  local_108 = pFVar13;
  pUVar14 = GetTransientPackageAsObject();
  local_e0 = NewObject<UPCGParamData>(pUVar14);
  local_88 = local_f0;
  local_80[0].Flag = PCGMetadataDomainID::Default.Flag;
  local_80[0]._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_80[0].CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_80[0].DebugName = PCGMetadataDomainID::Default.DebugName;
  local_b8[1] = 0.0;
  pFVar12 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)local_e0->_padding_,local_80);
  if (pFVar12 == (FPCGMetadataDomain *)0x0) {
    pFVar15 = (FPCGMetadataAttribute<double> *)0x0;
  }
  else {
    pFVar15 = FPCGMetadataDomain::CreateAttribute<double>(pFVar12,local_88,local_b8 + 1,true,false);
  }
  local_100 = pFVar15;
  (**(code **)(pUVar11->_padding_ + 0x490))(pUVar11,5,1);
  (**(code **)(pUVar11->_padding_ + 0x4f8))(pUVar11,&local_d8,1);
  dVar8 = __real_3fb999999999999a;
  dVar7 = __real_3fc999999999999a;
  pTVar2 = &pFVar13->Values;
  pTVar20 = &pFVar15->Values;
  local_f8 = 0;
  iVar10 = 0;
  do {
    this_00 = (UPCGMetadata *)pUVar11->_padding_;
    if (local_c8 <= iVar10) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar16;
      }
    }
    if (iVar10 == iVar10 % local_cc) {
      plVar19 = (long64 *)((longlong)local_d0 * (longlong)(iVar10 % local_cc) + local_d8);
    }
    else {
      plVar19 = &local_c0;
    }
    UPCGMetadata::InitializeOnSet(this_00,plVar19,-1,(UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0);
    iVar1 = iVar10 + 1;
    local_118 = (double)iVar1 * dVar8;
    if (local_c8 <= iVar10) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar16;
      }
    }
    if (iVar10 == iVar10 % local_cc) {
      plVar18 = (longlong *)((longlong)local_d0 * (longlong)(iVar10 % local_cc) + local_d8);
    }
    else {
      plVar18 = &local_c0;
    }
    lVar4 = *plVar18;
    if (lVar4 == -1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemKey != PCGInvalidEntryKey",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                         ,0x24b,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar16;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar13->ValueLock);
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)&local_118) &&
       ((FScriptContainerElement *)&local_118 < pFVar5 + (longlong)(pFVar13->Values).ArrayMax * 8))
    {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar16;
      }
    }
    iVar10 = (pFVar13->Values).ArrayNum;
    if (iVar10 == (pFVar13->Values).ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,&(pFVar13->Values).ArrayMax);
    }
    (pFVar13->Values).ArrayNum = iVar10 + 1;
    *(double *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_118;
    iVar3 = local_108->ValueKeyOffset;
    ReleaseSRWLockExclusive((PSRWLOCK)&pFVar13->ValueLock);
    FPCGMetadataAttributeBase::SetValueFromValueKey
              ((FPCGMetadataAttributeBase *)local_108,lVar4,iVar3 + iVar10,false);
    local_110 = (double)iVar1 * dVar7;
    lVar17 = UPCGMetadata::AddEntry((UPCGMetadata *)local_e0->_padding_,-1);
    if (lVar17 == -1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemKey != PCGInvalidEntryKey",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                         ,0x24b,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar16;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar15->ValueLock);
    pFVar5 = (pTVar20->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)&local_110) &&
       ((FScriptContainerElement *)&local_110 < pFVar5 + (longlong)(pFVar15->Values).ArrayMax * 8))
    {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar16;
      }
    }
    iVar10 = (pFVar15->Values).ArrayNum;
    if (iVar10 == (pFVar15->Values).ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar20->AllocatorInstance,&(pFVar15->Values).ArrayMax);
    }
    (pFVar15->Values).ArrayNum = iVar10 + 1;
    *(double *)((pTVar20->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_110;
    iVar3 = local_100->ValueKeyOffset;
    ReleaseSRWLockExclusive((PSRWLOCK)&pFVar15->ValueLock);
    FPCGMetadataAttributeBase::SetValueFromValueKey
              ((FPCGMetadataAttributeBase *)local_100,lVar17,iVar3 + iVar10,false);
    pUVar11 = local_e8;
    local_f8 = local_f8 + 1;
    iVar10 = iVar1;
  } while (iVar1 < 5);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar10 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x878,&__return_storage_ptr__->AllocatorInstance,
                      &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar10 + 1;
  this_02 = (FPCGDataPtrWrapper *)
            ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x78);
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
  iVar10 = __return_storage_ptr__->ArrayNum;
  if (iVar10 == __return_storage_ptr__->ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar10 + 1;
  this_01 = (FPCGDataPtrWrapper *)
            ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x78);
  this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_01->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_01->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
  this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar11);
  FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)local_e0);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)param_1,local_f0,true);
  return __return_storage_ptr__;
}

// PrepareParamAndSelectors @ 149ff83d0

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
FPCGAttributeReduceTests::PrepareParamAndSelectors
          (FPCGAttributeReduceTests *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGAttributePropertyInputSelector *param_1,FPCGAttributePropertyInputSelector *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  UPCGParamData *pUVar10;
  FPCGMetadataDomain *pFVar11;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar12;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar13;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar14;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar15;
  FPCGDataPtrWrapper *this_00;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar16;
  uint local_d8 [2];
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *local_d0;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *local_c8;
  long64 local_c0;
  UPCGParamData *local_b8;
  FName local_b0;
  FName local_a8;
  double local_a0;
  double dStack_98;
  FName local_88;
  FPCGMetadataDomainID local_80;
  FName local_68;
  FPCGMetadataDomainID local_60 [2];
  
  ::FName::FName(&local_b0,L"int");
  ::FName::FName(&local_a8,L"vec2");
  pUVar9 = GetTransientPackageAsObject();
  pUVar10 = NewObject<UPCGParamData>(pUVar9);
  local_88 = local_b0;
  pFVar15 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
  local_80.Flag = PCGMetadataDomainID::Default.Flag;
  local_80._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_80.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_80.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_d8[1] = 0;
  local_b8 = pUVar10;
  pFVar11 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)pUVar10->_padding_,&local_80);
  pFVar12 = pFVar15;
  if (pFVar11 != (FPCGMetadataDomain *)0x0) {
    pFVar12 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)
              FPCGMetadataDomain::CreateAttribute<int>
                        (pFVar11,local_88,(int *)(local_d8 + 1),true,false);
  }
  local_68 = local_a8;
  local_60[0].Flag = PCGMetadataDomainID::Default.Flag;
  local_60[0]._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_60[0].CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_60[0].DebugName = PCGMetadataDomainID::Default.DebugName;
  local_c8 = pFVar12;
  pFVar11 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)pUVar10->_padding_,local_60);
  pFVar13 = pFVar15;
  if (pFVar11 != (FPCGMetadataDomain *)0x0) {
    pFVar13 = FPCGMetadataDomain::CreateAttribute<UE::Math::TVector2<double>_>
                        (pFVar11,local_68,&UE::Math::TVector2<double>::ZeroVector,true,false);
  }
  dVar6 = __real_3ff0000000000000;
  local_d8[0] = 0;
  pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar12->Values;
  pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar13->Values;
  pFVar16 = pFVar12;
  local_d0 = pFVar13;
  do {
    local_a0 = (double)(int)pFVar15 + (double)(int)pFVar15;
    dStack_98 = local_a0 + dVar6;
    local_c0 = UPCGMetadata::AddEntry((UPCGMetadata *)local_b8->_padding_,-1);
    if ((local_c0 == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemKey != PCGInvalidEntryKey",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x24b,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar12->ValueLock);
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_d8) &&
        ((FScriptContainerElement *)local_d8 <
         pFVar4 + (longlong)((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar12->Values)->ArrayMax
                  * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
    iVar8 = ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar12->Values)->ArrayNum;
    if (iVar8 == ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar12->Values)->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pTVar1,
                         &((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar12->Values)->ArrayMax);
    }
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar12->Values)->ArrayNum = iVar8 + 1;
    *(uint *)(pFVar4 + (longlong)iVar8 * 4) = local_d8[0];
    iVar3 = *(int *)((longlong)&(pFVar16->DefaultValue).field0_0x0 + 4);
    ReleaseSRWLockExclusive((PSRWLOCK)&pFVar12->ValueLock);
    FPCGMetadataAttributeBase::SetValueFromValueKey
              ((FPCGMetadataAttributeBase *)local_c8,local_c0,iVar3 + iVar8,false);
    if ((local_c0 == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemKey != PCGInvalidEntryKey",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x24b,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar13->ValueLock);
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_a0) &&
        ((FScriptContainerElement *)&local_a0 <
         pFVar4 + (longlong)((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar13->Values)->ArrayMax
                  * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar14;
    }
    iVar8 = ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar13->Values)->ArrayNum;
    if (iVar8 == ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar13->Values)->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)pTVar2,
                         &((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar13->Values)->ArrayMax);
    }
    ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar13->Values)->ArrayNum = iVar8 + 1;
    pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(double *)pFVar4 = local_a0;
    *(double *)(pFVar4 + 8) = dStack_98;
    iVar3 = local_d0->ValueKeyOffset;
    ReleaseSRWLockExclusive((PSRWLOCK)&pFVar13->ValueLock);
    FPCGMetadataAttributeBase::SetValueFromValueKey
              ((FPCGMetadataAttributeBase *)local_d0,local_c0,iVar3 + iVar8,false);
    local_d8[0] = local_d8[0] + 1;
    pFVar15 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)(ulonglong)local_d8[0];
    pFVar16 = local_c8;
  } while ((int)local_d8[0] < 5);
  __return_storage_ptr__->ArrayMax = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x878,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar8 + 1;
  this_00 = (FPCGDataPtrWrapper *)
            ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x78);
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
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)local_b8);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)param_1,local_b0,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)param_2,local_a8,true);
  return __return_storage_ptr__;
}

// PreparePointsAndSelectors @ 149ff8820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
FPCGAttributeReduceTests::PreparePointsAndSelectors
          (FPCGAttributeReduceTests *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGAttributePropertyInputSelector *param_1,FPCGAttributePropertyInputSelector *param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  int iVar20;
  UPCGBasePointData *pUVar21;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar22;
  undefined1 (*pauVar23) [16];
  float *pfVar24;
  int *piVar25;
  FPCGDataPtrWrapper *this_00;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  double dVar29;
  undefined1 auStack_1c8 [32];
  ulonglong local_1a8;
  longlong local_1a0;
  longlong local_198;
  int local_190;
  int local_18c;
  int local_188;
  float local_184;
  longlong local_180;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  longlong local_168;
  int local_160;
  int local_15c;
  int local_158;
  undefined1 local_148 [96];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pUVar21 = PCGTestsCommon::CreateEmptyBasePointData();
  (**(code **)(pUVar21->_padding_ + 0x490))(pUVar21,5,1);
  (**(code **)(pUVar21->_padding_ + 0x4c0))(pUVar21,&local_168,1);
  (**(code **)(pUVar21->_padding_ + 0x4c8))(pUVar21,&local_198,1);
  (**(code **)(pUVar21->_padding_ + 0x4f0))(pUVar21,&local_180,1);
  dVar18 = __real_3fb999999999999a;
  dVar17 = __real_4008000000000000;
  dVar16 = __real_4000000000000000;
  dVar15 = __real_3ff0000000000000;
  uVar26 = 0;
  uVar28 = uVar26;
  do {
    fVar8 = GlobalVectorConstants::Float0001.m128_f32[0];
    iVar20 = (int)uVar26;
    fVar4 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
    dVar29 = (double)iVar20 * dVar17;
    fVar9 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar7 = GlobalVectorConstants::Float1110.m128_f32[3];
    if (local_158 <= iVar20) {
      local_1a8 = uVar28;
      local_1a0 = (longlong)local_158;
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar19) {
        pcVar1 = (code *)swi(3);
        pTVar22 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar22;
      }
    }
    if (iVar20 == iVar20 % local_15c) {
      pauVar23 = (undefined1 (*) [16])
                 ((longlong)local_160 * (longlong)(iVar20 % local_15c) + local_168);
    }
    else {
      pauVar23 = (undefined1 (*) [16])local_148;
    }
    auVar11._8_4_ = SUB84((double)fVar4,0);
    auVar11._0_8_ = (double)fVar8;
    auVar11._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
    *pauVar23 = auVar11;
    auVar12._8_4_ = SUB84((double)fVar5,0);
    auVar12._0_8_ = (double)fVar2;
    auVar12._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
    pauVar23[1] = auVar12;
    auVar10._8_4_ = SUB84(dVar29 + dVar15,0);
    auVar10._0_8_ = dVar29;
    auVar10._12_4_ = (int)((ulonglong)(dVar29 + dVar15) >> 0x20);
    pauVar23[2] = auVar10;
    *(double *)pauVar23[3] = dVar29 + dVar16;
    *(undefined8 *)(pauVar23[3] + 8) = 0;
    auVar13._8_4_ = SUB84((double)fVar6,0);
    auVar13._0_8_ = (double)fVar9;
    auVar13._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
    pauVar23[4] = auVar13;
    auVar14._8_4_ = SUB84((double)fVar7,0);
    auVar14._0_8_ = (double)fVar3;
    auVar14._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
    pauVar23[5] = auVar14;
    if (local_188 <= iVar20) {
      local_1a8 = uVar28;
      local_1a0 = (longlong)local_188;
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar19) {
        pcVar1 = (code *)swi(3);
        pTVar22 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar22;
      }
    }
    if (iVar20 == iVar20 % local_18c) {
      pfVar24 = (float *)((longlong)local_190 * (longlong)(iVar20 % local_18c) + local_198);
    }
    else {
      pfVar24 = &local_184;
    }
    uVar27 = iVar20 + 1;
    *pfVar24 = (float)((double)(int)uVar27 * dVar18);
    if (local_170 <= iVar20) {
      local_1a8 = uVar28;
      local_1a0 = (longlong)local_170;
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar19) {
        pcVar1 = (code *)swi(3);
        pTVar22 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar22;
      }
    }
    if (iVar20 == iVar20 % local_174) {
      piVar25 = (int *)((longlong)local_178 * (longlong)(iVar20 % local_174) + local_180);
    }
    else {
      piVar25 = &local_16c;
    }
    uVar28 = uVar28 + 1;
    *piVar25 = iVar20;
    uVar26 = (ulonglong)uVar27;
  } while ((int)uVar27 < 5);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = 0;
  __return_storage_ptr__->ArrayNum = 0;
  iVar20 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x878,&__return_storage_ptr__->AllocatorInstance,
                      &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar20 + 1;
  this_00 = (FPCGDataPtrWrapper *)
            ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar20 * 0x78);
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
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar21);
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)param_1,Density,true);
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)param_2,Position,true);
  return __return_storage_ptr__;
}

// PrepareSplineAndSelectors @ 149ff8be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
FPCGAttributeReduceTests::PrepareSplineAndSelectors
          (FPCGAttributeReduceTests *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGAttributePropertyInputSelector *param_1,FPCGAttributePropertyInputSelector *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  UPCGSplineData *this_00;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<int> *this_02;
  long64 lVar12;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar13;
  FPCGMetadataAttribute<int> *pFVar14;
  FName *pFVar15;
  longlong *plVar16;
  longlong lVar17;
  FPCGDataPtrWrapper *this_03;
  undefined1 auStackY_1f8 [32];
  uint local_1a8 [2];
  ForAnyElementType local_1a0;
  undefined8 local_198;
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> local_190;
  int local_180 [4];
  FName local_170;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_168;
  FPCGAttributePropertySelector *local_160;
  FPCGAttributePropertySelector *local_158;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_150;
  FName local_138;
  FPCGMetadataDomainID local_130;
  double local_118;
  double dStack_110;
  double local_108;
  FName local_100;
  undefined1 local_f8 [128];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_168 = __return_storage_ptr__;
  local_160 = (FPCGAttributePropertySelector *)param_2;
  local_158 = (FPCGAttributePropertySelector *)param_1;
  ::FName::FName(&local_170,L"int");
  pUVar10 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar10,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar11 = Z_Construct_UClass_UPCGSplineData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_f8,pUVar11);
  local_f8._8_8_ = pUVar10;
  this_00 = (UPCGSplineData *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_f8);
  if (local_f8._64_8_ != 0) {
    plVar16 = (longlong *)(local_f8 + 0x50);
    if ((longlong *)local_f8._104_8_ != (longlong *)0x0) {
      plVar16 = (longlong *)local_f8._104_8_;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  pFVar14 = (FPCGMetadataAttribute<int> *)0x0;
  local_138 = local_170;
  local_130.Flag = PCGMetadataDomainID::Default.Flag;
  local_130._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_130.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_130.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_180[0] = 0;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain
                      (*(UPCGMetadata **)&this_00->field_0x38,&local_130);
  this_02 = pFVar14;
  if (this_01 != (FPCGMetadataDomain *)0x0) {
    this_02 = FPCGMetadataDomain::CreateAttribute<int>(this_01,local_138,local_180,true,false);
  }
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x88,8,5,&local_190.AllocatorInstance,0,&local_190.ArrayMax);
  if (local_198._4_4_ < 5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,5,&local_1a0,(int)local_198,(int *)((longlong)&local_198 + 4));
  }
  dVar7 = __real_4008000000000000;
  dVar6 = __real_4000000000000000;
  dVar5 = __real_3ff0000000000000;
  pTVar1 = &this_02->Values;
  local_1a8[0] = 0;
  do {
    local_118 = (double)(int)pFVar14 * dVar7;
    dStack_110 = local_118 + dVar5;
    local_108 = local_118 + dVar6;
    lVar12 = UPCGMetadata::AddEntry(*(UPCGMetadata **)&this_00->field_0x38,-1);
    iVar9 = (int)local_198;
    if ((int)local_198 == local_198._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_1a0,(int *)((longlong)&local_198 + 4));
    }
    local_198 = CONCAT44(local_198._4_4_,iVar9 + 1);
    *(long64 *)(local_1a0.Data + (longlong)iVar9 * 8) = lVar12;
    if ((lVar12 == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemKey != PCGInvalidEntryKey",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                           ,0x24b,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar13;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this_02->ValueLock);
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_1a8) &&
        ((FScriptContainerElement *)local_1a8 < pFVar3 + (longlong)(this_02->Values).ArrayMax * 4))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar13;
    }
    iVar9 = (this_02->Values).ArrayNum;
    if (iVar9 == (this_02->Values).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar1->AllocatorInstance,&(this_02->Values).ArrayMax);
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    (this_02->Values).ArrayNum = iVar9 + 1;
    *(uint *)(pFVar3 + (longlong)iVar9 * 4) = local_1a8[0];
    iVar2 = this_02->ValueKeyOffset;
    ReleaseSRWLockExclusive((PSRWLOCK)&this_02->ValueLock);
    FPCGMetadataAttributeBase::SetValueFromValueKey
              ((FPCGMetadataAttributeBase *)this_02,lVar12,iVar2 + iVar9,false);
    iVar9 = local_190.ArrayNum;
    if (local_190.ArrayNum == local_190.ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x888,&local_190.AllocatorInstance,&local_190.ArrayMax);
    }
    local_190.ArrayNum = iVar9 + 1;
    lVar17 = (longlong)iVar9 * 0x88;
    *(float *)(local_190.AllocatorInstance.Data + lVar17) = (float)(int)local_1a8[0];
    *(double *)(local_190.AllocatorInstance.Data + lVar17 + 8) = local_118;
    *(double *)(local_190.AllocatorInstance.Data + lVar17 + 8 + 8) = dStack_110;
    *(double *)(local_190.AllocatorInstance.Data + lVar17 + 0x18) = local_108;
    *(undefined8 *)(local_190.AllocatorInstance.Data + lVar17 + 0x20) = 0;
    *(undefined8 *)(local_190.AllocatorInstance.Data + lVar17 + 0x28) = 0;
    *(undefined8 *)(local_190.AllocatorInstance.Data + lVar17 + 0x30) = 0;
    *(undefined8 *)(local_190.AllocatorInstance.Data + lVar17 + 0x38) = 0;
    *(undefined8 *)(local_190.AllocatorInstance.Data + lVar17 + 0x40) = 0;
    *(undefined8 *)(local_190.AllocatorInstance.Data + lVar17 + 0x48) = 0;
    *(undefined8 *)(local_190.AllocatorInstance.Data + lVar17 + 0x50) = 0;
    *(undefined8 *)(local_190.AllocatorInstance.Data + lVar17 + 0x58) = 0;
    *(undefined8 *)(local_190.AllocatorInstance.Data + lVar17 + 0x60) = 0;
    *(undefined8 *)(local_190.AllocatorInstance.Data + lVar17 + 0x68) = 0x3ff0000000000000;
    *(undefined8 *)(local_190.AllocatorInstance.Data + lVar17 + 0x70) = 0x3ff0000000000000;
    *(undefined8 *)(local_190.AllocatorInstance.Data + lVar17 + 0x78) = 0x3ff0000000000000;
    local_190.AllocatorInstance.Data[lVar17 + 0x80] = (FScriptContainerElement)0x1;
    local_1a8[0] = local_1a8[0] + 1;
    pFVar14 = (FPCGMetadataAttribute<int> *)(ulonglong)local_1a8[0];
  } while ((int)local_1a8[0] < 5);
  local_150.AllocatorInstance.Data = local_1a0.Data;
  local_150.ArrayNum = (int)local_198;
  local_150.ArrayMax = local_198._4_4_;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198 = 0;
  UPCGSplineData::Initialize
            (this_00,&local_190,false,&UE::Math::TTransform<double>::Identity,&local_150);
  pTVar13 = local_168;
  local_168->ArrayMax = 0;
  (local_168->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_168->ArrayNum = 0;
  iVar9 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x878,&local_168->AllocatorInstance,&local_168->ArrayMax);
  pTVar13->ArrayNum = iVar9 + 1;
  this_03 = (FPCGDataPtrWrapper *)((pTVar13->AllocatorInstance).Data + (longlong)iVar9 * 0x78);
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
  FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)this_00);
  FPCGAttributePropertySelector::SetAttributeName(local_160,local_170,true);
  pFVar15 = ::FName::FName(&local_100,L"Position");
  FPCGAttributePropertySelector::SetPropertyName(local_158,*pFVar15,true);
  if (local_1a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data);
  }
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  return pTVar13;
}

