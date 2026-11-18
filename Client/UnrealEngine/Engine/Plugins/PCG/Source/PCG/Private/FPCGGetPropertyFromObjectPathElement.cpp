// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// operator() @ 149beeb50

void __thiscall
`FPCGGetPropertyFromObjectPathElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,UPCGData *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPCGDataPtrWrapper *this_00;
  uint uVar6;
  
  lVar1 = *(longlong *)this;
  iVar5 = *(int *)(lVar1 + 0x40);
  if (iVar5 == *(int *)(lVar1 + 0x44)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)(lVar1 + 0x38),(int *)(lVar1 + 0x44));
  }
  *(int *)(lVar1 + 0x40) = iVar5 + 1;
  this_00 = (FPCGDataPtrWrapper *)(*(longlong *)(lVar1 + 0x38) + (longlong)iVar5 * 0x78);
  this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[5].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined2 *)((longlong)&this_00[6].WeakData.WeakPtr.ObjectIndex + 2) = 0;
  (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)
   &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1))->Elements = 0;
  this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
  this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[5].WeakData.WeakPtr.ObjectIndex = 0;
  this_00[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined2 *)&this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this_00,param_1);
  this_00[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultOutputLabel;
  if (-1 < param_2) {
    plVar2 = *(longlong **)((longlong)this + 8);
    uVar6 = 0;
    if (param_2 < (int)plVar2[1]) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
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
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1),
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               ((longlong)param_2 * 0x78 + *plVar2 + 0x10));
  }
  return;
}

// CanExecuteOnlyOnMainThread @ 149c018b0

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
FPCGGetPropertyFromObjectPathElement::CanExecuteOnlyOnMainThread
          (FPCGGetPropertyFromObjectPathElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149c0b890

/* WARNING: Removing unreachable block (ram,0x000149c0c0b2) */
/* WARNING: Removing unreachable block (ram,0x000149c0c0c2) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGGetPropertyFromObjectPathElement::ExecuteInternal
          (FPCGGetPropertyFromObjectPathElement *this,FPCGContext *param_1)

{
  int *piVar1;
  FSoftObjectPath *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FPCGContext *pFVar12;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  UPCGGetPropertyFromObjectPathSettings *pUVar18;
  FText *pFVar19;
  FText *pFVar20;
  FTextFormat *pFVar21;
  UPCGParamData *pUVar22;
  UObject *pUVar23;
  FString *pFVar24;
  UPCGParamData *pUVar25;
  FName FVar26;
  ForAnyElementType FVar27;
  ulonglong uVar28;
  FPCGDataPtrWrapper *this_00;
  FSoftObjectPath *this_01;
  bool bVar29;
  undefined1 local_res18 [8];
  uint local_res20;
  UPCGParamData *local_2f0;
  FPCGContext *local_2e0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_2d8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_2d0;
  FName local_2c0;
  FName local_2b8;
  FName local_2b0;
  FString local_2a8;
  TSharedPtr<FCulture,1> local_298;
  FString local_288;
  FString local_270;
  FString local_260;
  FText local_250;
  FText local_240;
  FString local_230;
  FString local_220;
  FText local_210;
  FText local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FText local_1c0;
  FString local_1b0;
  FString local_1a0;
  FText local_190;
  FText local_180;
  FString local_170;
  FString local_160;
  FText local_150;
  FText local_140;
  FExtractorParameters local_128;
  FText local_b8;
  FTextFormat local_a8;
  FText local_98;
  FTextFormat local_88;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  FTextFormat local_48;
  
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId175,"FPCGGetPropertyFromObjectPathElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetPropertyFromObjectPath.cpp"
               ,0xaf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId175);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetPropertyFromObjectPath.cpp"
                          ,0xb1,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar15 = (*pcVar4)();
    return (bool)uVar15;
  }
  pUVar18 = FPCGContext::GetInputSettings<UPCGGetPropertyFromObjectPathSettings>(param_1);
  if ((pUVar18 == (UPCGGetPropertyFromObjectPathSettings *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetPropertyFromObjectPath.cpp"
                          ,0xb5,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar15 = (*pcVar4)();
    return (bool)uVar15;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_2d0,&PCGPinConstants::DefaultInputLabel);
  local_res20 = *(uint *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data;
  uVar28 = (ulonglong)(int)local_res20;
  local_2d8 = &local_2d0;
  this_01 = (FSoftObjectPath *)param_1[1].InputData.InactiveOutputPinBitmask;
  local_2f0 = (UPCGParamData *)0x0;
  pFVar2 = (FSoftObjectPath *)((longlong)this_01 + uVar28 * 0x28);
  pUVar22 = (UPCGParamData *)0x0;
  local_2e0 = param_1;
  do {
    while( true ) {
      while( true ) {
        if (*(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data != (int)uVar28) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TTuple<FSoftObjectPath,int,int>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (this_01 == pFVar2) {
          DestructItems<FPCGTaggedData,int>
                    ((FPCGTaggedData *)local_2d0.AllocatorInstance.Data,local_2d0.ArrayNum);
          if ((FPCGTaggedData *)local_2d0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
            FMemory::Free(local_2d0.AllocatorInstance.Data);
          }
          if (bVar29) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          return true;
        }
        uVar3 = this_01[1].AssetPath.PackageName.ComparisonIndex.Value;
        if (((this_01->AssetPath).PackageName != (FName)0x0) || (pUVar18->bPersistAllData == false))
        break;
        if ((pUVar18->bSilenceErrorOnEmptyObjectPath == false) && (1 < (byte)LogPCG._0_1_)) {
          local_298.Object = (FCulture *)0x0;
          local_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar19 = FText::AsNumber(&local_b8,uVar3,(FNumberFormattingOptions *)0x0,&local_298);
          pFVar20 = FText::AsLocalizable_Advanced_LocText
                              (&local_240,L"PCGGetPropertyFromObjectPathElement",L"EmptyData",
                               L"Empty data on index {0}");
          pFVar21 = FTextFormat::FTextFormat(&local_a8,pFVar20,Default);
          pFVar19 = FText::Format<FText>(&local_250,pFVar21,pFVar19);
          FText::ToString(pFVar19);
          if (param_1 != (FPCGContext *)0x0) {
            FPCGContext::GetTaskName(param_1,&local_260);
            bVar6 = true;
            bVar5 = true;
            FPCGContext::GetExecutionSourceName(param_1,&local_270);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if ((bVar6) &&
             (bVar6 = false, local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_270.Data.AllocatorInstance.Data);
          }
          if ((bVar5) &&
             (bVar5 = false, local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_260.Data.AllocatorInstance.Data);
          }
          if (local_250.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_250.TextData.Reference + 0x10))();
          }
          if (local_240.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_240.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_298.SharedReferenceCount.ReferenceController);
        }
        if (pUVar22 == (UPCGParamData *)0x0) {
          pUVar22 = FPCGContext::NewObject_AnyThread<UPCGParamData>(param_1);
          local_2f0 = pUVar22;
        }
        pFVar12 = local_2e0;
        piVar1 = &(local_2e0->OutputData).TaggedData.ArrayMax;
        iVar16 = (local_2e0->OutputData).TaggedData.ArrayNum;
        if (iVar16 == *piVar1) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)&local_2e0->OutputData,piVar1);
        }
        (pFVar12->OutputData).TaggedData.ArrayNum = iVar16 + 1;
        this_00 = (FPCGDataPtrWrapper *)
                  ((pFVar12->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar16 * 0x78
                  );
        this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_00[5].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined2 *)((longlong)&this_00[6].WeakData.WeakPtr.ObjectIndex + 2) = 0;
        (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        *(undefined8 *)
         &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1))->Elements
             = 0;
        this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
        this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
        this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_00[5].WeakData.WeakPtr.ObjectIndex = 0;
        this_00[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined2 *)&this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar22);
        pTVar13 = local_2d8;
        this_00[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
             (FObjectPtr_u_0)PCGPinConstants::DefaultOutputLabel;
        if (-1 < (int)uVar3) {
          uVar17 = 0;
          if ((int)uVar3 < local_2d8->ArrayNum) {
            uVar17 = ~uVar3 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            uVar15 = (*pcVar4)();
            return (bool)uVar15;
          }
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1),
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     ((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x78 + 0x10));
        }
        this_01 = (FSoftObjectPath *)&this_01[1].AssetPath.AssetName;
        uVar28 = (ulonglong)local_res20;
      }
      pUVar23 = FSoftObjectPath::ResolveObject(this_01);
      pUVar22 = local_2f0;
      if (pUVar23 != (UObject *)0x0) break;
      if ((byte)LogPCG._0_1_ < 2) {
        this_01 = (FSoftObjectPath *)&this_01[1].AssetPath.AssetName;
        uVar28 = (ulonglong)local_res20;
      }
      else {
        pFVar24 = FSoftObjectPath::ToString(this_01,&local_1f0);
        pFVar19 = FText::FromString(&local_98,pFVar24);
        pFVar20 = FText::AsLocalizable_Advanced_LocText
                            (&local_200,L"PCGGetPropertyFromObjectPathElement",L"FailedToLoad",
                             L"Failed to load object {0}");
        pFVar21 = FTextFormat::FTextFormat(&local_88,pFVar20,Default);
        pFVar19 = FText::Format<FText>(&local_210,pFVar21,pFVar19);
        FText::ToString(pFVar19);
        if (param_1 != (FPCGContext *)0x0) {
          FPCGContext::GetTaskName(param_1,&local_220);
          bVar8 = true;
          bVar7 = true;
          FPCGContext::GetExecutionSourceName(param_1,&local_230);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((bVar7) &&
           (bVar7 = false, local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
        if ((bVar8) &&
           (bVar8 = false, local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
        }
        if (local_210.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_210.TextData.Reference + 0x10))();
        }
        if (local_200.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
        }
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
LAB_149c0be11:
        this_01 = (FSoftObjectPath *)&this_01[1].AssetPath.AssetName;
        uVar28 = (ulonglong)local_res20;
      }
    }
    FPCGAttributePropertySelector::GetName
              ((FPCGAttributePropertySelector *)&pUVar18->OutputAttributeName);
    FVar26 = local_2c0;
    bVar14 = pUVar18->bForceObjectAndStructExtraction;
    pFVar24 = ::FName::ToString(&pUVar18->PropertyName,&local_1e0);
    PCGPropertyHelpers::FExtractorParameters::FExtractorParameters
              (&local_128,pUVar23,*(UStruct **)&pUVar23->field_0x10,pFVar24,FVar26,bVar14,true);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    local_128.bStrictSanitizeOutputAttributeNames = pUVar18->bSanitizeOutputAttributeName;
    pUVar25 = PCGPropertyHelpers::ExtractPropertyAsAttributeSet
                        (&local_128,param_1,
                         (TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>
                          *)0x0,false);
    if (pUVar25 == (UPCGParamData *)0x0) {
      if (local_128.PropertySelectors.ArrayNum == 0) {
LAB_149c0c10e:
        if ((byte)LogPCG._0_1_ < 2) goto LAB_149c0c285;
        local_2b0.ComparisonIndex.Value = *(uint *)&pUVar23->field_0x18;
        local_2b0.Number = *(uint *)&pUVar23->field_0x1c;
        ::FName::ToString(&local_2b0,&local_2a8);
        pFVar19 = FText::FromString(&local_58,&local_2a8);
        pFVar20 = FText::AsLocalizable_Advanced_LocText
                            (&local_140,L"PCGGetPropertyFromObjectPathElement",
                             L"FailedToExtractObject",L"Fail to extract object {0}.");
        pFVar21 = FTextFormat::FTextFormat(&local_48,pFVar20,Default);
        pFVar19 = FText::Format<FText>(&local_150,pFVar21,pFVar19);
        FText::ToString(pFVar19);
        if (param_1 != (FPCGContext *)0x0) {
          FPCGContext::GetTaskName(param_1,&local_160);
          bVar11 = true;
          bVar10 = true;
          FPCGContext::GetExecutionSourceName(param_1,&local_170);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((bVar10) &&
           (bVar10 = false, local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
           ) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        if ((bVar11) &&
           (bVar11 = false, local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
           ) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        if (local_150.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
        }
        FVar27.Data = local_2a8.Data.AllocatorInstance.Data;
        if (local_140.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
          FVar27.Data = local_2a8.Data.AllocatorInstance.Data;
        }
      }
      else {
        if ((local_128.PropertySelectors.ArrayNum < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        FVar26 = FPCGAttributePropertySelector::GetName
                           ((FPCGAttributePropertySelector *)
                            local_128.PropertySelectors.AllocatorInstance.Data);
        if (*(longlong *)FVar26 == 0) goto LAB_149c0c10e;
        if ((byte)LogPCG._0_1_ < 2) goto LAB_149c0c285;
        local_2b8.ComparisonIndex.Value = *(uint *)&pUVar23->field_0x18;
        local_2b8.Number = *(uint *)&pUVar23->field_0x1c;
        ::FName::ToString(&local_2b8,&local_288);
        pFVar19 = FText::FromString(&local_78,&local_288);
        if ((local_128.PropertySelectors.ArrayNum < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        pFVar24 = FPCGAttributePropertySelector::ToString
                            ((FPCGAttributePropertySelector *)
                             local_128.PropertySelectors.AllocatorInstance.Data,&local_1d0,false);
        FText::FromString(&local_1c0,pFVar24);
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
        pFVar20 = FText::AsLocalizable_Advanced_LocText
                            (&local_180,L"PCGGetPropertyFromObjectPathElement",L"FailedToExtract",
                             L"Fail to extract the property \'{0}\' on object {1}.");
        pFVar21 = FTextFormat::FTextFormat(&local_68,pFVar20,Default);
        pFVar19 = FText::Format<FText,FText>(&local_190,pFVar21,&local_1c0,pFVar19);
        FText::ToString(pFVar19);
        if (param_1 != (FPCGContext *)0x0) {
          FPCGContext::GetTaskName(param_1,&local_1a0);
          bVar9 = true;
          FPCGContext::GetExecutionSourceName(param_1,&local_1b0);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((bVar9) &&
           (bVar9 = false, local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if (local_190.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
        }
        FVar27.Data = local_288.Data.AllocatorInstance.Data;
        if (local_180.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
          FVar27.Data = local_288.Data.AllocatorInstance.Data;
        }
      }
      if (FVar27.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar27.Data);
      }
    }
    else {
      `FPCGGetPropertyFromObjectPathElement::ExecuteInternal'::__l2::<lambda_1>::operator()
                (&local_2e0,(UPCGData *)pUVar25,uVar3);
    }
LAB_149c0c285:
    DestructItems<FPCGAttributePropertySelector,int>
              ((FPCGAttributePropertySelector *)local_128.PropertySelectors.AllocatorInstance.Data,
               local_128.PropertySelectors.ArrayNum);
    if ((FPCGAttributePropertySelector *)local_128.PropertySelectors.AllocatorInstance.Data !=
        (FPCGAttributePropertySelector *)0x0) {
      FMemory::Free(local_128.PropertySelectors.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_128.PropertySelector.ExtraNames.AllocatorInstance.Data,
               local_128.PropertySelector.ExtraNames.ArrayNum);
    if (local_128.PropertySelector.ExtraNames.AllocatorInstance.Data ==
        (FScriptContainerElement *)0x0) goto LAB_149c0be11;
    FMemory::Free(local_128.PropertySelector.ExtraNames.AllocatorInstance.Data);
    uVar28 = (ulonglong)local_res20;
    this_01 = (FSoftObjectPath *)&this_01[1].AssetPath.AssetName;
  } while( true );
}

// IsCacheable @ 149c2d3f0

bool __thiscall
FPCGGetPropertyFromObjectPathElement::IsCacheable
          (FPCGGetPropertyFromObjectPathElement *this,UPCGSettings *param_1)

{
  return false;
}

// PrepareDataInternal @ 149c2f560

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
FPCGGetPropertyFromObjectPathElement::PrepareDataInternal
          (FPCGGetPropertyFromObjectPathElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPCGGetPropertyFromObjectPathSettings *pUVar4;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId157,"FPCGGetPropertyFromObjectPathElement::PrepareData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetPropertyFromObjectPath.cpp"
               ,0x9d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId157);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetPropertyFromObjectPath.cpp"
                         ,0x9f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar4 = FPCGContext::GetInputSettings<UPCGGetPropertyFromObjectPathSettings>(param_1);
  if ((pUVar4 == (UPCGGetPropertyFromObjectPathSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetPropertyFromObjectPath.cpp"
                         ,0xa2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = FPCGLoadObjectsFromPathContext::InitializeAndRequestLoad
                    ((FPCGLoadObjectsFromPathContext *)param_1,PCGPinConstants::DefaultInputLabel,
                     &pUVar4->InputSource,&pUVar4->ObjectPathsToExtract,pUVar4->bPersistAllData,
                     pUVar4->bSilenceErrorOnEmptyObjectPath,pUVar4->bSynchronousLoad);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

